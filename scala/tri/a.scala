// ============================================================
//   TRI BITONIQUE — Scala 2 (Compatible toutes versions)
//   Commande : scala a.scala
//   execution : scala a
// ============================================================


import scala.util.Random

object a {

  // ──────────────────────────────────────────────────────────
  //  COMPARE AND SWAP (en place sur Array)
  // ──────────────────────────────────────────────────────────

  def compareAndSwap[T](arr: Array[T], i: Int, j: Int, ascending: Boolean)
                       (implicit ord: Ordering[T]): Unit = {
    if (ascending  && ord.gt(arr(i), arr(j))) { val t = arr(i); arr(i) = arr(j); arr(j) = t }
    if (!ascending && ord.lt(arr(i), arr(j))) { val t = arr(i); arr(i) = arr(j); arr(j) = t }
  }

  // ──────────────────────────────────────────────────────────
  //  BITONIC MERGE
  // ──────────────────────────────────────────────────────────

  def bitonicMerge[T](arr: Array[T], lo: Int, cnt: Int, ascending: Boolean)
                     (implicit ord: Ordering[T]): Unit = {
    if (cnt > 1) {
      val k = cnt / 2
      for (i <- lo until lo + k) {
        compareAndSwap(arr, i, i + k, ascending)
      }
      bitonicMerge(arr, lo,     k, ascending)
      bitonicMerge(arr, lo + k, k, ascending)
    }
  }

  // ──────────────────────────────────────────────────────────
  //  BITONIC SORT
  // ──────────────────────────────────────────────────────────

  def bitonicSort[T](arr: Array[T], lo: Int, cnt: Int, ascending: Boolean)
                    (implicit ord: Ordering[T]): Unit = {
    if (cnt > 1) {
      val k = cnt / 2
      bitonicSort(arr, lo,     k, ascending  = true)
      bitonicSort(arr, lo + k, k, ascending  = false)
      bitonicMerge(arr, lo, cnt, ascending)
    }
  }

  def sort[T](arr: Array[T])(implicit ord: Ordering[T]): Array[T] = {
    require(arr.length > 0 && (arr.length & (arr.length - 1)) == 0,
      s"Taille ${arr.length} doit etre une puissance de 2")
    bitonicSort(arr, 0, arr.length, ascending = true)
    arr
  }

  // ──────────────────────────────────────────────────────────
  //  VERSION FONCTIONNELLE IMMUTABLE (Vector)
  // ──────────────────────────────────────────────────────────

  def sortFunctional[T](seq: Vector[T])(implicit ord: Ordering[T]): Vector[T] = {

    def swap(v: Vector[T], i: Int, j: Int): Vector[T] =
      v.updated(i, v(j)).updated(j, v(i))

    def cas(v: Vector[T], i: Int, j: Int, asc: Boolean): Vector[T] = {
      if ((asc && ord.gt(v(i), v(j))) || (!asc && ord.lt(v(i), v(j))))
        swap(v, i, j)
      else v
    }

    def merge(v: Vector[T], lo: Int, cnt: Int, asc: Boolean): Vector[T] = {
      if (cnt <= 1) v
      else {
        val k  = cnt / 2
        val v1 = (lo until lo + k).foldLeft(v)((acc, i) => cas(acc, i, i + k, asc))
        val v2 = merge(v1, lo,     k, asc)
        merge(v2, lo + k, k, asc)
      }
    }

    def bsort(v: Vector[T], lo: Int, cnt: Int, asc: Boolean): Vector[T] = {
      if (cnt <= 1) v
      else {
        val k  = cnt / 2
        val v1 = bsort(v,  lo,     k, asc  = true)
        val v2 = bsort(v1, lo + k, k, asc  = false)
        merge(v2, lo, cnt, asc)
      }
    }

    bsort(seq, 0, seq.length, asc = true)
  }

  // ──────────────────────────────────────────────────────────
  //  AFFICHAGE
  // ──────────────────────────────────────────────────────────

  def printTest[T](label: String, before: Seq[T], after: Seq[T]): Unit = {
    println(s"  Avant  : ${before.mkString("[", ", ", "]")}")
    println(s"  Apres  : ${after.mkString("[", ", ", "]")}")
  }

  // ──────────────────────────────────────────────────────────
  //  MAIN
  // ──────────────────────────────────────────────────────────

  def main(args: Array[String]): Unit = {
    println("╔══════════════════════════════════════╗")
    println("║     TRI BITONIQUE — Scala            ║")
    println("╚══════════════════════════════════════╝\n")

    // Test 1 : Int mutable Array (8 elements)
    println("--- Test 1 : Int mutable Array (8 elements) ---")
    val arr1 = Array(12, 4, 78, 90, 45, 23, 56, 11)
    val bef1 = arr1.clone()
    sort(arr1)
    printTest("Int Array", bef1.toSeq, arr1.toSeq)

    // Test 2 : Int (16 elements)
    println("\n--- Test 2 : Int Array (16 elements) ---")
    val arr2 = Array(7, 3, 15, 1, 8, 22, 6, 9, 14, 2, 19, 5, 10, 17, 4, 12)
    val bef2 = arr2.clone()
    sort(arr2)
    printTest("Int 16", bef2.toSeq, arr2.toSeq)

    // Test 3 : Double
    println("\n--- Test 3 : Double (8 elements) ---")
    val arr3 = Array(3.14, 1.41, 2.71, 0.57, 1.73, 2.23, 1.61, 0.30)
    val bef3 = arr3.clone()
    sort(arr3)
    printTest("Double", bef3.toSeq, arr3.toSeq)

    // Test 4 : String
    println("\n--- Test 4 : String (8 elements) ---")
    val arr4 = Array("mango", "apple", "zucchini", "banana", "pear", "cherry", "date", "avocado")
    val bef4 = arr4.clone()
    sort(arr4)
    printTest("String", bef4.toSeq, arr4.toSeq)

    // Test 5 : Version fonctionnelle immutable
    println("\n--- Test 5 : Version fonctionnelle (Vector immutable) ---")
    val vec5 = Vector(55, 3, 99, 1, 44, 22, 88, 7)
    val res5 = sortFunctional(vec5)
    printTest("Vector", vec5, res5)

    // Benchmark : 65 536 elements
    println("\n--- Benchmark : 65 536 elements ---")
    val big     = Array.fill(65536)(Random.nextInt(1000000))
    val t0      = System.nanoTime()
    sort(big)
    val elapsed = (System.nanoTime() - t0) / 1e6
    println(f"  Temps  : $elapsed%.3f ms")
    println(s"  Trie   : ${big.sliding(2).forall(w => w(0) <= w(1))}")

    println("\n Tri bitonique Scala termine.")
  }
}
