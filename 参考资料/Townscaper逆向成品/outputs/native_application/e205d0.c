// RVA 0xe205d0 | Placemaker.GroundClicker$$OnGUI
// PDB: GroundClicker_OnGUI_m04AF20303F787FE08B250EC47E278089675E3AD6
// Body: [[10e205d0, 10e2064b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1074cf60 OrbitalCamera_ScrollZoom_m638E00B2CE53B762BF4C29BFC1BCEC09DF2D5CDA
// 1113ee10 Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GroundClicker_OnGUI_m04AF20303F787FE08B250EC47E278089675E3AD6
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar1;
  float fVar2;

  if (DAT_11522680 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
    DAT_11522680 = '\x01';
  }
  if (param_1->___hovered_6 != false) {
    fVar2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326
                      (_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0,(MethodInfo *)0x0);
    if (fVar2 * __real_3e800000 != ___real_00000000) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pOVar1 = param_1->___master_4->___orbitalCamera_15,
         pOVar1 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      OrbitalCamera_ScrollZoom_m638E00B2CE53B762BF4C29BFC1BCEC09DF2D5CDA
                (pOVar1,fVar2 * __real_3e800000,(MethodInfo *)0x0);
    }
  }
  return;
}
