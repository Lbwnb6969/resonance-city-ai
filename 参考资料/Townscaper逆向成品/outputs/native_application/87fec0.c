// RVA 0x87fec0 | Placemaker.Life.BirdLanding$$System.IComparable<UnityEngine.Vector3>.CompareTo
// PDB: BirdLanding_System_IComparableU3CUnityEngine_Vector3U3E_CompareTo_m66C22EF49797F8DE6320719A8C612DB03C00096C
// Body: [[1087fec0, 1087ff02]]
// Direct callees:
// 1087ff60 BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
// 10c10d10 Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4

int __cdecl
BirdLanding_System_IComparableU3CUnityEngine_Vector3U3E_CompareTo_m66C22EF49797F8DE6320719A8C612DB03C00096C
          (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar1;
  int iVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;
  float local_8;

  pVVar1 = BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
                     (&local_1c,param_1,(MethodInfo *)0x0);
  local_10._0_4_ = pVVar1->___x_2;
  local_10._4_4_ = pVVar1->___y_3;
  local_8 = pVVar1->___z_4;
  iVar2 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                    ((float *)&local_10,param_2.___x_2,(MethodInfo *)0x0);
  return iVar2;
}
