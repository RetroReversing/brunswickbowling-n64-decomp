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

M2C_UNK func_8001B71C(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_80020178(M2C_UNK *);                   /* extern */
M2C_UNK func_80021DD0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_80021EBC(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_80022D08(M2C_UNK *);                   /* extern */
M2C_UNK func_80024818(void *);                      /* extern */
M2C_UNK func_80024834(void *, M2C_UNK);             /* extern */
M2C_UNK func_80029FE4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8002D664(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_8002E674(M2C_UNK *);                   /* extern */
M2C_UNK func_80032EC8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_800375C0();     /* extern */
extern M2C_UNK D_800244A0;
extern M2C_UNK D_80075F84;
extern M2C_UNK D_80075F8C;
extern s32 D_80082760;
extern M2C_UNK D_800827A4;
extern M2C_UNK D_80082F78;
extern M2C_UNK D_80083BA8;
extern M2C_UNK D_80089080;
extern M2C_UNK D_800892C0;
extern M2C_UNK D_80089890;
extern M2C_UNK D_8008989C;
extern M2C_UNK D_800898A8;
extern M2C_UNK D_800898B0;
extern M2C_UNK D_800898BC;
extern s32 D_800898C8;
extern M2C_UNK D_80089930;
extern s32 D_80089944;
extern M2C_UNK D_8008AA80;
extern s32 D_8008AB10;
extern M2C_UNK D_8008AD08;
extern s32 D_8008B3BC;
extern M2C_UNK D_8008B470;
extern M2C_UNK D_8008C864;
extern M2C_UNK D_8008C87C;
extern M2C_UNK D_8008E560;
extern s32 D_8008F3B0;
extern M2C_UNK func_800244DC;

s32 func_800248A8(void *arg0, s8 arg1, s16 arg2) {
    M2C_UNK *var_a1;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a2;
    s32 var_v1;
    void *temp_v0;
    void *var_a0;
    void *var_v1_2;

    var_a2 = arg2;
    if ((D_800898C8 != D_8008F3B0) && ((arg1 & 0xFF) == M2C_FIELD(arg0, u8 *, 0x30)) && ((u32) (var_a2 - 0x209) < 8U)) {
        switch (var_a2) {                           /* switch 1 */
case 0x211: goto switch_1_0x211;
case 0x212: goto switch_1_0x212;
case 0x213: goto switch_1_0x213;
case 0x214: goto switch_1_0x214;
case 0x215: goto switch_1_0x215;
case 0x216: goto switch_1_0x216;
case 0x217: goto switch_1_0x217;
case 0x218: goto switch_1_0x218;
case 0x219: goto switch_1_0x219;
case 0x21A: goto switch_1_0x21A;
        case 0x20F:                                 /* switch 1 */
            temp_v1 = M2C_FIELD(arg0, s16 *, 0x14);
            var_a2 = M2C_FIELD(arg0, u16 *, 0x2A) - 1;
            var_v1 = (s32) (var_a2 + temp_v1) % temp_v1;
            M2C_FIELD(arg0, u16 *, 0x2A) = (u16) var_a2;
block_6:
            M2C_FIELD(arg0, u16 *, 0x2A) = (u16) var_v1;
            func_800375C0(&D_8008C87C, 1, var_a2);
            break;
        case 0x210:                                 /* switch 1 */
            var_v1 = (s32) ((s16) M2C_FIELD(arg0, u16 *, 0x2A) + 1) % (s16) M2C_FIELD(arg0, s16 *, 0x14);
            goto block_6;
        case 0x209:                                 /* switch 1 */
        case 0x20B:                                 /* switch 1 */
            func_80024818(arg0);
            func_80024834(arg0, 1);
            break;
        case 0x20A:                                 /* switch 1 */
            func_800375C0(&D_8008C864, 1);
            temp_v1_2 = M2C_FIELD((arg0 + ((s16) M2C_FIELD(arg0, u16 *, 0x2A) * 2)), s16 *, 0x16);
            switch (temp_v1_2) {                    /* switch 2 */
switch_1_0x211:
            case 0:                                 /* switch 2 */
                func_80024818(arg0);
                func_80024834(arg0, 0);
                break;
switch_1_0x212:
            case 1:                                 /* switch 2 */
                func_80024818(arg0);
                func_80032EC8(&D_8008B470, &D_800827A4);
                M2C_FIELD(&D_8008B470, s8 *, 0x31A) = arg1;
                break;
switch_1_0x213:
            case 2:                                 /* switch 2 */
                func_80024818(arg0);
                func_8002D664(&D_8008AA80, &D_800827A4);
                break;
switch_1_0x214:
            case 3:                                 /* switch 2 */
                func_80024818(arg0);
                func_8002E674(&D_8008AD08);
                break;
switch_1_0x215:
            case 4:                                 /* switch 2 */
                func_80024818(arg0);
                func_80029FE4(&D_80089930, &D_800827A4, 1);
                break;
switch_1_0x216:
            case 5:                                 /* switch 2 */
                func_80024818(arg0);
                func_80024834(arg0, 0);
                var_a0 = &D_800827A4 + 0x2E;
                var_v1_2 = &D_800827A4 + 0x2EE;
                temp_v0 = &D_800827A4 + 0x5AE;
                if (((s32) var_v1_2 | (s32) var_a0) & 3) {
                    do {
                        M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0));
                        M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 4));
                        M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 8));
                        M2C_FIELD(var_a0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0xC));
                        var_v1_2 += 0x10;
                        var_a0 += 0x10;
                    } while (var_v1_2 != temp_v0);
                } else {
                    do {
                        M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
                        M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
                        M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
                        M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_2, s32 *, 0xC);
                        var_v1_2 += 0x10;
                        var_a0 += 0x10;
                    } while (var_v1_2 != temp_v0);
                }
                break;
switch_1_0x217:
            case 6:                                 /* switch 2 */
                func_80024818(arg0);
                func_80022D08(&D_800892C0);
                break;
switch_1_0x218:
            case 7:                                 /* switch 2 */
                func_80024818(arg0);
                func_8001B71C(&D_80082F78, &D_8008E560);
                break;
switch_1_0x219:
            case 8:                                 /* switch 2 */
                func_80024818(arg0);
                M2C_FIELD(&D_80083BA8, s32 *, 0x5494) = 1;
                M2C_FIELD(&D_80083BA8, s32 *, 8) = 1;
                func_80020178(&D_80083BA8);
                break;
switch_1_0x21A:
            case 9:                                 /* switch 2 */
                if (D_80082760 != 0) {
                    var_a1 = &D_80089890;
                } else if (D_8008B3BC != 0) {
                    var_a1 = &D_8008989C;
                } else if (D_8008AB10 != 0) {
                    var_a1 = &D_800898B0;
                } else if (D_80089944 != 0) {
                    var_a1 = &D_800898A8;
                } else {
                    var_a1 = &D_800898BC;
                }
                func_80021DD0(&D_80089080, var_a1);
                func_80021EBC(&D_80089080, 0x20A, &D_80075F84, &D_800244A0);
                func_80021EBC(&D_80089080, 0x20B, &D_80075F8C, &func_800244DC);
                break;
            }
            break;
        }
    }
    return 0;
}
