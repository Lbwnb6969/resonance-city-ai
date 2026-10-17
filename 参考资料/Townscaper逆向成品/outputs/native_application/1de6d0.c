// RVA 0x1de6d0 | ExampleDebugMenu.<>c__DisplayClass2_0$$<Start>b__1
// PDB: U3CU3Ec__DisplayClass2_0_U3CStartU3Eb__1_m993924E0829ACDF6C1A100BE2E7EEB3C70904CFC
// Body: [[101de6d0, 101de74a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
U3CU3Ec__DisplayClass2_0_U3CStartU3Eb__1_m993924E0829ACDF6C1A100BE2E7EEB3C70904CFC
          (U3CU3Ec__DisplayClass2_0_t52A4BE6124F61B33BFCC8C488C8FF3F3637100EB *param_1,
          MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_1151afaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral50CB03890E72C08D400E6E731D8B15C91D2D146C);
    DAT_1151afaa = '\x01';
  }
  if (param_1->___field_0 != (TextFieldEntry_t2B2A6465BC2D58FC8FC8864FD18870251E06E7C6 *)0x0) {
    pSVar1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                       (_stringLiteral50CB03890E72C08D400E6E731D8B15C91D2D146C,
                        param_1->___field_0->___U3CValueU3Ek__BackingField_2,(MethodInfo *)0x0);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
