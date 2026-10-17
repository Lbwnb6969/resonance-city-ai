// RVA 0x233e60 | Placemaker.Ui.CommandFeedbacker$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: CommandFeedbacker_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mD10AD928A1F1D48EE68A4ED71DA123B209432653
// Body: [[10233e60, 10233e98]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared

void __cdecl
CommandFeedbacker_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mD10AD928A1F1D48EE68A4ED71DA123B209432653
          (CommandFeedbacker_t476CB1AAEE70903FB99B435AD4211A0714263692 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar1;

  if (DAT_1151b590 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    DAT_1151b590 = '\x01';
  }
  pCVar1 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                     );
  param_1->___canvasGroup_7 = pCVar1;
  return;
}
