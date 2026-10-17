// RVA 0x83bdf0 | Placemaker.Graphs.Flow$$SetupFlowData
// PDB: Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
// Body: [[1083bdf0, 1083be59] [1083be5d, 1083bee9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
          (Flow_t39D4306CF6EAF469941A331619EEFD7CC66F9C46 *param_1,
          FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *param_2,MethodInfo *param_3)

{
  FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3 *pFVar1;
  float *pfVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  uint uVar4;
  List_1_t569265593A89FA799E916FF2D345C50EFB59729A *pLVar5;
  FlowDataU5BU5D_t0A50EB1BA21C3F44944642C7F89D50ECCA8987D7 *pFVar6;
  undefined4 *puVar7;
  bool bVar8;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;

  if (DAT_1151f40b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f40b = '\x01';
  }
  uVar4 = param_2->___index_3;
  param_2->___availale_4 = (int)uVar4 < param_2->___count_2;
  if ((int)uVar4 < param_2->___count_2) {
    if ((param_2->___corner_1 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
       (pLVar5 = param_2->___corner_1->___flowDatas_8,
       pLVar5 == (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    if ((uint)pLVar5->____size_2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pFVar6 = pLVar5->____items_1;
    pFVar1 = pFVar6->m_Items + uVar4;
    pVVar9 = pFVar1->___voxel_0;
    uVar10 = *(undefined4 *)&pFVar1->___neighbourCount_1;
    fVar11 = pFVar1->___dist_2;
    fVar12 = pFVar1->___newDist_3;
    pfVar2 = &pFVar6->m_Items[uVar4].___denom_4;
    fVar13 = *pfVar2;
    fVar14 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(pfVar2 + 1))->___x_2;
    fVar15 = pfVar2[2];
    fVar16 = pfVar2[3];
    pVVar3 = &pFVar6->m_Items[uVar4].___newDir_6;
    fVar17 = pVVar3->___x_2;
    fVar18 = pVVar3->___y_3;
    fVar19 = pVVar3->___z_4;
    uVar20 = pVVar3[1].___x_2;
  }
  else {
    if ((FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var);
    }
    puVar7 = FlowData_t3C19D51B45F2DF820D71B9F5B6496FA344AA5AA3_il2cpp_TypeInfo_var->static_fields;
    pVVar9 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)*puVar7;
    uVar10 = puVar7[1];
    fVar11 = (float)puVar7[2];
    fVar12 = (float)puVar7[3];
    fVar13 = (float)puVar7[4];
    fVar14 = (float)puVar7[5];
    fVar15 = (float)puVar7[6];
    fVar16 = (float)puVar7[7];
    fVar17 = (float)puVar7[8];
    fVar18 = (float)puVar7[9];
    fVar19 = (float)puVar7[10];
    uVar20 = puVar7[0xb];
  }
  (param_2->___flowData_0).___voxel_0 = pVVar9;
  *(undefined4 *)&(param_2->___flowData_0).___neighbourCount_1 = uVar10;
  (param_2->___flowData_0).___dist_2 = fVar11;
  (param_2->___flowData_0).___newDist_3 = fVar12;
  (param_2->___flowData_0).___denom_4 = fVar13;
  (param_2->___flowData_0).___dir_5.___x_2 = fVar14;
  (param_2->___flowData_0).___dir_5.___y_3 = fVar15;
  (param_2->___flowData_0).___dir_5.___z_4 = fVar16;
  (param_2->___flowData_0).___newDir_6.___x_2 = fVar17;
  (param_2->___flowData_0).___newDir_6.___y_3 = fVar18;
  (param_2->___flowData_0).___newDir_6.___z_4 = fVar19;
  *(undefined4 *)&(param_2->___flowData_0).___target_7 = uVar20;
  pVVar9 = (param_2->___flowData_0).___voxel_0;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar9,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  param_2->___open_5 = bVar8;
  return;
}
