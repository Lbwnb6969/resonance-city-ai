// RVA 0x880a00 | Placemaker.BorderDrawer$$Draw
// PDB: BorderDrawer_Draw_m6769A31AF444913D127186EA6EBED5CB09DB9C03
// Body: [[10880a00, 10880b02]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3ef80 Graphics_DrawMesh_m12EF6599EBCF80BC1F87DB0D7DDBA34058FEA38F
// 10a45eb0 Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
// 10e1e3b0 GridGenerator_PopulateBorderMesh_m2353CBB724B2F79E32024F8EB68DCE4030C1B4C8

void __cdecl
BorderDrawer_Draw_m6769A31AF444913D127186EA6EBED5CB09DB9C03
          (BorderDrawer_t5CCF0A662FEFF553A6CDA812C86BCB079D1B618C *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar2;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar3;
  MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *pMVar4;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C VVar5;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar6;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar7;
  int iVar8;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar9;
  int *piVar10;
  undefined1 auVar11 [68];
  undefined1 auVar12 [68];
  undefined1 auVar13 [68];
  undefined1 auVar14 [68];
  undefined1 in_stack_fffffdb8 [344];
  undefined4 in_stack_ffffff10;
  undefined4 in_stack_ffffff14;
  undefined4 in_stack_ffffff18;
  undefined4 in_stack_ffffff1c;
  undefined4 in_stack_ffffff20;
  undefined4 in_stack_ffffff24;
  undefined4 in_stack_ffffff28;
  undefined4 in_stack_ffffff2c;
  undefined4 in_stack_ffffff30;
  undefined4 in_stack_ffffff34;
  undefined4 in_stack_ffffff38;
  undefined4 in_stack_ffffff3c;
  undefined4 in_stack_ffffff40;
  undefined4 in_stack_ffffff44;
  undefined4 in_stack_ffffff48;
  undefined4 in_stack_ffffff4c;
  undefined4 in_stack_ffffff50;
  undefined4 in_stack_ffffff54;
  undefined4 in_stack_ffffff58;
  undefined4 in_stack_ffffff5c;
  undefined4 in_stack_ffffff60;
  float in_stack_ffffff64;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar15;
  MethodInfo *pMVar16;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_84;
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
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;

  if (DAT_1151f5d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
    DAT_1151f5d1 = '\x01';
  }
  pWVar1 = param_1->___master_4;
  if ((pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pWVar1->___hoverData_18 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    pGVar2 = pWVar1->___grid_5;
    if (pGVar2 != (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0) {
      pMVar16 = (MethodInfo *)0x0;
      pMVar15 = param_1->___mesh_5;
      pVVar9 = &pWVar1->___hoverData_18->___srcVert_7;
      piVar10 = (int *)&stack0xfffffdb8;
      for (iVar8 = 0x6c; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar10 = (pVVar9->___hexPos_0).___x_0;
        pVVar9 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar9->___hexPos_0).___y_1;
        piVar10 = piVar10 + 1;
      }
      VVar5.___q4_6.___p2_7.___y_1 = (float)in_stack_ffffff10;
      auVar11 = in_stack_fffffdb8._16_68_;
      auVar12 = in_stack_fffffdb8._84_68_;
      auVar13 = in_stack_fffffdb8._152_68_;
      auVar14 = in_stack_fffffdb8._220_68_;
      VVar5.___hexPos_0.___x_0 = (int)in_stack_fffffdb8._0_8_;
      VVar5.___hexPos_0.___y_1 = (int)((ulonglong)in_stack_fffffdb8._0_8_ >> 0x20);
      VVar5.___planePos_1.___x_0 = (float)(int)in_stack_fffffdb8._8_8_;
      VVar5.___planePos_1.___y_1 = (float)(int)((ulonglong)in_stack_fffffdb8._8_8_ >> 0x20);
      VVar5.___q0_2.___quadIndex_0 = auVar11[0];
      VVar5.___q0_2._1_3_ = auVar11._1_3_;
      VVar5.___q0_2.___v0_1.___x_0 = (int)auVar11._4_8_;
      VVar5.___q0_2.___v0_1.___y_1 = (int)((ulonglong)auVar11._4_8_ >> 0x20);
      VVar5.___q0_2.___v1_2.___x_0 = (int)auVar11._12_8_;
      VVar5.___q0_2.___v1_2.___y_1 = (int)((ulonglong)auVar11._12_8_ >> 0x20);
      VVar5.___q0_2.___v2_3.___x_0 = (int)auVar11._20_8_;
      VVar5.___q0_2.___v2_3.___y_1 = (int)((ulonglong)auVar11._20_8_ >> 0x20);
      VVar5.___q0_2.___v3_4.___x_0 = (int)auVar11._28_8_;
      VVar5.___q0_2.___v3_4.___y_1 = (int)((ulonglong)auVar11._28_8_ >> 0x20);
      VVar5.___q0_2.___p0_5.___x_0 = (float)(int)auVar11._36_8_;
      VVar5.___q0_2.___p0_5.___y_1 = (float)(int)((ulonglong)auVar11._36_8_ >> 0x20);
      VVar5.___q0_2.___p1_6.___x_0 = (float)(int)auVar11._44_8_;
      VVar5.___q0_2.___p1_6.___y_1 = (float)(int)((ulonglong)auVar11._44_8_ >> 0x20);
      VVar5.___q0_2.___p2_7.___x_0 = (float)(int)auVar11._52_8_;
      VVar5.___q0_2.___p2_7.___y_1 = (float)(int)((ulonglong)auVar11._52_8_ >> 0x20);
      VVar5.___q0_2.___p3_8.___x_0 = (float)(int)auVar11._60_8_;
      VVar5.___q0_2.___p3_8.___y_1 = (float)(int)((ulonglong)auVar11._60_8_ >> 0x20);
      VVar5.___q1_3.___quadIndex_0 = auVar12[0];
      VVar5.___q1_3._1_3_ = auVar12._1_3_;
      VVar5.___q1_3.___v0_1.___x_0 = (int)auVar12._4_8_;
      VVar5.___q1_3.___v0_1.___y_1 = (int)((ulonglong)auVar12._4_8_ >> 0x20);
      VVar5.___q1_3.___v1_2.___x_0 = (int)auVar12._12_8_;
      VVar5.___q1_3.___v1_2.___y_1 = (int)((ulonglong)auVar12._12_8_ >> 0x20);
      VVar5.___q1_3.___v2_3.___x_0 = (int)auVar12._20_8_;
      VVar5.___q1_3.___v2_3.___y_1 = (int)((ulonglong)auVar12._20_8_ >> 0x20);
      VVar5.___q1_3.___v3_4.___x_0 = (int)auVar12._28_8_;
      VVar5.___q1_3.___v3_4.___y_1 = (int)((ulonglong)auVar12._28_8_ >> 0x20);
      VVar5.___q1_3.___p0_5.___x_0 = (float)(int)auVar12._36_8_;
      VVar5.___q1_3.___p0_5.___y_1 = (float)(int)((ulonglong)auVar12._36_8_ >> 0x20);
      VVar5.___q1_3.___p1_6.___x_0 = (float)(int)auVar12._44_8_;
      VVar5.___q1_3.___p1_6.___y_1 = (float)(int)((ulonglong)auVar12._44_8_ >> 0x20);
      VVar5.___q1_3.___p2_7.___x_0 = (float)(int)auVar12._52_8_;
      VVar5.___q1_3.___p2_7.___y_1 = (float)(int)((ulonglong)auVar12._52_8_ >> 0x20);
      VVar5.___q1_3.___p3_8.___x_0 = (float)(int)auVar12._60_8_;
      VVar5.___q1_3.___p3_8.___y_1 = (float)(int)((ulonglong)auVar12._60_8_ >> 0x20);
      VVar5.___q2_4.___quadIndex_0 = auVar13[0];
      VVar5.___q2_4._1_3_ = auVar13._1_3_;
      VVar5.___q2_4.___v0_1.___x_0 = (int)auVar13._4_8_;
      VVar5.___q2_4.___v0_1.___y_1 = (int)((ulonglong)auVar13._4_8_ >> 0x20);
      VVar5.___q2_4.___v1_2.___x_0 = (int)auVar13._12_8_;
      VVar5.___q2_4.___v1_2.___y_1 = (int)((ulonglong)auVar13._12_8_ >> 0x20);
      VVar5.___q2_4.___v2_3.___x_0 = (int)auVar13._20_8_;
      VVar5.___q2_4.___v2_3.___y_1 = (int)((ulonglong)auVar13._20_8_ >> 0x20);
      VVar5.___q2_4.___v3_4.___x_0 = (int)auVar13._28_8_;
      VVar5.___q2_4.___v3_4.___y_1 = (int)((ulonglong)auVar13._28_8_ >> 0x20);
      VVar5.___q2_4.___p0_5.___x_0 = (float)(int)auVar13._36_8_;
      VVar5.___q2_4.___p0_5.___y_1 = (float)(int)((ulonglong)auVar13._36_8_ >> 0x20);
      VVar5.___q2_4.___p1_6.___x_0 = (float)(int)auVar13._44_8_;
      VVar5.___q2_4.___p1_6.___y_1 = (float)(int)((ulonglong)auVar13._44_8_ >> 0x20);
      VVar5.___q2_4.___p2_7.___x_0 = (float)(int)auVar13._52_8_;
      VVar5.___q2_4.___p2_7.___y_1 = (float)(int)((ulonglong)auVar13._52_8_ >> 0x20);
      VVar5.___q2_4.___p3_8.___x_0 = (float)(int)auVar13._60_8_;
      VVar5.___q2_4.___p3_8.___y_1 = (float)(int)((ulonglong)auVar13._60_8_ >> 0x20);
      VVar5.___q3_5.___quadIndex_0 = auVar14[0];
      VVar5.___q3_5._1_3_ = auVar14._1_3_;
      VVar5.___q3_5.___v0_1.___x_0 = (int)auVar14._4_8_;
      VVar5.___q3_5.___v0_1.___y_1 = (int)((ulonglong)auVar14._4_8_ >> 0x20);
      VVar5.___q3_5.___v1_2.___x_0 = (int)auVar14._12_8_;
      VVar5.___q3_5.___v1_2.___y_1 = (int)((ulonglong)auVar14._12_8_ >> 0x20);
      VVar5.___q3_5.___v2_3.___x_0 = (int)auVar14._20_8_;
      VVar5.___q3_5.___v2_3.___y_1 = (int)((ulonglong)auVar14._20_8_ >> 0x20);
      VVar5.___q3_5.___v3_4.___x_0 = (int)auVar14._28_8_;
      VVar5.___q3_5.___v3_4.___y_1 = (int)((ulonglong)auVar14._28_8_ >> 0x20);
      VVar5.___q3_5.___p0_5.___x_0 = (float)(int)auVar14._36_8_;
      VVar5.___q3_5.___p0_5.___y_1 = (float)(int)((ulonglong)auVar14._36_8_ >> 0x20);
      VVar5.___q3_5.___p1_6.___x_0 = (float)(int)auVar14._44_8_;
      VVar5.___q3_5.___p1_6.___y_1 = (float)(int)((ulonglong)auVar14._44_8_ >> 0x20);
      VVar5.___q3_5.___p2_7.___x_0 = (float)(int)auVar14._52_8_;
      VVar5.___q3_5.___p2_7.___y_1 = (float)(int)((ulonglong)auVar14._52_8_ >> 0x20);
      VVar5.___q3_5.___p3_8.___x_0 = (float)(int)auVar14._60_8_;
      VVar5.___q3_5.___p3_8.___y_1 = (float)(int)((ulonglong)auVar14._60_8_ >> 0x20);
      VVar5.___q4_6.___quadIndex_0 = in_stack_fffffdb8[0x120];
      VVar5.___q4_6._1_3_ = in_stack_fffffdb8._289_3_;
      VVar5.___q4_6.___v0_1.___x_0 = (int)in_stack_fffffdb8._292_8_;
      VVar5.___q4_6.___v0_1.___y_1 = (int)((ulonglong)in_stack_fffffdb8._292_8_ >> 0x20);
      VVar5.___q4_6.___v1_2.___x_0 = (int)in_stack_fffffdb8._300_8_;
      VVar5.___q4_6.___v1_2.___y_1 = (int)((ulonglong)in_stack_fffffdb8._300_8_ >> 0x20);
      VVar5.___q4_6.___v2_3.___x_0 = (int)in_stack_fffffdb8._308_8_;
      VVar5.___q4_6.___v2_3.___y_1 = (int)((ulonglong)in_stack_fffffdb8._308_8_ >> 0x20);
      VVar5.___q4_6.___v3_4.___x_0 = (int)in_stack_fffffdb8._316_8_;
      VVar5.___q4_6.___v3_4.___y_1 = (int)((ulonglong)in_stack_fffffdb8._316_8_ >> 0x20);
      VVar5.___q4_6.___p0_5.___x_0 = (float)(int)in_stack_fffffdb8._324_8_;
      VVar5.___q4_6.___p0_5.___y_1 = (float)(int)((ulonglong)in_stack_fffffdb8._324_8_ >> 0x20);
      VVar5.___q4_6.___p1_6.___x_0 = (float)(int)in_stack_fffffdb8._332_8_;
      VVar5.___q4_6.___p1_6.___y_1 = (float)(int)((ulonglong)in_stack_fffffdb8._332_8_ >> 0x20);
      VVar5.___q4_6.___p2_7.___x_0 = (float)in_stack_fffffdb8._340_4_;
      VVar5.___q4_6.___p3_8.___x_0 = (float)in_stack_ffffff14;
      VVar5.___q4_6.___p3_8.___y_1 = (float)in_stack_ffffff18;
      VVar5.___q5_7._0_4_ = in_stack_ffffff1c;
      VVar5.___q5_7.___v0_1.___x_0 = in_stack_ffffff20;
      VVar5.___q5_7.___v0_1.___y_1 = in_stack_ffffff24;
      VVar5.___q5_7.___v1_2.___x_0 = in_stack_ffffff28;
      VVar5.___q5_7.___v1_2.___y_1 = in_stack_ffffff2c;
      VVar5.___q5_7.___v2_3.___x_0 = in_stack_ffffff30;
      VVar5.___q5_7.___v2_3.___y_1 = in_stack_ffffff34;
      VVar5.___q5_7.___v3_4.___x_0 = in_stack_ffffff38;
      VVar5.___q5_7.___v3_4.___y_1 = in_stack_ffffff3c;
      VVar5.___q5_7.___p0_5.___x_0 = (float)in_stack_ffffff40;
      VVar5.___q5_7.___p0_5.___y_1 = (float)in_stack_ffffff44;
      VVar5.___q5_7.___p1_6.___x_0 = (float)in_stack_ffffff48;
      VVar5.___q5_7.___p1_6.___y_1 = (float)in_stack_ffffff4c;
      VVar5.___q5_7.___p2_7.___x_0 = (float)in_stack_ffffff50;
      VVar5.___q5_7.___p2_7.___y_1 = (float)in_stack_ffffff54;
      VVar5.___q5_7.___p3_8.___x_0 = (float)in_stack_ffffff58;
      VVar5.___q5_7.___p3_8.___y_1 = (float)in_stack_ffffff5c;
      VVar5._424_4_ = in_stack_ffffff60;
      VVar5.___angle_9 = in_stack_ffffff64;
      GridGenerator_PopulateBorderMesh_m2353CBB724B2F79E32024F8EB68DCE4030C1B4C8
                (pGVar2,VVar5,pMVar15,pMVar16);
      pMVar15 = param_1->___mesh_5;
      pMVar7 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
                         (&local_84,(MethodInfo *)0x0);
      pMVar3 = param_1->___material_6;
      pMVar4 = param_1->___block_7;
      local_14 = pMVar7->___m00_0;
      fStack_10 = pMVar7->___m10_1;
      fStack_c = pMVar7->___m20_2;
      fStack_8 = pMVar7->___m30_3;
      local_24 = pMVar7->___m01_4;
      fStack_20 = pMVar7->___m11_5;
      fStack_1c = pMVar7->___m21_6;
      fStack_18 = pMVar7->___m31_7;
      local_34 = pMVar7->___m02_8;
      fStack_30 = pMVar7->___m12_9;
      fStack_2c = pMVar7->___m22_10;
      fStack_28 = pMVar7->___m32_11;
      local_44 = pMVar7->___m03_12;
      fStack_40 = pMVar7->___m13_13;
      fStack_3c = pMVar7->___m23_14;
      fStack_38 = pMVar7->___m33_15;
      if ((Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
      }
      MVar6.___m10_1 = fStack_10;
      MVar6.___m00_0 = local_14;
      MVar6.___m20_2 = fStack_c;
      MVar6.___m30_3 = fStack_8;
      MVar6.___m01_4 = local_24;
      MVar6.___m11_5 = fStack_20;
      MVar6.___m21_6 = fStack_1c;
      MVar6.___m31_7 = fStack_18;
      MVar6.___m02_8 = local_34;
      MVar6.___m12_9 = fStack_30;
      MVar6.___m22_10 = fStack_2c;
      MVar6.___m32_11 = fStack_28;
      MVar6.___m03_12 = local_44;
      MVar6.___m13_13 = fStack_40;
      MVar6.___m23_14 = fStack_3c;
      MVar6.___m33_15 = fStack_38;
      Graphics_DrawMesh_m12EF6599EBCF80BC1F87DB0D7DDBA34058FEA38F
                (pMVar15,MVar6,pMVar3,0,(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0,0,
                 pMVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
