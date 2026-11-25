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

extern s32 D_8009DB1C;
extern u32 D_8009DB20;

void func_80051188(const void *arg0) {
s32 __repair_operand;

    void *temp_a2;
    void *var_a0;
    void *var_v0;
    u32 temp;

    temp = (u32) D_8009DB20;
    if (temp < 0x1C2U) {
        var_a0 = arg0;
        temp_a2 = var_a0 + 0x30;
        if (M2C_FIELD(var_a0, const s32 *, 0x10) != 0) {
            __repair_operand = D_8009DB1C;
            var_v0 = (D_8009DB20 * 0x30) + __repair_operand;
            __repair_rows: {
                do { do { M2C_FIELD(var_v0, s32 *, 0) = (s32) M2C_FIELD(var_a0, const s32 *, 0);
                M2C_FIELD(var_v0, s32 *, 4) = (s32) M2C_FIELD(var_a0, const s32 *, 4);
                M2C_FIELD(var_v0, s32 *, 8) = (s32) M2C_FIELD(var_a0, const s32 *, 8);
                M2C_FIELD(var_v0, s32 *, 0xC) = (s32) M2C_FIELD(var_a0, const s32 *, 0xC); } while (0); } while (0);
                var_a0 += 0x10;
                var_v0 += 0x10;
            }
if (var_a0 != temp_a2) goto __repair_rows;
            D_8009DB20 += 1;
        }
    }
}
