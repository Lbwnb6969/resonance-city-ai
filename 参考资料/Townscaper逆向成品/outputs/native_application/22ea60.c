// RVA 0x22ea60 | Os.Utils.ByteFloat$$FloatToByte
// PDB: ByteFloat_FloatToByte_mF3F73A729D2FB6663E48D7364B97D94899B5AF6D
// Body: [[1022ea60, 1022ea8e]]
// Direct callees:
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar __cdecl
ByteFloat_FloatToByte_mF3F73A729D2FB6663E48D7364B97D94899B5AF6D(float param_1,MethodInfo *param_2)

{
  int iVar1;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_1 * ___real_43800000,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  return (uchar)iVar1;
}
