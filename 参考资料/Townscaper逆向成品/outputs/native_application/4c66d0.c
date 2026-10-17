// RVA 0x4c66d0 | Placemaker.DrawPlane$$SetToHoverData
// PDB: DrawPlane_SetToHoverData_m2E472B9E438CEABB1DC6631676F365B137C52762
// Body: [[104c66d0, 104c6829] [104c6833, 104c6a01]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 103efaa0 Vert_GetQuad_mB89B530B14247DDDC03EAFB5F4A164CE65DD9D03
// 103efd90 Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 10806dd0 Quad_Rotate_m8908AD3B8C1D40DCE4DE870C5532F70DC4DCEE72
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11030140 List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_gshared

void __cdecl
DrawPlane_SetToHoverData_m2E472B9E438CEABB1DC6631676F365B137C52762
          (DrawPlane_t25E93171CC5BAAB4443AC73B5628F14D1F786176 *param_1,MethodInfo *param_2)

{
  int *piVar1;
  uchar *puVar2;
  float *pfVar3;
  List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *pLVar4;
  QuadU5BU5D_t872FFC7C4380637473FAED13FE43DDF442E04221 *pQVar5;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB QVar6;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB QVar7;
  bool bVar8;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar9;
  int iVar10;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar11;
  int iVar12;
  uint uVar13;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar14;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar15;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_288;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_d8;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_94;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_50;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *local_c;
  int local_8;

  if (DAT_1151d138 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3C910A987BF703E64CD3A26D64BCEB16E6563C8E_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAC12695B2E67B38A74D7993943D4CC0160E83EC4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mFD0D2FD320135957299B89379B9A2829FB8E7D09_RuntimeMethod_var)
    ;
    DAT_1151d138 = '\x01';
  }
  memset(&local_94.___quadIndex_0,'\0',0x44);
  if ((param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (local_c = param_1->___worldMaster_4->___hoverData_18,
     local_c != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    pVVar11 = &local_c->___srcVert_7;
    pVVar14 = &local_288;
    for (iVar10 = 0x6c; iVar10 != 0; iVar10 = iVar10 + -1) {
      (pVVar14->___hexPos_0).___x_0 = (pVVar11->___hexPos_0).___x_0;
      pVVar11 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar11->___hexPos_0).___y_1;
      pVVar14 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar14->___hexPos_0).___y_1;
    }
    bVar8 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_288,(MethodInfo *)0x0);
    pHVar15 = local_c;
    if (!bVar8) {
      return;
    }
    if (param_1->___nodes_6 != (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) {
      iVar10 = param_1->___nodes_6->____size_2;
      pQVar9 = Vert_GetQuad_mB89B530B14247DDDC03EAFB5F4A164CE65DD9D03
                         (&local_d8,&local_288,(int)local_c->___side_15,(MethodInfo *)0x0);
      iVar12 = 0;
      local_50.___quadIndex_0 = pQVar9->___quadIndex_0;
      local_50._1_3_ = *(undefined3 *)&pQVar9->field_0x1;
      local_50.___v0_1.___x_0 = (pQVar9->___v0_1).___x_0;
      local_50.___v0_1.___y_1 = (pQVar9->___v0_1).___y_1;
      local_50.___v1_2.___x_0 = (pQVar9->___v1_2).___x_0;
      local_50.___v1_2.___y_1 = (pQVar9->___v1_2).___y_1;
      local_50.___v2_3.___x_0 = (pQVar9->___v2_3).___x_0;
      local_50.___v2_3.___y_1 = (pQVar9->___v2_3).___y_1;
      local_50.___v3_4.___x_0 = (pQVar9->___v3_4).___x_0;
      local_50.___v3_4.___y_1 = (pQVar9->___v3_4).___y_1;
      local_50.___p0_5.___x_0 = (pQVar9->___p0_5).___x_0;
      local_50.___p0_5.___y_1 = (pQVar9->___p0_5).___y_1;
      local_50.___p1_6.___x_0 = (pQVar9->___p1_6).___x_0;
      local_50.___p1_6.___y_1 = (pQVar9->___p1_6).___y_1;
      local_50.___p2_7.___x_0 = (pQVar9->___p2_7).___x_0;
      local_50.___p2_7.___y_1 = (pQVar9->___p2_7).___y_1;
      local_50.___p3_8.___x_0 = (pQVar9->___p3_8).___x_0;
      local_50.___p3_8.___y_1 = (pQVar9->___p3_8).___y_1;
      do {
        if ((local_50.___v0_1.___x_0 == local_288.___hexPos_0.___x_0) &&
           (local_50.___v0_1.___y_1 == local_288.___hexPos_0.___y_1)) break;
        Quad_Rotate_m8908AD3B8C1D40DCE4DE870C5532F70DC4DCEE72(&local_50,(MethodInfo *)0x0);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 4);
      uVar13 = 0;
      param_1->___hoverIndex_7 = -1;
      if (0 < iVar10) {
        local_8 = 0;
        do {
          pLVar4 = param_1->___nodes_6;
          if (pLVar4 == (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) goto LAB_104c69fd;
          if ((uint)pLVar4->____size_2 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pQVar5 = pLVar4->____items_1;
          piVar1 = (int *)((int)&pQVar5->m_Items[0].___v1_2.___y_1 + local_8);
          local_d8.___v1_2.___y_1 = *piVar1;
          local_d8.___v2_3.___x_0 = piVar1[1];
          local_d8.___v2_3.___y_1 = piVar1[2];
          local_d8.___v3_4.___x_0 = piVar1[3];
          puVar2 = &pQVar5->m_Items[0].___quadIndex_0 + local_8;
          local_d8._0_4_ = *(undefined4 *)puVar2;
          local_d8.___v0_1.___x_0 =
               ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(puVar2 + 4))->___x_0;
          local_d8.___v0_1.___y_1 = *(int *)(puVar2 + 8);
          local_d8.___v1_2.___x_0 =
               ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(puVar2 + 0xc))->___x_0;
          piVar1 = (int *)((int)&pQVar5->m_Items[0].___v3_4.___y_1 + local_8);
          local_d8.___v3_4.___y_1 = *piVar1;
          local_d8.___p0_5.___x_0 = (float)piVar1[1];
          local_d8.___p0_5.___y_1 = (float)piVar1[2];
          local_d8.___p1_6.___x_0 = (float)piVar1[3];
          pfVar3 = (float *)((int)&pQVar5->m_Items[0].___p1_6.___y_1 + local_8);
          local_d8.___p1_6.___y_1 = *pfVar3;
          local_d8.___p2_7.___x_0 = pfVar3[1];
          local_d8.___p2_7.___y_1 = pfVar3[2];
          local_d8.___p3_8.___x_0 = pfVar3[3];
          local_d8.___p3_8.___y_1 = *(float *)((int)&pQVar5->m_Items[0].___p3_8.___y_1 + local_8);
          if ((((local_d8.___v0_1.___x_0 == local_50.___v0_1.___x_0) &&
               (local_d8.___v0_1.___y_1 == local_50.___v0_1.___y_1)) &&
              (local_d8.___v1_2.___x_0 == local_50.___v1_2.___x_0)) &&
             (local_d8.___v1_2.___y_1 == local_50.___v1_2.___y_1)) {
            param_1->___hoverIndex_7 = uVar13;
            goto LAB_104c68b5;
          }
          uVar13 = uVar13 + 1;
          local_8 = local_8 + 0x44;
        } while ((int)uVar13 < iVar10);
        uVar13 = param_1->___hoverIndex_7;
LAB_104c68b5:
        pHVar15 = local_c;
        if (uVar13 != 0xffffffff) {
          return;
        }
      }
      if (param_1->___nodes_6 != (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) {
        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___nodes_6,
                   List_1_Clear_m3C910A987BF703E64CD3A26D64BCEB16E6563C8E_RuntimeMethod_var);
        pQVar9 = Vert_GetQuad_mB89B530B14247DDDC03EAFB5F4A164CE65DD9D03
                           (&local_d8,&local_288,
                            (pHVar15->___side_15 + 1) % (int)local_288.___quadCount_8,
                            (MethodInfo *)0x0);
        iVar10 = 0;
        local_94.___quadIndex_0 = pQVar9->___quadIndex_0;
        local_94._1_3_ = *(undefined3 *)&pQVar9->field_0x1;
        local_94.___v0_1.___x_0 = (pQVar9->___v0_1).___x_0;
        local_94.___v0_1.___y_1 = (pQVar9->___v0_1).___y_1;
        local_94.___v1_2.___x_0 = (pQVar9->___v1_2).___x_0;
        local_94.___v1_2.___y_1 = (pQVar9->___v1_2).___y_1;
        local_94.___v2_3.___x_0 = (pQVar9->___v2_3).___x_0;
        local_94.___v2_3.___y_1 = (pQVar9->___v2_3).___y_1;
        local_94.___v3_4.___x_0 = (pQVar9->___v3_4).___x_0;
        local_94.___v3_4.___y_1 = (pQVar9->___v3_4).___y_1;
        local_94.___p0_5.___x_0 = (pQVar9->___p0_5).___x_0;
        local_94.___p0_5.___y_1 = (pQVar9->___p0_5).___y_1;
        local_94.___p1_6.___x_0 = (pQVar9->___p1_6).___x_0;
        local_94.___p1_6.___y_1 = (pQVar9->___p1_6).___y_1;
        local_94.___p2_7.___x_0 = (pQVar9->___p2_7).___x_0;
        local_94.___p2_7.___y_1 = (pQVar9->___p2_7).___y_1;
        local_94.___p3_8.___x_0 = (pQVar9->___p3_8).___x_0;
        local_94.___p3_8.___y_1 = (pQVar9->___p3_8).___y_1;
        do {
          if ((local_94.___v1_2.___x_0 == local_288.___hexPos_0.___x_0) &&
             (local_94.___v1_2.___y_1 == local_288.___hexPos_0.___y_1)) break;
          Quad_Rotate_m8908AD3B8C1D40DCE4DE870C5532F70DC4DCEE72(&local_94,(MethodInfo *)0x0);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 4);
        if (param_1->___nodes_6 != (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) {
          QVar6.___v0_1.___x_0 = local_50.___v0_1.___x_0;
          QVar6.___quadIndex_0 = local_50.___quadIndex_0;
          QVar6._1_3_ = local_50._1_3_;
          QVar6.___v0_1.___y_1 = local_50.___v0_1.___y_1;
          QVar6.___v1_2.___x_0 = local_50.___v1_2.___x_0;
          QVar6.___v1_2.___y_1 = local_50.___v1_2.___y_1;
          QVar6.___v2_3.___x_0 = local_50.___v2_3.___x_0;
          QVar6.___v2_3.___y_1 = local_50.___v2_3.___y_1;
          QVar6.___v3_4.___x_0 = local_50.___v3_4.___x_0;
          QVar6.___v3_4.___y_1 = local_50.___v3_4.___y_1;
          QVar6.___p0_5.___x_0 = local_50.___p0_5.___x_0;
          QVar6.___p0_5.___y_1 = local_50.___p0_5.___y_1;
          QVar6.___p1_6.___x_0 = local_50.___p1_6.___x_0;
          QVar6.___p1_6.___y_1 = local_50.___p1_6.___y_1;
          QVar6.___p2_7.___x_0 = local_50.___p2_7.___x_0;
          QVar6.___p2_7.___y_1 = local_50.___p2_7.___y_1;
          QVar6.___p3_8.___x_0 = local_50.___p3_8.___x_0;
          QVar6.___p3_8.___y_1 = local_50.___p3_8.___y_1;
          List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_gshared
                    (param_1->___nodes_6,QVar6,
                     List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_RuntimeMethod_var);
          if (param_1->___nodes_6 != (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) {
            QVar7.___v0_1.___x_0 = local_94.___v0_1.___x_0;
            QVar7.___quadIndex_0 = local_94.___quadIndex_0;
            QVar7._1_3_ = local_94._1_3_;
            QVar7.___v0_1.___y_1 = local_94.___v0_1.___y_1;
            QVar7.___v1_2.___x_0 = local_94.___v1_2.___x_0;
            QVar7.___v1_2.___y_1 = local_94.___v1_2.___y_1;
            QVar7.___v2_3.___x_0 = local_94.___v2_3.___x_0;
            QVar7.___v2_3.___y_1 = local_94.___v2_3.___y_1;
            QVar7.___v3_4.___x_0 = local_94.___v3_4.___x_0;
            QVar7.___v3_4.___y_1 = local_94.___v3_4.___y_1;
            QVar7.___p0_5.___x_0 = local_94.___p0_5.___x_0;
            QVar7.___p0_5.___y_1 = local_94.___p0_5.___y_1;
            QVar7.___p1_6.___x_0 = local_94.___p1_6.___x_0;
            QVar7.___p1_6.___y_1 = local_94.___p1_6.___y_1;
            QVar7.___p2_7.___x_0 = local_94.___p2_7.___x_0;
            QVar7.___p2_7.___y_1 = local_94.___p2_7.___y_1;
            QVar7.___p3_8.___x_0 = local_94.___p3_8.___x_0;
            QVar7.___p3_8.___y_1 = local_94.___p3_8.___y_1;
            List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_gshared
                      (param_1->___nodes_6,QVar7,
                       List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_RuntimeMethod_var);
            param_1->___hoverIndex_7 = 0;
            return;
          }
        }
      }
    }
  }
LAB_104c69fd:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
