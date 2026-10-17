// RVA 0x9fc700 | Placemaker.SaveCardsHandler$$CardDataLoadingFailed
// PDB: SaveCardsHandler_CardDataLoadingFailed_m1AC55947FAE94149B0C6009F495E200B64ABE725
// Body: [[109fc700, 109fc73a] [109fc73e, 109fc76d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
SaveCardsHandler_CardDataLoadingFailed_m1AC55947FAE94149B0C6009F495E200B64ABE725
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;

  if (DAT_1152018d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    DAT_1152018d = '\x01';
  }
  pLVar1 = param_1->___activeCards_8;
  if (pLVar1 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
    if ((uint)pLVar1->____size_2 <= (uint)param_1->___currentCardIndex_13) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
         (pLVar1->____items_1 + param_1->___currentCardIndex_13 * 4 + 0x10) !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                           (pLVar1->____items_1 + param_1->___currentCardIndex_13 * 4 + 0x10),
                          (MethodInfo *)0x0);
      if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
