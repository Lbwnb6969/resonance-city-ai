// RVA 0x3f5010 | Placemaker.WaveFunctionCollapse$$QubeUpdated
// PDB: WaveFunctionCollapse_QubeUpdated_m93E0BF72453750D534D1A978FD43A610D9CE143F
// Body: [[103f5010, 103f50c0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 10a3bb60 Debug_Break_m9F329399AFCF1871DD61583BD8EEB3F2E9B72C3A

void __cdecl
WaveFunctionCollapse_QubeUpdated_m93E0BF72453750D534D1A978FD43A610D9CE143F
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,MethodInfo *param_3)

{
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar1;
  MethodInfo *unaff_ESI;
  uint uStack_10;

  if (DAT_1151c917 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var);
    DAT_1151c917 = '\x01';
  }
  if (param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    param_2->___lastPropagation_11 = param_1->___propagationCounter_5;
    uStack_10 = (uint)param_1->___propagationCounter_5;
    if (param_1->___updates_8 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
      KVar1.___key_0.___dateData_44._4_4_ = param_2->___existanceIndex_9;
      KVar1.___key_0.___dateData_44._0_4_ = uStack_10;
      KVar1.___value_1 = (Il2CppObject *)0x0;
      KVar1._12_4_ = List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var;
      List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___updates_8,KVar1,
                 unaff_ESI);
      if (param_1->___doDebugBreak_20 != false) {
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_Break_m9F329399AFCF1871DD61583BD8EEB3F2E9B72C3A((MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
