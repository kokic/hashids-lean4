// Lean compiler output
// Module: Hashids.hashids
// Imports: Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint32_t lean_string_utf8_get_bang(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__outOfBounds___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_guardIndex___boxed__const__1;
static lean_object* l_Hashids_defaultSeparators___closed__1;
LEAN_EXPORT lean_object* l_List_eraseDups_loop___at_Hashids_calculateAlphabetAndSeparators___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_initialEncode___boxed__const__2;
lean_object* lean_uint32_to_nat(uint32_t);
LEAN_EXPORT lean_object* l_Hashids_unhashSubHashes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_hashAux(uint64_t, lean_object*, lean_object*);
extern uint32_t l_Char_instInhabitedChar;
double lean_float_div(double, double);
LEAN_EXPORT lean_object* l_Hashids_defaultAlphabet;
uint64_t lean_uint64_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_guards(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_calculateAlphabetAndSeparators(lean_object*, lean_object*);
double ceil(double);
LEAN_EXPORT lean_object* l_List_elem___at_Hashids_encode___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_encode___boxed__const__1;
LEAN_EXPORT lean_object* l_Hashids_calculateSeparatorsLength___boxed(lean_object*);
LEAN_EXPORT uint32_t l_List_foldr___at_Hashids_encode___spec__3(uint32_t, lean_object*);
static lean_object* l_Hashids_decode___closed__1;
LEAN_EXPORT lean_object* l_Hashids_salt(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_alphabet(lean_object*);
uint8_t lean_float_decLt(double, double);
LEAN_EXPORT lean_object* l_Hashids_ensureMinimalLength(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Hashids_unhash(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at_Hashids_encode___spec__1(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_ensureMinimalLength___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_get___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_encode(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_Hashids_encode___closed__4;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_calculateSeparatorsLength(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_initialEncode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Hashids_encode___closed__7;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT double l_Hashids_separatorDivisor;
uint8_t l_String_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_unhash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_alphandseps(lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at_Hashids_encode___spec__3___boxed(lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_unhashAux___lambda__1___boxed__const__1;
lean_object* l_List_set___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedString;
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Hashids_calculateAlphabetAndSeparators___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Hashids_unhashAux(lean_object*, lean_object*, uint64_t, uint64_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_decode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_initialEncode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Hashids_encode___closed__2;
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_unhashSubHashes_unhashSubHashesAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_decode(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_guardIndex(lean_object*, uint32_t, lean_object*, lean_object*);
extern uint64_t l_instInhabitedUInt64;
lean_object* lean_uint64_to_nat(uint64_t);
LEAN_EXPORT lean_object* l_Hashids_fromSalt(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_addGuardsIfNecessary___boxed__const__1;
static lean_object* l_Hashids_defaultAlphabet___closed__1;
uint64_t lean_uint64_add(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Hashids_defaultSalt;
static lean_object* l_Hashids_decode___closed__3;
LEAN_EXPORT lean_object* l_Hashids_adjustAlphabetAndSeparators(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_hash___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_div(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Hashids_hashLength;
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
static lean_object* l_Hashids_extractLotteryCharAndHashs___closed__1;
uint8_t l_List_elem___at_System_FilePath_normalize___spec__1(uint32_t, lean_object*);
uint32_t lean_uint64_to_uint32(uint64_t);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Hashids_calculateAlphabetAndSeparators___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_defaultMinimalHashLength;
LEAN_EXPORT lean_object* l_shuffle(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_initialEncode___boxed__const__1;
uint64_t lean_uint64_mul(uint64_t, uint64_t);
static lean_object* l_Hashids_encode___closed__1;
static lean_object* l_Hashids_calculateAlphabetAndSeparators___closed__1;
LEAN_EXPORT lean_object* l_Hashids_defaultSeparators;
static lean_object* l_Hashids_encode___closed__6;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Hashids_encode___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_String_replace_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_addGuardsIfNecessary(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_shuffle___boxed__const__1;
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
uint32_t lean_uint32_modn(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_unhashSubHashes_unhashSubHashesAux(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_shuffle___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_float_to_uint32(double);
lean_object* l_List_get_x21___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_findAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed__const__1;
LEAN_EXPORT lean_object* l_minimalAlphabetLength;
static lean_object* l_Hashids_defaultHashids___closed__1;
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups___at_Hashids_calculateAlphabetAndSeparators___spec__1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_consistentShuffle(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_separators(lean_object*);
static lean_object* l_Hashids_decode___closed__2;
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Hashids_guardDivisor;
LEAN_EXPORT lean_object* l_Hashids_salt___boxed(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_extractLotteryCharAndHashs___boxed(lean_object*, lean_object*);
uint8_t lean_uint64_dec_le(uint64_t, uint64_t);
static lean_object* l_Hashids_encode___closed__3;
LEAN_EXPORT lean_object* l_Hashids_hash(uint64_t, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Hashids_unhashSubHashes(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
LEAN_EXPORT uint64_t l_Hashids_MAX__INTEGER;
static lean_object* l_Hashids_encode___closed__5;
LEAN_EXPORT lean_object* l_Hashids_extractLotteryCharAndHashs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_guardIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_unhashAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_hashAux___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Hashids_hashAux___boxed__const__1;
lean_object* lean_string_append(lean_object*, lean_object*);
uint64_t lean_uint64_modn(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_addGuardsIfNecessary___boxed(lean_object*, lean_object*, lean_object*);
static double l_Hashids_separatorDivisor___closed__1;
LEAN_EXPORT uint8_t l_Hashids_unhashAux___lambda__1(lean_object*, lean_object*, lean_object*, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_defaultHashids;
lean_object* l_String_drop(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
static lean_object* l_Hashids_defaultSalt___closed__1;
lean_object* l_String_splitOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Hashids_unhashAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t _init_l_Hashids_MAX__INTEGER() {
_start:
{
uint64_t x_1; 
x_1 = 9007199254740992;
return x_1;
}
}
static lean_object* _init_l_Hashids_defaultSalt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Hashids_defaultSalt() {
_start:
{
lean_object* x_1; 
x_1 = l_Hashids_defaultSalt___closed__1;
return x_1;
}
}
static lean_object* _init_l_Hashids_defaultAlphabet___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890", 62);
return x_1;
}
}
static lean_object* _init_l_Hashids_defaultAlphabet() {
_start:
{
lean_object* x_1; 
x_1 = l_Hashids_defaultAlphabet___closed__1;
return x_1;
}
}
static lean_object* _init_l_Hashids_defaultSeparators___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("cfhistuCFHISTU", 14);
return x_1;
}
}
static lean_object* _init_l_Hashids_defaultSeparators() {
_start:
{
lean_object* x_1; 
x_1 = l_Hashids_defaultSeparators___closed__1;
return x_1;
}
}
static lean_object* _init_l_Hashids_defaultMinimalHashLength() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Hashids_salt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_salt___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Hashids_salt(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Hashids_hashLength() {
_start:
{
lean_object* x_1; 
x_1 = l_Hashids_defaultMinimalHashLength;
return x_1;
}
}
static lean_object* _init_l_Hashids_defaultHashids___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Hashids_defaultSalt;
x_2 = l_Hashids_defaultMinimalHashLength;
x_3 = l_Hashids_defaultAlphabet;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Hashids_defaultHashids() {
_start:
{
lean_object* x_1; 
x_1 = l_Hashids_defaultHashids___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Hashids_fromSalt(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Hashids_defaultMinimalHashLength;
x_3 = l_Hashids_defaultAlphabet;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Hashids_guardDivisor() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(12u);
return x_1;
}
}
static double _init_l_Hashids_separatorDivisor___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(35u);
x_2 = 1;
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
static double _init_l_Hashids_separatorDivisor() {
_start:
{
double x_1; 
x_1 = l_Hashids_separatorDivisor___closed__1;
return x_1;
}
}
static lean_object* _init_l_shuffle___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_Char_instInhabitedChar;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_shuffle(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint32_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
x_10 = lean_string_length(x_7);
x_11 = lean_nat_mod(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
x_12 = lean_string_utf8_get_bang(x_7, x_11);
x_13 = lean_uint32_to_nat(x_12);
x_14 = lean_nat_add(x_8, x_13);
lean_dec(x_8);
x_15 = lean_nat_add(x_13, x_11);
lean_dec(x_13);
x_16 = lean_nat_add(x_15, x_14);
lean_dec(x_15);
x_17 = lean_nat_mod(x_16, x_2);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_List_lengthTRAux___rarg(x_6, x_18);
x_20 = lean_nat_dec_lt(x_2, x_19);
x_21 = lean_nat_dec_lt(x_17, x_19);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_11, x_22);
lean_dec(x_11);
x_24 = lean_nat_sub(x_2, x_22);
if (x_20 == 0)
{
lean_object* x_25; lean_object* x_26; uint32_t x_27; lean_object* x_28; lean_object* x_29; 
x_25 = l_shuffle___boxed__const__1;
x_26 = l___private_Init_Util_0__outOfBounds___rarg(x_25);
x_27 = lean_unbox_uint32(x_26);
lean_dec(x_26);
x_28 = lean_box_uint32(x_27);
lean_inc(x_6);
x_29 = l_List_set___rarg(x_6, x_17, x_28);
if (x_21 == 0)
{
lean_object* x_30; lean_object* x_31; uint32_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_17);
lean_dec(x_6);
x_30 = l_shuffle___boxed__const__1;
x_31 = l___private_Init_Util_0__outOfBounds___rarg(x_30);
x_32 = lean_unbox_uint32(x_31);
lean_dec(x_31);
x_33 = lean_box_uint32(x_32);
x_34 = l_List_set___rarg(x_29, x_2, x_33);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_23);
lean_ctor_set(x_1, 2, x_14);
lean_ctor_set(x_1, 0, x_34);
x_2 = x_24;
goto _start;
}
else
{
lean_object* x_36; uint32_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = l_List_get___rarg(x_6, x_17);
lean_dec(x_6);
x_37 = lean_unbox_uint32(x_36);
lean_dec(x_36);
x_38 = lean_box_uint32(x_37);
x_39 = l_List_set___rarg(x_29, x_2, x_38);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_23);
lean_ctor_set(x_1, 2, x_14);
lean_ctor_set(x_1, 0, x_39);
x_2 = x_24;
goto _start;
}
}
else
{
lean_object* x_41; uint32_t x_42; lean_object* x_43; lean_object* x_44; 
lean_inc(x_2);
x_41 = l_List_get___rarg(x_6, x_2);
x_42 = lean_unbox_uint32(x_41);
lean_dec(x_41);
x_43 = lean_box_uint32(x_42);
lean_inc(x_6);
x_44 = l_List_set___rarg(x_6, x_17, x_43);
if (x_21 == 0)
{
lean_object* x_45; lean_object* x_46; uint32_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_17);
lean_dec(x_6);
x_45 = l_shuffle___boxed__const__1;
x_46 = l___private_Init_Util_0__outOfBounds___rarg(x_45);
x_47 = lean_unbox_uint32(x_46);
lean_dec(x_46);
x_48 = lean_box_uint32(x_47);
x_49 = l_List_set___rarg(x_44, x_2, x_48);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_23);
lean_ctor_set(x_1, 2, x_14);
lean_ctor_set(x_1, 0, x_49);
x_2 = x_24;
goto _start;
}
else
{
lean_object* x_51; uint32_t x_52; lean_object* x_53; lean_object* x_54; 
x_51 = l_List_get___rarg(x_6, x_17);
lean_dec(x_6);
x_52 = lean_unbox_uint32(x_51);
lean_dec(x_51);
x_53 = lean_box_uint32(x_52);
x_54 = l_List_set___rarg(x_44, x_2, x_53);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_23);
lean_ctor_set(x_1, 2, x_14);
lean_ctor_set(x_1, 0, x_54);
x_2 = x_24;
goto _start;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint32_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_56 = lean_ctor_get(x_1, 0);
x_57 = lean_ctor_get(x_1, 1);
x_58 = lean_ctor_get(x_1, 2);
x_59 = lean_ctor_get(x_1, 3);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_1);
x_60 = lean_string_length(x_57);
x_61 = lean_nat_mod(x_59, x_60);
lean_dec(x_60);
lean_dec(x_59);
x_62 = lean_string_utf8_get_bang(x_57, x_61);
x_63 = lean_uint32_to_nat(x_62);
x_64 = lean_nat_add(x_58, x_63);
lean_dec(x_58);
x_65 = lean_nat_add(x_63, x_61);
lean_dec(x_63);
x_66 = lean_nat_add(x_65, x_64);
lean_dec(x_65);
x_67 = lean_nat_mod(x_66, x_2);
lean_dec(x_66);
x_68 = lean_unsigned_to_nat(0u);
x_69 = l_List_lengthTRAux___rarg(x_56, x_68);
x_70 = lean_nat_dec_lt(x_2, x_69);
x_71 = lean_nat_dec_lt(x_67, x_69);
lean_dec(x_69);
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_add(x_61, x_72);
lean_dec(x_61);
x_74 = lean_nat_sub(x_2, x_72);
if (x_70 == 0)
{
lean_object* x_75; lean_object* x_76; uint32_t x_77; lean_object* x_78; lean_object* x_79; 
x_75 = l_shuffle___boxed__const__1;
x_76 = l___private_Init_Util_0__outOfBounds___rarg(x_75);
x_77 = lean_unbox_uint32(x_76);
lean_dec(x_76);
x_78 = lean_box_uint32(x_77);
lean_inc(x_56);
x_79 = l_List_set___rarg(x_56, x_67, x_78);
if (x_71 == 0)
{
lean_object* x_80; lean_object* x_81; uint32_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_67);
lean_dec(x_56);
x_80 = l_shuffle___boxed__const__1;
x_81 = l___private_Init_Util_0__outOfBounds___rarg(x_80);
x_82 = lean_unbox_uint32(x_81);
lean_dec(x_81);
x_83 = lean_box_uint32(x_82);
x_84 = l_List_set___rarg(x_79, x_2, x_83);
lean_dec(x_2);
x_85 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_57);
lean_ctor_set(x_85, 2, x_64);
lean_ctor_set(x_85, 3, x_73);
x_1 = x_85;
x_2 = x_74;
goto _start;
}
else
{
lean_object* x_87; uint32_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_87 = l_List_get___rarg(x_56, x_67);
lean_dec(x_56);
x_88 = lean_unbox_uint32(x_87);
lean_dec(x_87);
x_89 = lean_box_uint32(x_88);
x_90 = l_List_set___rarg(x_79, x_2, x_89);
lean_dec(x_2);
x_91 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_57);
lean_ctor_set(x_91, 2, x_64);
lean_ctor_set(x_91, 3, x_73);
x_1 = x_91;
x_2 = x_74;
goto _start;
}
}
else
{
lean_object* x_93; uint32_t x_94; lean_object* x_95; lean_object* x_96; 
lean_inc(x_2);
x_93 = l_List_get___rarg(x_56, x_2);
x_94 = lean_unbox_uint32(x_93);
lean_dec(x_93);
x_95 = lean_box_uint32(x_94);
lean_inc(x_56);
x_96 = l_List_set___rarg(x_56, x_67, x_95);
if (x_71 == 0)
{
lean_object* x_97; lean_object* x_98; uint32_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_67);
lean_dec(x_56);
x_97 = l_shuffle___boxed__const__1;
x_98 = l___private_Init_Util_0__outOfBounds___rarg(x_97);
x_99 = lean_unbox_uint32(x_98);
lean_dec(x_98);
x_100 = lean_box_uint32(x_99);
x_101 = l_List_set___rarg(x_96, x_2, x_100);
lean_dec(x_2);
x_102 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_57);
lean_ctor_set(x_102, 2, x_64);
lean_ctor_set(x_102, 3, x_73);
x_1 = x_102;
x_2 = x_74;
goto _start;
}
else
{
lean_object* x_104; uint32_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_104 = l_List_get___rarg(x_56, x_67);
lean_dec(x_56);
x_105 = lean_unbox_uint32(x_104);
lean_dec(x_104);
x_106 = lean_box_uint32(x_105);
x_107 = l_List_set___rarg(x_96, x_2, x_106);
lean_dec(x_2);
x_108 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_57);
lean_ctor_set(x_108, 2, x_64);
lean_ctor_set(x_108, 3, x_73);
x_1 = x_108;
x_2 = x_74;
goto _start;
}
}
}
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_shuffle___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_shuffle(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_consistentShuffle(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Hashids_defaultSalt___closed__1;
x_4 = lean_string_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_5 = lean_string_data(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_6);
lean_ctor_set(x_7, 3, x_6);
x_8 = lean_string_length(x_1);
lean_dec(x_1);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_8, x_9);
lean_dec(x_8);
x_11 = l_shuffle(x_7, x_10, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_string_mk(x_12);
return x_13;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_calculateSeparatorsLength(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; double x_5; double x_6; double x_7; double x_8; uint32_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_2 = lean_string_length(x_1);
x_3 = 0;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Float_ofScientific(x_2, x_3, x_4);
lean_dec(x_2);
x_6 = l_Hashids_separatorDivisor;
x_7 = lean_float_div(x_5, x_6);
x_8 = ceil(x_7);
x_9 = lean_float_to_uint32(x_8);
x_10 = lean_uint32_to_nat(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_dec_eq(x_10, x_11);
if (x_12 == 0)
{
return x_10;
}
else
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(2u);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_calculateSeparatorsLength___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Hashids_calculateSeparatorsLength(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_adjustAlphabetAndSeparators(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_25; 
x_25 = l_String_isEmpty(x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; double x_31; double x_32; uint8_t x_33; 
x_26 = lean_string_length(x_2);
x_27 = lean_string_length(x_3);
x_28 = lean_nat_div(x_26, x_27);
lean_dec(x_27);
lean_dec(x_26);
x_29 = 0;
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Float_ofScientific(x_28, x_29, x_30);
lean_dec(x_28);
x_32 = l_Hashids_separatorDivisor;
x_33 = lean_float_decLt(x_32, x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
lean_dec(x_1);
x_35 = l_consistentShuffle(x_2, x_34);
x_36 = l_Hashids_defaultSalt___closed__1;
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_3);
lean_ctor_set(x_37, 2, x_36);
return x_37;
}
else
{
lean_object* x_38; 
x_38 = lean_box(0);
x_4 = x_38;
goto block_24;
}
}
else
{
lean_object* x_39; 
x_39 = lean_box(0);
x_4 = x_39;
goto block_24;
}
block_24:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_dec(x_4);
x_5 = l_Hashids_calculateSeparatorsLength(x_2);
x_6 = lean_string_length(x_3);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_string_utf8_extract(x_3, x_8, x_5);
lean_dec(x_5);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_consistentShuffle(x_2, x_10);
x_12 = l_Hashids_defaultSalt___closed__1;
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_nat_sub(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_string_utf8_extract(x_2, x_15, x_14);
x_17 = lean_string_append(x_3, x_16);
lean_dec(x_16);
x_18 = lean_string_length(x_2);
x_19 = lean_string_utf8_extract(x_2, x_14, x_18);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = l_consistentShuffle(x_19, x_20);
x_22 = l_Hashids_defaultSalt___closed__1;
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_17);
lean_ctor_set(x_23, 2, x_22);
return x_23;
}
}
}
}
static lean_object* _init_l_minimalAlphabetLength() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(16u);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups_loop___at_Hashids_calculateAlphabetAndSeparators___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint32_t x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_unbox_uint32(x_5);
lean_inc(x_2);
x_8 = l_List_elem___at_System_FilePath_normalize___spec__1(x_7, x_2);
if (x_8 == 0)
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
}
else
{
lean_object* x_11; lean_object* x_12; uint32_t x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = lean_unbox_uint32(x_11);
lean_inc(x_2);
x_14 = l_List_elem___at_System_FilePath_normalize___spec__1(x_13, x_2);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_2);
x_1 = x_12;
x_2 = x_15;
goto _start;
}
else
{
lean_dec(x_11);
x_1 = x_12;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at_Hashids_calculateAlphabetAndSeparators___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_eraseDups_loop___at_Hashids_calculateAlphabetAndSeparators___spec__2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Hashids_calculateAlphabetAndSeparators___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint32_t x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_unbox_uint32(x_6);
lean_inc(x_1);
x_9 = l_List_elem___at_System_FilePath_normalize___spec__1(x_8, x_1);
if (x_9 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint32_t x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_unbox_uint32(x_12);
lean_inc(x_1);
x_15 = l_List_elem___at_System_FilePath_normalize___spec__1(x_14, x_1);
if (x_15 == 0)
{
lean_dec(x_12);
x_2 = x_13;
goto _start;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_3);
x_2 = x_13;
x_3 = x_17;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Hashids_calculateAlphabetAndSeparators___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint32_t x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_unbox_uint32(x_6);
lean_inc(x_1);
x_9 = l_List_elem___at_System_FilePath_normalize___spec__1(x_8, x_1);
if (x_9 == 0)
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint32_t x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_unbox_uint32(x_12);
lean_inc(x_1);
x_15 = l_List_elem___at_System_FilePath_normalize___spec__1(x_14, x_1);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_3);
x_2 = x_13;
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_12);
x_2 = x_13;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Hashids_calculateAlphabetAndSeparators___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Hashids_defaultSeparators;
x_2 = lean_string_data(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_calculateAlphabetAndSeparators(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_3 = lean_string_data(x_2);
x_4 = l_List_eraseDups___at_Hashids_calculateAlphabetAndSeparators___spec__1(x_3);
x_5 = lean_box(0);
x_6 = l_Hashids_calculateAlphabetAndSeparators___closed__1;
lean_inc(x_4);
x_7 = l_List_filterTR_loop___at_Hashids_calculateAlphabetAndSeparators___spec__3(x_4, x_6, x_5);
lean_inc(x_7);
x_8 = l_List_filterTR_loop___at_Hashids_calculateAlphabetAndSeparators___spec__4(x_7, x_4, x_5);
x_9 = lean_string_mk(x_7);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = l_consistentShuffle(x_9, x_10);
x_12 = lean_string_mk(x_8);
x_13 = l_Hashids_adjustAlphabetAndSeparators(x_1, x_12, x_11);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_ctor_get(x_13, 2);
lean_dec(x_17);
x_18 = lean_string_length(x_15);
x_19 = l_Hashids_guardDivisor;
x_20 = lean_nat_div(x_18, x_19);
x_21 = lean_unsigned_to_nat(3u);
x_22 = lean_nat_dec_lt(x_18, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_string_utf8_extract(x_15, x_23, x_20);
x_25 = lean_string_utf8_extract(x_15, x_20, x_18);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_15);
lean_ctor_set(x_13, 2, x_24);
lean_ctor_set(x_13, 0, x_25);
return x_13;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_18);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_string_utf8_extract(x_16, x_26, x_20);
x_28 = lean_string_length(x_16);
x_29 = lean_string_utf8_extract(x_16, x_20, x_28);
lean_dec(x_28);
lean_dec(x_20);
lean_dec(x_16);
lean_ctor_set(x_13, 2, x_27);
lean_ctor_set(x_13, 1, x_29);
return x_13;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_30 = lean_ctor_get(x_13, 0);
x_31 = lean_ctor_get(x_13, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_13);
x_32 = lean_string_length(x_30);
x_33 = l_Hashids_guardDivisor;
x_34 = lean_nat_div(x_32, x_33);
x_35 = lean_unsigned_to_nat(3u);
x_36 = lean_nat_dec_lt(x_32, x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_unsigned_to_nat(0u);
x_38 = lean_string_utf8_extract(x_30, x_37, x_34);
x_39 = lean_string_utf8_extract(x_30, x_34, x_32);
lean_dec(x_32);
lean_dec(x_34);
lean_dec(x_30);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_31);
lean_ctor_set(x_40, 2, x_38);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_32);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_string_utf8_extract(x_31, x_41, x_34);
x_43 = lean_string_length(x_31);
x_44 = lean_string_utf8_extract(x_31, x_34, x_43);
lean_dec(x_43);
lean_dec(x_34);
lean_dec(x_31);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_30);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_45, 2, x_42);
return x_45;
}
}
}
}
LEAN_EXPORT lean_object* l_Hashids_alphandseps(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = l_Hashids_calculateAlphabetAndSeparators(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Hashids_alphabet(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Hashids_alphandseps(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Hashids_separators(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Hashids_alphandseps(x_1);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Hashids_guards(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Hashids_alphandseps(x_1);
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Hashids_hashAux___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_Char_instInhabitedChar;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_hashAux(uint64_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; uint64_t x_5; uint8_t x_6; 
x_4 = lean_ctor_get_uint64(x_3, sizeof(void*)*1);
x_5 = 0;
x_6 = lean_uint64_dec_le(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; uint8_t x_11; uint64_t x_12; uint64_t x_13; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_2, x_7);
x_9 = lean_uint64_modn(x_4, x_8);
x_10 = lean_uint64_to_nat(x_9);
x_11 = lean_nat_dec_lt(x_10, x_8);
x_12 = lean_uint64_of_nat(x_8);
lean_dec(x_8);
x_13 = lean_uint64_div(x_4, x_12);
if (x_11 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint32_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
lean_dec(x_3);
x_15 = l_Hashids_hashAux___boxed__const__1;
x_16 = l___private_Init_Util_0__outOfBounds___rarg(x_15);
x_17 = lean_unbox_uint32(x_16);
lean_dec(x_16);
x_18 = l_Hashids_defaultSalt___closed__1;
x_19 = lean_string_push(x_18, x_17);
x_20 = lean_string_append(x_18, x_19);
lean_dec(x_19);
x_21 = lean_string_append(x_20, x_18);
x_22 = lean_string_append(x_21, x_14);
lean_dec(x_14);
x_23 = lean_string_append(x_22, x_18);
x_24 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set_uint64(x_24, sizeof(void*)*1, x_13);
x_3 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; uint32_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_26 = lean_ctor_get(x_3, 0);
lean_inc(x_26);
lean_dec(x_3);
x_27 = l_List_get___rarg(x_2, x_10);
x_28 = lean_unbox_uint32(x_27);
lean_dec(x_27);
x_29 = l_Hashids_defaultSalt___closed__1;
x_30 = lean_string_push(x_29, x_28);
x_31 = lean_string_append(x_29, x_30);
lean_dec(x_30);
x_32 = lean_string_append(x_31, x_29);
x_33 = lean_string_append(x_32, x_26);
lean_dec(x_26);
x_34 = lean_string_append(x_33, x_29);
x_35 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set_uint64(x_35, sizeof(void*)*1, x_13);
x_3 = x_35;
goto _start;
}
}
else
{
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_hashAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_5 = l_Hashids_hashAux(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Hashids_hash(uint64_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_string_data(x_2);
x_4 = l_Hashids_defaultSalt___closed__1;
x_5 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set_uint64(x_5, sizeof(void*)*1, x_1);
x_6 = l_Hashids_hashAux(x_1, x_3, x_5);
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Hashids_hash___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = l_Hashids_hash(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Hashids_initialEncode___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_Char_instInhabitedChar;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Hashids_initialEncode___boxed__const__2() {
_start:
{
uint64_t x_1; lean_object* x_2; 
x_1 = l_instInhabitedUInt64;
x_2 = lean_box_uint64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_initialEncode(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthTRAux___rarg(x_2, x_8);
x_10 = lean_nat_dec_le(x_9, x_5);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint64_t x_21; 
x_11 = lean_nat_dec_lt(x_5, x_9);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_13 = lean_string_append(x_4, x_12);
x_14 = lean_string_append(x_13, x_6);
x_15 = lean_string_length(x_6);
x_16 = lean_string_utf8_extract(x_14, x_8, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = l_consistentShuffle(x_6, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
x_20 = lean_nat_dec_le(x_9, x_19);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_48; lean_object* x_49; uint64_t x_50; 
x_48 = l_Hashids_initialEncode___boxed__const__2;
x_49 = l___private_Init_Util_0__outOfBounds___rarg(x_48);
x_50 = lean_unbox_uint64(x_49);
lean_dec(x_49);
x_21 = x_50;
goto block_47;
}
else
{
lean_object* x_51; uint64_t x_52; 
lean_inc(x_5);
x_51 = l_List_get___rarg(x_2, x_5);
x_52 = lean_unbox_uint64(x_51);
lean_dec(x_51);
x_21 = x_52;
goto block_47;
}
block_47:
{
lean_object* x_22; 
lean_inc(x_17);
x_22 = l_Hashids_hash(x_21, x_17);
if (x_20 == 0)
{
lean_object* x_23; uint32_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_uint64_to_nat(x_21);
x_24 = lean_string_utf8_get_bang(x_22, x_8);
x_25 = lean_uint32_to_nat(x_24);
x_26 = lean_nat_add(x_25, x_5);
lean_dec(x_5);
lean_dec(x_25);
x_27 = lean_nat_mod(x_23, x_26);
lean_dec(x_26);
lean_dec(x_23);
x_28 = l_List_lengthTRAux___rarg(x_3, x_8);
x_29 = lean_nat_mod(x_27, x_28);
lean_dec(x_27);
x_30 = lean_string_append(x_7, x_22);
lean_dec(x_22);
x_31 = lean_nat_dec_lt(x_29, x_28);
lean_dec(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint32_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_29);
x_32 = l_Hashids_initialEncode___boxed__const__1;
x_33 = l___private_Init_Util_0__outOfBounds___rarg(x_32);
x_34 = lean_unbox_uint32(x_33);
lean_dec(x_33);
x_35 = l_Hashids_defaultSalt___closed__1;
x_36 = lean_string_push(x_35, x_34);
x_37 = lean_string_append(x_30, x_36);
lean_dec(x_36);
x_5 = x_19;
x_6 = x_17;
x_7 = x_37;
goto _start;
}
else
{
lean_object* x_39; uint32_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = l_List_get___rarg(x_3, x_29);
x_40 = lean_unbox_uint32(x_39);
lean_dec(x_39);
x_41 = l_Hashids_defaultSalt___closed__1;
x_42 = lean_string_push(x_41, x_40);
x_43 = lean_string_append(x_30, x_42);
lean_dec(x_42);
x_5 = x_19;
x_6 = x_17;
x_7 = x_43;
goto _start;
}
}
else
{
lean_object* x_45; 
lean_dec(x_5);
x_45 = lean_string_append(x_7, x_22);
lean_dec(x_22);
x_5 = x_19;
x_6 = x_17;
x_7 = x_45;
goto _start;
}
}
}
else
{
lean_object* x_53; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_7);
lean_ctor_set(x_53, 1, x_6);
return x_53;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_initialEncode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Hashids_initialEncode(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Hashids_ensureMinimalLength(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_string_length(x_4);
x_6 = l_Hashids_hashLength;
x_7 = lean_nat_dec_le(x_6, x_5);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_3);
x_8 = l_consistentShuffle(x_3, x_3);
lean_inc(x_2);
lean_inc(x_8);
x_9 = l_String_drop(x_8, x_2);
x_10 = lean_string_append(x_9, x_4);
lean_dec(x_4);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_string_utf8_extract(x_8, x_11, x_2);
x_13 = lean_string_append(x_10, x_12);
lean_dec(x_12);
x_3 = x_8;
x_4 = x_13;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_ensureMinimalLength___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Hashids_ensureMinimalLength(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Hashids_guardIndex___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_Char_instInhabitedChar;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_guardIndex(lean_object* x_1, uint32_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_uint32_to_nat(x_2);
x_6 = lean_string_data(x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_6, x_7);
x_9 = lean_nat_dec_lt(x_4, x_8);
lean_dec(x_8);
x_10 = l_Hashids_guards(x_1);
x_11 = lean_string_length(x_10);
lean_dec(x_10);
if (x_9 == 0)
{
lean_object* x_12; lean_object* x_13; uint32_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_4);
x_12 = l_Hashids_guardIndex___boxed__const__1;
x_13 = l___private_Init_Util_0__outOfBounds___rarg(x_12);
x_14 = lean_unbox_uint32(x_13);
lean_dec(x_13);
x_15 = lean_uint32_to_nat(x_14);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_15);
lean_dec(x_5);
x_17 = lean_nat_mod(x_16, x_11);
lean_dec(x_11);
lean_dec(x_16);
return x_17;
}
else
{
lean_object* x_18; uint32_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = l_List_get___rarg(x_6, x_4);
lean_dec(x_6);
x_19 = lean_unbox_uint32(x_18);
lean_dec(x_18);
x_20 = lean_uint32_to_nat(x_19);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_20);
lean_dec(x_5);
x_22 = lean_nat_mod(x_21, x_11);
lean_dec(x_11);
lean_dec(x_21);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_guardIndex___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_6 = l_Hashids_guardIndex(x_1, x_5, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Hashids_addGuardsIfNecessary___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_Char_instInhabitedChar;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_addGuardsIfNecessary(lean_object* x_1, lean_object* x_2, uint32_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_string_length(x_2);
x_5 = l_Hashids_hashLength;
x_6 = lean_nat_dec_le(x_5, x_4);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_inc(x_1);
x_7 = l_Hashids_guards(x_1);
x_8 = lean_string_data(x_7);
x_9 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Hashids_guardIndex(x_1, x_3, x_2, x_9);
x_11 = l_List_lengthTRAux___rarg(x_8, x_9);
x_12 = lean_nat_dec_lt(x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint32_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_10);
x_13 = l_Hashids_addGuardsIfNecessary___boxed__const__1;
x_14 = l___private_Init_Util_0__outOfBounds___rarg(x_13);
x_15 = lean_unbox_uint32(x_14);
lean_dec(x_14);
x_16 = l_Hashids_defaultSalt___closed__1;
x_17 = lean_string_push(x_16, x_15);
x_18 = lean_string_append(x_2, x_17);
lean_dec(x_17);
x_19 = lean_string_length(x_18);
x_20 = lean_nat_dec_le(x_5, x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_unsigned_to_nat(2u);
lean_inc(x_18);
x_22 = l_Hashids_guardIndex(x_1, x_3, x_18, x_21);
x_23 = lean_nat_dec_lt(x_22, x_11);
lean_dec(x_11);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint32_t x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_22);
lean_dec(x_8);
x_24 = l_Hashids_addGuardsIfNecessary___boxed__const__1;
x_25 = l___private_Init_Util_0__outOfBounds___rarg(x_24);
x_26 = lean_unbox_uint32(x_25);
lean_dec(x_25);
x_27 = lean_string_push(x_16, x_26);
x_28 = lean_string_append(x_18, x_27);
lean_dec(x_27);
return x_28;
}
else
{
lean_object* x_29; uint32_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = l_List_get___rarg(x_8, x_22);
lean_dec(x_8);
x_30 = lean_unbox_uint32(x_29);
lean_dec(x_29);
x_31 = lean_string_push(x_16, x_30);
x_32 = lean_string_append(x_18, x_31);
lean_dec(x_31);
return x_32;
}
}
else
{
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_1);
return x_18;
}
}
else
{
lean_object* x_33; uint32_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_33 = l_List_get___rarg(x_8, x_10);
x_34 = lean_unbox_uint32(x_33);
lean_dec(x_33);
x_35 = l_Hashids_defaultSalt___closed__1;
x_36 = lean_string_push(x_35, x_34);
x_37 = lean_string_append(x_2, x_36);
lean_dec(x_36);
x_38 = lean_string_length(x_37);
x_39 = lean_nat_dec_le(x_5, x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_unsigned_to_nat(2u);
lean_inc(x_37);
x_41 = l_Hashids_guardIndex(x_1, x_3, x_37, x_40);
x_42 = lean_nat_dec_lt(x_41, x_11);
lean_dec(x_11);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; uint32_t x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_41);
lean_dec(x_8);
x_43 = l_Hashids_addGuardsIfNecessary___boxed__const__1;
x_44 = l___private_Init_Util_0__outOfBounds___rarg(x_43);
x_45 = lean_unbox_uint32(x_44);
lean_dec(x_44);
x_46 = lean_string_push(x_35, x_45);
x_47 = lean_string_append(x_37, x_46);
lean_dec(x_46);
return x_47;
}
else
{
lean_object* x_48; uint32_t x_49; lean_object* x_50; lean_object* x_51; 
x_48 = l_List_get___rarg(x_8, x_41);
lean_dec(x_8);
x_49 = lean_unbox_uint32(x_48);
lean_dec(x_48);
x_50 = lean_string_push(x_35, x_49);
x_51 = lean_string_append(x_37, x_50);
lean_dec(x_50);
return x_51;
}
}
else
{
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_1);
return x_37;
}
}
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_addGuardsIfNecessary___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_5 = l_Hashids_addGuardsIfNecessary(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_List_elem___at_Hashids_encode___spec__1(uint64_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_unbox_uint64(x_4);
lean_dec(x_4);
x_7 = lean_uint64_dec_eq(x_1, x_6);
if (x_7 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_9; 
lean_dec(x_5);
x_9 = 1;
return x_9;
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed__const__1() {
_start:
{
uint64_t x_1; lean_object* x_2; 
x_1 = l_instInhabitedUInt64;
x_2 = lean_box_uint64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Hashids_encode___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthTRAux___rarg(x_1, x_8);
x_10 = lean_nat_dec_lt(x_6, x_9);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(100u);
x_12 = lean_nat_add(x_6, x_11);
if (x_10 == 0)
{
lean_object* x_13; lean_object* x_14; uint64_t x_15; uint64_t x_16; uint32_t x_17; lean_object* x_18; 
lean_dec(x_6);
x_13 = l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed__const__1;
x_14 = l___private_Init_Util_0__outOfBounds___rarg(x_13);
x_15 = lean_unbox_uint64(x_14);
lean_dec(x_14);
x_16 = lean_uint64_modn(x_15, x_12);
lean_dec(x_12);
x_17 = lean_uint64_to_uint32(x_16);
x_18 = lean_box_uint32(x_17);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_18);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_20; uint64_t x_21; uint64_t x_22; uint32_t x_23; lean_object* x_24; 
x_20 = l_List_get___rarg(x_1, x_6);
x_21 = lean_unbox_uint64(x_20);
lean_dec(x_20);
x_22 = lean_uint64_modn(x_21, x_12);
lean_dec(x_12);
x_23 = lean_uint64_to_uint32(x_22);
x_24 = lean_box_uint32(x_23);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_24);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_2, 0);
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_2);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_List_lengthTRAux___rarg(x_1, x_28);
x_30 = lean_nat_dec_lt(x_26, x_29);
lean_dec(x_29);
x_31 = lean_unsigned_to_nat(100u);
x_32 = lean_nat_add(x_26, x_31);
if (x_30 == 0)
{
lean_object* x_33; lean_object* x_34; uint64_t x_35; uint64_t x_36; uint32_t x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_26);
x_33 = l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed__const__1;
x_34 = l___private_Init_Util_0__outOfBounds___rarg(x_33);
x_35 = lean_unbox_uint64(x_34);
lean_dec(x_34);
x_36 = lean_uint64_modn(x_35, x_32);
lean_dec(x_32);
x_37 = lean_uint64_to_uint32(x_36);
x_38 = lean_box_uint32(x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_3);
x_2 = x_27;
x_3 = x_39;
goto _start;
}
else
{
lean_object* x_41; uint64_t x_42; uint64_t x_43; uint32_t x_44; lean_object* x_45; lean_object* x_46; 
x_41 = l_List_get___rarg(x_1, x_26);
x_42 = lean_unbox_uint64(x_41);
lean_dec(x_41);
x_43 = lean_uint64_modn(x_42, x_32);
lean_dec(x_32);
x_44 = lean_uint64_to_uint32(x_43);
x_45 = lean_box_uint32(x_44);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_3);
x_2 = x_27;
x_3 = x_46;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint32_t l_List_foldr___at_Hashids_encode___spec__3(uint32_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint32_t x_5; uint32_t x_6; uint32_t x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_foldr___at_Hashids_encode___spec__3(x_1, x_4);
x_6 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_7 = lean_uint32_add(x_6, x_5);
return x_7;
}
}
}
static lean_object* _init_l_Hashids_encode___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Hashids_defaultSalt___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Hashids_encode___closed__2() {
_start:
{
uint64_t x_1; lean_object* x_2; 
x_1 = l_Hashids_MAX__INTEGER;
x_2 = lean_uint64_to_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Hashids_encode___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Hashids_encode___closed__2;
x_2 = l_Nat_repr(x_1);
return x_2;
}
}
static lean_object* _init_l_Hashids_encode___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("number can not be greater than ", 31);
return x_1;
}
}
static lean_object* _init_l_Hashids_encode___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Hashids_encode___closed__4;
x_2 = l_Hashids_encode___closed__3;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Hashids_encode___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Hashids_encode___closed__5;
x_2 = l_Hashids_defaultSalt___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Hashids_encode___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Hashids_encode___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Hashids_encode___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_Char_instInhabitedChar;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_encode(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_Hashids_encode___closed__1;
return x_3;
}
else
{
uint64_t x_4; uint8_t x_5; 
x_4 = l_Hashids_MAX__INTEGER;
lean_inc(x_2);
x_5 = l_List_elem___at_Hashids_encode___spec__1(x_4, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint32_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint32_t x_14; lean_object* x_15; uint32_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
lean_inc(x_1);
x_6 = l_Hashids_alphabet(x_1);
x_7 = lean_string_length(x_6);
x_8 = 0;
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_List_lengthTRAux___rarg(x_2, x_9);
x_11 = l_List_range(x_10);
x_12 = lean_box(0);
x_13 = l_List_mapTR_loop___at_Hashids_encode___spec__2(x_2, x_11, x_12);
x_14 = l_List_foldr___at_Hashids_encode___spec__3(x_8, x_13);
lean_inc(x_6);
x_15 = lean_string_data(x_6);
x_16 = lean_uint32_modn(x_14, x_7);
x_17 = lean_uint32_to_nat(x_16);
x_18 = l_List_lengthTRAux___rarg(x_15, x_9);
x_19 = lean_nat_dec_lt(x_17, x_18);
lean_dec(x_18);
lean_inc(x_1);
x_20 = l_Hashids_separators(x_1);
x_21 = lean_string_data(x_20);
if (x_19 == 0)
{
lean_object* x_22; lean_object* x_23; uint32_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_17);
lean_dec(x_15);
x_22 = l_Hashids_encode___boxed__const__1;
x_23 = l___private_Init_Util_0__outOfBounds___rarg(x_22);
x_24 = lean_unbox_uint32(x_23);
lean_dec(x_23);
x_25 = l_Hashids_defaultSalt___closed__1;
x_26 = lean_string_push(x_25, x_24);
lean_inc(x_26);
x_27 = l_Hashids_initialEncode(x_1, x_2, x_21, x_26, x_9, x_6, x_26);
lean_dec(x_21);
lean_dec(x_2);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_1);
x_30 = l_Hashids_addGuardsIfNecessary(x_1, x_28, x_14);
x_31 = lean_unsigned_to_nat(2u);
x_32 = lean_nat_div(x_7, x_31);
lean_dec(x_7);
x_33 = l_Hashids_ensureMinimalLength(x_1, x_32, x_29, x_30);
lean_dec(x_1);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
else
{
lean_object* x_35; uint32_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_35 = l_List_get___rarg(x_15, x_17);
lean_dec(x_15);
x_36 = lean_unbox_uint32(x_35);
lean_dec(x_35);
x_37 = l_Hashids_defaultSalt___closed__1;
x_38 = lean_string_push(x_37, x_36);
lean_inc(x_38);
x_39 = l_Hashids_initialEncode(x_1, x_2, x_21, x_38, x_9, x_6, x_38);
lean_dec(x_21);
lean_dec(x_2);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_1);
x_42 = l_Hashids_addGuardsIfNecessary(x_1, x_40, x_14);
x_43 = lean_unsigned_to_nat(2u);
x_44 = lean_nat_div(x_7, x_43);
lean_dec(x_7);
x_45 = l_Hashids_ensureMinimalLength(x_1, x_44, x_41, x_42);
lean_dec(x_1);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
return x_46;
}
}
else
{
lean_object* x_47; 
lean_dec(x_2);
lean_dec(x_1);
x_47 = l_Hashids_encode___closed__7;
return x_47;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at_Hashids_encode___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = l_List_elem___at_Hashids_encode___spec__1(x_3, x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapTR_loop___at_Hashids_encode___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at_Hashids_encode___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at_Hashids_encode___spec__3(x_3, x_2);
x_5 = lean_box_uint32(x_4);
return x_5;
}
}
static lean_object* _init_l_Hashids_extractLotteryCharAndHashs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" ", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Hashids_extractLotteryCharAndHashs(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = l_Hashids_separators(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_2, x_4);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(3u);
x_9 = lean_nat_dec_eq(x_5, x_8);
lean_dec(x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint32_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_10 = l_String_instInhabitedString;
x_11 = l_List_get_x21___rarg(x_10, x_2, x_4);
x_12 = lean_string_utf8_get_bang(x_11, x_4);
x_13 = lean_string_length(x_11);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_string_utf8_extract(x_11, x_14, x_13);
lean_dec(x_13);
lean_dec(x_11);
x_16 = l_Hashids_extractLotteryCharAndHashs___closed__1;
x_17 = l_Hashids_defaultSalt___closed__1;
x_18 = l_String_replace_loop(x_15, x_3, x_16, x_17, x_4, x_4);
lean_dec(x_3);
lean_dec(x_15);
x_19 = l_String_splitOn(x_18, x_16);
x_20 = lean_box_uint32(x_12);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint32_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = l_String_instInhabitedString;
x_23 = lean_unsigned_to_nat(1u);
x_24 = l_List_get_x21___rarg(x_22, x_2, x_23);
x_25 = lean_string_utf8_get_bang(x_24, x_4);
x_26 = lean_string_length(x_24);
x_27 = lean_string_utf8_extract(x_24, x_23, x_26);
lean_dec(x_26);
lean_dec(x_24);
x_28 = l_Hashids_extractLotteryCharAndHashs___closed__1;
x_29 = l_Hashids_defaultSalt___closed__1;
x_30 = l_String_replace_loop(x_27, x_3, x_28, x_29, x_4, x_4);
lean_dec(x_3);
lean_dec(x_27);
x_31 = l_String_splitOn(x_30, x_28);
x_32 = lean_box_uint32(x_25);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint32_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_5);
x_34 = l_String_instInhabitedString;
x_35 = lean_unsigned_to_nat(1u);
x_36 = l_List_get_x21___rarg(x_34, x_2, x_35);
x_37 = lean_string_utf8_get_bang(x_36, x_4);
x_38 = lean_string_length(x_36);
x_39 = lean_string_utf8_extract(x_36, x_35, x_38);
lean_dec(x_38);
lean_dec(x_36);
x_40 = l_Hashids_extractLotteryCharAndHashs___closed__1;
x_41 = l_Hashids_defaultSalt___closed__1;
x_42 = l_String_replace_loop(x_39, x_3, x_40, x_41, x_4, x_4);
lean_dec(x_3);
lean_dec(x_39);
x_43 = l_String_splitOn(x_42, x_40);
x_44 = lean_box_uint32(x_37);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_extractLotteryCharAndHashs___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Hashids_extractLotteryCharAndHashs(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Hashids_unhashAux___lambda__1___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_Char_instInhabitedChar;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Hashids_unhashAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint32_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint32_t x_8; uint8_t x_9; 
lean_dec(x_1);
x_6 = l_Hashids_unhashAux___lambda__1___boxed__const__1;
x_7 = l___private_Init_Util_0__outOfBounds___rarg(x_6);
x_8 = lean_unbox_uint32(x_7);
lean_dec(x_7);
x_9 = lean_uint32_dec_eq(x_4, x_8);
return x_9;
}
else
{
lean_object* x_10; uint32_t x_11; uint8_t x_12; 
x_10 = l_List_get___rarg(x_3, x_1);
x_11 = lean_unbox_uint32(x_10);
lean_dec(x_10);
x_12 = lean_uint32_dec_eq(x_4, x_11);
return x_12;
}
}
}
LEAN_EXPORT uint64_t l_Hashids_unhashAux(lean_object* x_1, lean_object* x_2, uint64_t x_3, uint64_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_lengthTRAux___rarg(x_1, x_6);
x_8 = lean_nat_dec_le(x_7, x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; lean_object* x_21; 
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_5);
x_9 = lean_alloc_closure((void*)(l_Hashids_unhashAux___lambda__1___boxed), 4, 3);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_7);
lean_closure_set(x_9, 2, x_1);
x_10 = lean_string_utf8_byte_size(x_2);
x_11 = l_String_findAux(x_2, x_9, x_10, x_6);
lean_dec(x_10);
x_12 = lean_nat_sub(x_7, x_5);
lean_dec(x_7);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_12, x_13);
lean_dec(x_12);
x_15 = lean_uint64_to_nat(x_3);
x_16 = lean_nat_pow(x_15, x_14);
lean_dec(x_14);
lean_dec(x_15);
x_17 = lean_uint64_of_nat(x_16);
lean_dec(x_16);
x_18 = lean_uint64_of_nat(x_11);
lean_dec(x_11);
x_19 = lean_uint64_mul(x_18, x_17);
x_20 = lean_uint64_add(x_4, x_19);
x_21 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_4 = x_20;
x_5 = x_21;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_unhashAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox_uint32(x_4);
lean_dec(x_4);
x_6 = l_Hashids_unhashAux___lambda__1(x_1, x_2, x_3, x_5);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Hashids_unhashAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint64_t x_6; uint64_t x_7; uint64_t x_8; lean_object* x_9; 
x_6 = lean_unbox_uint64(x_3);
lean_dec(x_3);
x_7 = lean_unbox_uint64(x_4);
lean_dec(x_4);
x_8 = l_Hashids_unhashAux(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
x_9 = lean_box_uint64(x_8);
return x_9;
}
}
LEAN_EXPORT uint64_t l_Hashids_unhash(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; uint64_t x_6; lean_object* x_7; uint64_t x_8; 
x_3 = lean_string_data(x_1);
x_4 = lean_string_length(x_2);
x_5 = lean_uint64_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Hashids_unhashAux(x_3, x_2, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Hashids_unhash___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; lean_object* x_4; 
x_3 = l_Hashids_unhash(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box_uint64(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Hashids_unhashSubHashes_unhashSubHashesAux(lean_object* x_1, uint32_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_5);
return x_4;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = l_Hashids_defaultSalt___closed__1;
x_10 = lean_string_push(x_9, x_2);
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = lean_string_append(x_11, x_9);
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_string_append(x_14, x_9);
x_16 = lean_string_append(x_15, x_5);
x_17 = lean_string_append(x_16, x_9);
x_18 = lean_string_length(x_5);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_string_utf8_extract(x_17, x_19, x_18);
lean_dec(x_18);
lean_dec(x_17);
x_21 = l_consistentShuffle(x_5, x_20);
x_22 = l_Hashids_unhash(x_7, x_21);
x_23 = lean_box(0);
x_24 = lean_box_uint64(x_22);
lean_ctor_set(x_3, 1, x_23);
lean_ctor_set(x_3, 0, x_24);
x_25 = l_List_appendTR___rarg(x_4, x_3);
x_3 = x_8;
x_4 = x_25;
x_5 = x_21;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint64_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_27 = lean_ctor_get(x_3, 0);
x_28 = lean_ctor_get(x_3, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_3);
x_29 = l_Hashids_defaultSalt___closed__1;
x_30 = lean_string_push(x_29, x_2);
x_31 = lean_string_append(x_29, x_30);
lean_dec(x_30);
x_32 = lean_string_append(x_31, x_29);
x_33 = lean_ctor_get(x_1, 0);
x_34 = lean_string_append(x_32, x_33);
x_35 = lean_string_append(x_34, x_29);
x_36 = lean_string_append(x_35, x_5);
x_37 = lean_string_append(x_36, x_29);
x_38 = lean_string_length(x_5);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_string_utf8_extract(x_37, x_39, x_38);
lean_dec(x_38);
lean_dec(x_37);
x_41 = l_consistentShuffle(x_5, x_40);
x_42 = l_Hashids_unhash(x_27, x_41);
x_43 = lean_box(0);
x_44 = lean_box_uint64(x_42);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_List_appendTR___rarg(x_4, x_45);
x_3 = x_28;
x_4 = x_46;
x_5 = x_41;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Hashids_unhashSubHashes_unhashSubHashesAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; lean_object* x_7; 
x_6 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_7 = l_Hashids_unhashSubHashes_unhashSubHashesAux(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Hashids_unhashSubHashes(lean_object* x_1, lean_object* x_2, uint32_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Hashids_unhashSubHashes_unhashSubHashesAux(x_1, x_3, x_2, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Hashids_unhashSubHashes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; lean_object* x_7; 
x_6 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_7 = l_Hashids_unhashSubHashes(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_Hashids_decode___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("decode error", 12);
return x_1;
}
}
static lean_object* _init_l_Hashids_decode___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Hashids_decode___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Hashids_decode___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Hashids_decode(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_String_isEmpty(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint32_t x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_1);
x_4 = l_Hashids_guards(x_1);
x_5 = l_Hashids_extractLotteryCharAndHashs___closed__1;
x_6 = l_Hashids_defaultSalt___closed__1;
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_String_replace_loop(x_2, x_4, x_5, x_6, x_7, x_7);
lean_dec(x_4);
x_9 = l_String_splitOn(x_8, x_5);
lean_inc(x_1);
x_10 = l_Hashids_extractLotteryCharAndHashs(x_1, x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
lean_inc(x_1);
x_14 = l_Hashids_alphabet(x_1);
x_15 = lean_unbox_uint32(x_11);
lean_dec(x_11);
x_16 = l_Hashids_unhashSubHashes_unhashSubHashesAux(x_1, x_15, x_12, x_13, x_14);
lean_inc(x_16);
x_17 = l_Hashids_encode(x_1, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_17);
lean_dec(x_16);
x_18 = l_Hashids_decode___closed__2;
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_string_dec_eq(x_20, x_2);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_free_object(x_17);
lean_dec(x_16);
x_22 = l_Hashids_decode___closed__3;
return x_22;
}
else
{
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_string_dec_eq(x_23, x_2);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_16);
x_25 = l_Hashids_decode___closed__3;
return x_25;
}
else
{
lean_object* x_26; 
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_16);
return x_26;
}
}
}
}
else
{
lean_object* x_27; 
lean_dec(x_1);
x_27 = l_Hashids_decode___closed__3;
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Hashids_decode___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Hashids_decode(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Hashids_hashids(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Hashids_MAX__INTEGER = _init_l_Hashids_MAX__INTEGER();
l_Hashids_defaultSalt___closed__1 = _init_l_Hashids_defaultSalt___closed__1();
lean_mark_persistent(l_Hashids_defaultSalt___closed__1);
l_Hashids_defaultSalt = _init_l_Hashids_defaultSalt();
lean_mark_persistent(l_Hashids_defaultSalt);
l_Hashids_defaultAlphabet___closed__1 = _init_l_Hashids_defaultAlphabet___closed__1();
lean_mark_persistent(l_Hashids_defaultAlphabet___closed__1);
l_Hashids_defaultAlphabet = _init_l_Hashids_defaultAlphabet();
lean_mark_persistent(l_Hashids_defaultAlphabet);
l_Hashids_defaultSeparators___closed__1 = _init_l_Hashids_defaultSeparators___closed__1();
lean_mark_persistent(l_Hashids_defaultSeparators___closed__1);
l_Hashids_defaultSeparators = _init_l_Hashids_defaultSeparators();
lean_mark_persistent(l_Hashids_defaultSeparators);
l_Hashids_defaultMinimalHashLength = _init_l_Hashids_defaultMinimalHashLength();
lean_mark_persistent(l_Hashids_defaultMinimalHashLength);
l_Hashids_hashLength = _init_l_Hashids_hashLength();
lean_mark_persistent(l_Hashids_hashLength);
l_Hashids_defaultHashids___closed__1 = _init_l_Hashids_defaultHashids___closed__1();
lean_mark_persistent(l_Hashids_defaultHashids___closed__1);
l_Hashids_defaultHashids = _init_l_Hashids_defaultHashids();
lean_mark_persistent(l_Hashids_defaultHashids);
l_Hashids_guardDivisor = _init_l_Hashids_guardDivisor();
lean_mark_persistent(l_Hashids_guardDivisor);
l_Hashids_separatorDivisor___closed__1 = _init_l_Hashids_separatorDivisor___closed__1();
l_Hashids_separatorDivisor = _init_l_Hashids_separatorDivisor();
l_shuffle___boxed__const__1 = _init_l_shuffle___boxed__const__1();
lean_mark_persistent(l_shuffle___boxed__const__1);
l_minimalAlphabetLength = _init_l_minimalAlphabetLength();
lean_mark_persistent(l_minimalAlphabetLength);
l_Hashids_calculateAlphabetAndSeparators___closed__1 = _init_l_Hashids_calculateAlphabetAndSeparators___closed__1();
lean_mark_persistent(l_Hashids_calculateAlphabetAndSeparators___closed__1);
l_Hashids_hashAux___boxed__const__1 = _init_l_Hashids_hashAux___boxed__const__1();
lean_mark_persistent(l_Hashids_hashAux___boxed__const__1);
l_Hashids_initialEncode___boxed__const__1 = _init_l_Hashids_initialEncode___boxed__const__1();
lean_mark_persistent(l_Hashids_initialEncode___boxed__const__1);
l_Hashids_initialEncode___boxed__const__2 = _init_l_Hashids_initialEncode___boxed__const__2();
lean_mark_persistent(l_Hashids_initialEncode___boxed__const__2);
l_Hashids_guardIndex___boxed__const__1 = _init_l_Hashids_guardIndex___boxed__const__1();
lean_mark_persistent(l_Hashids_guardIndex___boxed__const__1);
l_Hashids_addGuardsIfNecessary___boxed__const__1 = _init_l_Hashids_addGuardsIfNecessary___boxed__const__1();
lean_mark_persistent(l_Hashids_addGuardsIfNecessary___boxed__const__1);
l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed__const__1 = _init_l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed__const__1();
lean_mark_persistent(l_List_mapTR_loop___at_Hashids_encode___spec__2___boxed__const__1);
l_Hashids_encode___closed__1 = _init_l_Hashids_encode___closed__1();
lean_mark_persistent(l_Hashids_encode___closed__1);
l_Hashids_encode___closed__2 = _init_l_Hashids_encode___closed__2();
lean_mark_persistent(l_Hashids_encode___closed__2);
l_Hashids_encode___closed__3 = _init_l_Hashids_encode___closed__3();
lean_mark_persistent(l_Hashids_encode___closed__3);
l_Hashids_encode___closed__4 = _init_l_Hashids_encode___closed__4();
lean_mark_persistent(l_Hashids_encode___closed__4);
l_Hashids_encode___closed__5 = _init_l_Hashids_encode___closed__5();
lean_mark_persistent(l_Hashids_encode___closed__5);
l_Hashids_encode___closed__6 = _init_l_Hashids_encode___closed__6();
lean_mark_persistent(l_Hashids_encode___closed__6);
l_Hashids_encode___closed__7 = _init_l_Hashids_encode___closed__7();
lean_mark_persistent(l_Hashids_encode___closed__7);
l_Hashids_encode___boxed__const__1 = _init_l_Hashids_encode___boxed__const__1();
lean_mark_persistent(l_Hashids_encode___boxed__const__1);
l_Hashids_extractLotteryCharAndHashs___closed__1 = _init_l_Hashids_extractLotteryCharAndHashs___closed__1();
lean_mark_persistent(l_Hashids_extractLotteryCharAndHashs___closed__1);
l_Hashids_unhashAux___lambda__1___boxed__const__1 = _init_l_Hashids_unhashAux___lambda__1___boxed__const__1();
lean_mark_persistent(l_Hashids_unhashAux___lambda__1___boxed__const__1);
l_Hashids_decode___closed__1 = _init_l_Hashids_decode___closed__1();
lean_mark_persistent(l_Hashids_decode___closed__1);
l_Hashids_decode___closed__2 = _init_l_Hashids_decode___closed__2();
lean_mark_persistent(l_Hashids_decode___closed__2);
l_Hashids_decode___closed__3 = _init_l_Hashids_decode___closed__3();
lean_mark_persistent(l_Hashids_decode___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
