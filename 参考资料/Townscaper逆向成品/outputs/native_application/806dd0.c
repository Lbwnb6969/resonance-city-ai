// RVA 0x806dd0 | Placemaker.Quads.Quad$$Rotate
// PDB: Quad_Rotate_m8908AD3B8C1D40DCE4DE870C5532F70DC4DCEE72
// Body: [[10806dd0, 10806e6e]]
// Direct callees:

void __cdecl
Quad_Rotate_m8908AD3B8C1D40DCE4DE870C5532F70DC4DCEE72
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  fVar1 = (param_1->___p1_6).___y_1;
  fVar2 = (param_1->___p2_7).___x_0;
  fVar3 = (param_1->___p2_7).___y_1;
  fVar4 = (param_1->___p3_8).___x_0;
  fVar5 = (param_1->___p3_8).___y_1;
  fVar6 = (param_1->___p0_5).___x_0;
  fVar7 = (param_1->___p0_5).___y_1;
  iVar8 = (param_1->___v1_2).___x_0;
  iVar9 = (param_1->___v0_1).___x_0;
  iVar10 = (param_1->___v0_1).___y_1;
  (param_1->___p0_5).___x_0 = (param_1->___p1_6).___x_0;
  (param_1->___p0_5).___y_1 = fVar1;
  (param_1->___p1_6).___x_0 = fVar2;
  (param_1->___p1_6).___y_1 = fVar3;
  (param_1->___p2_7).___x_0 = fVar4;
  (param_1->___v0_1).___x_0 = iVar8;
  (param_1->___p2_7).___y_1 = fVar5;
  (param_1->___v0_1).___y_1 = (param_1->___v1_2).___y_1;
  (param_1->___v1_2).___x_0 = (param_1->___v2_3).___x_0;
  iVar8 = (param_1->___v2_3).___y_1;
  (param_1->___p3_8).___x_0 = fVar6;
  (param_1->___v1_2).___y_1 = iVar8;
  (param_1->___v2_3).___x_0 = (param_1->___v3_4).___x_0;
  (param_1->___p3_8).___y_1 = fVar7;
  (param_1->___v2_3).___y_1 = (param_1->___v3_4).___y_1;
  (param_1->___v3_4).___x_0 = iVar9;
  (param_1->___v3_4).___y_1 = iVar10;
  return;
}
