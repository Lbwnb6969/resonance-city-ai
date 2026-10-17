// RVA 0x8742f0 | Placemaker.Ui.BaseButton$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// PDB: BaseButton_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m947BB4B8C8018BDE9F618DF215767BEC70FCA032
// Body: [[108742f0, 1087434a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1073dc90 Action_1_Invoke_m25A7CA9A142DE88FAC655DC8C4F2A9D469F0B591_gshared

void __cdecl
BaseButton_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m947BB4B8C8018BDE9F618DF215767BEC70FCA032
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  bool bVar1;

  param_1->___eventData_8 = param_2;
  param_1->___pointerInside_5 = false;
  if (param_1->___state_13 != '\0') {
    bVar1 = DAT_1151f59f == '\0';
    param_1->___state_13 = '\0';
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Action_1_Invoke_mFFFF0C0D209128F78982C79451D13E3F6B20D479_RuntimeMethod_var
                );
      DAT_1151f59f = '\x01';
    }
    if ((Action_1_t544C2655053A1384373C677D6CF61F3B89DA1435 *)param_1->___onStateChange_10 ==
        (Action_1_t544C2655053A1384373C677D6CF61F3B89DA1435 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    Action_1_Invoke_m25A7CA9A142DE88FAC655DC8C4F2A9D469F0B591_gshared
              ((Action_1_t544C2655053A1384373C677D6CF61F3B89DA1435 *)param_1->___onStateChange_10,
               param_1->___state_13,
               Action_1_Invoke_mFFFF0C0D209128F78982C79451D13E3F6B20D479_RuntimeMethod_var);
  }
  return;
}
