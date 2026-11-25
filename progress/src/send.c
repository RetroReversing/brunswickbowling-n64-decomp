/* adapted from similar verified C in send in BLUES BROTHERS 2000 (matched), with its names changed by decompdecomp */
typedef struct {
    unsigned type : 6;
    unsigned length : 2;
    char buf[3];
} rdbPacket;

u32 func_800682D0(void);
extern s32 D_80097930;

void send(u8 *buf, u32 len) {
    u32 ct;
    u32 i = 0;
    s32 getLastIntr;
    rdbPacket packet;
    u32 j;

    if (!D_80097930) {
        while (!(func_800682D0() & 0x2000)) {
        }
        *(vu32 *)0xC000000C = 0;
        while (func_800682D0() & 0x2000) {
        }
        getLastIntr = 0;
    } else {
        getLastIntr = 1;
    }
    while (len != 0) {
        ct = (len < 4) ? len : 3;
        packet.type = 12;
        packet.length = ct;
        {
            u8 *s = &buf[i];

            for (j = 0; j < ct; j++) {
                packet.buf[j] = s[j];
            }
        }
        len -= ct;
        i += ct;
        *(vu32 *)0xC0000000 = *(u32 *)&packet;
        if (len != 0) {
            while (!(func_800682D0() & 0x2000)) {
            }
            *(vu32 *)0xC000000C = 0;
            while (func_800682D0() & 0x2000) {
            }
        }
    }
    if (getLastIntr) {
        while (!(func_800682D0() & 0x2000)) {
        }
        *(vu32 *)0xC000000C = 0;
        while (func_800682D0() & 0x2000) {
        }
    }
}
