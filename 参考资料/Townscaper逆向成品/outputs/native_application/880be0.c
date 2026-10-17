// RVA 0x880be0 | Placemaker.BorderDrawer$$SetupBlock
// PDB: BorderDrawer_SetupBlock_m5A934DC296C252B9519F54CA1650098071C93DFC
// Body: [[10880be0, 10880c56]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a42ad0 MaterialPropertyBlock_SetTexture_mE81B2B7E3CF624544CD7D91177797053AFC0CD93
// 10a42b10 MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8

void __cdecl
BorderDrawer_SetupBlock_m5A934DC296C252B9519F54CA1650098071C93DFC
          (BorderDrawer_t5CCF0A662FEFF553A6CDA812C86BCB079D1B618C *param_1,MethodInfo *param_2)

{
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar1;
  MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *pMVar2;

  if (DAT_1151f5cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
    DAT_1151f5cf = '\x01';
  }
  pMVar2 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)
           il2cpp_codegen_object_new
                     (
                     MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var
                     );
  MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(pMVar2,(MethodInfo *)0x0);
  param_1->___block_7 = pMVar2;
  if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
      (pAVar1 = param_1->___master_4->___aoBaker_11,
      pAVar1 != (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0)) &&
     (pMVar2 != (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)0x0)) {
    MaterialPropertyBlock_SetTexture_mE81B2B7E3CF624544CD7D91177797053AFC0CD93
              (pMVar2,_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21,
               (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pAVar1->___marchingSquaresTex_17
               ,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
