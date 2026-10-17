// RVA 0x9fca20 | Placemaker.SaveCardsHandler$$InstantiateNewCard
// PDB: SaveCardsHandler_InstantiateNewCard_mF86E099211F8FC7102B1E5A59C5FCA496AEBB692
// Body: [[109fca20, 109fcb9a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 1066ba70 Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
// 1066c4c0 Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092
// 1066d7d0 Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0
// 1066d860 Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4ac90 Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 * __cdecl
SaveCardsHandler_InstantiateNewCard_mF86E099211F8FC7102B1E5A59C5FCA496AEBB692
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar1;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  int iVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar5;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar6;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_14;

  if (DAT_11520185 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mDA16FCC73AF81F0995E3D6275BC8BC2AF5059597_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m34386CBB9AAEE4B8C71DCD0C6B3DA4662776C25B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB9AC14DB2AA2F05C5327AEE48F597166994B3F5F);
    DAT_11520185 = '\x01';
  }
  pSVar1 = param_1->___srcSaveCard_5;
  pTVar3 = param_1->___cardsRoot_6;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  OVar2 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
          Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                    ((Il2CppObject *)pSVar1,pTVar3,
                     Object_Instantiate_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m34386CBB9AAEE4B8C71DCD0C6B3DA4662776C25B_RuntimeMethod_var
                    );
  if (OVar2 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
    Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781
              ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)OVar2,
               _stringLiteralB9AC14DB2AA2F05C5327AEE48F597166994B3F5F,(MethodInfo *)0x0);
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar2,
                        (MethodInfo *)0x0);
    iVar4 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE(1,2,(MethodInfo *)0x0);
    pQVar5 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                       (&local_14,0.0,0.0,(float)iVar4,(MethodInfo *)0x0);
    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
                (pTVar3,*pQVar5,(MethodInfo *)0x0);
      pTVar6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
               il2cpp_codegen_object_new
                         (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
      Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(pTVar6,2,2,5,true,(MethodInfo *)0x0)
      ;
      *(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF **)((int)OVar2 + 0x10) = pTVar6;
      if (pTVar6 != (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
        Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0
                  ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar6,2,(MethodInfo *)0x0);
        if (*(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE **)((int)OVar2 + 0x10) !=
            (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)0x0) {
          Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D
                    (*(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE **)((int)OVar2 + 0x10),1,
                     (MethodInfo *)0x0);
          if (*(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF **)((int)OVar2 + 0x10) !=
              (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
            Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
                      (*(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF **)((int)OVar2 + 0x10),
                       (MethodInfo *)0x0);
            if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___cardPool_7 !=
                (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___cardPool_7,
                         OVar2,
                         List_1_Add_mDA16FCC73AF81F0995E3D6275BC8BC2AF5059597_RuntimeMethod_var);
              return (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)OVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
