// RVA 0x417c20 | Placemaker.Ui.InputModeManager$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: InputModeManager_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m50E3ECCD664E212F1F00599F825862284C630CE0
// Body: [[10417c20, 10417cde]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e50e0 UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
InputModeManager_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m50E3ECCD664E212F1F00599F825862284C630CE0
          (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151cab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151cab8 = '\x01';
  }
  param_1->___master_4 = param_2;
  if (param_1->___mode_8 != 2) {
    param_1->___mode_8 = 2;
    if (param_1->___gamepadState_6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_10417cda;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___gamepadState_6,false,(MethodInfo *)0x0);
    if (param_1->___touchAndMouseState_7 ==
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10417cda;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___touchAndMouseState_7,true,(MethodInfo *)0x0);
  }
  if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
              (param_2,param_1->___gamepadState_6,0x40,(MethodInfo *)0x0);
    UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
              (param_2,param_1->___touchAndMouseState_7,0x20,(MethodInfo *)0x0);
    pUVar1 = param_1->___gamepadState_6;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
              (param_1->___touchAndMouseState_7,(MethodInfo *)0x0);
    return;
  }
LAB_10417cda:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
