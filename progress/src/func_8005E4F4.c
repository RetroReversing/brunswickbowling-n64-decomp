/* identical to func_80068304 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008CA48 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* Partial candidate from function #408021895441 in project #95; rechecked locally. */
/* adapted from similar verified C in func_80088008 in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef struct S8CA48 {
    u8 pad00[0x34];
    s32 pos_z;
    s32 pos_y;
    u8 pad3C[0x44];
    s32 base_x;
    u8 pad84[4];
    s32 base_z;
    s32 base_y;
    u8 pad90[0x12];
    s16 dirty_y;
    s16 dirty_z;
} S8CA48;

s32 func_8005E4F4(S8CA48 *obj, u8 *data)
{
    s32 x, y, hi_x, lo_x, hi_y, lo_y, hi_z, lo_z;

    x = *data++;
    hi_x = *data++;
    hi_y = *data++;
    lo_y = *data++;
    obj->dirty_y = 1;
    y = hi_y << 8;
    y += lo_y;
    obj->pos_y = obj->base_y + y;
    hi_z = *data++;
    lo_z = *data++;
    y = hi_z << 8;
    y += lo_z;
    obj->dirty_z = 1;
    obj->pos_z = obj->base_z + y;
    x <<= 8;
    x += hi_x;
    return obj->base_x + x;
}
