// RVA 0x10cd7e0 | FuryStudios.FurySDK.ClassTypeReference$$get_HasValue
// PDB: ClassTypeReference_get_HasValue_m7ECA7609E645C6D211AB5B785F467A2E08B4E856
// Body: [[110cd7e0, 110cd833]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10829df0 Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0

bool __cdecl
ClassTypeReference_get_HasValue_m7ECA7609E645C6D211AB5B785F467A2E08B4E856
          (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *param_1,MethodInfo *param_2
          )

{
  Type_t *pTVar1;
  bool bVar2;

  if (DAT_11523a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_11523a68 = '\x01';
  }
  pTVar1 = param_1->____type_1;
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  bVar2 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0
                    (pTVar1,(Type_t *)0x0,(MethodInfo *)0x0);
  return bVar2;
}
