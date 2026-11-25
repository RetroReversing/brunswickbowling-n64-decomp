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

extern int D_8008B3CC;
extern int D_8008B3D4;
s32 func_80024124();
s32 func_80025084();
s32 func_80039738();
s32 func_8005978C();
extern char D_80076918[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern s32 D_80082760;
extern char D_8008B3C8[];
extern char D_8008CF28[];

void func_8002BA18(void *arg0) {
    s32 sp18;
    s32 sp58;
    s32 sp68;
    s32 *sp78;
    s32 *temp_v1;
    s32 temp_s0;
    s32 var_v1;
    s8 temp_a2;

    func_80024124();
    var_v1 = 0;
    if (D_80082760 != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x18) == 0;
    }
    if (var_v1 != 0) {
        temp_s0 = D_8008B3CC;
        temp_v1 = *(s32 *)((temp_s0 * 4) + D_8008B3D4);
        sp78 = temp_v1;
        func_80039738(D_8008CF28, 7, 1, 0x19F, 0x83, temp_v1);
        func_80025084(&sp58, temp_s0 + 1);
        temp_a2 = M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), s8 *, 0x2F);
        func_80025084(&sp68, (temp_a2 + 1) % 100000, temp_a2 + 1);
        func_8005978C(&sp18, D_80076918, &sp58, &sp68);
        func_80039738(D_8008CF28, 7, 1, 0x19F, 0x8E, &sp18);
    }
}
