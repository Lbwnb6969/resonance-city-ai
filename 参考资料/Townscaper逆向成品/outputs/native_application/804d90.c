// RVA 0x804d90 | Placemaker.Props.PropReference$$OnDrawGizmos
// PDB: PropReference_OnDrawGizmos_mBFFB9B02465A2000B8A39081831C2F556894CE0F
// Body: [[10804d90, 10804fce] [10804fd2, 1080518b] [1080518f, 10805398]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f280 Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 1066fe60 Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10756500 PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e5d0 Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
// 10a3e6b0 Gizmos_DrawWireMesh_m93445D06F241AB0F2BDEA4A9FC3A8EF338BDCE7A
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
PropReference_OnDrawGizmos_mBFFB9B02465A2000B8A39081831C2F556894CE0F
          (PropReference_t6E2A1950F9D20D5E78CEDF74F676E773BB668110 *param_1,MethodInfo *param_2)

{
  Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *pPVar1;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar2;
  PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *pPVar3;
  float fVar4;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar5;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar6;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar7;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  bool bVar12;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar13;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar14;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar15;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar16;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar18;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar19;
  int iVar20;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_11c;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_dc;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_90;
  undefined8 local_84;
  float local_7c;
  undefined8 local_78;
  undefined8 local_6c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined8 local_14;
  int local_c;
  char local_5;

  if (DAT_1151f1f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m420D3C8A438F36DF60AE24075DB0D7873F0FA3A5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_m4CC0D5E9E913BF9983AE4BE3CE3EC05A856A79FF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mB55F21B1D5E332D2F7CED2B8D9AEF2753280A73E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mA32742D86A2C7EE78AF473047B555860BCCBC2F2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m12C1EA3B04D8B5C29FCAD0FC859F45188D18AA6C_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m3FCDC6C6757E0EDCAFC23B2A450375F345D9FFC1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_tB136F8E14540BC44C6A8BB0B3261780B1B9FF0A7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m5C8DAB8F00A7120F771B8FEF7B9ABF4A79497CB1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f1f1 = '\x01';
  }
  pPVar1 = param_1->___prop_4;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pPVar1,(MethodInfo *)0x0);
  if (!bVar12) {
    return;
  }
  pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       (MethodInfo *)0x0);
  if (pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pMVar14 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                        (&local_dc,pTVar13,(MethodInfo *)0x0);
    local_54 = pMVar14->___m00_0;
    fStack_50 = pMVar14->___m10_1;
    fStack_4c = pMVar14->___m20_2;
    fStack_48 = pMVar14->___m30_3;
    local_44 = pMVar14->___m01_4;
    fStack_40 = pMVar14->___m11_5;
    fStack_3c = pMVar14->___m21_6;
    fStack_38 = pMVar14->___m31_7;
    local_34 = pMVar14->___m02_8;
    fStack_30 = pMVar14->___m12_9;
    fStack_2c = pMVar14->___m22_10;
    fStack_28 = pMVar14->___m32_11;
    local_24 = pMVar14->___m03_12;
    fStack_20 = pMVar14->___m13_13;
    fStack_1c = pMVar14->___m23_14;
    fStack_18 = pMVar14->___m33_15;
    if ((param_1->___prop_4 != (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)0x0) &&
       (pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             param_1->___prop_4,(MethodInfo *)0x0),
       pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      pMVar14 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
                          (&local_dc,pTVar13,(MethodInfo *)0x0);
      MVar5.___m10_1 = fStack_50;
      MVar5.___m00_0 = local_54;
      MVar5.___m20_2 = fStack_4c;
      MVar5.___m30_3 = fStack_48;
      MVar5.___m01_4 = local_44;
      MVar5.___m11_5 = fStack_40;
      MVar5.___m21_6 = fStack_3c;
      MVar5.___m31_7 = fStack_38;
      MVar5.___m02_8 = local_34;
      MVar5.___m12_9 = fStack_30;
      MVar5.___m22_10 = fStack_2c;
      MVar5.___m32_11 = fStack_28;
      MVar5.___m03_12 = local_24;
      MVar5.___m13_13 = fStack_20;
      MVar5.___m23_14 = fStack_1c;
      MVar5.___m33_15 = fStack_18;
      pMVar14 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                          (&local_dc,MVar5,*pMVar14,(MethodInfo *)0x0);
      local_5 = '\0';
      local_24 = pMVar14->___m00_0;
      fStack_20 = pMVar14->___m10_1;
      fStack_1c = pMVar14->___m20_2;
      fStack_18 = pMVar14->___m30_3;
      local_34 = pMVar14->___m01_4;
      fStack_30 = pMVar14->___m11_5;
      fStack_2c = pMVar14->___m21_6;
      fStack_28 = pMVar14->___m31_7;
      local_44 = pMVar14->___m02_8;
      fStack_40 = pMVar14->___m12_9;
      fStack_3c = pMVar14->___m22_10;
      fStack_38 = pMVar14->___m32_11;
      local_54 = pMVar14->___m03_12;
      fStack_50 = pMVar14->___m13_13;
      fStack_4c = pMVar14->___m23_14;
      fStack_48 = pMVar14->___m33_15;
      if ((ListPool_1_tB136F8E14540BC44C6A8BB0B3261780B1B9FF0A7_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ListPool_1_tB136F8E14540BC44C6A8BB0B3261780B1B9FF0A7_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ListPool_1_tB136F8E14540BC44C6A8BB0B3261780B1B9FF0A7_il2cpp_TypeInfo_var);
      }
      pDVar15 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                          (
                          ListPool_1_Get_m12C1EA3B04D8B5C29FCAD0FC859F45188D18AA6C_RuntimeMethod_var
                          );
      if ((param_1->___prop_4 != (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)0x0) &&
         (Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___prop_4,
                     (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar15,
                     Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m420D3C8A438F36DF60AE24075DB0D7873F0FA3A5_RuntimeMethod_var
                    ), pDVar15 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)) {
        pEVar19 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                  ((int)&pDVar15->___entries_1[-1].m_Items[0].___value_3 + 3);
        if (-1 < (int)pEVar19) {
          local_c = (int)pEVar19 * 4 + 0x10;
          do {
            if (pDVar15->___entries_1 <= pEVar19) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pMVar2 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)
                      ((int)pDVar15->___buckets_0->m_Items + local_c + -0x10);
            if (pMVar2 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
            goto LAB_10805394;
            pOVar16 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                      MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                (pMVar2,(MethodInfo *)0x0);
            local_14 = CONCAT44(pOVar16,(undefined4)local_14);
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              pOVar16 = local_14._4_4_;
            }
            bVar12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (pOVar16,(MethodInfo *)0x0);
            if (bVar12) {
              pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar2,
                                   (MethodInfo *)0x0);
              if (pTVar13 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
              goto LAB_10805394;
              pMVar14 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                                  (&local_dc,pTVar13,(MethodInfo *)0x0);
              MVar6.___m10_1 = fStack_20;
              MVar6.___m00_0 = local_24;
              MVar6.___m20_2 = fStack_1c;
              MVar6.___m30_3 = fStack_18;
              MVar6.___m01_4 = local_34;
              MVar6.___m11_5 = fStack_30;
              MVar6.___m21_6 = fStack_2c;
              MVar6.___m31_7 = fStack_28;
              MVar6.___m02_8 = local_44;
              MVar6.___m12_9 = fStack_40;
              MVar6.___m22_10 = fStack_3c;
              MVar6.___m32_11 = fStack_38;
              MVar6.___m03_12 = local_54;
              MVar6.___m13_13 = fStack_50;
              MVar6.___m23_14 = fStack_4c;
              MVar6.___m33_15 = fStack_48;
              pMVar14 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                                  (&local_11c,MVar6,*pMVar14,(MethodInfo *)0x0);
              Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
                        (*pMVar14,(MethodInfo *)0x0);
              local_5 = '\x01';
              pMVar17 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                  (pMVar2,(MethodInfo *)0x0);
              Gizmos_DrawWireMesh_m93445D06F241AB0F2BDEA4A9FC3A8EF338BDCE7A
                        (pMVar17,(MethodInfo *)0x0);
            }
            local_c = local_c + -4;
            pEVar19 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                      ((int)&pEVar19[-1].m_Items[0].___value_3 + 3);
          } while (-1 < (int)pEVar19);
        }
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (pDVar15,
                   ListPoolExtension_ReturnToPool_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mB55F21B1D5E332D2F7CED2B8D9AEF2753280A73E_RuntimeMethod_var
                  );
        if (local_5 != '\0') {
          return;
        }
        if ((ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var);
        }
        pDVar15 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                  ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                            (
                            ListPool_1_Get_m3FCDC6C6757E0EDCAFC23B2A450375F345D9FFC1_RuntimeMethod_var
                            );
        if ((param_1->___prop_4 != (Prop_tFB36A7E740F843093CDC437435E4BA4054D50B46 *)0x0) &&
           (Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___prop_4,
                       (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar15,
                       Component_GetComponentsInChildren_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_m4CC0D5E9E913BF9983AE4BE3CE3EC05A856A79FF_RuntimeMethod_var
                      ), pDVar15 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0))
        {
          pEVar19 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                    ((int)&pDVar15->___entries_1[-1].m_Items[0].___value_3 + 3);
          if (-1 < (int)pEVar19) {
            iVar20 = (int)pEVar19 * 4 + 0x10;
            do {
              if (pDVar15->___entries_1 <= pEVar19) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              pPVar3 = *(PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 **)
                        ((int)pDVar15->___buckets_0->m_Items + iVar20 + -0x10);
              if (pPVar3 == (PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *)0x0)
              goto LAB_10805394;
              pMVar14 = PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
                                  (&local_11c,pPVar3,(MethodInfo *)0x0);
              MVar7.___m10_1 = fStack_20;
              MVar7.___m00_0 = local_24;
              MVar7.___m20_2 = fStack_1c;
              MVar7.___m30_3 = fStack_18;
              MVar7.___m01_4 = local_34;
              MVar7.___m11_5 = fStack_30;
              MVar7.___m21_6 = fStack_2c;
              MVar7.___m31_7 = fStack_28;
              MVar7.___m02_8 = local_44;
              MVar7.___m12_9 = fStack_40;
              MVar7.___m22_10 = fStack_3c;
              MVar7.___m32_11 = fStack_38;
              MVar7.___m03_12 = local_54;
              MVar7.___m13_13 = fStack_50;
              MVar7.___m23_14 = fStack_4c;
              MVar7.___m33_15 = fStack_48;
              pMVar14 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                                  (&local_dc,MVar7,*pMVar14,(MethodInfo *)0x0);
              Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
                        (*pMVar14,(MethodInfo *)0x0);
              local_5 = '\x01';
              pVVar18 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                  (&local_9c,(MethodInfo *)0x0);
              local_14._0_4_ = pVVar18->___x_2;
              local_14._4_4_ = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar18->___y_3;
              fVar4 = pVVar18->___z_4;
              pVVar18 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                  (&local_90,(MethodInfo *)0x0);
              local_78._0_4_ = pVVar18->___x_2;
              local_78._4_4_ = pVVar18->___y_3;
              local_7c = pVVar18->___z_4;
              local_84._0_4_ = pVVar18->___x_2;
              local_84._4_4_ = pVVar18->___y_3;
              local_58 = local_7c * __real_40000000;
              VVar9.___z_4 = fVar4;
              VVar9.___x_2 = (float)(undefined4)local_14;
              VVar9.___y_3 = (float)local_14._4_4_;
              VVar10.___y_3 = (float)local_78._4_4_ * __real_40000000;
              VVar10.___x_2 = (float)(undefined4)local_78 * __real_40000000;
              VVar10.___z_4 = local_58;
              local_6c = local_78;
              Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
                        (VVar9,VVar10,(MethodInfo *)0x0);
              iVar20 = iVar20 + -4;
              pEVar19 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                        ((int)&pEVar19[-1].m_Items[0].___value_3 + 3);
            } while (-1 < (int)pEVar19);
          }
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (pDVar15,
                     ListPoolExtension_ReturnToPool_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mA32742D86A2C7EE78AF473047B555860BCCBC2F2_RuntimeMethod_var
                    );
          if (local_5 != '\0') {
            return;
          }
          MVar8.___m10_1 = fStack_20;
          MVar8.___m00_0 = local_24;
          MVar8.___m20_2 = fStack_1c;
          MVar8.___m30_3 = fStack_18;
          MVar8.___m01_4 = local_34;
          MVar8.___m11_5 = fStack_30;
          MVar8.___m21_6 = fStack_2c;
          MVar8.___m31_7 = fStack_28;
          MVar8.___m02_8 = local_44;
          MVar8.___m12_9 = fStack_40;
          MVar8.___m22_10 = fStack_3c;
          MVar8.___m32_11 = fStack_38;
          MVar8.___m03_12 = local_54;
          MVar8.___m13_13 = fStack_50;
          MVar8.___m23_14 = fStack_4c;
          MVar8.___m33_15 = fStack_48;
          Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(MVar8,(MethodInfo *)0x0);
          pVVar18 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                              (&local_90,(MethodInfo *)0x0);
          local_58 = 0.03;
          VVar11.___y_3 = (float)__real_3d23d70a;
          VVar11.___x_2 = (float)__real_3ca3d70a;
          VVar11.___z_4 = 0.03;
          Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
                    (*pVVar18,VVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10805394:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
