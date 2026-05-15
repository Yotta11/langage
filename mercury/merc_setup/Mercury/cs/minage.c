/*
** Automatically generated from `minage.m'
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
INIT mercury__minage__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/minage.c"
#include "array.mh"

#line 31 "Mercury/cs/minage.c"
#line 32 "Mercury/cs/minage.c"
#include "bitmap.mh"

#line 35 "Mercury/cs/minage.c"
#line 36 "Mercury/cs/minage.c"
#include "io.mh"

#line 39 "Mercury/cs/minage.c"
#line 40 "Mercury/cs/minage.c"
#include "minage.mh"

#line 43 "Mercury/cs/minage.c"
#line 44 "Mercury/cs/minage.c"
#include "string.mh"

#line 47 "Mercury/cs/minage.c"
#line 48 "Mercury/cs/minage.c"
#include "time.mh"

#line 51 "Mercury/cs/minage.c"
#line 52 "Mercury/cs/minage.c"
#ifndef MINAGE_DECL_GUARD
#define MINAGE_DECL_GUARD

#line 56 "Mercury/cs/minage.c"
#line 57 "Mercury/cs/minage.c"

#endif
#line 60 "Mercury/cs/minage.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Unsigned f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_minage__type_ctor_info_block_0,
	mercury_data_minage__type_ctor_info_blockchain_0;
MR_decl_label10(minage__add_block_6_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(minage__add_block_6_0, 12,13,14)
MR_decl_label2(minage__build_block_4_0, 2,5)
MR_decl_label5(main_2_0, 2,5,6,7,8)
MR_decl_label6(minage__mine_loop_7_0, 2,5,6,7,8,4)
MR_decl_label10(minage__print_chain_3_0, 4,5,6,7,8,9,10,11,12,13)
MR_decl_label2(minage__print_chain_3_0, 14,23)
MR_decl_label2(minage__zero_chars_1_0, 2,1)
MR_decl_label10(fn__minage__compute_hash_1_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label2(fn__minage__hash_acc_2_0, 3,4)
MR_decl_label10(fn__minage__hash_block_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label1(fn__minage__hash_block_4_0, 12)
MR_decl_label1(fn__minage__hex_digit_1_0, 2)
MR_decl_label2(__Unify___minage__block_0_0, 4,1)
MR_decl_label10(__Compare___minage__block_0_0, 3,6,7,4,13,18,81,19,17,25)
MR_def_extern_entry(main_2_0)
MR_decl_static(fn__minage__compute_hash_1_0)
MR_decl_static(fn__minage__hash_acc_2_0)
MR_decl_static(fn__minage__hex_digit_1_0)
MR_decl_static(fn__minage__hash_block_4_0)
MR_decl_static(minage__zero_chars_1_0)
MR_decl_static(minage__mine_loop_7_0)
MR_decl_static(minage__build_block_4_0)
MR_decl_static(minage__add_block_6_0)
MR_decl_static(minage__print_chain_3_0)
MR_decl_static(__Unify___minage__block_0_0)
MR_decl_static(__Compare___minage__block_0_0)
MR_decl_static(__Unify___minage__blockchain_0_0)
MR_decl_static(__Compare___minage__blockchain_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(minage, block)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_minage__field_types_block_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_minage__field_names_block_0_0[] = {
	"b_index",
	"b_data",
	"b_nonce",
	"b_hash",
	"b_prev_hash"
};

static const MR_DuFunctorDesc mercury_data_minage__du_functor_desc_block_0_0 = {
	"block",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_minage__field_types_block_0_0,
	mercury_data_minage__field_names_block_0_0,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};

const MR_DuFunctorDescPtr mercury_data_minage__du_stag_ordered_block_0_0[] = {
	&mercury_data_minage__du_functor_desc_block_0_0

};

const MR_DuPtagLayout mercury_data_minage__du_ptag_ordered_block_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_minage__du_stag_ordered_block_0_0,
	-1,
	0,
	1 }

};

const MR_DuFunctorDescPtr mercury_data_minage__du_name_ordered_block_0[] = {
	&mercury_data_minage__du_functor_desc_block_0_0
};

const MR_Integer mercury_data_minage__functor_number_map_block_0[] = {
	0
};
	
const MR_TypeCtorInfo_Struct mercury_data_minage__type_ctor_info_block_0 = {
	0,
	18,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___minage__block_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___minage__block_0_0)),
	"minage",
	"block",
	{ (void *) mercury_data_minage__du_name_ordered_block_0 },
	{ (void *) mercury_data_minage__du_ptag_ordered_block_0 },
	1,
	12,
	mercury_data_minage__functor_number_map_block_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_minage__type_ctor_info_block_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1minage__type_ctor_info_block_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_minage__type_ctor_info_block_0
}};

const MR_TypeCtorInfo_Struct mercury_data_minage__type_ctor_info_blockchain_0 = {
	0,
	18,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___minage__blockchain_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___minage__blockchain_0_0)),
	"minage",
	"blockchain",
	{ 0 },
	{ (void *) &mercury_data_list__ti_list_1minage__type_ctor_info_block_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(minage_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label5(main_2_0,2,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = ((MR_Word) MR_succip);
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(2) = (MR_Integer) 0;
	MR_sv(3) = ((MR_Word) MR_string_const("GENESIS", 7));
	MR_sv(4) = (MR_Integer) 0;
	MR_sv(5) = ((MR_Word) MR_string_const("0", 1));
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Word) MR_string_const("GENESIS", 7));
	MR_r3 = (MR_Integer) 0;
	MR_r4 = ((MR_Word) MR_string_const("0", 1));
	MR_np_call_localret_ent(fn__minage__hash_block_4_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Unsigned) 0U;
	MR_r1 = ((MR_Word) MR_string_const("A->B 50", 7));
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(minage__add_block_6_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("B->C 20", 7));
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(minage__add_block_6_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("C->D 10", 7));
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(minage__add_block_6_0,
		main_2_0_i7);
MR_def_label(main_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("\n=== BLOCKCHAIN ===\n", 20));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(minage__print_chain_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(fn__string__from_char_list_1_0);

MR_BEGIN_MODULE(minage_module1)
	MR_init_entry1(fn__minage__compute_hash_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__minage__compute_hash_1_0);
	MR_init_label10(fn__minage__compute_hash_1_0,2,3,4,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__minage__compute_hash_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = ((MR_Word) MR_succip);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__minage__compute_hash_1_0_i2);
MR_def_label(fn__minage__compute_hash_1_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5381;
	MR_np_call_localret_ent(fn__minage__hash_acc_2_0,
		fn__minage__compute_hash_1_0_i3);
MR_def_label(fn__minage__compute_hash_1_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (((MR_Integer) MR_r1) & (MR_Integer) 2147483647);
	MR_r1 = ((((MR_Integer) MR_sv(7)) >> (MR_Integer) 28) & (MR_Integer) 15);
	MR_np_call_localret_ent(fn__minage__hex_digit_1_0,
		fn__minage__compute_hash_1_0_i4);
MR_def_label(fn__minage__compute_hash_1_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((((MR_Integer) MR_sv(7)) >> (MR_Integer) 24) & (MR_Integer) 15);
	MR_np_call_localret_ent(fn__minage__hex_digit_1_0,
		fn__minage__compute_hash_1_0_i5);
MR_def_label(fn__minage__compute_hash_1_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((((MR_Integer) MR_sv(7)) >> (MR_Integer) 20) & (MR_Integer) 15);
	MR_np_call_localret_ent(fn__minage__hex_digit_1_0,
		fn__minage__compute_hash_1_0_i6);
MR_def_label(fn__minage__compute_hash_1_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = ((((MR_Integer) MR_sv(7)) >> (MR_Integer) 16) & (MR_Integer) 15);
	MR_np_call_localret_ent(fn__minage__hex_digit_1_0,
		fn__minage__compute_hash_1_0_i7);
MR_def_label(fn__minage__compute_hash_1_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = ((((MR_Integer) MR_sv(7)) >> (MR_Integer) 12) & (MR_Integer) 15);
	MR_np_call_localret_ent(fn__minage__hex_digit_1_0,
		fn__minage__compute_hash_1_0_i8);
MR_def_label(fn__minage__compute_hash_1_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = ((((MR_Integer) MR_sv(7)) >> (MR_Integer) 8) & (MR_Integer) 15);
	MR_np_call_localret_ent(fn__minage__hex_digit_1_0,
		fn__minage__compute_hash_1_0_i9);
MR_def_label(fn__minage__compute_hash_1_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = ((((MR_Integer) MR_sv(7)) >> (MR_Integer) 4) & (MR_Integer) 15);
	MR_np_call_localret_ent(fn__minage__hex_digit_1_0,
		fn__minage__compute_hash_1_0_i10);
MR_def_label(fn__minage__compute_hash_1_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (((MR_Integer) MR_r2) & (MR_Integer) 15);
	MR_np_call_localret_ent(fn__minage__hex_digit_1_0,
		fn__minage__compute_hash_1_0_i11);
MR_def_label(fn__minage__compute_hash_1_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Unsigned) 0U;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__string__from_char_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__char__to_int_1_0);

MR_BEGIN_MODULE(minage_module2)
	MR_init_entry1(fn__minage__hash_acc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__minage__hash_acc_2_0);
	MR_init_label2(fn__minage__hash_acc_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hash_acc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__minage__hash_acc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__minage__hash_acc_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__minage__hash_acc_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = (MR_Integer) ((MR_Unsigned) (((MR_Integer) MR_r2) << (MR_Integer) 5) + (MR_Unsigned) ((MR_Integer) MR_r2));
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__char__to_int_1_0,
		fn__minage__hash_acc_2_0_i4);
MR_def_label(fn__minage__hash_acc_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(2)) + (MR_Unsigned) ((MR_Integer) MR_tempr1));
	MR_succip_word = MR_sv(3);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__minage__hash_acc_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__char__det_from_int_1_0);

MR_BEGIN_MODULE(minage_module3)
	MR_init_entry1(fn__minage__hex_digit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__minage__hex_digit_1_0);
	MR_init_label1(fn__minage__hex_digit_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hex_digit'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__minage__hex_digit_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,10)) {
		MR_GOTO_LAB(fn__minage__hex_digit_1_0_i2);
	}
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r1) + (MR_Unsigned) (MR_Integer) 48);
	MR_np_tailcall_ent(fn__char__det_from_int_1_0);
MR_def_label(fn__minage__hex_digit_1_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) ((MR_Unsigned) (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r1) - (MR_Unsigned) (MR_Integer) 10) + (MR_Unsigned) (MR_Integer) 97);
	MR_np_tailcall_ent(fn__char__det_from_int_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(string__format__format_signed_int_component_nowidth_noprec_3_0);

MR_BEGIN_MODULE(minage_module4)
	MR_init_entry1(fn__minage__hash_block_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__minage__hash_block_4_0);
	MR_init_label10(fn__minage__hash_block_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label1(fn__minage__hash_block_4_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hash_block'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__minage__hash_block_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = ((MR_Word) MR_succip);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__minage__hash_block_4_0_i2);
MR_def_label(fn__minage__hash_block_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("|", 1));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__minage__hash_block_4_0_i3);
MR_def_label(fn__minage__hash_block_4_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__minage__hash_block_4_0_i4);
MR_def_label(fn__minage__hash_block_4_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("|", 1));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__minage__hash_block_4_0_i5);
MR_def_label(fn__minage__hash_block_4_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,1,0));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__format__format_signed_int_component_nowidth_noprec_3_0,
		fn__minage__hash_block_4_0_i6);
MR_def_label(fn__minage__hash_block_4_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__minage__hash_block_4_0_i7);
MR_def_label(fn__minage__hash_block_4_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("|", 1));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__minage__hash_block_4_0_i8);
MR_def_label(fn__minage__hash_block_4_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__minage__hash_block_4_0_i9);
MR_def_label(fn__minage__hash_block_4_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("|", 1));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__minage__hash_block_4_0_i10);
MR_def_label(fn__minage__hash_block_4_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,1,0));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__format__format_signed_int_component_nowidth_noprec_3_0,
		fn__minage__hash_block_4_0_i11);
MR_def_label(fn__minage__hash_block_4_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__minage__hash_block_4_0_i12);
MR_def_label(fn__minage__hash_block_4_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__minage__compute_hash_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(minage_module5)
	MR_init_entry1(minage__zero_chars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__minage__zero_chars_1_0);
	MR_init_label2(minage__zero_chars_1_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_chars'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(minage__zero_chars_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(minage__zero_chars_1_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,48)) {
		MR_GOTO_LAB(minage__zero_chars_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(minage__zero_chars_1_0);
MR_def_label(minage__zero_chars_1_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(minage__zero_chars_1_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__length_2_0);
MR_decl_entry(fn__string__left_2_0);

MR_BEGIN_MODULE(minage_module6)
	MR_init_entry1(minage__mine_loop_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__minage__mine_loop_7_0);
	MR_init_label6(minage__mine_loop_7_0,2,5,6,7,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mine_loop'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(minage__mine_loop_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__minage__hash_block_4_0,
		minage__mine_loop_7_0_i2);
MR_def_label(minage__mine_loop_7_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(4),0)) {
		MR_GOTO_LAB(minage__mine_loop_7_0_i4);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(string__length_2_0,
		minage__mine_loop_7_0_i5);
MR_def_label(minage__mine_loop_7_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r1) < ((MR_Integer) MR_sv(4)))) {
		MR_GOTO_LAB(minage__mine_loop_7_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__left_2_0,
		minage__mine_loop_7_0_i6);
MR_def_label(minage__mine_loop_7_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_char_list_2_0,
		minage__mine_loop_7_0_i7);
MR_def_label(minage__mine_loop_7_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(minage__zero_chars_1_0,
		minage__mine_loop_7_0_i8);
MR_def_label(minage__mine_loop_7_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(minage__mine_loop_7_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(minage__mine_loop_7_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(5)) + (MR_Unsigned) (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__minage__hash_block_4_0,
		minage__mine_loop_7_0_i2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(minage_module7)
	MR_init_entry1(minage__build_block_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__minage__build_block_4_0);
	MR_init_label2(minage__build_block_4_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_block'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(minage__build_block_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(minage__build_block_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_tempr2 = MR_tempr4;
	MR_tempr3 = MR_tfield(1, MR_tempr4, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 3);
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_tfield(0, MR_tempr3, 0)) + (MR_Unsigned) (MR_Integer) 1);
	MR_r5 = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(minage__mine_loop_7_0,
		minage__build_block_4_0_i5);
MR_def_label(minage__build_block_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r3 = ((MR_Word) MR_string_const("0", 1));
	MR_r1 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(minage__mine_loop_7_0,
		minage__build_block_4_0_i5);
MR_def_label(minage__build_block_4_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(minage_module8)
	MR_init_entry1(minage__add_block_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__minage__add_block_6_0);
	MR_init_label10(minage__add_block_6_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label3(minage__add_block_6_0,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_block'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(minage__add_block_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(minage__build_block_4_0,
		minage__add_block_6_0_i2);
MR_def_label(minage__add_block_6_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_r1 = ((MR_Word) MR_string_const("Mining block ", 13));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i3);
MR_def_label(minage__add_block_6_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,1,0));
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(string__format__format_signed_int_component_nowidth_noprec_3_0,
		minage__add_block_6_0_i4);
MR_def_label(minage__add_block_6_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i5);
MR_def_label(minage__add_block_6_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const(": ", 2));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i6);
MR_def_label(minage__add_block_6_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i7);
MR_def_label(minage__add_block_6_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i8);
MR_def_label(minage__add_block_6_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = ((MR_Word) MR_string_const("Nonce=", 6));
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i9);
MR_def_label(minage__add_block_6_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,1,0));
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(string__format__format_signed_int_component_nowidth_noprec_3_0,
		minage__add_block_6_0_i10);
MR_def_label(minage__add_block_6_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i11);
MR_def_label(minage__add_block_6_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const(" | Hash=", 8));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i12);
MR_def_label(minage__add_block_6_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i13);
MR_def_label(minage__add_block_6_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__add_block_6_0_i14);
MR_def_label(minage__add_block_6_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(minage_module9)
	MR_init_entry1(minage__print_chain_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__minage__print_chain_3_0);
	MR_init_label10(minage__print_chain_3_0,4,5,6,7,8,9,10,11,12,13)
	MR_init_label2(minage__print_chain_3_0,14,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_chain'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(minage__print_chain_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = ((MR_Word) MR_succip);
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(minage__print_chain_3_0_i23);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = ((MR_Word) MR_string_const("Block ", 6));
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i4);
MR_def_label(minage__print_chain_3_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,1,0));
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__format__format_signed_int_component_nowidth_noprec_3_0,
		minage__print_chain_3_0_i5);
MR_def_label(minage__print_chain_3_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i6);
MR_def_label(minage__print_chain_3_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const(" | ", 3));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i7);
MR_def_label(minage__print_chain_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i8);
MR_def_label(minage__print_chain_3_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const(" | nonce=", 9));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i9);
MR_def_label(minage__print_chain_3_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,1,0));
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__format__format_signed_int_component_nowidth_noprec_3_0,
		minage__print_chain_3_0_i10);
MR_def_label(minage__print_chain_3_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i11);
MR_def_label(minage__print_chain_3_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const(" | hash=", 8));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i12);
MR_def_label(minage__print_chain_3_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i13);
MR_def_label(minage__print_chain_3_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i14);
MR_def_label(minage__print_chain_3_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(minage__print_chain_3_0_i23);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = ((MR_Word) MR_string_const("Block ", 6));
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		minage__print_chain_3_0_i4);
MR_def_label(minage__print_chain_3_0, 23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(minage_module10)
	MR_init_entry1(__Unify___minage__block_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___minage__block_0_0);
	MR_init_label2(__Unify___minage__block_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___minage__block_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___minage__block_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___minage__block_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) ((MR_Word *) MR_r1), (char *) ((MR_Word *) MR_r2)) != 0)) {
		MR_GOTO_LAB(__Unify___minage__block_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___minage__block_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((strcmp((char *) ((MR_Word *) MR_r1), (char *) ((MR_Word *) MR_r2)) != 0)) {
		MR_GOTO_LAB(__Unify___minage__block_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = (strcmp((char *) ((MR_Word *) MR_r1), (char *) ((MR_Word *) MR_r2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___minage__block_0_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___minage__block_0_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(minage_module11)
	MR_init_entry1(__Compare___minage__block_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___minage__block_0_0);
	MR_init_label10(__Compare___minage__block_0_0,3,6,7,4,13,18,81,19,17,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___minage__block_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = ((MR_Word) MR_succip);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if ((((MR_Integer) MR_r5) >= ((MR_Integer) MR_r4))) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i4);
	}
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___minage__block_0_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___minage__block_0_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r5) <= ((MR_Integer) MR_r4))) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i4);
	}
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___minage__block_0_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i81);
	}
MR_def_label(__Compare___minage__block_0_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___minage__block_0_0_i13);
MR_def_label(__Compare___minage__block_0_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i81);
	}
	if ((((MR_Integer) MR_sv(3)) >= ((MR_Integer) MR_sv(4)))) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i17);
	}
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___minage__block_0_0, 18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_sv(3)) <= ((MR_Integer) MR_sv(4)))) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i17);
	}
MR_def_label(__Compare___minage__block_0_0, 81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___minage__block_0_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i81);
	}
MR_def_label(__Compare___minage__block_0_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___minage__block_0_0_i25);
MR_def_label(__Compare___minage__block_0_0, 25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___minage__block_0_0_i81);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(minage_module12)
	MR_init_entry1(__Unify___minage__blockchain_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___minage__blockchain_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___minage__blockchain_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(minage_module13)
	MR_init_entry1(__Compare___minage__blockchain_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___minage__blockchain_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___minage__blockchain_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__minage_maybe_bunch_0(void)
{
	minage_module0();
	minage_module1();
	minage_module2();
	minage_module3();
	minage_module4();
	minage_module5();
	minage_module6();
	minage_module7();
	minage_module8();
	minage_module9();
	minage_module10();
	minage_module11();
	minage_module12();
	minage_module13();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__minage__init(void);
void mercury__minage__init_type_tables(void);
void mercury__minage__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__minage__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__minage__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__minage__init_threadscope_string_table(void);
#endif
const char *mercury__minage__grade_check(void);

void mercury__minage__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__minage_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_minage__type_ctor_info_block_0,
		minage__block_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_minage__type_ctor_info_blockchain_0,
		minage__blockchain_0_0);
	mercury__minage__init_debugger();
}

void mercury__minage__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_minage__type_ctor_info_block_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_minage__type_ctor_info_blockchain_0);
	}
}


void mercury__minage__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__minage__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__minage);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__minage__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__minage__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__minage__grade_check(void)
{
    return &MR_GRADE_VAR;
}
