/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;



#define M2C_CARRY 0

#endif

extern M2C_UNK D_80083430;
extern M2C_UNK D_8008E7F0;

s32 func_8001D818(void) {
    s8 *temp;
    M2C_UNK **temp2;
    temp = (s8 *)(&D_8008E7F0);
    temp2 = (M2C_UNK **)(temp + (0x54));
    (*temp2) = &D_80083430;
    (*(M2C_UNK **)((s8 *)(&D_8008E7F0) + (0x58))) = &D_80083430;
    (*(s32 *)((s8 *)(&D_8008E7F0) + (0x50))) = 6;
    return 1;
}
