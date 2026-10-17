// RVA 0x10d3080 | FuryStudios.FurySDK.Utils.DebugMenu.<>c$$<Right>b__18_0
// PDB: U3CU3Ec_U3CRightU3Eb__18_0_m1898BB2FA09C8C8AE3A0B6601203DF800A2DF05D
// Body: [[110d3080, 110d3140]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

bool __cdecl
U3CU3Ec_U3CRightU3Eb__18_0_m1898BB2FA09C8C8AE3A0B6601203DF800A2DF05D
          (U3CU3Ec_t3BC101054690BE9EE6163638A3AAAD996F5589F3 *param_1,
          MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_2,MethodInfo *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *pMVar5;

  if (DAT_11523ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
              );
    DAT_11523ab6 = '\x01';
  }
  if (param_2 != (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0) {
    iVar3 = param_2->_padding_;
    bVar1 = *(byte *)(iVar3 + 0xb4);
    if ((bVar1 < MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var->
                 typeHierarchyDepth) ||
       (*(Il2CppClass **)
         (*(int *)(iVar3 + 100) + -4 +
         (uint)MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var->
               typeHierarchyDepth * 4) !=
        MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar5 = (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0;
    if (bVar4) {
      pMVar5 = param_2;
    }
    if (pMVar5 != (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0) {
      bVar2 = MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var->
              typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         (*(Il2CppClass **)(*(int *)(iVar3 + 100) + -4 + (uint)bVar2 * 4) !=
          MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar5 = (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0;
      if (bVar4) {
        pMVar5 = param_2;
      }
      if (pMVar5 != (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0) {
        if ((bVar1 < bVar2) ||
           (*(Il2CppClass **)(*(int *)(iVar3 + 100) + -4 + (uint)bVar2 * 4) !=
            MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pMVar5 = (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0;
        if (bVar4) {
          pMVar5 = param_2;
        }
        if (pMVar5 != (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0) {
          return (bool)*(undefined1 *)&pMVar5[1].___U3CNameU3Ek__BackingField_0;
        }
      }
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                ((Il2CppObject *)param_2,
                 MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var);
    }
  }
  return false;
}
