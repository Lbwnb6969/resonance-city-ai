// RVA 0x74e580 | Placemaker.PaletteHolder$$SelectPicker
// PDB: PaletteHolder_SelectPicker_mF4A6639C1016350C76989958D3633B9164169C2A
// Body: [[1074e580, 1074e5c6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared

void __cdecl
PaletteHolder_SelectPicker_mF4A6639C1016350C76989958D3633B9164169C2A
          (PaletteHolder_tF17DB451E623E6EBDCF01A847508D7229E367B0B *param_1,int param_2,
          MethodInfo *param_3)

{
  if (DAT_1151ebe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var)
    ;
    DAT_1151ebe3 = '\x01';
  }
  param_1->___selectedColorIndex_6 = param_2;
  if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)param_1->___onNewColor_7 !=
      (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) {
    UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
              ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)param_1->___onNewColor_7,
               param_2,Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
