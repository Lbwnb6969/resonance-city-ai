// RVA 0x4c6b10 | Placemaker.DrawPlane$$.ctor
// PDB: DrawPlane__ctor_mC470D5CB6BBE88B45F1278650DF84CD06B2E9545
// Body: [[104c6b10, 104c6b6d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
DrawPlane__ctor_mC470D5CB6BBE88B45F1278650DF84CD06B2E9545
          (DrawPlane_t25E93171CC5BAAB4443AC73B5628F14D1F786176 *param_1,MethodInfo *param_2)

{
  List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *pLVar1;

  if (DAT_1151d13b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m13A7CEB1113D33249A9ACF253929B1ACFA3EB33D_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C_il2cpp_TypeInfo_var);
    DAT_1151d13b = '\x01';
  }
  pLVar1 = (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)
           il2cpp_codegen_object_new
                     (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
             List_1__ctor_m13A7CEB1113D33249A9ACF253929B1ACFA3EB33D_RuntimeMethod_var);
  param_1->___nodes_6 = pLVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
