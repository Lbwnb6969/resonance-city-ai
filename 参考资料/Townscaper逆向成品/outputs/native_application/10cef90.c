// RVA 0x10cef90 | FuryStudios.FurySDK.Utils.FeatureMatch$$IsSatisfied
// PDB: FeatureMatch_IsSatisfied_m89C1EFDB3C5348C61C03439EF48594C6EB54EDBE
// Body: [[110cef90, 110cf298]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10749050 Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline
// 10827ef0 Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a95f50 Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964
// 10c595f0 Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD
// 10c596b0 Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 110cf2b3 FUN_110cf2b3

bool __cdecl
FeatureMatch_IsSatisfied_m89C1EFDB3C5348C61C03439EF48594C6EB54EDBE
          (FeatureMatch_t8E0E7BBBF4D9E62213F985681C22E36963274F9D *param_1,MethodInfo *param_2)

{
  int *piVar1;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar2;
  Il2CppType *pIVar3;
  undefined1 *puVar4;
  undefined1 extraout_AL;
  bool bVar5;
  char extraout_AL_00;
  undefined1 uVar6;
  Il2CppObject *pIVar7;
  String_t *pSVar8;
  int *piVar9;
  Type_t *pTVar10;
  Il2CppArray *pIVar11;
  int iVar12;
  Il2CppObject *pIVar13;
  undefined4 *puVar14;
  Il2CppObject *pIVar15;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *local_24;
  uint local_20;
  Exception_t *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__FeatureMatch_IsSatisfied_m89C1EFDB3C5348C61C03439EF48594C6EB54EDBE;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  puVar4 = &stack0xffffffbc;
  if (DAT_11523a7e == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MatchMode_t31DAAB3F690A2D0293850AB0774C4FE9496D4299_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_0_0_0_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF65948CD2D5DB309EB062269C3C7EE901EB57F2E);
    DAT_11523a7e = '\x01';
    puVar4 = local_14;
  }
  local_14 = puVar4;
  pIVar3 = PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_0_0_0_var;
  local_15 = 0;
  piVar1 = &param_1->___match_1;
  local_1c = (Exception_t *)0x0;
  if (*piVar1 == 0) {
    if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
    }
    pTVar10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E
                        ((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9)pIVar3,
                         (MethodInfo *)0x0);
    if ((Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
    }
    pIVar11 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(pTVar10,(MethodInfo *)0x0);
    if (pIVar11 != (Il2CppArray *)0x0) {
      pIVar7 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964
                         (pIVar11,(MethodInfo *)0x0);
      local_8 = 0;
      while (pIVar7 != (Il2CppObject *)0x0) {
        iVar12 = InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                            ,pIVar7);
        if ((char)iVar12 == '\0') {
          uVar6 = FUN_110cf2b3();
          return (bool)uVar6;
        }
        pIVar13 = (Il2CppObject *)
                  InterfaceFuncInvoker0<int>::Invoke
                            (1,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,pIVar7);
        if (pIVar13 == (Il2CppObject *)0x0) break;
        if (((pIVar13->field0_0x0).klass)->element_class !=
            PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_il2cpp_TypeInfo_var->
            element_class) {
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    (pIVar13,
                     PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_il2cpp_TypeInfo_var);
        }
        puVar14 = il2cpp_object_unbox(pIVar13);
        pAVar2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)*puVar14;
        local_20 = param_1->___features_0;
        pIVar13 = il2cpp_value_box(PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_il2cpp_TypeInfo_var
                                   ,&local_20);
        local_24 = pAVar2;
        pIVar15 = il2cpp_value_box(PlatformFeature_tD572B07C0FD5D53DD41450E6162D782A4A66233F_il2cpp_TypeInfo_var
                                   ,&local_24);
        if (pIVar13 == (Il2CppObject *)0x0) break;
        bVar5 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E
                          (pIVar13,(Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)pIVar15,
                           (MethodInfo *)0x0);
        if (bVar5) {
          pIVar13 = Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline
                              ((MethodInfo *)0x0);
          if (pIVar13 == (Il2CppObject *)0x0) break;
          InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                    (5,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                     pIVar13,pAVar2);
          if (extraout_AL_00 != '\0') {
            local_8 = 0xffffffff;
            pIVar7 = IsInst(pIVar7,
                            IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var
                           );
            if (pIVar7 != (Il2CppObject *)0x0) {
              InterfaceFuncInvoker0<int>::Invoke
                        (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var
                         ,pIVar7);
            }
            if (local_1c == (Exception_t *)0x0) {
              ExceptionList = local_10;
              return true;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(local_1c,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  else if (*piVar1 == 1) {
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if (*(Il2CppObject **)
         Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields !=
        (Il2CppObject *)0x0) {
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (5,IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                 *(Il2CppObject **)
                  Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                  static_fields,
                 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_1->___features_0);
      ExceptionList = local_10;
      return (bool)extraout_AL;
    }
  }
  else {
    pIVar7 = il2cpp_value_box(MatchMode_t31DAAB3F690A2D0293850AB0774C4FE9496D4299_il2cpp_TypeInfo_var
                              ,piVar1);
    if (pIVar7 != (Il2CppObject *)0x0) {
      pSVar8 = (String_t *)
               (**(code **)&(pIVar7->field0_0x0).klass[1].byval_arg.attrs)
                         (pIVar7,(pIVar7->field0_0x0).klass[1].this_arg.data.dummy);
      piVar9 = il2cpp_object_unbox(pIVar7);
      *piVar1 = *piVar9;
      pSVar8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                         (_stringLiteralF65948CD2D5DB309EB062269C3C7EE901EB57F2E,pSVar8,
                          (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      ExceptionList = local_10;
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
