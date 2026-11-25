/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_80010274();                            /* extern */
extern f64 D_80073480;
extern f64 D_80073488;
extern f64 D_80073490;
extern s32 D_8007C3FC;
extern M2C_UNK D_8007C458;
extern M2C_UNK D_8007C4F0;

void func_80010524(void) {
    f64 sp18;
    f64 sp20;
    M2C_UNK *var_v1;
    f64 temp_ft0;
    f64 temp_ft2;
    f64 temp_fv0;
    s32 var_a0;

    if (M2C_FIELD(&D_8007C458, s32 *, 0x94) != 0) {
        if (D_8007C3FC != 0) {
            temp_fv0 = M2C_FIELD(&D_8007C458, f64 *, 8) + M2C_FIELD(&D_8007C458, f64 *, 0x20);
            M2C_FIELD(&D_8007C458, f64 *, 8) = temp_fv0;
            if (D_80073480 < temp_fv0) {
                M2C_FIELD(&D_8007C458, s32 *, 0x94) = 0;
            }
        }
        M2C_FIELD(&D_8007C458, f64 *, 0) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0) + M2C_FIELD(&D_8007C458, f64 *, 0x18));
        M2C_FIELD(&D_8007C458, f64 *, 0x10) = (f64) (M2C_FIELD(&D_8007C458, f64 *, 0x10) + M2C_FIELD(&D_8007C458, f64 *, 0x28));
        func_80010274();
    }
    var_a0 = 0;
    var_v1 = &D_8007C4F0;
loop_8:
    if (var_a0 < 0xA) {
        if ((u32) (M2C_FIELD(var_v1, s32 *, 0x48) - 2) < 2U) {
            M2C_FIELD(var_v1, f64 *, 0) = (f64) (M2C_FIELD(var_v1, f64 *, 0) + M2C_FIELD(var_v1, f64 *, 0x50));
            M2C_FIELD(var_v1, f64 *, 8) = (f64) (M2C_FIELD(var_v1, f64 *, 8) + M2C_FIELD(var_v1, f64 *, 0x58));
            M2C_FIELD(var_v1, f64 *, 0x10) = (f64) (M2C_FIELD(var_v1, f64 *, 0x10) + M2C_FIELD(var_v1, f64 *, 0x60));
            sp18 = (M2C_FIELD(var_v1, f64 *, 0x78) * M2C_FIELD(var_v1, f64 *, 0x18)) - (M2C_FIELD(var_v1, f64 *, 0x68) * M2C_FIELD(var_v1, f64 *, 0x28));
            sp20 = (M2C_FIELD(var_v1, f64 *, 0x68) * M2C_FIELD(var_v1, f64 *, 0x20)) - (M2C_FIELD(var_v1, f64 *, 0x70) * M2C_FIELD(var_v1, f64 *, 0x18));
            M2C_FIELD(var_v1, f64 *, 0x18) = (f64) (M2C_FIELD(var_v1, f64 *, 0x18) + ((M2C_FIELD(var_v1, f64 *, 0x70) * M2C_FIELD(var_v1, f64 *, 0x28)) - (M2C_FIELD(var_v1, f64 *, 0x78) * M2C_FIELD(var_v1, f64 *, 0x20))));
            M2C_FIELD(var_v1, f64 *, 0x20) = (f64) (M2C_FIELD(var_v1, f64 *, 0x20) + sp18);
            M2C_FIELD(var_v1, f64 *, 0x28) = (f64) (M2C_FIELD(var_v1, f64 *, 0x28) + sp20);
            sp18 = (M2C_FIELD(var_v1, f64 *, 0x78) * M2C_FIELD(var_v1, f64 *, 0x30)) - (M2C_FIELD(var_v1, f64 *, 0x68) * M2C_FIELD(var_v1, f64 *, 0x40));
            sp20 = (M2C_FIELD(var_v1, f64 *, 0x68) * M2C_FIELD(var_v1, f64 *, 0x38)) - (M2C_FIELD(var_v1, f64 *, 0x70) * M2C_FIELD(var_v1, f64 *, 0x30));
            M2C_FIELD(var_v1, f64 *, 0x30) = (f64) (M2C_FIELD(var_v1, f64 *, 0x30) + ((M2C_FIELD(var_v1, f64 *, 0x70) * M2C_FIELD(var_v1, f64 *, 0x40)) - (M2C_FIELD(var_v1, f64 *, 0x78) * M2C_FIELD(var_v1, f64 *, 0x38))));
            M2C_FIELD(var_v1, f64 *, 0x38) = (f64) (M2C_FIELD(var_v1, f64 *, 0x38) + sp18);
            M2C_FIELD(var_v1, f64 *, 0xB0) = (f64) (M2C_FIELD(var_v1, f64 *, 0) + M2C_FIELD(var_v1, f64 *, 0x18));
            temp_ft0 = M2C_FIELD(var_v1, f64 *, 0x10);
            temp_ft2 = M2C_FIELD(var_v1, f64 *, 0x28);
            M2C_FIELD(var_v1, f64 *, 0xB8) = (f64) (M2C_FIELD(var_v1, f64 *, 8) + M2C_FIELD(var_v1, f64 *, 0x20));
            M2C_FIELD(var_v1, f64 *, 0x80) = (f64) (M2C_FIELD(var_v1, f64 *, 0) + (M2C_FIELD(var_v1, f64 *, 0x18) * D_80073488));
            M2C_FIELD(var_v1, f64 *, 0x40) = (f64) (M2C_FIELD(var_v1, f64 *, 0x40) + sp20);
            M2C_FIELD(var_v1, f64 *, 0x88) = (f64) (M2C_FIELD(var_v1, f64 *, 8) + (M2C_FIELD(var_v1, f64 *, 0x20) * D_80073488));
            M2C_FIELD(var_v1, f64 *, 0x90) = (f64) (temp_ft0 + (M2C_FIELD(var_v1, f64 *, 0x28) * D_80073488));
            M2C_FIELD(var_v1, f64 *, 0xC0) = (f64) (temp_ft0 + temp_ft2);
            M2C_FIELD(var_v1, f64 *, 0x98) = (f64) (M2C_FIELD(var_v1, f64 *, 0) + (M2C_FIELD(var_v1, f64 *, 0x18) * D_80073490));
            M2C_FIELD(var_v1, f64 *, 0xA0) = (f64) (M2C_FIELD(var_v1, f64 *, 8) + (M2C_FIELD(var_v1, f64 *, 0x20) * D_80073490));
            M2C_FIELD(var_v1, f64 *, 0xA8) = (f64) (M2C_FIELD(var_v1, f64 *, 0x10) + (temp_ft2 * D_80073490));
        }
        var_v1 += 50;
        var_a0 += 1;
        goto loop_8;
    }
}
