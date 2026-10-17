// RVA 0x412dc0 | Placemaker.HoverData$$TryGetVert
// PDB: HoverData_TryGetVert_m9BC0A802AC9DAFAE427E915D0C38247A5EF36FC2
// Body: [[10412dc0, 10412ebe]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 103efd90 Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3
// 103efdb0 Vert_get_validPosition_mC52CDBAC4CF4B6AE5B9AD389C688BBA9B071DA14
// 10e10b80 GridGenerator_GetClostestVertPosition_m4A26C0EB32D236A773BF3CD93B30D653A015707D
// 10e125c0 GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06

Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C * __cdecl
HoverData_TryGetVert_m9BC0A802AC9DAFAE427E915D0C38247A5EF36FC2
          (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *__return_storage_ptr__,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_2,MethodInfo *param_3)

{
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar1;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar2;
  bool bVar3;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar4;
  int iVar5;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar6;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_364;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_1b4;

  if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
     (pGVar1 = param_1->___master_4->___grid_5,
     pGVar1 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)) {
LAB_10412eba:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pVVar4 = GridGenerator_GetClostestVertPosition_m4A26C0EB32D236A773BF3CD93B30D653A015707D
                     (&local_364,pGVar1,param_2,(MethodInfo *)0x0);
  pVVar6 = &local_1b4;
  for (iVar5 = 0x6c; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pVVar6->___hexPos_0).___x_0 = (pVVar4->___hexPos_0).___x_0;
    pVVar4 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar4->___hexPos_0).___y_1;
    pVVar6 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar6->___hexPos_0).___y_1;
  }
  bVar3 = Vert_get_validPosition_mC52CDBAC4CF4B6AE5B9AD389C688BBA9B071DA14
                    (&local_1b4,(MethodInfo *)0x0);
  if (bVar3) {
    if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pGVar1 = param_1->___master_4->___grid_5,
       pGVar1 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)) goto LAB_10412eba;
    iVar2.___y_1 = local_1b4.___hexPos_0.___y_1;
    iVar2.___x_0 = local_1b4.___hexPos_0.___x_0;
    pVVar4 = GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
                       (&local_364,pGVar1,iVar2,
                        (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0,(MethodInfo *)0x0);
    pVVar6 = &local_1b4;
    for (iVar5 = 0x6c; iVar5 != 0; iVar5 = iVar5 + -1) {
      (pVVar6->___hexPos_0).___x_0 = (pVVar4->___hexPos_0).___x_0;
      pVVar4 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar4->___hexPos_0).___y_1;
      pVVar6 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar6->___hexPos_0).___y_1;
    }
    bVar3 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_1b4,(MethodInfo *)0x0);
    if (bVar3) goto LAB_10412ea1;
  }
  memset((uchar *)&local_1b4,'\0',0x1b0);
  local_1b4.___planePos_1.___x_0 = param_2.___x_0;
  local_1b4.___planePos_1.___y_1 = param_2.___y_1;
  local_1b4.___quadCount_8 = -1;
LAB_10412ea1:
  pVVar4 = &local_1b4;
  pVVar6 = __return_storage_ptr__;
  for (iVar5 = 0x6c; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pVVar6->___hexPos_0).___x_0 = (pVVar4->___hexPos_0).___x_0;
    pVVar4 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar4->___hexPos_0).___y_1;
    pVVar6 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar6->___hexPos_0).___y_1;
  }
  return __return_storage_ptr__;
}
