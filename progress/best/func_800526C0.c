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

extern short D_8009CCD8;
extern short D_8009CD60;
s32 func_8004CF14();
s32 func_80066C50();
s32 func_8006B6C0();
s32 func_8006B808();
s32 osCreateThread();
s32 osStartThread();
extern char D_8009CC70[];
extern char D_8009DB78[];
extern char D_8009DB88[];
extern char D_8009FE18[];
extern char D_8009FE20[];
extern s32 func_800528C0;

void func_800526C0(void) {
    void *temp_s2;

    D_8009CD60 = 2;
    func_8004CF14(D_8009FE20, 0, 0x2220);
    D_8009CCD8 = 2;
    loop_goto_1:
    {
 do { do { do { temp_s2 = D_8009FE20 + 0x21B0; } while (0); } while (0); } while (0);
    }
    if (0)
    {
        goto loop_goto_1;
    }
    func_80066C50(temp_s2, D_8009FE20 + 0x21C8, 0x10);
    do { func_8006B6C0(D_8009DB88, D_8009FE18, 0x32, 2, 1); } while (0);
    func_8006B808(D_8009DB88, D_8009DB78, temp_s2);
    osCreateThread(D_8009FE20, 3, &func_800528C0, 0, temp_s2, 0x1E);
    osStartThread(D_8009FE20);
}
