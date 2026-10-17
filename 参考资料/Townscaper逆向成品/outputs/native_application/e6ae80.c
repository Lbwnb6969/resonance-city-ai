// RVA 0xe6ae80 | Placemaker.Graphs.Graph$$AddVoxel
// PDB: Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
// Body: [[10e6ae80, 10e6b477]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10836300 ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
// 108363d0 ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e13c00 GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
// 10e6b990 Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
// 10e6bd70 Graph_GetNewVoxel_m0B09771C46996923D1D5FB695A23F7A9ED146893
// 10e6bec0 Graph_GetOrCreateCorner_m6C8F0359621DA3A1F5E189E663A9B54485D9183F
// 10e6d2c0 Graph_IntegrateCorner_m5CFA54D487073860589A818EC49AE96AD15BABBE
// 10e6eee0 Graph_IntegrateVoxel_m9BE5C2638CC130B86187A084C4758C910D77F676
// 10f04bc0 String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 * __cdecl
Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,uchar param_3,schar param_4,
          bool param_5,MethodInfo *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar7;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar9;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar10;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar11;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar12;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar13;
  undefined1 auVar14 [12];
  int iVar15;
  int iVar16;
  bool bVar17;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar18;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar19;
  uint uVar20;
  int iVar21;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar22;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar23;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *piVar24;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX;
  Il2CppObject *pIVar26;
  Il2CppObject *pIVar27;
  String_t *pSVar28;
  undefined8 uVar29;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar30;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F local_58;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_40;
  undefined4 local_34;
  float fStack_30;
  int local_2c;
  undefined8 local_28;
  int local_20;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_1c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_18;
  undefined8 local_14;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *local_c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_8;

  if (DAT_1152283a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m4C779AD722E9B2D6B392FE2BB91ED99C563A9E89_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralAB556B5DB49112FDA7C63D30EEBF6823E5720C3C);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var);
    DAT_1152283a = '\x01';
  }
  iVar21 = param_2.___y_1;
  iVar11.___y_1 = param_2.___y_1;
  iVar11.___x_0 = param_2.___x_0;
  OVar18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
           Graph_GetOrCreateCorner_m6C8F0359621DA3A1F5E189E663A9B54485D9183F
                     (param_1,iVar11,(MethodInfo *)0x0);
  local_1c = OVar18;
  if (OVar18 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
    pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar18,
                         (MethodInfo *)0x0);
    local_14 = (ulonglong)CONCAT14(param_3,(undefined4)local_14);
    uVar20 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                       (param_1,pTVar19,(uint)param_3,(MethodInfo *)0x0);
    iVar5 = param_2.___y_1;
    local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)~uVar20;
    if (-1 < (int)uVar20) {
      local_20 = param_2.___x_0;
      param_2.___y_1._0_2_ = (undefined2)iVar21;
      param_2.___y_1._2_1_ = SUB41(iVar21,2);
      param_2.___y_1._3_1_ = SUB41(iVar21,3);
      local_1c.___moduleIndex_0 = (undefined2)param_2.___y_1;
      local_1c.___flags_1 = param_2.___y_1._2_1_;
      local_1c._3_1_ = param_2.___y_1._3_1_;
      param_2.___y_1 = iVar5;
      pIVar26 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var,
                                 &local_20);
      param_2.___y_1 = CONCAT13(param_3,(undefined3)param_2.___y_1);
      pIVar27 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                                 (void *)((int)&param_2.___y_1 + 3));
      pSVar28 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                          (_stringLiteralAB556B5DB49112FDA7C63D30EEBF6823E5720C3C,pIVar26,pIVar27,
                           (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                ((Il2CppObject *)pSVar28,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)OVar18,
                 (MethodInfo *)0x0);
      return (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
    }
    if (param_1->___voxelPool_11 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (param_1->___voxelPool_11,(MethodInfo *)0x0);
      if (iVar21 < 1) {
        pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar18,
                             (MethodInfo *)0x0);
        pVVar22 = Graph_GetNewVoxel_m0B09771C46996923D1D5FB695A23F7A9ED146893
                            (param_1,pTVar19,(MethodInfo *)0x0);
        local_c = pVVar22;
      }
      else {
        pTVar19 = param_1->___voxelPool_11;
        if (pTVar19 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6b473;
        iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (pTVar19,(MethodInfo *)0x0);
        pTVar19 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (pTVar19,iVar21 + -1,(MethodInfo *)0x0);
        if (pTVar19 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6b473;
        pVVar22 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar19,
                             Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                            );
        local_c = pVVar22;
        if (pVVar22 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) goto LAB_10e6b473;
        local_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar22,
                             (MethodInfo *)0x0);
        pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar18,
                             (MethodInfo *)0x0);
        if (local_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6b473;
        Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                  (local_8,pTVar19,(MethodInfo *)0x0);
      }
      if (pVVar22 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
        pVVar22->___height_5 = param_3;
        pVVar22->___type_4 = param_4;
        pVVar22->___cost_6 =
             param_2.___y_1 * 0x4822a3e9 + -0x2de2f6bb +
             param_2.___x_0 * 0x4c7f6dd1 + local_14._4_4_ * -0x553c3da3;
        pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar22,
                             (MethodInfo *)0x0);
        if (pTVar19 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                    (pTVar19,(int)local_18,(MethodInfo *)0x0);
          pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar22,
                               (MethodInfo *)0x0);
          local_34 = 0;
          local_2c = 0;
          fStack_30 = (float)pVVar22->___height_5 + __real_3f000000;
          if (pTVar19 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            auVar14._4_8_ = 0;
            auVar14._0_4_ = fStack_30;
            Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                      (pTVar19,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)(auVar14 << 0x20),
                       (MethodInfo *)0x0);
            pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar18,
                                 (MethodInfo *)0x0);
            if (pTVar19 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                 (pTVar19,(MethodInfo *)0x0);
              if (iVar21 != 1) {
                param_2.___y_1 = *(int *)((int)OVar18 + 0x18);
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                bVar17 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                   ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                    param_2.___y_1,(MethodInfo *)0x0);
                if (bVar17) {
                  Graph_IntegrateVoxel_m9BE5C2638CC130B86187A084C4758C910D77F676
                            (param_1,pVVar22,
                             (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)OVar18,
                             (MethodInfo *)0x0);
                }
LAB_10e6b3e0:
                iVar21 = pVVar22->___height_5 + 1;
                if (param_1->___boundsHeight_27 < iVar21) {
                  param_1->___boundsHeight_27 = iVar21;
                  param_1->___boundsUpdated_41 = true;
                }
                return pVVar22;
              }
              if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
              }
              iVar12.___y_1 = param_2.___y_1;
              iVar12.___x_0 = param_2.___x_0;
              piVar23 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                  ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_40,
                                   iVar12,(MethodInfo *)0x0);
              local_28._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
              local_28._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
              local_14._0_4_ = piVar23->___x_0;
              local_14._4_4_ = piVar23->___y_1;
              local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)piVar23->___z_2;
              uVar29._0_4_ = piVar23->___x_0;
              uVar29._4_4_ = piVar23->___y_1;
              local_58.___c0_0.___z_2 = (param_1->___bounds_28).___c0_0.___x_0;
              local_58.___c1_1.___x_0 = (param_1->___bounds_28).___c0_0.___y_1;
              local_58.___c1_1.___y_1 = (param_1->___bounds_28).___c0_0.___z_2;
              local_58.___c1_1.___z_2 = (param_1->___bounds_28).___c1_1.___x_0;
              fStack_30 = (float)(undefined4)uVar29;
              local_2c = uVar29._4_4_;
              local_8 = local_18;
              if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
                uVar29 = CONCAT44(local_2c,fStack_30);
              }
              iVar7.___c0_0.___y_1 = local_58.___c1_1.___x_0;
              iVar7.___c0_0.___x_0 = local_58.___c0_0.___z_2;
              iVar7.___c0_0.___z_2 = local_58.___c1_1.___y_1;
              iVar7.___c1_1.___x_0 = local_58.___c1_1.___z_2;
              iVar7.___c1_1.___y_1 = (int)local_28;
              iVar7.___c1_1.___z_2 = (int)((ulonglong)local_28 >> 0x20);
              iVar9.___z_2 = (int)local_18;
              iVar9.___x_0 = (int)uVar29;
              iVar9.___y_1 = (int)((ulonglong)uVar29 >> 0x20);
              bVar17 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                                 (iVar7,iVar9,(MethodInfo *)0x0);
              if (!bVar17) {
                if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___corners_6 ==
                    (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_10e6b473;
                pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___corners_6,(MethodInfo *)0x0);
                if (pTVar19 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                goto LAB_10e6b473;
                iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                   (pTVar19,(MethodInfo *)0x0);
                if (iVar21 == 1) {
                  local_58.___c0_0.___x_0 = (undefined4)local_14;
                  local_58.___c0_0.___y_1 = local_14._4_4_;
                  local_58.___c1_1.___x_0 = (int)local_14;
                  local_58.___c1_1.___y_1 = (int)(local_14 >> 0x20);
                  local_58.___c0_0.___z_2 = (int)local_8;
                  local_58.___c1_1.___z_2 = (int)local_8;
                  (param_1->___bounds_28).___c0_0.___x_0 = local_58.___c1_1.___x_0;
                  (param_1->___bounds_28).___c0_0.___y_1 = local_58.___c1_1.___y_1;
                  (param_1->___bounds_28).___c0_0.___z_2 = (int)local_8;
                  (param_1->___bounds_28).___c1_1.___x_0 = local_58.___c1_1.___x_0;
                  (param_1->___bounds_28).___c1_1.___y_1 = local_58.___c1_1.___y_1;
                  (param_1->___bounds_28).___c1_1.___z_2 = (int)local_8;
                }
                else {
                  local_58.___c0_0.___z_2 = (param_1->___bounds_28).___c0_0.___x_0;
                  local_58.___c1_1.___x_0 = (param_1->___bounds_28).___c0_0.___y_1;
                  local_58.___c1_1.___y_1 = (param_1->___bounds_28).___c0_0.___z_2;
                  local_58.___c1_1.___z_2 = (param_1->___bounds_28).___c1_1.___x_0;
                  uVar1 = (param_1->___bounds_28).___c1_1.___y_1;
                  uVar3 = (param_1->___bounds_28).___c1_1.___z_2;
                  fStack_30 = (float)uVar1;
                  local_2c = uVar3;
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                  }
                  iVar8.___c0_0.___y_1 = local_58.___c1_1.___x_0;
                  iVar8.___c0_0.___x_0 = local_58.___c0_0.___z_2;
                  iVar8.___c0_0.___z_2 = local_58.___c1_1.___y_1;
                  iVar8.___c1_1.___x_0 = local_58.___c1_1.___z_2;
                  iVar8.___c1_1.___y_1 = (int)fStack_30;
                  iVar8.___c1_1.___z_2 = local_2c;
                  iVar10.___z_2 = (int)local_8;
                  iVar10.___x_0 = (undefined4)local_14;
                  iVar10.___y_1 = local_14._4_4_;
                  piVar24 = ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
                                      (&local_58,iVar8,iVar10,(MethodInfo *)0x0);
                  iVar21 = (piVar24->___c0_0).___y_1;
                  iVar5 = (piVar24->___c0_0).___z_2;
                  iVar6 = (piVar24->___c1_1).___x_0;
                  iVar15 = (piVar24->___c1_1).___y_1;
                  iVar16 = (piVar24->___c1_1).___z_2;
                  (param_1->___bounds_28).___c0_0.___x_0 = (piVar24->___c0_0).___x_0;
                  (param_1->___bounds_28).___c0_0.___y_1 = iVar21;
                  (param_1->___bounds_28).___c0_0.___z_2 = iVar5;
                  (param_1->___bounds_28).___c1_1.___x_0 = iVar6;
                  (param_1->___bounds_28).___c1_1.___y_1 = iVar15;
                  (param_1->___bounds_28).___c1_1.___z_2 = iVar16;
                }
                param_1->___boundsUpdated_41 = true;
              }
              if (*(List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 **)((int)OVar18 + 0x14) !=
                  (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) {
                if ((*(List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 **)((int)OVar18 + 0x14))->
                    ____size_2 == 0) {
                  local_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        OVar18,(MethodInfo *)0x0);
                  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var
                              );
                  }
                  iVar13.___y_1 = param_2.___y_1;
                  iVar13.___x_0 = param_2.___x_0;
                  fVar30 = GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
                                     (iVar13,(MethodInfo *)0x0);
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                  }
                  pfVar25 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                      (&local_40,fVar30,0.0,(MethodInfo *)0x0);
                  uVar2 = pfVar25->___x_0;
                  uVar4 = pfVar25->___y_1;
                  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_40,
                             (float)uVar2,(float)uVar4,pfVar25->___z_2,(MethodInfo *)0x0);
                  if (local_18 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                  goto LAB_10e6b473;
                  Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                            (local_18,*extraout_EAX,(MethodInfo *)0x0);
                  pVVar22 = local_c;
                  OVar18 = local_1c;
                }
                if (param_5) {
                  if (param_1->___cornerIntegrationQueue_19 ==
                      (List_1_t21F583C5E4A57BCEF6177F42179552BE21568686 *)0x0) goto LAB_10e6b473;
                  if (param_1->___cornerIntegrationQueue_19->____size_2 == 0) {
                    bVar17 = Graph_IntegrateCorner_m5CFA54D487073860589A818EC49AE96AD15BABBE
                                       (param_1,(Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
                                                OVar18,(MethodInfo *)0x0);
                    if (bVar17) goto LAB_10e6b3e0;
                  }
                }
                if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                    param_1->___cornerIntegrationQueue_19 !=
                    (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                             param_1->___cornerIntegrationQueue_19,OVar18,
                             List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var)
                  ;
                  goto LAB_10e6b3e0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10e6b473:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
