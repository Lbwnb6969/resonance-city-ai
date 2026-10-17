// RVA 0xa02c50 | Placemaker.SaveSystem$$MaybeUpdateOldSettings
// PDB: SaveSystem_MaybeUpdateOldSettings_mE08CC07E54258028C6F390337DC2051C327E1CB3
// Body: [[10a02c50, 10a02edb]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 10a02ef0 FUN_10a02ef0
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a70740 File_Copy_m0405411AE250222E046657B870C15D9B18D3573C
// 10a710b0 File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B
// 10b19040 Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
// 10b19810 Directory_EnumerateFiles_mD510DCB0E51F3E593A49E09B75843DB8FA6FFAC7
// 10ed9980 Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
// 10eda000 Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD
// 10eda250 Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A
// 10f04bc0 String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2

void __cdecl
SaveSystem_MaybeUpdateOldSettings_mE08CC07E54258028C6F390337DC2051C327E1CB3
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  ushort uVar1;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar2;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  ushort uVar6;
  String_t *pSVar7;
  String_t *pSVar8;
  String_t *pSVar9;
  Il2CppObject *pIVar10;
  int iVar11;
  VirtualInvokeData *pVVar12;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__SaveSystem_MaybeUpdateOldSettings_mE08CC07E54258028C6F390337DC2051C327E1CB3
  ;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_115201aa == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3CCD7EEB70EDA506336AFFE1C7A3F5FA21324A7E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_115201aa = '\x01';
  }
  pSVar2 = param_1->___settingsData_10;
  if (pSVar2 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) {
    if (pSVar2->___version_0 == 0) {
      if ((param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
          ) && (pUVar3 = param_1->___worldMaster_4->___uiMaster_4,
               pUVar3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) {
        pSVar7 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                           (pUVar3,_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2,
                            (MethodInfo *)0x0);
        if ((param_1->___worldMaster_4 !=
             (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
           (pUVar3 = param_1->___worldMaster_4->___uiMaster_4,
           pUVar3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) {
          pSVar8 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                             (pUVar3,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                              (MethodInfo *)0x0);
          pSVar9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                             (_stringLiteral3CCD7EEB70EDA506336AFFE1C7A3F5FA21324A7E,
                              (Il2CppObject *)pSVar7,(Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                    ((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
          Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
                    (pSVar8,(MethodInfo *)0x0);
          pIVar10 = Directory_EnumerateFiles_mD510DCB0E51F3E593A49E09B75843DB8FA6FFAC7
                              (pSVar7,(MethodInfo *)0x0);
          if (pIVar10 != (Il2CppObject *)0x0) {
            pIVar10 = (Il2CppObject *)
                      InterfaceFuncInvoker0<int>::Invoke
                                (0,
                                 IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var
                                 ,pIVar10);
            local_8 = 0;
            while (pIVar10 != (Il2CppObject *)0x0) {
              iVar11 = InterfaceFuncInvoker0<int>::Invoke
                                 (0,
                                  IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                                  ,pIVar10);
              if ((char)iVar11 == '\0') {
                FUN_10a02ef0();
                return;
              }
              uVar6 = 0;
              uVar1 = ((pIVar10->field0_0x0).klass)->interface_offsets_count;
              if (uVar1 != 0) {
                pIVar4 = ((pIVar10->field0_0x0).klass)->interfaceOffsets;
                do {
                  if (pIVar4[uVar6].interfaceType ==
                      IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var) {
                    pVVar12 = (VirtualInvokeData *)
                              (&((pIVar10->field0_0x0).klass)->field_0xbc + pIVar4[uVar6].offset * 8
                              );
                    goto LAB_10a02e1e;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar1);
              }
              pVVar12 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar10,
                                   IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var
                                   ,0);
LAB_10a02e1e:
              pSVar7 = (String_t *)(*pVVar12->methodPtr)(pIVar10,pVVar12->method);
              if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor !=
                   '\0') &&
                 (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished
                  == 0)) {
                il2cpp_runtime_class_init
                          (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
              }
              pSVar9 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD
                                 (pSVar7,(MethodInfo *)0x0);
              bVar5 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                                (pSVar9,_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                                 (MethodInfo *)0x0);
              if (!bVar5) {
                if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
                }
                pSVar9 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A
                                   (pSVar7,(MethodInfo *)0x0);
                pSVar9 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
                                   (pSVar8,pSVar9,(MethodInfo *)0x0);
                bVar5 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B
                                  (pSVar9,(MethodInfo *)0x0);
                if (!bVar5) {
                  File_Copy_m0405411AE250222E046657B870C15D9B18D3573C
                            (pSVar7,pSVar9,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
      }
    }
    else if (pSVar2 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) {
      pSVar2->___version_0 = 1;
      ExceptionList = pvStack_10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
