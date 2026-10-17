// RVA 0xa04620 | Os.Utils.SbyteFloat3$$.ctor
// PDB: SbyteFloat3__ctor_m3FAF7884D504EEFAB2309FC932B9371EBFB366DF
// Body: [[10a04620, 10a04688]]
// Direct callees:
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

void __cdecl
SbyteFloat3__ctor_m3FAF7884D504EEFAB2309FC932B9371EBFB366DF
          (SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *param_1,float param_2,
          float param_3,float param_4,MethodInfo *param_5)

{
  int iVar1;
  float fVar2;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_2 * __real_437e0000,(MethodInfo *)0x0);
  fVar2 = param_3 * __real_437e0000;
  param_1->___x_2 = (schar)iVar1;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  fVar2 = param_4 * __real_437e0000;
  param_1->___y_3 = (schar)iVar1;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  param_1->___z_4 = (schar)iVar1;
  return;
}
