/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_80013348();                            /* extern */
M2C_UNK func_800235F0(s32);                         /* extern */
M2C_UNK func_80023634(s32, M2C_UNK *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_80075064;
extern M2C_UNK D_80083400;
extern M2C_UNK D_80083588;
extern M2C_UNK *D_800835E4;
extern s32 D_800835E8;
extern M2C_UNK D_8008CEB0;
extern M2C_UNK D_8008D8EC;
extern M2C_UNK D_8008D9EC;

void func_8001D488(s32 arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    s32 var_a2;

    func_80013348();
    func_800235F0(arg0);
    func_80023634(arg0, &D_80075064, &D_80083400, 3, 0, 0);
    var_a2 = 0;
    var_a0 = &D_8008D8EC;
    var_a1 = &D_8008D9EC;
    D_800835E8 = arg0;
    D_800835E4 = &D_80083588;
    __repair_rows: {
        M2C_FIELD(var_a0, M2C_UNK **, 0xC) = var_a1;
        M2C_FIELD(var_a0, s32 *, 0) = 5;
        M2C_FIELD(var_a0, s32 *, 4) = 1;
        M2C_FIELD(var_a0, M2C_UNK **, 8) = &D_8008CEB0;
        var_a0 += 0x10;
        var_a2 += 1;
        var_a1 += 0x20;
    }
if (var_a2 < 0x10) goto __repair_rows;
}
