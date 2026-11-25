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

s32 func_800680F0();
s32 func_8006C9F0();
s32 func_8006CCD8();
s32 func_8006CD38();
s32 func_8006CE40();
extern void *D_80097DC8;
extern void **D_80097DE0;
extern u32 D_800ACBD8;
extern s32 D_800ACBE8;
extern s32 D_800ACBEC;
extern u32 D_800ACC10;
extern char D_800ACC18[];

void __osTimerInterrupt(void) {
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_3;
    u16 *temp_v1_4;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_v0_2;
    u32 temp_v1_2;
    u32 var_a1;
    void *temp_s0;
    void *var_a0;

    if (*D_80097DE0 != D_80097DE0) {
loop_1:
        temp_s0 = *D_80097DE0;
        if (temp_s0 == D_80097DE0) {
            func_8006CE40(0);
            D_800ACBE8 = 0;
            return;
        }
        temp_v0 = func_8006C9F0();
        temp_v1 = D_800ACBE8;
        D_800ACBE8 = temp_v0;
        temp_v0_2 = temp_v0 - temp_v1;
        temp_v1_2 = M2C_FIELD(temp_s0, u32 *, 0x10);
        if ((temp_v1_2 > 0U) || ((temp_v1_2 == 0) && (temp_v0_2 < (u32) M2C_FIELD(temp_s0, u32 *, 0x14)))) {
            temp_a1 = M2C_FIELD(temp_s0, u32 *, 0x14);
            temp_a1_2 = temp_a1 - temp_v0_2;
            temp_a0 = (M2C_FIELD(temp_s0, u32 *, 0x10) - 0) - (temp_a1 < temp_v0_2);
            M2C_FIELD(temp_s0, u32 *, 0x10) = temp_a0;
            M2C_FIELD(temp_s0, u32 *, 0x14) = temp_a1_2;
            func_8006CCD8(temp_a0, temp_a1_2, 0, temp_v0_2);
            return;
        }
        *M2C_FIELD(temp_s0, void ***, 4) = M2C_FIELD(temp_s0, void **, 0);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_s0, void ***, 4);
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
        M2C_FIELD(temp_s0, void **, 0) = NULL;
        M2C_FIELD(temp_s0, void ***, 4) = NULL;
        if (temp_a0_2 != 0) {
            if (temp_a0_2 != D_800ACC18) {
                func_800680F0(temp_a0_2, M2C_FIELD(temp_s0, s32 *, 0x1C), 0, temp_v0_2);
            } else {
                var_a1 = D_800ACBD8;
                temp_a2 = M2C_FIELD(D_80097DC8, s32 *, 0x11C);
                if (var_a1 < (u32) D_800ACC10) {
                    var_a0 = var_a1 + 0xC;
loop_13:
                    temp_v1_3 = temp_a2 - M2C_FIELD(var_a0, s32 *, -4);
                    if (temp_v1_3 >= 0) {
                        if ((M2C_FIELD(var_a0, s32 *, 0) - temp_a2) > 0) {
                            temp_v1_4 = ((temp_v1_3 >> 2) * 2) + *(s32 *)var_a1;
                            *temp_v1_4 += 1;
                        } else {
                            goto block_17;
                        }
                    } else {
block_17:
                        var_a1 += 0x10;
                        var_a0 += 0x10;
                        if (var_a1 >= (u32) D_800ACC10) {
                            goto block_18;
                        }
                        goto loop_13;
                    }
                } else {
block_18:
                    D_800ACBEC += 1;
                }
            }
        }
        if ((M2C_FIELD(temp_s0, u32 *, 8) != 0) || (M2C_FIELD(temp_s0, u32 *, 0xC) != 0)) {
            M2C_FIELD(temp_s0, u32 *, 0x10) = (u32) M2C_FIELD(temp_s0, u32 *, 8);
            M2C_FIELD(temp_s0, u32 *, 0x14) = (u32) M2C_FIELD(temp_s0, u32 *, 0xC);
            func_8006CD38(temp_s0);
        }
        goto loop_1;
    }
}
