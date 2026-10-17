// RVA 0x87fcc0 | Placemaker.Life.BirdLanding$$Placemaker.Props.IPropEnable.OnFirstEnable
// PDB: BirdLanding_Placemaker_Props_IPropEnable_OnFirstEnable_m465C6C177905E387ACF52357C21E55EA32F7E6C1
// Body: [[1087fcc0, 1087fe40]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f1a0 Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674430 Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10e75480 Graph_SampleNormalCoverage_mCDDEB568B7C6DC8ADD9688CF3EB467A41DF3A9D1

void __cdecl
BirdLanding_Placemaker_Props_IPropEnable_OnFirstEnable_m465C6C177905E387ACF52357C21E55EA32F7E6C1
          (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  float fVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar9;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_44;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  undefined8 local_1c;
  float local_10;
  float fStack_c;
  undefined4 local_8;

  pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  local_10 = -1.0;
  fStack_c = 0.0;
  local_8 = 0;
  if (pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar8 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
                       (&local_28,pTVar7,
                        (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)ZEXT812(0xbf800000),
                        (MethodInfo *)0x0);
    fVar6 = pVVar8->___y_3;
    fVar3 = pVVar8->___z_4;
    (param_1->___normal_6).___x_2 = pVVar8->___x_2;
    (param_1->___normal_6).___y_3 = fVar6;
    (param_1->___normal_6).___z_4 = fVar3;
    if (param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      pGVar4 = param_2->___graph_7;
      pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                           (&local_28,pTVar7,(MethodInfo *)0x0);
        uVar1 = pVVar8->___x_2;
        uVar2 = pVVar8->___y_3;
        fVar3 = pVVar8->___z_4;
        fStack_c = (float)uVar1;
        local_8 = uVar2;
        pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
        if (pGVar4 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
          VVar5.___y_3 = (float)local_8;
          VVar5.___x_2 = fStack_c;
          VVar5.___z_4 = fVar3;
          pVVar9 = Graph_SampleNormalCoverage_mCDDEB568B7C6DC8ADD9688CF3EB467A41DF3A9D1
                             (&local_44,pGVar4,VVar5,pTVar7,(MethodInfo *)0x0);
          local_44.___Item1_0.___x_2 = (pVVar9->___Item1_0).___x_2;
          local_44.___Item1_0.___y_3 = (pVVar9->___Item1_0).___y_3;
          local_44.___Item1_0.___z_4 = (pVVar9->___Item1_0).___z_4;
          local_44.___Item2_1 = pVVar9->___Item2_1;
          if (0.0 < local_44.___Item2_1) {
            local_1c._0_4_ = (param_1->___normal_6).___x_2;
            local_1c._4_4_ = (param_1->___normal_6).___y_3;
            local_28.___x_2 = (param_1->___normal_6).___x_2;
            local_28.___y_3 = (param_1->___normal_6).___y_3;
            local_34.___z_4 =
                 local_44.___Item1_0.___z_4 * __real_3f000000 + (param_1->___normal_6).___z_4;
            local_34.___y_3 = local_44.___Item1_0.___y_3 * __real_3f000000 + (float)local_1c._4_4_;
            local_34.___x_2 =
                 local_44.___Item1_0.___x_2 * __real_3f000000 + (float)(undefined4)local_1c;
            local_28.___z_4 = local_34.___z_4;
            local_10 = (float)(undefined4)local_1c;
            fStack_c = (float)local_1c._4_4_;
            pVVar8 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                               (&local_28,&local_34,(MethodInfo *)0x0);
            fVar6 = pVVar8->___y_3;
            fVar3 = pVVar8->___z_4;
            (param_1->___normal_6).___x_2 = pVVar8->___x_2;
            (param_1->___normal_6).___y_3 = fVar6;
            (param_1->___normal_6).___z_4 = fVar3;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
