// RVA 0x750880 | Placemaker.Ui.PinUiButton$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: PinUiButton_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mCC5BBA644FAA9486A580C99F88668E742D1C620F
// Body: [[10750880, 107508dd]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared

void __cdecl
PinUiButton_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mCC5BBA644FAA9486A580C99F88668E742D1C620F
          (PinUiButton_t2DC79017B20F3160890B4C6B99A638ACBBCA49A0 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  if (DAT_1151ebfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisPinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242_mAAA0B6C65316F9322F8B8B71C48DCD9FF01863CB_RuntimeMethod_var
              );
    DAT_1151ebfd = '\x01';
  }
  param_1->___master_4 = param_2;
  if (param_1->___palettePinTarget_7 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
  {
    GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
              (param_1->___palettePinTarget_7,
               GameObject_AddComponent_TisPinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242_mAAA0B6C65316F9322F8B8B71C48DCD9FF01863CB_RuntimeMethod_var
              );
    if (param_1->___sideMenuPinTarget_8 !=
        (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                (param_1->___sideMenuPinTarget_8,
                 GameObject_AddComponent_TisPinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242_mAAA0B6C65316F9322F8B8B71C48DCD9FF01863CB_RuntimeMethod_var
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
