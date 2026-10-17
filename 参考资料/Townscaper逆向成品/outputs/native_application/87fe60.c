// RVA 0x87fe60 | Placemaker.Life.BirdLanding$$System.IComparable<Placemaker.Life.BirdLanding>.CompareTo
// PDB: BirdLanding_System_IComparableU3CPlacemaker_Life_BirdLandingU3E_CompareTo_m7FFE97B42CECA1F983277444D6FFE64278494008
// Body: [[1087fe60, 1087febc]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1087ff60 BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
// 10c10d10 Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4

int __cdecl
BirdLanding_System_IComparableU3CPlacemaker_Life_BirdLandingU3E_CompareTo_m7FFE97B42CECA1F983277444D6FFE64278494008
          (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_1,
          BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_2,MethodInfo *param_3)

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
  if (param_2 != (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) {
    pVVar1 = BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
                       (&local_1c,param_2,(MethodInfo *)0x0);
    iVar2 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                      ((float *)&local_10,pVVar1->___x_2,(MethodInfo *)0x0);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
