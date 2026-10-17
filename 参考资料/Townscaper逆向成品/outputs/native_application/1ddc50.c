// RVA 0x1ddc50 | Placemaker.Ui.SideMenu.<>c__DisplayClass17_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__6
// PDB: U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__6_mFF6E01F5AA529CA34E8F94F0C0525508E00449B2
// Body: [[101ddc50, 101ddd5a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__6_mFF6E01F5AA529CA34E8F94F0C0525508E00449B2
          (U3CU3Ec__DisplayClass17_0_t7007DC64C2A37C0828DA7D473B3E75A75BFC657C *param_1,
          float param_2,MethodInfo *param_3)

{
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar1;
  float fVar2;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar7;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_18;
  undefined8 local_c;

  if (DAT_1151b00d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151b00d = '\x01';
  }
  if ((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
     (pCVar1 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
               param_1->___U3CU3E4__this_0->___trimAndIconContainer_17,
     pCVar1 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
    pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       (pCVar1,(MethodInfo *)0x0);
    if ((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)
       && (pCVar1 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                    param_1->___U3CU3E4__this_0->___trimAndIconContainer_17,
          pCVar1 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         (pCVar1,(MethodInfo *)0x0);
      if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_18,pTVar5,
                            (MethodInfo *)0x0);
        local_c._0_4_ = pVVar6->___x_2;
        local_c._4_4_ = pVVar6->___y_3;
        fVar2 = pVVar6->___z_4;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        fVar3.___z_2 = fVar2;
        fVar3.___x_0 = (float)(undefined4)local_c;
        fVar3.___y_1 = (float)local_c._4_4_;
        pfVar7 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                           (&local_18,fVar3,param_2 * __real_428c0000,(MethodInfo *)0x0);
        if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                    (pTVar4,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar7,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
