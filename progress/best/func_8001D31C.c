/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;



#define M2C_CARRY 0

#endif

M2C_UNK func_80013348();                            /* extern */
extern M2C_UNK D_80089930;

s32 func_8001D31C(void) {
    s8 *temp;
    s32 *temp2;
    func_80013348();
    temp = (s8 *)(&D_80089930);
    temp2 = (s32 *)(temp + (0x14));
    (*temp2) = 1;
    (*(s16 *)((s8 *)(&D_80089930) + (0x18))) = 0x7FE0;
    (*(s32 *)((s8 *)(&D_80089930) + (0x3C))) = 1;
    return 1;
}
