// RVA 0xa03720 | Placemaker.SaveSystem$$SetCurrentMetaSave
// PDB: SaveSystem_SetCurrentMetaSave_m9908A2D8710C173894AD33073BCF4D21EF5FF53D
// Body: [[10a03720, 10a037c0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90

void __cdecl
SaveSystem_SetCurrentMetaSave_m9908A2D8710C173894AD33073BCF4D21EF5FF53D
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  bool bVar2;

  if (DAT_115201b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral974F818D07EB96036B86304952AF824A315663F3);
    DAT_115201b1 = '\x01';
  }
  pMVar1 = param_1->___currentMetaSave_14;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar1,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
              ((Il2CppObject *)_stringLiteral974F818D07EB96036B86304952AF824A315663F3,
               (MethodInfo *)0x0);
  }
  param_1->___currentMetaSave_14 = param_2;
  return;
}
