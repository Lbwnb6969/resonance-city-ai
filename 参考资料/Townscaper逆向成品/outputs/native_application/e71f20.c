// RVA 0xe71f20 | Placemaker.Graphs.Graph$$Iterate
// PDB: Graph_Iterate_m6AF39F16DDE2E3C03D4E2CF021D0DFDAC392B4DB
// Body: [[10e71f20, 10e7207b] [10e72082, 10e7213a] [10e7213e, 10e7221a] [10e72221, 10e72ec4] [10e72ec8, 10e72f6c]]
// Direct callees:
// 1003e660 Invoke
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f5010 WaveFunctionCollapse_QubeUpdated_m93E0BF72453750D534D1A978FD43A610D9CE143F
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 103f9280 WorldMaster_get_keeepGoing_mFF9538A86AC790F5C6E3748EEECAA0667780C620
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 1066d760 Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10871c00 AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9
// 10872190 AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 1092cd60 List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43fd0 Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6d2c0 Graph_IntegrateCorner_m5CFA54D487073860589A818EC49AE96AD15BABBE
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11036bc0 List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
// 1108ddc0 List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared

bool __cdecl
Graph_Iterate_m6AF39F16DDE2E3C03D4E2CF021D0DFDAC392B4DB
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  uchar uVar1;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar2;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar3;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar4;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *pWVar5;
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar6;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar7;
  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *pTVar8;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar9;
  List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *pLVar10;
  List_1_t21F583C5E4A57BCEF6177F42179552BE21568686 *pLVar11;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar12;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar13;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar14;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar17;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar18;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar19;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar20;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar21;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar22;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar23;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar24;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar25;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar26;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar27;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar28;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar29;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar30;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar31;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar32;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar33;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar34;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar35;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar36;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar37;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar38;
  undefined1 *puVar39;
  bool bVar40;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar41;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar42;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar43;
  int iVar44;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar45;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar46;
  ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *pSVar47;
  Il2CppObject *pIVar48;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar49;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar50;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar51;
  int iVar52;
  uint uVar53;
  uint uVar54;
  MethodInfo *unaff_EDI;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar55;
  float fVar56;
  float fVar57;
  ValueTuple_2_t5F161220C70E1DE0316457C0E595420591447B84 VVar58;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar59;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar60;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar61;
  MethodInfo *pMVar62;
  MethodInfo *pMVar63;
  List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *pLVar64;
  undefined2 uVar65;
  undefined2 uVar66;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_118;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10c;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_100;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_f4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_e8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_dc;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_c4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_b8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_ac;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_94;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_88;
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 local_68;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_60;
  int local_58;
  int iStack_54;
  undefined8 uStack_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  MethodInfo *local_14;
  uchar local_f;
  uchar local_e;
  uchar local_d;
  float local_c;
  List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *local_8;

  pGVar43 = param_1;
  if (DAT_11522830 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m5F2911AFBCA6344B88C4766B24105E7E2DF6AF4B_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m2B79420EC79C50EE5A55922DBD9D4192D12EAF51_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m4A6ABD183823501A4F9A6082D9EDC589029AD221_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m6EDDF72B0943199599EB25A816D9B468E1B9BF3C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_m334A88FBF05BD03FDCFC54C601AF9E677A784F01_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m2D824BA8DB5C08E453D1087232C69DB7E73AB353_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m4C779AD722E9B2D6B392FE2BB91ED99C563A9E89_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE71C2B070FD46A88A0B5805D7B43E0769A22F125_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m77E89752C3DA0F7404540C725413E34437C67664_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m92B87B6A267C5B42138E03C43C54968471155F1B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_11522830 = '\x01';
  }
  if (param_1->___cornerIntegrationQueue_19 !=
      (List_1_t21F583C5E4A57BCEF6177F42179552BE21568686 *)0x0) {
    iVar52 = param_1->___cornerIntegrationQueue_19->____size_2;
    if (0 < iVar52) {
      uVar54 = iVar52 - 1;
      if (-1 < (int)uVar54) {
        param_1 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)(uVar54 * 4 + 0x10);
        do {
          if (pGVar43->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
          goto LAB_10e72f68;
          bVar40 = WorldMaster_get_keeepGoing_mFF9538A86AC790F5C6E3748EEECAA0667780C620
                             (pGVar43->___master_4,(MethodInfo *)0x0);
          if (!bVar40) {
            return true;
          }
          pLVar11 = pGVar43->___cornerIntegrationQueue_19;
          if (pLVar11 == (List_1_t21F583C5E4A57BCEF6177F42179552BE21568686 *)0x0) goto LAB_10e72f68;
          if ((uint)pLVar11->____size_2 <= uVar54) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pCVar12 = *(Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 **)
                     (pLVar11->____items_1 + (int)&param_1->_padding_);
          if (pCVar12 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) goto LAB_10e72f68;
          local_24 = CONCAT44(pCVar12->___colliderMesh_6,(undefined4)local_24);
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar40 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_24._4_4_,
                              (MethodInfo *)0x0);
          if (!bVar40) {
            pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar12,
                                 (MethodInfo *)0x0);
            if (pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            goto LAB_10e72f68;
            iVar52 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                               (pTVar41,(MethodInfo *)0x0);
            if ((iVar52 != 0) &&
               (bVar40 = Graph_IntegrateCorner_m5CFA54D487073860589A818EC49AE96AD15BABBE
                                   (pGVar43,pCVar12,(MethodInfo *)0x0), !bVar40)) {
              return true;
            }
          }
          if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
              pGVar43->___cornerIntegrationQueue_19 ==
              (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10e72f68;
          List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                    ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                     pGVar43->___cornerIntegrationQueue_19,uVar54,
                     List_1_RemoveAt_m2B79420EC79C50EE5A55922DBD9D4192D12EAF51_RuntimeMethod_var);
          param_1 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)&param_1[-1].___loadState_44;
          uVar54 = uVar54 - 1;
        } while (-1 < (int)uVar54);
      }
      return true;
    }
    if (param_1->___qubeUpdateQueue_21 != (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)0x0) {
      pCVar55 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                param_1->___qubeUpdateQueue_21->____size_2;
      if ((int)pCVar55 < 1) {
        pLVar2 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___cornerFlowQueue_20;
        if (pLVar2 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
          uVar54 = pLVar2->____size_2;
          if ((int)uVar54 < 1) {
            return false;
          }
          if (uVar54 <= uVar54 - 1) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pCVar55 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                    pLVar2->____items_1->m_Items[uVar54 - 1];
          local_28 = pCVar55;
          if ((pLVar2 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) &&
             (List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                        (pLVar2,uVar54 - 1,
                         List_1_RemoveAt_m2B79420EC79C50EE5A55922DBD9D4192D12EAF51_RuntimeMethod_var
                        ), pCVar55 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
            *(undefined1 *)(pCVar55 + 3) = 0;
            pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                (pCVar55,(MethodInfo *)0x0);
            if (pTVar41 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              pOVar42 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                        Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                  (pTVar41,(MethodInfo *)0x0);
              pOVar45 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___cornerPool_7
              ;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar40 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                 (pOVar42,pOVar45,(MethodInfo *)0x0);
              if (bVar40) {
                if (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)&pCVar55[2].field_0x8 !=
                    (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                  List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                            (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
                              &pCVar55[2].field_0x8,
                             List_1_Clear_m5F2911AFBCA6344B88C4766B24105E7E2DF6AF4B_RuntimeMethod_var
                            );
                  return true;
                }
              }
              else {
                pGVar43 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0;
                param_1 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0;
                if (*(int *)&pCVar55[1].field_0x8 != 0) {
                  uVar54 = *(int *)(*(int *)&pCVar55[1].field_0x8 + 0xc) - 1;
                  if (-1 < (int)uVar54) {
                    iVar52 = uVar54 * 4 + 0x10;
                    do {
                      iVar44 = *(int *)&pCVar55[1].field_0x8;
                      if (iVar44 == 0) goto LAB_10e72f68;
                      if (*(uint *)(iVar44 + 0xc) <= uVar54) {
                    /* WARNING: Subroutine does not return */
                        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                  ((MethodInfo *)0x0);
                      }
                      pCVar55 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                 (iVar52 + *(int *)(iVar44 + 8));
                      if ((pCVar55 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
                         (pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              (pCVar55,(MethodInfo *)0x0),
                         pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                      goto LAB_10e72f68;
                      iVar44 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                         (pTVar41,(MethodInfo *)0x0);
                      pGVar43 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)
                                Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                                          ((int)param_1,iVar44,(MethodInfo *)0x0);
                      iVar52 = iVar52 + -4;
                      uVar54 = uVar54 - 1;
                      pCVar55 = local_28;
                      param_1 = pGVar43;
                    } while (-1 < (int)uVar54);
                  }
                  pLVar3 = *(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
                            &pCVar55[2].field_0x8;
                  if (pLVar3 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                    if (pLVar3->____size_2 <= (int)pGVar43) {
                      return true;
                    }
                    List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                              (pLVar3,(int)pGVar43,pLVar3->____size_2 - (int)pGVar43,
                               List_1_RemoveRange_m334A88FBF05BD03FDCFC54C601AF9E677A784F01_RuntimeMethod_var
                              );
                    return true;
                  }
                }
              }
            }
          }
        }
      }
      else {
        while (puVar39 = &pCVar55[-1].field_0xb,
              local_28 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)puVar39,
              -1 < (int)puVar39) {
          if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
          goto LAB_10e72f68;
          bVar40 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                             (param_1->___master_4,(MethodInfo *)0x0);
          if (!bVar40) break;
          pLVar2 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                   param_1->___qubeUpdateQueue_21;
          if (pLVar2 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10e72f68;
          if ((undefined1 *)pLVar2->____size_2 <= puVar39) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pQVar4 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                   pLVar2->____items_1->m_Items[(int)puVar39];
          if (((pLVar2 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) ||
              (List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                         (pLVar2,(int)puVar39,
                          List_1_RemoveAt_m6EDDF72B0943199599EB25A816D9B468E1B9BF3C_RuntimeMethod_var
                         ), pQVar4 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) ||
             (pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar4,
                                   (MethodInfo *)0x0),
             pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_10e72f68;
          pTVar41 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                              (pTVar41,(MethodInfo *)0x0);
          local_24 = CONCAT44(pTVar41,(undefined4)local_24);
          if (pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_10e72f68;
          pOVar45 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                    Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                              (pTVar41,(MethodInfo *)0x0);
          local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_1->___squares_8;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar40 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                             (pOVar45,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_8,
                              (MethodInfo *)0x0);
          if (bVar40) {
            if ((param_1->___master_4 ==
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
               (pWVar5 = param_1->___master_4->___waveFunctionCollapse_10,
               pWVar5 == (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0))
            goto LAB_10e72f68;
            WaveFunctionCollapse_QubeUpdated_m93E0BF72453750D534D1A978FD43A610D9CE143F
                      (pWVar5,pQVar4,(MethodInfo *)0x0);
          }
          pQVar4->___awaitingGraphUpdate_16 = false;
          local_d = (pQVar4->___cornerValues_13).___v1_1;
          uVar1 = (pQVar4->___cornerValues_13).___v0_0;
          local_e = (pQVar4->___cornerValues_13).___v2_2;
          local_f = (pQVar4->___cornerValues_13).___v3_3;
          pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar4,
                               (MethodInfo *)0x0);
          if (pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_10e72f68;
          pVVar46 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                              (&local_88,pTVar41,(MethodInfo *)0x0);
          local_7c._0_4_ = pVVar46->___x_2;
          local_7c._4_4_ = pVVar46->___y_3;
          local_c = (float)local_7c._4_4_;
          if ((!bVar40) || ((float)local_7c._4_4_ <= __real_3dcccccd)) {
            bVar40 = false;
          }
          else {
            bVar40 = (local_d != '\x12' || (local_e != '\x12' || local_f != '\x12')) ||
                     uVar1 != '\x12';
          }
          local_14 = (MethodInfo *)((uint)pQVar4->___shadowIndex_7 >> 0x1f ^ 1);
          if (bVar40) {
            if ((param_1->___master_4 ==
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
               (pAVar6 = param_1->___master_4->___aoBaker_11,
               pAVar6 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0))
            goto LAB_10e72f68;
            if (uVar1 == '\x12') {
              uVar54 = 0x10;
            }
            else {
              uVar54 = (uint)(pQVar4->___cornerValues_13).___v0_0;
            }
            if (local_d == '\x12') {
              uVar53 = 0x10;
            }
            else {
              uVar53 = (uint)(pQVar4->___cornerValues_13).___v1_1;
            }
            if (local_e == '\x12') {
              local_1c = 2.24208e-44;
            }
            else {
              local_1c = (float)(uint)(pQVar4->___cornerValues_13).___v2_2;
            }
            local_58 = (pAVar6->___powers_30).___x_0;
            iStack_54 = (pAVar6->___powers_30).___y_1;
            uStack_50._0_4_ = (pAVar6->___powers_30).___z_2;
            uStack_50._4_4_ = (pAVar6->___powers_30).___w_3;
            local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                      ((pAVar6->___powers_30).___y_1 * uVar53 +
                      (pAVar6->___powers_30).___x_0 * uVar54);
            if (local_f == '\x12') {
              uVar54 = 0x10;
            }
            else {
              uVar54 = (uint)(pQVar4->___cornerValues_13).___v3_3;
            }
            iVar52 = ((int)&local_8->_padding_ +
                     (pAVar6->___powers_30).___z_2 * (int)local_1c +
                     (pAVar6->___powers_30).___w_3 * uVar54) * 2;
            if (pAVar6->___marchingSquaresTex_17 ==
                (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) goto LAB_10e72f68;
            local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                      VirtFuncInvoker0<int>::Invoke
                                (4,(Il2CppObject *)pAVar6->___marchingSquaresTex_17);
            if (((param_1->___master_4 ==
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                (pAVar6 = param_1->___master_4->___aoBaker_11,
                pAVar6 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0)) ||
               (pTVar7 = pAVar6->___marchingSquaresTex_17,
               pTVar7 == (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0))
            goto LAB_10e72f68;
            iVar44 = VirtFuncInvoker0<int>::Invoke(4,(Il2CppObject *)pTVar7);
            local_18 = (float)(iVar52 / iVar44);
            if (((param_1->___master_4 ==
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                (pAVar6 = param_1->___master_4->___aoBaker_11,
                pAVar6 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0)) ||
               (pTVar8 = (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                         pAVar6->___marchingSquaresTex_17,
               pTVar8 == (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)0x0))
            goto LAB_10e72f68;
            uVar65 = SUB42(pTVar8,0);
            uVar66 = (undefined2)((uint)pTVar8 >> 0x10);
            VVar59 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
                               (pTVar8,(MethodInfo *)0x0);
            iVar24.___z_2 = 0;
            iVar24.___x_0 = (int)VVar59.___x_0;
            iVar24.___y_1 = (int)VVar59.___y_1;
            local_60 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                 (iVar24,(MethodInfo *)CONCAT22(uVar66,uVar65));
            fVar57 = (float)local_60.___y_1 * __real_3f000000 +
                     (float)((int)local_18 * 2) * (float)local_60.___y_1;
            fVar56 = (float)local_60.___x_0 * __real_3f000000 +
                     (float)(iVar52 % (int)local_8) * (float)local_60.___x_0;
            local_40 = fVar56 + (float)local_60.___x_0 + __real_3f800000;
            local_48 = fVar56 + (float)local_60.___x_0 * 0.0 + 0.0;
            local_34 = fVar57 + (float)local_60.___y_1 * 0.0 + 0.0;
            local_44 = fVar57 + (float)local_60.___y_1 + __real_3f800000;
            local_3c = local_44;
            local_38 = local_40;
            local_30 = local_48;
            local_2c = local_34;
            if ((char)local_14 == '\0') {
              local_c = local_c - __real_3f000000;
              pIVar48 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   local_24._4_4_,
                                   Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
                                  );
              if (((pIVar48 == (Il2CppObject *)0x0) || (pIVar48[5].monitor == (MonitorData *)0x0))
                 || (pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                          pIVar48[5].monitor,(MethodInfo *)0x0),
                    pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
              goto LAB_10e72f68;
              pVVar46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_c4,pTVar41,(MethodInfo *)0x0);
              uStack_50._0_4_ = pVVar46->___x_2;
              uStack_50._4_4_ = pVVar46->___y_3;
              fVar56 = pVVar46->___z_4;
              local_24._4_4_ = (MethodInfo *)fVar56;
              if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
              }
              fVar25.___z_2 = (float)local_24._4_4_;
              fVar25.___x_0 = (float)(undefined4)uStack_50;
              fVar25.___y_1 = (float)uStack_50._4_4_;
              pfVar49 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                  (&local_d0,fVar25,local_c,(MethodInfo *)0x0);
              local_24._0_4_ = pfVar49->___x_0;
              local_24._4_4_ = (MethodInfo *)pfVar49->___y_1;
              local_1c = pfVar49->___z_2;
              if ((pIVar48[6].field0_0x0.klass == (Il2CppClass *)0x0) ||
                 (pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pIVar48[6].field0_0x0.klass,(MethodInfo *)0x0),
                 pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
              goto LAB_10e72f68;
              pfVar49 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                        Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_dc,pTVar41,(MethodInfo *)0x0);
              pfVar49 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                  (&local_e8,*pfVar49,local_c,(MethodInfo *)0x0);
              local_68._0_4_ = pfVar49->___x_0;
              local_68._4_4_ = pfVar49->___y_1;
              local_18 = pfVar49->___z_2;
              if ((pIVar48[6].monitor == (MonitorData *)0x0) ||
                 (pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pIVar48[6].monitor,(MethodInfo *)0x0),
                 pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
              goto LAB_10e72f68;
              pfVar49 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                        Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_f4,pTVar41,(MethodInfo *)0x0);
              pfVar49 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                  (&local_100,*pfVar49,local_c,(MethodInfo *)0x0);
              local_70._0_4_ = pfVar49->___x_0;
              local_70._4_4_ = pfVar49->___y_1;
              local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pfVar49->___z_2;
              if ((pIVar48[7].field0_0x0.klass == (Il2CppClass *)0x0) ||
                 (pTVar41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pIVar48[7].field0_0x0.klass,(MethodInfo *)0x0),
                 pTVar41 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
              goto LAB_10e72f68;
              pfVar49 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                        Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_10c,pTVar41,(MethodInfo *)0x0);
              pfVar49 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                  (&local_118,*pfVar49,local_c,(MethodInfo *)0x0);
              uStack_50._0_4_ = pfVar49->___x_0;
              uStack_50._4_4_ = pfVar49->___y_1;
              local_c = pfVar49->___z_2;
              pLVar9 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                       param_1->___shadowMeshIndexes_23;
              if (pLVar9 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)
              goto LAB_10e72f68;
              if (0 < pLVar9->____size_2) {
                iVar52 = pLVar9->____size_2 + -1;
                pGVar50 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                    (pLVar9,iVar52,
                                     List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                    );
                pQVar4->___shadowIndex_7 = (int)pGVar50;
                if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                    param_1->___shadowMeshIndexes_23 !=
                    (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
                  List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                            ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                             param_1->___shadowMeshIndexes_23,iVar52,
                             List_1_RemoveAt_m4A6ABD183823501A4F9A6082D9EDC589029AD221_RuntimeMethod_var
                            );
                  if ((param_1->___master_4 !=
                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                     (pAVar6 = param_1->___master_4->___aoBaker_11,
                     pAVar6 != (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0)) {
                    VVar58 = AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
                                       (pAVar6,pQVar4->___shadowIndex_7,(MethodInfo *)0x0);
                    iVar52 = VVar58.___Item2_1;
                    pSVar47 = VVar58.___Item1_0;
                    if ((pSVar47 != (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *)0x0) &&
                       ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                        pSVar47->___shadowMeshVerts_4 !=
                        (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)) {
                      lVar34.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = SUB42(local_1c,0);
                      lVar34.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_24;
                      lVar34.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)local_24._4_4_;
                      lVar34.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ =
                           (short)((uint)local_1c >> 0x10);
                      List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                                ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                 pSVar47->___shadowMeshVerts_4,iVar52,lVar34,
                                 List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                                );
                      if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                          pSVar47->___shadowMeshVerts_4 !=
                          (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) {
                        local_14 = (MethodInfo *)(iVar52 + 1);
                        lVar35.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = SUB42(local_18,0);
                        lVar35.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_68;
                        lVar35.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_68._4_4_;
                        lVar35.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ =
                             (short)((uint)local_18 >> 0x10);
                        List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                                  ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                   pSVar47->___shadowMeshVerts_4,(int)local_14,lVar35,
                                   List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                                  );
                        if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                            pSVar47->___shadowMeshVerts_4 !=
                            (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) {
                          local_18 = (float)(iVar52 + 2);
                          lVar36.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = (short)local_8;
                          lVar36.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_70;
                          lVar36.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_70._4_4_;
                          lVar36.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ =
                               (short)((uint)local_8 >> 0x10);
                          List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                     pSVar47->___shadowMeshVerts_4,(int)local_18,lVar36,
                                     List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                                    );
                          pMVar62 = (MethodInfo *)pSVar47->___shadowMeshVerts_4;
                          if (pMVar62 != (MethodInfo *)0x0) {
                            local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                      (iVar52 + 3);
                            lVar37.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = SUB42(local_c,0);
                            lVar37.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)uStack_50;
                            lVar37.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = uStack_50._4_4_;
                            lVar37.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ =
                                 (short)((uint)local_c >> 0x10);
                            List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                                      ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pMVar62,
                                       (int)local_8,lVar37,
                                       List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                                      );
                            local_24 = CONCAT44(pSVar47->___shadowMeshUvs_5,(undefined4)local_24);
                            iVar13.___y_1 = (int)local_2c;
                            iVar13.___x_0 = (int)local_30;
                            iVar13.___z_2 = 0;
                            VVar59 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                     HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                               (iVar13,pMVar62);
                            if (local_24._4_4_ != (MethodInfo *)0x0) {
                              pMVar63 = local_24._4_4_;
                              List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                        ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                         local_24._4_4_,iVar52,VVar59,
                                         List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var
                                        );
                              pMVar62 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
                              iVar18.___y_1 = (int)local_34;
                              iVar18.___x_0 = (int)local_38;
                              iVar18.___z_2 = 0;
                              VVar59 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                       HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                                 (iVar18,pMVar63);
                              if (pMVar62 != (MethodInfo *)0x0) {
                                List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                          ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                           pMVar62,(int)local_14,VVar59,
                                           List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var
                                          );
                                pMVar63 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
                                iVar19.___y_1 = (int)local_3c;
                                iVar19.___x_0 = (int)local_40;
                                iVar19.___z_2 = 0;
                                VVar59 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                         HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                                   (iVar19,pMVar62);
                                if (pMVar63 != (MethodInfo *)0x0) {
                                  List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                            ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                             pMVar63,(int)local_18,VVar59,
                                             List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var
                                            );
                                  pMVar62 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
                                  iVar20.___y_1 = (int)local_44;
                                  iVar20.___x_0 = (int)local_48;
                                  iVar20.___z_2 = 0;
                                  iVar60 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                                     (iVar20,pMVar63);
                                  if (pMVar62 != (MethodInfo *)0x0) {
                                    iVar52 = iVar60.___x_0;
                                    uVar65 = (undefined2)iVar60.___y_1;
                                    uVar66 = iVar60.___y_1._2_2_;
                                    pLVar64 = local_8;
                                    goto LAB_10e72e2f;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_10e72f68;
              }
              iVar52 = param_1->___shadowMeshIndexIterator_24;
              param_1->___shadowMeshIndexIterator_24 = iVar52 + 1;
              pQVar4->___shadowIndex_7 = iVar52;
              if ((param_1->___master_4 ==
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                 (pAVar6 = param_1->___master_4->___aoBaker_11,
                 pAVar6 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0))
              goto LAB_10e72f68;
              VVar58 = AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
                                 (pAVar6,iVar52,(MethodInfo *)0x0);
              OVar51 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)VVar58.___Item2_1;
              pSVar47 = VVar58.___Item1_0;
              if ((pSVar47 == (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *)0x0) ||
                 ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar47->___shadowMeshTris_6
                  == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)) goto LAB_10e72f68;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                         pSVar47->___shadowMeshTris_6,OVar51,
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar47->___shadowMeshTris_6
                  == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e72f68;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                         pSVar47->___shadowMeshTris_6,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar51 + 1)
                         ,List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar47->___shadowMeshTris_6
                  == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e72f68;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                         pSVar47->___shadowMeshTris_6,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar51 + 2)
                         ,List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar47->___shadowMeshTris_6
                  == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e72f68;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                         pSVar47->___shadowMeshTris_6,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar51 + 2)
                         ,List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar47->___shadowMeshTris_6
                  == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e72f68;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                         pSVar47->___shadowMeshTris_6,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar51 + 3)
                         ,List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar47->___shadowMeshTris_6
                  == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e72f68;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                         pSVar47->___shadowMeshTris_6,OVar51,
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar47->___shadowMeshVerts_4
                  == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_10e72f68;
              lVar30.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = SUB42(local_1c,0);
              lVar30.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_24;
              lVar30.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)local_24._4_4_;
              lVar30.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)local_1c >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                         pSVar47->___shadowMeshVerts_4,lVar30,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar47->___shadowMeshVerts_4
                  == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_10e72f68;
              lVar31.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = SUB42(local_18,0);
              lVar31.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_68;
              lVar31.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_68._4_4_;
              lVar31.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)local_18 >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                         pSVar47->___shadowMeshVerts_4,lVar31,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar47->___shadowMeshVerts_4
                  == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_10e72f68;
              lVar32.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = (short)local_8;
              lVar32.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_70;
              lVar32.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_70._4_4_;
              lVar32.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)local_8 >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                         pSVar47->___shadowMeshVerts_4,lVar32,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              pMVar62 = (MethodInfo *)pSVar47->___shadowMeshVerts_4;
              if (pMVar62 == (MethodInfo *)0x0) goto LAB_10e72f68;
              lVar33.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = SUB42(local_c,0);
              lVar33.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)uStack_50;
              lVar33.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = uStack_50._4_4_;
              lVar33.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)local_c >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pMVar62,lVar33,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              pMVar63 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
              iVar17.___y_1 = (int)local_2c;
              iVar17.___x_0 = (int)local_30;
              iVar17.___z_2 = 0;
              fVar61 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                       HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar17,pMVar62);
              if (pMVar63 == (MethodInfo *)0x0) goto LAB_10e72f68;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pMVar63,fVar61,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              pMVar62 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
              iVar21.___y_1 = (int)local_34;
              iVar21.___x_0 = (int)local_38;
              iVar21.___z_2 = 0;
              fVar61 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                       HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar21,pMVar63);
              if (pMVar62 == (MethodInfo *)0x0) goto LAB_10e72f68;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pMVar62,fVar61,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              pMVar63 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
              iVar22.___y_1 = (int)local_3c;
              iVar22.___x_0 = (int)local_40;
              iVar22.___z_2 = 0;
              fVar61 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                       HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar22,pMVar62);
              if (pMVar63 == (MethodInfo *)0x0) goto LAB_10e72f68;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pMVar63,fVar61,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              pLVar10 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                        pSVar47->___shadowMeshUvs_5;
              iVar23.___y_1 = (int)local_44;
              iVar23.___x_0 = (int)local_48;
              iVar23.___z_2 = 0;
              fVar61 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                       HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar23,pMVar63);
              if (pLVar10 == (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0)
              goto LAB_10e72f68;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        (pLVar10,fVar61,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
            }
            else {
              if ((param_1->___master_4 ==
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                 (pAVar6 = param_1->___master_4->___aoBaker_11,
                 pAVar6 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0))
              goto LAB_10e72f68;
              VVar58 = AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
                                 (pAVar6,pQVar4->___shadowIndex_7,(MethodInfo *)0x0);
              iVar44 = VVar58.___Item2_1;
              pSVar47 = VVar58.___Item1_0;
              if (pSVar47 == (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *)0x0)
              goto LAB_10e72f68;
              local_14 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
              iVar38.___y_1._0_2_ = SUB42(local_2c,0);
              iVar38.___x_0 = (int)local_30;
              iVar38.___y_1._2_2_ = (short)((uint)local_2c >> 0x10);
              iVar38.___z_2 = 0;
              VVar59 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                       HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar38,unaff_EDI);
              if (local_14 == (MethodInfo *)0x0) goto LAB_10e72f68;
              List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                        ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_14,iVar44,VVar59,
                         List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var
                        );
              iVar14.___y_1 = (int)local_34;
              iVar14.___x_0 = (int)local_38;
              iVar14.___z_2 = 0;
              pMVar62 = local_14;
              local_14 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
              VVar59 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                       HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar14,pMVar62);
              if (local_14 == (MethodInfo *)0x0) goto LAB_10e72f68;
              List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                        ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_14,iVar44 + 1,
                         VVar59,
                         List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var
                        );
              iVar15.___y_1 = (int)local_3c;
              iVar15.___x_0 = (int)local_40;
              iVar15.___z_2 = 0;
              pMVar62 = local_14;
              local_14 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
              VVar59 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                       HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar15,pMVar62);
              if (local_14 == (MethodInfo *)0x0) goto LAB_10e72f68;
              List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                        ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_14,iVar44 + 2,
                         VVar59,
                         List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var
                        );
              iVar16.___y_1 = (int)local_44;
              iVar16.___x_0 = (int)local_48;
              iVar16.___z_2 = 0;
              pMVar62 = local_14;
              local_14 = (MethodInfo *)pSVar47->___shadowMeshUvs_5;
              iVar60 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar16,pMVar62);
              if (local_14 == (MethodInfo *)0x0) goto LAB_10e72f68;
              iVar52 = iVar60.___x_0;
              uVar65 = (undefined2)iVar60.___y_1;
              uVar66 = iVar60.___y_1._2_2_;
              pMVar62 = local_14;
              pLVar64 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)(iVar44 + 3);
