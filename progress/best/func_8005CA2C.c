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

M2C_UNK func_80064D50(M2C_UNK *, s32, s16, s32);    /* extern */
M2C_UNK func_80064EB0(M2C_UNK *, s32, u8);          /* extern */
extern s32 D_800A5A58;
extern s32 D_800A5A68;
extern u16 D_800A5A6C;
extern u16 D_800A5A6E;
extern M2C_UNK D_800A5D10;

void func_8005CA2C(void *arg0, s32 arg1) {
    s32 temp_v1;
    u16 var_v0;
    u32 var_a1;
    u32 var_a1_2;
    u8 temp_a1;

    var_a1 = (u32) (M2C_FIELD(arg0, u8 *, 0xBC) * M2C_FIELD(arg0, u8 *, 0xC4) * M2C_FIELD(arg0, u8 *, 0xBB) * M2C_FIELD(arg0, s16 *, 0x9E)) >> 0xD;
    if (var_a1 > 0x7FFFU) {
        var_a1 = 0x7FFF;
    }
    if (M2C_FIELD(arg0, s32 *, 0x78) == 0) {
        var_v0 = D_800A5A6E;
    } else {
        var_v0 = D_800A5A6C;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    var_a1_2 = (u32) (var_a1 * var_v0) >> 0xF;
    if (temp_v1 != -1) {
        var_a1_2 = (u32) (var_a1_2 * temp_v1) / (u32) M2C_FIELD(arg0, u32 *, 0x1C);
    }
    if (var_a1_2 != M2C_FIELD(arg0, u16 *, 0xA0)) {
        M2C_FIELD(arg0, u16 *, 0xA0) = (u16) var_a1_2;
        func_80064D50(&D_800A5D10, D_800A5A58 + (arg1 * 0x1C), (s16) var_a1_2, D_800A5A68);
    }
    temp_a1 = ((s32) (M2C_FIELD(arg0, u8 *, 0xBD) * M2C_FIELD(arg0, s16 *, 0xB0)) >> 7) & 0x7F;
    if (temp_a1 != M2C_FIELD(arg0, u8 *, 0xBE)) {
        M2C_FIELD(arg0, u8 *, 0xBE) = temp_a1;
        func_80064EB0(&D_800A5D10, D_800A5A58 + (arg1 * 0x1C), temp_a1);
    }
}
