/* identical to __osContDataCrc in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800768BC in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8002867C in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContDataCrc in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800774FC in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80047C1C in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80078BBC in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80053C1C in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContDataCrc in BASSMASTERS2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContDataCrc in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContDataCrc in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContDataCrc in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* CRC-8 over the 32 data bytes of a controller pak block (polynomial 0x85), followed
 * by the 8 trailing bits; returns the checksum byte. */
u8 __osContDataCrc(u8 *data)
{
    u32 crc = 0;
    u32 i;
    u32 bit;

    for (i = 0x20; i; --i) {
        for (bit = 0x80; bit; bit >>= 1) {
            crc <<= 1;

            if ((*data & bit) != 0) {
                if ((crc & 0x100) != 0) {
                    crc ^= 0x84;
                } else {
                    ++crc;
                }
            } else if (crc & 0x100) {
                crc ^= 0x85;
            }
        }

        data++;
    }
    do {
        crc <<= 1;

        if (crc & 0x100) {
            crc ^= 0x85;
        }
    } while (++i < 8U);

    return crc;
}
