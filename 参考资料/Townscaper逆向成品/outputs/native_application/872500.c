// RVA 0x872500 | Placemaker.AoBaker$$OnPostRender
// PDB: AoBaker_OnPostRender_m6A7CE1D034B4DEE1C92F67E665795A85D139E340
// Body: [[10872500, 108725b8]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 108725ca FUN_108725ca
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3edf0 Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05

void __cdecl
AoBaker_OnPostRender_m6A7CE1D034B4DEE1C92F67E665795A85D139E340
          (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *param_1,MethodInfo *param_2)

{
  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *pRVar1;
  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *pTVar2;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar3;
  undefined1 *puVar4;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__AoBaker_OnPostRender_m6A7CE1D034B4DEE1C92F67E665795A85D139E340;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  ExceptionList = &pvStack_10;
  puVar4 = &stack0xffffffd4;
  if (DAT_1151f594 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD8CA8213CEB7CE3E0B9CE81BB054A70DA3E2F145);
    DAT_1151f594 = '\x01';
    puVar4 = local_14;
  }
  local_14 = puVar4;
  local_15 = 0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
             (MethodInfo *)_stringLiteralD8CA8213CEB7CE3E0B9CE81BB054A70DA3E2F145);
  local_8 = 0;
  pRVar1 = param_1->___renderTexture1_15;
  pTVar2 = (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___renderTexture0_14;
  pMVar3 = param_1->___spreaderMaterial_11;
  if ((Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
  }
  Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(pTVar2,pRVar1,pMVar3,(MethodInfo *)0x0);
  if ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___cam_23 !=
      (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0) {
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___cam_23,false,
               (MethodInfo *)0x0);
    FUN_108725ca();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
