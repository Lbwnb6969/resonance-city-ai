// RVA 0x10cfcf0 | FuryStudios.FurySDK.Utils.DebugMenu.MenuEntry$$Select
// PDB: MenuEntry_Select_m8FC4F09566714DD06C04F810D506FAD89B2A23AF
// Body: [[110cfcf0, 110cfd15]]
// Direct callees:

void __cdecl
MenuEntry_Select_m8FC4F09566714DD06C04F810D506FAD89B2A23AF
          (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_1,MethodInfo *param_2)

{
  char cVar1;

  cVar1 = (**(code **)(param_1->_padding_ + 0xdc))
                    (param_1,*(undefined4 *)(param_1->_padding_ + 0xe0));
  if (cVar1 != '\0') {
    param_1->___U3CIsSelectedU3Ek__BackingField_1 = true;
  }
  return;
}
