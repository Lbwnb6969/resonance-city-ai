// RVA 0xa04a40 | Os.Utils.SbyteFloat3$$set_fy
// PDB: SbyteFloat3_set_fy_mE32F8723ED9600CEA83F4596CEF0B74FA98CF134
// Body: [[10a04a40, 10a04a67]]
// Direct callees:
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

void __cdecl
SbyteFloat3_set_fy_mE32F8723ED9600CEA83F4596CEF0B74FA98CF134
          (SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *param_1,float param_2,
          MethodInfo *param_3)

{
  int iVar1;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_2 * __real_437e0000,(MethodInfo *)0x0);
  param_1->___y_3 = (schar)iVar1;
  return;
}
