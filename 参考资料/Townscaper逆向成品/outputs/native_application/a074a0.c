// RVA 0xa074a0 | Placemaker.Ui.ScreenshotSwitch$$OnUpdate
// PDB: ScreenshotSwitch_OnUpdate_m7DDCDC8025103931962FC6639C51A4E48D3428CA
// Body: [[10a074a0, 10a07670]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10674850 Vector4_Lerp_m3D0C60E9155ADC907763450A987474243F550EDD
// 10674fb0 Vector4_get_sqrMagnitude_m1450744F6AAD57773CE0208B6F51DDEEE9A48E07
// 10a06ed0 ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA
// 10b17b90 Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4

void __cdecl
ScreenshotSwitch_OnUpdate_m7DDCDC8025103931962FC6639C51A4E48D3428CA
          (ScreenshotSwitch_t30DE06810CA11EC175DDE16D672DF0D80E0FD901 *param_1,MethodInfo *param_2)

{
  ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;
  Delegate_t *pDVar11;
  Delegate_t *pDVar12;
  float fVar13;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_24;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  if (DAT_115201cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ScreenshotSwitch_OnUpdate_m7DDCDC8025103931962FC6639C51A4E48D3428CA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_115201cf = '\x01';
  }
  pVVar9 = Vector4_Lerp_m3D0C60E9155ADC907763450A987474243F550EDD
                     ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_14,
                      param_1->___buttonsTarget_19,param_1->___buttonsCurrent_18,
                      *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                      ->static_fields + 0x10),(MethodInfo *)0x0);
  fVar13 = (param_1->___buttonsTarget_19).___x_1;
  fVar2 = (param_1->___buttonsTarget_19).___y_2;
  fVar3 = (param_1->___buttonsTarget_19).___z_3;
  fVar4 = (param_1->___buttonsTarget_19).___w_4;
  fVar5 = pVVar9->___x_1;
  fVar6 = pVVar9->___y_2;
  fVar7 = pVVar9->___z_3;
  fVar8 = pVVar9->___w_4;
  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  (param_1->___buttonsCurrent_18).___x_1 = fVar5;
  (param_1->___buttonsCurrent_18).___y_2 = fVar6;
  (param_1->___buttonsCurrent_18).___z_3 = fVar7;
  (param_1->___buttonsCurrent_18).___w_4 = fVar8;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_14,fVar5 - fVar13,fVar6 - fVar2,fVar7 - fVar3,fVar8 - fVar4,(MethodInfo *)0x0);
  local_24.___x_1 = local_14.___m_Left_0;
  local_24.___y_2 = local_14.___m_Right_1;
  local_24.___z_3 = local_14.___m_Top_2;
  local_24.___w_4 = local_14.___m_Bottom_3;
  fVar13 = Vector4_get_sqrMagnitude_m1450744F6AAD57773CE0208B6F51DDEEE9A48E07
                     (&local_24,(MethodInfo *)0x0);
  if (fVar13 < __real_3a83126f) {
    fVar13 = (param_1->___buttonsTarget_19).___y_2;
    fVar2 = (param_1->___buttonsTarget_19).___z_3;
    fVar3 = (param_1->___buttonsTarget_19).___w_4;
    (param_1->___buttonsCurrent_18).___x_1 = (param_1->___buttonsTarget_19).___x_1;
    (param_1->___buttonsCurrent_18).___y_2 = fVar13;
    (param_1->___buttonsCurrent_18).___z_3 = fVar2;
    (param_1->___buttonsCurrent_18).___w_4 = fVar3;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    pDVar12 = *(Delegate_t **)
               ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                     static_fields + 8);
    pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar10,(Il2CppObject *)param_1,
               (int)
               ScreenshotSwitch_OnUpdate_m7DDCDC8025103931962FC6639C51A4E48D3428CA_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    pDVar11 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4
                        (pDVar12,(Delegate_t *)pOVar10,(MethodInfo *)0x0);
    pDVar12 = (Delegate_t *)0x0;
    if (pDVar11 != (Delegate_t *)0x0) {
      if ((Il2CppClass *)pDVar11->_padding_ ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pDVar12 = pDVar11;
      }
      if (pDVar12 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  ((Il2CppObject *)pDVar11,
                   Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      }
    }
    *(Delegate_t **)
     ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields + 8
     ) = pDVar12;
    pSVar1 = param_1->___frame_8;
    param_1->___isUpdating_20 = false;
    fVar13 = (param_1->___frameTarget_22).___y_1;
    if (pSVar1 == (ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pSVar1->___width_11 = (int)(param_1->___frameTarget_22).___x_0;
    pSVar1->___height_12 = (int)fVar13;
    ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA(pSVar1,(MethodInfo *)0x0);
  }
  return;
}
