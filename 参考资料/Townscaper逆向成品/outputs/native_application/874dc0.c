// RVA 0x874dc0 | Beatbox$$GetBeat
// PDB: Beatbox_GetBeat_mDFB7A0F7295A99C35A43B602428532BA78EE17E8
// Body: [[10874dc0, 10874deb]]
// Direct callees:
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
Beatbox_GetBeat_mDFB7A0F7295A99C35A43B602428532BA78EE17E8
          (float param_1,float param_2,float param_3,MethodInfo *param_4)

{
  int iVar1;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_1 * ___real_3fd55555 * param_2 + param_3,(MethodInfo *)0x0);
  return iVar1;
}
