/* identical to func_8004A148 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800BBBC8 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to atan in TWINE (local match library) (matched), with its names changed by decompdecomp */
s32 cordicAtanVectoring(u64,u64,f64 *);
u64 func_80057B50(f64);
extern f64 D_80079F38,D_80079F40,D_80079F48,D_80079F50;
/* Arctangent of x: CORDIC vectoring on a range-reduced fixed-point ratio, then sign restored. */
f64 atan(f64 x) {
 f64 angle; s32 sign; u64 fixedX,fixedY; f64 threshold;
 if(x<0.0){x=-x;sign=-1;}else sign=1;
 threshold = D_80079F38;
 if(threshold<x){
 f64 ratio = D_80079F40;
 if(x>=ratio){ fixedY=0x1000000000000000ULL; ratio /= x; threshold = D_80079F48; fixedX=func_80057B50(ratio * threshold); }
 else {fixedX=0x1000000000000000ULL;fixedY=func_80057B50(x*D_80079F50);}
 cordicAtanVectoring(fixedX,fixedY,&angle);
 }else angle=x;
 { f64 result = angle; if(sign<0) result=-result; return result; }
}
