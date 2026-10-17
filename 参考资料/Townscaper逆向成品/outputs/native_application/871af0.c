// RVA 0x871af0 | Placemaker.AoBaker$$ApplyMaterialColors
// PDB: AoBaker_ApplyMaterialColors_m9C15BE29563D6B586C6B11536F51F58BB90D7394
// Body: [[10871af0, 10871bf5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10871c00 AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9
// 10a3edf0 Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
AoBaker_ApplyMaterialColors_m9C15BE29563D6B586C6B11536F51F58BB90D7394
          (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *param_1,MethodInfo *param_2)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar2;
  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *pTVar3;
  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *pRVar4;
  bool bVar5;

  if (DAT_1151f592 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f592 = '\x01';
  }
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___marchingSquaresTex_17;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
  if (bVar5) {
    pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
             param_1->___coloredMarchingSquaresTex_16;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
    if (bVar5) {
      pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
               param_1->___marchingSquaresMaterial_12;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0)
      ;
      if (bVar5) {
        pMVar2 = param_1->___marchingSquaresMaterial_12;
        pTVar3 = (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                 param_1->___marchingSquaresTex_17;
        pRVar4 = param_1->___coloredMarchingSquaresTex_16;
        if ((Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
        }
        Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05
                  (pTVar3,pRVar4,pMVar2,(MethodInfo *)0x0);
        AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9(param_1,(MethodInfo *)0x0);
      }
    }
  }
  return;
}
