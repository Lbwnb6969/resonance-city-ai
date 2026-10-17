// RVA 0x4c5590 | Placemaker.DrawPlane$$IterateUpdate
// PDB: DrawPlane_IterateUpdate_m409B9DBA42C82A7AEA620E4AD6B4D68CCFE1B554
// Body: [[104c5590, 104c57f6] [104c57fa, 104c5ef2]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 1066f480 Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 10a479b0 Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48560 Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e0f220 GridGenerator_AppendQuadList_m0C5893733B52614723B18A072C52204EE7212B0F
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared

void __cdecl
DrawPlane_IterateUpdate_m409B9DBA42C82A7AEA620E4AD6B4D68CCFE1B554
          (DrawPlane_t25E93171CC5BAAB4443AC73B5628F14D1F786176 *param_1,MethodInfo *param_2)

{
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar1;
  uchar *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  float *pfVar5;
  List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *pLVar6;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar7;
  QuadU5BU5D_t872FFC7C4380637473FAED13FE43DDF442E04221 *pQVar8;
  float fVar9;
  float fVar10;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar11;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar12;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar13;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar14;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar15;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar16;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar17;
  bool bVar18;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar19;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar21;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLVar22;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar23;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar24;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX_00;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX_01;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX_02;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX_03;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar25;
  MethodInfo *unaff_EDI;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar26;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar27;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar28;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar29;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_194;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_188;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_17c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_170;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_164;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_158;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_14c;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_140;
  undefined4 local_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int local_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 local_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined8 local_f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e8;
  undefined8 local_dc;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_b8;
  float local_ac;
  float fStack_a8;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_18;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *local_14;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_10;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_8;

  if (DAT_1151d139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAC12695B2E67B38A74D7993943D4CC0160E83EC4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mFD0D2FD320135957299B89379B9A2829FB8E7D09_RuntimeMethod_var)
    ;
    DAT_1151d139 = '\x01';
  }
  pLVar6 = param_1->___nodes_6;
  if (pLVar6 != (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) {
    if (pLVar6->____size_2 == 0) {
      return;
    }
    if (param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      pGVar7 = param_1->___worldMaster_4->___grid_5;
      pCVar19 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
      if ((pCVar19 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) &&
         (pTVar20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar19,
                               (MethodInfo *)0x0),
         pTVar20 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        pVVar21 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                            (&local_b8,pTVar20,(MethodInfo *)0x0);
        local_28._0_4_ = pVVar21->___x_2;
        local_28._4_4_ = pVVar21->___y_3;
        local_14 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pVVar21->___z_4;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        fVar16.___z_2 = (float)local_14;
        fVar16.___x_0 = (float)(undefined4)local_28;
        fVar16.___y_1 = (float)local_28._4_4_;
        fVar27 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                           (fVar16,(MethodInfo *)0x0);
        if (pGVar7 != (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0) {
          bVar18 = GridGenerator_AppendQuadList_m0C5893733B52614723B18A072C52204EE7212B0F
                             (pGVar7,pLVar6,
                              (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar27,
                              &param_1->___hoverIndex_7,1,(MethodInfo *)0x0);
          if (!bVar18) {
            return;
          }
          if ((ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->has_cctor
               != '\0') &&
             (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
          }
          local_18 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                               (
                               ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var
                               );
          if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor
               != '\0') &&
             (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
          }
          local_10 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                               (
                               ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var
                               );
          pLVar22 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                    ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                              (
                              ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var
                              );
          local_14 = pLVar22;
          if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor
               != '\0') &&
             (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
          }
          pDVar23 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                    ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                              (
                              ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var
                              );
          local_8 = pDVar23;
          if (param_1->___nodes_6 != (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) {
            local_3c = param_1->___nodes_6->____size_2;
            local_1c = 0;
            if (0 < local_3c) {
              local_c.___moduleIndex_0 = 2;
              local_c.___flags_1 = '\0';
              local_c._3_1_ = 0;
              local_20 = 0;
              do {
                pLVar6 = param_1->___nodes_6;
                if (pLVar6 == (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0)
                goto LAB_104c5eee;
                if ((uint)pLVar6->____size_2 <= local_1c) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                pQVar8 = pLVar6->____items_1;
                puVar2 = &pQVar8->m_Items[0].___quadIndex_0 + local_20;
                local_134 = *(undefined4 *)puVar2;
                iStack_130 = ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(puVar2 + 4))->
                             ___x_0;
                iStack_12c = *(int *)(puVar2 + 8);
                iStack_128 = ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(puVar2 + 0xc))->
                             ___x_0;
                puVar3 = (undefined4 *)((int)&pQVar8->m_Items[0].___v3_4.___y_1 + local_20);
                local_114 = *puVar3;
                fStack_110 = (float)puVar3[1];
                fStack_10c = (float)puVar3[2];
                fStack_108 = (float)puVar3[3];
                piVar4 = (int *)((int)&pQVar8->m_Items[0].___v1_2.___y_1 + local_20);
                local_124 = *piVar4;
                iStack_120 = piVar4[1];
                iStack_11c = piVar4[2];
                iStack_118 = piVar4[3];
                pfVar5 = (float *)((int)&pQVar8->m_Items[0].___p1_6.___y_1 + local_20);
                local_104 = *pfVar5;
                fStack_100 = pfVar5[1];
                fStack_fc = pfVar5[2];
                fStack_f8 = pfVar5[3];
                local_44 = fStack_110;
                local_40 = fStack_10c;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                fVar27.___y_1 = local_40;
                fVar27.___x_0 = local_44;
                pfVar24 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                    (&local_140,fVar27,0.0,(MethodInfo *)0x0);
                local_f0._0_4_ = pfVar24->___x_0;
                local_f0._4_4_ = pfVar24->___y_1;
                fVar9 = pfVar24->___z_2;
                local_94 = local_f0;
                local_8c = fVar9;
                pfVar24 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                    (&local_14c,*pfVar24,-1.0,(MethodInfo *)0x0);
                local_c0._0_4_ = pfVar24->___x_0;
                local_c0._4_4_ = pfVar24->___y_1;
                fVar10 = pfVar24->___z_2;
                local_4c = fStack_108;
                local_48 = local_104;
                fVar15.___y_1 = local_104;
                fVar15.___x_0 = fStack_108;
                local_88 = local_c0;
                local_80 = fVar10;
                pfVar24 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                    (&local_158,fVar15,-1.0,(MethodInfo *)0x0);
                local_98 = pfVar24->___z_2;
                local_c8._0_4_ = pfVar24->___x_0;
                local_c8._4_4_ = pfVar24->___y_1;
                local_a0 = local_c8;
                local_34 = local_98;
                pfVar24 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                    (&local_164,*pfVar24,0.0,(MethodInfo *)0x0);
                local_dc._0_4_ = pfVar24->___x_0;
                local_dc._4_4_ = pfVar24->___y_1;
                local_b8.___z_4 = pfVar24->___z_2;
                local_e8.___x_2 = pfVar24->___x_0;
                local_e8.___y_3 = pfVar24->___y_1;
                local_ac = ((float)local_94 + (float)local_88 + (float)local_a0 +
                           (float)(undefined4)local_dc) * __real_3e800000;
                local_2c = (float)iStack_12c;
                local_54 = (float)iStack_128;
                local_30 = (float)iStack_130;
                fStack_a8 = (local_88._4_4_ + local_94._4_4_ + local_a0._4_4_ + local_e8.___y_3) *
                            __real_3e800000;
                local_5c = (local_54 + local_30) * __real_3e800000;
                local_a4 = (local_80 + local_8c + local_98 + local_b8.___z_4) * __real_3e800000;
                local_50 = (float)local_124;
                local_58 = (local_2c + local_50) * __real_3e800000;
                local_d0 = local_dc;
                local_b8._0_8_ = local_e8._0_8_;
                local_38 = local_b8.___z_4;
                Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                          (&local_170,(float)local_f0,(float)((ulonglong)local_f0 >> 0x20),fVar9,
                           (MethodInfo *)0x0);
                pDVar28 = local_18;
                if (local_18 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                goto LAB_104c5eee;
                List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                          ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_18,
                           *extraout_EAX,
                           List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
                Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                          (&local_17c,(float)local_c0,(float)((ulonglong)local_c0 >> 0x20),fVar10,
                           (MethodInfo *)0x0);
                List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                          ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pDVar28,
                           *extraout_EAX_00,
                           List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
                Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                          (&local_188,(float)local_c8,(float)((ulonglong)local_c8 >> 0x20),local_34,
                           (MethodInfo *)0x0);
                List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                          ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pDVar28,
                           *extraout_EAX_01,
                           List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
                Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                          (&local_194,(float)local_d0,(float)((ulonglong)local_d0 >> 0x20),local_38,
                           (MethodInfo *)0x0);
                List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                          ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pDVar28,
                           *extraout_EAX_02,
                           List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
                Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                          (&local_1a0,local_ac,fStack_a8,local_a4,(MethodInfo *)0x0);
                List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                          ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pDVar28,
                           *extraout_EAX_03,
                           List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
                fVar9 = local_2c;
                iVar13.___y_1 = (int)local_2c;
                iVar13.___x_0 = (int)local_30;
                iVar13.___z_2 = 0;
                fVar27 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                         HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                   (iVar13,(MethodInfo *)pDVar28);
                pDVar28 = local_10;
                if (local_10 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                goto LAB_104c5eee;
                pDVar29 = local_10;
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_10,fVar27,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                iVar14.___y_1 = (int)fVar9;
                iVar14.___x_0 = (int)local_30;
                iVar14.___z_2 = 0;
                fVar27 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                         HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                   (iVar14,(MethodInfo *)pDVar29);
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pDVar28,fVar27,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                fVar10 = local_50;
                fVar9 = local_54;
                iVar11.___y_1 = (int)local_50;
                iVar11.___x_0 = (int)local_54;
                iVar11.___z_2 = 0;
                fVar27 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                         HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                   (iVar11,(MethodInfo *)pDVar28);
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_10,fVar27,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                iVar17.___y_1 = (int)fVar10;
                iVar17.___x_0 = (int)fVar9;
                iVar17.___z_2 = 0;
                fVar27 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                         HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar17,unaff_EDI)
                ;
                pDVar28 = local_10;
                pDVar29 = local_10;
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_10,fVar27,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                iVar12.___y_1 = (int)local_58;
                iVar12.___x_0 = (int)local_5c;
                iVar12.___z_2 = 0;
                fVar27 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                         HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                   (iVar12,(MethodInfo *)pDVar29);
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pDVar28,fVar27,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                pLVar22 = local_14;
                if (local_14 == (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
                goto LAB_104c5eee;
                local_60 = 0;
                local_64 = 0xbf800000;
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_14,
                           (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0xbf800000,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                local_68 = 0xc0000000;
                local_6c = 0xbf800000;
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar22,
                           (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0xc0000000bf800000,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                local_70 = 0xc0000000;
                local_74 = 0x3f800000;
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar22,
                           (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0xc00000003f800000,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                local_78 = 0;
                local_7c = 0x3f800000;
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar22,
                           (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f800000,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                local_28 = 0xbf80000000000000;
                List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                          ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar22,
                           (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0xbf80000000000000,
                           List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
                pDVar28 = local_8;
                OVar25 = local_c;
                if (pDVar23 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                goto LAB_104c5eee;
                OVar1 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                        ((int)local_c + -2);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_8,OVar1,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar28,
                           (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           ((int)OVar25 + -1),
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                OVar26 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                         ((int)local_c + 2);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_8,OVar26,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                pDVar23 = local_8;
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_8,
                           (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           ((int)OVar25 + -1),
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar23,local_c,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar23,OVar26,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar23,local_c,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                OVar25 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                         ((int)local_c + 1);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_8,OVar25,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_8,OVar26,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_8,OVar25,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                pDVar23 = local_8;
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_8,OVar1,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar23,OVar26,
                           List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
                local_1c = local_1c + 1;
                local_c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                          ((int)local_c + 5);
                local_20 = local_20 + 0x44;
                pLVar22 = local_14;
              } while ((int)local_1c < local_3c);
            }
            if (param_1->___mesh_9 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
              Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
                        (param_1->___mesh_9,(MethodInfo *)0x0);
              if (param_1->___mesh_9 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
                          (param_1->___mesh_9,
                           (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_18,
                           (MethodInfo *)0x0);
                if (param_1->___mesh_9 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                  Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                            (param_1->___mesh_9,0,
                             (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_10,
                             (MethodInfo *)0x0);
                  if (param_1->___mesh_9 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                    Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                              (param_1->___mesh_9,1,pLVar22,(MethodInfo *)0x0);
                    if (param_1->___mesh_9 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0)
                    {
                      Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                                (param_1->___mesh_9,
                                 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar23,0,
                                 (MethodInfo *)0x0);
                      if (param_1->___mesh_9 !=
                          (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                        Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737
                                  (param_1->___mesh_9,(MethodInfo *)0x0);
                        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                  (local_18,
                                   ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                                  );
                        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                  (local_10,
                                   ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
                                  );
                        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                  (pDVar23,
                                   ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                                  );
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
    }
  }
LAB_104c5eee:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
