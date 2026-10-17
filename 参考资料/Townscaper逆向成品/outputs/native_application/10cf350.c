// RVA 0x10cf350 | FuryStudios.FurySDK.Settings.FilePathRootExtensions$$Path
// PDB: FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B
// Body: [[110cf350, 110cf42e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10626950 ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
// 10a35ca0 Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E
// 10a35d20 Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463
// 10a35da0 Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f080c0 String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618

String_t * __cdecl
FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B
          (int param_1,String_t *param_2,MethodInfo *param_3)

{
  bool bVar1;
  String_t *pSVar2;

  if (DAT_11523a7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&String_t_il2cpp_TypeInfo_var);
    DAT_11523a7f = '\x01';
  }
  bVar1 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                    (param_2,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    if (param_2 == (String_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618
              (param_2,L'/',
               *(wchar_t *)
                ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                      static_fields + 6),(MethodInfo *)0x0);
  }
  if (param_1 == 1) {
    pSVar2 = Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E((MethodInfo *)0x0);
    pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                       (pSVar2,param_2,(MethodInfo *)0x0);
    return pSVar2;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      return *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
    }
    pSVar2 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1
                       ((MethodInfo *)0x0);
    pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                       (pSVar2,param_2,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463
                     ((MethodInfo *)0x0);
  pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(pSVar2,param_2,(MethodInfo *)0x0)
  ;
  return pSVar2;
}
