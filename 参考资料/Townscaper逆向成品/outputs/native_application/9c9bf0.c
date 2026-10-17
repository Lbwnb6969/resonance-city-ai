// RVA 0x9c9bf0 | Placemaker.Ui.UiMaster.<>c__DisplayClass66_0$$<AddState>b__0
// PDB: U3CU3Ec__DisplayClass66_0_U3CAddStateU3Eb__0_mCBD53BF3F5E1161ADD15DAB5C6568E8D180E9704
// Body: [[109c9bf0, 109c9c61]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
U3CU3Ec__DisplayClass66_0_U3CAddStateU3Eb__0_mCBD53BF3F5E1161ADD15DAB5C6568E8D180E9704
          (U3CU3Ec__DisplayClass66_0_tEB7BC6A1AE68902D323EF2E1BB228C862EFC5256 *param_1,
          MethodInfo *param_2)

{
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar1;

  if (DAT_1151ff60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m876AFCB19D4D15AA18BE0B8158487CAF0F1C5BC2_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151ff60 = '\x01';
  }
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  pLVar1 = *(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
            ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pLVar1 != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              (pLVar1,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_1->___state_0,
               List_1_Add_m876AFCB19D4D15AA18BE0B8158487CAF0F1C5BC2_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
