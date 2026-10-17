// RVA 0xa01420 | Placemaker.SaveSystem$$GetAndMaybeCreateCurrent
// PDB: SaveSystem_GetAndMaybeCreateCurrent_m74D085ECCF07221F62EE5ED9BF741F12EDE4ECC2
// Body: [[10a01420, 10a0149c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a01570 SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB * __cdecl
SaveSystem_GetAndMaybeCreateCurrent_m74D085ECCF07221F62EE5ED9BF741F12EDE4ECC2
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar2;

  if (DAT_115201b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9F6011CA64D6E9B865FE3834ACBA34A57111CE95);
    DAT_115201b2 = '\x01';
  }
  pMVar2 = param_1->___currentMetaSave_14;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar2,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pMVar2 = SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
                       (param_1,8,_stringLiteral9F6011CA64D6E9B865FE3834ACBA34A57111CE95,
                        (MethodInfo *)0x0);
    param_1->___currentMetaSave_14 = pMVar2;
  }
  return param_1->___currentMetaSave_14;
}
