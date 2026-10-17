// RVA 0xa01570 | Placemaker.SaveSystem$$GetNewMetaSave
// PDB: SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
// Body: [[10a01570, 10a0177c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 103261e0 UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared
// 103d5ac0 MetaSave_ResetPooledObject_m9CBD905D8BC8EDAE129C511D9E3292CA19B716A6
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066c450 Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a00fa0 SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10c789f0 Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
// 10eda250 Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A
// 10f03e90 String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE

MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB * __cdecl
SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,int param_2,
          String_t *param_3,MethodInfo *param_4)

{
  bool bVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  int iVar3;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar4;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar5;
  String_t *pSVar6;

  if (DAT_115201a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_m3B4BA8CB326CCFD023F17913E1E9EC72F9BB5660_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral996C963F173C87BB8D89913B87082558702DF114);
    DAT_115201a8 = '\x01';
  }
  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___metaSavePool_8 !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___metaSavePool_8,(MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (pTVar2,(MethodInfo *)0x0);
      pTVar2 = param_1->___metaSavePool_8;
      if (iVar3 == 1) {
        if (pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10a01778;
        pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pTVar2,0,(MethodInfo *)0x0);
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        pTVar2 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                 Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                           ((Il2CppObject *)pTVar2,
                            Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var
                           );
        if (pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10a01778;
        pMVar4 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                            Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
                           );
        pTVar5 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
                 il2cpp_codegen_object_new
                           (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)
        ;
        Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4
                  (pTVar5,0x200,0x200,(MethodInfo *)0x0);
        if (pMVar4 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) goto LAB_10a01778;
        pMVar4->___texture_7 = pTVar5;
        if ((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)param_1->___onNewMetaSave_16
            == (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)0x0) goto LAB_10a01778;
        UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared
                  ((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)
                   param_1->___onNewMetaSave_16,(Il2CppObject *)pMVar4,
                   Action_1_Invoke_m3B4BA8CB326CCFD023F17913E1E9EC72F9BB5660_RuntimeMethod_var);
      }
      else {
        if (pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10a01778;
        pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pTVar2,iVar3 + -1,(MethodInfo *)0x0);
        if (pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10a01778;
        pMVar4 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                            Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
                           );
        if (pMVar4 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) goto LAB_10a01778;
        MetaSave_ResetPooledObject_m9CBD905D8BC8EDAE129C511D9E3292CA19B716A6
                  (pMVar4,(MethodInfo *)0x0);
      }
      if (param_3 != (String_t *)0x0) {
        bVar1 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE
                          (param_3,_stringLiteral996C963F173C87BB8D89913B87082558702DF114,
                           (MethodInfo *)0x0);
        pMVar4->___isBin_6 = bVar1;
        pMVar4->___path_4 = param_3;
        if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished ==
               0)) {
          il2cpp_runtime_class_init
                    (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
        }
        pSVar6 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A
                           (param_3,(MethodInfo *)0x0);
        pMVar4->___fileName_5 = pSVar6;
        U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                  ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pMVar4,
                   (MethodInfo *)0x0);
        pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                            (MethodInfo *)0x0);
        if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                    (pTVar2,param_1->___metaSaveContainer_9,(MethodInfo *)0x0);
          SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                    (param_1,pMVar4,param_2,(MethodInfo *)0x0);
          return pMVar4;
        }
      }
    }
  }
LAB_10a01778:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
