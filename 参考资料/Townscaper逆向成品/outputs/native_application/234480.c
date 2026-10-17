// RVA 0x234480 | Placemaker.Ui.ControlBinding$$OnConflictFound
// PDB: ControlBinding_OnConflictFound_m1F6A811C338CD31826EEFDC35D829AF827683AF6
// Body: [[10234480, 102344f3]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325dd0 UnityAction_1_Invoke_m74DBA8433434A2BD595BF11212F0DF26D6F6DF3E_gshared

void __cdecl
ControlBinding_OnConflictFound_m1F6A811C338CD31826EEFDC35D829AF827683AF6
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,
          ConflictFoundEventData_tA89C6523671C3D087025F21D974255D7CFFA97F8 *param_2,
          MethodInfo *param_3)

{
  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *pTVar1;

  if (DAT_1151b59a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mEE93F2046C1274F4639EB5392C5ABE87C1AE9DA7_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9F3E3EA5A45D6BAE92D8D29E1F49CB2DB0913A24);
    DAT_1151b59a = '\x01';
  }
  pTVar1 = param_1->___statusText_7;
  if (pTVar1 != (TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *)0x0) {
    (**(code **)(pTVar1->_padding_ + 0x2cc))
              (pTVar1,_stringLiteral9F3E3EA5A45D6BAE92D8D29E1F49CB2DB0913A24,
               *(undefined4 *)(pTVar1->_padding_ + 0x2d0));
    if ((param_2 != (ConflictFoundEventData_tA89C6523671C3D087025F21D974255D7CFFA97F8 *)0x0) &&
       ((UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *)param_2->___responseCallback_1 !=
        (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *)0x0)) {
      UnityAction_1_Invoke_m74DBA8433434A2BD595BF11212F0DF26D6F6DF3E_gshared
                ((UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *)
                 param_2->___responseCallback_1,0,
                 Action_1_Invoke_mEE93F2046C1274F4639EB5392C5ABE87C1AE9DA7_RuntimeMethod_var);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
