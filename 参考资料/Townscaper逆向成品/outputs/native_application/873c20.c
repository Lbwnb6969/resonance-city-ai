// RVA 0x873c20 | Placemaker.AudioSnapshotManager$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: AudioSnapshotManager_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m86C381EA19C4BE5555A9218D4044DC1B3B1ABB9D
// Body: [[10873c20, 10873ca4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08

void __cdecl
AudioSnapshotManager_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m86C381EA19C4BE5555A9218D4044DC1B3B1ABB9D
          (AudioSnapshotManager_t66BAA6CAC9AB3DCDC75491A9CE370CA0FAF7A5B4 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_1151f59a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AudioSnapshotManager_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m3A90A1CFA7018AA4E93D5F6DAD768182803CC3DD_RuntimeMethod_var
              );
    DAT_1151f59a = '\x01';
  }
  if ((param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (param_2->___dim_10 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
    pUVar1 = param_2->___dim_10->___alphaState_5;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,(Il2CppObject *)param_1,
               (int)
               AudioSnapshotManager_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m3A90A1CFA7018AA4E93D5F6DAD768182803CC3DD_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar2,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
