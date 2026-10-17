// RVA 0x10ccb80 | FuryStudios.FurySDK.Settings.AchievementDatabase$$OnAfterDeserialize
// PDB: AchievementDatabase_OnAfterDeserialize_m59E505122FD7DCC84F329C50AA231FAB1E607FDA
// Body: [[110ccb80, 110ccdc9] [110ccdde, 110cce1b]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 10445cb0 Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared
// 10d03c10 Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared

/* WARNING: Removing unreachable block (ram,0x110cce14) */

void __cdecl
AchievementDatabase_OnAfterDeserialize_m59E505122FD7DCC84F329C50AA231FAB1E607FDA
          (AchievementDatabase_t56947D99CE5B97AE236AA16FE0C87B8A8BBF27E4 *param_1,
          MethodInfo *param_2)

{
  ushort uVar1;
  AchievementInfoU5BU5D_tB3D170841E32EB9F8D4676FE60F482D2AE1A1845 *pAVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar5;
  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *pFVar6;
  Il2CppObject *pIVar7;
  int iVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__AchievementDatabase_OnAfterDeserialize_m59E505122FD7DCC84F329C50AA231FAB1E607FDA
  ;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_11523a5e == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_mBD6E83DBD6C88853A67227271A077EF9906F611C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mDB994A1A65938B9F7CA9381DC994A2F3FB4493B0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_set_Item_mB79503C85C9361A98DAB1EC55632B44FE7012CF5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tDA8A2F7574464B9A44F8EB9FDE4A5395FF5BC983_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerable_Where_TisAchievementInfo_t0278E27F39AF34E53737902E7A2904D564DA2E0B_mF8233C095AE085307D2B8D6DB4419770077AA046_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_2__ctor_m9CF618F624555B688E435BE8014DB820D13C92CB_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_2_t7E4D85135885A590764CAF9C1997E9BF2C38AE62_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_tB292C68806D5C265D30D840972023224BFEBCF8D_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_tEB0DE6BDB0450BE3AB08AEB3F419A63FC98751DF_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3COnAfterDeserializeU3Eb__11_0_m003E94D4AC84A1B98CC72045712DF63DF5C914E8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var);
    DAT_11523a5e = '\x01';
  }
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___database_5 ==
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    pDVar5 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
             il2cpp_codegen_object_new
                       (Dictionary_2_tDA8A2F7574464B9A44F8EB9FDE4A5395FF5BC983_il2cpp_TypeInfo_var);
    Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
              (pDVar5,Dictionary_2__ctor_mDB994A1A65938B9F7CA9381DC994A2F3FB4493B0_RuntimeMethod_var
              );
    param_1->___database_5 = (Dictionary_2_tDA8A2F7574464B9A44F8EB9FDE4A5395FF5BC983 *)pDVar5;
  }
  else {
    Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
              ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___database_5,
               Dictionary_2_Clear_mBD6E83DBD6C88853A67227271A077EF9906F611C_RuntimeMethod_var);
  }
  pAVar2 = param_1->___achievements_4;
  if ((U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var)
    ;
  }
  pFVar6 = *(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 **)
            ((int)U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pFVar6 == (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)0x0) {
    if ((U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var);
    }
    pIVar7 = *(Il2CppObject **)
              U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var->static_fields;
    pFVar6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)
             il2cpp_codegen_object_new
                       (Func_2_t7E4D85135885A590764CAF9C1997E9BF2C38AE62_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pFVar6,pIVar7,
               (int)
               U3CU3Ec_U3COnAfterDeserializeU3Eb__11_0_m003E94D4AC84A1B98CC72045712DF63DF5C914E8_RuntimeMethod_var
               ,Func_2__ctor_m9CF618F624555B688E435BE8014DB820D13C92CB_RuntimeMethod_var);
    *(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 **)
     ((int)U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC_il2cpp_TypeInfo_var->static_fields + 4)
         = pFVar6;
  }
  pIVar7 = Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared
                     ((Il2CppObject *)pAVar2,pFVar6,
                      Enumerable_Where_TisAchievementInfo_t0278E27F39AF34E53737902E7A2904D564DA2E0B_mF8233C095AE085307D2B8D6DB4419770077AA046_RuntimeMethod_var
                     );
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar7 = (Il2CppObject *)
             InterfaceFuncInvoker0<int>::Invoke
                       (0,
                        IEnumerable_1_tB292C68806D5C265D30D840972023224BFEBCF8D_il2cpp_TypeInfo_var,
                        pIVar7);
    local_8 = 0;
    while (pIVar7 != (Il2CppObject *)0x0) {
      iVar8 = InterfaceFuncInvoker0<int>::Invoke
                        (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                         ,pIVar7);
      if ((char)iVar8 == '\0') {
        local_8 = 0xffffffff;
        if (pIVar7 != (Il2CppObject *)0x0) {
          InterfaceFuncInvoker0<int>::Invoke
                    (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                     pIVar7);
        }
        ExceptionList = local_10;
        return;
      }
      uVar4 = 0;
      uVar1 = ((pIVar7->field0_0x0).klass)->interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = ((pIVar7->field0_0x0).klass)->interfaceOffsets;
        do {
          if (pIVar3[uVar4].interfaceType ==
              IEnumerator_1_tEB0DE6BDB0450BE3AB08AEB3F419A63FC98751DF_il2cpp_TypeInfo_var) {
            pVVar9 = (VirtualInvokeData *)
                     (&((pIVar7->field0_0x0).klass)->field_0xbc + pIVar3[uVar4].offset * 8);
            goto LAB_110ccd8a;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      pVVar9 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,
                          IEnumerator_1_tEB0DE6BDB0450BE3AB08AEB3F419A63FC98751DF_il2cpp_TypeInfo_var
                          ,0);
LAB_110ccd8a:
      pIVar10 = (Il2CppObject *)(*pVVar9->methodPtr)(pIVar7,pVVar9->method);
      if ((pIVar10 == (Il2CppObject *)0x0) ||
         ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___database_5 ==
          (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0)) break;
      Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared
                ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___database_5,
                 (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)pIVar10[1].field0_0x0,
                 pIVar10,
                 Dictionary_2_set_Item_mB79503C85C9361A98DAB1EC55632B44FE7012CF5_RuntimeMethod_var);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
