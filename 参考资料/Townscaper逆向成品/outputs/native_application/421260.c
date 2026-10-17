// RVA 0x421260 | Placemaker.Ui.KeyboardAndMouseControlRemap$$Setup
// PDB: KeyboardAndMouseControlRemap_Setup_mDCCFFC06664D86644FBFFAFF718250E2FD590D37
// Body: [[10421260, 104215e9]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 1042160e FUN_1042160e
// 1043f210 Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 107d0ba0 ReInput_get_mapping_m6A5EE8A93174AAA84C9C37C1CC3C340A485C19E3
// 108b6fb0 MappingHelper_ActionsInCategory_mC66639760FEC669B2B1CA03DE82C87649DD43464
// 10db04c0 InputAction_get_negativeDescriptiveName_mEE74C324DFD2047C5F8A7E31C226F5C99B276F39
// 10db0560 InputAction_get_positiveDescriptiveName_mA742606F52F1DD385F661621EC5CB23B2D03A92D
// 10f044a0 String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void __cdecl
KeyboardAndMouseControlRemap_Setup_mDCCFFC06664D86644FBFFAFF718250E2FD590D37
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          MethodInfo *param_2)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar1;
  undefined1 *puVar2;
  bool bVar3;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar4;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar5;
  MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 *pMVar6;
  Il2CppObject *pIVar7;
  int iVar8;
  InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *pIVar9;
  String_t *pSVar10;
  Exception_t *pEVar11;
  uint uVar12;
  MethodInfo *pMVar13;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_4c;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_3c;
  Il2CppObject *local_24;
  undefined4 local_20;
  Il2CppObject *local_1c;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__KeyboardAndMouseControlRemap_Setup_mDCCFFC06664D86644FBFFAFF718250E2FD590D37
  ;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffff94;
  if (DAT_1151cb0c == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798_m8B5280D2ABCC65C97D39B33AEEED4745D59C61D5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mCC070A6CF25532BF99D3FC625D7FB52024B786B3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m1353A10EE0CB00180EDAF9389E548EEDD7BA887E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m42431BA8815E54F3EEBAF870B265EB133BBAD9F9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t30B1CF132C29935077E288332B94617FF4337171_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t6134A20D2499DC6D27A5860ECCB41D08D19C9FAD_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m830A1BBE92FC32353761D096891DA84D47D2194B_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m972BDE6BC2BC317427705DB3160F63468F3C31A2_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m90FE9FBDA698E3663ACF7048B85927BAE7232C2A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m4A07493C63B1C7C76F76026B795E6B4C8CFFFAF0_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tAAE752DCE5B69FD241A43EC1DB083DAE962E12A4_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
    DAT_1151cb0c = '\x01';
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_20 = 0;
  local_3c.___list_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0;
  local_3c.___index_1 = 0;
  local_3c.___version_2 = 0;
  local_3c.___current_3 = (Il2CppObject *)0x0;
  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    if (param_1->___master_4->___player_43 ==
        (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) {
      ExceptionList = pvStack_10;
      return;
    }
    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___controlBindingKeys_19 ==
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      pLVar4 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
               il2cpp_codegen_object_new
                         (List_1_tAAE752DCE5B69FD241A43EC1DB083DAE962E12A4_il2cpp_TypeInfo_var);
      List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
                (pLVar4,List_1__ctor_m4A07493C63B1C7C76F76026B795E6B4C8CFFFAF0_RuntimeMethod_var);
      param_1->___controlBindingKeys_19 = (List_1_tAAE752DCE5B69FD241A43EC1DB083DAE962E12A4 *)pLVar4
      ;
    }
    else {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                 param_1->___controlBindingKeys_19,
                 List_1_Clear_m972BDE6BC2BC317427705DB3160F63468F3C31A2_RuntimeMethod_var);
    }
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___keyParent_6 !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      local_18 = Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___keyParent_6,
                            Component_GetComponentsInChildren_TisControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798_m8B5280D2ABCC65C97D39B33AEEED4745D59C61D5_RuntimeMethod_var
                           );
      uVar12 = 0;
      if (local_18 != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
        local_1c = (Il2CppObject *)local_18->m_Items;
        for (; (int)uVar12 < local_18->_padding_; uVar12 = uVar12 + 1) {
          if ((uint)local_18->_padding_ <= uVar12) {
            pMVar13 = (MethodInfo *)0x0;
            pEVar11 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar11,pMVar13);
          }
          if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___controlBindingKeys_19
              == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_104216b5;
          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                     param_1->___controlBindingKeys_19,
                     (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)local_1c->field0_0x0,
                     List_1_Add_m830A1BBE92FC32353761D096891DA84D47D2194B_RuntimeMethod_var);
          local_1c = (Il2CppObject *)&local_1c->monitor;
        }
        if (param_1->___controlBindingKeys_19 !=
            (List_1_tAAE752DCE5B69FD241A43EC1DB083DAE962E12A4 *)0x0) {
          pEVar5 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                             (&local_4c,
                              (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                              param_1->___controlBindingKeys_19,
                              List_1_GetEnumerator_m90FE9FBDA698E3663ACF7048B85927BAE7232C2A_RuntimeMethod_var
                             );
          local_3c.___list_0 = pEVar5->___list_0;
          local_3c.___index_1 = pEVar5->___index_1;
          local_3c.___version_2 = pEVar5->___version_2;
          local_3c.___current_3 = pEVar5->___current_3;
          local_8 = 0;
          bVar3 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                            (&local_3c,
                             Enumerator_MoveNext_m1353A10EE0CB00180EDAF9389E548EEDD7BA887E_RuntimeMethod_var
                            );
          if (!bVar3) {
            FUN_10421668();
            return;
          }
          local_18 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)local_3c.___current_3
          ;
          if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
          }
          pMVar6 = ReInput_get_mapping_m6A5EE8A93174AAA84C9C37C1CC3C340A485C19E3((MethodInfo *)0x0);
          if ((pMVar6 != (MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 *)0x0) &&
             (pIVar7 = MappingHelper_ActionsInCategory_mC66639760FEC669B2B1CA03DE82C87649DD43464
                                 (pMVar6,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                                  (MethodInfo *)0x0), pIVar7 != (Il2CppObject *)0x0)) {
            local_24 = (Il2CppObject *)
                       InterfaceFuncInvoker0<int>::Invoke
                                 (0,
                                  IEnumerable_1_t30B1CF132C29935077E288332B94617FF4337171_il2cpp_TypeInfo_var
                                  ,pIVar7);
            local_8 = CONCAT31(local_8._1_3_,1);
            local_1c = local_24;
            do {
              while( true ) {
                if (local_1c == (Il2CppObject *)0x0) goto LAB_104216b5;
                iVar8 = InterfaceFuncInvoker0<int>::Invoke
                                  (0,
                                   IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                                   ,local_1c);
                if ((char)iVar8 == '\0') goto LAB_104215d2;
                pIVar9 = (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)
                         InterfaceFuncInvoker0<int>::Invoke
                                   (0,
                                    IEnumerator_1_t6134A20D2499DC6D27A5860ECCB41D08D19C9FAD_il2cpp_TypeInfo_var
                                    ,local_1c);
                if (pIVar9 == (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)0x0)
                goto LAB_104216b5;
                if (pIVar9->____type_2 != 1) break;
                if ((local_18 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) ||
                   (pIVar9->____name_1 == (String_t *)0x0)) goto LAB_104216b5;
                bVar3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                                  (pIVar9->____name_1,(String_t *)local_18->_padding_,
                                   (MethodInfo *)0x0);
                if (bVar3) {
                  local_18->m_Items[0] = (Il2CppObject *)pIVar9;
                  *(undefined4 *)&local_18->field_0x14 = 1;
                  goto LAB_104215d2;
                }
              }
              pSVar10 = InputAction_get_positiveDescriptiveName_mA742606F52F1DD385F661621EC5CB23B2D03A92D
                                  (pIVar9,(MethodInfo *)0x0);
              if ((local_18 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) ||
                 (pSVar10 == (String_t *)0x0)) goto LAB_104216b5;
              bVar3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                                (pSVar10,(String_t *)local_18->_padding_,(MethodInfo *)0x0);
              if (bVar3) break;
              pSVar10 = InputAction_get_negativeDescriptiveName_mEE74C324DFD2047C5F8A7E31C226F5C99B276F39
                                  (pIVar9,(MethodInfo *)0x0);
              if (pSVar10 == (String_t *)0x0) goto LAB_104216b5;
              bVar3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                                (pSVar10,(String_t *)local_18->_padding_,(MethodInfo *)0x0);
            } while (!bVar3);
            local_18->m_Items[0] = (Il2CppObject *)pIVar9;
            pSVar10 = InputAction_get_positiveDescriptiveName_mA742606F52F1DD385F661621EC5CB23B2D03A92D
                                (pIVar9,(MethodInfo *)0x0);
            pOVar1 = local_18;
            if (pSVar10 != (String_t *)0x0) {
              bVar3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                                (pSVar10,(String_t *)local_18->_padding_,(MethodInfo *)0x0);
              *(uint *)&pOVar1->field_0x14 = !bVar3 + 1;
LAB_104215d2:
              local_8 = local_8 & 0xffffff00;
              FUN_1042160e();
              return;
            }
          }
        }
      }
    }
  }
LAB_104216b5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
