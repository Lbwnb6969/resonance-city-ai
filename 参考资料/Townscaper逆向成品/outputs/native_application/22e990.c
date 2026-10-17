// RVA 0x22e990 | Os.Utils.ByteFloat3$$set_fz
// PDB: ByteFloat3_set_fz_m95305E0FC8D5BE1CAB5646CDA5A22FAF415F0397
// Body: [[1022e990, 1022e9c4]]
// Direct callees:
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ByteFloat3_set_fz_m95305E0FC8D5BE1CAB5646CDA5A22FAF415F0397
          (ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 *param_1,float param_2,
          MethodInfo *param_3)

{
  int iVar1;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_2 * ___real_43800000,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  param_1->___z_2 = (uchar)iVar1;
  return;
}
