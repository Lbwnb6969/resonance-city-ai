// RVA 0x10cfcc0 | FuryStudios.FurySDK.Utils.DebugMenu.MenuEntry$$Deselect
// PDB: MenuEntry_Deselect_m69116907DE1D0B8B67599E78CB6905FE97319F61
// Body: [[110cfcc0, 110cfce5]]
// Direct callees:

void __cdecl
MenuEntry_Deselect_m69116907DE1D0B8B67599E78CB6905FE97319F61
          (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_1,MethodInfo *param_2)

{
  char cVar1;

  cVar1 = (**(code **)(param_1->_padding_ + 0xdc))
                    (param_1,*(undefined4 *)(param_1->_padding_ + 0xe0));
  if (cVar1 != '\0') {
    param_1->___U3CIsSelectedU3Ek__BackingField_1 = false;
  }
  return;
}
