// RVA 0x9fc520 | Placemaker.SaveCardsHandler$$AddCardToActiveCardsList
// PDB: SaveCardsHandler_AddCardToActiveCardsList_mE3A45B648F8F1C4D01DBB260E1531623B671F7B8
// Body: [[109fc520, 109fc5bc] [109fc5c3, 109fc6b2]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
SaveCardsHandler_AddCardToActiveCardsList_mE3A45B648F8F1C4D01DBB260E1531623B671F7B8
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,
          SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_2,MethodInfo *param_3)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  bool bVar2;
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar3;
  String_t *pSVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;
  uint uVar6;
  int local_8;

  if (DAT_11520188 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mDA16FCC73AF81F0995E3D6275BC8BC2AF5059597_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7D5D3CCA43AE7EC695689C4F09FB82EEEB846C68);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral8C8CD13FA87E816D73FDBFEC04A33379D1012917);
    DAT_11520188 = '\x01';
  }
  pLVar3 = param_1->___activeCards_8;
  uVar6 = 0;
  if (pLVar3 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
    local_8 = 0x10;
    do {
      if (pLVar3->____size_2 <= (int)uVar6) {
        if ((param_2 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
           (pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                (MethodInfo *)0x0),
           pGVar5 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
          GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                    (pGVar5,true,(MethodInfo *)0x0);
          if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___activeCards_8 !=
              (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___activeCards_8
                       ,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                       List_1_Add_mDA16FCC73AF81F0995E3D6275BC8BC2AF5059597_RuntimeMethod_var);
            return;
          }
        }
        break;
      }
      if (pLVar3 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
      if ((uint)pLVar3->____size_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pOVar1 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(pLVar3->____items_1 + local_8)
      ;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                        (pOVar1,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if (param_2 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) {
          pSVar4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                              (MethodInfo *)0x0);
          pSVar4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                             (_stringLiteral7D5D3CCA43AE7EC695689C4F09FB82EEEB846C68,pSVar4,
                              _stringLiteral8C8CD13FA87E816D73FDBFEC04A33379D1012917,
                              (MethodInfo *)0x0);
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                    ((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      local_8 = local_8 + 4;
      pLVar3 = param_1->___activeCards_8;
    } while (pLVar3 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
