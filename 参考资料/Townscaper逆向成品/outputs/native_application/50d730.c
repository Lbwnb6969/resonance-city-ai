// RVA 0x50d730 | Placemaker.Props.PropRadiusIterator<object>$$MoveNext
// PDB: PropRadiusIterator_1_MoveNext_m510067F95DEE1FF686051A63BF12F80C2A13C2EC_gshared
// Body: [[1050d730, 1050d84e] [1050d852, 1050da9c]]
// Direct callees:
// 1015daa0 InitFromCodegenSlow
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224a40 Dictionary_2_TryGetValue_m47EBC230535FB0C18A841ACED71E994C678CBCB8_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

bool __cdecl
PropRadiusIterator_1_MoveNext_m510067F95DEE1FF686051A63BF12F80C2A13C2EC_gshared
          (PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B *param_1,
          MethodInfo *param_2)

{
  uint uVar1;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar2;
  List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 *pLVar3;
  Il2CppClass *pIVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar5;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar11;
  Il2CppObject *pIVar12;
  int iVar13;
  Il2CppClass *pIVar14;
  float fVar15;
  float fVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_bc;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_74;
  undefined8 local_68;
  undefined8 local_5c;
  float local_54;
  undefined8 local_50;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  undefined8 local_2c;
  int local_20;
  int iStack_1c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_14;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_8;

  if (DAT_1151d334 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    DAT_1151d334 = '\x01';
  }
  local_14.___x_2 = 0.0;
  local_14.___y_3 = 0.0;
  local_14.___z_4 = 0.0;
LAB_1050d790:
  while (uVar1 = param_1->___i_6, -1 < (int)uVar1) {
    pLVar3 = param_1->___propColliders_7;
    param_1->___i_6 = uVar1 - 1;
    if (pLVar3 == (List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 *)0x0) goto LAB_1050da98;
    if ((uint)pLVar3->____size_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    local_8 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
               (pLVar3->____items_1 + uVar1 * 4 + 0x10);
    if (local_8 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1050da98;
    pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        (local_8,(MethodInfo *)0x0);
    if (pTVar10 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1050da98;
    pVVar11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        (&local_bc,pTVar10,(MethodInfo *)0x0);
    local_2c._0_4_ = pVVar11->___x_2;
    local_2c._4_4_ = pVVar11->___y_3;
    fVar16 = pVVar11->___z_4;
    fVar15 = (float)param_1->___x_3;
    if (fVar15 + fVar15 <= (float)(undefined4)local_2c) {
      local_38._0_4_ = pVVar11->___x_2;
      local_38._4_4_ = pVVar11->___y_3;
      fVar15 = (float)param_1->___y_4;
      if (fVar15 + fVar15 <= (float)local_38._4_4_) {
        local_44._0_4_ = pVVar11->___x_2;
        local_44._4_4_ = pVVar11->___y_3;
        fVar15 = (float)param_1->___z_5;
        local_3c = fVar16;
        if ((fVar15 + fVar15 <= fVar16) &&
           (fVar16 = (float)(param_1->___x_3 + 1), (float)(undefined4)local_2c < fVar16 + fVar16)) {
          local_50._0_4_ = pVVar11->___x_2;
          local_50._4_4_ = pVVar11->___y_3;
          fVar16 = (float)(param_1->___y_4 + 1);
          if ((float)local_50._4_4_ < fVar16 + fVar16) {
            local_54 = pVVar11->___z_4;
            local_5c._0_4_ = pVVar11->___x_2;
            local_5c._4_4_ = pVVar11->___y_3;
            fVar16 = (float)(param_1->___z_5 + 1);
            if (local_54 < fVar16 + fVar16) {
              local_74._0_4_ = pVVar11->___x_2;
              local_74._4_4_ = pVVar11->___y_3;
              local_90 = (param_1->___pos_2).___z_4;
              local_80._0_4_ = (param_1->___pos_2).___x_2;
              local_80._4_4_ = (param_1->___pos_2).___y_3;
              local_8c._0_4_ = pVVar11->___x_2;
              local_8c._4_4_ = pVVar11->___y_3;
              local_98._0_4_ = (param_1->___pos_2).___x_2;
              local_98._4_4_ = (param_1->___pos_2).___y_3;
              local_a4._0_4_ = pVVar11->___x_2;
              local_a4._4_4_ = pVVar11->___y_3;
              local_9c = pVVar11->___z_4;
              local_a8 = local_90 - local_9c;
              local_14.___y_3 = (float)local_80._4_4_ - (float)local_8c._4_4_;
              local_14.___x_2 = (float)(undefined4)local_80 - (float)(undefined4)local_74;
              local_68 = local_80;
              local_14.___z_4 = local_a8;
              fVar16 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                 (&local_14,(MethodInfo *)0x0);
              if (fVar16 < param_1->___sqRadius_1 || fVar16 == param_1->___sqRadius_1) {
                pIVar4 = param_2->klass;
                pIVar14 = pIVar4;
                if (pIVar4->initialized_and_no_error == 0) {
                  il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar4);
                  pIVar14 = param_2->klass;
                }
                if (pIVar14->initialized_and_no_error == 0) {
                  il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar14);
                }
                pCVar6 = local_8;
                cVar8 = (*(pIVar14->rgctx_data[1].method)->methodPointer)
                                  (local_8,&param_1->___current_10,
                                   pIVar4->rgctx_data[1].rgctxDataDummy);
                if (cVar8 != '\0') {
                  pIVar12 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                      (pCVar6,
                                       Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                      );
                  if (pIVar12 == (Il2CppObject *)0x0) goto LAB_1050da98;
                  if (*(char *)&pIVar12[2].monitor != '\0') {
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar13 = param_1->___x_3 + 1;
  param_1->___x_3 = iVar13;
  if ((param_1->___max_9).___x_0 <= iVar13) {
    iVar13 = (param_1->___min_8).___x_0;
    iVar9 = param_1->___y_4 + 1;
    param_1->___x_3 = iVar13;
    param_1->___y_4 = iVar9;
    if ((param_1->___max_9).___y_1 <= iVar9) {
      param_1->___y_4 = (param_1->___min_8).___y_1;
      iVar9 = param_1->___z_5 + 1;
      param_1->___z_5 = iVar9;
      if ((param_1->___max_9).___z_2 <= iVar9) {
        return false;
      }
    }
  }
  if (param_1->___propPlacer_0 != (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0) {
    pDVar2 = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
             param_1->___propPlacer_0->___colliderDict_10;
    iStack_1c = param_1->___y_4;
    local_20 = iVar13;
    if (pDVar2 != (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) {
      iVar5.___y_1 = iStack_1c;
      iVar5.___x_0 = iVar13;
      iVar5.___z_2 = param_1->___z_5;
      bVar7 = Dictionary_2_TryGetValue_m47EBC230535FB0C18A841ACED71E994C678CBCB8_gshared
                        (pDVar2,iVar5,(Il2CppObject **)&param_1->___propColliders_7,
                         Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
                        );
      if (!bVar7) goto LAB_1050d790;
      pLVar3 = param_1->___propColliders_7;
      if (pLVar3 != (List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 *)0x0) {
        param_1->___i_6 = pLVar3->____size_2 + -1;
        goto LAB_1050d790;
      }
    }
  }
LAB_1050da98:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
