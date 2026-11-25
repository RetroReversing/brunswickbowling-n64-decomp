/* identical to __osContAddressCrc in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80076850 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80028610 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContAddressCrc in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80077490 in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80047BB0 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80078B50 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80053BB0 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContAddressCrc in BASSMASTERS2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContAddressCrc in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContAddressCrc in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osContAddressCrc in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* 5-bit CRC of the 16-bit controller pak address (polynomial 0x15), as used by the
 * controller pak address header. Returns the CRC in the low 5 bits. */
s32 __osContAddressCrc(s32 addr)
{
  s32 crc;
  u32 bit;
  s32 addr_bits;

  crc = 0;
  bit = 0x400;
  addr_bits = addr & 0xFFFF;
  do
  {
    s32 t = addr_bits & bit;
    crc <<= 1;
    if (t != 0)
    {
      if (crc & 0x20)
      {
        crc ^= 0x14;
      }
      else
      {
        crc += 1;
      }
    }
    else
    {
      if (crc & 0x20)
      {
        crc ^= 0x15;
      }
    }
    bit >>= 1;
  } while (bit != 0);
  bit = 5;
  crc <<= 1;
  do
  {
    if (crc & 0x20)
    {
      crc ^= 0x15;
    }
    bit--;
    if (bit != 0)
    {
      crc <<= 1;
    }
  } while (bit != 0);
  return crc & 0x1F;
}
