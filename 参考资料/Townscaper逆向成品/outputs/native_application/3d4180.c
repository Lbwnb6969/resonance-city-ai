// RVA 0x3d4180 | Placemaker.Ui.MasterClicker$$OnGUI
// PDB: MasterClicker_OnGUI_m8EEA0DFFA82B778B11CACA47D23683DB73FC83BC
// Body: [[103d4180, 103d41f5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1074cf60 OrbitalCamera_ScrollZoom_m638E00B2CE53B762BF4C29BFC1BCEC09DF2D5CDA
// 1113ee10 Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
MasterClicker_OnGUI_m8EEA0DFFA82B778B11CACA47D23683DB73FC83BC
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar1;
  float fVar2;

  if (DAT_1151c863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
    DAT_1151c863 = '\x01';
  }
  if (param_1->___hovered_9 != false) {
    fVar2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326
                      (_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0,(MethodInfo *)0x0);
    if (fVar2 != ___real_00000000) {
      if ((param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pOVar1 = param_1->___master_7->___orbitalCamera_15,
         pOVar1 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      OrbitalCamera_ScrollZoom_m638E00B2CE53B762BF4C29BFC1BCEC09DF2D5CDA
                (pOVar1,fVar2,(MethodInfo *)0x0);
    }
  }
  return;
}
