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

M2C_UNK func_8004217C(M2C_UNK);                     /* extern */
M2C_UNK func_80047370(M2C_UNK *);                   /* extern */
M2C_UNK func_80048478(M2C_UNK);                     /* extern */
extern M2C_UNK D_800904A4;
extern M2C_UNK D_80090C9C;
extern M2C_UNK D_800927B4;
extern M2C_UNK D_80092880;
extern M2C_UNK D_80093078;
extern M2C_UNK D_80093870;
extern M2C_UNK D_80093C6C;
extern M2C_UNK D_800951F0;
extern M2C_UNK D_80095454;
extern s32 D_80095B04;
extern s32 D_80095B20;

void func_80044808(void) {
    M2C_UNK *var_s1_2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s2;

    D_80095B20 = 1;
    func_8004217C(0);
    func_80048478(0x20);
    func_80047370(&D_800951F0);
    var_s0 = 0;
    if (D_80095B04 > 0) {
        do {
            func_80047370(((M2C_UNK *)((u8 *)&D_80093078 + var_s0 * 204)));
            var_s0 += 1;
        } while (var_s0 < D_80095B04);
    }
    func_80048478(0x40);
    var_s0_2 = 9;
    var_s1_2 = &D_80090C9C + 0x72C;
    do {
        func_80047370(var_s1_2);
        var_s0_2 -= 1;
        var_s1_2 -= 0xCC;
    } while (var_s0_2 >= 0);
    func_80047370(&D_80095454);
    func_80048478(0x20);
    temp_v0 = D_80095B04;
    var_s0_3 = 0;
    if (temp_v0 >= 0) {
        do {
            func_80047370(((M2C_UNK *)((u8 *)&D_80093870 + var_s0_3 * 204)));
            var_s0_3 += 1;
        } while (D_80095B04 >= var_s0_3);
    }
    var_s0_4 = 0;
    if (temp_v0 >= 0) {
        do {
            func_80047370(((M2C_UNK *)((u8 *)&D_80093C6C + var_s0_4 * 204)));
            var_s0_4 += 1;
        } while (D_80095B04 >= var_s0_4);
    }
    func_80048478(0x10);
    func_80047370(&D_800927B4);
    var_s2 = 0;
    do {
        func_80047370(((M2C_UNK *)((u8 *)&D_80092880 + var_s2 * 204)));
        func_80047370(((M2C_UNK *)((u8 *)&D_800904A4 + var_s2 * 204)));
        var_s2 += 1;
    } while (var_s2 < 0xA);
}
