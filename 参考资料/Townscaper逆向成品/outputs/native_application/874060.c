// RVA 0x874060 | Placemaker.Ui.BaseButton$$SetState
// PDB: BaseButton_SetState_m070857CD5ED48F511D9E22D01E599F9AD7C8B6B3
// Body: [[10874060, 108740b1]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1073dc90 Action_1_Invoke_m25A7CA9A142DE88FAC655DC8C4F2A9D469F0B591_gshared

void __cdecl
BaseButton_SetState_m070857CD5ED48F511D9E22D01E599F9AD7C8B6B3
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_1,uchar param_2,
          MethodInfo *param_3)

{
  bool bVar1;

  if (param_2 != param_1->___state_13) {
    bVar1 = DAT_1151f59f == '\0';
    param_1->___state_13 = param_2;
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
