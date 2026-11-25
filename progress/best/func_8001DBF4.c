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

M2C_UNK func_8001DAD8(void *);                      /* extern */
M2C_UNK func_800235F0();                            /* extern */
M2C_UNK func_80023634(void *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8003E7FC(M2C_UNK *);                   /* extern */
M2C_UNK func_8003F2B8(M2C_UNK *);                   /* extern */
extern M2C_UNK D_80075304;
extern M2C_UNK D_8007531C;
extern M2C_UNK D_80075334;
extern s32 D_8007E4E4;
extern M2C_UNK D_800834E0;
extern M2C_UNK D_80083534;
extern M2C_UNK D_80083588;
extern s32 D_800835DC;
extern s32 D_800835E0;
extern s32 D_800835E4;
extern s32 D_800835E8;
extern M2C_UNK D_80083AF0;
extern M2C_UNK D_800991C0;
extern M2C_UNK func_8001DA5C;
extern M2C_UNK func_8001DA7C;
extern M2C_UNK func_8001DA9C;

void func_8001DBF4(void *arg0) {
    M2C_UNK *var_a1_2;
    s32 var_a2;

    func_800235F0();
    var_a2 = 0;
    D_800835DC = -2;
    M2C_FIELD(arg0, s32 *, 0x50) = -1;
    D_800835E0 = -1;
    do {
        M2C_FIELD(((M2C_UNK *)((u8 *)&D_800991C0 + var_a2 * 16)), s32 *, 0) = (s32) *((s32 *)((u8 *)&D_8007E4E4 + var_a2 * 24));
        if (arg0 == &D_80083588) {
            M2C_FIELD(((M2C_UNK *)((u8 *)&D_800991C0 + var_a2 * 16)), s32 *, 4) = -1;
        } else {
            M2C_FIELD(((M2C_UNK *)((u8 *)&D_800991C0 + var_a2 * 16)), s32 *, 4) = (s32) D_800835E4;
        }
        if (arg0 == &D_800834E0) {
            M2C_FIELD(((M2C_UNK *)((u8 *)&D_800991C0 + var_a2 * 16)), M2C_UNK **, 8) = &func_8001DA5C;
        } else if (arg0 == &D_80083534) {
            M2C_FIELD(((M2C_UNK *)((u8 *)&D_800991C0 + var_a2 * 16)), M2C_UNK **, 8) = &func_8001DA7C;
        } else if (arg0 == &D_80083588) {
            M2C_FIELD(((M2C_UNK *)((u8 *)&D_800991C0 + var_a2 * 16)), M2C_UNK **, 8) = &func_8001DA9C;
        }
        M2C_FIELD(((M2C_UNK *)((u8 *)&D_800991C0 + var_a2 * 16)), s32 *, 0xC) = 0x16;
        var_a2 += 1;
    } while (var_a2 < 7);
    if (arg0 == &D_800834E0) {
        var_a1_2 = &D_80075304;
        goto block_15;
    }
    if (arg0 == &D_80083534) {
        var_a1_2 = &D_8007531C;
block_15:
        func_80023634(arg0, var_a1_2, &D_800991C0, 7, D_800835E8, 0);
    } else if (arg0 == &D_80083588) {
        func_80023634(arg0, &D_80075334, &D_800991C0, 7, D_800835E8, 0);
        func_8003F2B8(&D_80083AF0);
        func_8003E7FC(&D_80083AF0);
    }
    func_8001DAD8(arg0);
}
