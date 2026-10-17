// RVA 0x1ddbf0 | Placemaker.Ui.SideMenu.<>c__DisplayClass17_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__5
// PDB: U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m2E8832C6AD51430D0D2467200AC93BF07ECCF60E
// Body: [[101ddbf0, 101ddc48]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared

void __cdecl
U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m2E8832C6AD51430D0D2467200AC93BF07ECCF60E
          (U3CU3Ec__DisplayClass17_0_t7007DC64C2A37C0828DA7D473B3E75A75BFC657C *param_1,
          MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151b00c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var)
    ;
    DAT_1151b00c = '\x01';
  }
  if (((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
      (pUVar1 = param_1->___U3CU3E4__this_0->___openState_8,
      pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) &&
     ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)pUVar1->___onValueChanged_3 !=
      (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0)) {
    UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
              ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
               pUVar1->___onValueChanged_3,pUVar1->____current_0,
               Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
