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

M2C_UNK bcopy(M2C_UNK *, void *, M2C_UNK);          /* extern */
M2C_UNK func_8006C3A4();                            /* extern */
M2C_UNK func_8006C410();                            /* extern */
s32 __osPfsCheckRamArea(void *);                          /* extern */
s32 func_8006F510(void *);                          /* extern */
s32 __osPfsGetStatus(s32, s32);                        /* extern */
s32 func_8006FEA0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_8006FF44(M2C_UNK *, u16 *, u16 *);     /* extern */
s32 func_8006FF88(void *, M2C_UNK *, M2C_UNK *);    /* extern */
s32 func_80070274(void *, M2C_UNK *);               /* extern */
s32 __osContRamRead(s32, s32, M2C_UNK, M2C_UNK *);    /* extern */

s32 osPfsInitPak(s32 arg0, void *arg1, s32 arg2) {
    union {
        unsigned char bytes[76];
        struct { M2C_UNK value; } view_sp10;
        struct { unsigned char pad[28]; u16 value; } view_sp2C;
        struct { unsigned char pad[30]; u16 value; } view_sp2E;
        struct { unsigned char pad[32]; M2C_UNK value; } view_sp30;
        struct { unsigned char pad[56]; u16 value; } view_sp48;
        struct { unsigned char pad[64]; u16 value; } view_sp50;
        struct { unsigned char pad[66]; u16 value; } view_sp52;
    } m2c_initial_frame;

                 
                 
             
             
    M2C_UNK *temp_a1;
    M2C_UNK *var_a0;
    M2C_UNK *var_s2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_v0;
    u8 temp_v1;

    func_8006C3A4();
    temp_s0 = __osPfsGetStatus(arg0, arg2);
    func_8006C410();
    var_v0 = temp_s0;
    if (temp_s0 == 0) {
        M2C_FIELD(arg1, s32 *, 4) = arg0;
        M2C_FIELD(arg1, s32 *, 8) = arg2;
        M2C_FIELD(arg1, s32 *, 0) = 0;
        var_v0 = __osPfsCheckRamArea(arg1);
        if (var_v0 == 0) {
            var_v0 = func_8006FEA0(arg1, 0);
            if (var_v0 == 0) {
                var_v0 = __osContRamRead(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), 1, &m2c_initial_frame.view_sp10.value);
                if (var_v0 == 0) {
                    func_8006FF44(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp50.value, &m2c_initial_frame.view_sp52.value);
                    var_s2 = &m2c_initial_frame.view_sp10.value;
                    if ((m2c_initial_frame.view_sp2C.value != m2c_initial_frame.view_sp50.value) || (m2c_initial_frame.view_sp2E.value != m2c_initial_frame.view_sp52.value)) {
                        temp_v0_2 = func_80070274(arg1, var_s2);
                        if (temp_v0_2 != 0) {
                            M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 4);
                            return temp_v0_2;
                        }
                    }
                    var_a0 = var_s2;
                    if (!(M2C_FIELD(var_s2, u16 *, 0x18) & 1)) {
                        temp_a1 = var_s2;
                        var_s2 = &m2c_initial_frame.view_sp30.value;
                        temp_v0_3 = func_8006FF88(arg1, temp_a1, var_s2);
                        if (temp_v0_3 != 0) {
                            var_v0 = temp_v0_3;
                            if (temp_v0_3 == 0xA) {
                                M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 4);
                                var_v0 = temp_v0_3;
                            }
                            /* Duplicate return node #17. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        var_a0 = var_s2;
                        if (!(m2c_initial_frame.view_sp48.value & 1)) {
                            return 0xB;
                        }
                        goto block_14;
                    }
block_14:
                    bcopy(var_a0, arg1 + 0xC, 0x20);
                    M2C_FIELD(arg1, s32 *, 0x4C) = (s32) M2C_FIELD(var_s2, u8 *, 0x1B);
                    temp_v1 = M2C_FIELD(var_s2, u8 *, 0x1A);
                    M2C_FIELD(arg1, s32 *, 0x50) = 0x10;
                    M2C_FIELD(arg1, s32 *, 0x54) = 8;
                    M2C_FIELD(arg1, u8 *, 0x64) = temp_v1;
                    M2C_FIELD(arg1, s32 *, 0x60) = (s32) ((temp_v1 * 2) + 3);
                    temp_v0_4 = (M2C_FIELD(arg1, u8 *, 0x64) + 1) * 8;
                    M2C_FIELD(arg1, s32 *, 0x58) = temp_v0_4;
                    M2C_FIELD(arg1, s32 *, 0x5C) = (s32) (temp_v0_4 + (M2C_FIELD(arg1, u8 *, 0x64) * 8));
                    temp_v0_5 = __osContRamRead(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), 7, arg1 + 0x2C);
                    var_v0 = temp_v0_5;
                    if (temp_v0_5 == 0) {
                        temp_v0 = func_8006F510(arg1);
                        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 1);
                        return temp_v0;
                    }
                    /* Duplicate return node #17. Try simplifying control flow for better match */
                    return var_v0;
                }
            }
        }
    }
    return var_v0;
}
