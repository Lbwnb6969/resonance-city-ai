// RVA 0x7574b0 | Placemaker.Props.PropMeshAnimator$$OnTurnedOn
// PDB: PropMeshAnimator_OnTurnedOn_m0663EFEE10A7225DF99F78282D5988024F0B4D7A
// Body: [[107574b0, 107576d7] [107576db, 10757c36] [10757c3a, 10757d15]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4850 WorldMeshes_GetMeshFilterOnly_m2DBCBD6B81FC98FD3C64753E9838DD6A13D99C94
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10665c10 Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
// 10665c40 Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
// 10665d70 Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066ef80 Transform_SetAsFirstSibling_mD5C02831BA6C7C3408CD491191EAF760ECB7E754
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f480 Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10835fb0 ExtraMath_BinarySearchTransformX_m65E5BEE174A846C04D6CB2BE3D6B485375292F9A
// 10876ae0 BigMeshList_Get_mB56201B36D8A4B03909471604B8EBBAD81FF023B
// 10876c30 BigMeshList_Populate_mBABED717F6A55BD2EF86CDF3F9B4FE49DF708CB4
// 10877000 BigMeshList_ReturnToPool_m342F3135129099F56482FA2DCC436D4AC1C07D7F
// 10877090 BigMeshMaster_AddMesh_m72BD2001AB44344AF7473725CE91F6D4E5468772
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a383a0 Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3df00 GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PropMeshAnimator_OnTurnedOn_m0663EFEE10A7225DF99F78282D5988024F0B4D7A
          (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *param_1,
          PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *param_2,MethodInfo *param_3)

