// RVA 0xe1f4e0 | Placemaker.GridGenerator$$SetQuadMesh
// PDB: GridGenerator_SetQuadMesh_m5AC28E8E83A243EE4CCAE7093F720F424B653C34
// Body: [[10e1f4e0, 10e1f5a8] [10e1f5ac, 10e1f964]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10227350 Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cffe0 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a472a0 Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e131d0 GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
// 1103ecc0 List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared

void __cdecl
GridGenerator_SetQuadMesh_m5AC28E8E83A243EE4CCAE7093F720F424B653C34
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          List_1_t6385EBDDE30490B871C23E14AC0B1FF5B8353639 *param_2,MethodInfo *param_3)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar7;
  bool bVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar9;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar10;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar11;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar12;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar13;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar14;
  Il2CppObject *pIVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_90;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_84;
  float local_70;
  uint local_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iStack_58;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined8 local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  Il2CppObject *local_8;

  if (DAT_11522671 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Item_mE46DFF7CC0B57F772D1479E95C6DCAC9A0A8CCB8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE314CB2378348C6C8D5643941BC15F572704B659_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8A62603AA20DD20DD5B789E9045513BA554ADDE1_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_11522671 = '\x01';
  }
  iVar14.___y_1 = local_10;
  iVar14.___x_0 = local_c;
  local_14 = -1;
  pDVar13 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_18 = -1;
  local_1c = 0xffffffff;
  local_28 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0;
  local_20 = 0;
  if (param_2 == (List_1_t6385EBDDE30490B871C23E14AC0B1FF5B8353639 *)0x0) {
LAB_10e1f960:
    local_10 = iVar14.___y_1;
    local_c = iVar14.___x_0;
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  local_24 = 0;
  local_30 = 0x4b;
  for (; pOVar7 = local_28, (int)local_20 < param_2->____size_2; local_20 = local_20 + 1) {
    if ((uint)param_2->____size_2 <= local_20) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    puVar1 = &param_2->____items_1->m_Items[0].___quadIndex_0 + local_24;
    local_6c = *(uint *)puVar1;
    iStack_68 = ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(puVar1 + 4))->___x_0;
    iStack_64 = *(int *)(puVar1 + 8);
    uStack_60 = *(undefined4 *)(puVar1 + 0xc);
    puVar1 = &param_2->____items_1->m_Items[0].___quadIndex_0 + local_24;
    local_5c = *(undefined4 *)puVar1;
    iStack_58 = *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(puVar1 + 4);
    uStack_50 = *(undefined4 *)(puVar1 + 0xc);
    if (DAT_1152265a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      DAT_1152265a = '\x01';
    }
    if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    }
    piVar9 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                       (&local_84,iStack_58,(MethodInfo *)0x0);
    local_4c._0_4_ = piVar9->___x_0;
    local_4c._4_4_ = piVar9->___y_1;
    iStack_58.___x_0 = piVar9->___x_0;
    iStack_58.___y_1 = piVar9->___y_1;
    local_70 = (float)piVar9->___z_2;
    fVar4.___y_1 = (float)(int)local_4c._4_4_;
    fVar4.___x_0 = (float)(int)(undefined4)local_4c;
    fVar4.___z_2 = local_70;
    local_40 = local_4c;
    piVar9 = GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
                       (&local_90,param_1,fVar4,(MethodInfo *)0x0);
    iVar14 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(*piVar9,(MethodInfo *)0x0);
    iVar6.___y_1 = local_18;
    iVar6.___x_0 = local_14;
    local_10 = iVar14.___y_1;
    local_c = iVar14.___x_0;
    local_2c = local_6c & 0xff;
    local_8 = (Il2CppObject *)(local_2c * 4);
    uVar3 = (uint)local_8 / 300;
    local_34 = uVar3;
    if ((iVar14 != iVar6) || (uVar3 != local_1c)) {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        iVar14.___y_1 = local_10;
        iVar14.___x_0 = local_c;
      }
      local_10 = iVar14.___y_1;
      local_c = iVar14.___x_0;
      bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar7,(MethodInfo *)0x0)
      ;
      iVar14.___y_1 = local_10;
      iVar14.___x_0 = local_c;
      if (bVar8) {
        if (pOVar7 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) goto LAB_10e1f960;
        Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                  ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar7,
                   (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar13,0,(MethodInfo *)0x0);
      }
      else {
        if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
        }
        pDVar13 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                  ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                            (0x1c2,
                             ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var
                            );
      }
      iVar14.___y_1 = local_10;
      iVar14.___x_0 = local_c;
      if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 ==
          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e1f960;
      iVar5.___y_1 = local_10;
      iVar5.___x_0 = local_c;
      pCVar10 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                          ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                           param_1->___bitDict_8,iVar5,
                           Dictionary_2_get_Item_mE46DFF7CC0B57F772D1479E95C6DCAC9A0A8CCB8_RuntimeMethod_var
                          );
      iVar14.___y_1 = local_10;
      iVar14.___x_0 = local_c;
      if (pCVar10 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_10e1f960;
      pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          (pCVar10,(MethodInfo *)0x0);
      iVar14.___y_1 = local_10;
      iVar14.___x_0 = local_c;
      if (pTVar11 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e1f960;
      pTVar11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                          (pTVar11,uVar3,(MethodInfo *)0x0);
      iVar14.___y_1 = local_10;
      iVar14.___x_0 = local_c;
      if (pTVar11 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e1f960;
      pMVar12 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar11,
                           Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                          );
      iVar14.___y_1 = local_10;
      iVar14.___x_0 = local_c;
      if (pMVar12 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_10e1f960;
      local_28 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                           (pMVar12,(MethodInfo *)0x0);
      iVar14.___y_1 = local_10;
      iVar14.___x_0 = local_c;
      if (local_28 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) goto LAB_10e1f960;
      Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
                ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)local_28,
                 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar13,0,(MethodInfo *)0x0);
      iVar14.___y_1 = local_10;
      iVar14.___x_0 = local_c;
      local_14 = local_c;
      local_18 = local_10;
      local_1c = uVar3;
    }
    local_10 = iVar14.___y_1;
    local_c = iVar14.___x_0;
    iVar2 = (local_2c % local_30) * 6;
    if ((char)uStack_60 == '\0') {
      if (pDVar13 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_10e1f960;
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2,
                 (Il2CppObject *)0x0,
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 1,
                 (Il2CppObject *)0x0,
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 2,
                 (Il2CppObject *)0x0,
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 3,
                 (Il2CppObject *)0x0,
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 4,
                 (Il2CppObject *)0x0,
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      pIVar15 = (Il2CppObject *)0x0;
    }
    else {
      local_8 = (Il2CppObject *)((int)local_8 + local_34 * -300);
      if (pDVar13 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_10e1f960;
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2,local_8,
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      pIVar15 = local_8;
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 1,
                 (Il2CppObject *)((int)&local_8->field0_0x0 + 1),
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      pIVar15 = (Il2CppObject *)((int)&pIVar15->field0_0x0 + 2);
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 2,pIVar15,
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 3,pIVar15,
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
      pIVar15 = local_8;
      List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 4,
                 (Il2CppObject *)((int)&local_8->field0_0x0 + 3),
                 List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
    }
    List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
              ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar13,iVar2 + 5,pIVar15,
               List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
    local_24 = local_24 + 0x10;
  }
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar7,(MethodInfo *)0x0);
  iVar14.___y_1 = local_10;
  iVar14.___x_0 = local_c;
  if (bVar8) {
    if (pOVar7 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) goto LAB_10e1f960;
    Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
              ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar7,
               (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar13,0,(MethodInfo *)0x0);
    DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
              (pDVar13,
               ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
  }
  return;
}
