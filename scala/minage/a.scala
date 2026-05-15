// ============================================================
//   MINAGE BLOCKCHAIN -- Scala 2 (Compatible toutes versions)
//   Commande : scalac a.scala
//   execute  : scala a
// ============================================================

import java.security.MessageDigest
import java.time.LocalDateTime
import java.time.format.DateTimeFormatter
import scala.annotation.tailrec

// ─────────────────────────────────────────────────────────────
//  MODELE DE DONNEES
// ─────────────────────────────────────────────────────────────

// CORRECTION 1 : timestamp n'a PAS de valeur par defaut dans le case class.
// Auparavant, "LocalDateTime.now()" etait evalue une seule fois au chargement
// de la classe, donnant le meme horodatage a tous les blocs.
// On passe desormais le timestamp explicitement lors de la construction.
case class Block(
  index     : Int,
  data      : String,
  previous  : String,
  nonce     : Int,
  hash      : String,
  timestamp : LocalDateTime
)

// ─────────────────────────────────────────────────────────────
//  OBJET PRINCIPAL
// ─────────────────────────────────────────────────────────────

object a {

  private val fmt = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss")

  // ──────────────────────────────────────────────────────────
  //  SHA-256
  // ──────────────────────────────────────────────────────────

  def sha256(s: String): String = {
    val md    = MessageDigest.getInstance("SHA-256")
    val bytes = md.digest(s.getBytes("UTF-8"))
    bytes.map("%02x".format(_)).mkString
  }

  // ──────────────────────────────────────────────────────────
  //  MINAGE
  // ──────────────────────────────────────────────────────────

  @tailrec
  def mineLoop(index: Int, data: String, previous: String,
               difficulty: Int, nonce: Int): Block = {
    val raw = s"$index|$data|$previous|$nonce"
    val h   = sha256(raw)
    if (h.startsWith("0" * difficulty)) {
      // CORRECTION 1 (suite) : on capture LocalDateTime.now() ici,
      // au moment exact ou le bloc est mine.
      Block(index, data, previous, nonce, h, LocalDateTime.now())
    } else {
      mineLoop(index, data, previous, difficulty, nonce + 1)
    }
  }

  def mineBlock(index: Int, data: String, previous: String, difficulty: Int): Block = {
    println(s"  Minage bloc #$index...")
    val b = mineLoop(index, data, previous, difficulty, 0)
    println(s"  Nonce trouve : ${b.nonce}  hash : ${b.hash.take(20)}...")
    b
  }

  // ──────────────────────────────────────────────────────────
  //  BLOCKCHAIN
  // ──────────────────────────────────────────────────────────

  // CORRECTION 2 : on utilise un accumulateur Vector pour eviter le cout
  // quadratique de "list :+ element" (ajout en fin de liste immutable).
  def createChain(entries: List[String], difficulty: Int): Vector[Block] = {
    val genesis = mineBlock(0, "Genesis Block", "0" * 64, difficulty)
    entries.zipWithIndex.foldLeft(Vector(genesis)) { case (chain, (data, i)) =>
      val prev  = chain.last.hash
      val block = mineBlock(i + 1, data, prev, difficulty)
      chain :+ block
    }
  }

  // CORRECTION 3 : le pattern match sur List dans sliding(2) n'etait pas
  // exhaustif (Seq(b1,b2) au lieu de List(b1,b2)), ce qui generait des
  // warnings et pouvait lever une MatchError en Scala 3.
  // On utilise sliding(2) sur un Vector et on acces par index, c'est suret.
  def verifyChain(chain: Vector[Block]): Boolean = {
    if (chain.length < 2) return true
    chain.sliding(2).forall { window =>
      window(1).previous == window(0).hash
    }
  }

  // ──────────────────────────────────────────────────────────
  //  AFFICHAGE
  // ──────────────────────────────────────────────────────────

  // CORRECTION 4 : les caracteres Unicode boite (╔ ║ ╚ etc.) causent des
  // problemes d'affichage sur certains terminaux Windows / encodage non-UTF8.
  // On utilise des caracteres ASCII purs, universellement compatibles.
  def printBlock(b: Block): Unit = {
    println(s"+------ Bloc #${b.index} " + "-" * 37)
    println(s"|  Donnees    : ${b.data}")
    println(s"|  Horodatage : ${b.timestamp.format(fmt)}")
    println(s"|  Precedent  : ${b.previous.take(32)}...")
    println(s"|  Nonce      : ${b.nonce}")
    println(s"|  Hash       : ${b.hash}")
    println("|" + "-" * 51 + "\n")
  }

  // ──────────────────────────────────────────────────────────
  //  MAIN
  // ──────────────────────────────────────────────────────────

  def main(args: Array[String]): Unit = {

    println("+" + "=" * 40 + "+")
    println("|     MINAGE BLOCKCHAIN -- Scala         |")
    println("+" + "=" * 40 + "+\n")

    val difficulty = 4
    println(s"Difficulte  : $difficulty zero(s) en tete")
    println("Hash        : SHA-256 (java.security)\n")

    val donnees = List(
      "Alice -> Bob    : 10.5 SLC",
      "Bob -> Charlie  :  5.2 SLC",
      "Charlie -> Diana:  2.8 SLC",
      "Diana -> Eve    :  1.0 SLC",
      "Eve -> Frank    :  0.5 SLC"
    )

    println("Minage en cours...\n")
    val t0    = System.nanoTime()
    val chain = createChain(donnees, difficulty)
    val elaps = (System.nanoTime() - t0) / 1e9

    println()
    chain.foreach(printBlock)

    println("-" * 54)
    println(s"Blocs mines  : ${chain.length}")
    println(f"Temps total  : $elaps%.4f s")
    val valid = verifyChain(chain)
    println(s"Chaine valide: ${if (valid) "OUI" else "NON"}")
  }
}