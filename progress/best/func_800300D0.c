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

s32 func_8001268C(M2C_UNK *);                       /* extern */
M2C_UNK func_80012BA4(M2C_UNK *);                   /* extern */
M2C_UNK func_8002AAC0(s32);                         /* extern */
s32 func_8002AB14(s32);                             /* extern */
M2C_UNK func_800318E4(void *, u8, M2C_UNK *);       /* extern */
extern s32 D_8007DA40;
extern M2C_UNK D_8007F618;
extern M2C_UNK D_80081A08;

void func_800300D0(void *arg0) {
    M2C_UNK *var_s0;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    func_8002AAC0((((M2C_FIELD(arg0, u8 *, 0x14) << 8) + M2C_FIELD(arg0, u8 *, 0x15)) * 0xC) & 0x7FFC);
    var_s0 = &D_8007F618;
loop_1:
    if (var_s1 < 0x64) {
        if (((M2C_FIELD(var_s0, u8 *, 0x18) ^ 2) != 0) || (var_s1 < D_8007DA40)) {
            M2C_FIELD(var_s0, u16 *, 0x38) = (u16) (M2C_FIELD(var_s0, u16 *, 0x38) + 0xBB8);
        } else {
            var_a0 = ((func_8001268C(var_s0) & 0xFF) * 0xA) + 0x14;
            if ((u8) M2C_FIELD(var_s0, u8 *, 0x19) < 7U) {
                var_a0 += 5;
            }
            M2C_FIELD(var_s0, u16 *, 0x38) = (u16) (M2C_FIELD(var_s0, u16 *, 0x38) + func_8002AB14(var_a0));
        }
        var_s0 += 23;
        var_s1 += 1;
        goto loop_1;
    }
    var_s1_2 = 0;
    func_800318E4(arg0, M2C_FIELD(arg0, u8 *, 0x48), &D_80081A08);
    do {
        func_80012BA4(((M2C_UNK *)((u8 *)&D_8007F618 + var_s1_2 * 92)));
        var_s1_2 += 1;
    } while (var_s1_2 < 0x64);
}
