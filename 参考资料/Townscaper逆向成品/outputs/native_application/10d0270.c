// RVA 0x10d0270 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry$$Submit
// PDB: MenuNavigationEntry_Submit_mB22451433F06FCC2DACFAA2A285B8FE42B5BA002
// Body: [[110d0270, 110d02d9]]
// Direct callees:
// 110cfdc0 MenuNavigationEntry_CloseAllChildsExcept_m6133F108AACA33A00D6D056D09191CBAF1EB32A0
// 110d0130 MenuNavigationEntry_FindFirstSelectable_mF91EBB39BA26F8B5472304F5994CF327A8951FDD

void __cdecl
MenuNavigationEntry_Submit_mB22451433F06FCC2DACFAA2A285B8FE42B5BA002
          (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_1,
          MethodInfo *param_2)

{
  bool bVar1;
  MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *pMVar2;

  bVar1 = param_1->___U3CIsExpandedU3Ek__BackingField_4;
  param_1->___U3CIsExpandedU3Ek__BackingField_4 = bVar1 == false;
  if (bVar1 == false) {
    if (param_1->___U3CParentU3Ek__BackingField_2 !=
        (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
      MenuNavigationEntry_CloseAllChildsExcept_m6133F108AACA33A00D6D056D09191CBAF1EB32A0
                (param_1->___U3CParentU3Ek__BackingField_2,
                 (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)param_1,(MethodInfo *)0x0);
    }
    if (((char)param_1->_padding_ != '\0') &&
       (pMVar2 = MenuNavigationEntry_FindFirstSelectable_mF91EBB39BA26F8B5472304F5994CF327A8951FDD
                           (param_1,(MethodInfo *)0x0),
       pMVar2 != (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0)) {
      (**(code **)(param_1->_padding_ + 0xfc))(param_1,*(undefined4 *)(param_1->_padding_ + 0x100));
      (**(code **)(pMVar2->_padding_ + 0xf4))(pMVar2,*(undefined4 *)(pMVar2->_padding_ + 0xf8));
    }
  }
  return;
}
