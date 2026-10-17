# Townscaper Ghidra decompilation

- Program: /GameAssembly.dll
- Image base: 10000000

## TextSaveAlphabet_cctor (RVA 0x3015a0)

- Address: `103015a0`
- Function: `TextSaveAlphabet__cctor_m284BE63B7D5250592FA102B5D5D80B627AFF57D4`
- Body: `[[103015a0, 10301664]]`
- Called functions:
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70` at `10f09d80`
  - `Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared` at `10cf75f0`
  - `Dictionary_2__ctor_m12FE70A54A1FBD146CB345A06031AB8A5DB02BBA_gshared` at `10225cb0`
  - `il2cpp_codegen_object_new` at `1018ea90`

```c

void __cdecl TextSaveAlphabet__cctor_m284BE63B7D5250592FA102B5D5D80B627AFF57D4(MethodInfo *param_1)

{
  Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *pDVar1;
  String_t *pSVar2;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar3;
  ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 CVar4;
  Il2CppObject *pIVar5;

  if (DAT_1151c21b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m4815E568AB7190528D67DBB7E33A46437EC7D1FF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_m0AD26BFE874167A54C0E778949CF826982A25E1E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7444F7B64352DCD10A83EC46EF14DB67398371EE);
    DAT_1151c21b = '\x01';
  }
  *(String_t **)
   TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->static_fields =
       _stringLiteral7444F7B64352DCD10A83EC46EF14DB67398371EE;
  pDVar3 = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
           il2cpp_codegen_object_new
                     (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_m12FE70A54A1FBD146CB345A06031AB8A5DB02BBA_gshared
            (pDVar3,0x40,
             Dictionary_2__ctor_m0AD26BFE874167A54C0E778949CF826982A25E1E_RuntimeMethod_var);
  *(Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 **)
   ((int)TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
         static_fields + 4) = pDVar3;
  pIVar5 = (Il2CppObject *)0x0;
  while( true ) {
    pDVar1 = *(Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 **)
              ((int)TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
                    static_fields + 4);
    pSVar2 = *(String_t **)
              TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
              static_fields;
    if (pSVar2 == (String_t *)0x0) break;
    CVar4.___id_0._0_2_ =
         String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                   (pSVar2,(int)pIVar5,(MethodInfo *)0x0);
    CVar4.___id_0._2_2_ = 0;
    if (pDVar1 == (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0) break;
    Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
              (pDVar1,CVar4,pIVar5,
               Dictionary_2_Add_m4815E568AB7190528D67DBB7E33A46437EC7D1FF_RuntimeMethod_var);
    pIVar5 = (Il2CppObject *)((int)&(pIVar5->field0_0x0).klass + 1);
    if (0x3f < (int)pIVar5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## BasePlatformSDK_Storage (RVA 0x110bab0)

- Address: `1110bab0`
- Function: `BasePlatformSDK_Storage_mE5CA0343867C4BF04EB9CE4EC3E32F6339CFC64C`
- Body: `[[1110bab0, 1110bb46]]`
- Called functions:
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared` at `10cf75f0`
  - `Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared` at `10d00a20`

```c

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


```

## StandalonePCPlatformSDK_CreateContainer (RVA 0x1142570)

- Address: `11142570`
- Function: `StandalonePCPlatformSDK_CreateContainer_m285C7280D548461CCAC9382478BDF8F9B95EC4E5`
- Body: `[[11142570, 111425e4]]`
- Called functions:
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B` at `110cf350`
  - `il2cpp_codegen_object_new` at `1018ea90`
  - `CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3` at `101d2050`

```c

BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF * __cdecl
StandalonePCPlatformSDK_CreateContainer_m285C7280D548461CCAC9382478BDF8F9B95EC4E5
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 param_2,MethodInfo *param_3)

{
  AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *pAVar1;
  int iVar2;
  BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF *pBVar3;
  String_t *pSVar4;

  if (DAT_11524616 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823_il2cpp_TypeInfo_var
              );
    DAT_11524616 = '\x01';
  }
  pAVar1 = param_1->___storageRequestScheduler_14;
  pSVar4 = (String_t *)param_1->_padding_;
  pBVar3 = (BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF *)
           il2cpp_codegen_object_new
                     (
                     StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823_il2cpp_TypeInfo_var
                     );
  CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3
            ((CustomEntry_t52178788B948781461C5F6B5655F409DA823DF21 *)pBVar3,param_2.___id_0,pSVar4,
             (MethodInfo *)0x0);
  pBVar3[1]._padding_ = (int)pAVar1;
  if ((pSVar4 != (String_t *)0x0) && (iVar2 = pSVar4[1]._padding_, iVar2 != 0)) {
    pSVar4 = FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B
                       (*(int *)(iVar2 + 8),*(String_t **)(iVar2 + 0xc),(MethodInfo *)0x0);
    pBVar3[1]._padding_ = (int)pSVar4;
    return pBVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## StandalonePCStorageContainer_ctor (RVA 0x1142fb0)

- Address: `11142fb0`
- Function: `StandalonePCStorageContainer__ctor_m84A3B1783D59F514E09E9FDE0FC3427B49F1881B`
- Body: `[[11142fb0, 11142ff6]]`
- Called functions:
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B` at `110cf350`
  - `CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3` at `101d2050`

```c

void __cdecl
StandalonePCStorageContainer__ctor_m84A3B1783D59F514E09E9FDE0FC3427B49F1881B
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *param_2,
          ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 param_3,
          PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *param_4,MethodInfo *param_5)

{
  StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *pSVar1;
  String_t *pSVar2;

  CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3
            ((CustomEntry_t52178788B948781461C5F6B5655F409DA823DF21 *)param_1,param_3.___id_0,
             (String_t *)param_4,(MethodInfo *)0x0);
  param_1->___requestScheduler_2 = param_2;
  if ((param_4 != (PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *)0x0) &&
     (pSVar1 = param_4->___standalone_7,
     pSVar1 != (StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *)0x0)) {
    pSVar2 = FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B
                       (pSVar1->___storageRoot_0,pSVar1->___storageRootSuffixPc_1,(MethodInfo *)0x0)
    ;
    param_1->___U3CRootPathU3Ek__BackingField_3 = pSVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## StandalonePCStorageContainer_GetFilePath (RVA 0x1142c00)

- Address: `11142c00`
- Function: `StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F`
- Body: `[[11142c00, 11142d1d]]`
- Called functions:
  - `Path_Combine_m7A2F79646794E197E588558EE81971A0C32A2A6A` at `10ed9760`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_value_box` at `10128ae0`
  - `String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66` at `10f04bc0`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF` at `10ed9980`

```c

String_t * __cdecl
StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          String_t *param_2,MethodInfo *param_3)

{
  int iVar1;
  Il2CppObject *pIVar2;
  String_t *pSVar3;
  String_t *pSVar4;

  if (DAT_1152462a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674);
    DAT_1152462a = '\x01';
  }
  if ((param_1->_padding_ == 0) || (iVar1 = *(int *)(param_1->_padding_ + 0x14), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  pSVar4 = param_1->___U3CRootPathU3Ek__BackingField_3;
  if (iVar1 == 1) {
    param_1 = (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *)
              param_1->_padding_;
    pIVar2 = il2cpp_value_box(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259_il2cpp_TypeInfo_var
                              ,&param_1);
    pSVar3 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                       (_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674,pIVar2,
                        (Il2CppObject *)param_2,(MethodInfo *)0x0);
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    pSVar4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(pSVar4,pSVar3,(MethodInfo *)0x0)
    ;
    return pSVar4;
  }
  if (iVar1 == 2) {
    pSVar3 = (String_t *)param_1->_padding_;
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    pSVar4 = Path_Combine_m7A2F79646794E197E588558EE81971A0C32A2A6A
                       (pSVar4,pSVar3,param_2,(MethodInfo *)0x0);
    return pSVar4;
  }
  if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
  }
  pSVar4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(pSVar4,param_2,(MethodInfo *)0x0);
  return pSVar4;
}


```
