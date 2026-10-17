// RVA 0xe73610 | Placemaker.Graphs.Graph$$PaintVoxel
// PDB: Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
// Body: [[10e73610, 10e7372a] [10e7372e, 10e738e9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e738f0 Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349

void __cdecl
Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,schar param_3,
          Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_4,MethodInfo *param_5)

{
  uchar uVar1;
  int iVar2;
  List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *pLVar3;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar4;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar5;
  bool bVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar8;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar9;
  int local_10;
  uint local_c;

  if (DAT_1152283d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1152283d = '\x01';
  }
  if (param_2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
    if (param_2->___height_5 != '\0') {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_4,
                         (MethodInfo *)0x0);
      if (!bVar6) {
        pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                            (MethodInfo *)0x0);
        if ((pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar7 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                               (pTVar7,(MethodInfo *)0x0),
           pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10e738e5;
        param_4 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                             Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                            );
      }
      param_2->___type_4 = param_3;
      local_c = 0;
      if ((param_4 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
         (param_4->___squares_5 == (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0))
      goto LAB_10e738e5;
      iVar2 = param_4->___squares_5->____size_2;
      if (0 < iVar2) {
        local_10 = 0x10;
        do {
          pLVar3 = param_4->___squares_5;
          if (pLVar3 == (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) goto LAB_10e738e5;
          if ((uint)pLVar3->____size_2 <= local_c) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pCVar4 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                    (pLVar3->____items_1 + local_10);
          if (((pCVar4 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
              (pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  (pCVar4,(MethodInfo *)0x0),
              pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
             (pTVar7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                 (pTVar7,param_2->___height_5 + 1,(MethodInfo *)0x0),
             pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_10e738e5;
          pQVar8 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                              Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                             );
          pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             (pCVar4,(MethodInfo *)0x0);
          if ((pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
             (pTVar7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                 (pTVar7,(uint)param_2->___height_5,(MethodInfo *)0x0),
             pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_10e738e5;
          pQVar9 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                              Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                             );
          uVar1 = param_2->___type_4;
          pOVar5 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)&pCVar4[3].field_0x8;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                            (pOVar5,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_4,
                             (MethodInfo *)0x0);
          if (bVar6) {
            if ((pQVar8 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
               (pQVar9 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) goto LAB_10e738e5;
            (pQVar9->___cornerValues_13).___v4_4 = uVar1;
            (pQVar8->___cornerValues_13).___v0_0 = uVar1;
          }
          else {
            pOVar5 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(pCVar4 + 4);
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                              (pOVar5,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_4,
                               (MethodInfo *)0x0);
            if (bVar6) {
              if ((pQVar8 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
                 (pQVar9 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0))
              goto LAB_10e738e5;
              (pQVar9->___cornerValues_13).___v5_5 = uVar1;
              (pQVar8->___cornerValues_13).___v1_1 = uVar1;
            }
            else {
              pOVar5 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)&pCVar4[4].field_0x4;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                (pOVar5,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_4,
                                 (MethodInfo *)0x0);
              if (pQVar8 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
              goto LAB_10e738e5;
              if (bVar6) {
                if (pQVar9 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                goto LAB_10e738e5;
                (pQVar9->___cornerValues_13).___v6_6 = uVar1;
                (pQVar8->___cornerValues_13).___v2_2 = uVar1;
              }
              else {
                if (pQVar9 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                goto LAB_10e738e5;
                (pQVar9->___cornerValues_13).___v7_7 = uVar1;
                (pQVar8->___cornerValues_13).___v3_3 = uVar1;
              }
            }
          }
          Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
                    (param_1,pQVar8,(MethodInfo *)0x0);
          Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
                    (param_1,pQVar9,(MethodInfo *)0x0);
          local_c = local_c + 1;
          local_10 = local_10 + 4;
        } while ((int)local_c < iVar2);
      }
    }
    return;
  }
LAB_10e738e5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
