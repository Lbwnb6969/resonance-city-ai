// RVA 0x835120 | ExampleDebugMenu$$Update
// PDB: ExampleDebugMenu_Update_mA2EF19ADBDF7A1F9D149D3222F89A93C9D0142A7
// Body: [[10835120, 10835245]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 110ce420 DebugMenu_Down_m570B789858D3409C06985681DEC0A4DC54F9489E
// 110cea80 DebugMenu_Left_mECDD2D2B69E47940B44FD298DF9F0E84497271A9
// 110ceb30 DebugMenu_Right_m420EF290D9774FE96FA2CAE534B791C66334C064
// 110ced00 DebugMenu_Submit_m586130B90E44D8AA150EE3D9A23FC23A6DCEC999
// 110ced80 DebugMenu_Toggle_m04B44F060942FD2B000CEC1C28C17690ED7232AE
// 110ceda0 DebugMenu_Up_m8A5F41B5377EA56993E97333A5D7C3286D1E0BE1
// 1113eef0 Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA

void __cdecl
ExampleDebugMenu_Update_mA2EF19ADBDF7A1F9D149D3222F89A93C9D0142A7
          (ExampleDebugMenu_tB62BE34AE5F1DD2D6B60E8E7896134AAF6658992 *param_1,MethodInfo *param_2)

{
  bool bVar1;

  bVar1 = Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA(0x111,(MethodInfo *)0x0);
  if (bVar1) {
    if (param_1->___menu_5 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
      DebugMenu_Up_m8A5F41B5377EA56993E97333A5D7C3286D1E0BE1(param_1->___menu_5,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar1 = Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA(0x112,(MethodInfo *)0x0);
    if (bVar1) {
      if (param_1->___menu_5 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
        DebugMenu_Down_m570B789858D3409C06985681DEC0A4DC54F9489E
                  (param_1->___menu_5,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar1 = Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA(0x113,(MethodInfo *)0x0)
      ;
      if (bVar1) {
        if (param_1->___menu_5 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
          DebugMenu_Right_m420EF290D9774FE96FA2CAE534B791C66334C064
                    (param_1->___menu_5,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        bVar1 = Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA
                          (0x114,(MethodInfo *)0x0);
        if (bVar1) {
          if (param_1->___menu_5 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
            DebugMenu_Left_mECDD2D2B69E47940B44FD298DF9F0E84497271A9
                      (param_1->___menu_5,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          bVar1 = Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA
                            (0xd,(MethodInfo *)0x0);
          if (bVar1) {
            if (param_1->___menu_5 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
              DebugMenu_Submit_m586130B90E44D8AA150EE3D9A23FC23A6DCEC999
                        (param_1->___menu_5,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            bVar1 = Input_GetKeyDownInt_mEAC027107792507CA7F0B1DFBEA4E6289CDCCCBA
                              (0x1b,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            if (param_1->___menu_5 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
              DebugMenu_Toggle_m04B44F060942FD2B000CEC1C28C17690ED7232AE
                        (param_1->___menu_5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
