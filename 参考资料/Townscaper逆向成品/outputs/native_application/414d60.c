// RVA 0x414d60 | Placemaker.HoverHightlight$$.cctor
// PDB: HoverHightlight__cctor_mF2966CBAD5ECE0C2509F13566DFEB806AB267CEE
// Body: [[10414d60, 10414da2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 106682f0 Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F

void __cdecl HoverHightlight__cctor_mF2966CBAD5ECE0C2509F13566DFEB806AB267CEE(MethodInfo *param_1)

{
  int iVar1;

  if (DAT_1151ca9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral05ACBC80A380B916624B41146F147A9A93A7F4C5);
    DAT_1151ca9a = '\x01';
  }
  iVar1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F
                    (_stringLiteral05ACBC80A380B916624B41146F147A9A93A7F4C5,(MethodInfo *)0x0);
  *(int *)HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A_il2cpp_TypeInfo_var->
          static_fields = iVar1;
  return;
}