{
  List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *pLVar1;
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar2;
  int iVar3;
  BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 *pBVar4;
  BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 BVar5;
  bool bVar6;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *pBVar10;
  uint uVar11;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar12;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *pRVar13;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar14;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar15;
  BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 *pBVar16;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar17;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_104;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_f8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_ec;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_d4;
  undefined1 local_c8 [20];
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined8 local_9c;
  undefined8 local_90;
  float local_88;
  undefined8 local_84;
  undefined8 local_78;
  BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 local_6c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_58;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  uint local_40;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_3c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_38;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_34;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_30;
  undefined8 local_2c;
  float local_24;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_20;
  undefined8 local_1c;
  float local_14;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_10;
  BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *local_c;
  float local_8;

  if (DAT_1151ec30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
              );
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
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ec30 = '\x01';
  }
  local_4c.___x_2 = 0.0;
  local_4c.___y_3 = 0.0;
  local_4c.___z_4 = 0.0;
  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    if (param_1->___master_4->___isDimmed_55 == false) {
      if (DAT_1151ec2f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        DAT_1151ec2f = '\x01';
      }
      pOVar7 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
               Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar7,(MethodInfo *)0x0)
      ;
      if (bVar6) {
        if (((param_2 == (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)0x0) ||
            (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                 (MethodInfo *)0x0),
            pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
           (pVVar9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                               (&local_58,pTVar8,(MethodInfo *)0x0),
           pOVar7 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)) goto LAB_10757d11;
        pVVar9 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
                           (&local_58,(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)pOVar7,
                            *pVVar9,(MethodInfo *)0x0);
        local_2c._0_4_ = pVVar9->___x_2;
        local_2c._4_4_ = pVVar9->___y_3;
        local_24 = pVVar9->___z_4;
        local_1c = local_2c;
        local_14 = local_24;
        if ((0.0 < local_24) && (0.0 < (float)local_2c)) {
          local_1c._0_4_ = pVVar9->___x_2;
          local_1c._4_4_ = pVVar9->___y_3;
          if ((0.0 < local_1c._4_4_) && ((float)local_2c < __real_3f800000)) {
            local_1c._0_4_ = pVVar9->___x_2;
            local_1c._4_4_ = pVVar9->___y_3;
            if (local_1c._4_4_ < __real_3f800000) {
              Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                        ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_2,true,
                         (MethodInfo *)0x0);
              local_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
              param_2->___time_6 = local_8 + __real_3f000000;
              if (param_2->___items_4 != (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) {
                local_40 = param_2->___items_4->____size_2 - 1;
                if (-1 < (int)local_40) {
                  local_8 = (float)(local_40 * 4 + 0x10);
                  do {
                    pLVar1 = param_2->___items_4;
                    if (pLVar1 == (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0)
                    goto LAB_10757d11;
                    if ((uint)pLVar1->____size_2 <= local_40) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    if ((*(int *)(pLVar1->____items_1 + (int)local_8) == 0) ||
                       (pCVar18 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                   (*(int *)(pLVar1->____items_1 + (int)local_8) + 8),
                       local_10 = pCVar18,
                       pCVar18 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0))
                    goto LAB_10757d11;
                    pBVar10 = (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)
                              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                        (pCVar18,
                                         Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                                        );
                    local_c = pBVar10;
                    pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                       (pCVar18,(MethodInfo *)0x0);
                    local_3c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                               MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                         ((MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                                          pCVar18,(MethodInfo *)0x0);
                    if (pBVar10 == (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0)
                    goto LAB_10757d11;
                    local_34 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                               Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                                         ((Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                                          pBVar10,(MethodInfo *)0x0);
                    local_30 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0;
                    local_38 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
                    if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                    goto LAB_10757d11;
                    pVVar9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                       (&local_d4,pTVar8,(MethodInfo *)0x0);
                    local_2c._0_4_ = pVVar9->___x_2;
                    local_2c._4_4_ = pVVar9->___y_3;
                    local_24 = pVVar9->___z_4;
                    pVVar9 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                                       (&local_e0,pTVar8,(MethodInfo *)0x0);
                    local_1c._0_4_ = pVVar9->___x_2;
                    local_1c._4_4_ = pVVar9->___y_3;
                    local_14 = pVVar9->___z_4;
                    pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        param_1,(MethodInfo *)0x0);
                    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                );
                    }
                    uVar11 = ExtraMath_BinarySearchTransformX_m65E5BEE174A846C04D6CB2BE3D6B485375292F9A
                                       (pTVar8,(float)local_2c + __real_3f333333,0,0,
                                        (MethodInfo *)0x0);
                    pOVar7 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0;
                    if ((int)uVar11 < 0) {
                      uVar11 = ~uVar11;
                    }
                    do {
                      do {
                        do {
                          do {
                            uVar11 = uVar11 - 1;
                            pCVar18 = local_10;
                            if ((int)uVar11 < 0) goto LAB_10757a2a;
                            pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                 *)param_1,(MethodInfo *)0x0);
                            if (((pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                            0x0) ||
                                (pTVar8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                                    (pTVar8,uVar11,(MethodInfo *)0x0),
                                pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0
                                )) || (pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                           ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pTVar8,(MethodInfo *)0x0),
                                      pTVar12 ==
                                      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                            goto LAB_10757d11;
                            pVVar9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                                               (&local_ec,pTVar12,(MethodInfo *)0x0);
                            pCVar18 = local_10;
                            pOVar7 = local_30;
                            if (pVVar9->___x_2 <= (float)local_2c - __real_3f333333 &&
                                (float)local_2c - __real_3f333333 != pVVar9->___x_2)
                            goto LAB_10757a2a;
                            pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pTVar8,(MethodInfo *)0x0);
                            if (pTVar12 ==
                                (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                            goto LAB_10757d11;
                            pVVar9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                               (&local_f8,pTVar12,(MethodInfo *)0x0);
                            local_84._0_4_ = pVVar9->___x_2;
                            local_84._4_4_ = pVVar9->___y_3;
                            local_88 = pVVar9->___z_4;
                            local_90._0_4_ = pVVar9->___x_2;
                            local_90._4_4_ = pVVar9->___y_3;
                            local_58.___z_4 = local_88 - local_24;
                            local_4c.___y_3 = (float)local_84._4_4_ - local_2c._4_4_;
                            local_4c.___x_2 = (float)(undefined4)local_84 - (float)local_2c;
                            local_78 = local_84;
                            local_4c.___z_4 = local_58.___z_4;
                            local_20 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                       Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                                 (&local_4c,(MethodInfo *)0x0);
                            pOVar7 = local_30;
                          } while (___real_3efae147 < (float)local_20);
                          pVVar9 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                                             (&local_104,pTVar8,(MethodInfo *)0x0);
                          local_a8._0_4_ = pVVar9->___x_2;
                          local_a8._4_4_ = pVVar9->___y_3;
                          local_ac = pVVar9->___z_4;
                          local_b4._0_4_ = pVVar9->___x_2;
                          local_b4._4_4_ = pVVar9->___y_3;
                          pOVar7 = local_30;
                          local_9c = local_a8;
                        } while (local_1c._4_4_ * (float)local_a8._4_4_ +
                                 (float)local_1c * (float)(undefined4)local_a8 + local_14 * local_ac
                                 < __real_3f000000);
                        pRVar13 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             pTVar8,
                                             Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                                            );
                        if (pRVar13 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)
                        goto LAB_10757d11;
                        pOVar7 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                 Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                                           (pRVar13,(MethodInfo *)0x0);
                        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                             has_cctor != '\0') &&
                           (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                            cctor_finished == 0)) {
                          il2cpp_runtime_class_init
                                    (
                                    Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                    );
                        }
                        bVar6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                                          (pOVar7,local_34,(MethodInfo *)0x0);
                        pOVar7 = local_30;
                      } while (bVar6);
                      pOVar14 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pTVar8,
                                           Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                                          );
                      if (pOVar14 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)
                      goto LAB_10757d11;
                      local_20 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                           ((MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                                            pOVar14,(MethodInfo *)0x0);
                      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                  );
                      }
                      bVar6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                                        (local_20,local_3c,(MethodInfo *)0x0);
                      pOVar7 = local_30;
                    } while (bVar6);
                    local_38 = pTVar8;
                    pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        pTVar8,(MethodInfo *)0x0);
                    pCVar18 = local_10;
                    pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        (local_10,(MethodInfo *)0x0);
                    if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                    goto LAB_10757d11;
                    Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                              (pTVar8,pTVar12,(MethodInfo *)0x0);
                    pOVar7 = pOVar14;
LAB_10757a2a:
                    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                );
                    }
                    bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                      (pOVar7,(MethodInfo *)0x0);
                    pTVar8 = local_38;
                    if (!bVar6) {
                      if (param_1->___master_4 ==
                          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
                      goto LAB_10757d11;
                      pWVar2 = param_1->___master_4->___worldMeshes_9;
                      pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                         (pCVar18,(MethodInfo *)0x0);
                      if ((pWVar2 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)
                         || (pOVar7 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                      WorldMeshes_GetMeshFilterOnly_m2DBCBD6B81FC98FD3C64753E9838DD6A13D99C94
                                                (pWVar2,pTVar8,(MethodInfo *)0x0),
                            pOVar7 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0))
                      goto LAB_10757d11;
                      pGVar15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pOVar7,(MethodInfo *)0x0);
                      if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                           ->has_cctor != '\0') &&
                         (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                          ->cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                  );
                      }
                      if (pGVar15 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
                      goto LAB_10757d11;
                      GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6
                                (pGVar15,*(int *)((int)
                                                  LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                                  ->static_fields + 0x1c),(MethodInfo *)0x0);
                      pRVar13 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pOVar7,
                                           Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                                          );
                      if (pRVar13 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)
                      goto LAB_10757d11;
                      Renderer_SetMaterial_m45DB63437410875B21F714779FC6D68827BF9497
                                (pRVar13,(Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
                                         local_34,(MethodInfo *)0x0);
                      pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                          pOVar7,(MethodInfo *)0x0);
                      pVVar9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                          (local_c8 + 8),(MethodInfo *)0x0);
                      if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                      goto LAB_10757d11;
                      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                (pTVar8,*pVVar9,(MethodInfo *)0x0);
                    }
                    Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B
                              ((Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)local_c,false,
                               (MethodInfo *)0x0);
                    if ((pOVar7 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) ||
                       (MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                                  ((MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)pOVar7,
                                   (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)local_3c,
                                   (MethodInfo *)0x0),
                       pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                    goto LAB_10757d11;
                    Transform_SetAsFirstSibling_mD5C02831BA6C7C3408CD491191EAF760ECB7E754
                              (pTVar8,(MethodInfo *)0x0);
                    local_40 = local_40 - 1;
                    local_8 = (float)((int)local_8 + -4);
                  } while (-1 < (int)local_40);
                }
                return;
              }
              goto LAB_10757d11;
            }
          }
        }
      }
    }
    pBVar16 = BigMeshList_Get_mB56201B36D8A4B03909471604B8EBBAD81FF023B
                        ((BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 *)local_c8,
                         (MethodInfo *)0x0);
    local_6c.___verts_0 = pBVar16->___verts_0;
    local_6c.___normals_1 = pBVar16->___normals_1;
    local_6c.___tangents_2 = pBVar16->___tangents_2;
    local_6c.___uvs_3 = pBVar16->___uvs_3;
    local_6c.___tris_4 = pBVar16->___tris_4;
    if ((param_2 != (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)0x0) &&
       (param_2->___items_4 != (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0)) {
      uVar11 = param_2->___items_4->____size_2 - 1;
      if (-1 < (int)uVar11) {
        local_8 = (float)(uVar11 * 4 + 0x10);
        do {
          pLVar1 = param_2->___items_4;
          if (pLVar1 == (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) goto LAB_10757d11;
          if ((uint)pLVar1->____size_2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          iVar3 = *(int *)(pLVar1->____items_1 + (int)local_8);
          if ((iVar3 == 0) ||
             (local_c = *(BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA **)(iVar3 + 8),
             local_c == (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0))
          goto LAB_10757d11;
          pRVar13 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)
                    Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_c,
                               Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var
                              );
          if (pRVar13 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)
          goto LAB_10757d11;
          if (*(char *)(iVar3 + 0x10) == '\0') {
            Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B
                      (pRVar13,true,(MethodInfo *)0x0);
          }
          else {
            Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B
                      (pRVar13,false,(MethodInfo *)0x0);
            BigMeshList_Populate_mBABED717F6A55BD2EF86CDF3F9B4FE49DF708CB4
                      (&local_6c,(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)local_c,
                       (MethodInfo *)0x0);
            if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) goto LAB_10757d11;
            local_c = param_1->___master_4->___bigMeshMaster_36;
            pBVar4 = *(BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 **)(iVar3 + 0xc);
            pMVar17 = Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                                (pRVar13,(MethodInfo *)0x0);
            if (local_c == (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0)
            goto LAB_10757d11;
            BVar5.___normals_1 = local_6c.___normals_1;
            BVar5.___verts_0 = local_6c.___verts_0;
            BVar5.___tangents_2 = local_6c.___tangents_2;
            BVar5.___uvs_3 = local_6c.___uvs_3;
            BVar5.___tris_4 = local_6c.___tris_4;
            BigMeshMaster_AddMesh_m72BD2001AB44344AF7473725CE91F6D4E5468772
                      (local_c,pBVar4,pMVar17,BVar5,(MethodInfo *)0x0);
          }
          local_8 = (float)((int)local_8 + -4);
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      BigMeshList_ReturnToPool_m342F3135129099F56482FA2DCC436D4AC1C07D7F
                (&local_6c,(MethodInfo *)0x0);
      return;
    }
  }
LAB_10757d11:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
