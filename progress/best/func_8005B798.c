/* identical to func_8008D4C8 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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

typedef struct E8D4C8 {
    s32 flags;
    s32 f4;
    u8 pad8[8];
    s32 f10;
    u8 pad14[8];
    s32 f1C;
    u8 pad20[0x58];
    s32 f78;
    u8 pad7C[0x13C - 0x7C];
} E8D4C8;
extern s32 D_8017B204;
extern E8D4C8 *D_8017B20C;

void func_8005B798(s32 arg0, s32 arg1) {
    E8D4C8 *p;
    s32 i;
    s32 v;

    v = arg1;
    if (arg1 == 0) {
        v = 1;
    }
    p = D_8017B20C;
    for (i = 0; i < D_8017B204; i++, p++) {
        if (p->f78 != 0 ? (arg0 & 1) == 0 : (arg0 & 2) == 0) {
            continue;
        }
        if (p->f4 != 0 && p->f10 == -1) {
            if (p->flags & 1) {
                p->f1C = 1;
                p->f10 = 0;
                p->flags &= ~1;
            } else {
                p->f1C = v;
                p->f10 = arg1;
            }
        }
    }
}
