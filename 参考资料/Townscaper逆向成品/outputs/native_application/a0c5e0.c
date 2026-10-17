// RVA 0xa0c5e0 | Placemaker.Ui.SideMenu$$Button_Quit_Full
// PDB: SideMenu_Button_Quit_Full_m6F4F8EC8AEF4B00C57F399539A3ACF48D6BA7847
// Body: [[10a0c5e0, 10a0c771]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d60 U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a48ec0 MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
SideMenu_Button_Quit_Full_m6F4F8EC8AEF4B00C57F399539A3ACF48D6BA7847
          (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *param_1,
          BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_2,MethodInfo *param_3)

{
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar6;

  if (DAT_115201eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mB351E0071B80DD4413D2C985822512A0A4EAEB3C_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1D950316B29DFB6F670BBCE36E4637E215C52B31_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass22_0_U3CButton_Quit_FullU3Eb__0_m1663A156605F973F886F7E9732B9540E692C80C9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass22_0_tA90E226C2F1FBF083335F3D4398CBE67B816294A_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC9604595C464A68E4A2636E15A9093EA2C4B71B7);
    DAT_115201eb = '\x01';
  }
  pBVar4 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass22_0_tA90E226C2F1FBF083335F3D4398CBE67B816294A_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar4,(MethodInfo *)0x0);
  if (pBVar4 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar4->___name_0 = (String_t *)param_1;
    pBVar4->___screenAspectRatio_1 = (float)param_2;
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pLVar1 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                 param_1->___master_4->___lockedButtons_42,
       pLVar1 != (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)) {
      if (0 < pLVar1->____size_2) {
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                  ((Il2CppObject *)_stringLiteralC9604595C464A68E4A2636E15A9093EA2C4B71B7,
                   (MethodInfo *)0x0);
        return;
      }
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                (pLVar1,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                 List_1_Add_mB351E0071B80DD4413D2C985822512A0A4EAEB3C_RuntimeMethod_var);
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar2 = param_1->___master_4->___worldMaster_5,
         pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
        pSVar3 = pWVar2->___saveSystem_35;
        pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar5,(Il2CppObject *)pBVar4,
                   (int)
                   U3CU3Ec__DisplayClass22_0_U3CButton_Quit_FullU3Eb__0_m1663A156605F973F886F7E9732B9540E692C80C9_RuntimeMethod_var
                   ,(MethodInfo *)0x0);
        if (pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
          if (DAT_115201b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               U3CSaveAndQuitU3Ed__70_t7E65C98538C13C1F60D429C93A9643B0467A7F4A_il2cpp_TypeInfo_var
                      );
            DAT_115201b7 = '\x01';
          }
          pUVar6 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                   il2cpp_codegen_object_new
                             (
                             U3CSaveAndQuitU3Ed__70_t7E65C98538C13C1F60D429C93A9643B0467A7F4A_il2cpp_TypeInfo_var
                             );
          U3CBlockingU3Ed__3__ctor_mA08CA85A410A10DCD75D8FDB012AB6E42BB045C8
                    (pUVar6,0,(MethodInfo *)0x0);
          if (pUVar6 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
            pUVar6->___U3CU3E4__this_2 =
                 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)pSVar3;
            pUVar6[1]._padding_ = (int)pOVar5;
            MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
                      ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,
                       (Il2CppObject *)pUVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
