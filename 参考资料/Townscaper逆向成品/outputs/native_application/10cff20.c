// RVA 0x10cff20 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry$$Close
// PDB: MenuNavigationEntry_Close_mC2843EF4CF7FF84C9D777A243BE8A092F168BAC4
// Body: [[110cff20, 110cff56]]
// Direct callees:
// 110cfdc0 MenuNavigationEntry_CloseAllChildsExcept_m6133F108AACA33A00D6D056D09191CBAF1EB32A0

void __cdecl
MenuNavigationEntry_Close_mC2843EF4CF7FF84C9D777A243BE8A092F168BAC4
          (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_1,
          MethodInfo *param_2)

{
  char cVar1;

  param_1->___U3CIsExpandedU3Ek__BackingField_4 = false;
  cVar1 = (**(code **)(param_1->_padding_ + 0xdc))
                    (param_1,*(undefined4 *)(param_1->_padding_ + 0xe0));
  if (cVar1 != '\0') {
    *(undefined1 *)&param_1->_padding_ = 0;
  }
  MenuNavigationEntry_CloseAllChildsExcept_m6133F108AACA33A00D6D056D09191CBAF1EB32A0
            (param_1,(MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0,(MethodInfo *)0x0);
  return;
}
