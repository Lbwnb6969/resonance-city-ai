// RVA 0x3dcf10 | Placemaker.Ui.NavigableButton$$OnHorizontal
// PDB: NavigableButton_OnHorizontal_mF0C65CE5CCD98D00625D5A111CD8FBAD354CBB87
// Body: [[103dcf10, 103dcf5d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10326960 UnityAction_2_Invoke_m44ED02B0A833C4E0F55D7EE9B8FB9F929DC2BDFC_gshared

void __cdecl
NavigableButton_OnHorizontal_mF0C65CE5CCD98D00625D5A111CD8FBAD354CBB87
          (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *param_1,int param_2,
          float param_3,MethodInfo *param_4)

{
  if (DAT_1151c88f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_m8A956F86E59951C6B566373429E6046DF1CAEFB8_RuntimeMethod_var)
    ;
    DAT_1151c88f = '\x01';
  }
  if ((UnityAction_2_t2DDCC95AA4605656035B876C62278D72663FF03A *)param_1->___onHorizontal_8 !=
      (UnityAction_2_t2DDCC95AA4605656035B876C62278D72663FF03A *)0x0) {
    UnityAction_2_Invoke_m44ED02B0A833C4E0F55D7EE9B8FB9F929DC2BDFC_gshared
              ((UnityAction_2_t2DDCC95AA4605656035B876C62278D72663FF03A *)param_1->___onHorizontal_8
               ,param_2,param_3,
               Action_2_Invoke_m8A956F86E59951C6B566373429E6046DF1CAEFB8_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
