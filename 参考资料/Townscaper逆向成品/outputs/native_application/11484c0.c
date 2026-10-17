// RVA 0x11484c0 | FuryStudios.BuildSystem.BuildInfo$$.ctor
// PDB: BuildInfo__ctor_m2ACABAF0D132F88975D01B0765DF89198F7C19F8
// Body: [[111484c0, 11148540]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10667a00 ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063

void __cdecl
BuildInfo__ctor_m2ACABAF0D132F88975D01B0765DF89198F7C19F8
          (BuildInfo_t8C9552D09FFA63A1340A4E782467FD34D6616CCE *param_1,MethodInfo *param_2)

{
  if (DAT_11524768 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&String_t_il2cpp_TypeInfo_var);
    DAT_11524768 = '\x01';
  }
  param_1->___repoName_4 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  param_1->___buildRevision_5 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  param_1->___buildBranch_6 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  param_1->___softwareVersion_9 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  param_1->___buildJobName_11 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  param_1->___buildJobVersion_12 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063
            ((ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *)param_1,(MethodInfo *)0x0
            );
  return;
}
