// RVA 0x3dd010 | Placemaker.Ui.NavigableButton$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: NavigableButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mB603364B7CCFD707556431A093DB09026497F49D
// Body: [[103dd010, 103dd061]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF

void __cdecl
NavigableButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mB603364B7CCFD707556431A093DB09026497F49D
          (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151c88e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c88e = '\x01';
  }
  pUVar1 = param_1->___selectedState_6;
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
  return;
}
