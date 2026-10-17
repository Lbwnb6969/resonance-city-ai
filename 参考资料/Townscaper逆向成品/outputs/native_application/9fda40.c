// RVA 0x9fda40 | Placemaker.SaveCardsHandler$$UpdateCardLastWriteTime
// PDB: SaveCardsHandler_UpdateCardLastWriteTime_m0E8A69BD66B3F450781465C806831D8F63401032
// Body: [[109fda40, 109fdabc] [109fdac0, 109fdb73]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B

void __cdecl
SaveCardsHandler_UpdateCardLastWriteTime_m0E8A69BD66B3F450781465C806831D8F63401032
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,String_t *param_2,
          long64 param_3,MethodInfo *param_4)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  bool bVar2;
  String_t *pSVar3;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar4;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar5;
  int iVar6;
  uint uVar7;

  if (DAT_1152018f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655);
    DAT_1152018f = '\x01';
  }
  pLVar5 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)param_1->___activeCards_8;
  uVar7 = 0;
  if (pLVar5 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) {
    iVar6 = 0x10;
    do {
      if (pLVar5->____size_2 <= (int)uVar7) {
        pSVar3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                           (param_2,_stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655,
                            (MethodInfo *)0x0);
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                  ((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
        return;
      }
      if (pLVar5 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) break;
      if ((uint)pLVar5->____size_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pOVar1 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)
                ((int)pLVar5->____items_1->m_Items + iVar6 + -0x10);
      if (pOVar1 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) break;
      pSVar3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(pOVar1,(MethodInfo *)0x0);
      bVar2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                        (pSVar3,param_2,(MethodInfo *)0x0);
      pLVar5 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)param_1->___activeCards_8;
      if (bVar2) {
        if (((pLVar5 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) &&
            (pGVar4 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                (pLVar5,uVar7,
                                 List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var
                                ),
            pGVar4 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) &&
           (*(int *)&pGVar4[2].field_0x4 != 0)) {
          *(long64 *)(*(int *)&pGVar4[2].field_0x4 + 0x10) = param_3;
          return;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (pLVar5 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
