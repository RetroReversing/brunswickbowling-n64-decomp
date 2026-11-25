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

M2C_UNK func_80025438();                            /* extern */
M2C_UNK func_80030688(M2C_UNK *, s32 *, M2C_UNK *); /* extern */
M2C_UNK func_800307D4(M2C_UNK *, u8, s16 *, M2C_UNK **, s16 *, s16 *, s16 *, s16 *, s16 *, s16 *, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_80039738(); /* extern */
M2C_UNK func_80045050(); /* extern */
M2C_UNK func_80045200(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8005978C(M2C_UNK *, M2C_UNK *, s16);   /* extern */
extern M2C_UNK D_80076030;
extern M2C_UNK D_80076304;
extern M2C_UNK D_8007630C;
extern M2C_UNK D_80076318;
extern M2C_UNK D_80076320;
extern M2C_UNK D_80076328;
extern M2C_UNK D_80076330;
extern M2C_UNK D_80076344;
extern M2C_UNK D_8007634C;
extern M2C_UNK D_80076354;
extern M2C_UNK D_8008B3A4;
extern M2C_UNK D_8008CF28;
extern s32 D_8008D8E8;
extern M2C_UNK D_8008ED80;

#define sp30 (*(s32 *)(sp + 0x30))
#define sp40 (*(s32 *)(sp + 0x40))
#define sp48 (*(s32 *)(sp + 0x48))
#define sp4C (*(s16 *)(sp + 0x4C))
#define sp50 (*(M2C_UNK * *)(sp + 0x50))
#define sp54 (*(s16 *)(sp + 0x54))
#define sp56 (*(s16 *)(sp + 0x56))
#define sp58 (*(s16 *)(sp + 0x58))
#define sp5A (*(s16 *)(sp + 0x5A))
#define sp5C (*(s16 *)(sp + 0x5C))
#define sp5E (*(s16 *)(sp + 0x5E))
#define sp60 (*(s32 *)(sp + 0x60))
#define sp64 (*(s32 *)(sp + 0x64))
#define sp68 (*(s32 *)(sp + 0x68))
void func_8002744C(s32 arg0) {
    u8 sp[152];
    M2C_UNK *var_v0;
    M2C_UNK var_s0;
    s16 var_a2;
    s32 temp_fp;
    s32 temp_s1;
    s32 var_a2_2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s7;

    sp48 = 0xE;
    sp68 = D_8008D8E8;
    temp_fp = M2C_FIELD(&D_8008ED80, s32 *, 4);
    func_80030688(&D_8008B3A4, &sp48, &sp30);
    func_80045200(&D_8008ED80, 1);
    M2C_FIELD(&D_8008ED80, s32 *, 4) = 2;
    func_80045050(&D_8008ED80, 0x60, 0x4E, 0, 0x220, 0xB, 0x30, 0x30, 0x30, 0, 0);
    func_80045050(&D_8008ED80, 0, 0x43, 0, 0x106, 8, 0x48, 0xA0, 0x50, 0, 0);
    func_80045050(&D_8008ED80, 0, 0x4B, 0, 0x5C, 0xD, 0x48, 0xA0, 0x50, 0, 0);
    if (arg0 != 0) {

    }
    func_80045050(&D_8008ED80, 0x10A, 0x43, 0, 0, 0);
    var_s3 = 0;
    var_s7 = 0x5A0000;
    var_s5 = 0x5B;
    M2C_FIELD(&D_8008ED80, s32 *, 4) = temp_fp;
    D_8008D8E8 = 1;
loop_4:
    if (var_s3 < 0xE) {
        M2C_FIELD(&D_8008ED80, s32 *, 4) = 2;
        if (var_s3 & 1) {

        }
        func_80045050(&D_8008ED80, 0, var_s5, 0, 1, 0);
        M2C_FIELD(&D_8008ED80, s32 *, 4) = temp_fp;
        if (var_s3 < sp48) {
            func_800307D4(&D_8008B3A4, M2C_FIELD((sp + var_s3), u8 *, 0x30), &sp4C, &sp50, &sp54, &sp56, &sp58, &sp5A, &sp5C, &sp5E, &sp60, &sp64);
            var_s0 = 4;
            if (sp64 != 0) {
                var_s0 = 6;
            }
            temp_s1 = var_s7 >> 0x10;
            func_80039738(&D_8008CF28, var_s0, 0, 0x64, temp_s1, sp50);
            func_8005978C(&sp40, &D_80076030, sp4C + 1);
            func_80039738(&D_8008CF28, var_s0, 1, 0x50, temp_s1, &sp40);
            if (arg0 != 0) {
                if (sp5A >= 0) {
                    func_8005978C(&sp40, &D_80076030, sp5A);
                    func_80039738(&D_8008CF28, var_s0, 1, 0x13A, temp_s1, &sp40);
                    func_8005978C(&sp40, &D_80076030, sp5C);
                    func_80039738(&D_8008CF28, var_s0, 1, 0x19D, temp_s1, &sp40);
                }
                var_a2 = sp5E;
                goto block_18;
            }
            func_8005978C(&sp40, &D_80076030, sp54);
            func_80039738(&D_8008CF28, var_s0, 1, 0x13A, temp_s1, &sp40);
            if (sp56 >= 0) {
                func_8005978C(&sp40, &D_80076030, sp56);
                func_80039738(&D_8008CF28, var_s0, 1, 0x19D, temp_s1, &sp40);
            }
            var_a2 = sp58;
            if (var_a2 >= 0) {
block_18:
                func_8005978C(&sp40, &D_80076030, var_a2);
                func_80039738(&D_8008CF28, var_s0, 1, 0x201, temp_s1, &sp40);
            }
        }
        var_s7 += 0x80000;
        var_s5 += 8;
        var_s3 += 1;
        goto loop_4;
    }
    M2C_FIELD(&D_8008ED80, s32 *, 4) = 2;
    func_80045050(&D_8008ED80, 0, 0x40, 0, 0x280, 2, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0x5C, 0x4C, 0, 0x228, 2, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0, 0x58, 0, 0x280, 2, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0, 0xCB, 0, 0x280, 2, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0x5C, 0x4E, 0, 4, 0x7F, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0x106, 0x42, 0, 4, 0x8B, 8, 8, 8, 0, 0);
    func_80045050(&D_8008ED80, 0x16A, 0x4E, 0, 2, 0x7F, 8, 8, 8, 0, 0);
    if (arg0 != 0) {
        func_80045050(&D_8008ED80, 0x1D0, 0x43, 0, 0xB0, 0x14, 0x70, 8, 0x78, 0, 0);
        var_a2_2 = 0x42;
    } else {
        var_a2_2 = 0x4E;
    }
    func_80045050(&D_8008ED80, 0x1CE, var_a2_2, 0, 8, 8, 8, 0, 0);
    func_80039738(&D_8008CF28, 0, 0, 0x64, 0x4E, &D_80076304);
    if (arg0 != 0) {
        func_80039738(&D_8008CF28, 0, 1, 0x16A, 0x42, &D_8007630C);
        func_80039738(&D_8008CF28, 0, 1, 0x13A, 0x4E, &D_80076318);
        func_80039738(&D_8008CF28, 0, 1, 0x19D, 0x4E, &D_80076320);
        var_v0 = &D_80076328;
    } else {
        func_80039738(&D_8008CF28, 0, 1, 0x19D, 0x42, &D_80076330);
        func_80039738(&D_8008CF28, 0, 1, 0x13A, 0x4E, &D_80076344);
        func_80039738(&D_8008CF28, 0, 1, 0x19D, 0x4E, &D_8007634C);
        var_v0 = &D_80076354;
    }
    func_80039738(&D_8008CF28, 0, 1, 0x201, (s32) var_v0);
    D_8008D8E8 = sp68;
    func_80025438();
}
