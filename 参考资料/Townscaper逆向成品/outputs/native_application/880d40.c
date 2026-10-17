// RVA 0x880d40 | Placemaker.Life.ButterflyFlock$$AddLanding
// PDB: ButterflyFlock_AddLanding_m6B149E9F3047EC90B5B005CA25951E28F3637CA0
// Body: [[10880d40, 10881143]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043efe0 Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 106603a0 Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066fbe0 Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 108833e0 ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10c789f0 Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared

void __cdecl
ButterflyFlock_AddLanding_m6B149E9F3047EC90B5B005CA25951E28F3637CA0
          (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *param_1,
          ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  int iVar11;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar12;
  int iVar13;
  Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *pBVar14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar16;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar17;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar18;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar19;
  float fVar20;
  float fVar21;
  undefined1 local_24 [8];
  float fStack_1c;
  float local_18;
  undefined8 local_14;
  float local_c;
  float local_8;

  if (DAT_1151f5d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m6292A40671E923ACA3F127F3AC70E85B80A3B4E5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m87742A5D0159ED332A2FBBFE20A667F818AE01CA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5d6 = '\x01';
  }
  param_1->___landingCount_13 = param_1->___landingCount_13 + 1;
  iVar11 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                     ((float)param_1->___landingCount_13 * __real_3d4ccccd * __real_3f666666,
                      (MethodInfo *)0x0);
  iVar11 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(0x20,iVar11,(MethodInfo *)0x0);
  if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___activeButterflies_9 !=
       (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
     (pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                           param_1->___activeButterflies_9,(MethodInfo *)0x0),
     pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    iVar13 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                       (pTVar12,(MethodInfo *)0x0);
    if (iVar11 <= iVar13) {
      return;
    }
    if (param_1->___disabledButterflies_10 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar11 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (param_1->___disabledButterflies_10,(MethodInfo *)0x0);
      if (iVar11 == 0) {
        pBVar14 = param_1->___srcButterfly_5;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        pBVar14 = (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)
                  Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                            ((Il2CppObject *)pBVar14,
                             Object_Instantiate_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m87742A5D0159ED332A2FBBFE20A667F818AE01CA_RuntimeMethod_var
                            );
        if (pBVar14 == (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0)
        goto LAB_1088113f;
        pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar14,
                             (MethodInfo *)0x0);
        pVVar16 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_24 + 4),
                             (MethodInfo *)0x0);
        local_14._0_4_ = pVVar16->___x_2;
        local_14._4_4_ = pVVar16->___y_3;
        local_c = pVVar16->___z_4;
        local_18 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(0.8,1.2,(MethodInfo *)0x0)
        ;
        local_24._4_4_ = (float)local_14 * local_18;
        fStack_1c = local_14._4_4_ * local_18;
        local_18 = local_c * local_18;
        if (pTVar12 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_1088113f;
        VVar10.___y_3 = fStack_1c;
        VVar10.___x_2 = (float)local_24._4_4_;
        VVar10.___z_4 = local_18;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar12,VVar10,(MethodInfo *)0x0);
      }
      else {
        if ((param_1->___disabledButterflies_10 ==
             (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (param_1->___disabledButterflies_10,0,(MethodInfo *)0x0),
           pTVar12 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_1088113f;
        pBVar14 = (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar12,
                             Component_GetComponent_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m6292A40671E923ACA3F127F3AC70E85B80A3B4E5_RuntimeMethod_var
                            );
      }
      if (pBVar14 != (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0) {
        pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar14,
                             (MethodInfo *)0x0);
        if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___activeButterflies_9
             != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
           (pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___activeButterflies_9,(MethodInfo *)0x0),
           pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                    (pTVar12,pTVar15,(MethodInfo *)0x0);
          pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar14,
                               (MethodInfo *)0x0);
          if ((param_2 != (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)0x0) &&
             ((pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                    (MethodInfo *)0x0),
              pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 &&
              (pVVar16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                   ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                    (local_24 + 4),pTVar15,(MethodInfo *)0x0),
              pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)))) {
            Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                      (pTVar12,*pVVar16,(MethodInfo *)0x0);
            pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar14,
                                 (MethodInfo *)0x0);
            pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                 (MethodInfo *)0x0);
            if ((pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
               (pQVar17 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
                                    ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                                     local_24,pTVar15,(MethodInfo *)0x0),
               pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
              Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                        (pTVar12,*pQVar17,(MethodInfo *)0x0);
              pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar14,
                                   (MethodInfo *)0x0);
              if (pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pVVar16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (local_24 + 4),pTVar12,(MethodInfo *)0x0);
                uVar1 = pVVar16->___x_2;
                uVar3 = pVVar16->___y_3;
                fVar20 = pVVar16->___z_4;
                (pBVar14->___posMid_6).___x_2 = (float)uVar1;
                (pBVar14->___posMid_6).___y_3 = (float)uVar3;
                (pBVar14->___posMid_6).___z_4 = fVar20;
                (pBVar14->___pos_9).___x_2 = (float)uVar1;
                (pBVar14->___pos_9).___y_3 = (float)uVar3;
                (pBVar14->___pos_9).___z_4 = fVar20;
                pVVar16 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (local_24 + 4),(MethodInfo *)0x0);
                uVar2 = pVVar16->___x_2;
                uVar4 = pVVar16->___y_3;
                fVar20 = pVVar16->___z_4;
                (pBVar14->___velocityNext_8).___x_2 = (float)uVar2;
                (pBVar14->___velocityNext_8).___y_3 = (float)uVar4;
                (pBVar14->___velocityPrev_7).___x_2 = (float)uVar2;
                (pBVar14->___velocityPrev_7).___y_3 = (float)uVar4;
                (pBVar14->___velocityNext_8).___z_4 = fVar20;
                (pBVar14->___velocityPrev_7).___z_4 = fVar20;
                pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                     (MethodInfo *)0x0);
                if (pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  pQVar17 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
                                      ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                                       local_24,pTVar12,(MethodInfo *)0x0);
                  fVar20 = pQVar17->___y_1;
                  fVar21 = pQVar17->___z_2;
                  fVar5 = pQVar17->___w_3;
                  fVar6 = pQVar17->___x_0;
                  fVar7 = pQVar17->___y_1;
                  fVar8 = pQVar17->___z_2;
                  fVar9 = pQVar17->___w_3;
                  (pBVar14->___rotation1_5).___x_0 = pQVar17->___x_0;
                  (pBVar14->___rotation1_5).___y_1 = fVar20;
                  (pBVar14->___rotation1_5).___z_2 = fVar21;
                  (pBVar14->___rotation1_5).___w_3 = fVar5;
                  (pBVar14->___rotation0_4).___x_0 = fVar6;
                  (pBVar14->___rotation0_4).___y_1 = fVar7;
                  (pBVar14->___rotation0_4).___z_2 = fVar8;
                  (pBVar14->___rotation0_4).___w_3 = fVar9;
                  fVar20 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
                                     ((MethodInfo *)0x0);
                  iVar11 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                                     (0,2,(MethodInfo *)0x0);
                  pBVar14->___time_10 = fVar20 - (float)iVar11;
                  fVar21 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
                                     ((MethodInfo *)0x0);
                  fVar20 = __real_3f000000;
                  pBVar14->___state_11 = (__real_3f000000 <= fVar21) * '\x02';
                  pMVar18 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                            Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pBVar14,
                                       Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
                                      );
                  if (fVar20 <= fVar21) {
                    local_8 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
                                        ((MethodInfo *)0x0);
                    if (__real_3e4ccccd <= local_8) {
                      pMVar19 = param_1->___sitMesh_7;
                    }
                    else {
                      pMVar19 = param_1->___sitFlapMesh_8;
                    }
                  }
                  else {
                    pMVar19 = param_1->___flapMesh_6;
                  }
                  if (pMVar18 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
                    MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                              (pMVar18,pMVar19,(MethodInfo *)0x0);
                    ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
                              (param_1,pBVar14,param_2,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1088113f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
