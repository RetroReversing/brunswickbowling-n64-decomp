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

M2C_UNK func_8005EB74(void *, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_8006148C(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80061544(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_800615F4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80061680(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_800616DC(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_80061738(M2C_UNK *);                   /* extern */
M2C_UNK func_80061F60(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8006236C(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_800628A0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_800631B0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_800633CC(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_800640D8(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_8006415C(M2C_UNK *, void *);           /* extern */
M2C_UNK *func_800641F0(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_8005E8A8(void *arg0, void *arg1) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s0_2;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v0_2;
    M2C_UNK *temp_v0_3;
    M2C_UNK *var_s2;
    M2C_UNK *var_v1;
    s32 temp_s6;
    s32 var_s3;
    s32 var_s3_2;

    temp_s6 = M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x48) = 0xA0;
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    temp_v0 = func_800641F0(0, 0, temp_s6, 1, 0x1C);
    func_80061738(temp_v0);
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = temp_v0;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = func_800641F0(0, 0, temp_s6, 1, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x40) = 1;
    func_80061680(M2C_FIELD(arg0, M2C_UNK **, 0x34), func_800641F0(0, 0, temp_s6, M2C_FIELD(arg1, s32 *, 4), 4), M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = func_800641F0(0, 0, temp_s6, 1, 0x20);
    func_800616DC(M2C_FIELD(arg0, M2C_UNK **, 0x30), func_800641F0(0, 0, temp_s6, M2C_FIELD(arg1, s32 *, 4), 4), M2C_FIELD(arg1, s32 *, 4));
    if (M2C_FIELD(arg1, u8 *, 0x1C) != 0) {
        func_8005EB74(arg0, 0, arg1, temp_s6);
    } else {
        func_800631B0(M2C_FIELD(arg0, M2C_UNK **, 0x30), 2, M2C_FIELD(arg0, M2C_UNK **, 0x34));
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_v0_2 = func_800641F0(0, 0, temp_s6, M2C_FIELD(arg1, s32 *, 4), 0xDC);
    var_s3 = 0;
    if (M2C_FIELD(arg1, s32 *, 4) > 0) {
        var_s2 = temp_v0_2;
        __repair_rows: {
            func_8006415C(var_s2, arg0 + 4);
            M2C_FIELD(var_s2, s32 *, 8) = 0;
            temp_s0 = var_s2 + 0x10;
            func_80061544(temp_s0, M2C_FIELD(arg0, s32 *, 0x24), temp_s6);
            func_80061F60(temp_s0, 1, 0);
            temp_s1 = var_s2 + 0x58;
            func_800615F4(temp_s1, temp_s6);
            func_800633CC(temp_s1, 1, temp_s0);
            temp_s0_2 = var_s2 + 0x8C;
            func_8006148C(temp_s0_2, temp_s6);
            func_800628A0(temp_s0_2, 1, temp_s1);
            func_8006236C(M2C_FIELD(arg0, M2C_UNK **, 0x34), 2, temp_s0_2);
            M2C_FIELD(var_s2, M2C_UNK **, 0xC) = temp_s0_2;
            var_s3 += 1;
            var_s2 += 0xDC;
        }
if (var_s3 < M2C_FIELD(arg1, s32 *, 4)) goto __repair_rows;
    }
    func_800640D8(temp_v0, 1, M2C_FIELD(arg0, M2C_UNK **, 0x30));
    temp_v0_3 = func_800641F0(0, 0, temp_s6, M2C_FIELD(arg1, s32 *, 8), 0x1C);
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = NULL;
    var_s3_2 = 0;
    if (M2C_FIELD(arg1, s32 *, 8) > 0) {
        var_v1 = temp_v0_3;
        do {
            *var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0x2C);
            M2C_FIELD(arg0, M2C_UNK **, 0x2C) = var_v1;
            var_s3_2 += 1;
            var_v1 += 0x1C;
        } while (var_s3_2 < M2C_FIELD(arg1, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0x28) = temp_s6;
}
