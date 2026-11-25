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

s32 *func_8004C9A8(s32, M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_8004CBD8(s32 *);                       /* extern */
M2C_UNK func_8004F088(void *);                      /* extern */
void *func_80071668(s32);                           /* extern */
M2C_UNK func_800716D8(s32, void *);                 /* extern */
extern s32 D_8009C898;
extern s32 D_8009CFC8;

void *func_8004F0B8(s32 arg0, void *arg1, s16 arg2) {
    s32 *temp_v0_2;
    void *temp_v0;

    temp_v0_2 = func_8004C9A8(D_8009C898, 0x1F40, 0x10);
    if (temp_v0_2 != NULL) {
        temp_v0 = func_80071668(D_8009CFC8);
        if (temp_v0 != NULL) {
            func_800716D8(D_8009CFC8, temp_v0);
            M2C_FIELD(temp_v0, s32 **, 0x20) = temp_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0) = 1;
            M2C_FIELD(temp_v0, s32 *, 0x1C) = (s32) *temp_v0_2;
            M2C_FIELD(temp_v0, u16 *, 0xC) = (u16) M2C_FIELD(arg1, u16 *, 0);
            M2C_FIELD(temp_v0, u16 *, 0xE) = (u16) M2C_FIELD(arg1, u16 *, 2);
            M2C_FIELD(temp_v0, u16 *, 0x10) = (u16) M2C_FIELD(arg1, u16 *, 4);
            M2C_FIELD(temp_v0, s16 *, 0x14) = arg2;
            M2C_FIELD(temp_v0, s32 *, 0x28) = arg0;
            M2C_FIELD(temp_v0, s16 *, 0x38) = 1;
            M2C_FIELD(temp_v0, s16 *, 0x3A) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x3C) = 1;
            M2C_FIELD(temp_v0, u16 *, 0x12) = (u16) M2C_FIELD(arg1, u16 *, 6);
            func_8004F088(temp_v0);
            return temp_v0;
        }
        func_8004CBD8(temp_v0_2);
        goto block_4;
    }
block_4:
    return NULL;
}
