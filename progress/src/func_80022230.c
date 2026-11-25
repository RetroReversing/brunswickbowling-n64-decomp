/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;



#define M2C_CARRY 0

#endif

s32 func_80022230(s32 arg0, s32 arg1) {
  s32 *temp;
    temp = (s32 *)((s8 *)((arg0 + (arg1 * 4))) + (0x24));
    return (*temp);
}
