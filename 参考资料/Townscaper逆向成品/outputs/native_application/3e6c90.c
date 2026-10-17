// RVA 0x3e6c90 | Placemaker.Ui.UiMaster$$<MaybeSetup>b__58_0
// PDB: UiMaster_U3CMaybeSetupU3Eb__58_0_m18E9A417F9B38CED66AD53E99F26F73DC422A00D
// Body: [[103e6c90, 103e6cbf]]
// Direct callees:

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UiMaster_U3CMaybeSetupU3Eb__58_0_m18E9A417F9B38CED66AD53E99F26F73DC422A00D
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  int iVar1;

  iVar1 = param_1->___lastScreenWidth_37;
  if (param_1->___lastScreenHeight_38 <= param_1->___lastScreenWidth_37) {
    iVar1 = param_1->___lastScreenHeight_38;
  }
  param_1->___gamepadCursorSensitivity_41 = (float)iVar1 * ___real_3ada71d1;
  return;
}
