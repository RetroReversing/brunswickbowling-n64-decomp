/* identical to func_801001C0 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80062240 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80018DA0 in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80020E50 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80007D20 in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800748C0 in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80042780 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80060AD0 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80051640 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskYielded in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
u32 func_8006C290();

/* Reads the SP status register. If the task yielded (bit 0x80), copies the signal bit (bit 8)
 * into bit 0 of the task's flags at +4 and clears bit 1. Returns the signal bit. */
s32 osSpTaskYielded(void *task)
{
  s32 signal;
  u32 status;
  status = func_8006C290();
  signal = status >> 8;
  signal = signal & 1;
  if (status & 0x80)
  {
    *((s32 *) (((s8 *) task) + 4)) = (s32) (((*((s32 *) (((s8 *) task) + 4))) | signal) & (~2));
  }
  return signal;
}
