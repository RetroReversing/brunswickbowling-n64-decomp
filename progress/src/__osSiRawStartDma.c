/* identical to func_80105680 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80071770 in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80020EA0 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSiRawStartDma in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80007810 in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8003E820 in TARZAN (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8006FD10 in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800431E0 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8007A0C0 in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800516A0 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80195150 in BATMAN BEYOND RETURN (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSiRawStartDma in ARMYMEN SARGE 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80059640 in BASSMASTERS2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800C2CA0 in AIDYN_CHRONICLES (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80063410 in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008E070 in Army Men Sarge (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSiRawStartDma in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to __osSiRawStartDma in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
#define SI_DRAM_ADDR (*(vu32 *)0xA4800000)
#define SI_PIF_ADDR_RD64B (*(vu32 *)0xA4800004)
#define SI_PIF_ADDR_WR64B (*(vu32 *)0xA4800010)
#define SI_STATUS (*(vu32 *)0xA4800018)
#define PIF_RAM_PHYS 0x1FC007C0

s32 osVirtualToPhysical(void *);
void osWritebackDCache(void *, s32);
void osInvalDCache(void *, s32);

/* Starts an SI DMA of 64 bytes between buf and PIF RAM. dir 1 writes buf back to memory
 * first and sends it to the PIF; dir 0 reads PIF RAM into buf and invalidates the cache
 * after. Returns -1 if the SI is busy, otherwise 0. */
s32 __osSiRawStartDma(s32 dir, void *buf) {
    if (SI_STATUS & 3) {
        return -1;
    }
    if (dir == 1) {
        osWritebackDCache(buf, 0x40);
    }
    SI_DRAM_ADDR = osVirtualToPhysical(buf);
    if (dir == 0) {
        SI_PIF_ADDR_RD64B = PIF_RAM_PHYS;
    } else {
        SI_PIF_ADDR_WR64B = PIF_RAM_PHYS;
    }
    if (dir == 0) {
        osInvalDCache(buf, 0x40);
    }
    return 0;
}
