// RVA 0x837c00 | Placemaker.FastCoroutines$$Queue
// PDB: FastCoroutines_Queue_m01BA615D40BBBED35EDF1359EA2C6EA7C67C2EC5
// Body: [[10837c00, 10837c96]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared

void __cdecl
FastCoroutines_Queue_m01BA615D40BBBED35EDF1359EA2C6EA7C67C2EC5
          (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_1,MethodInfo *param_2)

{
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar1;

  if (DAT_1151f3cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mFF30D83D6B40C540CE8DBEA1F7064A9D65C9BD27_RuntimeMethod_var);
    DAT_1151f3cf = '\x01';
  }
  if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
      == 0)) {
    il2cpp_runtime_class_init
              (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
  }
  if (*(List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 **)
       FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->static_fields
      != (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) {
    lVar1.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = (float)param_1;
    lVar1.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = 1;
    lVar1.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = 0;
    List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
              (*(List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 **)
                FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                static_fields,lVar1,
               List_1_Add_mFF30D83D6B40C540CE8DBEA1F7064A9D65C9BD27_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
