// RVA 0x3e5580 | Placemaker.Ui.UiMaster$$CanTakeKeyInput
// PDB: UiMaster_CanTakeKeyInput_mD112C03BB65093AFDD3C21D0010417E0E894C5B5
// Body: [[103e5580, 103e5591]]
// Direct callees:

bool __cdecl
UiMaster_CanTakeKeyInput_mD112C03BB65093AFDD3C21D0010417E0E894C5B5
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  return (param_1->___menuState_30 & 0x78dU) == 0;
}
