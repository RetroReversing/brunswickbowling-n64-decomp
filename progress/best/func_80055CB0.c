/* Partial candidate from function #137438953714 in project #32; rechecked locally. */
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

M2C_UNK func_800549B0(M2C_UNK, s32);                /* extern */
s32 func_800549E4(M2C_UNK);                         /* extern */
M2C_UNK func_80054CF0(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_80055184(M2C_UNK, s32, s32);           /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, void **, void **);    /* extern */
M2C_UNK osSendMesg(s32, s32, M2C_UNK);              /* extern */
extern s32 D_8006DE20;
extern M2C_UNK D_80083AD0;
extern M2C_UNK D_80084D80;

void func_80055CB0(void) {
    s32 *__base_D_8006DE20;
    void *sp10;
    s32 temp_v0;
    M2C_UNK *__base_D_80083AD0;

    __base_D_80083AD0 = &D_80083AD0;

loop_1:
    for (;;) {
        osRecvMesg(&D_80084D80, &sp10, (void **)1);
        if (M2C_FIELD(sp10, s32 *, 4) != 0) {
            if (M2C_FIELD(sp10, s32 *, 8) == 1) {
                if (M2C_FIELD(sp10, s32 *, 0xC) & 0x80000000) {
                    __base_D_8006DE20 = &D_8006DE20;
                    (*__base_D_8006DE20) = 0;
                }
                func_80055184(0xB1FF0000, M2C_FIELD(sp10, s32 *, 0), M2C_FIELD(sp10, s32 *, 4));
                if (M2C_FIELD(sp10, s32 *, 0xC) & 0x80000000) {
                    (*__base_D_8006DE20) = 1;
                }
            }
        }
        osRecvMesg(__base_D_80083AD0, NULL, NULL);
        func_800549B0(0xB1FFFFE4, M2C_FIELD(sp10, s32 *, 0x10));
        func_800549B0(0xB1FFFFE8, M2C_FIELD(sp10, s32 *, 0x14));
        func_800549B0(0xB1FFFFEC, M2C_FIELD(sp10, s32 *, 0x18));
        func_800549B0(0xB1FFFFD8, 0x01010101);
        func_800549B0(0xB1FFFFE0, (s32) M2C_FIELD(sp10, u16 *, 0xE));
        osRecvMesg(__base_D_80083AD0, NULL, (void **)1);
        if ((M2C_FIELD(sp10, s32 *, 4) != 0) && (M2C_FIELD(sp10, s32 *, 8) == 0)) {
            temp_v0 = func_800549E4(0xB1FFFFDC);
            if (temp_v0 != 0) {
                if (M2C_FIELD(sp10, s32 *, 0xC) & 0x80000000) {
                    (*__base_D_8006DE20) = 0;
                }
                func_80054CF0(0xB1FF0000, M2C_FIELD(sp10, s32 *, 0), temp_v0);
                if (M2C_FIELD(sp10, s32 *, 0xC) & 0x80000000) {
                    (*__base_D_8006DE20) = 1;
                }
            }
        }
        if (M2C_FIELD(sp10, s32 *, 0x1C) == 0) {
            goto loop_1;
        }
        osSendMesg(M2C_FIELD(sp10, s32 *, 0x1C), func_800549E4(0xB1FFFFDC), 1);
        continue;
        break;
    }
}
