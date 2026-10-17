// RVA 0x110bab0 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$Storage
// PDB: BasePlatformSDK_Storage_mE5CA0343867C4BF04EB9CE4EC3E32F6339CFC64C
// Body: [[1110bab0, 1110bb46]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10cf75f0 Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

Il2CppObject * __cdecl
BasePlatformSDK_Storage_mE5CA0343867C4BF04EB9CE4EC3E32F6339CFC64C
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,
          ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 param_2,MethodInfo *param_3)

{
  bool bVar1;
  Il2CppObject *local_8;

  if (DAT_11523e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_mDB31A88181433682654AB2A810D9041F3CC73B1B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m8B3E365A0FFD5176949ADB28D9B856F3BD3E7D48_RuntimeMethod_var
              );
    DAT_11523e8a = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  if ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___storageContainers_6 !=
      (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) {
    bVar1 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                      ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                       param_1->___storageContainers_6,
                       (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_2.___id_0,
                       &local_8,
                       Dictionary_2_TryGetValue_m8B3E365A0FFD5176949ADB28D9B856F3BD3E7D48_RuntimeMethod_var
                      );
    if (!bVar1) {
      local_8 = (Il2CppObject *)
                (**(code **)(param_1->_padding_ + 0x2ac))
                          (param_1,param_2.___id_0,*(undefined4 *)(param_1->_padding_ + 0x2b0));
      if ((Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)param_1->___storageContainers_6
          == (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0) goto LAB_1110bb42;
      Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
                ((Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                 param_1->___storageContainers_6,param_2,local_8,
                 Dictionary_2_Add_mDB31A88181433682654AB2A810D9041F3CC73B1B_RuntimeMethod_var);
    }
    return local_8;
  }
LAB_1110bb42:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
