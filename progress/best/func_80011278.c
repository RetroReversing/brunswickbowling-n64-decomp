/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern s32 D_8007DA40;
extern s32 D_8007DA48;
extern M2C_UNK D_8007F618;
extern s32 D_8008B3DC;
extern s32 D_8008E9E0;

void func_80011278(void *arg0) {
    M2C_UNK *var_v0_2;
    s32 *var_v0;
    s32 *var_v1;
    s32 temp_v1;
    void *var_v1_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v1 != -1) {
        D_8008B3DC = temp_v1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != -1) {
        var_v0 = &D_8007DA48;
        var_v1 = arg0 + 0x18;
        __repair_rows: {
            M2C_FIELD(var_v0, s32 *, 0) = M2C_FIELD(var_v1, s32 *, 0);
            M2C_FIELD(var_v0, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
            M2C_FIELD(var_v0, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
            M2C_FIELD(var_v0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
            var_v1 += 0x10;
            var_v0 += 0x10;
        }
if (var_v1 != (arg0 + 0x1D8)) goto __repair_rows;
        *var_v0 = *var_v1;
        var_v0_2 = &D_8007F618;
        var_v1_2 = arg0 + 0x1DC;
        do {
            M2C_FIELD(var_v0_2, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
            M2C_FIELD(var_v0_2, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
            M2C_FIELD(var_v0_2, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
            M2C_FIELD(var_v0_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_2, s32 *, 0xC);
            var_v1_2 += 0x10;
            var_v0_2 += 0x10;
        } while (var_v1_2 != (arg0 + 0x22C));
        M2C_FIELD(var_v0_2, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
        M2C_FIELD(var_v0_2, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
        M2C_FIELD(var_v0_2, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
        D_8007DA40 = M2C_FIELD(arg0, s32 *, 0x10);
    } else {
        D_8007DA40 = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) D_8008E9E0;
}
