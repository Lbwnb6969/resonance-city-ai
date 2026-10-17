// RVA 0x22ebc0 | Placemaker.ByteQube$$GetOptimalOrientation
// PDB: ByteQube_GetOptimalOrientation_m038C8AA035D610AF90D0FB94E1ECEC51FBF3B90E
// Body: [[1022ebc0, 1022ed92]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1022eb60 ByteQube_GetHashCode_m97D1744B126126CCFAD3C3EF6ED6172021ED109B
// 1022f180 ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22

void __cdecl
ByteQube_GetOptimalOrientation_m038C8AA035D610AF90D0FB94E1ECEC51FBF3B90E
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_1,
          ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_2,uchar *param_3,
          MethodInfo *param_4)

{
  uchar *puVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar9;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *pBVar10;
  uchar uVar11;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (DAT_1151b57a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    DAT_1151b57a = '\x01';
  }
  puVar1 = &param_1->___v0_0;
  uVar2 = param_1->___v1_1;
  uVar3 = param_1->___v2_2;
  uVar4 = param_1->___v3_3;
  uVar11 = '\0';
  uVar5 = param_1->___v4_4;
  uVar6 = param_1->___v5_5;
  uVar7 = param_1->___v6_6;
  uVar8 = param_1->___v7_7;
  local_1c = *param_1;
  param_1 = (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)0x7fffffff;
  param_2->___v0_0 = *puVar1;
  param_2->___v1_1 = uVar2;
  param_2->___v2_2 = uVar3;
  param_2->___v3_3 = uVar4;
  param_2->___v4_4 = uVar5;
  param_2->___v5_5 = uVar6;
  param_2->___v6_6 = uVar7;
  param_2->___v7_7 = uVar8;
  local_14 = 2;
  *param_3 = '\0';
  do {
    local_10 = 3;
    do {
      local_c = 2;
      do {
        local_8 = 4;
        do {
          BVar9 = local_1c;
          pBVar10 = (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                    ByteQube_GetHashCode_m97D1744B126126CCFAD3C3EF6ED6172021ED109B
                              (&local_1c,(MethodInfo *)0x0);
          if ((int)pBVar10 < (int)param_1) {
            *param_3 = uVar11;
            *param_2 = BVar9;
            param_1 = pBVar10;
          }
          uVar11 = uVar11 + '\x01';
          if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
          }
          local_1c = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                               (&local_1c,
                                *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                                 ((int)ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var
                                       ->static_fields + 8),(MethodInfo *)0x0);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
        }
        local_1c = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                             (&local_1c,
                              *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                               ((int)ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var
                                     ->static_fields + 0x18),(MethodInfo *)0x0);
        local_c = local_c + -1;
      } while (local_c != 0);
      if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
      }
      local_1c = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                           (&local_1c,
                            *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                             ((int)ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var
                                   ->static_fields + 0x20),(MethodInfo *)0x0);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    }
    local_1c = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                         (&local_1c,
                          *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                           ((int)ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var
                                 ->static_fields + 0x30),(MethodInfo *)0x0);
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}
