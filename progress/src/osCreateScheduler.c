/* identical to osCreateScheduler in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in osCreateScheduler in BLUES BROTHERS 2000 (matched), with its names changed by decompdecomp */
/* Partial candidate from function #64424513041 in project #15; rechecked locally. */
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

s32 osCreateMesgQueue();
s32 osCreateThread();
s32 osCreateViManager();
s32 osSetEventMesg();
s32 osStartThread();
s32 osViBlack();
s32 osViSetEvent();
s32 osViSetMode();
extern char D_80097E80[];
extern s32 __scMain;

typedef struct { short field_0; unsigned char pad_2[30]; short field_20; unsigned char pad_22[574]; int field_260; int field_264; int field_268; int field_26C; int field_270; int field_274; int field_278; int field_27C; } __repair_record_arg0;
void osCreateScheduler(void *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4) {
    void *temp_s1;
    void *temp_s2;

    temp_s2 = arg0 + 0x40;
    ((__repair_record_arg0*)arg0)->field_0 = 1;
    ((__repair_record_arg0*)arg0)->field_274 = 0;
    ((__repair_record_arg0*)arg0)->field_278 = 0;
    ((__repair_record_arg0*)arg0)->field_260 = 0;
    ((__repair_record_arg0*)arg0)->field_27C = 0;
    ((__repair_record_arg0*)arg0)->field_264 = 0;
    ((__repair_record_arg0*)arg0)->field_268 = 0;
    ((__repair_record_arg0*)arg0)->field_26C = 0;
    ((__repair_record_arg0*)arg0)->field_270 = 0;
    ((__repair_record_arg0*)arg0)->field_20 = 4;
    osCreateMesgQueue(temp_s2, arg0 + 0x58, 8);
    osCreateMesgQueue(arg0 + 0x78, arg0 + 0x90, 8);
    osCreateViManager(0xFE);
    osViSetMode((arg3 * 0x50) + D_80097E80);
    osViBlack(1);
    osSetEventMesg(4, temp_s2, 0x29B);
    osSetEventMesg(9, temp_s2, 0x29C);
    osSetEventMesg(0xE, temp_s2, 0x29D);
    osViSetEvent(temp_s2, 0x29A, arg4);
    temp_s1 = arg0 + 0xB0;
    osCreateThread(temp_s1, 4, &__scMain, arg0, arg1, arg2);
    osStartThread(temp_s1);
}
