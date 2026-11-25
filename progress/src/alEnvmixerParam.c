/* identical to func_80101D20 in HARVESTMOON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80060680 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8001663C in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8001C110 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8000F08C in Donald Duck Goin' Qu (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80072C2C in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80066C5C in Command&Conquer (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8009F5FC in Bust A Move '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80046BF0 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* identical to alEnvmixerParam in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 alEnvmixerParam(char *arg0, s32 arg1, s32 *arg2)
{
    char *temp_v1 = arg0;
    s32 *temp_a0;
    s32 *temp_v0;
    s32 (*var_v0)(s32 *, s32);

    switch (arg1) {
    case 1:
        *(s32 **)arg0 = arg2;
        break;
    case 3:
        temp_v0 = *(s32 **)(arg0 + 0x40);
        if (temp_v0 != NULL) {
            *temp_v0 = (s32)arg2;
        } else {
            *(s32 **)(arg0 + 0x3C) = arg2;
        }
        *(s32 **)(temp_v1 + 0x40) = arg2;
        break;
    case 4:
        temp_v1 = *(char **)arg0;
        *(s32 *)(arg0 + 0x38) = 1;
        *(s32 *)(arg0 + 0x48) = 0;
        *(s16 *)(arg0 + 0x1A) = 1;
        if (temp_v1 != NULL) {
            temp_a0 = (s32 *)temp_v1;
            var_v0 = *(s32 (**)(s32 *, s32))((char *)temp_a0 + 8);
            var_v0(temp_a0, 4);
        }
        break;
    case 9:
        temp_v1 = *(char **)arg0;
        *(s32 *)(arg0 + 0x48) = 1;
        if (temp_v1 != NULL) {
            temp_a0 = (s32 *)temp_v1;
            var_v0 = *(s32 (**)(s32 *, s32))((char *)temp_a0 + 8);
            var_v0(temp_a0, 9);
        }
        break;
    default:
        temp_a0 = *(s32 **)arg0;
        if (temp_a0 != NULL) {
            var_v0 = *(s32 (**)(s32 *, s32))((char *)temp_a0 + 8);
            var_v0(temp_a0, arg1);
        }
        break;
    }
    return 0;
}
