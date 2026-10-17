// RVA 0x87fb40 | Placemaker.Life.BirdLanding$$OnDrawGizmos
// PDB: BirdLanding_OnDrawGizmos_m6B55CF89DC80C9BFBC5F5D3EC94D3661EBBADAFD
// Body: [[1087fb40, 1087fc5e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e520 Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F

void __cdecl
BirdLanding_OnDrawGizmos_m6B55CF89DC80C9BFBC5F5D3EC94D3661EBBADAFD
          (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_1,MethodInfo *param_2)

{
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  float fVar5;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_44;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_34;
  undefined8 local_28;
  float local_20;
  undefined8 local_1c;
  undefined8 local_10;

  if (param_1->___neighbourCount_5 != '\0') {
    local_44.___m_Left_0 = 0.0;
    local_44.___m_Right_1 = 0.0;
    local_44.___m_Top_2 = 0.0;
    local_44.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_44,1.0,1.0,1.0,1.0,(MethodInfo *)0x0);
    CVar1.___g_1 = local_44.___m_Right_1;
    CVar1.___r_0 = local_44.___m_Left_0;
    CVar1.___b_2 = local_44.___m_Top_2;
    CVar1.___a_3 = local_44.___m_Bottom_3;
    Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar1,(MethodInfo *)0x0);
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pVVar4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (&local_34,pTVar3,(MethodInfo *)0x0);
    local_1c._0_4_ = (param_1->___normal_6).___x_2;
    local_1c._4_4_ = (param_1->___normal_6).___y_3;
    local_28._0_4_ = (param_1->___normal_6).___x_2;
    local_28._4_4_ = (param_1->___normal_6).___y_3;
    fVar5 = (float)param_1->___neighbourCount_5;
    local_20 = (param_1->___normal_6).___z_4 * fVar5 * __real_3dcccccd;
    VVar2.___y_3 = (float)local_1c._4_4_ * fVar5 * __real_3dcccccd;
    VVar2.___x_2 = (float)(undefined4)local_1c * fVar5 * __real_3dcccccd;
    VVar2.___z_4 = local_20;
    local_10 = local_1c;
    Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(*pVVar4,VVar2,(MethodInfo *)0x0);
  }
  return;
}
