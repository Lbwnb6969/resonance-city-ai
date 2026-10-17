// RVA 0x3e55a0 | Placemaker.Ui.UiMaster$$CheckForNonLocalizedText
// PDB: UiMaster_CheckForNonLocalizedText_mD4D46FF0410B9559D8F8A909CA625959E347961B
// Body: [[103e55a0, 103e572f]]
// Direct callees:
// 1003e660 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10a36e40 Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
// 10a3ccb0 Debug_Log_mF3A49A8FCD5EC1535CADCDFF57432813A8790DF6
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
UiMaster_CheckForNonLocalizedText_mD4D46FF0410B9559D8F8A909CA625959E347961B
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  bool bVar2;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar3;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar4;
  Il2CppObject *pIVar5;
  Exception_t *pEVar6;
  Il2CppObject **ppIVar7;
  uint uVar8;
  MethodInfo *pMVar9;

  if (DAT_1151c8b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798_mEBAD2DF8A2552F83E887A93BCB0BBB2B1B0EA0FD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisLocalize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088_m647626D817C261684B3839DA7C89B1880C34E3CA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m73AB6E9B7515C735BC9E7B246C07BB9A9E757C4F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c8b8 = '\x01';
  }
  pOVar3 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                      Component_GetComponentsInChildren_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m73AB6E9B7515C735BC9E7B246C07BB9A9E757C4F_RuntimeMethod_var
                     );
  uVar8 = 0;
  if (pOVar3 != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
    ppIVar7 = pOVar3->m_Items;
    while( true ) {
      if (pOVar3->_padding_ <= (int)uVar8) {
        return;
      }
      if ((uint)pOVar3->_padding_ <= uVar8) {
        pMVar9 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar9);
      }
      pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)*ppIVar7;
      if (pOVar1 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) break;
      pOVar4 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pOVar1,
                          Component_GetComponent_TisLocalize_t7BFA4E2A8B445A9E2F49DEA4F4C1D5399C42E088_m647626D817C261684B3839DA7C89B1880C34E3CA_RuntimeMethod_var
                         );
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar4,(MethodInfo *)0x0)
      ;
      if (bVar2) {
        if (pOVar4 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) break;
        bVar2 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
                          ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pOVar4,
                           (MethodInfo *)0x0);
        if (!bVar2) goto LAB_103e5691;
      }
      else {
LAB_103e5691:
        pOVar4 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pOVar1,
                            Component_GetComponentInParent_TisControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798_mEBAD2DF8A2552F83E887A93BCB0BBB2B1B0EA0FD_RuntimeMethod_var
                           );
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                          (pOVar4,(MethodInfo *)0x0);
        if (!bVar2) {
          pIVar5 = (Il2CppObject *)VirtFuncInvoker0<int>::Invoke(0x41,(Il2CppObject *)pOVar1);
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_Log_mF3A49A8FCD5EC1535CADCDFF57432813A8790DF6(pIVar5,pOVar1,(MethodInfo *)0x0);
        }
      }
      uVar8 = uVar8 + 1;
      ppIVar7 = ppIVar7 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
