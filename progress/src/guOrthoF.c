/* identical to func_8001F6E0 in FIGHTER DESTINY2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80012260 in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to guOrthoF in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to guOrthoF in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to guOrthoF in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to guOrthoF in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800494C0 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to guOrthoF in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
extern void guMtxIdentF(float mf[4][4]);

/* Builds an orthographic projection matrix in float form for the box [l,r]x[b,t]x[n,f], then scales every entry by scale. */
void guOrthoF(float mf[4][4], float l, float r, float b, float t, float n, float f, float scale)
{
	int	row, col;

	guMtxIdentF(mf);

	mf[0][0] = 2/(r-l);
	mf[1][1] = 2/(t-b);
	mf[2][2] = -2/(f-n);
	mf[3][0] = -(r+l)/(r-l);
	mf[3][1] = -(t+b)/(t-b);
	mf[3][2] = -(f+n)/(f-n);
	mf[3][3] = 1;

	for (row=0; row<4; row++)
	    for (col=0; col<4; col++)
		mf[row][col] *= scale;
}
