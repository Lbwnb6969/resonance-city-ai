// RVA 0x3038d0 | TextSaveSystem.cctor
// PDB: TextSaveSystem__cctor_mC20A34C690F55FEC68CF42877F57506CC4D8D745
// Body: [[103038d0, 10303965]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1088f3a0 BitArray__ctor_m486DC497A17AF18E5EA30AA5BF65784B541F4B13

void __cdecl TextSaveSystem__cctor_mC20A34C690F55FEC68CF42877F57506CC4D8D745(MethodInfo *param_1)

{
  int iVar1;
  BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *pBVar2;
  Il2CppArray *pIVar3;
  uint uVar4;
  int iVar5;

  if (DAT_1151c225 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    DAT_1151c225 = '\x01';
  }
  pBVar2 = (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)
           il2cpp_codegen_object_new
                     (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0_il2cpp_TypeInfo_var);
  BitArray__ctor_m486DC497A17AF18E5EA30AA5BF65784B541F4B13(pBVar2,1,(MethodInfo *)0x0);
  *(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
   TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->static_fields =
       pBVar2;
  pIVar3 = il2cpp_array_new_specific
                     (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var,0x118
                     );
  *(Il2CppArray **)
   ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->static_fields
   + 4) = pIVar3;
  uVar4 = 2;
  iVar1 = 1;
  do {
    iVar5 = iVar1;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    iVar1 = iVar5 + 1;
  } while ((int)uVar4 < 0x41);
  *(int *)((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                static_fields + 8) = iVar5;
  return;
}
