// RVA 0x874350 | Placemaker.Ui.BaseButton$$UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
// PDB: BaseButton_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m96E0ADFF738CEDA8B631A71683174B1EFDA0062F
// Body: [[10874350, 10874418]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 1073dc90 Action_1_Invoke_m25A7CA9A142DE88FAC655DC8C4F2A9D469F0B591_gshared
// 10874060 BaseButton_SetState_m070857CD5ED48F511D9E22D01E599F9AD7C8B6B3

void __cdecl
BaseButton_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m96E0ADFF738CEDA8B631A71683174B1EFDA0062F
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (DAT_1151f5a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var)
    ;
    DAT_1151f5a1 = '\x01';
  }
  param_1->___eventData_8 = param_2;
  param_1->___buttonDown_6 = false;
  if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)param_1->___onButtonDownChange_12
      != (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) {
    UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
              ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
               param_1->___onButtonDownChange_12,0,
               Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
    if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
      if (param_2->___U3CdraggingU3Ek__BackingField_22 == false) {
        if (param_1->___pointerInside_5 != false) {
          BaseButton_SetState_m070857CD5ED48F511D9E22D01E599F9AD7C8B6B3
                    (param_1,'\x01',(MethodInfo *)0x0);
          return;
        }
        BaseButton_SetState_m070857CD5ED48F511D9E22D01E599F9AD7C8B6B3
                  (param_1,'\0',(MethodInfo *)0x0);
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
                    ((Action_1_t544C2655053A1384373C677D6CF61F3B89DA1435 *)
                     param_1->___onStateChange_10,param_1->___state_13,
                     Action_1_Invoke_mFFFF0C0D209128F78982C79451D13E3F6B20D479_RuntimeMethod_var);
          return;
        }
        goto LAB_10874414;
      }
      return;
    }
  }
LAB_10874414:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
