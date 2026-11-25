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

s32 func_8001F59C();
void *func_800205F8();
s32 func_80020620();
s32 func_800235F0();
s32 func_80023634();
extern char D_8001F340[];
extern char D_80075780[];
extern char D_80075794[];
extern char D_800757AC[];
extern char D_80083280[];
extern char D_800833B0[];
extern char D_80083430[];
extern char D_80083850[];
extern char D_800838A4[];
extern char D_800838F8[];
extern char D_80083BA8[];
extern char D_8008B130[];
extern char D_800993E0[];
extern s32 func_8001F4A8;
extern s32 func_8001F540;

void func_8001F890(void *arg0) {
    s32 *var_fp;
    s32 *var_s0;
    s32 *var_s5;
    s32 *var_s6;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    func_800235F0();
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    func_8001F59C(arg0);
    if (arg0 == D_80083850) {
        var_s5 = D_8001F340;
        var_fp = D_80075780;
        var_s6 = D_800833B0;
        goto block_6;
    }
    if (arg0 == D_800838A4) {
        var_fp = D_80075794;
        var_s5 = &func_8001F4A8;
        var_s6 = D_80083430;
        goto block_6;
    }
    var_s3 = 0;
    if (arg0 == D_800838F8) {
        var_fp = D_800757AC;
        var_s5 = &func_8001F540;
        var_s6 = NULL;
block_6:
        var_s3 = 0;
    }
    var_s1 = 0;
    var_s0 = D_800993E0;
loop_8:
    if (var_s1 < 6) {
        temp_v0 = func_800205F8(D_80083BA8, var_s1);
        var_v1 = 0;
        if (M2C_FIELD(temp_v0, u8 *, 0) == 0) {
            var_v1 = M2C_FIELD(temp_v0, u8 *, 1) == 0;
        }
        if (var_v1 != 0) {
            var_s1 += 1;
        } else {
            if (M2C_FIELD(temp_v0, u8 *, 2) != 0) {
                var_v0 = func_80020620(D_80083BA8, var_s1, 0) + 2;
            } else {
                var_v0 = *((M2C_FIELD(temp_v0, u8 *, 3) * 0x1C) + D_8008B130);
            }
            M2C_FIELD(var_s0, s32 *, 0) = var_v0;
            if (arg0 != D_80083850) {
                M2C_FIELD(var_s0, s32 **, 4) = D_80083280;
            } else {
                M2C_FIELD(var_s0, s32 **, 4) = NULL;
            }
            M2C_FIELD(var_s0, s32 **, 8) = var_s5;
            M2C_FIELD(var_s0, s32 *, 0xC) = 0x14;
            var_s0 += 0x10;
            var_s3 += 1;
            var_s1 += 1;
        }
        goto loop_8;
    }
    func_80023634(arg0, var_fp, D_800993E0, var_s3, var_s6, 0);
}
