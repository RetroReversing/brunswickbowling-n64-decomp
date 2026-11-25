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

M2C_UNK appendString(M2C_UNK *, s32);               /* extern */
M2C_UNK *func_800468F4(void *, s32, void **, void **); /* extern */
s32 *func_80050988(M2C_UNK *, M2C_UNK *);           /* extern */
M2C_UNK func_80057FA0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_8005A970(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_80079AB0;
extern M2C_UNK D_80095AB4;

void func_80046D2C(void *arg0) {
    M2C_UNK sp10;
    void *sp50;
    void *sp54;
    M2C_UNK *temp_s2;
    M2C_UNK *var_a1;
    s32 *var_s0;
    s32 var_a0;
    s32 var_s1;
    u32 var_s4;
    void *temp_v0;
    void *temp_v0_2;

    var_s4 = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), u32 *, 0x10) != 0) {
        var_s1 = 0;
        do {
            temp_s2 = func_800468F4(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x30) + var_s1, &sp50, &sp54);
            func_8005A970(&sp10, &D_80095AB4);
            appendString(&sp10, M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x30) + var_s1);
            var_s0 = func_80050988(&sp10, &D_80079AB0);
            var_a1 = &sp10;
            if (var_s0 == NULL) {
                var_s0 = func_80050988(temp_s2, &D_80079AB0);
                var_a1 = temp_s2;
                if (var_s0 != NULL) {
                    var_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x30);
                    goto block_6;
                }
            } else {
                var_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x30);
block_6:
                func_8005A970(var_a0 + var_s1, var_a1);
                if (var_s0 != NULL) {
                    func_80057FA0(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x30) + var_s1 + 0x10, *var_s0, 0x10);
                    if (sp50 != NULL) {
                        temp_v0 = M2C_FIELD((var_s1 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x30)), void **, 0x14);
                        M2C_FIELD(temp_v0, M2C_UNK *, 0x10) = M2C_UNALIGNED32(M2C_FIELD(sp50, M2C_UNK *, 0));
                        M2C_FIELD(temp_v0, M2C_UNK *, 0x14) = M2C_UNALIGNED32(M2C_FIELD(sp50, M2C_UNK *, 4));
                        M2C_FIELD(temp_v0, M2C_UNK *, 0x18) = M2C_UNALIGNED32(M2C_FIELD(sp50, M2C_UNK *, 8));
                        M2C_FIELD(temp_v0, M2C_UNK *, 0x1C) = M2C_UNALIGNED32(M2C_FIELD(sp50, M2C_UNK *, 0xC));
                    }
                    if (sp54 != NULL) {
                        temp_v0_2 = M2C_FIELD((var_s1 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x30)), void **, 0x14);
                        M2C_FIELD(temp_v0_2, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(sp54, M2C_UNK *, 0));
                        M2C_FIELD(temp_v0_2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(sp54, M2C_UNK *, 4));
                        M2C_FIELD(temp_v0_2, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(sp54, M2C_UNK *, 8));
                        M2C_FIELD(temp_v0_2, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(sp54, M2C_UNK *, 0xC));
                    }
                }
            }
            var_s4 += 1;
            var_s1 += 0x20;
        } while (var_s4 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), u32 *, 0x10));
    }
}
