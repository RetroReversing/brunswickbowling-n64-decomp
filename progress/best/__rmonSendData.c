/* identical to __rmonSendData in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* Same-name source lead: __rmonSendData in 1080-decomp; donor defaults. Destination verification required. */
void __rmonSendData(char *addr, int len) {
    int *p = (int *)addr;
    unsigned int n = ((unsigned int)len + 3) >> 2;
    int tmp;
    int tmp2;
    if (!((unsigned int)addr & 3)) {
        while (n--) {
            if ((unsigned int)p >= 0x04000000U && (unsigned int)p < 0x05000000U) {
                func_8006AFD0(p++, &tmp);
                func_800A36A8(tmp);
            } else {
                func_800A36A8(*p++);
            }
        }
    } else {
        while (n--) {
            func_800A4280(&tmp2, p, 4);
            func_800A36A8(tmp2);
            p++;
        }
    }
    func_800A366C();
}


