// RVA 0xa07930 | Placemaker.Ui.ScreenshotSwitch$$SetFrameTarget
// PDB: ScreenshotSwitch_SetFrameTarget_mE02545B2AEBA766CDC533D55C433328DCF8C56F8
// Body: [[10a07930, 10a07a34]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10674d80 Vector4__ctor_m3F4862542E920800BF07C3F6175238F165DD4E7E
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
ScreenshotSwitch_SetFrameTarget_mE02545B2AEBA766CDC533D55C433328DCF8C56F8
          (ScreenshotSwitch_t30DE06810CA11EC175DDE16D672DF0D80E0FD901 *param_1,float param_2,
          float param_3,float param_4,MethodInfo *param_5)

{
  bool bVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  Delegate_t *pDVar3;
  Delegate_t *pDVar4;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_14;

  if (DAT_115201d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ScreenshotSwitch_OnUpdate_m7DDCDC8025103931962FC6639C51A4E48D3428CA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_115201d0 = '\x01';
  }
  local_14.___x_1 = 0.0;
  local_14.___y_2 = 0.0;
  local_14.___z_3 = 0.0;
  local_14.___w_4 = 0.0;
  Vector4__ctor_m3F4862542E920800BF07C3F6175238F165DD4E7E
            (&local_14,param_2,param_3,param_4,(MethodInfo *)0x0);
  bVar1 = param_1->___isUpdating_20;
  (param_1->___buttonsTarget_19).___x_1 = local_14.___x_1;
  (param_1->___buttonsTarget_19).___y_2 = local_14.___y_2;
  (param_1->___buttonsTarget_19).___z_3 = local_14.___z_3;
  (param_1->___buttonsTarget_19).___w_4 = local_14.___w_4;
  if (bVar1 == false) {
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    pDVar4 = *(Delegate_t **)
              ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                    static_fields + 8);
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,(Il2CppObject *)param_1,
               (int)
               ScreenshotSwitch_OnUpdate_m7DDCDC8025103931962FC6639C51A4E48D3428CA_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    pDVar3 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       (pDVar4,(Delegate_t *)pOVar2,(MethodInfo *)0x0);
    pDVar4 = (Delegate_t *)0x0;
    if (pDVar3 != (Delegate_t *)0x0) {
      if ((Il2CppClass *)pDVar3->_padding_ ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pDVar4 = pDVar3;
      }
      if (pDVar4 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  ((Il2CppObject *)pDVar3,
                   Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      }
    }
    *(Delegate_t **)
     ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields + 8
     ) = pDVar4;
    param_1->___isUpdating_20 = true;
  }
  return;
}
