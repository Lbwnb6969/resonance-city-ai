// RVA 0x411ae0 | Placemaker.HoverData$$JumpForwardOnAdd
// PDB: HoverData_JumpForwardOnAdd_m201D7346F2B25D596482390151DF4D1088D75C5B
// Body: [[10411ae0, 10411d3c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10411350 HoverData_GetDstPos_m954AC74C1765D7F7B0059250AF2FD3A5931CF2DE
// 10411420 HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
// 1065c5d0 Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67
// 1066f480 Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10e125c0 GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06

void __cdecl
HoverData_JumpForwardOnAdd_m201D7346F2B25D596482390151DF4D1088D75C5B
          (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,MethodInfo *param_2)

{
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar1;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  schar sVar5;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar9;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar10;
  int iVar11;
  int *piVar12;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar13;
  float fVar14;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_398;
  int local_1e8 [108];
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_38;
  float local_2c;
  float fStack_28;
  undefined8 local_24;
  float local_1c;
  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 local_18;
  float local_8;

  if (DAT_1151ca94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151ca94 = '\x01';
  }
  pCVar6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
  HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_18.___m_Normal_1.___y_3,
             param_1,(MethodInfo *)0x0);
  pVVar7 = HoverData_GetDstPos_m954AC74C1765D7F7B0059250AF2FD3A5931CF2DE
                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                      &local_18.___m_Normal_1.___y_3,param_1,(MethodInfo *)0x0);
  local_24._0_4_ = pVVar7->___x_2;
  local_24._4_4_ = pVVar7->___y_3;
  local_8 = pVVar7->___z_4;
  if ((pCVar6 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) &&
     (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar6,
                          (MethodInfo *)0x0),
     pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pVVar7 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_38,pTVar8,
                        (MethodInfo *)0x0);
    local_2c = pVVar7->___x_2;
    fStack_28 = pVVar7->___y_3;
    local_1c = pVVar7->___z_4;
    fVar14 = __real_3f4ccccd;
    if (param_1->___side_15 == -1) {
      fVar14 = __real_3e99999a;
    }
    local_18.___m_Normal_1._4_8_ = _local_2c;
    local_18.___m_Distance_2 = local_1c;
    if (fVar14 < (float)((uint)fStack_28 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      pVVar7 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_38,
                          (MethodInfo *)0x0);
      local_18.___m_Normal_1.___x_2 = 0.0;
      local_18.___m_Normal_1.___y_3 = 0.0;
      local_18.___m_Normal_1.___z_4 = 0.0;
      local_18.___m_Distance_2 = 0.0;
      VVar4.___z_4 = local_8;
      VVar4.___x_2 = (float)(undefined4)local_24;
      VVar4.___y_3 = (float)local_24._4_4_;
      Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67
                (&local_18,*pVVar7,VVar4,(MethodInfo *)0x0);
      sVar5 = -1;
    }
    else {
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pGVar1 = param_1->___master_4->___grid_5,
         pGVar1 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0))
      goto LAB_10411d38;
      pVVar9 = GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
                         (&local_398,pGVar1,(param_1->___dstVert_8).___hexPos_0,
                          (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0,(MethodInfo *)0x0)
      ;
      piVar12 = local_1e8;
      for (iVar11 = 0x6c; iVar11 != 0; iVar11 = iVar11 + -1) {
        *piVar12 = (pVVar9->___hexPos_0).___x_0;
        pVVar9 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar9->___hexPos_0).___y_1;
        piVar12 = piVar12 + 1;
      }
      piVar12 = local_1e8;
      pVVar9 = &param_1->___dstVert_8;
      for (iVar11 = 0x6c; iVar11 != 0; iVar11 = iVar11 + -1) {
        (pVVar9->___hexPos_0).___x_0 = *piVar12;
        piVar12 = piVar12 + 1;
        pVVar9 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar9->___hexPos_0).___y_1;
      }
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      fVar2.___z_2 = local_1c;
      fVar2.___x_0 = local_2c;
      fVar2.___y_1 = fStack_28;
      pfVar10 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                          (&local_38,fVar2,0.0,(MethodInfo *)0x0);
      local_18.___m_Normal_1.___x_2 = 0.0;
      local_18.___m_Normal_1.___y_3 = 0.0;
      local_18.___m_Normal_1.___z_4 = 0.0;
      local_18.___m_Distance_2 = 0.0;
      VVar3.___z_4 = local_8;
      VVar3.___x_2 = (float)(undefined4)local_24;
      VVar3.___y_3 = (float)local_24._4_4_;
      Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67
                (&local_18,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar10,VVar3,
                 (MethodInfo *)0x0);
      sVar5 = '\0';
    }
    (param_1->___gamepadPlane_23).___m_Normal_1.___x_2 = local_18.___m_Normal_1.___x_2;
    (param_1->___gamepadPlane_23).___m_Normal_1.___y_3 = local_18.___m_Normal_1.___y_3;
    (param_1->___gamepadPlane_23).___m_Normal_1.___z_4 = local_18.___m_Normal_1.___z_4;
    (param_1->___gamepadPlane_23).___m_Distance_2 = local_18.___m_Distance_2;
    param_1->___side_15 = sVar5;
    param_1->___srcHeight_10 = param_1->___dstHeight_11;
    pVVar9 = &param_1->___dstVert_8;
    pVVar13 = &param_1->___srcVert_7;
    for (iVar11 = 0x6c; iVar11 != 0; iVar11 = iVar11 + -1) {
      (pVVar13->___hexPos_0).___x_0 = (pVVar9->___hexPos_0).___x_0;
      pVVar9 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar9->___hexPos_0).___y_1;
      pVVar13 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar13->___hexPos_0).___y_1;
    }
    param_1->___occupied_16 = true;
    param_1->___validAdd_20 = false;
    param_1->___valid_18 = true;
    return;
  }
LAB_10411d38:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
