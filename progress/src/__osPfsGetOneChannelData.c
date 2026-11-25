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

extern M2C_UNK D_800ADF50;

void __osPfsGetOneChannelData(s32 arg0, void *arg1) {
    struct { u8 bytes[6]; } __repair_channel;
    u8 *var_a2;
    s32 var_v1;
    u32 temp_v0;

    var_a2 = (u8 *)&D_800ADF50;
    for (var_v1 = 0; var_v1 < arg0; var_v1++) {
        var_a2++;
    }
    __repair_channel = *(typeof(__repair_channel) *)var_a2;
    temp_v0 = (u32) (__repair_channel.bytes[1] & 0xC0) >> 4;
    M2C_FIELD(arg1, s8 *, 3) = (s8) temp_v0;
    if (temp_v0 == 0) {
        M2C_FIELD(arg1, s16 *, 0) = (s16) (__repair_channel.bytes[3] | ((u8) __repair_channel.bytes[4] << 8));
        M2C_FIELD(arg1, u8 *, 2) = __repair_channel.bytes[5];
    }
}
