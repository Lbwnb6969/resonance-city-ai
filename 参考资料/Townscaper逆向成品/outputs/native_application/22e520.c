// RVA 0x22e520 | Os.Utils.ByteFloat2$$set_fy
// PDB: ByteFloat2_set_fy_m535C892812A78570A7F9C52A5C334BB3AE9F654A
// Body: [[1022e520, 1022e554]]
// Direct callees:
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ByteFloat2_set_fy_m535C892812A78570A7F9C52A5C334BB3AE9F654A
          (ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 *param_1,float param_2,
          MethodInfo *param_3)

{
  int iVar1;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_2 * ___real_43800000,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  param_1->___y_1 = (uchar)iVar1;
  return;
}
