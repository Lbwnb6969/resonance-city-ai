// RVA 0x74eae0 | Placemaker.Ui.PaletteMenu$$OnDrawGizmos
// PDB: PaletteMenu_OnDrawGizmos_m5CE03EB5EFEDB3EE4066FF4DA9765092A1D704AB
// Body: [[1074eae0, 1074eb3c]]
// Direct callees:
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823

void __cdecl
PaletteMenu_OnDrawGizmos_m5CE03EB5EFEDB3EE4066FF4DA9765092A1D704AB
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;

  VVar1.___z_4 = 0.0;
  VVar1.___x_2 = (param_1->___p0_17).___x_0;
  VVar1.___y_3 = (param_1->___p0_17).___y_1;
  VVar2.___z_4 = 0.0;
  VVar2.___x_2 = (param_1->___p1_18).___x_0;
  VVar2.___y_3 = (param_1->___p1_18).___y_1;
  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar1,VVar2,(MethodInfo *)0x0);
  return;
}
