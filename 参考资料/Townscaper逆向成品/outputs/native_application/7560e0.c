// RVA 0x7560e0 | Placemaker.Ui.ProgressBarButton$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: ProgressBarButton_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mE521361AAD6504D0C876EB61713A8E6F93D7F84F
// Body: [[107560e0, 10756122]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
ProgressBarButton_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mE521361AAD6504D0C876EB61713A8E6F93D7F84F
          (ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar1;

  if (DAT_1151ec28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
              );
    DAT_1151ec28 = '\x01';
  }
  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,(MethodInfo *)0x0)
  ;
  pBVar1 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                     );
  param_1->___baseButton_8 = pBVar1;
  return;
}
