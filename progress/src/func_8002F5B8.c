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

M2C_UNK func_8002FA24();                            /* extern */
M2C_UNK func_80031B08(M2C_UNK *);                   /* extern */
M2C_UNK func_80043108(M2C_UNK *, s32);              /* extern */
M2C_UNK func_800431D4(M2C_UNK *);                   /* extern */
extern M2C_UNK D_8008B3A4;
extern s32 D_8008B3DC;
extern M2C_UNK D_8008ED80;

s32 func_8002F5B8(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v1 != 0) {
        if (temp_v1 == 3) {
            func_8002FA24();
        }
    } else {
        func_80031B08(&D_8008B3A4);
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x18) - 1;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v0;
    if (temp_v0 == 0) {
        func_800431D4(&D_8008ED80);
        func_80043108(&D_8008ED80, D_8008B3DC);
    }
    return 1;
}
