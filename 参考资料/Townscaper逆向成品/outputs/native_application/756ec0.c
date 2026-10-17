// RVA 0x756ec0 | Placemaker.Props.PropMeshAnimator$$OnTurnedOff
// PDB: PropMeshAnimator_OnTurnedOff_mE098F53DD6B1ADE73CA0EF051CE15CCE0A793A4E
// Body: [[10756ec0, 10756fc6] [10756fca, 107571e6] [107571ea, 1075732b] [10757332, 10757396] [1075739a, 107574a4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4850 WorldMeshes_GetMeshFilterOnly_m2DBCBD6B81FC98FD3C64753E9838DD6A13D99C94
// 101e4e60 WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10665c10 Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
// 10665c40 Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10835fb0 ExtraMath_BinarySearchTransformX_m65E5BEE174A846C04D6CB2BE3D6B485375292F9A
// 10878420 BigMeshMaster_ReturnMesh_m303991D3B4431E7690F92222ACB930C45F40D82B
// 10a36e40 Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10a3de40 GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B
// 10a3df00 GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
PropMeshAnimator_OnTurnedOff_mE098F53DD6B1ADE73CA0EF051CE15CCE0A793A4E
          (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *param_1,
          PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *param_2,MethodInfo *param_3)

{
  List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *pLVar1;
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar2;
  BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *pBVar3;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar4;
  PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *pPVar5;
  bool bVar6;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  uint uVar11;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar12;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *pRVar13;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *pRVar14;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar15;
  int iVar16;
  String_t *pSVar17;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar18;
  uint uVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_24;
  BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *local_18;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_14;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_10;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *local_c;
  int local_8;

  pPVar5 = param_2;
  if (DAT_1151ec2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF39A77403BBF8E0E7ACC6D7E961BD5BFF9318D79_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m56ACEB16EA36A08BAEE3A72FDEC0CFB35DBECBCE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral80905910A78441C04EDCE26C733491EBE4B06012);
    DAT_1151ec2e = '\x01';
  }
  if ((param_2 != (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)0x0) &&
     (param_2->___items_4 != (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0)) {
    iVar16 = param_2->___items_4->____size_2;
    if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
    goto LAB_107574a0;
    if (0x12 < param_1->___master_4->___state_57) {
      pGVar7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pGVar7 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_107574a0;
      bVar6 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B
                        (pGVar7,(MethodInfo *)0x0);
      if (bVar6) {
        uVar19 = iVar16 - 1;
        bVar6 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
                          ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_2,
                           (MethodInfo *)0x0);
        if (!bVar6) {
          if ((int)uVar19 < 0) {
            return;
          }
          local_8 = uVar19 * 4 + 0x10;
          while (pLVar1 = param_2->___items_4,
                pLVar1 != (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) {
            if ((uint)pLVar1->____size_2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_18 = *(BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA **)
                        (pLVar1->____items_1 + local_8);
            if ((local_18 == (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0) ||
               (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               )) break;
            pWVar2 = param_1->___master_4->___worldMeshes_9;
            local_10 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_18->_padding_;
            if ((local_10 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
               ((pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    (local_10,(MethodInfo *)0x0),
                pWVar2 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0 ||
                (local_c = WorldMeshes_GetMeshFilterOnly_m2DBCBD6B81FC98FD3C64753E9838DD6A13D99C94
                                     (pWVar2,pTVar8,(MethodInfo *)0x0),
                local_c == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)))) break;
            pGVar7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_c,
                                (MethodInfo *)0x0);
            if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
            }
            if (pGVar7 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) break;
            GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
                      (pGVar7,*(int *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                            ->static_fields + 0x1c),(MethodInfo *)0x0);
            pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_c,
                                (MethodInfo *)0x0);
            pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                (MethodInfo *)0x0);
            if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
            pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                (&local_24,pTVar8,(MethodInfo *)0x0);
            local_14 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pVVar10->___x_2;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            uVar11 = ExtraMath_BinarySearchTransformX_m65E5BEE174A846C04D6CB2BE3D6B485375292F9A
                               (pTVar9,(float)local_14,0,0,(MethodInfo *)0x0);
            if ((int)uVar11 < 0) {
              uVar11 = ~uVar11;
            }
            pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                (MethodInfo *)0x0);
            Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                      (pTVar8,pTVar9,true,(MethodInfo *)0x0);
            Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                      (pTVar8,uVar11,(MethodInfo *)0x0);
            pMVar12 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                ((MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)local_10,
                                 (MethodInfo *)0x0);
            pMVar18 = local_c;
            MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                      (local_c,pMVar12,(MethodInfo *)0x0);
            pRVar13 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                      Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar18,
                                 Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                                );
            pRVar14 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                      Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                (local_10,
                                 Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                                );
            if ((pRVar14 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0) ||
               (pMVar15 = Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                                    (pRVar14,(MethodInfo *)0x0),
               pRVar13 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)) break;
            Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
                      (pRVar13,pMVar15,(MethodInfo *)0x0);
            if ((param_1->___master_4 ==
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
               (pBVar3 = param_1->___master_4->___bigMeshMaster_36,
               pBVar3 == (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0)) break;
            BigMeshMaster_ReturnMesh_m303991D3B4431E7690F92222ACB930C45F40D82B
                      (pBVar3,(BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *)
                              local_18->___master_4,(MethodInfo *)0x0);
            local_8 = local_8 + -4;
            uVar19 = uVar19 - 1;
            if ((int)uVar19 < 0) {
              return;
            }
          }
          goto LAB_107574a0;
        }
        if (-1 < (int)uVar19) {
          param_2 = (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)
                    (uVar19 * 4 + 0x10);
          while (pLVar1 = pPVar5->___items_4,
                pLVar1 != (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) {
            if ((uint)pLVar1->____size_2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            if (((*(int *)(pLVar1->____items_1 + (int)&param_2->_padding_) == 0) ||
                (pCVar4 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                           (*(int *)(pLVar1->____items_1 + (int)&param_2->_padding_) + 8),
                pCVar4 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) ||
               (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   (pCVar4,(MethodInfo *)0x0),
               pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
            pTVar8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                               (pTVar8,0,(MethodInfo *)0x0);
            local_10 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar8;
            local_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                  (MethodInfo *)0x0);
            if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
            pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                (&local_24,pTVar8,(MethodInfo *)0x0);
            local_18 = (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)pVVar10->___x_2;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            uVar11 = ExtraMath_BinarySearchTransformX_m65E5BEE174A846C04D6CB2BE3D6B485375292F9A
                               (local_14,(float)local_18,0,0,(MethodInfo *)0x0);
            if ((int)uVar11 < 0) {
              uVar11 = ~uVar11;
            }
            pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                (MethodInfo *)0x0);
            Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                      ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_10,pTVar8,true,
                       (MethodInfo *)0x0);
            Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                      ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_10,uVar11,
                       (MethodInfo *)0x0);
            param_2 = (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)
                      &param_2[-1].___time_6;
            uVar19 = uVar19 - 1;
            if ((int)uVar19 < 0) {
              Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                        ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pPVar5,false,
                         (MethodInfo *)0x0);
              return;
            }
          }
          goto LAB_107574a0;
        }
        goto LAB_1075748c;
      }
    }
    uVar19 = iVar16 - 1;
    bVar6 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
                      ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_2,
                       (MethodInfo *)0x0);
    if (bVar6) {
      if (-1 < (int)uVar19) {
        param_2 = (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)(uVar19 * 4 + 0x10)
        ;
        do {
          pLVar1 = pPVar5->___items_4;
          if (pLVar1 == (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) goto LAB_107574a0;
          if ((uint)pLVar1->____size_2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          if (((*(int *)(pLVar1->____items_1 + (int)&param_2->_padding_) == 0) ||
              (pCVar4 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                         (*(int *)(pLVar1->____items_1 + (int)&param_2->_padding_) + 8),
              pCVar4 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) ||
             (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 (pCVar4,(MethodInfo *)0x0),
             pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_107574a0;
          iVar16 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                             (pTVar8,(MethodInfo *)0x0);
          if (iVar16 == 0) {
            pSVar17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                                ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pPVar5,
                                 (MethodInfo *)0x0);
            local_18 = (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)
                       String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                                 (_stringLiteral80905910A78441C04EDCE26C733491EBE4B06012,pSVar17,
                                  (MethodInfo *)0x0);
            if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
            }
            Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                      ((Il2CppObject *)local_18,
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pPVar5,(MethodInfo *)0x0)
            ;
          }
          pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             (pCVar4,(MethodInfo *)0x0);
          if (((pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
              (pTVar8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                  (pTVar8,0,(MethodInfo *)0x0),
              pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
             (pMVar18 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                        Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar8,
                                   Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                                  ),
             pMVar18 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0))
          goto LAB_107574a0;
          MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                    (pMVar18,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,(MethodInfo *)0x0
                    );
          if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             || (pWVar2 = param_1->___master_4->___worldMeshes_9,
                pWVar2 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0))
          goto LAB_107574a0;
          WorldMeshes_ReturnMeshFilterOnly_mF2896FF09A4BE09BE69761705C812B2B8FE839F3
                    (pWVar2,pMVar18,(MethodInfo *)0x0);
          param_2 = (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)
                    &param_2[-1].___time_6;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
LAB_1075748c:
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pPVar5,false,
                 (MethodInfo *)0x0);
      return;
    }
    if ((int)uVar19 < 0) {
      return;
    }
    param_2 = (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)(uVar19 * 4 + 0x10);
    while (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      pLVar1 = pPVar5->___items_4;
      local_18 = param_1->___master_4->___bigMeshMaster_36;
      if (pLVar1 == (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) break;
      if ((uint)pLVar1->____size_2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if ((*(int *)(pLVar1->____items_1 + (int)&param_2->_padding_) == 0) ||
         (local_18 == (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0)) break;
      BigMeshMaster_ReturnMesh_m303991D3B4431E7690F92222ACB930C45F40D82B
                (local_18,*(BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 **)
                           (*(int *)(pLVar1->____items_1 + (int)&param_2->_padding_) + 0xc),
                 (MethodInfo *)0x0);
      param_2 = (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)
                &param_2[-1].___time_6;
      uVar19 = uVar19 - 1;
      if ((int)uVar19 < 0) {
        return;
      }
    }
  }
LAB_107574a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
