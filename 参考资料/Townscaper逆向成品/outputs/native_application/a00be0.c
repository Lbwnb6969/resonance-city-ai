// RVA 0xa00be0 | Placemaker.Ui.SaveMenu$$Update
// PDB: SaveMenu_Update_mB17329CF0603BC0727C443B3F0C593AFD61F58E9
// Body: [[10a00be0, 10a00cf2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10278860 Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
// 102789f0 Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 109fe5b0 SaveMenu_FocusGamepadUpdate_mDCEE421F90F5379E5E81E03BAE02DAAE5C3DA8A5
// 109feb10 SaveMenu_GamepadUpdate_m8ABA18AD95225D15978098DB5198375B41C2929F
// 109ff810 SaveMenu_MenuInit_m67FF72B50BC98E9FB3ECC6CB0FDCDACEAB0AB0A6

/* WARNING: Removing unreachable block (ram,0x10a00c81) */

void __cdecl
SaveMenu_Update_mB17329CF0603BC0727C443B3F0C593AFD61F58E9
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  long64 lVar3;

  if (DAT_11520199 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SaveMenu_KeepGoing_mAB16680F3B141D31C4071236CC8F341CD2BA71BF_RuntimeMethod_var
              );
    DAT_11520199 = '\x01';
  }
  if (param_1->___stopwatch_38 != (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) {
    Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
              (param_1->___stopwatch_38,(MethodInfo *)0x0);
    do {
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,(Il2CppObject *)param_1,
                 (int)SaveMenu_KeepGoing_mAB16680F3B141D31C4071236CC8F341CD2BA71BF_RuntimeMethod_var
                 ,Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
      bVar1 = SaveMenu_MenuInit_m67FF72B50BC98E9FB3ECC6CB0FDCDACEAB0AB0A6
                        (param_1,(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)pOVar2,
                         (MethodInfo *)0x0);
      if (!bVar1) break;
      if (param_1->___stopwatch_38 == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0)
      goto LAB_10a00cee;
      lVar3 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
                        (param_1->___stopwatch_38,(MethodInfo *)0x0);
    } while (lVar3 < 4);
    if (param_1->___visibleState_28 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    {
      bVar1 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                        (param_1->___visibleState_28,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (param_1->___focusGamepadState_33 !=
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        bVar1 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                          (param_1->___focusGamepadState_33,(MethodInfo *)0x0);
        if (bVar1) {
          SaveMenu_FocusGamepadUpdate_mDCEE421F90F5379E5E81E03BAE02DAAE5C3DA8A5
                    (param_1,(MethodInfo *)0x0);
          return;
        }
        if (param_1->___gamepadState_32 !=
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          bVar1 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                            (param_1->___gamepadState_32,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          SaveMenu_GamepadUpdate_m8ABA18AD95225D15978098DB5198375B41C2929F
                    (param_1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10a00cee:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
