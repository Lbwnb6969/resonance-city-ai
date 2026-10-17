// RVA 0x418670 | Os.Utils.Intersections$$OrientedBoxOrientedBoxInternal
// PDB: Intersections_OrientedBoxOrientedBoxInternal_m762718EBC76CC2CC786336EBF9AD4231CCAE32B3
// Body: [[10418670, 10419888]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10448710 ExtraMath_Swap_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mBD80B159C37E2F532385DBB0B188787D79E8AD9A_gshared
// 10587a90 HashSet_1_Add_m188C11CE09A8F01EE6417569FF7732CB57A57E7B_gshared
// 10587b00 HashSet_1_Clear_m41F88F9C5FCA042752A295B9B67C0B4027F8714E_gshared
// 10587b60 HashSet_1_Contains_m772F6C2D57128F8EEDC52E8DDD0E4A0C86EC362E_gshared
// 10673720 Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
// 10675130 Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
// 108364b0 ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
// 10a44a80 Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83

bool __cdecl
Intersections_OrientedBoxOrientedBoxInternal_m762718EBC76CC2CC786336EBF9AD4231CCAE32B3
          (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 param_1,
          Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 param_2,
          HashSet_1_tC4DB94C2B7A5A7B4A5B17F2ED3550004FAAA314C *param_3,MethodInfo *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  bool bVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar9;
  Exception_t *pEVar10;
  int iVar11;
  float fVar12;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar13;
  MethodInfo *pMVar14;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_160;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_150;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_140;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_134;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  float local_110;
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f4;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  float local_50;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_4c;
  float local_44;
  float local_40;
  undefined1 local_3c [8];
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_34;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_2c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_24;
  int local_1c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_18;
  float local_c;
  float local_8;

  if (DAT_1151cac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_Swap_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mBD80B159C37E2F532385DBB0B188787D79E8AD9A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HashSet_1_Add_m188C11CE09A8F01EE6417569FF7732CB57A57E7B_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HashSet_1_Clear_m41F88F9C5FCA042752A295B9B67C0B4027F8714E_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       HashSet_1_Contains_m772F6C2D57128F8EEDC52E8DDD0E4A0C86EC362E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var)
    ;
    DAT_1151cac0 = '\x01';
  }
  if (param_3 != (HashSet_1_tC4DB94C2B7A5A7B4A5B17F2ED3550004FAAA314C *)0x0) {
    HashSet_1_Clear_m41F88F9C5FCA042752A295B9B67C0B4027F8714E_gshared
              (param_3,HashSet_1_Clear_m41F88F9C5FCA042752A295B9B67C0B4027F8714E_RuntimeMethod_var);
    if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
    }
    iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                     static_fields;
    if (iVar11 != 0) {
      pMVar14 = (MethodInfo *)0x0;
      if (*(int *)(iVar11 + 0xc) == 0) {
        pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar10,pMVar14);
      }
      pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                         (&local_18,&param_1,
                          *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar11 + 0x10),
                          (MethodInfo *)0x0);
      local_58._0_4_ = pVVar8->___x_2;
      local_58._4_4_ = pVVar8->___y_3;
      local_50 = pVVar8->___z_4;
      iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                       static_fields;
      if (iVar11 != 0) {
        pMVar14 = (MethodInfo *)0x0;
        if (*(uint *)(iVar11 + 0xc) < 2) {
          pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar10,pMVar14);
        }
        pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                           (&local_18,&param_1,
                            *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar11 + 0x1c),
                            (MethodInfo *)0x0);
        local_64._0_4_ = pVVar8->___x_2;
        local_64._4_4_ = pVVar8->___y_3;
        local_5c = pVVar8->___z_4;
        iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                         ->static_fields;
        if (iVar11 != 0) {
          pMVar14 = (MethodInfo *)0x0;
          if (*(uint *)(iVar11 + 0xc) < 3) {
            pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar10,pMVar14);
          }
          pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                             (&local_18,&param_1,
                              *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar11 + 0x28),
                              (MethodInfo *)0x0);
          local_70._0_4_ = pVVar8->___x_2;
          local_70._4_4_ = pVVar8->___y_3;
          local_68 = pVVar8->___z_4;
          iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                           ->static_fields;
          if (iVar11 != 0) {
            pMVar14 = (MethodInfo *)0x0;
            if (*(uint *)(iVar11 + 0xc) < 4) {
              pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar10,pMVar14);
            }
            pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                               (&local_18,&param_1,
                                *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                 (iVar11 + 0x34),(MethodInfo *)0x0);
            local_7c._0_4_ = pVVar8->___x_2;
            local_7c._4_4_ = pVVar8->___y_3;
            local_74 = pVVar8->___z_4;
            iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                             ->static_fields;
            if (iVar11 != 0) {
              pMVar14 = (MethodInfo *)0x0;
              if (*(uint *)(iVar11 + 0xc) < 5) {
                pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar10,pMVar14);
              }
              pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                 (&local_18,&param_1,
                                  *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                   (iVar11 + 0x40),(MethodInfo *)0x0);
              local_88._0_4_ = pVVar8->___x_2;
              local_88._4_4_ = pVVar8->___y_3;
              local_80 = pVVar8->___z_4;
              iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                               ->static_fields;
              if (iVar11 != 0) {
                pMVar14 = (MethodInfo *)0x0;
                if (*(uint *)(iVar11 + 0xc) < 6) {
                  pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                  il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                }
                pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                   (&local_18,&param_1,
                                    *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (iVar11 + 0x4c),(MethodInfo *)0x0);
                local_94._0_4_ = pVVar8->___x_2;
                local_94._4_4_ = pVVar8->___y_3;
                local_8c = pVVar8->___z_4;
                iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                 ->static_fields;
                if (iVar11 != 0) {
                  pMVar14 = (MethodInfo *)0x0;
                  if (*(uint *)(iVar11 + 0xc) < 7) {
                    pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                  }
                  pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                     (&local_18,&param_1,
                                      *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                       (iVar11 + 0x58),(MethodInfo *)0x0);
                  local_a0._0_4_ = pVVar8->___x_2;
                  local_a0._4_4_ = pVVar8->___y_3;
                  local_98 = pVVar8->___z_4;
                  iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                   ->static_fields;
                  if (iVar11 != 0) {
                    pMVar14 = (MethodInfo *)0x0;
                    if (*(uint *)(iVar11 + 0xc) < 8) {
                      pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                      il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                    }
                    pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                       (&local_18,&param_1,
                                        *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                         (iVar11 + 100),(MethodInfo *)0x0);
                    local_ac._0_4_ = pVVar8->___x_2;
                    local_ac._4_4_ = pVVar8->___y_3;
                    local_a4 = pVVar8->___z_4;
                    iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                     ->static_fields;
                    if (iVar11 != 0) {
                      pMVar14 = (MethodInfo *)0x0;
                      if (*(int *)(iVar11 + 0xc) == 0) {
                        pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                      }
                      pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                         (&local_18,&param_2,
                                          *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                           (iVar11 + 0x10),(MethodInfo *)0x0);
                      local_b8._0_4_ = pVVar8->___x_2;
                      local_b8._4_4_ = pVVar8->___y_3;
                      local_b0 = pVVar8->___z_4;
                      iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                       ->static_fields;
                      if (iVar11 != 0) {
                        pMVar14 = (MethodInfo *)0x0;
                        if (*(uint *)(iVar11 + 0xc) < 2) {
                          pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                          il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                        }
                        pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                           (&local_18,&param_2,
                                            *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                             (iVar11 + 0x1c),(MethodInfo *)0x0);
                        local_c4._0_4_ = pVVar8->___x_2;
                        local_c4._4_4_ = pVVar8->___y_3;
                        local_bc = pVVar8->___z_4;
                        iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                         ->static_fields;
                        if (iVar11 != 0) {
                          pMVar14 = (MethodInfo *)0x0;
                          if (*(uint *)(iVar11 + 0xc) < 3) {
                            pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                          }
                          pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                             (&local_18,&param_2,
                                              *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                               (iVar11 + 0x28),(MethodInfo *)0x0);
                          local_d0._0_4_ = pVVar8->___x_2;
                          local_d0._4_4_ = pVVar8->___y_3;
                          local_c8 = pVVar8->___z_4;
                          iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                           ->static_fields;
                          if (iVar11 != 0) {
                            pMVar14 = (MethodInfo *)0x0;
                            if (*(uint *)(iVar11 + 0xc) < 4) {
                              pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                              il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                            }
                            pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                               (&local_18,&param_2,
                                                *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(iVar11 + 0x34),(MethodInfo *)0x0);
                            local_dc._0_4_ = pVVar8->___x_2;
                            local_dc._4_4_ = pVVar8->___y_3;
                            local_d4 = pVVar8->___z_4;
                            iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                             ->static_fields;
                            if (iVar11 != 0) {
                              pMVar14 = (MethodInfo *)0x0;
                              if (*(uint *)(iVar11 + 0xc) < 5) {
                                pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                              }
                              pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                                 (&local_18,&param_2,
                                                  *(
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(iVar11 + 0x40),(MethodInfo *)0x0);
                              local_e8._0_4_ = pVVar8->___x_2;
                              local_e8._4_4_ = pVVar8->___y_3;
                              local_e0 = pVVar8->___z_4;
                              iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                               ->static_fields;
                              if (iVar11 != 0) {
                                pMVar14 = (MethodInfo *)0x0;
                                if (*(uint *)(iVar11 + 0xc) < 6) {
                                  pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                  il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                                }
                                pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                                   (&local_18,&param_2,
                                                    *(
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(iVar11 + 0x4c),(MethodInfo *)0x0);
                                local_f4._0_4_ = pVVar8->___x_2;
                                local_f4._4_4_ = pVVar8->___y_3;
                                local_ec = pVVar8->___z_4;
                                iVar11 = *(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                                 ->static_fields;
                                if (iVar11 != 0) {
                                  pMVar14 = (MethodInfo *)0x0;
                                  if (*(uint *)(iVar11 + 0xc) < 7) {
                                    pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                    il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                                  }
                                  pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                                     (&local_18,&param_2,
                                                      *(
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(iVar11 + 0x58),(MethodInfo *)0x0);
                                  local_100._0_4_ = pVVar8->___x_2;
                                  local_100._4_4_ = pVVar8->___y_3;
                                  local_f8 = pVVar8->___z_4;
                                  iVar11 = *(int *)
                                                  Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                                  ->static_fields;
                                  if (iVar11 != 0) {
                                    pMVar14 = (MethodInfo *)0x0;
                                    if (*(uint *)(iVar11 + 0xc) < 8) {
                                      pEVar10 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                      il2cpp_codegen_raise_exception(pEVar10,pMVar14);
                                    }
                                    pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                                       (&local_18,&param_2,
                                                        *(
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(iVar11 + 100),(MethodInfo *)0x0);
                                    local_1c = 0;
                                    local_10c._0_4_ = pVVar8->___x_2;
                                    local_10c._4_4_ = pVVar8->___y_3;
                                    local_104 = pVVar8->___z_4;
                                    do {
                                      iVar11 = 0;
                                      do {
                                        pVVar9 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                                                           ((
                                                  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7
                                                  *)local_128,&param_1,iVar11,(MethodInfo *)0x0);
                                        pVVar8 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                                                           (&local_18,*pVVar9,(MethodInfo *)0x0);
                                        local_4c.___x_0 = pVVar8->___x_2;
                                        local_4c.___y_1 = pVVar8->___y_3;
                                        fVar3 = pVVar8->___z_4;
                                        local_118 = local_4c.___x_0;
                                        fStack_114 = local_4c.___y_1;
                                        local_110 = fVar3;
                                        bVar7 = HashSet_1_Contains_m772F6C2D57128F8EEDC52E8DDD0E4A0C86EC362E_gshared
                                                          (param_3,*pVVar8,

                                                  HashSet_1_Contains_m772F6C2D57128F8EEDC52E8DDD0E4A0C86EC362E_RuntimeMethod_var
                                                  );
                                        if (!bVar7) {
                                          VVar5.___z_4 = fVar3;
                                          VVar5.___x_2 = local_4c.___x_0;
                                          VVar5.___y_3 = local_4c.___y_1;
                                          HashSet_1_Add_m188C11CE09A8F01EE6417569FF7732CB57A57E7B_gshared
                                                    (param_3,VVar5,

                                                  HashSet_1_Add_m188C11CE09A8F01EE6417569FF7732CB57A57E7B_RuntimeMethod_var
                                                  );
                                          fVar3 = local_118;
                                          local_44 = 3.4028235e+38;
                                          local_40 = -3.4028235e+38;
                                          local_8 = fStack_114;
                                          local_c = local_110;
                                          fVar12 = local_118 * (float)local_58 +
                                                   local_58._4_4_ * fStack_114 +
                                                   local_50 * local_110;
                                          local_3c._4_4_ = fVar12;
                                          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                               ->has_cctor != '\0') &&
                                             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                              ->cctor_finished == 0)) {
                                            il2cpp_runtime_class_init
                                                      (
                                                  ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                                  );
                                            fVar12 = (float)local_3c._4_4_;
                                          }
                                          VVar13.___y_1 = local_40;
                                          VVar13.___x_0 = local_44;
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar12,(MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_64 * fVar3 +
                                                                    local_64._4_4_ * local_8 +
                                                                    local_5c * local_c,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_70 * fVar3 +
                                                                    local_70._4_4_ * local_8 +
                                                                    local_68 * local_c,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_7c * fVar3 +
                                                                    local_7c._4_4_ * local_8 +
                                                                    local_74 * local_c,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_88 * fVar3 +
                                                                    local_88._4_4_ * local_8 +
                                                                    local_80 * local_c,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_94 * fVar3 +
                                                                    local_94._4_4_ * local_8 +
                                                                    local_8c * local_c,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_a0 * fVar3 +
                                                                    local_a0._4_4_ * local_8 +
                                                                    local_98 * local_c,
                                                             (MethodInfo *)0x0);
                                          local_34 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_ac * fVar3 +
                                                                    local_ac._4_4_ * local_8 +
                                                                    local_a4 * local_c,
                                                             (MethodInfo *)0x0);
                                          local_24.___x_0 = 3.4028235e+38;
                                          local_24.___y_1 = -3.4028235e+38;
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            ((
                                                  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                                  0xff7fffff7f7fffff,
                                                  (float)local_b8 * fVar3 + local_b8._4_4_ * local_8
                                                  + local_b0 * local_c,(MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_c4 +
                                                                    local_8 * local_c4._4_4_ +
                                                                    local_c * local_bc,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_d0 +
                                                                    local_8 * local_d0._4_4_ +
                                                                    local_c * local_c8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_dc +
                                                                    local_8 * local_dc._4_4_ +
                                                                    local_c * local_d4,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_e8 +
                                                                    local_8 * local_e8._4_4_ +
                                                                    local_c * local_e0,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_f4 +
                                                                    local_8 * local_f4._4_4_ +
                                                                    local_c * local_ec,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_100 +
                                                                    local_8 * local_100._4_4_ +
                                                                    local_c * local_f8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_10c +
                                                                    local_8 * local_10c._4_4_ +
                                                                    local_c * local_104,
                                                             (MethodInfo *)0x0);
                                          if (local_2c.___y_1 < local_34.___x_0) {
                                            return false;
                                          }
                                          local_2c.___x_0 = VVar13.___x_0;
                                          bVar7 = local_34.___y_1 < local_2c.___x_0;
                                          local_2c = VVar13;
                                          if (bVar7) {
                                            return false;
                                          }
                                        }
                                        iVar11 = iVar11 + 1;
                                      } while (iVar11 < 3);
                                      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                           ->has_cctor != '\0') &&
                                         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                          ->cctor_finished == 0)) {
                                        il2cpp_runtime_class_init
                                                  (
                                                  ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                                  );
                                      }
                                      ExtraMath_Swap_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mBD80B159C37E2F532385DBB0B188787D79E8AD9A_gshared
                                                (&param_1,&param_2,
                                                 ExtraMath_Swap_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mBD80B159C37E2F532385DBB0B188787D79E8AD9A_RuntimeMethod_var
                                                );
                                      local_1c = local_1c + 1;
                                    } while (local_1c < 2);
                                    local_1c = 0;
                                    do {
                                      pVVar9 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                                                         (&local_150,&param_1,local_1c,
                                                          (MethodInfo *)0x0);
                                      pVVar8 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                                                         (&local_134,*pVVar9,(MethodInfo *)0x0);
                                      iVar11 = 0;
                                      uVar1 = pVVar8->___x_2;
                                      uVar2 = pVVar8->___y_3;
                                      local_40 = pVVar8->___z_4;
                                      fStack_114 = (float)uVar1;
                                      local_110 = (float)uVar2;
                                      do {
                                        fVar3 = local_40;
                                        pVVar9 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                                                           (&local_160,&param_2,iVar11,
                                                            (MethodInfo *)0x0);
                                        pVVar8 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                                                           (&local_140,*pVVar9,(MethodInfo *)0x0);
                                        VVar4.___y_3 = local_110;
                                        VVar4.___x_2 = fStack_114;
                                        VVar4.___z_4 = fVar3;
                                        pVVar8 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                                                           ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(local_128 + 4),VVar4,*pVVar8,(MethodInfo *)0x0)
                                        ;
                                        local_3c._0_4_ = pVVar8->___x_2;
                                        local_3c._4_4_ = pVVar8->___y_3;
                                        fVar3 = pVVar8->___z_4;
                                        local_18._0_8_ = local_3c;
                                        local_18.___z_4 = fVar3;
                                        bVar7 = HashSet_1_Contains_m772F6C2D57128F8EEDC52E8DDD0E4A0C86EC362E_gshared
                                                          (param_3,*pVVar8,

                                                  HashSet_1_Contains_m772F6C2D57128F8EEDC52E8DDD0E4A0C86EC362E_RuntimeMethod_var
                                                  );
                                        if (!bVar7) {
                                          VVar6.___z_4 = fVar3;
                                          VVar6.___x_2 = (float)local_3c._0_4_;
                                          VVar6.___y_3 = (float)local_3c._4_4_;
                                          HashSet_1_Add_m188C11CE09A8F01EE6417569FF7732CB57A57E7B_gshared
                                                    (param_3,VVar6,

                                                  HashSet_1_Add_m188C11CE09A8F01EE6417569FF7732CB57A57E7B_RuntimeMethod_var
                                                  );
                                          local_34.___x_0 = 3.4028235e+38;
                                          local_34.___y_1 = -3.4028235e+38;
                                          fVar3 = local_18.___x_2;
                                          local_c = local_18.___y_3;
                                          local_8 = local_18.___z_4;
                                          fVar12 = (float)local_58 * local_18.___x_2 +
                                                   local_58._4_4_ * local_18.___y_3 +
                                                   local_50 * local_18.___z_4;
                                          local_3c._4_4_ = fVar12;
                                          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                               ->has_cctor != '\0') &&
                                             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                              ->cctor_finished == 0)) {
                                            il2cpp_runtime_class_init
                                                      (
                                                  ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                                  );
                                            fVar12 = (float)local_3c._4_4_;
                                          }
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (local_34,fVar12,(MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_64 * fVar3 +
                                                                    local_64._4_4_ * local_c +
                                                                    local_5c * local_8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_70 * fVar3 +
                                                                    local_70._4_4_ * local_c +
                                                                    local_68 * local_8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_7c * fVar3 +
                                                                    local_7c._4_4_ * local_c +
                                                                    local_74 * local_8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_88 * fVar3 +
                                                                    local_88._4_4_ * local_c +
                                                                    local_80 * local_8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_94 * fVar3 +
                                                                    local_94._4_4_ * local_c +
                                                                    local_8c * local_8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_a0 * fVar3 +
                                                                    local_a0._4_4_ * local_c +
                                                                    local_98 * local_8,
                                                             (MethodInfo *)0x0);
                                          local_4c =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,(float)local_ac * fVar3 +
                                                                    local_ac._4_4_ * local_c +
                                                                    local_a4 * local_8,
                                                             (MethodInfo *)0x0);
                                          local_2c.___x_0 = 3.4028235e+38;
                                          local_2c.___y_1 = -3.4028235e+38;
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            ((
                                                  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                                  0xff7fffff7f7fffff,
                                                  (float)local_b8 * fVar3 + local_b8._4_4_ * local_c
                                                  + local_b0 * local_8,(MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_c4 +
                                                                    local_c * local_c4._4_4_ +
                                                                    local_8 * local_bc,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_d0 +
                                                                    local_c * local_d0._4_4_ +
                                                                    local_8 * local_c8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_dc +
                                                                    local_c * local_dc._4_4_ +
                                                                    local_8 * local_d4,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_e8 +
                                                                    local_c * local_e8._4_4_ +
                                                                    local_8 * local_e0,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_f4 +
                                                                    local_c * local_f4._4_4_ +
                                                                    local_8 * local_ec,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_100 +
                                                                    local_c * local_100._4_4_ +
                                                                    local_8 * local_f8,
                                                             (MethodInfo *)0x0);
                                          VVar13 =
                                                  ExtraMath_Encapsulate_mED29E896A8CCE990053CB340424DD9115BBE9F90
                                                            (VVar13,fVar3 * (float)local_10c +
                                                                    local_c * local_10c._4_4_ +
                                                                    local_8 * local_104,
                                                             (MethodInfo *)0x0);
                                          if (local_24.___y_1 < local_4c.___x_0) {
                                            return false;
                                          }
                                          local_24.___x_0 = VVar13.___x_0;
                                          bVar7 = local_4c.___y_1 < local_24.___x_0;
                                          local_24 = VVar13;
                                          if (bVar7) {
                                            return false;
                                          }
                                        }
                                        iVar11 = iVar11 + 1;
                                      } while (iVar11 < 3);
                                      local_1c = local_1c + 1;
                                      if (2 < local_1c) {
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
                  }
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
