/* identical to guMtxXFML in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to guMtxXFML in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to guMtxXFML in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to guMtxXFML in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to guMtxXFML in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
void func_800660D8(f32 *, s32 *);
void guMtxXFMF(void *, f32, f32, f32, f32 *, f32 *, f32 *);
void guMtxXFML(s32 *m, f32 x, f32 y, f32 z, f32 *ox, f32 *oy, f32 *oz) { f32 mf[4][4]; func_800660D8(&mf[0][0], m); guMtxXFMF(mf,x,y,z,ox,oy,oz); }
