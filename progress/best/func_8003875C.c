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

s32 func_80038640();
s32 func_800386FC();
s32 func_80047128();
s32 func_8004740C();
s32 func_80047948();
s32 func_80050EA4();
s32 func_8005A7B0();
s32 func_8005A970();
extern char D_80077FF8[];
extern s32 D_8007E4E0;
extern char D_80081AD0[];
extern s32 D_8008B3DC;
extern char D_800926E8[];

void func_8003875C(s32 arg0, s32 arg1) {
    s32 sp18;
    s32 sp28;
    s32 sp30;
    s32 sp34;
    char *var_a3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    u16 temp_a0;
    u32 var_t4;
    void *temp_v0;

    func_800386FC();
    func_80038640(M2C_FIELD(*((D_8007E4E0 * 4) + D_80081AD0), u8 *, 0x19), &sp28, &sp30, &sp34);
    func_8005A970(&sp18, &sp28);
    if (arg1 != 0) {
        func_8005A7B0(&sp18, D_80077FF8);
    }
    func_80047128(D_800926E8, &sp18, 1, 1, 1);
    if (arg1 != 0) {
        func_80047948(D_800926E8, 0xC3B68000, 0x43BE0000, 0x44480000);
        func_8004740C(D_800926E8, 0x3FC90FDB);
    } else {
        var_t4 = 0;
        if (D_8008B3DC == 0xE) {
            var_t2 = 0;
loop_6:
            if (var_t4 < (u32) M2C_FIELD(M2C_FIELD(D_800926E8, void **, 0xC8), u32 *, 0x10)) {
                temp_v0 = var_t2 + M2C_FIELD(M2C_FIELD(D_800926E8, void **, 0xC8), s32 *, 0x30);
                var_t1 = 0;
                if (M2C_FIELD(temp_v0, u16 *, 0x1C) != 0) {
                    var_a3 = M2C_FIELD(temp_v0, s16 **, 0x14);
                    do {
                        temp_a0 = (u16) *(s16 *)var_a3;
                        temp_v0_2 = ((s32) (*(s16 *)var_a3 & 0xF800) >> 0xB) - 4;
                        var_a1 = temp_v0_2;
                        if (temp_v0_2 < 0) {
                            var_a1 = 0;
                        }
                        temp_v0_3 = ((u32) (temp_a0 & 0x7C0) >> 6) - 4;
                        var_v1 = temp_v0_3;
                        if (temp_v0_3 < 0) {
                            var_v1 = 0;
                        }
                        *(s16 *)var_a3 = (temp_a0 & 1) | ((var_v1 << 6) | ((var_a1 << 0xB) | ((u32) (temp_a0 & 0x3E) >> 1)));
                        var_t1 += 1;
                        var_a3 += 2;
                    } while (var_t1 < (s32) M2C_FIELD((var_t2 + M2C_FIELD(M2C_FIELD(D_800926E8, void **, 0xC8), s32 *, 0x30)), u16 *, 0x1C));
                }
                var_t2 += 0x20;
                var_t4 += 1;
                goto loop_6;
            }
        }
    }
    func_80050EA4();
}
