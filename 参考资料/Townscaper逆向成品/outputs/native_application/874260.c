// RVA 0x874260 | Placemaker.Ui.BaseButton$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
// PDB: BaseButton_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_m81CE9AFE8A7F8ED1B44998E4A4330DE128FEDA74
// Body: [[10874260, 108742e0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1073dc90 Action_1_Invoke_m25A7CA9A142DE88FAC655DC8C4F2A9D469F0B591_gshared
// 10874060 BaseButton_SetState_m070857CD5ED48F511D9E22D01E599F9AD7C8B6B3

void __cdecl
BaseButton_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_m81CE9AFE8A7F8ED1B44998E4A4330DE128FEDA74
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  bool bVar1;

  param_1->___eventData_8 = param_2;
  param_1->___pointerInside_5 = true;
  if (param_2 == (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
LAB_108742dc:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if (param_2->___U3CdraggingU3Ek__BackingField_22 == false) {
    if (param_2->___U3CpointerIdU3Ek__BackingField_12 < 0) {
      BaseButton_SetState_m070857CD5ED48F511D9E22D01E599F9AD7C8B6B3
                (param_1,'\x01',(MethodInfo *)0x0);
    }
  }
  else if (param_1->___state_13 != '\0') {
    bVar1 = DAT_1151f59f == '\0';
    param_1->___state_13 = '\0';
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Action_1_Invoke_mFFFF0C0D209128F78982C79451D13E3F6B20D479_RuntimeMethod_var
                );
      DAT_1151f59f = '\x01';
    }
    if ((Action_1_t544C2655053A1384373C677D6CF61F3B89DA1435 *)param_1->___onStateChange_10 !=
        (Action_1_t544C2655053A1384373C677D6CF61F3B89DA1435 *)0x0) {
      Action_1_Invoke_m25A7CA9A142DE88FAC655DC8C4F2A9D469F0B591_gshared
                ((Action_1_t544C2655053A1384373C677D6CF61F3B89DA1435 *)param_1->___onStateChange_10,
                 param_1->___state_13,
                 Action_1_Invoke_mFFFF0C0D209128F78982C79451D13E3F6B20D479_RuntimeMethod_var);
      return;
    }
    goto LAB_108742dc;
  }
  return;
}
