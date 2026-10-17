// RVA 0x1148260 | FuryStudios.BuildSystem.BuildInfo$$ToString
// PDB: BuildInfo_ToString_mA6C757E45524749F7C6DC65B71FCB31CC7A808E4
// Body: [[11148260, 111484bb]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10626950 ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
// 106eb810 DateTime__ctor_mD17BC147184B06220C3FD44EBF50238A3894ADD7
// 10af4fe0 StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
// 10af5820 StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1
// 10af7cd0 StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E

String_t * __cdecl
BuildInfo_ToString_mA6C757E45524749F7C6DC65B71FCB31CC7A808E4
          (BuildInfo_t8C9552D09FFA63A1340A4E782467FD34D6616CCE *param_1,MethodInfo *param_2)

{
  bool bVar1;
  MethodInfo *pMVar2;
  Il2CppObject *pIVar3;
  String_t *pSVar4;
  MethodInfo *pMVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_c;

  if (DAT_11524767 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&StringBuilder_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral22FF7193390B820B1B39C8B151D366489E5CA448);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral4031733D9C7DEEC913BF4FDB76136C6570F55ADC);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral53E4EEB46FC0C2CC3063A59803A664CF2E3A5C2C);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral86CB6C79E31F8D4E52354B82DE2AD69E1EDB1C41);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral8A727F2DE27B79801F602D813A7E62075F334DF6);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9AE2DD5FD838E4142167182CEA91BCDA8AD5AAFD);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA5E5B08FC5FBFC65EAD4FD34B37AAD8C34A292EA);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE4EC8A50FCA3F722C6EEAB5659F13106788771C9);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D);
    DAT_11524767 = '\x01';
  }
  pMVar2 = (MethodInfo *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
  StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E
            ((StringBuilder_t *)pMVar2,0x100,(MethodInfo *)0x0);
  if (pMVar2 != (MethodInfo *)0x0) {
    StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1
              ((StringBuilder_t *)pMVar2,_stringLiteralE4EC8A50FCA3F722C6EEAB5659F13106788771C9,
               (MethodInfo *)0x0);
    StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
              ((StringBuilder_t *)pMVar2,_stringLiteralA5E5B08FC5FBFC65EAD4FD34B37AAD8C34A292EA,
               (Il2CppObject *)param_1->___buildRevision_5,(MethodInfo *)0x0);
    pMVar5 = pMVar2;
    StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
              ((StringBuilder_t *)pMVar2,_stringLiteral8A727F2DE27B79801F602D813A7E62075F334DF6,
               (Il2CppObject *)param_1->___buildBranch_6,(MethodInfo *)0x0);
    local_c.___dateData_44 = 0;
    DateTime__ctor_mD17BC147184B06220C3FD44EBF50238A3894ADD7
              (&local_c,*(long64 *)((int)&(param_1->___revisionCommitTime_7).___ticks_0 + 4),0,
               pMVar5);
    local_14 = (undefined4)local_c.___dateData_44;
    local_10 = local_c.___dateData_44._4_4_;
    pIVar3 = il2cpp_value_box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var
                              ,&local_14);
    pMVar5 = pMVar2;
    StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
              ((StringBuilder_t *)pMVar2,_stringLiteral9AE2DD5FD838E4142167182CEA91BCDA8AD5AAFD,
               pIVar3,(MethodInfo *)0x0);
    local_c.___dateData_44 = 0;
    DateTime__ctor_mD17BC147184B06220C3FD44EBF50238A3894ADD7
              (&local_c,*(long64 *)((int)&(param_1->___buildTime_8).___ticks_0 + 4),0,pMVar5);
    local_1c = (undefined4)local_c.___dateData_44;
    local_18 = local_c.___dateData_44._4_4_;
    pIVar3 = il2cpp_value_box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var
                              ,&local_1c);
    StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
              ((StringBuilder_t *)pMVar2,_stringLiteral4031733D9C7DEEC913BF4FDB76136C6570F55ADC,
               pIVar3,(MethodInfo *)0x0);
    StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
              ((StringBuilder_t *)pMVar2,_stringLiteral22FF7193390B820B1B39C8B151D366489E5CA448,
               (Il2CppObject *)param_1->___softwareVersion_9,(MethodInfo *)0x0);
    bVar1 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                      (param_1->___buildJobName_11,(MethodInfo *)0x0);
    if (!bVar1) {
      StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
                ((StringBuilder_t *)pMVar2,_stringLiteral86CB6C79E31F8D4E52354B82DE2AD69E1EDB1C41,
                 (Il2CppObject *)param_1->___buildJobName_11,(MethodInfo *)0x0);
    }
    bVar1 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                      (param_1->___buildJobVersion_12,(MethodInfo *)0x0);
    if (!bVar1) {
      StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
                ((StringBuilder_t *)pMVar2,_stringLiteral53E4EEB46FC0C2CC3063A59803A664CF2E3A5C2C,
                 (Il2CppObject *)param_1->___buildJobVersion_12,(MethodInfo *)0x0);
    }
    if (-1 < param_1->___bundleVersionCode_10) {
      local_c.___dateData_44._4_4_ = param_1->___bundleVersionCode_10;
      pIVar3 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
                                (void *)((int)&local_c.___dateData_44 + 4));
      StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E
                ((StringBuilder_t *)pMVar2,_stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D,
                 pIVar3,(MethodInfo *)0x0);
    }
    pSVar4 = (String_t *)
             (**(code **)(pMVar2->methodPointer + 0xd4))
                       (pMVar2,*(undefined4 *)(pMVar2->methodPointer + 0xd8));
    return pSVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
