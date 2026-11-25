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

extern int D_80082760;
extern int D_80082764;
s32 func_8001268C();
s32 func_8002AAC0();
s32 func_8002AB14();
extern char D_8007F598[];
extern char D_8007F5A8[];
extern char D_8007F5B8[];
extern char D_8007F5C8[];
extern char D_8007F5D8[];
extern char D_8007F5E8[];
extern char D_8007F5F8[];
extern char D_8007F608[];
extern s8 D_8007F647;

s16 func_80012700(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s16 *temp_s2;
    s16 *temp_s3;
    s16 *temp_s5;
    s16 *temp_s7;
    s16 temp_s6;
    s16 var_s0;
    s16 var_v1;
    s32 temp_s1;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    void **temp_v0_6;
    void **temp_v1;
    void **temp_v1_2;
    void **temp_v1_3;
    void **temp_v1_4;
    void **temp_v1_5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1_6;

    var_a0 = (M2C_FIELD(arg1, u8 *, 0) << 8) + M2C_FIELD(arg1, u8 *, 1) + arg4 + (arg2 * 0x11) + (arg3 * 0x9D) + (arg5 * 0x8FF);
    if (D_80082760 != 0) {
        var_a0 = var_a0 + (D_80082764 * 0x460B) + (D_8007F647 * 0xF0241);
    }
    func_8002AAC0(var_a0);
    temp_v1_2 = M2C_FIELD(arg0, void ***, 0x44);
    temp_v0_2 = *temp_v1_2;
    M2C_FIELD(temp_v0_2, s32 (**)(void *), 0xC)(temp_v1_2 + M2C_FIELD(temp_v0_2, s16 *, 8));
    if (arg5 != 0) {
        temp_v1_3 = M2C_FIELD(arg0, void ***, 0x44);
        temp_v0_3 = *temp_v1_3;
        M2C_FIELD(temp_v0_3, s32 (**)(void *), 0x34)(temp_v1_3 + M2C_FIELD(temp_v0_3, s16 *, 0x30));
    }
    temp_s1 = (func_8001268C(arg0) & 0xFF) * 2;
    temp_s7 = temp_s1 + D_8007F598;
    temp_s2 = temp_s1 + D_8007F5A8;
    temp_s3 = temp_s1 + D_8007F5B8;
    temp_s5 = temp_s1 + D_8007F5C8;
loop_5:
    temp_v1_4 = M2C_FIELD(arg0, void ***, 0x44);
    temp_v0_4 = *temp_v1_4;
    if (M2C_FIELD(temp_v0_4, s32 (**)(void *), 0x24)(temp_v1_4 + M2C_FIELD(temp_v0_4, s16 *, 0x20)) == 0) {
        temp_v1_5 = M2C_FIELD(arg0, void ***, 0x44);
        temp_v0_5 = *temp_v1_5;
        var_s0 = M2C_FIELD(temp_v0_5, s16 (**)(void *), 0x1C)(temp_v1_5 + M2C_FIELD(temp_v0_5, s16 *, 0x18));
        temp_s6 = var_s0;
        if (var_s0 != 0x380) {
            if (var_s0 < 0x381) {
                if (var_s0 != 0x200) {
                    var_a1 = temp_s6 << 0x10;
                    if (var_s0 != 0x300) {

                    } else {
                        if (func_8002AB14(0x3E8, var_a1) < *temp_s3) {
                            var_s0 = 0;
                            goto block_46;
                        }
                        var_a1 = temp_s6 << 0x10;
                        if (func_8002AB14(0x3E8) < *temp_s2) {
                            var_s0 = 0x200;
                        }
                    }
                } else {
                    var_a1 = temp_s6 << 0x10;
                    if (func_8002AB14(0x3E8) < *temp_s2) {
                        var_s0 = 0;
                    }
                }
            } else if (var_s0 != 0x3C0) {
                var_a1 = temp_s6 << 0x10;
                if (var_s0 == 0x7FE0) {
                    if (func_8002AB14(0x3E8, var_a1) < *temp_s7) {
                        var_s0 = 0;
                    } else {
                        var_s0 = 0x200;
                        if (func_8002AB14(0x3E8) >= *(temp_s1 + D_8007F5E8)) {
                            var_s0 = 0x300;
                            if (func_8002AB14(0x3E8) >= *(temp_s1 + D_8007F5F8)) {
                                var_v0 = func_8002AB14(0x3E8);
                                var_v1 = *(temp_s1 + D_8007F608);
                                var_s0 = 0x3C0;
                                goto block_44;
                            }
                        }
                    }
                    goto block_46;
                }
            } else {
                if (func_8002AB14(0x3E8) < *(temp_s1 + D_8007F5D8)) {
                    var_s0 = 0;
                } else if (func_8002AB14(0x3E8) < *temp_s5) {
                    var_s0 = 0x200;
                } else if (func_8002AB14(0x3E8) < *temp_s3) {
                    var_s0 = 0x300;
                } else {
                    var_v0 = func_8002AB14(0x3E8);
                    var_v1 = *temp_s2;
block_44:
                    if (var_v0 < var_v1) {
                        var_s0 = 0x380;
                    }
                }
                goto block_46;
            }
        } else {
            if (func_8002AB14(0x3E8) < *temp_s5) {
                var_s0 = 0;
                goto block_46;
            }
            if (func_8002AB14(0x3E8) < *temp_s3) {
                var_s0 = 0x200;
block_46:
                var_a1 = temp_s6 << 0x10;
            } else {
                var_a1 = temp_s6 << 0x10;
                if (func_8002AB14(0x3E8) < *temp_s2) {
                    var_s0 = 0x300;
                }
            }
        }
        temp_v0_6 = M2C_FIELD(arg0, void ***, 0x44);
        temp_v1_6 = *temp_v0_6;
        M2C_FIELD(temp_v1_6, s32 (**)(void *, s32, s16, void *), 0x14)(temp_v0_6 + M2C_FIELD(temp_v1_6, s16 *, 0x10), var_a1 >> 0x10, var_s0, arg0 + 0x48);
        goto loop_5;
    }
    func_8002AAC0(-1);
    temp_v1 = M2C_FIELD(arg0, void ***, 0x44);
    temp_v0 = *temp_v1;
    return M2C_FIELD(M2C_FIELD(temp_v0, void *(**)(void *, s32), 0x44)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x40), 9), s16 *, 4);
}
