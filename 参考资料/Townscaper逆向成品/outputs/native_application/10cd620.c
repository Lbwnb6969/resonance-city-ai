// RVA 0x10cd620 | FuryStudios.FurySDK.ClassTypeReference$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
// PDB: ClassTypeReference_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mDA7A92E26B9AA2574FB8D22CF3B61C223446592E
// Body: [[110cd620, 110cd70f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e7c0 il2cpp_codegen_get_type
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 103bcea0 Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
// 10626950 ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
// 10a3ca70 Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17

void __cdecl
ClassTypeReference_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mDA7A92E26B9AA2574FB8D22CF3B61C223446592E
          (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *param_1,MethodInfo *param_2
          )

{
  bool bVar1;
  String_t *pSVar2;

  if (DAT_11523a67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ClassTypeReference_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mDA7A92E26B9AA2574FB8D22CF3B61C223446592E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral01DA163A2401997EBAD38C64DCBDFC8A12311786);
    DAT_11523a67 = '\x01';
  }
  bVar1 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                    (param_1->____classRef_0,(MethodInfo *)0x0);
  if (bVar1) {
    param_1->____type_1 = (Type_t *)0x0;
    return;
  }
  pSVar2 = param_1->____classRef_0;
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  pSVar2 = (String_t *)
           il2cpp_codegen_get_type
                     (Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var,
                      pSVar2,
                      ClassTypeReference_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mDA7A92E26B9AA2574FB8D22CF3B61C223446592E_RuntimeMethod_var
                     );
  param_1->____type_1 = (Type_t *)pSVar2;
  bVar1 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
                    (pSVar2,(String_t *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                       (_stringLiteral01DA163A2401997EBAD38C64DCBDFC8A12311786,
                        (Il2CppObject *)param_1->____classRef_0,(MethodInfo *)0x0);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
              ((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  }
  return;
}
