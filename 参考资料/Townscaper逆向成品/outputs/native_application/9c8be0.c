// RVA 0x9c8be0 | Placemaker.Ui.SideMenuNavigator.<>c__DisplayClass11_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mBAB0A01B1B2B75B386744655CABFCD83EA57F2AE
// Body: [[109c8be0, 109c8d3c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10837030 ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mBAB0A01B1B2B75B386744655CABFCD83EA57F2AE
          (U3CU3Ec__DisplayClass11_0_t669A9CAEA708B389127A93B5FCEA239A36B16224 *param_1,
          float param_2,MethodInfo *param_3)

{
  float fVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  float fVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_18;
  undefined8 local_c;

  if (DAT_1151ff32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151ff32 = '\x01';
  }
  if ((param_1->___U3CU3E4__this_0 !=
       (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *)0x0) &&
     (pTVar2 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
               param_1->___U3CU3E4__this_0->___selectorTransform_6,
     pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pVVar5 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                       (&local_18,pTVar2,(MethodInfo *)0x0);
    fVar1 = param_1->___startArrowX_1;
    local_c._0_4_ = pVVar5->___x_2;
    local_c._4_4_ = pVVar5->___y_3;
    fVar3 = pVVar5->___z_4;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    VVar4.___z_4 = fVar3;
    VVar4.___x_2 = (float)(undefined4)local_c;
    VVar4.___y_3 = (float)local_c._4_4_;
    pVVar5 = ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
                       (&local_18,VVar4,fVar1 - param_2 * ___real_43480000,(MethodInfo *)0x0);
    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
              (pTVar2,*pVVar5,(MethodInfo *)0x0);
    if ((param_1->___U3CU3E4__this_0 !=
         (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *)0x0) &&
       (pTVar2 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                 param_1->___U3CU3E4__this_0->___selectorTransform_6,
       pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      pVVar5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                         (&local_18,pTVar2,(MethodInfo *)0x0);
      pVVar5 = ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
                         (&local_18,*pVVar5,param_2 * __real_40c00000 + __real_3f800000,
                          (MethodInfo *)0x0);
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar2,*pVVar5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
