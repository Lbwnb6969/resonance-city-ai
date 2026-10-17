// RVA 0x419a20 | Os.Utils.Intersections$$OrientedBoxTriangle
// PDB: Intersections_OrientedBoxTriangle_m8BAA38F59B01323FD29B38FDE84A54541412F3D8
// Body: [[10419a20, 1041ad9b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 104487d0 ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m828EBDAECB7087C58E75BDC38E70B6CC61CBF6AC_gshared
// 10448850 ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_gshared
// 10673720 Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
// 10675130 Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
// 108364b0 ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
// 10a44a80 Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83

bool __cdecl
Intersections_OrientedBoxTriangle_m8BAA38F59B01323FD29B38FDE84A54541412F3D8
          (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_4,MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  float fVar11;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar13;
  Exception_t *pEVar14;
  int iVar15;
  int iVar16;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar17;
  MethodInfo *pMVar18;
  undefined1 local_12c [16];
  undefined8 local_11c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_110;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_104;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_f8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_ec;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_d4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_c8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_bc;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  float fStack_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_24;
  undefined8 local_1c;
  float local_14;
  float local_10;
  float fStack_c;
  float local_8;

  if (DAT_1151cac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m828EBDAECB7087C58E75BDC38E70B6CC61CBF6AC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var)
    ;
    DAT_1151cac1 = '\x01';
  }
  local_bc.___z_4 = 0.0;
  local_e0.___z_4 = 0.0;
  local_bc.___x_2 = 0.0;
  local_bc.___y_3 = 0.0;
  local_e0.___x_2 = 0.0;
  local_e0.___y_3 = 0.0;
  local_d4.___x_2 = 0.0;
  local_d4.___y_3 = 0.0;
  local_d4.___z_4 = 0.0;
  local_ec.___x_2 = 0.0;
  local_ec.___y_3 = 0.0;
  local_ec.___z_4 = 0.0;
  pVVar12 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                      ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_12c,&param_1,0,
                       (MethodInfo *)0x0);
  pVVar13 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                      (&local_30,*pVVar12,(MethodInfo *)0x0);
  local_c8.___x_2 = pVVar13->___x_2;
  local_c8.___y_3 = pVVar13->___y_3;
  local_c8.___z_4 = pVVar13->___z_4;
  pVVar12 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                      ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_12c,&param_1,1,
                       (MethodInfo *)0x0);
  pVVar13 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                      (&local_30,*pVVar12,(MethodInfo *)0x0);
  local_104.___x_2 = pVVar13->___x_2;
  local_104.___y_3 = pVVar13->___y_3;
  local_104.___z_4 = pVVar13->___z_4;
  pVVar12 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                      ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_12c,&param_1,2,
                       (MethodInfo *)0x0);
  pVVar13 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                      (&local_30,*pVVar12,(MethodInfo *)0x0);
  local_f8.___x_2 = pVVar13->___x_2;
  local_f8.___y_3 = pVVar13->___y_3;
  local_f8.___z_4 = pVVar13->___z_4;
  if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
  }
  iVar15 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                   static_fields;
  if (iVar15 != 0) {
    pMVar18 = (MethodInfo *)0x0;
    if (*(int *)(iVar15 + 0xc) == 0) {
      pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar14,pMVar18);
    }
    pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                        (&local_30,&param_1,
                         *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar15 + 0x10),
                         (MethodInfo *)0x0);
    local_5c._0_4_ = pVVar13->___x_2;
    local_5c._4_4_ = pVVar13->___y_3;
    local_54 = pVVar13->___z_4;
    iVar15 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                     static_fields;
    if (iVar15 != 0) {
      pMVar18 = (MethodInfo *)0x0;
      if (*(uint *)(iVar15 + 0xc) < 2) {
        pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar14,pMVar18);
      }
      pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                          (&local_30,&param_1,
                           *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar15 + 0x1c),
                           (MethodInfo *)0x0);
      local_68._0_4_ = pVVar13->___x_2;
      local_68._4_4_ = pVVar13->___y_3;
      local_60 = pVVar13->___z_4;
      iVar15 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                       static_fields;
      if (iVar15 != 0) {
        pMVar18 = (MethodInfo *)0x0;
        if (*(uint *)(iVar15 + 0xc) < 3) {
          pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar14,pMVar18);
        }
        pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                            (&local_30,&param_1,
                             *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar15 + 0x28),
                             (MethodInfo *)0x0);
        local_74._0_4_ = pVVar13->___x_2;
        local_74._4_4_ = pVVar13->___y_3;
        local_6c = pVVar13->___z_4;
        iVar15 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                         ->static_fields;
        if (iVar15 != 0) {
          pMVar18 = (MethodInfo *)0x0;
          if (*(uint *)(iVar15 + 0xc) < 4) {
            pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar18);
          }
          pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                              (&local_30,&param_1,
                               *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar15 + 0x34)
                               ,(MethodInfo *)0x0);
          local_80._0_4_ = pVVar13->___x_2;
          local_80._4_4_ = pVVar13->___y_3;
          local_78 = pVVar13->___z_4;
          iVar15 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                           ->static_fields;
          if (iVar15 != 0) {
            pMVar18 = (MethodInfo *)0x0;
            if (*(uint *)(iVar15 + 0xc) < 5) {
              pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar14,pMVar18);
            }
            pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                (&local_30,&param_1,
                                 *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                  (iVar15 + 0x40),(MethodInfo *)0x0);
            local_8c._0_4_ = pVVar13->___x_2;
            local_8c._4_4_ = pVVar13->___y_3;
            local_84 = pVVar13->___z_4;
            iVar15 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                             ->static_fields;
            if (iVar15 != 0) {
              pMVar18 = (MethodInfo *)0x0;
              if (*(uint *)(iVar15 + 0xc) < 6) {
                pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar14,pMVar18);
              }
              pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                  (&local_30,&param_1,
                                   *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                    (iVar15 + 0x4c),(MethodInfo *)0x0);
              local_98._0_4_ = pVVar13->___x_2;
              local_98._4_4_ = pVVar13->___y_3;
              local_90 = pVVar13->___z_4;
              iVar15 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                               ->static_fields;
              if (iVar15 != 0) {
                pMVar18 = (MethodInfo *)0x0;
                if (*(uint *)(iVar15 + 0xc) < 7) {
                  pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                  il2cpp_codegen_raise_exception(pEVar14,pMVar18);
                }
                pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                    (&local_30,&param_1,
                                     *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                      (iVar15 + 0x58),(MethodInfo *)0x0);
                local_a4._0_4_ = pVVar13->___x_2;
                local_a4._4_4_ = pVVar13->___y_3;
                local_9c = pVVar13->___z_4;
                iVar15 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                 ->static_fields;
                if (iVar15 != 0) {
                  pMVar18 = (MethodInfo *)0x0;
                  if (*(uint *)(iVar15 + 0xc) < 8) {
                    pEVar14 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar14,pMVar18);
                  }
                  pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                      (&local_30,&param_1,
                                       *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                        (iVar15 + 100),(MethodInfo *)0x0);
                  local_38 = 0x7f7fffff;
                  iVar15 = 0;
                  local_b0._0_4_ = pVVar13->___x_2;
                  local_b0._4_4_ = pVVar13->___y_3;
                  local_a8 = pVVar13->___z_4;
                  fStack_40 = 3.4028235e+38;
                  local_3c = -3.4028235e+38;
                  do {
                    local_10 = local_c8.___x_2;
                    fStack_c = local_c8.___y_3;
                    local_8 = local_c8.___z_4;
                    local_34 = local_10 * (float)local_5c + local_5c._4_4_ * fStack_c +
                               local_54 * local_c8.___z_4;
                    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                );
                    }
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       ((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                        0xff7fffff7f7fffff,local_34,(MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * (float)local_68 +
                                               local_68._4_4_ * fStack_c + local_60 * local_8,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,(float)local_74 * local_10 +
                                               local_74._4_4_ * fStack_c + local_6c * local_8,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,(float)local_80 * local_10 +
                                               local_80._4_4_ * fStack_c + local_78 * local_8,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,(float)local_8c * local_10 +
                                               local_8c._4_4_ * fStack_c + local_84 * local_8,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,(float)local_98 * local_10 +
                                               local_98._4_4_ * fStack_c + local_90 * local_8,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,(float)local_a4 * local_10 +
                                               local_a4._4_4_ * fStack_c + local_9c * local_8,
                                        (MethodInfo *)0x0);
                    local_24 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_b0 * local_10 +
                                                 local_b0._4_4_ * fStack_c + local_a8 * local_8,
                                          (MethodInfo *)0x0);
                    VVar17.___y_1 = local_3c;
                    VVar17.___x_0 = fStack_40;
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,param_2.___x_2 * local_10 + param_2.___y_3 * fStack_c
                                               + param_2.___z_4 * local_8,(MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,param_3.___x_2 * local_10 + param_3.___y_3 * fStack_c
                                               + param_3.___z_4 * local_8,(MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,param_4.___x_2 * local_10 + param_4.___y_3 * fStack_c
                                               + param_4.___z_4 * local_8,(MethodInfo *)0x0);
                    fVar11 = local_48;
                    fStack_4c = VVar17.___x_0;
                    local_48 = VVar17.___y_1;
                    if (fVar11 < local_24.___x_0) {
                      return false;
                    }
                    if (local_24.___y_1 < fStack_4c) {
                      return false;
                    }
                    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                );
                    }
                    ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_gshared
                              (&local_c8,&local_104,&local_f8,
                               ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_RuntimeMethod_var
                              );
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < 3);
                  local_bc.___z_4 = param_2.___z_4 - param_3.___z_4;
                  local_bc.___x_2 = param_2.___x_2 - param_3.___x_2;
                  local_bc.___y_3 = param_2.___y_3 - param_3.___y_3;
                  local_e0.___z_4 = param_3.___z_4 - param_4.___z_4;
                  local_d4.___z_4 = param_4.___z_4 - param_2.___z_4;
                  local_e0.___y_3 = param_3.___y_3 - param_4.___y_3;
                  local_e0.___x_2 = param_3.___x_2 - param_4.___x_2;
                  iVar15 = 0;
                  local_24.___x_0 = 3.4028235e+38;
                  local_24.___y_1 = -3.4028235e+38;
                  local_d4.___y_3 = param_4.___y_3 - param_2.___y_3;
                  local_d4.___x_2 = param_4.___x_2 - param_2.___x_2;
                  fStack_4c = 3.4028235e+38;
                  local_48 = -3.4028235e+38;
                  local_30.___z_4 = local_d4.___z_4;
                  do {
                    local_34 = local_bc.___x_2 * (float)local_5c + local_bc.___y_3 * local_5c._4_4_
                               + local_bc.___z_4 * local_54;
                    local_10 = local_bc.___x_2;
                    fStack_c = local_bc.___y_3;
                    local_8 = local_bc.___z_4;
                    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                );
                    }
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       ((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                        0xff7fffff7f7fffff,local_34,(MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * (float)local_68 +
                                               fStack_c * local_68._4_4_ + local_8 * local_60,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * (float)local_74 +
                                               fStack_c * local_74._4_4_ + local_8 * local_6c,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * (float)local_80 +
                                               fStack_c * local_80._4_4_ + local_8 * local_78,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * (float)local_8c +
                                               fStack_c * local_8c._4_4_ + local_8 * local_84,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * (float)local_98 +
                                               fStack_c * local_98._4_4_ + local_8 * local_90,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * (float)local_a4 +
                                               fStack_c * local_a4._4_4_ + local_8 * local_9c,
                                        (MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * (float)local_b0 +
                                               fStack_c * local_b0._4_4_ + local_8 * local_a8,
                                        (MethodInfo *)0x0);
                    fStack_40 = VVar17.___x_0;
                    local_3c = VVar17.___y_1;
                    VVar5.___y_1 = local_48;
                    VVar5.___x_0 = fStack_4c;
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar5,local_10 * param_2.___x_2 + fStack_c * param_2.___y_3
                                              + local_8 * param_2.___z_4,(MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * param_3.___x_2 + fStack_c * param_3.___y_3
                                               + local_8 * param_3.___z_4,(MethodInfo *)0x0);
                    VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                       (VVar17,local_10 * param_4.___x_2 + fStack_c * param_4.___y_3
                                               + local_8 * param_4.___z_4,(MethodInfo *)0x0);
                    if (local_24.___y_1 < fStack_40) {
                      return false;
                    }
                    local_24.___x_0 = VVar17.___x_0;
                    if (local_3c < local_24.___x_0) {
                      return false;
                    }
                    local_24 = VVar17;
                    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                );
                    }
                    ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_gshared
                              (&local_bc,&local_e0,&local_d4,
                               ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_RuntimeMethod_var
                              );
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < 3);
                  VVar3.___z_4 = local_e0.___z_4;
                  VVar3.___x_2 = local_e0.___x_2;
                  VVar3.___y_3 = local_e0.___y_3;
                  VVar9.___z_4 = local_d4.___z_4;
                  VVar9.___x_2 = local_d4.___x_2;
                  VVar9.___y_3 = local_d4.___y_3;
                  pVVar13 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                                      (&local_30,VVar3,VVar9,(MethodInfo *)0x0);
                  local_24.___x_0 = 3.4028235e+38;
                  local_24.___y_1 = -3.4028235e+38;
                  local_ec.___x_2 = pVVar13->___x_2;
                  local_ec.___y_3 = pVVar13->___y_3;
                  local_ec.___z_4 = pVVar13->___z_4;
                  local_1c._0_4_ = pVVar13->___x_2;
                  local_1c._4_4_ = pVVar13->___y_3;
                  local_48 = pVVar13->___z_4;
                  uVar1 = pVVar13->___x_2;
                  uVar2 = pVVar13->___y_3;
                  local_34 = (local_5c._4_4_ - param_2.___y_3) * (float)uVar2 +
                             ((float)local_5c - param_2.___x_2) * (float)local_1c +
                             (local_54 - param_2.___z_4) * local_48;
                  local_50 = (float)local_1c;
                  fStack_4c = local_1c._4_4_;
                  local_44 = uVar1;
                  fStack_40 = (float)uVar2;
                  local_3c = local_48;
                  local_14 = local_48;
                  local_10 = (float)uVar1;
                  fStack_c = (float)uVar2;
                  local_8 = local_48;
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                  }
                  VVar6.___y_1 = local_24.___y_1;
                  VVar6.___x_0 = local_24.___x_0;
                  VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                     (VVar6,local_34,(MethodInfo *)0x0);
                  VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                     (VVar17,((float)local_68 - param_2.___x_2) * (float)local_1c +
                                             (local_68._4_4_ - param_2.___y_3) * local_1c._4_4_ +
                                             (local_60 - param_2.___z_4) * local_14,
                                      (MethodInfo *)0x0);
                  VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                     (VVar17,((float)local_74 - param_2.___x_2) * (float)local_1c +
                                             (local_74._4_4_ - param_2.___y_3) * local_1c._4_4_ +
                                             (local_6c - param_2.___z_4) * local_14,
                                      (MethodInfo *)0x0);
                  VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                     (VVar17,((float)local_80 - param_2.___x_2) * (float)local_1c +
                                             (local_80._4_4_ - param_2.___y_3) * local_1c._4_4_ +
                                             (local_78 - param_2.___z_4) * local_14,
                                      (MethodInfo *)0x0);
                  VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                     (VVar17,((float)local_8c - param_2.___x_2) * (float)local_1c +
                                             (local_8c._4_4_ - param_2.___y_3) * local_1c._4_4_ +
                                             (local_84 - param_2.___z_4) * local_14,
                                      (MethodInfo *)0x0);
                  VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                     (VVar17,((float)local_98 - param_2.___x_2) * (float)local_1c +
                                             (local_98._4_4_ - param_2.___y_3) * local_1c._4_4_ +
                                             (local_90 - param_2.___z_4) * local_14,
                                      (MethodInfo *)0x0);
                  VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                     (VVar17,((float)local_a4 - param_2.___x_2) * (float)local_1c +
                                             (local_a4._4_4_ - param_2.___y_3) * local_1c._4_4_ +
                                             (local_9c - param_2.___z_4) * local_14,
                                      (MethodInfo *)0x0);
                  VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                     (VVar17,((float)local_b0 - param_2.___x_2) * (float)local_1c +
                                             (local_b0._4_4_ - param_2.___y_3) * local_1c._4_4_ +
                                             (local_a8 - param_2.___z_4) * local_14,
                                      (MethodInfo *)0x0);
                  if ((0.0 < local_24.___x_0) ||
                     (local_24.___y_1 = VVar17.___y_1, local_24.___y_1 < 0.0)) {
                    return false;
                  }
                  iVar15 = 0;
                  local_24.___x_0 = 3.4028235e+38;
                  local_24.___y_1 = -3.4028235e+38;
                  fStack_4c = 3.4028235e+38;
                  local_48 = -3.4028235e+38;
                  do {
                    iVar16 = 0;
                    do {
                      VVar4.___z_4 = local_c8.___z_4;
                      VVar4.___x_2 = local_c8.___x_2;
                      VVar4.___y_3 = local_c8.___y_3;
                      VVar10.___y_3 = local_bc.___y_3;
                      VVar10.___x_2 = local_bc.___x_2;
                      VVar10.___z_4 = local_bc.___z_4;
                      pVVar13 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                           (local_12c + 4),VVar4,VVar10,(MethodInfo *)0x0);
                      local_11c._0_4_ = pVVar13->___x_2;
                      local_11c._4_4_ = pVVar13->___y_3;
                      local_30.___z_4 = pVVar13->___z_4;
                      local_110.___x_2 = pVVar13->___x_2;
                      local_110.___y_3 = pVVar13->___y_3;
                      local_34 = local_5c._4_4_ * local_110.___y_3 +
                                 (float)(undefined4)local_11c * (float)local_5c +
                                 local_54 * local_30.___z_4;
                      local_30._0_8_ = local_110._0_8_;
                      local_1c = local_11c;
                      local_14 = local_30.___z_4;
                      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                  );
                      }
                      VVar7.___y_1 = -3.4028235e+38;
                      VVar7.___x_0 = local_24.___x_0;
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar7,local_34,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * (float)local_68 +
                                                 local_1c._4_4_ * local_68._4_4_ +
                                                 local_14 * local_60,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * (float)local_74 +
                                                 local_1c._4_4_ * local_74._4_4_ +
                                                 local_14 * local_6c,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * (float)local_80 +
                                                 local_1c._4_4_ * local_80._4_4_ +
                                                 local_14 * local_78,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * (float)local_8c +
                                                 local_1c._4_4_ * local_8c._4_4_ +
                                                 local_14 * local_84,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * (float)local_98 +
                                                 local_1c._4_4_ * local_98._4_4_ +
                                                 local_14 * local_90,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * (float)local_a4 +
                                                 local_1c._4_4_ * local_a4._4_4_ +
                                                 local_14 * local_9c,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * (float)local_b0 +
                                                 local_1c._4_4_ * local_b0._4_4_ +
                                                 local_14 * local_a8,(MethodInfo *)0x0);
                      fStack_c = VVar17.___x_0;
                      local_8 = VVar17.___y_1;
                      VVar8.___y_1 = local_48;
                      VVar8.___x_0 = fStack_4c;
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar8,(float)local_1c * param_2.___x_2 +
                                                local_1c._4_4_ * param_2.___y_3 +
                                                local_14 * param_2.___z_4,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * param_3.___x_2 +
                                                 local_1c._4_4_ * param_3.___y_3 +
                                                 local_14 * param_3.___z_4,(MethodInfo *)0x0);
                      VVar17 = ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                         (VVar17,(float)local_1c * param_4.___x_2 +
                                                 local_1c._4_4_ * param_4.___y_3 +
                                                 local_14 * param_4.___z_4,(MethodInfo *)0x0);
                      fVar11 = local_3c;
                      fStack_40 = VVar17.___x_0;
                      local_3c = VVar17.___y_1;
                      if (fVar11 < fStack_c) {
                        return false;
                      }
                      if (local_8 < fStack_40) {
                        return false;
                      }
                      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                  );
                      }
                      ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_gshared
                                (&local_c8,&local_104,&local_f8,
                                 ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_RuntimeMethod_var
                                );
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < 3);
                    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                );
                    }
                    ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m828EBDAECB7087C58E75BDC38E70B6CC61CBF6AC_gshared
                              (&local_bc,&local_e0,&local_d4,&local_ec,
                               ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m828EBDAECB7087C58E75BDC38E70B6CC61CBF6AC_RuntimeMethod_var
                              );
                    iVar15 = iVar15 + 1;
                    if (3 < iVar15) {
                      return true;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
