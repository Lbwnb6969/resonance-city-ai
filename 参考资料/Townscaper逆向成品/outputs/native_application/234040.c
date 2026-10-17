// RVA 0x234040 | Placemaker.Ui.ControlBindingKey$$Awake
// PDB: ControlBindingKey_Awake_m2ED38CC26B1EE39336789B9CD432B4300C7C18E5
// Body: [[10234040, 10234078]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared

void __cdecl
ControlBindingKey_Awake_m2ED38CC26B1EE39336789B9CD432B4300C7C18E5
          (ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *param_1,MethodInfo *param_2)

{
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar1;

  if (DAT_1151b5a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
              );
    DAT_1151b5a4 = '\x01';
  }
  pBVar1 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                     );
  param_1->___baseButton_9 = pBVar1;
  return;
}
