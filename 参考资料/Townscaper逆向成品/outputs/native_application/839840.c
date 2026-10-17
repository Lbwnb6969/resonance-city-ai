// RVA 0x839840 | Placemaker.Graphs.Flow$$FlowTwoFlows
// PDB: Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
// Body: [[10839840, 10839a50]]
// Direct callees:
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10a44170 Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
          (Flow_t39D4306CF6EAF469941A331619EEFD7CC66F9C46 *param_1,
          FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *param_2,
          FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *param_3,float param_4,
          MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_4c;
  float fStack_3c;
  float fStack_30;
  float fStack_24;
  float local_1c;
  float local_10;

  if ((param_2->___availale_4 != false) && (param_3->___availale_4 != false)) {
    fVar13 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                       ((param_2->___flowData_0).___dist_2 - (param_3->___flowData_0).___dist_2,
                        (float)((uint)param_4 ^ __xmm_80000000800000008000000080000000),param_4,
                        (MethodInfo *)0x0);
    uVar1 = (param_2->___pos_6).___x_2;
    uVar2 = (param_3->___pos_6).___x_2;
    uVar5 = (param_3->___pos_6).___y_3;
    uVar6 = (param_2->___pos_6).___y_3;
    fVar11 = ((float)uVar5 - (float)uVar6) / param_4;
    fVar12 = ((param_3->___pos_6).___z_4 - (param_2->___pos_6).___z_4) / param_4;
    fVar10 = fVar13 * (((float)uVar2 - (float)uVar1) / param_4);
    if (fVar13 <= ___real_00000000) {
      uVar3 = (param_3->___flowData_0).___newDir_6.___x_2;
      uVar7 = (param_3->___flowData_0).___newDir_6.___y_3;
      fVar9 = (param_3->___flowData_0).___newDir_6.___z_4;
      (param_3->___flowData_0).___newDir_6.___x_2 = fVar10 + (float)uVar3;
      (param_3->___flowData_0).___newDir_6.___y_3 = fVar13 * fVar11 + (float)uVar7;
      (param_3->___flowData_0).___newDir_6.___z_4 = fVar13 * fVar12 + fVar9;
      fVar10 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                         ((param_3->___flowData_0).___newDist_3,
                          (param_2->___flowData_0).___dist_2 + param_4,(MethodInfo *)0x0);
      (param_3->___flowData_0).___newDist_3 = fVar10;
      (param_3->___flowData_0).___denom_4 = (param_3->___flowData_0).___denom_4 + __real_3f800000;
      return;
    }
    uVar4 = (param_2->___flowData_0).___newDir_6.___x_2;
    uVar8 = (param_2->___flowData_0).___newDir_6.___y_3;
    fVar9 = (param_2->___flowData_0).___newDir_6.___z_4;
    (param_2->___flowData_0).___newDir_6.___x_2 = fVar10 + (float)uVar4;
    (param_2->___flowData_0).___newDir_6.___y_3 = fVar13 * fVar11 + (float)uVar8;
    (param_2->___flowData_0).___newDir_6.___z_4 = fVar13 * fVar12 + fVar9;
    fVar10 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                       ((param_2->___flowData_0).___newDist_3,
                        (param_3->___flowData_0).___dist_2 + param_4,(MethodInfo *)0x0);
    (param_2->___flowData_0).___newDist_3 = fVar10;
    (param_2->___flowData_0).___denom_4 = (param_2->___flowData_0).___denom_4 + __real_3f800000;
  }
  return;
}
