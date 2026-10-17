// RVA 0x420930 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnScenePostProcess
// PDB: KeyboardAndMouseControlRemap_OnScenePostProcess_m868D87751B99920D43B2AFE7FD1470916843D64D
// Body: [[10420930, 104209ff]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f210 Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
KeyboardAndMouseControlRemap_OnScenePostProcess_m868D87751B99920D43B2AFE7FD1470916843D64D
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          bool param_2,int param_3,MethodInfo *param_4)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Exception_t *pEVar4;
  uint uVar5;
  Il2CppObject **ppIVar6;
  MethodInfo *pMVar7;

  if (DAT_1151cb14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_GetComponentsInChildren_TisControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798_m8A116D2AB14908A8DE39035DE8E0471B04D823D4_RuntimeMethod_var
              );
    DAT_1151cb14 = '\x01';
  }
  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___darkener_9 !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___darkener_9,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar1,false,(MethodInfo *)0x0)
      ;
      pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        pOVar2 = Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar1,
                            GameObject_GetComponentsInChildren_TisControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798_m8A116D2AB14908A8DE39035DE8E0471B04D823D4_RuntimeMethod_var
                           );
        uVar5 = 0;
        if (pOVar2 != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
          ppIVar6 = pOVar2->m_Items;
          while( true ) {
            if (pOVar2->_padding_ <= (int)uVar5) {
              return;
            }
            if ((uint)pOVar2->_padding_ <= uVar5) {
              pMVar7 = (MethodInfo *)0x0;
              pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar4,pMVar7);
            }
            if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)*ppIVar6 ==
                (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) break;
            pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)*ppIVar6,
                                (MethodInfo *)0x0);
            if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
            Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                      (pTVar3,param_1->___keyParent_6,(MethodInfo *)0x0);
            uVar5 = uVar5 + 1;
            ppIVar6 = ppIVar6 + 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
