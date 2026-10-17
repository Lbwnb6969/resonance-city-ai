// RVA 0xe6c510 | Placemaker.Graphs.Graph$$GetQubeRelation
// PDB: Graph_GetQubeRelation_mE4055284B7BCA6825F373E0602C40D9FF4C4F8FB
// Body: [[10e6c510, 10e6c75b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d95c0 Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 102fb430 Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10e6c776 FUN_10e6c776

Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 __cdecl
Graph_GetQubeRelation_mE4055284B7BCA6825F373E0602C40D9FF4C4F8FB
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,schar param_3,MethodInfo *param_4)

{
  undefined1 *puVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  int iVar4;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar5;
  int iVar6;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar7;
  char cVar8;
  Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC RVar9;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar10;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 local_28;
  undefined4 local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__Graph_GetQubeRelation_mE4055284B7BCA6825F373E0602C40D9FF4C4F8FB;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffc4;
  if (DAT_1152282c == '\0') {
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
              ((uint *)&_stringLiteralCBE2E1E2EDD7889E6F607C7D4C320D6A4BB40B7F);
    DAT_1152282c = '\x01';
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_15 = 0;
  local_1c = 0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
             (MethodInfo *)_stringLiteralCBE2E1E2EDD7889E6F607C7D4C320D6A4BB40B7F);
  local_8 = 0;
  if (param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pTVar2 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                         (pTVar2,(MethodInfo *)0x0);
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        iVar4 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                          (pTVar3,(MethodInfo *)0x0);
        if (param_3 == '\x04') {
          if (iVar4 < 1) goto LAB_10e6c6ce;
          if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                               (pTVar2,iVar4 + -1,(MethodInfo *)0x0);
            if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              pQVar7 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                       Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                                  Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                 );
              cVar8 = '\x05';
LAB_10e6c696:
              local_28.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
              local_28.___indexInOther_1 = '\0';
              local_28._5_3_ = 0;
              Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
                        (&local_28,pQVar7,cVar8,(MethodInfo *)0x0);
              RVar10 = (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3)FUN_10e6c776();
              return RVar10;
            }
          }
        }
        else if (param_3 == '\x05') {
          if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            iVar6 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                              (pTVar2,(MethodInfo *)0x0);
            if (iVar6 + -1 <= iVar4) goto LAB_10e6c6ce;
            pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                               (pTVar2,iVar4 + 1,(MethodInfo *)0x0);
            if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              pQVar7 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                       Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                                  Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                 );
              cVar8 = '\x04';
              goto LAB_10e6c696;
            }
          }
        }
        else if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pSVar5 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                              Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
                             );
          if (pSVar5 != (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) {
            RVar9 = Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
                              (pSVar5,param_3,(MethodInfo *)0x0);
            pSVar5 = RVar9.___square_0;
            cVar8 = RVar9.___indexInOther_1;
            if (cVar8 == -1) {
LAB_10e6c6ce:
              if ((Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3_il2cpp_TypeInfo_var);
              }
              RVar10 = (Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3)FUN_10e6c776();
              return RVar10;
            }
            if (pSVar5 != (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) {
              pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar5,
                                  (MethodInfo *)0x0);
              if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                iVar6 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                  (pTVar2,(MethodInfo *)0x0);
                if (iVar6 <= iVar4) goto LAB_10e6c6ce;
                pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar5,
                                    (MethodInfo *)0x0);
                if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                     (pTVar2,iVar4,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    pQVar7 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                             Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        pTVar2,
                                        Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                       );
                    goto LAB_10e6c696;
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
