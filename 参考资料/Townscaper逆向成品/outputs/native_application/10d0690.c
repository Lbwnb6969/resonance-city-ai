// RVA 0x10d0690 | FuryStudios.FurySDK.PlatformFeatureNotSupportedException$$get_Message
// PDB: PlatformFeatureNotSupportedException_get_Message_m2DC8CFBA2F5DFCBF00BDF2C8258AD6DCE955DBF0
// Body: [[110d0690, 110d06e4]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17

String_t * __cdecl
PlatformFeatureNotSupportedException_get_Message_m2DC8CFBA2F5DFCBF00BDF2C8258AD6DCE955DBF0
          (PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  String_t *pSVar2;

  if (DAT_11523a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD88C26123F198679BCA6D4F8E75860540A570805);
    DAT_11523a97 = '\x01';
  }
  param_1 = (PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *)
            param_1->___unsupportedFeature_17;
  pIVar1 = il2cpp_value_box(PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_il2cpp_TypeInfo_var
                            ,&param_1);
  pSVar2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                     (_stringLiteralD88C26123F198679BCA6D4F8E75860540A570805,pIVar1,
                      (MethodInfo *)0x0);
  return pSVar2;
}
