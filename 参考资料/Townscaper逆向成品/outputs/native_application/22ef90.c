// RVA 0x22ef90 | Placemaker.ByteQube$$GetOrientedForward
// PDB: ByteQube_GetOrientedForward_mB81205ADF3EC2DDD8CC5C200FCD02088E09530BF
// Body: [[1022ef90, 1022f178]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1022f180 ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22

ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 __cdecl
ByteQube_GetOrientedForward_mB81205ADF3EC2DDD8CC5C200FCD02088E09530BF
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_1,uchar param_2,
          MethodInfo *param_3)

{
  uint uVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_10;
  int local_8;

  if (DAT_1151b578 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    DAT_1151b578 = '\x01';
  }
  local_10 = *param_1;
  if (0x30 < param_2) {
    uVar1 = (uint)(byte)((byte)(param_2 - 0x31) / 0x30 + 1);
    do {
      param_2 = param_2 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  local_8 = 0;
  uVar3 = param_2;
  do {
    param_1 = (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)0x0;
    do {
      _param_2 = 0;
      do {
        iVar4 = 0;
        uVar2 = uVar3;
        do {
          uVar3 = uVar2 + 0xff;
          if (uVar2 == '\0') {
            return local_10;
          }
          if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
          }
          local_10 = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                               (&local_10,
                                *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                                 ((int)ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var
                                       ->static_fields + 8),(MethodInfo *)0x0);
          iVar4 = iVar4 + 1;
          uVar2 = uVar3;
        } while (iVar4 < 4);
        if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
        }
        local_10 = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                             (&local_10,
                              *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                               ((int)ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var
                                     ->static_fields + 0x18),(MethodInfo *)0x0);
        _param_2 = _param_2 + 1;
      } while (_param_2 < 2);
      if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
      }
      local_10 = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                           (&local_10,
                            *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                             ((int)ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var
                                   ->static_fields + 0x20),(MethodInfo *)0x0);
      param_1 = (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)&param_1->___v1_1;
    } while ((int)param_1 < 3);
    if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    }
    local_10 = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                         (&local_10,
                          *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)
                           ((int)ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var
                                 ->static_fields + 0x30),(MethodInfo *)0x0);
    local_8 = local_8 + 1;
  } while (local_8 < 2);
  return local_10;
}
