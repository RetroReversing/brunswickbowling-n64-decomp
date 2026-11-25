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

extern int D_80076A34;
extern int D_80076A38;
extern int D_80076A3C;
s32 appendString();
s32 func_8005978C();
extern char D_80076A40[];
extern char D_80076A48[];
extern char D_80076A50[];
extern char D_80076A5C[];
extern s16 D_80089948;
extern char D_80099450[];
extern char D_80099480[];
extern char D_800994B0[];

void func_8002CF84(void *arg0, s32 **arg1, s32 **arg2, s32 **arg3) {
    s32 sp10;
    s32 *temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 var_a2;
    s16 var_a3;

    *arg1 = D_80099450;
    *arg2 = D_800994B0;
    *arg3 = D_80099480;
    M2C_FIELD(*arg1, s8 *, 0) = 0;
    temp_v1 = *arg1;
    M2C_FIELD(temp_v1, s8 *, 0) = M2C_UNALIGNED32(D_80076A34);
    M2C_FIELD(temp_v1, s32 *, 4) = M2C_UNALIGNED32(D_80076A38);
    M2C_FIELD(temp_v1, s32 *, 8) = M2C_UNALIGNED32(D_80076A3C);
    if (D_80089948 == 0x7FE0) {
        var_a2 = M2C_FIELD(arg0, s16 *, 6);
        var_a3 = M2C_FIELD(arg0, s16 *, 4);
    } else {
        var_a2 = M2C_FIELD(arg0, s16 *, 0xA);
        var_a3 = M2C_FIELD(arg0, s16 *, 8);
    }
    func_8005978C(&sp10, D_80076A40, var_a2, var_a3);
    appendString(*arg1, &sp10);
    func_8005978C(*arg2, D_80076A40, M2C_FIELD(arg0, s16 *, 0xE), M2C_FIELD(arg0, s16 *, 0xC));
    temp_v1_2 = M2C_FIELD(arg0, s16 *, 0xC);
    if (temp_v1_2 != 0) {
        func_8005978C(&sp10, D_80076A48, (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 0xE) * 0xC8) + 1) / (s32) (temp_v1_2 * 2)));
        appendString(*arg2, &sp10);
    }
    appendString(*arg2, D_80076A50);
    func_8005978C(*arg3, D_80076A40, M2C_FIELD(arg0, s16 *, 0x12), M2C_FIELD(arg0, s16 *, 0x10));
    temp_v1_3 = M2C_FIELD(arg0, s16 *, 0x10);
    if (temp_v1_3 != 0) {
        func_8005978C(&sp10, D_80076A48, (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 0x12) * 0xC8) + 1) / (s32) (temp_v1_3 * 2)));
        appendString(*arg3, &sp10);
    }
    appendString(*arg3, D_80076A5C);
}
