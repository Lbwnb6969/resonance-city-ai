// RVA 0x110c9e0 | FuryStudios.FurySDK.Internal.DotNetStorageRequest$$.ctor
// PDB: DotNetStorageRequest__ctor_mA7316464597C674B45D876ACE3A152DFF70654A6
// Body: [[1110c9e0, 1110cad4]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10a920d0 ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D
// 10f061e0 String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6

void __cdecl
DotNetStorageRequest__ctor_mA7316464597C674B45D876ACE3A152DFF70654A6
          (DotNetStorageRequest_t5568E0D5FA3C2037D59677C45C9BDDCB8DF2E550 *param_1,String_t *param_2
          ,int param_3,MethodInfo *param_4)

{
  bool bVar1;
  Il2CppArray *pIVar2;
  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *pAVar3;

  if (DAT_11523e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral90B0F00F17A6A4EFBBCD21EDEA9FA2CEBCE5A967);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC84898DCD54BCFA78CC38E0A16500117E0DD6C0D);
    DAT_11523e97 = '\x01';
  }
  if (DAT_11523e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
    DAT_11523e8d = '\x01';
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  param_1->_padding_ = 0;
  param_1->_padding_ = param_3;
  param_1->_padding_ = (int)param_2;
  pIVar2 = il2cpp_array_new_specific
                     (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var,0);
  param_1->_padding_ = (int)pIVar2;
  bVar1 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6
                    (param_2,(MethodInfo *)0x0);
  if (bVar1) {
    pAVar3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)
             il2cpp_codegen_object_new
                       (
                       ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var
                       );
    ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D
              (pAVar3,_stringLiteralC84898DCD54BCFA78CC38E0A16500117E0DD6C0D,
               _stringLiteral90B0F00F17A6A4EFBBCD21EDEA9FA2CEBCE5A967,(MethodInfo *)0x0);
    if ((param_1->_padding_ != 2) && (param_1->_padding_ != 4)) {
      param_1->_padding_ = (int)pAVar3;
      param_1->_padding_ = 4;
      (**(code **)(param_1->_padding_ + 0x13c))(param_1,*(undefined4 *)(param_1->_padding_ + 0x140))
      ;
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->_padding_ !=
          (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->_padding_,(MethodInfo *)0x0);
      }
    }
  }
  return;
}
