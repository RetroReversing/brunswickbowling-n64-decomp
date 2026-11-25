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

s32 osContInit();
s32 osPfsInitPak();
extern char D_8009CFE0[];
extern s16 D_8009D5B0;
extern s16 D_8009D5F8;
extern s32 D_8009D618;
extern char D_8009D630[];
extern u16 D_8009D840;
extern s32 D_8009D858;

void func_8004F8E8(void) {
    u8 sp10;
    s32 *var_s6;
    char *var_s0;
    char *var_s4;
    char *var_s2;
    char *var_s3;
    s32 var_s1;
    char *var_s5;
    u16 temp_v1;

    osContInit(D_8009CFE0, &sp10, &D_8009D840);
    var_s1 = 0;
    var_s3 = &D_8009D618;
    var_s2 = &D_8009D858;
    var_s6 = D_8009D630;
    var_s5 = &D_8009D840;
    var_s4 = &D_8009D5B0;
    var_s0 = &D_8009D5F8;
    do {
        *(s16 *)var_s0 = 0;
        *(s16 *)var_s4 = 0;
        if ((((s32) sp10 >> var_s1) & 1) && (temp_v1 = *(u16 *)var_s5, ((temp_v1 & 1) != 0)) && (temp_v1 & 4)) {
            *(s32 *)var_s2 = osPfsInitPak(D_8009CFE0, var_s6, var_s1);
            *(s32 *)var_s3 = 1;
        } else {
            *(s32 *)var_s2 = 1;
            *(s32 *)var_s3 = 0;
        }
        var_s3 += 4;
        var_s2 += 4;
        var_s6 += 0x68;
        var_s5 += 4;
        var_s4 += 2;
        var_s1 += 1;
        var_s0 += 2;
    } while (var_s1 < 4);
}
