/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_8000EC00(s16, s32);                    /* extern */
M2C_UNK func_8002AAC0(s16);                         /* extern */
s32 func_8002AB14(M2C_UNK);                         /* extern */
s32 func_8002BF68(s32);                             /* extern */
M2C_UNK func_80032870(M2C_UNK *);                   /* extern */
extern s32 D_8007E4E0;
extern M2C_UNK D_80081AD0;
extern M2C_UNK D_800827A4;
extern M2C_UNK D_8008B470;

void func_80017D3C(void *arg0) {
    s16 temp_s0_2;
    s32 temp_s0;
    s32 temp_v0_3;
    void **temp_a2;
    void **temp_v1;
    void **temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD((&D_80081AD0)[D_8007E4E0], void ***, 0x44);
    temp_v0 = *temp_v1;
    M2C_FIELD(&D_800827A4, u16 *, 0x5AE) = M2C_FIELD(temp_v0, u16 (**)(void *), 0x1C)(temp_v1 + M2C_FIELD(temp_v0, s16 *, 0x18));
    if (M2C_FIELD(arg0, s32 *, 0x68) == 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
        temp_v1_2 = M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), void ***, 0x44);
        temp_v0_2 = *temp_v1_2;
        temp_a2 = M2C_FIELD(*((D_8007E4E0 * 4) + &D_80081AD0), void ***, 0x44);
        temp_v1_3 = *temp_a2;
        temp_v0_3 = func_8002BF68(M2C_FIELD(temp_v1_3, s32 (**)(void *, s32, void **), 0x44)(temp_a2 + M2C_FIELD(temp_v1_3, s16 *, 0x40), M2C_FIELD(temp_v0_2, s32 (**)(void *), 0x3C)(temp_v1_2 + M2C_FIELD(temp_v0_2, s16 *, 0x38)) - 1, temp_a2));
        if (temp_v0_3 != 0) {
            M2C_FIELD(&D_8008B470, u16 *, 0x35E) = (u16) M2C_FIELD(&D_800827A4, u16 *, 0x5AE);
            temp_s0 = func_8002AB14(0x40);
            temp_s0_2 = (temp_s0 << 8) + func_8002AB14(0x100);
            func_8002AAC0(temp_s0_2);
            M2C_FIELD(&D_8008B470, s16 *, 0x35C) = temp_s0_2;
        }
        func_8000EC00((s16) M2C_FIELD(&D_800827A4, u16 *, 0x5AE), temp_v0_3);
        func_80032870(&D_8008B470);
    }
}
