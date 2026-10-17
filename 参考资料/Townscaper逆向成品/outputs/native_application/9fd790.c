// RVA 0x9fd790 | Placemaker.SaveCardsHandler$$SortActiveCards
// PDB: SaveCardsHandler_SortActiveCards_m2E92A3B4E42D885FFAF675CCBDB7F26B6A40BD74
// Body: [[109fd790, 109fd892] [109fd896, 109fda36]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d21d0 List_1_Sort_m42CAA2F2C4D038952F9E1F3EEEDDAECE8E045358_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066ef80 Transform_SetAsFirstSibling_mD5C02831BA6C7C3408CD491191EAF760ECB7E754
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 110352e0 List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
// 11036bc0 List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared

void __cdecl
SaveCardsHandler_SortActiveCards_m2E92A3B4E42D885FFAF675CCBDB7F26B6A40BD74
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar1;
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar2;
  SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *pSVar3;
  bool bVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  String_t *pSVar6;
  String_t *pSVar7;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar8;
  int iVar9;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar10;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar11;
  uint uVar12;
  int iVar13;

  pSVar3 = param_1;
  if (DAT_1152018a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_m273515C064F8244724F393FEA5E5A7BF4D239668_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_mCD0DCFD89974998FDD6119DE5D69623412970F0B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Sort_m5CE7803DDB1EE13280FD8BB675253602681E3D65_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1152018a = '\x01';
  }
  if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___activeCards_8 !=
      (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
    List_1_Sort_m42CAA2F2C4D038952F9E1F3EEEDDAECE8E045358_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___activeCards_8,
               List_1_Sort_m5CE7803DDB1EE13280FD8BB675253602681E3D65_RuntimeMethod_var);
    pSVar1 = param_1->___lastSaveCard_15;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar1,(MethodInfo *)0x0)
    ;
    if (bVar4) {
      if ((param_1->___lastSaveCard_15 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
         && (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___lastSaveCard_15,(MethodInfo *)0x0),
            pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        Transform_SetAsFirstSibling_mD5C02831BA6C7C3408CD491191EAF760ECB7E754
                  (pTVar5,(MethodInfo *)0x0);
        pLVar11 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)param_1->___activeCards_8;
        uVar12 = 0;
        if (pLVar11 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) {
          param_1 = (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)0x10;
          do {
            if (pLVar11->____size_2 <= (int)uVar12) goto LAB_109fd943;
            if (pLVar11 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) break;
            if ((uint)pLVar11->____size_2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pOVar10 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)
                       ((int)pLVar11->____items_1->m_Items +
                       (int)&param_1[-1].___currentCardIndex_13);
            if (pOVar10 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) break;
            pSVar6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                               (pOVar10,(MethodInfo *)0x0);
            if (pSVar3->___lastSaveCard_15 ==
                (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) break;
            pSVar7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                               ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                pSVar3->___lastSaveCard_15,(MethodInfo *)0x0);
            bVar4 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                              (pSVar6,pSVar7,(MethodInfo *)0x0);
            pLVar11 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)pSVar3->___activeCards_8;
            if (bVar4) {
              if (pLVar11 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) {
                OVar8 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                        List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                  (pLVar11,uVar12,
                                   List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var
                                  );
                if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pSVar3->___activeCards_8 !=
                    (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
                  List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                            ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                             pSVar3->___activeCards_8,uVar12,
                             List_1_RemoveAt_mCD0DCFD89974998FDD6119DE5D69623412970F0B_RuntimeMethod_var
                            );
                  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar3->___activeCards_8
                      != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
                    List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
                              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                               pSVar3->___activeCards_8,0,OVar8,
                               List_1_Insert_m273515C064F8244724F393FEA5E5A7BF4D239668_RuntimeMethod_var
                              );
                    goto LAB_109fd943;
                  }
                }
              }
              break;
            }
            param_1 = (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)
                      &param_1->_padding_;
            uVar12 = uVar12 + 1;
          } while (pLVar11 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0);
        }
      }
    }
    else {
LAB_109fd943:
      pLVar2 = pSVar3->___activeCards_8;
      param_1 = (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)0x0;
      while (pLVar2 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
        if (pLVar2->____size_2 <= (int)param_1) {
          return;
        }
        iVar13 = 0;
        while( true ) {
          if (pSVar3->___cardsRoot_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_109fda32;
          iVar9 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                            (pSVar3->___cardsRoot_6,(MethodInfo *)0x0);
          if (iVar9 <= iVar13) goto LAB_109fda1b;
          if (((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)pSVar3->___activeCards_8 ==
               (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
             (pOVar10 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                        List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                  ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                                   pSVar3->___activeCards_8,(int)param_1,
                                   List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var
                                  ),
             pOVar10 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)) goto LAB_109fda32;
          pSVar6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                             (pOVar10,(MethodInfo *)0x0);
          if ((pSVar3->___cardsRoot_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
             || (pOVar10 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                           Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                     (pSVar3->___cardsRoot_6,iVar13,(MethodInfo *)0x0),
                pOVar10 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0))
          goto LAB_109fda32;
          pSVar7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                             (pOVar10,(MethodInfo *)0x0);
          bVar4 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                            (pSVar6,pSVar7,(MethodInfo *)0x0);
          if (bVar4) break;
          iVar13 = iVar13 + 1;
        }
        if (((pSVar3->___cardsRoot_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            || (pTVar5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                   (pSVar3->___cardsRoot_6,iVar13,(MethodInfo *)0x0),
               pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
           (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                                (MethodInfo *)0x0),
           pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
        Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                  (pTVar5,(int)param_1,(MethodInfo *)0x0);
LAB_109fda1b:
        param_1 = (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)
                  ((int)&param_1->_padding_ + 1);
        pLVar2 = pSVar3->___activeCards_8;
      }
    }
  }
LAB_109fda32:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
