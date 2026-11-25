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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_800149E4();
s32 func_80037978();
s32 func_8003F798();
s32 func_8004005C();
s32 func_800424D4();
s32 func_80045278();
s32 func_80045D40();
extern s32 D_800825D8;
extern s32 D_8008C9CC;
extern s32 D_8008E9B0;
extern s32 D_8008EB34;
extern s32 D_8008ED80;
extern s32 D_8008F2F0;
extern s32 D_80095CF0;
extern s32 D_8009CE10;

void func_800341B0(void *arg0) {
    (*(s32 *)((s8 *)arg0 + 0x14)) = 0;
    func_800424D4(&D_8008ED80);
    func_80045278(&D_8008ED80, 2);
    func_80037978(&D_8008C9CC);
    func_8003F798(&D_8008E9B0);
    func_80045D40(&D_8008F2F0);
    func_8004005C(&D_8008EB34);
    func_800149E4(&D_800825D8);
    (*(u16 *)((s8 *)D_8009CE10 + 0x70)) = (u16) ((*(u16 *)((s8 *)D_8009CE10 + 0x70)) & 0xBFFF);
    D_80095CF0 = 0;
}
