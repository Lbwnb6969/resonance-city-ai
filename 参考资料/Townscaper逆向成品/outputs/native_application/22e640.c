// RVA 0x22e640 | Os.Utils.ByteFloat3$$.ctor
// PDB: ByteFloat3__ctor_m0C879630DE50FA852FAC2F59065E84754F048B43
// Body: [[1022e640, 1022e6cf]]
// Direct callees:
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ByteFloat3__ctor_m0C879630DE50FA852FAC2F59065E84754F048B43
          (ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 *param_1,float param_2,float param_3
          ,float param_4,MethodInfo *param_5)

{
  int iVar1;
  float fVar2;

  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_2 * ___real_43800000,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  fVar2 = param_3 * ___real_43800000;
  param_1->___x_0 = (uchar)iVar1;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  fVar2 = param_4 * ___real_43800000;
  param_1->___y_1 = (uchar)iVar1;
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar2,(MethodInfo *)0x0);
  iVar1 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(iVar1,0xff,(MethodInfo *)0x0);
  param_1->___z_2 = (uchar)iVar1;
  return;
}
