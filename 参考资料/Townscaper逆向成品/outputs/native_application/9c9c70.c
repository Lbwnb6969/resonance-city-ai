// RVA 0x9c9c70 | Placemaker.Ui.UiMaster.<>c__DisplayClass66_0$$<AddState>b__1
// PDB: U3CU3Ec__DisplayClass66_0_U3CAddStateU3Eb__1_m65DAEE60CE0F1CC27C642FC94F1DF180223D25B5
// Body: [[109c9c70, 109c9ce1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared

void __cdecl
U3CU3Ec__DisplayClass66_0_U3CAddStateU3Eb__1_m65DAEE60CE0F1CC27C642FC94F1DF180223D25B5
          (U3CU3Ec__DisplayClass66_0_tEB7BC6A1AE68902D323EF2E1BB228C862EFC5256 *param_1,
          MethodInfo *param_2)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;

  if (DAT_1151ff61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_mBB118F0FA595B158FE28A5BCA1BD8ACA86A3EB68_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151ff61 = '\x01';
  }
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  pLVar1 = *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)
            ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
              (pLVar1,(Il2CppObject *)param_1->___state_0,
               List_1_Remove_mBB118F0FA595B158FE28A5BCA1BD8ACA86A3EB68_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
