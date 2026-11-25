/* identical to func_8005C65C in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A650C in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80042B0C in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8005F4CC in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in AIDYN_CHRONICLES (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scHandleRetrace in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
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

M2C_UNK __scAppendList(void *, s32);                /* extern */
M2C_UNK __scExec(void *, s32, s32);                 /* extern */
s32 __scSchedule(void *, s32 *, s32 *, s32);        /* extern */
M2C_UNK __scYield(void *);                          /* extern */
s32 osRecvMesg(void *, s32 *, M2C_UNK);             /* extern */
M2C_UNK osSendMesg(s32, void *, M2C_UNK);           /* extern */

typedef struct { unsigned char pad[636]; int value; } __repair_field_27C;
void __scHandleRetrace(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 var_s0;
    void *var_a0;
    void *var_s0_2;

    sp14 = 0;
    sp18 = 0;
    ((__repair_field_27C *)arg0)->value = (s32) (((__repair_field_27C *)arg0)->value + 1);
    while (osRecvMesg((var_a0 = arg0 + 0x78), &sp10, 0) != -1) {
        __scAppendList(arg0, sp10);
        var_a0 = arg0 + 0x78;
    }
    if (M2C_FIELD(arg0, s32 *, 0x280) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x274) != 0) {
            __scYield(arg0);
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_s0 = (M2C_FIELD(arg0, s32 *, 0x274) == 0) * 2;
        if (M2C_FIELD(arg0, s32 *, 0x278) == 0) {
            var_s0 |= 1;
        }
        if (__scSchedule(arg0, &sp14, &sp18, var_s0) != var_s0) {
            __scExec(arg0, sp14, sp18);
        }
    }
    var_s0_2 = M2C_FIELD(arg0, void **, 0x260);
    if (var_s0_2 != NULL) {
        do {
            osSendMesg(M2C_FIELD(var_s0_2, s32 *, 4), arg0, 0);
            var_s0_2 = M2C_FIELD(var_s0_2, void **, 0);
        } while (var_s0_2 != NULL);
    }
}
