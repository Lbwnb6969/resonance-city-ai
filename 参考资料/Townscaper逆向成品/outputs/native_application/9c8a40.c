// RVA 0x9c8a40 | Placemaker.Ui.SideMenuNavigator.<>c__DisplayClass11_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5E89302ACC31BD7BB7B22FF78805AE8BBC4FF252
// Body: [[109c8a40, 109c8b08]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149

void __cdecl
U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5E89302ACC31BD7BB7B22FF78805AE8BBC4FF252
          (U3CU3Ec__DisplayClass11_0_t669A9CAEA708B389127A93B5FCEA239A36B16224 *param_1,
          float param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  float fVar2;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar5;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_18;
  undefined8 local_c;

  if (DAT_1151ff31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151ff31 = '\x01';
  }
  if ((param_1->___U3CU3E4__this_0 !=
       (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *)0x0) &&
     (pTVar1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
               param_1->___U3CU3E4__this_0->___selectorTransform_6,
     pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pVVar4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_18,pTVar1,
                        (MethodInfo *)0x0);
    local_c._0_4_ = pVVar4->___x_2;
    local_c._4_4_ = pVVar4->___y_3;
    fVar2 = pVVar4->___z_4;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    fVar3.___z_2 = fVar2;
    fVar3.___x_0 = (float)(undefined4)local_c;
    fVar3.___y_1 = (float)local_c._4_4_;
    pfVar5 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                       (&local_18,fVar3,param_2,(MethodInfo *)0x0);
    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
              (pTVar1,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
