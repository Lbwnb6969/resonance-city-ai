// RVA 0x3026f0 | Placemaker.TextSaveSystem$$LogBitArray
// PDB: TextSaveSystem_LogBitArray_m0A40A5BBC02C390EE8115E38055E27EDBA743A79
// Body: [[103026f0, 103027d7]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1088f200 BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
TextSaveSystem_LogBitArray_m0A40A5BBC02C390EE8115E38055E27EDBA743A79
          (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14 *param_1,int param_2,
          MethodInfo *param_3)

{
  bool bVar1;
  String_t *pSVar2;
  String_t *pSVar3;
  int iVar4;

  if (DAT_1151c224 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
    DAT_1151c224 = '\x01';
  }
  iVar4 = 0;
  pSVar2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
  if (0 < param_2) {
    do {
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
           TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
           static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      bVar1 = BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
                        (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                          TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          ->static_fields,iVar4,(MethodInfo *)0x0);
      pSVar3 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
      if (bVar1) {
        pSVar3 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
      }
      pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                         (pSVar2,pSVar3,(MethodInfo *)0x0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  return;
}
