/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;



#define M2C_CARRY 0

#endif

extern M2C_UNK D_8007D700;
extern s32 D_8008E9E0;

s32 func_80021FB8(void) {
  s8 *temp;
  s32 *temp2;
    temp = (s8 *)(&D_8007D700);
    temp2 = (s32 *)(temp + (4));
    if ((*temp2) == 0) {
        (*(s32 *)((s8 *)(&D_8007D700) + (0xC))) = (s32) D_8008E9E0;
    } else {
        (*(s32 *)((s8 *)(&D_8007D700) + (0))) = 1;
    }
    return 0;
}
