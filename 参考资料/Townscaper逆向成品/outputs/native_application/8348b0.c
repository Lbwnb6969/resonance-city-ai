// RVA 0x8348b0 | ExampleDebugMenu$$Start
// PDB: ExampleDebugMenu_Start_mF5A78992F8BFDAD7C4282E7F294BFBEFDC3A72D9
// Body: [[108348b0, 1083511b]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 110cde60 DebugMenu_AddButton_mC1B2639FE99BA2FF1A866903CE36FB4905B08D58
// 110cdef0 DebugMenu_AddLabel_m7739BA82999750A490B59736D85327CB2D5B4F9F
// 110cdf70 DebugMenu_AddLabel_mEBE6C480710EFA2ED22A0E9EE19C6A0388DB6659
// 110ce050 DebugMenu_AddTextField_m8E2197EF15309C974BA25436B9A88D0609EC89C2
// 110cef00 DebugMenu__ctor_m08666F73635860942CC30BB78305B01143714FB4

void __cdecl
ExampleDebugMenu_Start_mF5A78992F8BFDAD7C4282E7F294BFBEFDC3A72D9
          (ExampleDebugMenu_tB62BE34AE5F1DD2D6B60E8E7896134AAF6658992 *param_1,MethodInfo *param_2)

{
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar1;
  DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *pDVar2;
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar3;
  Il2CppObject *pIVar4;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar5;
  TextFieldEntry_t2B2A6465BC2D58FC8FC8864FD18870251E06E7C6 *pTVar6;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar7;
  Exception_t *pEVar8;
  MethodInfo *pMVar9;

  if (DAT_1151f3a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3CStartU3Eb__2_0_mC0C2C9CB19025C973B398B4120186C8B80074600_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass2_0_U3CStartU3Eb__1_m993924E0829ACDF6C1A100BE2E7EEB3C70904CFC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass2_0_t52A4BE6124F61B33BFCC8C488C8FF3F3637100EB_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral54387A770DDA13FB7D1C48FFA383F368A1165DCF);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral638F8850FC852663460166AF03AE201E87420B86);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral68578E67D16A89350E70DE9A573A0C588F5A0083);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral73FB09DE209F6D8E08ADA99D3E79F949E2EC7A98);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD022821CCC942F161E496B5F0F4FCF3CB5191B46);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD999C15961E364746AD7ED275769D73DA5AD2EC9);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF13754031B95C540A718271CFCAFF58D9ACEF386);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF1DCFC9AD7AB64C716C1CE8B7E2DD4A573A43F60);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF8F794CCE4C7CD1555F11A401B659F7A1C445DA0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A);
    DAT_1151f3a9 = '\x01';
  }
  pBVar1 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass2_0_t52A4BE6124F61B33BFCC8C488C8FF3F3637100EB_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar1,(MethodInfo *)0x0);
  pDVar2 = (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)
           il2cpp_codegen_object_new
                     (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573_il2cpp_TypeInfo_var);
  DebugMenu__ctor_m08666F73635860942CC30BB78305B01143714FB4
            (pDVar2,_stringLiteralF13754031B95C540A718271CFCAFF58D9ACEF386,(MethodInfo *)0x0);
  param_1->___menu_5 = pDVar2;
  pSVar3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
           il2cpp_array_new_specific
                     (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var,3);
  if (pSVar3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
    if ((_stringLiteralF8F794CCE4C7CD1555F11A401B659F7A1C445DA0 != (String_t *)0x0) &&
       (pIVar4 = IsInst((Il2CppObject *)_stringLiteralF8F794CCE4C7CD1555F11A401B659F7A1C445DA0,
                        *(Il2CppClass **)(pSVar3->_padding_ + 0x20)), pIVar4 == (Il2CppObject *)0x0)
       ) {
      pMVar9 = (MethodInfo *)0x0;
      pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar8,pMVar9);
    }
    if (pSVar3->_padding_ == 0) {
      pMVar9 = (MethodInfo *)0x0;
      pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar8,pMVar9);
    }
    pSVar3->m_Items[0] = _stringLiteralF8F794CCE4C7CD1555F11A401B659F7A1C445DA0;
    if ((_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A != (String_t *)0x0) &&
       (pIVar4 = IsInst((Il2CppObject *)_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A,
                        *(Il2CppClass **)(pSVar3->_padding_ + 0x20)), pIVar4 == (Il2CppObject *)0x0)
       ) {
      pMVar9 = (MethodInfo *)0x0;
      pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar8,pMVar9);
    }
    if ((uint)pSVar3->_padding_ < 2) {
      pMVar9 = (MethodInfo *)0x0;
      pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar8,pMVar9);
    }
    *(String_t **)&pSVar3->field_0x14 = _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
    if ((_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE != (String_t *)0x0) &&
       (pIVar4 = IsInst((Il2CppObject *)_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE,
                        *(Il2CppClass **)(pSVar3->_padding_ + 0x20)), pIVar4 == (Il2CppObject *)0x0)
       ) {
      pMVar9 = (MethodInfo *)0x0;
      pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar8,pMVar9);
    }
    if ((uint)pSVar3->_padding_ < 3) {
      pMVar9 = (MethodInfo *)0x0;
      pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar8,pMVar9);
    }
    pSVar3[1]._padding_ = (int)_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE;
    if (pDVar2 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
      DebugMenu_AddLabel_m7739BA82999750A490B59736D85327CB2D5B4F9F(pDVar2,pSVar3,(MethodInfo *)0x0);
      pDVar2 = param_1->___menu_5;
      pSVar3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
               il2cpp_array_new_specific
                         (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var
                          ,3);
      if (pSVar3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
        if ((_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6 != (String_t *)0x0) &&
           (pIVar4 = IsInst((Il2CppObject *)_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6,
                            *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
           pIVar4 == (Il2CppObject *)0x0)) {
          pMVar9 = (MethodInfo *)0x0;
          pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar8,pMVar9);
        }
        if (pSVar3->_padding_ == 0) {
          pMVar9 = (MethodInfo *)0x0;
          pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar8,pMVar9);
        }
        pSVar3->m_Items[0] = _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
        if ((_stringLiteralD999C15961E364746AD7ED275769D73DA5AD2EC9 != (String_t *)0x0) &&
           (pIVar4 = IsInst((Il2CppObject *)_stringLiteralD999C15961E364746AD7ED275769D73DA5AD2EC9,
                            *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
           pIVar4 == (Il2CppObject *)0x0)) {
          pMVar9 = (MethodInfo *)0x0;
          pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar8,pMVar9);
        }
        if ((uint)pSVar3->_padding_ < 2) {
          pMVar9 = (MethodInfo *)0x0;
          pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar8,pMVar9);
        }
        *(String_t **)&pSVar3->field_0x14 = _stringLiteralD999C15961E364746AD7ED275769D73DA5AD2EC9;
        if ((_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE != (String_t *)0x0) &&
           (pIVar4 = IsInst((Il2CppObject *)_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE,
                            *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
           pIVar4 == (Il2CppObject *)0x0)) {
          pMVar9 = (MethodInfo *)0x0;
          pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar8,pMVar9);
        }
        if ((uint)pSVar3->_padding_ < 3) {
          pMVar9 = (MethodInfo *)0x0;
          pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar8,pMVar9);
        }
        pSVar3[1]._padding_ = (int)_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE;
        if (pDVar2 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
          DebugMenu_AddLabel_m7739BA82999750A490B59736D85327CB2D5B4F9F
                    (pDVar2,pSVar3,(MethodInfo *)0x0);
          pDVar2 = param_1->___menu_5;
          pSVar3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
                   il2cpp_array_new_specific
                             (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var
                              ,3);
          if (pSVar3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
            if ((_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6 != (String_t *)0x0) &&
               (pIVar4 = IsInst((Il2CppObject *)
                                _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6,
                                *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
               pIVar4 == (Il2CppObject *)0x0)) {
              pMVar9 = (MethodInfo *)0x0;
              pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar8,pMVar9);
            }
            if (pSVar3->_padding_ == 0) {
              pMVar9 = (MethodInfo *)0x0;
              pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar8,pMVar9);
            }
            pSVar3->m_Items[0] = _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
            if ((_stringLiteralD022821CCC942F161E496B5F0F4FCF3CB5191B46 != (String_t *)0x0) &&
               (pIVar4 = IsInst((Il2CppObject *)
                                _stringLiteralD022821CCC942F161E496B5F0F4FCF3CB5191B46,
                                *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
               pIVar4 == (Il2CppObject *)0x0)) {
              pMVar9 = (MethodInfo *)0x0;
              pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar8,pMVar9);
            }
            if ((uint)pSVar3->_padding_ < 2) {
              pMVar9 = (MethodInfo *)0x0;
              pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar8,pMVar9);
            }
            *(String_t **)&pSVar3->field_0x14 =
                 _stringLiteralD022821CCC942F161E496B5F0F4FCF3CB5191B46;
            if ((_stringLiteral68578E67D16A89350E70DE9A573A0C588F5A0083 != (String_t *)0x0) &&
               (pIVar4 = IsInst((Il2CppObject *)
                                _stringLiteral68578E67D16A89350E70DE9A573A0C588F5A0083,
                                *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
               pIVar4 == (Il2CppObject *)0x0)) {
              pMVar9 = (MethodInfo *)0x0;
              pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar8,pMVar9);
            }
            if ((uint)pSVar3->_padding_ < 3) {
              pMVar9 = (MethodInfo *)0x0;
              pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar8,pMVar9);
            }
            pSVar3[1]._padding_ = (int)_stringLiteral68578E67D16A89350E70DE9A573A0C588F5A0083;
            if (pDVar2 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
              DebugMenu_AddLabel_m7739BA82999750A490B59736D85327CB2D5B4F9F
                        (pDVar2,pSVar3,(MethodInfo *)0x0);
              if (param_1->___menu_5 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0)
              {
                DebugMenu_AddLabel_mEBE6C480710EFA2ED22A0E9EE19C6A0388DB6659
                          (param_1->___menu_5,_stringLiteral54387A770DDA13FB7D1C48FFA383F368A1165DCF
                           ,(MethodInfo *)0x0);
                pDVar2 = param_1->___menu_5;
                if ((U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var);
                }
                pAVar5 = *(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)
                          ((int)U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var
                                ->static_fields + 4);
                if (pAVar5 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
                  if ((U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var
                              );
                  }
                  pIVar4 = *(Il2CppObject **)
                            U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var->
                            static_fields;
                  pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                           il2cpp_codegen_object_new
                                     (
                                     Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                     );
                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                            ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pAVar5,
                             pIVar4,(int)
                                    U3CU3Ec_U3CStartU3Eb__2_0_mC0C2C9CB19025C973B398B4120186C8B80074600_RuntimeMethod_var
                             ,(MethodInfo *)0x0);
                  *(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)
                   ((int)U3CU3Ec_t3837373DF69B0B72926C4F30123CCC320EEF4174_il2cpp_TypeInfo_var->
                         static_fields + 4) = pAVar5;
                }
                pSVar3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
                         il2cpp_array_new_specific
                                   (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var
                                    ,3);
                if (pSVar3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
                  if ((_stringLiteralF8F794CCE4C7CD1555F11A401B659F7A1C445DA0 != (String_t *)0x0) &&
                     (pIVar4 = IsInst((Il2CppObject *)
                                      _stringLiteralF8F794CCE4C7CD1555F11A401B659F7A1C445DA0,
                                      *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                     pIVar4 == (Il2CppObject *)0x0)) {
                    pMVar9 = (MethodInfo *)0x0;
                    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                  }
                  if (pSVar3->_padding_ == 0) {
                    pMVar9 = (MethodInfo *)0x0;
                    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                  }
                  pSVar3->m_Items[0] = _stringLiteralF8F794CCE4C7CD1555F11A401B659F7A1C445DA0;
                  if ((_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A != (String_t *)0x0) &&
                     (pIVar4 = IsInst((Il2CppObject *)
                                      _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A,
                                      *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                     pIVar4 == (Il2CppObject *)0x0)) {
                    pMVar9 = (MethodInfo *)0x0;
                    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                  }
                  if ((uint)pSVar3->_padding_ < 2) {
                    pMVar9 = (MethodInfo *)0x0;
                    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                  }
                  *(String_t **)&pSVar3->field_0x14 =
                       _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
                  if ((_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654 != (String_t *)0x0) &&
                     (pIVar4 = IsInst((Il2CppObject *)
                                      _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654,
                                      *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                     pIVar4 == (Il2CppObject *)0x0)) {
                    pMVar9 = (MethodInfo *)0x0;
                    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                  }
                  if ((uint)pSVar3->_padding_ < 3) {
                    pMVar9 = (MethodInfo *)0x0;
                    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                  }
                  pSVar3[1]._padding_ = (int)_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654;
                  if (pDVar2 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
                    DebugMenu_AddButton_mC1B2639FE99BA2FF1A866903CE36FB4905B08D58
                              (pDVar2,pAVar5,pSVar3,(MethodInfo *)0x0);
                    pDVar2 = param_1->___menu_5;
                    pSVar3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
                             il2cpp_array_new_specific
                                       (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var
                                        ,3);
                    if (pSVar3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
                      if ((_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6 != (String_t *)0x0
                          ) && (pIVar4 = IsInst((Il2CppObject *)
                                                _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6
                                                ,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                               pIVar4 == (Il2CppObject *)0x0)) {
                        pMVar9 = (MethodInfo *)0x0;
                        pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                      }
                      if (pSVar3->_padding_ == 0) {
                        pMVar9 = (MethodInfo *)0x0;
                        pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                      }
                      pSVar3->m_Items[0] = _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
                      if ((_stringLiteral638F8850FC852663460166AF03AE201E87420B86 != (String_t *)0x0
                          ) && (pIVar4 = IsInst((Il2CppObject *)
                                                _stringLiteral638F8850FC852663460166AF03AE201E87420B86
                                                ,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                               pIVar4 == (Il2CppObject *)0x0)) {
                        pMVar9 = (MethodInfo *)0x0;
                        pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                      }
                      if ((uint)pSVar3->_padding_ < 2) {
                        pMVar9 = (MethodInfo *)0x0;
                        pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                      }
                      *(String_t **)&pSVar3->field_0x14 =
                           _stringLiteral638F8850FC852663460166AF03AE201E87420B86;
                      if ((_stringLiteral73FB09DE209F6D8E08ADA99D3E79F949E2EC7A98 != (String_t *)0x0
                          ) && (pIVar4 = IsInst((Il2CppObject *)
                                                _stringLiteral73FB09DE209F6D8E08ADA99D3E79F949E2EC7A98
                                                ,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                               pIVar4 == (Il2CppObject *)0x0)) {
                        pMVar9 = (MethodInfo *)0x0;
                        pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                      }
                      if ((uint)pSVar3->_padding_ < 3) {
                        pMVar9 = (MethodInfo *)0x0;
                        pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                      }
                      pSVar3[1]._padding_ =
                           (int)_stringLiteral73FB09DE209F6D8E08ADA99D3E79F949E2EC7A98;
                      if ((pDVar2 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) &&
                         (pTVar6 = DebugMenu_AddTextField_m8E2197EF15309C974BA25436B9A88D0609EC89C2
                                             (pDVar2,
                                              _stringLiteralF1DCFC9AD7AB64C716C1CE8B7E2DD4A573A43F60
                                              ,pSVar3,(MethodInfo *)0x0),
                         pBVar1 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0)) {
                        pBVar1->___name_0 = (String_t *)pTVar6;
                        pDVar2 = param_1->___menu_5;
                        pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                                 il2cpp_codegen_object_new
                                           (
                                           Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                           );
                        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                  (pOVar7,(Il2CppObject *)pBVar1,
                                   (int)
                                   U3CU3Ec__DisplayClass2_0_U3CStartU3Eb__1_m993924E0829ACDF6C1A100BE2E7EEB3C70904CFC_RuntimeMethod_var
                                   ,(MethodInfo *)0x0);
                        pSVar3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
                                 il2cpp_array_new_specific
                                           (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var
                                            ,3);
                        if (pSVar3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0)
                        {
                          if ((_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6 !=
                               (String_t *)0x0) &&
                             (pIVar4 = IsInst((Il2CppObject *)
                                              _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6
                                              ,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                             pIVar4 == (Il2CppObject *)0x0)) {
                            pMVar9 = (MethodInfo *)0x0;
                            pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                          }
                          if (pSVar3->_padding_ == 0) {
                            pMVar9 = (MethodInfo *)0x0;
                            pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                          }
                          pSVar3->m_Items[0] =
                               _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
                          if ((_stringLiteral638F8850FC852663460166AF03AE201E87420B86 !=
                               (String_t *)0x0) &&
                             (pIVar4 = IsInst((Il2CppObject *)
                                              _stringLiteral638F8850FC852663460166AF03AE201E87420B86
                                              ,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                             pIVar4 == (Il2CppObject *)0x0)) {
                            pMVar9 = (MethodInfo *)0x0;
                            pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                          }
                          if ((uint)pSVar3->_padding_ < 2) {
                            pMVar9 = (MethodInfo *)0x0;
                            pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                          }
                          *(String_t **)&pSVar3->field_0x14 =
                               _stringLiteral638F8850FC852663460166AF03AE201E87420B86;
                          if ((_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654 !=
                               (String_t *)0x0) &&
                             (pIVar4 = IsInst((Il2CppObject *)
                                              _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654
                                              ,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
                             pIVar4 == (Il2CppObject *)0x0)) {
                            pMVar9 = (MethodInfo *)0x0;
                            pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                          }
                          if ((uint)pSVar3->_padding_ < 3) {
                            pMVar9 = (MethodInfo *)0x0;
                            pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar8,pMVar9);
                          }
                          pSVar3[1]._padding_ =
                               (int)_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654;
                          if (pDVar2 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0)
                          {
                            DebugMenu_AddButton_mC1B2639FE99BA2FF1A866903CE36FB4905B08D58
                                      (pDVar2,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                                              pOVar7,pSVar3,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
