/* identical to func_8006818C in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8003649C in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008C8D0 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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

s32 func_8005E37C(void *arg0, s32 arg1) {
    s32 var_a1;
    u8 temp_a3;
    u8 temp_v0;
    s32 var_a2;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v1;
    int temp;
    s32 temp2;

    var_a1 = arg1;
    var_a2 = (*(u8 *)((s8 *)arg0 + 0xDB)) - 1;
    temp_t0 = arg0 + var_a2;
    temp_a3 = (*(u8 *)((s8 *)temp_t0 + 0x120));
    if ((temp_a3 & 0xFF) != 0xFF) {
        
        temp_v0 = (temp_a3 - 1);
        (*(u8 *)((s8 *)temp_t0 + 0x120)) = temp_v0;
        if (!(temp_v0 & 0xFF)) {
            (*(u8 *)((s8 *)arg0 + 0xDB)) = var_a2;
            var_a2 = -1U;
        }
    }
    temp2 = (s32) var_a2;
    if (temp2 >= 0) {
        temp_v1 = (void *)((var_a2 * 4)); temp_v1 = (void *)((char *)temp_v1 + (s32)(arg0));
        var_a1 = (*(s32 *)((s8 *)temp_v1 + 0xE0));
        (*(s32 *)((s8 *)arg0 + 0x38)) = (s32) (*(s32 *)((s8 *)temp_v1 + 0xF0));
        (*(s32 *)((s8 *)arg0 + 0x34)) = (s32) (*(s32 *)((s8 *)temp_v1 + 0x100));
        (*(u8 *)((s8 *)arg0 + 0xBC)) = (u8) (*(u8 *)((s8 *)(arg0 + var_a2) + 0x124));
        (*(f32 *)((s8 *)arg0 + 0x70)) = (f32) (*(f32 *)((s8 *)temp_v1 + 0x128));
        temp_v0_2 = (void *)((var_a2 * 2)); temp_v0_2 = (void *)((char *)temp_v0_2 + (s32)(arg0));
        (*(u16 *)((s8 *)arg0 + 0xA2)) = (u16) (*(u16 *)((s8 *)temp_v0_2 + 0x110));
        (*(u16 *)((s8 *)arg0 + 0xA4)) = (u16) (*(u16 *)((s8 *)temp_v0_2 + 0x118));
        (*(f32 *)((s8 *)arg0 + 0x24)) = (f32) ((*(f32 *)((s8 *)arg0 + 0x70)) * (*(f32 *)((s8 *)arg0 + 0x6C)));
    }
    return var_a1;
}
