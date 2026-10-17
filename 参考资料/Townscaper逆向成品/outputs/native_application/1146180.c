// RVA 0x1146180 | FuryStudios.FurySDK.Noop.NoopPlatformSDK$$CreateContainer
// PDB: NoopPlatformSDK_CreateContainer_m08DB63C587CD1E941FD86550F5F3F0CFFF3A53B0
// Body: [[11146180, 111461c9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d2050 CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3

BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF * __cdecl
NoopPlatformSDK_CreateContainer_m08DB63C587CD1E941FD86550F5F3F0CFFF3A53B0
          (NoopPlatformSDK_tA104E858FC242EF96C85577FCDBCD109DE2D4EF4 *param_1,
          ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 param_2,MethodInfo *param_3)

{
  String_t *pSVar1;
  BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF *pBVar2;

  if (DAT_115246fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopStorageContainer_tB52E4E21D5652B2559DBBC530A48A6D554B87C83_il2cpp_TypeInfo_var
              );
    DAT_115246fb = '\x01';
  }
  pSVar1 = *(String_t **)&param_1->field_0x10;
  pBVar2 = (BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF *)
           il2cpp_codegen_object_new
                     (
                     NoopStorageContainer_tB52E4E21D5652B2559DBBC530A48A6D554B87C83_il2cpp_TypeInfo_var
                     );
  CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3
            ((CustomEntry_t52178788B948781461C5F6B5655F409DA823DF21 *)pBVar2,param_2.___id_0,pSVar1,
             (MethodInfo *)0x0);
  return pBVar2;
}
