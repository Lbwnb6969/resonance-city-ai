// RVA 0x74f380 | Placemaker.Ui.PaletteMenu$$SetNewTargetScroll
// PDB: PaletteMenu_SetNewTargetScroll_mD5DFC7F7FF0A5692D1951DDE92DBDB203510A8B2
// Body: [[1074f380, 1074f3a2]]
// Direct callees:

void __cdecl
PaletteMenu_SetNewTargetScroll_mD5DFC7F7FF0A5692D1951DDE92DBDB203510A8B2
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,float param_2,
          MethodInfo *param_3)

{
  if (param_2 != param_1->___targetScroll_8) {
    param_1->___targetScroll_8 = param_2;
    param_1->___updating_25 = true;
  }
  return;
}