LAB_10e72e2f:
              VVar59.___y_1._0_2_ = uVar65;
              VVar59.___x_0 = (float)iVar52;
              VVar59.___y_1._2_2_ = uVar66;
              List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                        ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pMVar62,(int)pLVar64,
                         VVar59,
                         List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var
                        );
            }
            pSVar47->___dirty_7 = true;
            pCVar55 = local_28;
          }
          else {
            pCVar55 = local_28;
            if ((char)local_14 != '\0') {
              if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                  param_1->___shadowMeshIndexes_23 ==
                  (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e72f68;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                         param_1->___shadowMeshIndexes_23,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                         pQVar4->___shadowIndex_7,
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              if ((param_1->___master_4 ==
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                 (pAVar6 = param_1->___master_4->___aoBaker_11,
                 pAVar6 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0))
              goto LAB_10e72f68;
              VVar58 = AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
                                 (pAVar6,pQVar4->___shadowIndex_7,(MethodInfo *)0x0);
              local_c = (float)VVar58.___Item2_1;
              pSVar47 = VVar58.___Item1_0;
              if (pSVar47 == (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *)0x0)
              goto LAB_10e72f68;
              local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                        pSVar47->___shadowMeshVerts_4;
              pVVar46 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                  (&local_94,(MethodInfo *)0x0);
              if (local_8 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
              goto LAB_10e72f68;
              lVar26.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)pVVar46->___z_4 >> 0x10)
              ;
              lVar26._0_10_ = *(unkbyte10 *)pVVar46;
              List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                        (local_8,(int)local_c,lVar26,
                         List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                        );
              local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                        pSVar47->___shadowMeshVerts_4;
              pVVar46 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                  (&local_a0,(MethodInfo *)0x0);
              if (local_8 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
              goto LAB_10e72f68;
              lVar27.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)pVVar46->___z_4 >> 0x10)
              ;
              lVar27._0_10_ = *(unkbyte10 *)pVVar46;
              List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                        (local_8,(int)local_c + 1,lVar27,
                         List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                        );
              local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                        pSVar47->___shadowMeshVerts_4;
              pVVar46 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                  (&local_ac,(MethodInfo *)0x0);
              if (local_8 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
              goto LAB_10e72f68;
              lVar28.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)pVVar46->___z_4 >> 0x10)
              ;
              lVar28._0_10_ = *(unkbyte10 *)pVVar46;
              List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                        (local_8,(int)local_c + 2,lVar28,
                         List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                        );
              local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                        pSVar47->___shadowMeshVerts_4;
              pVVar46 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                  (&local_b8,(MethodInfo *)0x0);
              if (local_8 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
              goto LAB_10e72f68;
              lVar29.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)pVVar46->___z_4 >> 0x10)
              ;
              lVar29._0_10_ = *(unkbyte10 *)pVVar46;
              List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                        (local_8,(int)local_c + 3,lVar29,
                         List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                        );
              pSVar47->___dirty_7 = true;
              pQVar4->___shadowIndex_7 = -1;
              pCVar55 = local_28;
            }
          }
        }
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pAVar6 = param_1->___master_4->___aoBaker_11,
              pAVar6 != (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0)) {
          AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9(pAVar6,(MethodInfo *)0x0);
          return true;
        }
      }
    }
  }
LAB_10e72f68:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
