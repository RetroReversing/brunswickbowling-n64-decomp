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

extern unsigned char D_8008EB14;
extern unsigned char D_8008EB15;
s32 func_80021A94();
s32 func_8005A0E0();
s32 osPfsAllocateFile();
extern char D_80083BA8[];
extern s32 D_8008E9E0;
extern char D_8008EB00[];
extern char D_8008EB10[];
extern char D_8009C540[];
extern char D_8009D630[];

s32 func_80040650(void *arg0, s32 arg1) {
    u8 sp20;
    u8 sp21;
    s32 var_a3;
    s32 var_s1;
    u32 temp_a0;
    char *var_a2;
    char *var_s0;
    u8 temp_v0;

    var_s1 = osPfsAllocateFile((arg1 * 0x68) + D_8009D630, 0x3738, 0x4E4F5745, D_8008EB00, D_8008EB10, 0x3E00, (arg1 * 4) + D_8009C540);
    if (var_s1 == 9) {
        var_s1 = 0;
    }
    func_80021A94(D_80083BA8, &sp20);
    var_s0 = D_80083BA8 + 0x1680;
    var_a3 = 1;
    var_a2 = &sp20;
    temp_a0 = D_8008E9E0 ^ func_8005A0E0();
    sp21 ^= temp_a0;
    sp20 ^= temp_a0 >> 8;
    do {
        temp_v0 = *(u8 *)var_a2;
        var_a2 += 1;
        var_a3 -= 1;
        *(u8 *)var_s0 = temp_v0;
        var_s0 += 1;
    } while (var_a3 != -1);
    D_8008EB14 = sp20;
    D_8008EB15 = sp21;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    return var_s1;
}
