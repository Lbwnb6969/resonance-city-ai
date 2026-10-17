// RVA 0x880100 | Placemaker.Life.Bird$$OnDrawGizmos
// PDB: Bird_OnDrawGizmos_m80B6B63E207B287036709571F7A23B682C5A54ED
// Body: [[10880100, 10880456]]
// Direct callees:
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823

void __cdecl
Bird_OnDrawGizmos_m80B6B63E207B287036709571F7A23B682C5A54ED
          (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  float fVar19;
  float fVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack_8c;
  float fStack_88;
  float fStack_78;
  float fStack_68;
  float fStack_4c;
  float local_38;
  float local_28;
  float fStack_24;

  uVar2 = (param_1->___velocityPrev_12).___x_2;
  uVar7 = (param_1->___velocityPrev_12).___y_3;
  uVar3 = (param_1->___posMid_11).___x_2;
  uVar8 = (param_1->___posMid_11).___y_3;
  fVar12 = (param_1->___posMid_11).___z_4;
  fVar27 = (float)uVar3 - (float)uVar2 * __real_3f000000;
  fVar29 = (float)uVar8 - (float)uVar7 * __real_3f000000;
  fVar30 = fVar12 - (param_1->___velocityPrev_12).___z_4 * __real_3f000000;
  pVVar1 = &param_1->___posMid_11;
  uVar4 = pVVar1->___x_2;
  uVar9 = pVVar1->___y_3;
  VVar21 = *pVVar1;
  VVar18 = *pVVar1;
  VVar14 = *pVVar1;
  uVar5 = (param_1->___velocityNext_13).___x_2;
  uVar10 = (param_1->___velocityNext_13).___y_3;
  uVar6 = (param_1->___posMid_11).___x_2;
  uVar11 = (param_1->___posMid_11).___y_3;
  fVar23 = (float)uVar5 * __real_3f000000 + (float)uVar6;
  fVar24 = (float)uVar10 * __real_3f000000 + (float)uVar11;
  fVar25 = (param_1->___velocityNext_13).___z_4 * __real_3f000000 + fVar12;
  VVar13.___y_3 = fVar29;
  VVar13.___x_2 = fVar27;
  VVar13.___z_4 = fVar30;
  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
            (VVar13,param_1->___posMid_11,(MethodInfo *)0x0);
  VVar16.___y_3 = fVar24;
  VVar16.___x_2 = fVar23;
  VVar16.___z_4 = fVar25;
  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar14,VVar16,(MethodInfo *)0x0);
  fVar22 = fVar30;
  fVar26 = __real_3d4ccccd;
  fVar19 = fVar27;
  fVar20 = fVar29;
  do {
    fVar32 = __real_3f800000 - fVar26;
    fVar31 = fVar32 * fVar32;
    fVar33 = (fVar32 + fVar32) * fVar26;
    fVar32 = fVar26 * fVar26;
    fVar34 = (float)uVar4 * fVar33 + fVar27 * fVar31 + fVar23 * fVar32;
    fVar28 = (float)uVar9 * fVar33 + fVar29 * fVar31 + fVar24 * fVar32;
    fVar32 = fVar12 * fVar33 + fVar30 * fVar31 + fVar25 * fVar32;
    VVar17.___y_3 = fVar28;
    VVar17.___x_2 = fVar34;
    VVar14.___y_3 = fVar20;
    VVar14.___x_2 = fVar19;
    VVar14.___z_4 = fVar22;
    VVar17.___z_4 = fVar32;
    Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar14,VVar17,(MethodInfo *)0x0);
    fVar26 = fVar26 + __real_3d4ccccd;
    fVar22 = fVar32;
    fVar19 = fVar34;
    fVar20 = fVar28;
  } while (fVar26 < __real_3f8147ae);
  VVar15.___y_3 = fVar29;
  VVar15.___x_2 = fVar27;
  VVar15.___z_4 = fVar30;
  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar15,VVar18,(MethodInfo *)0x0);
  VVar18.___y_3 = fVar24;
  VVar18.___x_2 = fVar23;
  VVar18.___z_4 = fVar25;
  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar21,VVar18,(MethodInfo *)0x0);
  return;
}
