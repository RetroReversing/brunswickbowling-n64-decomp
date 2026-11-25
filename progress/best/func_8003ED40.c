/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_80047128(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80047328(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8004740C(M2C_UNK *, f32);              /* extern */
M2C_UNK func_800474A4(M2C_UNK *, f32);              /* extern */
M2C_UNK func_80047588(M2C_UNK *, s32 *);            /* extern */
M2C_UNK func_80047948(M2C_UNK *, M2C_UNK, M2C_UNK, f32); /* extern */
s32 *func_80050988(M2C_UNK *, M2C_UNK *);           /* extern */
extern M2C_UNK D_80078FE0;
extern M2C_UNK D_80078FE8;
extern M2C_UNK D_80078FF0;
extern M2C_UNK D_80079008;
extern M2C_UNK D_80079010;
extern M2C_UNK D_80079018;
extern M2C_UNK D_80079020;
extern M2C_UNK D_80079028;
extern M2C_UNK D_80079030;
extern M2C_UNK D_80079038;
extern M2C_UNK D_80079040;
extern M2C_UNK D_80079048;
extern M2C_UNK D_80079050;
extern M2C_UNK D_80079058;
extern M2C_UNK D_80079064;
extern M2C_UNK D_80079070;
extern M2C_UNK D_80079078;
extern M2C_UNK D_80079080;
extern M2C_UNK D_80079088;
extern M2C_UNK D_80079094;
extern M2C_UNK D_8007909C;
extern M2C_UNK D_800790A8;
extern f32 D_800790B0;
extern f32 D_800790B4;
extern f32 D_800790B8;
extern f32 D_800790BC;
extern M2C_UNK D_8008F4B4;
extern M2C_UNK D_8008F580;
extern M2C_UNK D_8008F64C;
extern M2C_UNK D_8008F718;
extern M2C_UNK D_8008F7E4;
extern M2C_UNK D_8008F8B0;
extern M2C_UNK D_8008F97C;
extern M2C_UNK D_8008FA48;
extern M2C_UNK D_8008FB14;
extern M2C_UNK D_8008FBE0;
extern M2C_UNK D_8008FCAC;
extern M2C_UNK D_8008FD78;
extern M2C_UNK D_8008FE44;
extern M2C_UNK D_8008FF10;
extern M2C_UNK D_8008FFDC;
extern M2C_UNK D_800900A8;
extern M2C_UNK D_80090174;
extern M2C_UNK D_80090240;
extern M2C_UNK D_8009030C;
extern M2C_UNK D_800903D8;

void func_8003ED40(void *arg0) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;
    s32 *temp_v0;

    if (M2C_FIELD(arg0, s32 **, 8) == NULL) {
        M2C_FIELD(arg0, s32 **, 8) = (s32 *)1;
        temp_v0 = func_80050988(&D_80078FE0, &D_80078FE8);
        M2C_FIELD(arg0, s32 **, 8) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x74) = (s32) *temp_v0;
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) M2C_FIELD(M2C_FIELD(arg0, s32 **, 8), s32 *, 0xC);
        sp18 = M2C_FIELD(&D_80078FF0, s32 *, 0);
        sp1C = M2C_FIELD(&D_80078FF0, s32 *, 4);
        sp20 = M2C_FIELD(&D_80078FF0, s32 *, 8);
        sp24 = M2C_FIELD(&D_80078FF0, s32 *, 0xC);
        sp28 = M2C_FIELD(&D_80078FF0, s32 *, 0x10);
        sp2C = M2C_FIELD(&D_80078FF0, s32 *, 0x14);
        func_80047128(&D_8008F4B4, &D_80079008, 1, 0, 1);
        func_80047128(&D_8008FCAC, &D_80079010, 1, 0, 1);
        func_80047128(&D_8008F718, &D_80079018, 1, 0, 1);
        func_80047128(&D_8008FE44, &D_80079020, 1, 0, 1);
        func_80047128(&D_80090174, &D_80079028, 1, 0, 1);
        func_80047588(&D_80090174, &sp18);
        temp_fs3 = D_800790B0;
        func_80047128(&D_8008FFDC, &D_80079030, 1, 0, 1);
        func_8004740C(&D_8008FFDC, temp_fs3);
        func_80047128(&D_800900A8, &D_80079038, 1, 0, 1);
        func_80047128(&D_8008FD78, &D_80079040, 1, 0, 1);
        func_8004740C(&D_8008FD78, temp_fs3);
        temp_fs0 = D_800790B4;
        func_80047128(&D_8008FF10, &D_80079048, 1, 0, 1);
        func_8004740C(&D_8008FF10, temp_fs0);
        func_80047128(&D_8008F580, &D_80079050, 1, 0, 1);
        func_8004740C(&D_8008F580, temp_fs3);
        func_80047128(&D_8008F64C, &D_80079058, 1, 0, 1);
        func_80047128(&D_8008F97C, &D_80079064, 1, 0, 1);
        func_8004740C(&D_8008F97C, temp_fs0);
        func_80047128(&D_8008F8B0, &D_80079070, 1, 0, 1);
        func_80047128(&D_8008F7E4, &D_80079078, 1, 0, 1);
        func_8004740C(&D_8008F7E4, temp_fs0);
        func_80047128(&D_8008FA48, &D_80079080, 1, 0, 1);
        func_8004740C(&D_8008FA48, temp_fs0);
        func_80047128(&D_8008FB14, &D_80079088, 1, 0, 1);
        func_80047128(&D_80090240, &D_80079094, 1, 0, 1);
        func_8004740C(&D_80090240, temp_fs3);
        func_80047128(&D_8008FBE0, &D_8007909C, 1, 0, 0);
        temp_fs2 = D_800790B8;
        temp_fs1 = D_800790BC;
        func_80047948(&D_8008FBE0, 0, 0, temp_fs2);
        func_800474A4(&D_8008FBE0, temp_fs1);
        func_80047328(&D_800903D8, &D_8008FBE0, 1);
        func_80047948(&D_800903D8, 0x41980000, 0xC1A00000, 108.0f);
        func_800474A4(&D_800903D8, temp_fs1);
        func_80047128(&D_8009030C, &D_800790A8, 1, 0, 1);
        func_80047948(&D_8009030C, 0, 0, temp_fs2);
        func_8004740C(&D_8009030C, temp_fs3);
    }
}
