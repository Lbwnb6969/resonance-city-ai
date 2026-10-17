// RVA 0x3d2950 | Placemaker.Audio.ManySoundsManager$$OnEnable
// PDB: ManySoundsManager_OnEnable_m1082FD50B1841A4E07016241743337C28F6D5220
// Body: [[103d2950, 103d2b53]]
// Direct callees:
// 1003e420 Invoke
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 103d2b68 FUN_103d2b68
// 103e8000 UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10827ef0 Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10c5a3f0 Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68
// 10cf75f0 Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared

void __cdecl
ManySoundsManager_OnEnable_m1082FD50B1841A4E07016241743337C28F6D5220
          (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *param_1,MethodInfo *param_2)

{
  Il2CppType *pIVar1;
  undefined1 *puVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Il2CppObject *pIVar4;
  int iVar5;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar6;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar7;
  String_t *pSVar8;
  Type_t *pTVar9;
  Il2CppObject *pIVar10;
  undefined4 *puVar11;
  Il2CppObject *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__ManySoundsManager_OnEnable_m1082FD50B1841A4E07016241743337C28F6D5220;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffd4;
  if (DAT_1151c858 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisManySound_t08F6F8BE1A73E883DD7D66F0B842C3660BB699E2_m1093319CE8E8C88A0C5CF880214326D26F4B1F7B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m2CF4A4FE09E7C4FC133ADDFEA67DF90DCA2DE89E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_mAE3B59A9DE69E252E53A7616EA15AB5E79586B57_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SoundType_t0A2F7E65D41FC30B1EFCFE5555D6EDFDFB024E92_0_0_0_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SoundType_t0A2F7E65D41FC30B1EFCFE5555D6EDFDFB024E92_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_1151c858 = '\x01';
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_18 = (Il2CppObject *)0x0;
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___soundDict_6 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
              ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___soundDict_6,
               Dictionary_2_Clear_mAE3B59A9DE69E252E53A7616EA15AB5E79586B57_RuntimeMethod_var);
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    pIVar4 = UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
                       (pTVar3,true,(MethodInfo *)0x0);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var
                          ,pIVar4);
      local_8 = 0;
      while (pIVar4 != (Il2CppObject *)0x0) {
        iVar5 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                           ,pIVar4);
        if ((char)iVar5 == '\0') {
          FUN_103d2b68();
          return;
        }
        pOVar6 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var
                            ,pIVar4);
        if (pOVar6 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) break;
        pOVar7 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pOVar6,
                            SUB41(&local_18,0),
                            Component_TryGetComponent_TisManySound_t08F6F8BE1A73E883DD7D66F0B842C3660BB699E2_m1093319CE8E8C88A0C5CF880214326D26F4B1F7B_RuntimeMethod_var
                           );
        if ((char)pOVar7 != '\0') {
          pSVar8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                             (pOVar6,(MethodInfo *)0x0);
          pIVar1 = SoundType_t0A2F7E65D41FC30B1EFCFE5555D6EDFDFB024E92_0_0_0_var;
          if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
             (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
            il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
          }
          pTVar9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                             ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)pIVar1,
                              (MethodInfo *)0x0);
          if ((Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var->has_cctor != '\0'
              ) && (Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
          }
          pIVar10 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68
                              (pTVar9,pSVar8,(MethodInfo *)0x0);
          if (pIVar10 == (Il2CppObject *)0x0) break;
          if (((pIVar10->field0_0x0).klass)->element_class !=
              SoundType_t0A2F7E65D41FC30B1EFCFE5555D6EDFDFB024E92_il2cpp_TypeInfo_var->element_class
             ) {
                    /* WARNING: Subroutine does not return */
            RaiseInvalidCastException
                      (pIVar10,
                       SoundType_t0A2F7E65D41FC30B1EFCFE5555D6EDFDFB024E92_il2cpp_TypeInfo_var);
          }
          puVar11 = il2cpp_object_unbox(pIVar10);
          if ((Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)param_1->___soundDict_6 ==
              (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0) break;
          Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
                    ((Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                     param_1->___soundDict_6,(String_t *)*puVar11,local_18,
                     Dictionary_2_Add_m2CF4A4FE09E7C4FC133ADDFEA67DF90DCA2DE89E_RuntimeMethod_var);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
