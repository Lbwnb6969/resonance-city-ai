// RVA 0x3d9630 | Placemaker.Modules.ModuleLibrary$$GetDecorOverlap
// PDB: ModuleLibrary_GetDecorOverlap_mC97CC29D9D3B604A85705E34C1A0B5EA91C0E9F8
// Body: [[103d9630, 103d96e7]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1074e110 OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
// 110307a0 List_1_BinarySearch_m672780AF97B67C2AB49FEE1F49458749304F3BB4_gshared

bool __cdecl
ModuleLibrary_GetDecorOverlap_mC97CC29D9D3B604A85705E34C1A0B5EA91C0E9F8
          (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *param_1,
          OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_2,
          OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_3,MethodInfo *param_4)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (DAT_1151c883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_BinarySearch_m6B9A0F2E4C43C5F4A8031E9EF99F8330455BDED6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151c883 = '\x01';
  }
  pLVar1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___decorOverlaps_10;
  if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
  }
  param_1 = (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)param_2;
  iVar4 = OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
                    ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)&param_1,
                     (MethodInfo *)0x0);
  iVar5 = OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
                    (&param_3,(MethodInfo *)0x0);
  if (iVar4 < iVar5) {
    iVar2 = 0x1849;
    iVar3 = 0x184d;
  }
  else {
    iVar2 = 0x184d;
    iVar3 = 0x1849;
  }
  if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    iVar4 = List_1_BinarySearch_m672780AF97B67C2AB49FEE1F49458749304F3BB4_gshared
                      (pLVar1,(Il2CppObject *)(iVar5 * iVar2 + iVar4 * iVar3),
                       List_1_BinarySearch_m6B9A0F2E4C43C5F4A8031E9EF99F8330455BDED6_RuntimeMethod_var
                      );
    return -1 < iVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
