// Lean compiler output
// Module: scripts.makeBundle
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
static lean_object* l_assembleBundleFile___closed__8;
LEAN_EXPORT lean_object* _lean_main(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repeatedly(lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
static lean_object* l_List_chunksOf___rarg___closed__1;
LEAN_EXPORT lean_object* l_generateResourceInfoCode(lean_object*);
LEAN_EXPORT lean_object* l_generateDataCode(lean_object*);
static lean_object* l_assembleBundleFile___closed__11;
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mkResourcesInfo(lean_object*);
static lean_object* l_generateResourceInfoSize___closed__2;
static lean_object* l_mkResourcesInfo___closed__2;
static lean_object* l_assembleBundleFile___closed__3;
uint8_t lean_uint8_land(uint8_t, uint8_t);
lean_object* l_IO_FS_DirEntry_path(lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_mkResourcesInfo___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_generateDataCode___closed__2;
LEAN_EXPORT lean_object* l_List_dropPrefix___at_readFile___spec__1(lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_ByteArray_append(lean_object*, lean_object*);
lean_object* l_System_FilePath_pathExists(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_mkResourcesInfo___boxed(lean_object*);
static lean_object* l_generateDataCode___closed__1;
static lean_object* l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__4;
static lean_object* l_hexEncodeByte___closed__2;
static lean_object* l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__1;
static lean_object* l_assembleBundleFile___closed__10;
lean_object* l_System_FilePath_isDir(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_chunksOf(lean_object*);
static lean_object* l_List_chunksOf___rarg___closed__2;
static lean_object* l_List_mapTR_loop___at_generateDataCode___spec__2___closed__1;
extern lean_object* l_ByteArray_empty;
static lean_object* l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__2;
static lean_object* l_assembleBundleFile___closed__6;
lean_object* l_List_splitAt___rarg(lean_object*, lean_object*);
static lean_object* l_main___closed__1;
LEAN_EXPORT lean_object* l_List_dropPrefix(lean_object*);
LEAN_EXPORT lean_object* l_readFilesFromDir(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_generateDataCode___spec__2(lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__3;
lean_object* l_System_FilePath_components(lean_object*);
LEAN_EXPORT lean_object* l_List_repeatedly___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_generateDataCode___boxed(lean_object*);
static lean_object* l_assembleBundleFile___closed__9;
static lean_object* l_generateResourceInfoCode___closed__2;
lean_object* l_IO_print___at_IO_println___spec__1(lean_object*, lean_object*);
lean_object* l_ByteArray_toList(lean_object*);
static lean_object* l_List_chunksOf___rarg___closed__4;
LEAN_EXPORT lean_object* l_panic___at_List_chunksOf___spec__1(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_dropPrefix___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_assembleBundleFile___closed__4;
LEAN_EXPORT lean_object* l_List_chunksOf___rarg(lean_object*, lean_object*);
static lean_object* l_assembleBundleFile___closed__5;
LEAN_EXPORT lean_object* l_List_dropPrefix___at_readFile___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_List_chunksOf___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_hexEncodeByte___boxed(lean_object*);
lean_object* l_System_mkFilePath(lean_object*);
LEAN_EXPORT lean_object* l_readFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_generateResourceInfoSize(lean_object*);
LEAN_EXPORT lean_object* l_readFilesFromDir___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_mkResourcesInfo___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at_main___spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_mkResourcesInfo___closed__1;
static lean_object* l_hexEncodeByte___closed__1;
static lean_object* l_assembleBundleFile___closed__7;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_generateDataCode___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_generateDataCode___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hexEncodeByte(uint8_t);
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_assembleBundleFile___closed__12;
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
static lean_object* l_generateResourceInfoCode___closed__1;
lean_object* lean_io_read_dir(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_readFilesFromDir___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
static lean_object* l_generateResourceInfoSize___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
static lean_object* l_List_mapTR_loop___at_generateDataCode___spec__2___closed__3;
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*, lean_object*);
static lean_object* l_assembleBundleFile___closed__2;
static lean_object* l_main___closed__2;
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_List_chunksOf___rarg___closed__3;
static lean_object* l_assembleBundleFile___closed__1;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_IO_FS_readBinFile(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
static lean_object* l_List_mapTR_loop___at_generateDataCode___spec__2___closed__2;
LEAN_EXPORT lean_object* l_assembleBundleFile(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_readFilesFromDir___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropPrefix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
return x_3;
}
else
{
lean_dec(x_3);
return x_2;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_4, x_6);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
return x_2;
}
else
{
lean_dec(x_2);
x_2 = x_5;
x_3 = x_7;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropPrefix(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dropPrefix___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dropPrefix___at_readFile___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
return x_2;
}
else
{
return x_1;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_string_dec_eq(x_3, x_5);
if (x_7 == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
x_1 = x_4;
x_2 = x_6;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_readFile(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_IO_FS_DirEntry_path(x_1);
lean_inc(x_4);
x_5 = l_System_FilePath_components(x_4);
x_6 = l_System_FilePath_components(x_2);
x_7 = l_List_dropPrefix___at_readFile___spec__1(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_8 = l_System_mkFilePath(x_7);
x_9 = l_IO_FS_readBinFile(x_4, x_3);
lean_dec(x_4);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_8);
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropPrefix___at_readFile___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_dropPrefix___at_readFile___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_readFilesFromDir___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_2, x_1);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_uget(x_3, x_2);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_3, x_2, x_9);
lean_inc(x_4);
x_11 = l_readFile(x_8, x_4, x_5);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = 1;
x_15 = lean_usize_add(x_2, x_14);
x_16 = lean_array_uset(x_10, x_2, x_12);
x_2 = x_15;
x_3 = x_16;
x_5 = x_13;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_readFilesFromDir(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_read_dir(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_array_size(x_5);
x_8 = 0;
x_9 = l_Array_mapMUnsafe_map___at_readFilesFromDir___spec__1(x_7, x_8, x_5, x_2, x_6);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_readFilesFromDir___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = l_Array_mapMUnsafe_map___at_readFilesFromDir___spec__1(x_6, x_7, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_readFilesFromDir___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_readFilesFromDir(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_mkResourcesInfo___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; size_t x_21; size_t x_22; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
x_14 = lean_byte_array_size(x_9);
x_15 = lean_byte_array_size(x_13);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_array_push(x_10, x_16);
x_18 = l_ByteArray_append(x_9, x_13);
lean_dec(x_13);
x_19 = 0;
x_20 = lean_byte_array_push(x_18, x_19);
lean_ctor_set(x_8, 1, x_17);
lean_ctor_set(x_8, 0, x_20);
x_21 = 1;
x_22 = lean_usize_add(x_5, x_21);
x_5 = x_22;
x_6 = x_8;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; size_t x_34; size_t x_35; 
x_24 = lean_ctor_get(x_8, 0);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_8);
x_26 = lean_byte_array_size(x_9);
x_27 = lean_byte_array_size(x_25);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_27);
x_29 = lean_array_push(x_10, x_28);
x_30 = l_ByteArray_append(x_9, x_25);
lean_dec(x_25);
x_31 = 0;
x_32 = lean_byte_array_push(x_30, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_29);
x_34 = 1;
x_35 = lean_usize_add(x_5, x_34);
x_5 = x_35;
x_6 = x_33;
goto _start;
}
}
}
}
static lean_object* _init_l_mkResourcesInfo___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_mkResourcesInfo___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_ByteArray_empty;
x_2 = l_mkResourcesInfo___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mkResourcesInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; size_t x_3; size_t x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_box(0);
x_3 = lean_array_size(x_1);
x_4 = 0;
x_5 = l_mkResourcesInfo___closed__2;
x_6 = l_Array_forIn_x27Unsafe_loop___at_mkResourcesInfo___spec__1(x_1, x_2, x_1, x_3, x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_mkResourcesInfo___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forIn_x27Unsafe_loop___at_mkResourcesInfo___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_mkResourcesInfo___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkResourcesInfo(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_hexEncodeByte___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_hexEncodeByte___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("0x", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_hexEncodeByte(uint8_t x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; uint32_t x_9; 
x_2 = 4;
x_3 = lean_uint8_shift_right(x_1, x_2);
x_4 = 0;
x_5 = lean_uint8_dec_eq(x_3, x_4);
x_6 = 15;
x_7 = lean_uint8_land(x_1, x_6);
x_8 = lean_uint8_dec_eq(x_7, x_4);
if (x_5 == 0)
{
uint8_t x_66; uint8_t x_67; 
x_66 = 1;
x_67 = lean_uint8_dec_eq(x_3, x_66);
if (x_67 == 0)
{
uint8_t x_68; uint8_t x_69; 
x_68 = 2;
x_69 = lean_uint8_dec_eq(x_3, x_68);
if (x_69 == 0)
{
uint8_t x_70; uint8_t x_71; 
x_70 = 3;
x_71 = lean_uint8_dec_eq(x_3, x_70);
if (x_71 == 0)
{
uint8_t x_72; 
x_72 = lean_uint8_dec_eq(x_3, x_2);
if (x_72 == 0)
{
uint8_t x_73; uint8_t x_74; 
x_73 = 5;
x_74 = lean_uint8_dec_eq(x_3, x_73);
if (x_74 == 0)
{
uint8_t x_75; uint8_t x_76; 
x_75 = 6;
x_76 = lean_uint8_dec_eq(x_3, x_75);
if (x_76 == 0)
{
uint8_t x_77; uint8_t x_78; 
x_77 = 7;
x_78 = lean_uint8_dec_eq(x_3, x_77);
if (x_78 == 0)
{
uint8_t x_79; uint8_t x_80; 
x_79 = 8;
x_80 = lean_uint8_dec_eq(x_3, x_79);
if (x_80 == 0)
{
uint8_t x_81; uint8_t x_82; 
x_81 = 9;
x_82 = lean_uint8_dec_eq(x_3, x_81);
if (x_82 == 0)
{
uint8_t x_83; uint8_t x_84; 
x_83 = 10;
x_84 = lean_uint8_dec_eq(x_3, x_83);
if (x_84 == 0)
{
uint8_t x_85; uint8_t x_86; 
x_85 = 11;
x_86 = lean_uint8_dec_eq(x_3, x_85);
if (x_86 == 0)
{
uint8_t x_87; uint8_t x_88; 
x_87 = 12;
x_88 = lean_uint8_dec_eq(x_3, x_87);
if (x_88 == 0)
{
uint8_t x_89; uint8_t x_90; 
x_89 = 13;
x_90 = lean_uint8_dec_eq(x_3, x_89);
if (x_90 == 0)
{
uint8_t x_91; uint8_t x_92; 
x_91 = 14;
x_92 = lean_uint8_dec_eq(x_3, x_91);
if (x_92 == 0)
{
uint8_t x_93; 
x_93 = lean_uint8_dec_eq(x_3, x_6);
if (x_93 == 0)
{
uint32_t x_94; 
x_94 = 42;
x_9 = x_94;
goto block_65;
}
else
{
uint32_t x_95; 
x_95 = 70;
x_9 = x_95;
goto block_65;
}
}
else
{
uint32_t x_96; 
x_96 = 69;
x_9 = x_96;
goto block_65;
}
}
else
{
uint32_t x_97; 
x_97 = 68;
x_9 = x_97;
goto block_65;
}
}
else
{
uint32_t x_98; 
x_98 = 67;
x_9 = x_98;
goto block_65;
}
}
else
{
uint32_t x_99; 
x_99 = 66;
x_9 = x_99;
goto block_65;
}
}
else
{
uint32_t x_100; 
x_100 = 65;
x_9 = x_100;
goto block_65;
}
}
else
{
uint32_t x_101; 
x_101 = 57;
x_9 = x_101;
goto block_65;
}
}
else
{
uint32_t x_102; 
x_102 = 56;
x_9 = x_102;
goto block_65;
}
}
else
{
uint32_t x_103; 
x_103 = 55;
x_9 = x_103;
goto block_65;
}
}
else
{
uint32_t x_104; 
x_104 = 54;
x_9 = x_104;
goto block_65;
}
}
else
{
uint32_t x_105; 
x_105 = 53;
x_9 = x_105;
goto block_65;
}
}
else
{
uint32_t x_106; 
x_106 = 52;
x_9 = x_106;
goto block_65;
}
}
else
{
uint32_t x_107; 
x_107 = 51;
x_9 = x_107;
goto block_65;
}
}
else
{
uint32_t x_108; 
x_108 = 50;
x_9 = x_108;
goto block_65;
}
}
else
{
uint32_t x_109; 
x_109 = 49;
x_9 = x_109;
goto block_65;
}
}
else
{
uint32_t x_110; 
x_110 = 48;
x_9 = x_110;
goto block_65;
}
block_65:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint32_t x_15; 
x_10 = l_hexEncodeByte___closed__1;
x_11 = lean_string_push(x_10, x_9);
x_12 = l_hexEncodeByte___closed__2;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = lean_string_append(x_13, x_10);
if (x_8 == 0)
{
uint8_t x_20; uint8_t x_21; 
x_20 = 1;
x_21 = lean_uint8_dec_eq(x_7, x_20);
if (x_21 == 0)
{
uint8_t x_22; uint8_t x_23; 
x_22 = 2;
x_23 = lean_uint8_dec_eq(x_7, x_22);
if (x_23 == 0)
{
uint8_t x_24; uint8_t x_25; 
x_24 = 3;
x_25 = lean_uint8_dec_eq(x_7, x_24);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = lean_uint8_dec_eq(x_7, x_2);
if (x_26 == 0)
{
uint8_t x_27; uint8_t x_28; 
x_27 = 5;
x_28 = lean_uint8_dec_eq(x_7, x_27);
if (x_28 == 0)
{
uint8_t x_29; uint8_t x_30; 
x_29 = 6;
x_30 = lean_uint8_dec_eq(x_7, x_29);
if (x_30 == 0)
{
uint8_t x_31; uint8_t x_32; 
x_31 = 7;
x_32 = lean_uint8_dec_eq(x_7, x_31);
if (x_32 == 0)
{
uint8_t x_33; uint8_t x_34; 
x_33 = 8;
x_34 = lean_uint8_dec_eq(x_7, x_33);
if (x_34 == 0)
{
uint8_t x_35; uint8_t x_36; 
x_35 = 9;
x_36 = lean_uint8_dec_eq(x_7, x_35);
if (x_36 == 0)
{
uint8_t x_37; uint8_t x_38; 
x_37 = 10;
x_38 = lean_uint8_dec_eq(x_7, x_37);
if (x_38 == 0)
{
uint8_t x_39; uint8_t x_40; 
x_39 = 11;
x_40 = lean_uint8_dec_eq(x_7, x_39);
if (x_40 == 0)
{
uint8_t x_41; uint8_t x_42; 
x_41 = 12;
x_42 = lean_uint8_dec_eq(x_7, x_41);
if (x_42 == 0)
{
uint8_t x_43; uint8_t x_44; 
x_43 = 13;
x_44 = lean_uint8_dec_eq(x_7, x_43);
if (x_44 == 0)
{
uint8_t x_45; uint8_t x_46; 
x_45 = 14;
x_46 = lean_uint8_dec_eq(x_7, x_45);
if (x_46 == 0)
{
uint8_t x_47; 
x_47 = lean_uint8_dec_eq(x_7, x_6);
if (x_47 == 0)
{
uint32_t x_48; 
x_48 = 42;
x_15 = x_48;
goto block_19;
}
else
{
uint32_t x_49; 
x_49 = 70;
x_15 = x_49;
goto block_19;
}
}
else
{
uint32_t x_50; 
x_50 = 69;
x_15 = x_50;
goto block_19;
}
}
else
{
uint32_t x_51; 
x_51 = 68;
x_15 = x_51;
goto block_19;
}
}
else
{
uint32_t x_52; 
x_52 = 67;
x_15 = x_52;
goto block_19;
}
}
else
{
uint32_t x_53; 
x_53 = 66;
x_15 = x_53;
goto block_19;
}
}
else
{
uint32_t x_54; 
x_54 = 65;
x_15 = x_54;
goto block_19;
}
}
else
{
uint32_t x_55; 
x_55 = 57;
x_15 = x_55;
goto block_19;
}
}
else
{
uint32_t x_56; 
x_56 = 56;
x_15 = x_56;
goto block_19;
}
}
else
{
uint32_t x_57; 
x_57 = 55;
x_15 = x_57;
goto block_19;
}
}
else
{
uint32_t x_58; 
x_58 = 54;
x_15 = x_58;
goto block_19;
}
}
else
{
uint32_t x_59; 
x_59 = 53;
x_15 = x_59;
goto block_19;
}
}
else
{
uint32_t x_60; 
x_60 = 52;
x_15 = x_60;
goto block_19;
}
}
else
{
uint32_t x_61; 
x_61 = 51;
x_15 = x_61;
goto block_19;
}
}
else
{
uint32_t x_62; 
x_62 = 50;
x_15 = x_62;
goto block_19;
}
}
else
{
uint32_t x_63; 
x_63 = 49;
x_15 = x_63;
goto block_19;
}
}
else
{
uint32_t x_64; 
x_64 = 48;
x_15 = x_64;
goto block_19;
}
block_19:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_string_push(x_10, x_15);
x_17 = lean_string_append(x_14, x_16);
lean_dec(x_16);
x_18 = lean_string_append(x_17, x_10);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_hexEncodeByte___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_hexEncodeByte(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_repeatedly___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
lean_inc(x_2);
x_4 = lean_apply_1(x_1, x_2);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_2, 1);
lean_dec(x_6);
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l_List_repeatedly___rarg(x_1, x_9);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
x_13 = l_List_repeatedly___rarg(x_1, x_12);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_List_repeatedly(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_repeatedly___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_List_chunksOf___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_List_chunksOf___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_panic___at_List_chunksOf___spec__1___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_List_chunksOf___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("scripts.makeBundle", 18, 18);
return x_1;
}
}
static lean_object* _init_l_List_chunksOf___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("List.chunksOf", 13, 13);
return x_1;
}
}
static lean_object* _init_l_List_chunksOf___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Cannot call chunksOf with zero", 30, 30);
return x_1;
}
}
static lean_object* _init_l_List_chunksOf___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_chunksOf___rarg___closed__1;
x_2 = l_List_chunksOf___rarg___closed__2;
x_3 = lean_unsigned_to_nat(77u);
x_4 = lean_unsigned_to_nat(9u);
x_5 = l_List_chunksOf___rarg___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_chunksOf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_List_splitAt___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_List_repeatedly___rarg(x_5, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_List_chunksOf___rarg___closed__4;
x_8 = l_panic___at_List_chunksOf___spec__1___rarg(x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_List_chunksOf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_chunksOf___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_generateDataCode___spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_unbox(x_5);
lean_dec(x_5);
x_8 = l_hexEncodeByte(x_7);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_8);
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
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_unbox(x_10);
lean_dec(x_10);
x_13 = l_hexEncodeByte(x_12);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_2);
x_1 = x_11;
x_2 = x_14;
goto _start;
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at_generateDataCode___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_generateDataCode___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("    ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_generateDataCode___spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(",", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_generateDataCode___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_List_mapTR_loop___at_generateDataCode___spec__2___closed__1;
x_8 = l_String_intercalate(x_7, x_5);
x_9 = l_List_mapTR_loop___at_generateDataCode___spec__2___closed__2;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = l_List_mapTR_loop___at_generateDataCode___spec__2___closed__3;
x_12 = lean_string_append(x_10, x_11);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_12);
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = l_List_mapTR_loop___at_generateDataCode___spec__2___closed__1;
x_17 = l_String_intercalate(x_16, x_14);
x_18 = l_List_mapTR_loop___at_generateDataCode___spec__2___closed__2;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = l_List_mapTR_loop___at_generateDataCode___spec__2___closed__3;
x_21 = lean_string_append(x_19, x_20);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_2);
x_1 = x_15;
x_2 = x_22;
goto _start;
}
}
}
}
static lean_object* _init_l_generateDataCode___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
static lean_object* _init_l_generateDataCode___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("static const unsigned char bundle_data[] = {\n", 45, 45);
return x_1;
}
}
static lean_object* _init_l_generateDataCode___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n};\n", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_generateDataCode(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_2 = l_ByteArray_toList(x_1);
x_3 = lean_box(0);
x_4 = l_List_mapTR_loop___at_generateDataCode___spec__1(x_2, x_3);
x_5 = lean_unsigned_to_nat(20u);
x_6 = l_List_chunksOf___rarg(x_5, x_4);
x_7 = l_List_mapTR_loop___at_generateDataCode___spec__2(x_6, x_3);
x_8 = l_generateDataCode___closed__1;
x_9 = l_String_intercalate(x_8, x_7);
x_10 = l_generateDataCode___closed__2;
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = l_generateDataCode___closed__3;
x_13 = lean_string_append(x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_generateDataCode___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_generateDataCode(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_generateResourceInfoSize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("size_t resources_size = ", 24, 24);
return x_1;
}
}
static lean_object* _init_l_generateResourceInfoSize___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(";\n", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_generateResourceInfoSize(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___private_Init_Data_Repr_0__Nat_reprFast(x_1);
x_3 = l_generateResourceInfoSize___closed__1;
x_4 = lean_string_append(x_3, x_2);
lean_dec(x_2);
x_5 = l_generateResourceInfoSize___closed__2;
x_6 = lean_string_append(x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("    {.filename = \"", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\", .offset = ", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", .size = ", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("},", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
x_14 = l___private_Init_Data_Repr_0__Nat_reprFast(x_13);
x_15 = lean_string_append(x_12, x_14);
lean_dec(x_14);
x_16 = l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__3;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_ctor_get(x_5, 2);
lean_inc(x_18);
lean_dec(x_5);
x_19 = l___private_Init_Data_Repr_0__Nat_reprFast(x_18);
x_20 = lean_string_append(x_17, x_19);
lean_dec(x_19);
x_21 = l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__4;
x_22 = lean_string_append(x_20, x_21);
x_23 = 1;
x_24 = lean_usize_add(x_2, x_23);
x_25 = lean_array_uset(x_7, x_2, x_22);
x_2 = x_24;
x_3 = x_25;
goto _start;
}
}
}
static lean_object* _init_l_generateResourceInfoCode___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("static const ResourceInfo resource_infos[", 41, 41);
return x_1;
}
}
static lean_object* _init_l_generateResourceInfoCode___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("] = {\n", 6, 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l_generateResourceInfoCode(lean_object* x_1) {
_start:
{
size_t x_2; size_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_array_size(x_1);
x_3 = 0;
lean_inc(x_1);
x_4 = l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1(x_2, x_3, x_1);
x_5 = lean_array_get_size(x_1);
lean_dec(x_1);
x_6 = l___private_Init_Data_Repr_0__Nat_reprFast(x_5);
x_7 = l_generateResourceInfoCode___closed__1;
x_8 = lean_string_append(x_7, x_6);
lean_dec(x_6);
x_9 = l_generateResourceInfoCode___closed__2;
x_10 = lean_string_append(x_8, x_9);
x_11 = lean_array_to_list(x_4);
x_12 = l_generateDataCode___closed__1;
x_13 = l_String_intercalate(x_12, x_11);
x_14 = lean_string_append(x_10, x_13);
lean_dec(x_13);
x_15 = l_generateDataCode___closed__3;
x_16 = lean_string_append(x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_assembleBundleFile___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("#ifndef ", 8, 8);
return x_1;
}
}
static lean_object* _init_l_assembleBundleFile___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("RAYLEAN_BUNDLE_H", 16, 16);
return x_1;
}
}
static lean_object* _init_l_assembleBundleFile___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_assembleBundleFile___closed__1;
x_2 = l_assembleBundleFile___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_assembleBundleFile___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n#define ", 9, 9);
return x_1;
}
}
static lean_object* _init_l_assembleBundleFile___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_assembleBundleFile___closed__3;
x_2 = l_assembleBundleFile___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_assembleBundleFile___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_assembleBundleFile___closed__5;
x_2 = l_assembleBundleFile___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_assembleBundleFile___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n\n#include <stddef.h>\n\n", 23, 23);
return x_1;
}
}
static lean_object* _init_l_assembleBundleFile___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_assembleBundleFile___closed__6;
x_2 = l_assembleBundleFile___closed__7;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_assembleBundleFile___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("typedef struct {\n    const char* filename;\n    size_t offset;\n    size_t size;\n} ResourceInfo;\n", 95, 95);
return x_1;
}
}
static lean_object* _init_l_assembleBundleFile___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_assembleBundleFile___closed__8;
x_2 = l_assembleBundleFile___closed__9;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_assembleBundleFile___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_assembleBundleFile___closed__10;
x_2 = l_generateDataCode___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_assembleBundleFile___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("#endif // ", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_assembleBundleFile(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_generateResourceInfoCode(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_generateDataCode(x_4);
lean_dec(x_4);
x_6 = l_assembleBundleFile___closed__11;
x_7 = lean_string_append(x_6, x_3);
lean_dec(x_3);
x_8 = l_generateDataCode___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = lean_string_append(x_9, x_5);
lean_dec(x_5);
x_11 = l_assembleBundleFile___closed__12;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_assembleBundleFile___closed__2;
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_string_append(x_14, x_8);
return x_15;
}
}
LEAN_EXPORT lean_object* l_IO_println___at_main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = l_IO_print___at_IO_println___spec__1(x_4, x_2);
return x_5;
}
}
static lean_object* _init_l_main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Usage: makeBundle <rootDirectory> <relFromDir> <outputfile>", 59, 59);
return x_1;
}
}
static lean_object* _init_l_main___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" must be a subdirectory of ", 27, 27);
return x_1;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_main___closed__1;
x_4 = l_IO_println___at_main___spec__1(x_3, x_2);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = l_main___closed__1;
x_7 = l_IO_println___at_main___spec__1(x_6, x_2);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_1);
x_9 = l_main___closed__1;
x_10 = l_IO_println___at_main___spec__1(x_9, x_2);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec(x_8);
lean_inc(x_12);
x_15 = l_System_FilePath_join(x_12, x_13);
x_16 = l_System_FilePath_pathExists(x_15, x_2);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_System_FilePath_isDir(x_15, x_18);
x_20 = lean_unbox(x_17);
lean_dec(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_15);
lean_dec(x_14);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_main___closed__1;
x_23 = l_IO_println___at_main___spec__1(x_22, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_hexEncodeByte___closed__1;
x_26 = lean_string_append(x_25, x_13);
lean_dec(x_13);
x_27 = l_main___closed__2;
x_28 = lean_string_append(x_26, x_27);
x_29 = lean_string_append(x_28, x_12);
lean_dec(x_12);
x_30 = lean_string_append(x_29, x_25);
x_31 = l_IO_println___at_main___spec__1(x_30, x_24);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_13);
lean_dec(x_12);
x_32 = !lean_is_exclusive(x_23);
if (x_32 == 0)
{
return x_23;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_19, 0);
lean_inc(x_36);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_15);
lean_dec(x_14);
x_38 = lean_ctor_get(x_19, 1);
lean_inc(x_38);
lean_dec(x_19);
x_39 = l_main___closed__1;
x_40 = l_IO_println___at_main___spec__1(x_39, x_38);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_hexEncodeByte___closed__1;
x_43 = lean_string_append(x_42, x_13);
lean_dec(x_13);
x_44 = l_main___closed__2;
x_45 = lean_string_append(x_43, x_44);
x_46 = lean_string_append(x_45, x_12);
lean_dec(x_12);
x_47 = lean_string_append(x_46, x_42);
x_48 = l_IO_println___at_main___spec__1(x_47, x_41);
return x_48;
}
else
{
uint8_t x_49; 
lean_dec(x_13);
lean_dec(x_12);
x_49 = !lean_is_exclusive(x_40);
if (x_49 == 0)
{
return x_40;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_40, 0);
x_51 = lean_ctor_get(x_40, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_40);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_13);
x_53 = lean_ctor_get(x_19, 1);
lean_inc(x_53);
lean_dec(x_19);
x_54 = l_readFilesFromDir(x_15, x_12, x_53);
lean_dec(x_15);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_mkResourcesInfo(x_55);
lean_dec(x_55);
x_58 = l_assembleBundleFile(x_57);
x_59 = l_IO_FS_writeFile(x_14, x_58, x_56);
lean_dec(x_58);
lean_dec(x_14);
return x_59;
}
else
{
uint8_t x_60; 
lean_dec(x_14);
x_60 = !lean_is_exclusive(x_54);
if (x_60 == 0)
{
return x_54;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_54, 0);
x_62 = lean_ctor_get(x_54, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_54);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_1);
x_64 = l_main___closed__1;
x_65 = l_IO_println___at_main___spec__1(x_64, x_2);
return x_65;
}
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_scripts_makeBundle(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_mkResourcesInfo___closed__1 = _init_l_mkResourcesInfo___closed__1();
lean_mark_persistent(l_mkResourcesInfo___closed__1);
l_mkResourcesInfo___closed__2 = _init_l_mkResourcesInfo___closed__2();
lean_mark_persistent(l_mkResourcesInfo___closed__2);
l_hexEncodeByte___closed__1 = _init_l_hexEncodeByte___closed__1();
lean_mark_persistent(l_hexEncodeByte___closed__1);
l_hexEncodeByte___closed__2 = _init_l_hexEncodeByte___closed__2();
lean_mark_persistent(l_hexEncodeByte___closed__2);
l_List_chunksOf___rarg___closed__1 = _init_l_List_chunksOf___rarg___closed__1();
lean_mark_persistent(l_List_chunksOf___rarg___closed__1);
l_List_chunksOf___rarg___closed__2 = _init_l_List_chunksOf___rarg___closed__2();
lean_mark_persistent(l_List_chunksOf___rarg___closed__2);
l_List_chunksOf___rarg___closed__3 = _init_l_List_chunksOf___rarg___closed__3();
lean_mark_persistent(l_List_chunksOf___rarg___closed__3);
l_List_chunksOf___rarg___closed__4 = _init_l_List_chunksOf___rarg___closed__4();
lean_mark_persistent(l_List_chunksOf___rarg___closed__4);
l_List_mapTR_loop___at_generateDataCode___spec__2___closed__1 = _init_l_List_mapTR_loop___at_generateDataCode___spec__2___closed__1();
lean_mark_persistent(l_List_mapTR_loop___at_generateDataCode___spec__2___closed__1);
l_List_mapTR_loop___at_generateDataCode___spec__2___closed__2 = _init_l_List_mapTR_loop___at_generateDataCode___spec__2___closed__2();
lean_mark_persistent(l_List_mapTR_loop___at_generateDataCode___spec__2___closed__2);
l_List_mapTR_loop___at_generateDataCode___spec__2___closed__3 = _init_l_List_mapTR_loop___at_generateDataCode___spec__2___closed__3();
lean_mark_persistent(l_List_mapTR_loop___at_generateDataCode___spec__2___closed__3);
l_generateDataCode___closed__1 = _init_l_generateDataCode___closed__1();
lean_mark_persistent(l_generateDataCode___closed__1);
l_generateDataCode___closed__2 = _init_l_generateDataCode___closed__2();
lean_mark_persistent(l_generateDataCode___closed__2);
l_generateDataCode___closed__3 = _init_l_generateDataCode___closed__3();
lean_mark_persistent(l_generateDataCode___closed__3);
l_generateResourceInfoSize___closed__1 = _init_l_generateResourceInfoSize___closed__1();
lean_mark_persistent(l_generateResourceInfoSize___closed__1);
l_generateResourceInfoSize___closed__2 = _init_l_generateResourceInfoSize___closed__2();
lean_mark_persistent(l_generateResourceInfoSize___closed__2);
l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__1);
l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__2 = _init_l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__2);
l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__3 = _init_l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__3);
l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__4 = _init_l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__4();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_generateResourceInfoCode___spec__1___closed__4);
l_generateResourceInfoCode___closed__1 = _init_l_generateResourceInfoCode___closed__1();
lean_mark_persistent(l_generateResourceInfoCode___closed__1);
l_generateResourceInfoCode___closed__2 = _init_l_generateResourceInfoCode___closed__2();
lean_mark_persistent(l_generateResourceInfoCode___closed__2);
l_assembleBundleFile___closed__1 = _init_l_assembleBundleFile___closed__1();
lean_mark_persistent(l_assembleBundleFile___closed__1);
l_assembleBundleFile___closed__2 = _init_l_assembleBundleFile___closed__2();
lean_mark_persistent(l_assembleBundleFile___closed__2);
l_assembleBundleFile___closed__3 = _init_l_assembleBundleFile___closed__3();
lean_mark_persistent(l_assembleBundleFile___closed__3);
l_assembleBundleFile___closed__4 = _init_l_assembleBundleFile___closed__4();
lean_mark_persistent(l_assembleBundleFile___closed__4);
l_assembleBundleFile___closed__5 = _init_l_assembleBundleFile___closed__5();
lean_mark_persistent(l_assembleBundleFile___closed__5);
l_assembleBundleFile___closed__6 = _init_l_assembleBundleFile___closed__6();
lean_mark_persistent(l_assembleBundleFile___closed__6);
l_assembleBundleFile___closed__7 = _init_l_assembleBundleFile___closed__7();
lean_mark_persistent(l_assembleBundleFile___closed__7);
l_assembleBundleFile___closed__8 = _init_l_assembleBundleFile___closed__8();
lean_mark_persistent(l_assembleBundleFile___closed__8);
l_assembleBundleFile___closed__9 = _init_l_assembleBundleFile___closed__9();
lean_mark_persistent(l_assembleBundleFile___closed__9);
l_assembleBundleFile___closed__10 = _init_l_assembleBundleFile___closed__10();
lean_mark_persistent(l_assembleBundleFile___closed__10);
l_assembleBundleFile___closed__11 = _init_l_assembleBundleFile___closed__11();
lean_mark_persistent(l_assembleBundleFile___closed__11);
l_assembleBundleFile___closed__12 = _init_l_assembleBundleFile___closed__12();
lean_mark_persistent(l_assembleBundleFile___closed__12);
l_main___closed__1 = _init_l_main___closed__1();
lean_mark_persistent(l_main___closed__1);
l_main___closed__2 = _init_l_main___closed__2();
lean_mark_persistent(l_main___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
void lean_initialize_runtime_module();

  #if defined(WIN32) || defined(_WIN32)
  #include <windows.h>
  #endif

  int main(int argc, char ** argv) {
  #if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  #endif
  lean_object* in; lean_object* res;
lean_initialize_runtime_module();
lean_set_panic_messages(false);
res = initialize_scripts_makeBundle(1 /* builtin */, lean_io_mk_world());
lean_set_panic_messages(true);
lean_io_mark_end_initialization();
if (lean_io_result_is_ok(res)) {
lean_dec_ref(res);
lean_init_task_manager();
in = lean_box(0);
int i = argc;
while (i > 1) {
 lean_object* n;
 i--;
 n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
 in = n;
}
res = _lean_main(in, lean_io_mk_world());
}
lean_finalize_task_manager();
if (lean_io_result_is_ok(res)) {
  int ret = 0;
  lean_dec_ref(res);
  return ret;
} else {
  lean_io_result_show_error(res);
  lean_dec_ref(res);
  return 1;
}
}
#ifdef __cplusplus
}
#endif
