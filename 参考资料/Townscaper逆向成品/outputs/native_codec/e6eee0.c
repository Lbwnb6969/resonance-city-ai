// RVA 0xe6eee0 | Graph.IntegrateVoxel
// PDB: Graph_IntegrateVoxel_m9BE5C2638CC130B86187A084C4758C910D77F676
// Body: [[10e6eee0, 10e6f030] [10e6f034, 10e6f8bf] [10e6f8c9, 10e6f927]]
// Direct callees:
// 10066d80 List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1081c1e0 Sandbanker_Reset_m58D520C0F47DC4F9FC0756C9953650479D36DC13
// 10928790 List_1_Add_mFC02D270728DAEC7D28D6E125C412326297A19AC_gshared
// 1092cdc0 List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43fd0 Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6bca0 Graph_GetNewQube_m5BA4A2D295112C78B96853245141291D48DC76CD
// 10e738f0 Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
// 1113d0a0 MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406

void __cdecl
Graph_IntegrateVoxel_m9BE5C2638CC130B86187A084C4758C910D77F676
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,
          Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_3,MethodInfo *param_4)

{
  char *pcVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *pVVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *pSVar4;
  List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *pLVar5;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar6;
  List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *pLVar7;
  List_1_t569265593A89FA799E916FF2D345C50EFB59729A *pLVar8;
  FlowDataU5BU5D_t0A50EB1BA21C3F44944642C7F89D50ECCA8987D7 *pFVar9;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar10;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar11;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar12;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar13;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar14;
  undefined1 auVar15 [12];
  uchar uVar16;
  bool bVar17;
  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *pMVar18;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar19;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar20;
  int iVar21;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar22;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *pDVar23;
  int iVar24;
  uint uVar25;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 local_194;
  float local_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float local_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float local_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float local_a4;
  float fStack_a0;
  int iStack_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  int iStack_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  int iStack_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  int iStack_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 local_24;
  float fStack_20;
  undefined4 local_1c;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_18;
  uint local_14;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_10;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_c;
  uchar local_5;

  if (DAT_1152283b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m85223F727A2A8A776326812F1F199A70802284EF_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m2D824BA8DB5C08E453D1087232C69DB7E73AB353_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1152283b = '\x01';
  }
  if (param_2 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) goto LAB_10e6f923;
  pMVar18 = (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *)
            Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                       Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F_RuntimeMethod_var
                      );
  if ((param_3 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
     (pMVar18 == (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *)0x0)) goto LAB_10e6f923;
  MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406
            (pMVar18,param_3->___colliderMesh_6,(MethodInfo *)0x0);
  pMVar19 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
            Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                      );
  if (pMVar19 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_10e6f923;
  MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
            (pMVar19,param_3->___colliderMesh_6,(MethodInfo *)0x0);
  if (param_2->___height_5 == '\0') {
    if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pSVar4 = param_1->___master_4->___sandbanker_22,
       pSVar4 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) goto LAB_10e6f923;
    Sandbanker_Reset_m58D520C0F47DC4F9FC0756C9953650479D36DC13(pSVar4,(MethodInfo *)0x0);
    if (param_2->___height_5 != '\0') goto LAB_10e6f002;
    local_5 = '\x0f';
  }
  else {
LAB_10e6f002:
    local_5 = param_2->___type_4;
  }
  local_14 = 0;
  while( true ) {
    pLVar5 = param_3->___squares_5;
    if (pLVar5 == (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) break;
    if (pLVar5->____size_2 <= (int)local_14) {
      pLVar8 = param_3->___flowDatas_8;
      if (pLVar8 != (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0) {
        uVar25 = (uint)param_2->___height_5;
        if ((uint)pLVar8->____size_2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pFVar9 = pLVar8->____items_1;
        fStack_d0 = *(float *)&pFVar9->m_Items[uVar25].___neighbourCount_1;
        fStack_cc = ((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)
                    &pFVar9->m_Items[uVar25].___dist_2)->___x_0;
        fStack_c8 = pFVar9->m_Items[uVar25].___newDist_3;
        pVVar2 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)
                 &pFVar9->m_Items[uVar25].___denom_4;
        pVVar3 = &pFVar9->m_Items[uVar25].___newDir_6;
        local_d4 = param_2;
        if (pLVar8 != (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0) {
          DVar14.___delta_0.___y_1 = fStack_d0;
          DVar14.___delta_0.___x_0 = (float)param_2;
          DVar14.___smoothDelta_1.___x_0 = fStack_cc;
          DVar14.___smoothDelta_1.___y_1 = fStack_c8;
          DVar14.___pos_2.___x_0 = pVVar2->___x_0;
          DVar14.___pos_2.___y_1 = pVVar2->___y_1;
          DVar14.___invYPos_3.___x_0 = pVVar2[1].___x_0;
          DVar14.___invYPos_3.___y_1 = pVVar2[1].___y_1;
          DVar14.___smoothPos_4.___x_0 = pVVar3->___x_2;
          DVar14.___smoothPos_4.___y_1 = pVVar3->___y_3;
          DVar14.___frame_5 = (int)pVVar3->___z_4;
          DVar14.___time_6 = pVVar3[1].___x_2;
          List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                    ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pLVar8,
                     (uint)param_2->___height_5,DVar14,
                     List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var);
          return;
        }
      }
      break;
    }
    if ((uint)pLVar5->____size_2 <= local_14) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pCVar6 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
              (pLVar5->____items_1 + local_14 * 4 + 0x10);
    if (((pCVar6 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
        (*(int *)&pCVar6[3].field_0x8 == 0)) ||
       (iVar24 = *(int *)(*(int *)&pCVar6[3].field_0x8 + 0x20), iVar24 == 0)) break;
    for (iVar24 = *(int *)(iVar24 + 0xc) + -1; iVar24 <= (int)(uint)param_2->___height_5;
        iVar24 = iVar24 + 1) {
      if (*(int *)&pCVar6[3].field_0x8 == 0) goto LAB_10e6f923;
      pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                (*(int *)&pCVar6[3].field_0x8 + 0x20);
      if ((FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var);
      }
      if (pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0) goto LAB_10e6f923;
      List_1_Add_mFC02D270728DAEC7D28D6E125C412326297A19AC_gshared
                (pLVar7,*FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->
                         static_fields,
                 List_1_Add_m85223F727A2A8A776326812F1F199A70802284EF_RuntimeMethod_var);
    }
    if ((*(int *)(pCVar6 + 4) == 0) || (iVar24 = *(int *)(*(int *)(pCVar6 + 4) + 0x20), iVar24 == 0)
       ) break;
    for (iVar24 = *(int *)(iVar24 + 0xc) + -1; iVar24 <= (int)(uint)param_2->___height_5;
        iVar24 = iVar24 + 1) {
      if (*(int *)(pCVar6 + 4) == 0) goto LAB_10e6f923;
      pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)(*(int *)(pCVar6 + 4) + 0x20);
      if ((FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var);
      }
      if (pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0) goto LAB_10e6f923;
      List_1_Add_mFC02D270728DAEC7D28D6E125C412326297A19AC_gshared
                (pLVar7,*FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->
                         static_fields,
                 List_1_Add_m85223F727A2A8A776326812F1F199A70802284EF_RuntimeMethod_var);
    }
    if ((*(int *)&pCVar6[4].field_0x4 == 0) ||
       (iVar24 = *(int *)(*(int *)&pCVar6[4].field_0x4 + 0x20), iVar24 == 0)) break;
    for (iVar24 = *(int *)(iVar24 + 0xc) + -1; iVar24 <= (int)(uint)param_2->___height_5;
        iVar24 = iVar24 + 1) {
      if (*(int *)&pCVar6[4].field_0x4 == 0) goto LAB_10e6f923;
      pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                (*(int *)&pCVar6[4].field_0x4 + 0x20);
      if ((FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var);
      }
      if (pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0) goto LAB_10e6f923;
      List_1_Add_mFC02D270728DAEC7D28D6E125C412326297A19AC_gshared
                (pLVar7,*FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->
                         static_fields,
                 List_1_Add_m85223F727A2A8A776326812F1F199A70802284EF_RuntimeMethod_var);
    }
    if ((*(int *)&pCVar6[4].field_0x8 == 0) ||
       (iVar24 = *(int *)(*(int *)&pCVar6[4].field_0x8 + 0x20), iVar24 == 0)) break;
    for (iVar24 = *(int *)(iVar24 + 0xc) + -1; iVar24 <= (int)(uint)param_2->___height_5;
        iVar24 = iVar24 + 1) {
      if (*(int *)&pCVar6[4].field_0x8 == 0) goto LAB_10e6f923;
      pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                (*(int *)&pCVar6[4].field_0x8 + 0x20);
      if ((FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var);
      }
      if (pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0) goto LAB_10e6f923;
      List_1_Add_mFC02D270728DAEC7D28D6E125C412326297A19AC_gshared
                (pLVar7,*FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->
                         static_fields,
                 List_1_Add_m85223F727A2A8A776326812F1F199A70802284EF_RuntimeMethod_var);
    }
    pTVar20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        (pCVar6,(MethodInfo *)0x0);
    if (pTVar20 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    for (iVar24 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                            (pTVar20,(MethodInfo *)0x0); iVar24 <= (int)(param_2->___height_5 + 1);
        iVar24 = iVar24 + 1) {
      if (param_1->___qubePool_5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
      goto LAB_10e6f923;
      iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (param_1->___qubePool_5,(MethodInfo *)0x0);
      if (iVar21 < 1) {
        pTVar20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            (pCVar6,(MethodInfo *)0x0);
        pQVar22 = Graph_GetNewQube_m5BA4A2D295112C78B96853245141291D48DC76CD
                            (param_1,pTVar20,(MethodInfo *)0x0);
      }
      else {
        pTVar20 = param_1->___qubePool_5;
        if (pTVar20 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6f923;
        iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (pTVar20,(MethodInfo *)0x0);
        pTVar20 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (pTVar20,iVar21 + -1,(MethodInfo *)0x0);
        if (pTVar20 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6f923;
        pQVar22 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar20,
                             Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                            );
        if (pQVar22 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) goto LAB_10e6f923;
        local_10 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                   Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar22,
                              (MethodInfo *)0x0);
        pTVar20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            (pCVar6,(MethodInfo *)0x0);
        if (local_10 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) goto LAB_10e6f923;
        Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                  ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_10,pTVar20,
                   (MethodInfo *)0x0);
        pQVar22->___existanceIndex_9 = pQVar22->___existanceIndex_9 + 1;
      }
      if (pQVar22 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) goto LAB_10e6f923;
      pQVar22->___lastPropagation_11 = 0;
      pQVar22->___voxelCount_4 = (iVar24 != 0) - 1U & 0xf;
      uVar16 = (iVar24 != 0) + '\x11';
      (pQVar22->___cornerValues_13).___v3_3 = uVar16;
      (pQVar22->___cornerValues_13).___v2_2 = uVar16;
      (pQVar22->___cornerValues_13).___v1_1 = uVar16;
      (pQVar22->___cornerValues_13).___v0_0 = uVar16;
      pTVar20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar22,
                           (MethodInfo *)0x0);
      fStack_20 = (float)iVar24;
      local_24 = 0;
      local_1c = 0;
      if (pTVar20 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e6f923;
      auVar15._4_8_ = 0;
      auVar15._0_4_ = fStack_20;
      Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                (pTVar20,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)(auVar15 << 0x20),
                 (MethodInfo *)0x0);
      if (iVar24 <= (int)(param_2->___height_5 - 1)) {
        Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
                  (param_1,pQVar22,(MethodInfo *)0x0);
      }
    }
    pTVar20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        (pCVar6,(MethodInfo *)0x0);
    if (pTVar20 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    pTVar20 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                        (pTVar20,param_2->___height_5 + 1,(MethodInfo *)0x0);
    if (pTVar20 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    local_10 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar20,
                          Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                         );
    pTVar20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        (pCVar6,(MethodInfo *)0x0);
    if (pTVar20 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    pTVar20 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                        (pTVar20,(uint)param_2->___height_5,(MethodInfo *)0x0);
    if (pTVar20 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    pQVar22 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar20,
                         Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                        );
    local_c = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)&pCVar6[3].field_0x8;
    local_18 = pQVar22;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar17 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                       (local_c,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                        (MethodInfo *)0x0);
    if (bVar17) {
      if ((local_10 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
         (pQVar22 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) break;
      (pQVar22->___cornerValues_13).___v4_4 = local_5;
      (local_10->___cornerValues_13).___v0_0 = local_5;
      local_10->___voxelCount_4 = local_10->___voxelCount_4 ^ 1;
      pQVar22->___voxelCount_4 = pQVar22->___voxelCount_4 ^ 0x10;
    }
    else {
      local_c = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(pCVar6 + 4);
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar17 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                         (local_c,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                          (MethodInfo *)0x0);
      if (bVar17) {
        if ((local_10 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
           (pQVar22 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) break;
        (pQVar22->___cornerValues_13).___v5_5 = local_5;
        (local_10->___cornerValues_13).___v1_1 = local_5;
        local_10->___voxelCount_4 = local_10->___voxelCount_4 ^ 2;
        pQVar22->___voxelCount_4 = pQVar22->___voxelCount_4 ^ 0x20;
      }
      else {
        local_c = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)&pCVar6[4].field_0x4;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar17 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                           (local_c,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                            (MethodInfo *)0x0);
        if (local_10 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) break;
        if (bVar17) {
          if (pQVar22 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) break;
          (pQVar22->___cornerValues_13).___v6_6 = local_5;
          (local_10->___cornerValues_13).___v2_2 = local_5;
          local_10->___voxelCount_4 = local_10->___voxelCount_4 ^ 4;
          pQVar22->___voxelCount_4 = pQVar22->___voxelCount_4 ^ 0x40;
        }
        else {
          if (pQVar22 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) break;
          (pQVar22->___cornerValues_13).___v7_7 = local_5;
          (local_10->___cornerValues_13).___v3_3 = local_5;
          local_10->___voxelCount_4 = local_10->___voxelCount_4 | 8;
          pQVar22->___voxelCount_4 = pQVar22->___voxelCount_4 | 0x80;
        }
      }
    }
    if (param_2->___height_5 == '\0') {
      if (*(int *)&pCVar6[3].field_0x8 == 0) break;
      pcVar1 = (char *)(*(int *)&pCVar6[3].field_0x8 + 0x2c);
      *pcVar1 = *pcVar1 + '\x01';
      if (*(int *)(pCVar6 + 4) == 0) break;
      pcVar1 = (char *)(*(int *)(pCVar6 + 4) + 0x2c);
      *pcVar1 = *pcVar1 + '\x01';
      if (*(int *)&pCVar6[4].field_0x4 == 0) break;
      pcVar1 = (char *)(*(int *)&pCVar6[4].field_0x4 + 0x2c);
      *pcVar1 = *pcVar1 + '\x01';
      if (*(int *)&pCVar6[4].field_0x8 == 0) break;
      pcVar1 = (char *)(*(int *)&pCVar6[4].field_0x8 + 0x2c);
      *pcVar1 = *pcVar1 + '\x01';
    }
    iVar24 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                       (0,param_2->___height_5 - 1,(MethodInfo *)0x0);
    local_c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)(param_2->___height_5 + 2);
    if (iVar24 < (int)local_c) {
      do {
        if ((*(int *)&pCVar6[3].field_0x8 == 0) ||
           (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                      (*(int *)&pCVar6[3].field_0x8 + 0x20),
           pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0)) goto LAB_10e6f923;
        pDVar23 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                            (&local_194,pLVar7,iVar24,
                             List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                            );
        local_104 = (pDVar23->___delta_0).___x_0;
        fStack_100 = (pDVar23->___delta_0).___y_1;
        fStack_fc = (pDVar23->___smoothDelta_1).___x_0;
        fStack_f8 = (pDVar23->___smoothDelta_1).___y_1;
        local_34 = (pDVar23->___pos_2).___x_0;
        fStack_30 = (pDVar23->___pos_2).___y_1;
        fStack_2c = (pDVar23->___invYPos_3).___x_0;
        fStack_28 = (pDVar23->___invYPos_3).___y_1;
        local_44 = (pDVar23->___smoothPos_4).___x_0;
        fStack_40 = (pDVar23->___smoothPos_4).___y_1;
        iStack_3c = pDVar23->___frame_5;
        fStack_38 = pDVar23->___time_6;
        if ((*(int *)(pCVar6 + 4) == 0) ||
           (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                      (*(int *)(pCVar6 + 4) + 0x20),
           pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0)) goto LAB_10e6f923;
        pDVar23 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                            (&local_194,pLVar7,iVar24,
                             List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                            );
        local_134 = (pDVar23->___delta_0).___x_0;
        fStack_130 = (pDVar23->___delta_0).___y_1;
        fStack_12c = (pDVar23->___smoothDelta_1).___x_0;
        fStack_128 = (pDVar23->___smoothDelta_1).___y_1;
        local_54 = (pDVar23->___pos_2).___x_0;
        fStack_50 = (pDVar23->___pos_2).___y_1;
        fStack_4c = (pDVar23->___invYPos_3).___x_0;
        fStack_48 = (pDVar23->___invYPos_3).___y_1;
        local_64 = (pDVar23->___smoothPos_4).___x_0;
        fStack_60 = (pDVar23->___smoothPos_4).___y_1;
        iStack_5c = pDVar23->___frame_5;
        fStack_58 = pDVar23->___time_6;
        if ((*(int *)&pCVar6[4].field_0x4 == 0) ||
           (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                      (*(int *)&pCVar6[4].field_0x4 + 0x20),
           pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0)) goto LAB_10e6f923;
        pDVar23 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                            (&local_194,pLVar7,iVar24,
                             List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                            );
        local_164 = (pDVar23->___delta_0).___x_0;
        fStack_160 = (pDVar23->___delta_0).___y_1;
        fStack_15c = (pDVar23->___smoothDelta_1).___x_0;
        fStack_158 = (pDVar23->___smoothDelta_1).___y_1;
        local_74 = (pDVar23->___pos_2).___x_0;
        fStack_70 = (pDVar23->___pos_2).___y_1;
        fStack_6c = (pDVar23->___invYPos_3).___x_0;
        fStack_68 = (pDVar23->___invYPos_3).___y_1;
        local_84 = (pDVar23->___smoothPos_4).___x_0;
        fStack_80 = (pDVar23->___smoothPos_4).___y_1;
        iStack_7c = pDVar23->___frame_5;
        fStack_78 = pDVar23->___time_6;
        if ((*(int *)&pCVar6[4].field_0x8 == 0) ||
           (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                      (*(int *)&pCVar6[4].field_0x8 + 0x20),
           pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0)) goto LAB_10e6f923;
        pDVar23 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                            (&local_194,pLVar7,iVar24,
                             List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                            );
        fStack_100 = (float)CONCAT31(fStack_100._1_3_,fStack_100._0_1_ + '\x01');
        fStack_130 = (float)CONCAT31(fStack_130._1_3_,fStack_130._0_1_ + '\x01');
        fStack_160 = (float)CONCAT31(fStack_160._1_3_,fStack_160._0_1_ + '\x01');
        local_d4 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)(pDVar23->___delta_0).___x_0;
        fStack_cc = (pDVar23->___smoothDelta_1).___x_0;
        fStack_c8 = (pDVar23->___smoothDelta_1).___y_1;
        local_94 = (pDVar23->___pos_2).___x_0;
        fStack_90 = (pDVar23->___pos_2).___y_1;
        fStack_8c = (pDVar23->___invYPos_3).___x_0;
        fStack_88 = (pDVar23->___invYPos_3).___y_1;
        local_a4 = (pDVar23->___smoothPos_4).___x_0;
        fStack_a0 = (pDVar23->___smoothPos_4).___y_1;
        iStack_9c = pDVar23->___frame_5;
        fStack_98 = pDVar23->___time_6;
        fStack_d0 = (float)CONCAT31(*(undefined3 *)((int)&(pDVar23->___delta_0).___y_1 + 1),
                                    *(char *)&(pDVar23->___delta_0).___y_1 + '\x01');
        if ((*(int *)&pCVar6[3].field_0x8 == 0) ||
           (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                      (*(int *)&pCVar6[3].field_0x8 + 0x20),
           pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0)) goto LAB_10e6f923;
        DVar10.___delta_0.___y_1 = fStack_100;
        DVar10.___delta_0.___x_0 = local_104;
        DVar10.___smoothDelta_1.___x_0 = fStack_fc;
        DVar10.___smoothDelta_1.___y_1 = fStack_f8;
        DVar10.___pos_2.___x_0 = local_34;
        DVar10.___pos_2.___y_1 = fStack_30;
        DVar10.___invYPos_3.___x_0 = fStack_2c;
        DVar10.___invYPos_3.___y_1 = fStack_28;
        DVar10.___smoothPos_4.___x_0 = local_44;
        DVar10.___smoothPos_4.___y_1 = fStack_40;
        DVar10.___frame_5 = iStack_3c;
        DVar10.___time_6 = fStack_38;
        List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                  (pLVar7,iVar24,DVar10,
                   List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var);
        if ((*(int *)(pCVar6 + 4) == 0) ||
           (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                      (*(int *)(pCVar6 + 4) + 0x20),
           pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0)) goto LAB_10e6f923;
        DVar11.___delta_0.___y_1 = fStack_130;
        DVar11.___delta_0.___x_0 = local_134;
        DVar11.___smoothDelta_1.___x_0 = fStack_12c;
        DVar11.___smoothDelta_1.___y_1 = fStack_128;
        DVar11.___pos_2.___x_0 = local_54;
        DVar11.___pos_2.___y_1 = fStack_50;
        DVar11.___invYPos_3.___x_0 = fStack_4c;
        DVar11.___invYPos_3.___y_1 = fStack_48;
        DVar11.___smoothPos_4.___x_0 = local_64;
        DVar11.___smoothPos_4.___y_1 = fStack_60;
        DVar11.___frame_5 = iStack_5c;
        DVar11.___time_6 = fStack_58;
        List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                  (pLVar7,iVar24,DVar11,
                   List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var);
        if ((*(int *)&pCVar6[4].field_0x4 == 0) ||
           (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                      (*(int *)&pCVar6[4].field_0x4 + 0x20),
           pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0)) goto LAB_10e6f923;
        DVar12.___delta_0.___y_1 = fStack_160;
        DVar12.___delta_0.___x_0 = local_164;
        DVar12.___smoothDelta_1.___x_0 = fStack_15c;
        DVar12.___smoothDelta_1.___y_1 = fStack_158;
        DVar12.___pos_2.___x_0 = local_74;
        DVar12.___pos_2.___y_1 = fStack_70;
        DVar12.___invYPos_3.___x_0 = fStack_6c;
        DVar12.___invYPos_3.___y_1 = fStack_68;
        DVar12.___smoothPos_4.___x_0 = local_84;
        DVar12.___smoothPos_4.___y_1 = fStack_80;
        DVar12.___frame_5 = iStack_7c;
        DVar12.___time_6 = fStack_78;
        List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                  (pLVar7,iVar24,DVar12,
                   List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var);
        if ((*(int *)&pCVar6[4].field_0x8 == 0) ||
           (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                      (*(int *)&pCVar6[4].field_0x8 + 0x20),
           pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0)) goto LAB_10e6f923;
        DVar13.___delta_0.___y_1 = fStack_d0;
        DVar13.___delta_0.___x_0 = (float)local_d4;
        DVar13.___smoothDelta_1.___x_0 = fStack_cc;
        DVar13.___smoothDelta_1.___y_1 = fStack_c8;
        DVar13.___pos_2.___x_0 = local_94;
        DVar13.___pos_2.___y_1 = fStack_90;
        DVar13.___invYPos_3.___x_0 = fStack_8c;
        DVar13.___invYPos_3.___y_1 = fStack_88;
        DVar13.___smoothPos_4.___x_0 = local_a4;
        DVar13.___smoothPos_4.___y_1 = fStack_a0;
        DVar13.___frame_5 = iStack_9c;
        DVar13.___time_6 = fStack_98;
        List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                  (pLVar7,iVar24,DVar13,
                   List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var);
        iVar24 = iVar24 + 1;
      } while (iVar24 < (int)local_c);
    }
    Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349(param_1,local_10,(MethodInfo *)0x0);
    Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349(param_1,local_18,(MethodInfo *)0x0);
    local_14 = local_14 + 1;
  }
LAB_10e6f923:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
