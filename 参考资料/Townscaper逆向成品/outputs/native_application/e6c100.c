// RVA 0xe6c100 | Placemaker.Graphs.Graph$$GetQubeRelation6
// PDB: Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
// Body: [[10e6c100, 10e6c4bb]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 101d9400 Relation6_set_Item_m59C34A71EF0B2CC5C4D5DEE4852A5C68A346243E
// 101d95c0 Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 102fb430 Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10e6c4d0 FUN_10e6c4d0

Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 * __cdecl
Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
          (Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *__return_storage_ptr__,
          Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,uchar param_3,MethodInfo *param_4)

{
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar1;
  undefined1 *puVar2;
  byte bVar3;
  bool bVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  int iVar6;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  int iVar9;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar10;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *pRVar11;
  Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC RVar12;
  undefined4 uVar13;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 local_64;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 local_34;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_28;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffff90;
  if (DAT_1152282b == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0D1BFE833605BE975F90287A441EDE2DEA211939);
    DAT_1152282b = '\x01';
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_15 = 0;
  memset((uchar *)__return_storage_ptr__,'\0',0x30);
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
             (MethodInfo *)_stringLiteral0D1BFE833605BE975F90287A441EDE2DEA211939);
  local_8 = 0;
  memset((uchar *)&local_64,'\0',0x30);
  if ((param_2 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
     (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0),
     pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
LAB_10e6c4fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar6 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                    (pTVar5,(MethodInfo *)0x0);
  local_1c = iVar6;
  pTVar5 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B(pTVar5,(MethodInfo *)0x0);
  local_28 = pTVar5;
  if ((param_3 & 0xf) == 0) {
    if ((Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var);
    }
    local_64.___r0_0.___qube_0 =
         *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
          Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->static_fields;
    local_64.___r0_0._4_4_ =
         *(undefined4 *)
          ((int)Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->
                static_fields + 4);
    local_64.___r1_1.___qube_0 = local_64.___r0_0.___qube_0;
    local_64.___r1_1._4_4_ = local_64.___r0_0._4_4_;
    local_64.___r2_2.___qube_0 = local_64.___r0_0.___qube_0;
    local_64.___r2_2._4_4_ = local_64.___r0_0._4_4_;
    local_64.___r3_3.___qube_0 = local_64.___r0_0.___qube_0;
    local_64.___r3_3._4_4_ = local_64.___r0_0._4_4_;
  }
  else {
    if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e6c4fc;
    local_24 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                          Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
                         );
    for (bVar3 = 0; pTVar5 = local_28, iVar6 = local_1c, (char)bVar3 < '\x04'; bVar3 = bVar3 + 1) {
      if ((param_3 & (byte)(1 << (bVar3 & 0x1f))) == 0) {
LAB_10e6c310:
        if ((Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var);
        }
        uVar13 = *(undefined4 *)
                  ((int)Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->
                        static_fields + 4);
        pQVar10 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                   Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->
                   static_fields;
      }
      else {
        if (local_24 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) goto LAB_10e6c4fc;
        RVar12 = Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
                           (local_24,bVar3,(MethodInfo *)0x0);
        pSVar7 = RVar12.___square_0;
        local_20 = CONCAT31(RVar12.___square_0._1_3_,RVar12.___indexInOther_1);
        if (RVar12.___indexInOther_1 == -1) goto LAB_10e6c310;
        if ((pSVar7 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) ||
           (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar7,
                                (MethodInfo *)0x0),
           pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10e6c4fc;
        iVar6 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                          (pTVar5,(MethodInfo *)0x0);
        if (iVar6 <= local_1c) goto LAB_10e6c310;
        pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar7,
                            (MethodInfo *)0x0);
        if ((pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                               (pTVar5,local_1c,(MethodInfo *)0x0),
           pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10e6c4fc;
        pQVar10 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                             Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                            );
        local_34.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
        local_34.___indexInOther_1 = '\0';
        local_34._5_3_ = 0;
        Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
                  (&local_34,pQVar10,(schar)local_20,(MethodInfo *)0x0);
        pQVar10 = local_34.___qube_0;
        uVar13 = local_34._4_4_;
      }
      RVar1.___indexInOther_1 = (schar)uVar13;
      RVar1._5_3_ = SUB43(uVar13,1);
      RVar1.___qube_0 = pQVar10;
      Relation6_set_Item_m59C34A71EF0B2CC5C4D5DEE4852A5C68A346243E
                (&local_64,(int)(char)bVar3,RVar1,(MethodInfo *)0x0);
    }
  }
  bVar4 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70(param_3,4,(MethodInfo *)0x0);
  if ((bVar4) && (0 < iVar6)) {
    if ((pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
       (pTVar8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pTVar5,iVar6 + -1,(MethodInfo *)0x0),
       pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10e6c4fc;
    pQVar10 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar8,
                         Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                        );
    local_34.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
    local_34.___indexInOther_1 = '\0';
    local_34._5_3_ = 0;
    Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
              (&local_34,pQVar10,'\x05',(MethodInfo *)0x0);
    local_64.___r4_4.___qube_0 = local_34.___qube_0;
    local_64.___r4_4._4_4_ = local_34._4_4_;
  }
  else {
    if ((Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var);
    }
    local_64.___r4_4.___qube_0 =
         *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
          Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->static_fields;
    local_64.___r4_4._4_4_ =
         *(undefined4 *)
          ((int)Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->
                static_fields + 4);
  }
  bVar4 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70(param_3,5,(MethodInfo *)0x0);
  if (bVar4) {
    if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e6c4fc;
    iVar9 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar5,(MethodInfo *)0x0);
    if (iVar6 < iVar9 + -1) {
      pTVar5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (pTVar5,iVar6 + 1,(MethodInfo *)0x0);
      if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e6c4fc;
      pQVar10 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                           Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                          );
      local_34.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
      local_34.___indexInOther_1 = '\0';
      local_34._5_3_ = 0;
      Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
                (&local_34,pQVar10,'\x04',(MethodInfo *)0x0);
      local_64.___r5_5.___qube_0 = local_34.___qube_0;
      local_64.___r5_5._4_4_ = local_34._4_4_;
      goto LAB_10e6c49b;
    }
  }
  if ((Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var);
  }
  local_64.___r5_5.___qube_0 =
       *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
        Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->static_fields;
  local_64.___r5_5._4_4_ =
       *(undefined4 *)
        ((int)Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->static_fields
        + 4);
LAB_10e6c49b:
  (__return_storage_ptr__->___r0_0).___qube_0 = local_64.___r0_0.___qube_0;
  (__return_storage_ptr__->___r0_0).___indexInOther_1 = local_64.___r0_0.___indexInOther_1;
  *(undefined3 *)&(__return_storage_ptr__->___r0_0).field_0x5 = local_64.___r0_0._5_3_;
  (__return_storage_ptr__->___r1_1).___qube_0 = local_64.___r1_1.___qube_0;
  (__return_storage_ptr__->___r1_1).___indexInOther_1 = local_64.___r1_1.___indexInOther_1;
  *(undefined3 *)&(__return_storage_ptr__->___r1_1).field_0x5 = local_64.___r1_1._5_3_;
  (__return_storage_ptr__->___r2_2).___qube_0 = local_64.___r2_2.___qube_0;
  (__return_storage_ptr__->___r2_2).___indexInOther_1 = local_64.___r2_2.___indexInOther_1;
  *(undefined3 *)&(__return_storage_ptr__->___r2_2).field_0x5 = local_64.___r2_2._5_3_;
  (__return_storage_ptr__->___r3_3).___qube_0 = local_64.___r3_3.___qube_0;
  (__return_storage_ptr__->___r3_3).___indexInOther_1 = local_64.___r3_3.___indexInOther_1;
  *(undefined3 *)&(__return_storage_ptr__->___r3_3).field_0x5 = local_64.___r3_3._5_3_;
  (__return_storage_ptr__->___r4_4).___qube_0 = local_64.___r4_4.___qube_0;
  (__return_storage_ptr__->___r4_4).___indexInOther_1 = local_64.___r4_4.___indexInOther_1;
  *(undefined3 *)&(__return_storage_ptr__->___r4_4).field_0x5 = local_64.___r4_4._5_3_;
  (__return_storage_ptr__->___r5_5).___qube_0 = local_64.___r5_5.___qube_0;
  (__return_storage_ptr__->___r5_5).___indexInOther_1 = local_64.___r5_5.___indexInOther_1;
  *(int3 *)&(__return_storage_ptr__->___r5_5).field_0x5 = local_64.___r5_5._5_3_;
  pRVar11 = (Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)FUN_10e6c4d0();
  return pRVar11;
}
