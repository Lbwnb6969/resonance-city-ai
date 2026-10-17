// RVA 0x3d9ca0 | Placemaker.ModuleMath$$MarkHiddenCornersAmbigous
// PDB: ModuleMath_MarkHiddenCornersAmbigous_m9A66E82A25B83A84948141B8F0DCD880AA647CA8
// Body: [[103d9ca0, 103d9db0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1022f180 ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
// 1022f760 ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
// 1022f900 ByteQube_set_Item_m099317BD655B1FEF5507398AEE3C9B8A19AC81C1

ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 __cdecl
ModuleMath_MarkHiddenCornersAmbigous_m9A66E82A25B83A84948141B8F0DCD880AA647CA8
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 param_1,MethodInfo *param_2)

{
  uchar uVar1;
  int iVar2;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_1c;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_14;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_c;

  if (DAT_1151c88b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151c88b = '\x01';
  }
  if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
  }
  local_c = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                      (&param_1,*(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                                 ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                                       ->static_fields + 4),(MethodInfo *)0x0);
  local_14 = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                       (&param_1,*(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                                  ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                                        ->static_fields + 0xc),(MethodInfo *)0x0);
  local_1c = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                       (&param_1,*(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                                  ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                                        ->static_fields + 0x14),(MethodInfo *)0x0);
  iVar2 = 0;
  do {
    uVar1 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                      (&local_c,iVar2,(MethodInfo *)0x0);
    if (uVar1 != '\x12') {
      uVar1 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                        (&local_14,iVar2,(MethodInfo *)0x0);
      if (uVar1 != '\x12') {
        uVar1 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                          (&local_1c,iVar2,(MethodInfo *)0x0);
        if (uVar1 != '\x12') {
          uVar1 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                            (&param_1,iVar2,(MethodInfo *)0x0);
          if (uVar1 != '\x12') {
            ByteQube_set_Item_m099317BD655B1FEF5507398AEE3C9B8A19AC81C1
                      (&param_1,iVar2,'\x10',(MethodInfo *)0x0);
          }
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return param_1;
}
