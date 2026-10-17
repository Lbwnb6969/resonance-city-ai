// RVA 0x878610 | Placemaker.BigMeshMaster$$.ctor
// PDB: BigMeshMaster__ctor_m9E6379B824E070099C86F20EFE90A8AF48225F33
// Body: [[10878610, 1087866d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
BigMeshMaster__ctor_m9E6379B824E070099C86F20EFE90A8AF48225F33
          (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *param_1,MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;

  if (DAT_1151f5ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m41C7185889A8D76D7D7CEAD30369EBC0865EE9D4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0_il2cpp_TypeInfo_var);
    DAT_1151f5ba = '\x01';
  }
  pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar1,List_1__ctor_m41C7185889A8D76D7D7CEAD30369EBC0865EE9D4_RuntimeMethod_var);
  param_1->___bigMeshGroups_5 = (List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0 *)pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
