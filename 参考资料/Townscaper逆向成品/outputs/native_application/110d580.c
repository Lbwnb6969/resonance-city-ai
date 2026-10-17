// RVA 0x110d580 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$<Load>b__9_0
// PDB: PlatformPlayerPrefs_U3CLoadU3Eb__9_0_m5FE9E372481719D5DBC26D52B1BA6285253E6078
// Body: [[1110d580, 1110d695]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3ca70 Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
// 1110e230 PlayerPrefsSaveData__ctor_m5CF9FA988302B444F00626E8EB51C60C773820DF

void __cdecl
PlatformPlayerPrefs_U3CLoadU3Eb__9_0_m5FE9E372481719D5DBC26D52B1BA6285253E6078
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,
          Il2CppObject *param_2,MethodInfo *param_3)

{
  ushort uVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  ushort uVar3;
  int iVar4;
  PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *pPVar5;
  VirtualInvokeData *pVVar6;

  if (DAT_11523ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t28B5535A89949BA5702777080699D7405EA065D6_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral72887AE98E466EF19FB67EC3D2C023479DE67D91);
    DAT_11523ea6 = '\x01';
  }
  if (param_2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar4 = InterfaceFuncInvoker0<int>::Invoke
                    (0,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var,
                     param_2);
  if (iVar4 != 2) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
              ((Il2CppObject *)_stringLiteral72887AE98E466EF19FB67EC3D2C023479DE67D91,
               (MethodInfo *)0x0);
    pPVar5 = (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)
             il2cpp_codegen_object_new
                       (
                       PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB_il2cpp_TypeInfo_var
                       );
    PlayerPrefsSaveData__ctor_m5CF9FA988302B444F00626E8EB51C60C773820DF(pPVar5,(MethodInfo *)0x0);
    param_1->___data_0 = pPVar5;
    return;
  }
  uVar3 = 0;
  uVar1 = ((param_2->field0_0x0).klass)->interface_offsets_count;
  if (uVar1 != 0) {
    pIVar2 = ((param_2->field0_0x0).klass)->interfaceOffsets;
    do {
      if (pIVar2[uVar3].interfaceType ==
          IAsyncRequest_1_t28B5535A89949BA5702777080699D7405EA065D6_il2cpp_TypeInfo_var) {
        pVVar6 = (VirtualInvokeData *)
                 (&((param_2->field0_0x0).klass)->field_0xbc + pIVar2[uVar3].offset * 8);
        goto LAB_1110d66c;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  pVVar6 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                     (param_2,
                      IAsyncRequest_1_t28B5535A89949BA5702777080699D7405EA065D6_il2cpp_TypeInfo_var,
                      0);
LAB_1110d66c:
  pPVar5 = (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)
           (*pVVar6->methodPtr)(param_2,pVVar6->method);
  param_1->___data_0 = pPVar5;
  return;
}
