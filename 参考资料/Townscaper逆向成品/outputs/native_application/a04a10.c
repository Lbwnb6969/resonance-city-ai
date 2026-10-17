// RVA 0xa04a10 | Os.Utils.SbyteFloat3$$set_fx
// PDB: SbyteFloat3_set_fx_mC6D427CA81E37A178041454ADB1F7CCC094F6943
// Body: [[10a04a10, 10a04a36]]
// Direct callees:
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

void __cdecl
SbyteFloat3_set_fx_mC6D427CA81E37A178041454ADB1F7CCC094F6943
          (SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *param_1,float param_2,
          MethodInfo *param_3)

{
  int iVar1;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_2 * __real_437e0000,(MethodInfo *)0x0);
  param_1->___x_2 = (schar)iVar1;
  return;
}
