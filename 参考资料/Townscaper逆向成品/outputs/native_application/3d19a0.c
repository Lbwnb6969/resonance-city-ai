// RVA 0x3d19a0 | Placemaker.Maker$$AddClick
// PDB: Maker_AddClick_mB1DF8C033FA5F3ED953C866DA3A3FC3539A92894
// Body: [[103d19a0, 103d1b4b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103efd90 Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 103f8b50 WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
// 10411350 HoverData_GetDstPos_m954AC74C1765D7F7B0059250AF2FD3A5931CF2DE
// 10e125c0 GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
// 10e6ae80 Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
// 10e6f930 Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5

Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 * __cdecl
Maker_AddClick_mB1DF8C033FA5F3ED953C866DA3A3FC3539A92894
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_2,schar param_3,
          MethodInfo *param_4)

{
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar1;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar2;
  float fVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;
  float fVar8;
  bool bVar9;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar10;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  schar sVar13;
  int iVar14;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar15;
  uchar uVar16;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_378;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_1c8;
  undefined1 local_18 [16];
  int local_8;

  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
                (param_1->___master_4,(MethodInfo *)0x0),
     param_2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    local_8 = param_2->___dstHeight_11;
    pVVar10 = &param_2->___dstVert_8;
    pVVar15 = &local_1c8;
    for (iVar14 = 0x6c; iVar14 != 0; iVar14 = iVar14 + -1) {
      (pVVar15->___hexPos_0).___x_0 = (pVVar10->___hexPos_0).___x_0;
      pVVar10 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar10->___hexPos_0).___y_1;
      pVVar15 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar15->___hexPos_0).___y_1;
    }
    bVar9 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_1c8,(MethodInfo *)0x0);
    if (!bVar9) {
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pGVar1 = param_1->___master_4->___grid_5,
         pGVar1 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0))
      goto LAB_103d1b47;
      iVar6.___y_1 = local_1c8.___hexPos_0.___y_1;
      iVar6.___x_0 = local_1c8.___hexPos_0.___x_0;
      pVVar10 = GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
                          (&local_378,pGVar1,iVar6,
                           (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0,(MethodInfo *)0x0
                          );
      pVVar15 = &local_1c8;
      for (iVar14 = 0x6c; iVar14 != 0; iVar14 = iVar14 + -1) {
        (pVVar15->___hexPos_0).___x_0 = (pVVar10->___hexPos_0).___x_0;
        pVVar10 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar10->___hexPos_0).___y_1;
        pVVar15 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar15->___hexPos_0).___y_1;
      }
    }
    bVar9 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_1c8,(MethodInfo *)0x0);
    iVar14 = local_8;
    if (!bVar9) {
      return (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
    }
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pGVar2 = param_1->___master_4->___graph_7,
       pGVar2 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
      iVar7.___y_1 = local_1c8.___hexPos_0.___y_1;
      iVar7.___x_0 = local_1c8.___hexPos_0.___x_0;
      bVar9 = Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
                        (pGVar2,iVar7,local_8,(MethodInfo *)0x0);
      if (!bVar9) {
        return (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
      }
      Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(param_1,(MethodInfo *)0x0);
      sVar13 = '\x0f';
      if (iVar14 != 0) {
        sVar13 = param_3;
      }
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pGVar2 = param_1->___master_4->___graph_7,
         pGVar2 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
        iVar5.___y_1 = local_1c8.___hexPos_0.___y_1;
        iVar5.___x_0 = local_1c8.___hexPos_0.___x_0;
        uVar16 = (uchar)iVar14;
        pVVar11 = Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
                            (pGVar2,iVar5,uVar16,sVar13,true,(MethodInfo *)0x0);
        param_1->___lastAddedVoxel_12 = pVVar11;
        pVVar12 = HoverData_GetDstPos_m954AC74C1765D7F7B0059250AF2FD3A5931CF2DE
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_18 + 4),
                             param_2,(MethodInfo *)0x0);
        fVar8 = pVVar12->___y_3;
        fVar3 = pVVar12->___z_4;
        (param_1->___lastActionPos_13).___x_2 = pVVar12->___x_2;
        (param_1->___lastActionPos_13).___y_3 = fVar8;
        (param_1->___lastActionPos_13).___z_4 = fVar3;
        iVar4.___y_1 = local_1c8.___hexPos_0.___y_1;
        iVar4.___x_0 = local_1c8.___hexPos_0.___x_0;
        Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                  ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)local_18,param_1,iVar4,uVar16
                   ,'\x12',sVar13,(MethodInfo *)0x0);
        if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
          WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
                    (param_1->___master_4,(MethodInfo *)0x0);
          return pVVar11;
        }
      }
    }
  }
LAB_103d1b47:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
