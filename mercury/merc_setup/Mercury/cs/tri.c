/*
** Automatically generated from `tri.m'
** by the Mercury compiler,
** version 22.01.8
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** UNBOXED_INT64S=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__tri__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/tri.c"
#include "array.mh"

#line 31 "Mercury/cs/tri.c"
#line 32 "Mercury/cs/tri.c"
#include "bitmap.mh"

#line 35 "Mercury/cs/tri.c"
#line 36 "Mercury/cs/tri.c"
#include "io.mh"

#line 39 "Mercury/cs/tri.c"
#line 40 "Mercury/cs/tri.c"
#include "string.mh"

#line 43 "Mercury/cs/tri.c"
#line 44 "Mercury/cs/tri.c"
#include "time.mh"

#line 47 "Mercury/cs/tri.c"
#line 48 "Mercury/cs/tri.c"
#include "tri.mh"

#line 51 "Mercury/cs/tri.c"
#line 52 "Mercury/cs/tri.c"
#ifndef TRI_DECL_GUARD
#define TRI_DECL_GUARD

#line 56 "Mercury/cs/tri.c"
#line 57 "Mercury/cs/tri.c"

#endif
#line 60 "Mercury/cs/tri.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_tri__type_ctor_info_direction_0;
MR_decl_label7(tri__bitonic_merge_3_0, 3,25,7,8,9,10,11)
MR_decl_label7(tri__bitonic_sort_3_0, 3,25,7,8,9,10,11)
MR_decl_label6(tri__compare_and_swap_5_0, 3,19,44,8,11,14)
MR_decl_label1(tri__generer_liste_3_0, 2)
MR_decl_label10(main_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(main_2_0, 13,15,16,17,18,19,20,21,22,23)
MR_decl_label8(main_2_0, 25,27,28,29,30,31,32,33)
MR_decl_label4(tri__print_elems_3_0, 5,7,8,22)
MR_decl_label3(tri__print_list_3_0, 16,5,6)
MR_decl_label3(tri__split_4_0, 2,5,3)
MR_decl_label3(tri__verifier_trie_2_0, 3,5,6)
MR_decl_label2(__Compare___tri__direction_0_0, 2,3)
MR_def_extern_entry(main_2_0)
MR_decl_static(tri__bitonic_sort_3_0)
MR_decl_static(tri__bitonic_merge_3_0)
MR_decl_static(tri__compare_and_swap_5_0)
MR_decl_static(tri__split_4_0)
MR_decl_static(tri__print_list_3_0)
MR_decl_static(tri__print_elems_3_0)
MR_decl_static(tri__verifier_trie_2_0)
MR_decl_static(tri__generer_liste_3_0)
MR_decl_static(__Unify___tri__direction_0_0)
MR_decl_static(__Compare___tri__direction_0_0)

static const struct mercury_type_0 mercury_common_0[16] =
{
{
5,
((MR_Word *) (MR_Unsigned) 0U)
},
{
1,
MR_TAG_COMMON(1,0,0)
},
{
2,
MR_TAG_COMMON(1,0,1)
},
{
6,
MR_TAG_COMMON(1,0,2)
},
{
8,
MR_TAG_COMMON(1,0,3)
},
{
4,
MR_TAG_COMMON(1,0,4)
},
{
7,
MR_TAG_COMMON(1,0,5)
},
{
3,
MR_TAG_COMMON(1,0,6)
},
{
4,
((MR_Word *) (MR_Unsigned) 0U)
},
{
7,
MR_TAG_COMMON(1,0,8)
},
{
2,
MR_TAG_COMMON(1,0,9)
},
{
9,
MR_TAG_COMMON(1,0,10)
},
{
1,
MR_TAG_COMMON(1,0,11)
},
{
8,
MR_TAG_COMMON(1,0,12)
},
{
3,
MR_TAG_COMMON(1,0,13)
},
{
5,
MR_TAG_COMMON(1,0,14)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_TypeCtorInfo_Struct mercury_data_tri__type_ctor_info_direction_0 = {
	0,
	18,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___tri__direction_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___tri__direction_0_0)),
	"tri",
	"direction",
	{ 0 },
	{ (void *) &mercury_data_bool__type_ctor_info_bool_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(tri_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(main_2_0,13,15,16,17,18,19,20,21,22,23)
	MR_init_label8(main_2_0,25,27,28,29,30,31,32,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_r1 = ((MR_Word) MR_string_const("=============================================\n", 46));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("   TRI BITONIQUE \342\200\224 Mercury Implementation\n", 44));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("=============================================\n\n", 47));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("--- Test 1 : Liste al\303\251atoire ---\n", 34));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Word) MR_TAG_COMMON(1,0,7));
	MR_r1 = ((MR_Word) MR_string_const("Entr\303\251e  : ", 11));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__print_list_3_0,
		main_2_0_i7);
MR_def_label(main_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(tri__bitonic_sort_3_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("Sortie  : ", 10));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__print_list_3_0,
		main_2_0_i10);
MR_def_label(main_2_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__verifier_trie_2_0,
		main_2_0_i11);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(main_2_0_i13);
	}
	MR_r1 = ((MR_Word) MR_string_const("V\303\251rification : ECHEC \342\234\227\n\n", 27));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i15);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("V\303\251rification : OK \342\234\223\n\n", 24));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i15);
MR_def_label(main_2_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("--- Test 2 : Liste d\303\251croissante ---\n", 37));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i16);
MR_def_label(main_2_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_r2 = (MR_Unsigned) 0U;
	MR_np_call_localret_ent(tri__generer_liste_3_0,
		main_2_0_i17);
MR_def_label(main_2_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("Entr\303\251e  : ", 11));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i18);
MR_def_label(main_2_0, 18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__print_list_3_0,
		main_2_0_i19);
MR_def_label(main_2_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(tri__bitonic_sort_3_0,
		main_2_0_i20);
MR_def_label(main_2_0, 20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("Sortie  : ", 10));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i21);
MR_def_label(main_2_0, 21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__print_list_3_0,
		main_2_0_i22);
MR_def_label(main_2_0, 22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__verifier_trie_2_0,
		main_2_0_i23);
MR_def_label(main_2_0, 23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(main_2_0_i25);
	}
	MR_r1 = ((MR_Word) MR_string_const("V\303\251rification : ECHEC \342\234\227\n\n", 27));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i27);
MR_def_label(main_2_0, 25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("V\303\251rification : OK \342\234\223\n\n", 24));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i27);
MR_def_label(main_2_0, 27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("--- Test 3 : Ordre d\303\251croissant ---\n", 36));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i28);
MR_def_label(main_2_0, 28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Word) MR_TAG_COMMON(1,0,15));
	MR_r1 = ((MR_Word) MR_string_const("Entr\303\251e  : ", 11));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i29);
MR_def_label(main_2_0, 29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__print_list_3_0,
		main_2_0_i30);
MR_def_label(main_2_0, 30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(tri__bitonic_sort_3_0,
		main_2_0_i31);
MR_def_label(main_2_0, 31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("Sortie  : ", 10));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i32);
MR_def_label(main_2_0, 32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__print_list_3_0,
		main_2_0_i33);
MR_def_label(main_2_0, 33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("\n=============================================\n", 47));
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(tri_module1)
	MR_init_entry1(tri__bitonic_sort_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__tri__bitonic_sort_3_0);
	MR_init_label7(tri__bitonic_sort_3_0,3,25,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bitonic_sort'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(tri__bitonic_sort_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(tri__bitonic_sort_3_0_i3);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_proceed();
MR_def_label(tri__bitonic_sort_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(tri__bitonic_sort_3_0_i25);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Unsigned) 0U;
	MR_proceed();
	}
MR_def_label(tri__bitonic_sort_3_0, 25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		tri__bitonic_sort_3_0_i7);
MR_def_label(tri__bitonic_sort_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (((MR_Integer) MR_tempr1) / (MR_Integer) 2);
	}
	MR_np_call_localret_ent(tri__split_4_0,
		tri__bitonic_sort_3_0_i8);
MR_def_label(tri__bitonic_sort_3_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(tri__bitonic_sort_3_0,
		tri__bitonic_sort_3_0_i9);
MR_def_label(tri__bitonic_sort_3_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(tri__bitonic_sort_3_0,
		tri__bitonic_sort_3_0_i10);
MR_def_label(tri__bitonic_sort_3_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		tri__bitonic_sort_3_0_i11);
MR_def_label(tri__bitonic_sort_3_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(tri__bitonic_merge_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(tri_module2)
	MR_init_entry1(tri__bitonic_merge_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__tri__bitonic_merge_3_0);
	MR_init_label7(tri__bitonic_merge_3_0,3,25,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bitonic_merge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(tri__bitonic_merge_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(tri__bitonic_merge_3_0_i3);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_proceed();
MR_def_label(tri__bitonic_merge_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(tri__bitonic_merge_3_0_i25);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Unsigned) 0U;
	MR_proceed();
	}
MR_def_label(tri__bitonic_merge_3_0, 25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		tri__bitonic_merge_3_0_i7);
MR_def_label(tri__bitonic_merge_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tempr1) / (MR_Integer) 2);
	}
	MR_np_call_localret_ent(tri__split_4_0,
		tri__bitonic_merge_3_0_i8);
MR_def_label(tri__bitonic_merge_3_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(tri__compare_and_swap_5_0,
		tri__bitonic_merge_3_0_i9);
MR_def_label(tri__bitonic_merge_3_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(tri__bitonic_merge_3_0,
		tri__bitonic_merge_3_0_i10);
MR_def_label(tri__bitonic_merge_3_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(tri__bitonic_merge_3_0,
		tri__bitonic_merge_3_0_i11);
MR_def_label(tri__bitonic_merge_3_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(tri_module3)
	MR_init_entry1(tri__compare_and_swap_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__tri__compare_and_swap_5_0);
	MR_init_label6(tri__compare_and_swap_5_0,3,19,44,8,11,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_and_swap'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(tri__compare_and_swap_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(tri__compare_and_swap_5_0_i3);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(tri__compare_and_swap_5_0_i19);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_r2 = (MR_Unsigned) 0U;
	MR_proceed();
MR_def_label(tri__compare_and_swap_5_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(tri__compare_and_swap_5_0_i44);
	}
MR_def_label(tri__compare_and_swap_5_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Unsigned) 0U;
	MR_r2 = (MR_Unsigned) 0U;
	MR_proceed();
MR_def_label(tri__compare_and_swap_5_0, 44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(1, MR_r2, 1);
	MR_tempr3 = MR_r3;
	MR_r6 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_r7 = MR_tempr2;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(tri__compare_and_swap_5_0_i8);
	}
	if ((((MR_Integer) MR_tempr1) > ((MR_Integer) MR_tempr2))) {
		MR_GOTO_LAB(tri__compare_and_swap_5_0_i11);
	}
	MR_r3 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_r5;
	}
	MR_np_localcall_lab(tri__compare_and_swap_5_0,
		tri__compare_and_swap_5_0_i14);
MR_def_label(tri__compare_and_swap_5_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r4) < ((MR_Integer) MR_r7))) {
		MR_GOTO_LAB(tri__compare_and_swap_5_0_i11);
	}
	MR_r3 = MR_r6;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r7;
	MR_r2 = MR_r5;
	MR_np_localcall_lab(tri__compare_and_swap_5_0,
		tri__compare_and_swap_5_0_i14);
MR_def_label(tri__compare_and_swap_5_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r5;
	MR_np_localcall_lab(tri__compare_and_swap_5_0,
		tri__compare_and_swap_5_0_i14);
MR_def_label(tri__compare_and_swap_5_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(tri_module4)
	MR_init_entry1(tri__split_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__tri__split_4_0);
	MR_init_label3(tri__split_4_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(tri__split_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(tri__split_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Unsigned) 0U;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(tri__split_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(tri__split_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r2) - (MR_Unsigned) (MR_Integer) 1);
	MR_np_localcall_lab(tri__split_4_0,
		tri__split_4_0_i5);
MR_def_label(tri__split_4_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(tri__split_4_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Unsigned) 0U;
	MR_r2 = (MR_Unsigned) 0U;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(tri_module5)
	MR_init_entry1(tri__print_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__tri__print_list_3_0);
	MR_init_label3(tri__print_list_3_0,16,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(tri__print_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(tri__print_list_3_0_i16);
	}
	MR_r1 = ((MR_Word) MR_string_const("[]\n", 3));
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(tri__print_list_3_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("[", 1));
	MR_np_call_localret_ent(io__write_string_3_0,
		tri__print_list_3_0_i5);
MR_def_label(tri__print_list_3_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(tri__print_elems_3_0,
		tri__print_list_3_0_i6);
MR_def_label(tri__print_list_3_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("]\n", 2));
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(tri_module6)
	MR_init_entry1(tri__print_elems_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__tri__print_elems_3_0);
	MR_init_label4(tri__print_elems_3_0,5,7,8,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_elems'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(tri__print_elems_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(tri__print_elems_3_0_i22);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(tri__print_elems_3_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(tri__print_elems_3_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		tri__print_elems_3_0_i7);
MR_def_label(tri__print_elems_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const(", ", 2));
	MR_np_call_localret_ent(io__write_string_3_0,
		tri__print_elems_3_0_i8);
MR_def_label(tri__print_elems_3_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(tri__print_elems_3_0_i22);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(tri__print_elems_3_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(tri__print_elems_3_0, 22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(tri_module7)
	MR_init_entry1(tri__verifier_trie_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__tri__verifier_trie_2_0);
	MR_init_label3(tri__verifier_trie_2_0,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'verifier_trie'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(tri__verifier_trie_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(tri__verifier_trie_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(tri__verifier_trie_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(tri__verifier_trie_2_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(tri__verifier_trie_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	if ((((MR_Integer) MR_tempr1) > ((MR_Integer) MR_tempr2))) {
		MR_GOTO_LAB(tri__verifier_trie_2_0_i6);
	}
	MR_r1 = MR_r2;
	MR_np_localtailcall(tri__verifier_trie_2_0);
	}
MR_def_label(tri__verifier_trie_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(tri_module8)
	MR_init_entry1(tri__generer_liste_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__tri__generer_liste_3_0);
	MR_init_label1(tri__generer_liste_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generer_liste'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(tri__generer_liste_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(tri__generer_liste_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(tri__generer_liste_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r1) - (MR_Unsigned) (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_np_localtailcall(tri__generer_liste_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(tri_module9)
	MR_init_entry1(__Unify___tri__direction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___tri__direction_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___tri__direction_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(tri_module10)
	MR_init_entry1(__Compare___tri__direction_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___tri__direction_0_0);
	MR_init_label2(__Compare___tri__direction_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___tri__direction_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if ((((MR_Integer) MR_r2) >= ((MR_Integer) MR_r3))) {
		MR_GOTO_LAB(__Compare___tri__direction_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___tri__direction_0_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r2) <= ((MR_Integer) MR_r3))) {
		MR_GOTO_LAB(__Compare___tri__direction_0_0_i3);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___tri__direction_0_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__tri_maybe_bunch_0(void)
{
	tri_module0();
	tri_module1();
	tri_module2();
	tri_module3();
	tri_module4();
	tri_module5();
	tri_module6();
	tri_module7();
	tri_module8();
	tri_module9();
	tri_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__tri__init(void);
void mercury__tri__init_type_tables(void);
void mercury__tri__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__tri__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__tri__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__tri__init_threadscope_string_table(void);
#endif
const char *mercury__tri__grade_check(void);

void mercury__tri__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__tri_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_tri__type_ctor_info_direction_0,
		tri__direction_0_0);
	mercury__tri__init_debugger();
}

void mercury__tri__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_tri__type_ctor_info_direction_0);
	}
}


void mercury__tri__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__tri__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__tri);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__tri__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__tri__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__tri__grade_check(void)
{
    return &MR_GRADE_VAR;
}
