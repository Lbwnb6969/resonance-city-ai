// RVA 0x22e2b0 | Os.Utils.ByteFloat2$$.ctor
// PDB: ByteFloat2__ctor_mAF8FDE0667D9853998424B964A9EB3CB85323E5A
// Body: [[1022e2b0, 1022e312]]
// Direct callees:
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ByteFloat2__ctor_mAF8FDE0667D9853998424B964A9EB3CB85323E5A
          (ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 *param_1,float param_2,float param_3
          ,MethodInfo *param_4)

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
  param_1->___y_1 = (uchar)iVar1;
  return;
}
