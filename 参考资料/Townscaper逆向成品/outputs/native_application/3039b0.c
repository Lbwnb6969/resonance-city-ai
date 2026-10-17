// RVA 0x3039b0 | Placemaker.TexturePngMaster$$Placemaker.WorldMaster.IOnOnEnable.OnOnEnable
// PDB: TexturePngMaster_Placemaker_WorldMaster_IOnOnEnable_OnOnEnable_m1DCD0A7C7BB42B75EF3F847AD9C15E2786C45824
// Body: [[103039b0, 10303aa5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10303ae0 TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
// 103d5330 MaterialMaster_CreatePaletteTexture_mB4E6584F2AA1ADE286145E712542A8DC55E9AD10
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10c789f0 Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared

void __cdecl
TexturePngMaster_Placemaker_WorldMaster_IOnOnEnable_OnOnEnable_m1DCD0A7C7BB42B75EF3F847AD9C15E2786C45824
          (TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *pPVar2;
  MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *pMVar3;
  bool bVar4;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar5;

  if (DAT_1151c226 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m5FBE0271575DA03AC87A6BACC1D048FDEADDE1E7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c226 = '\x01';
  }
  if (param_1->___paletteTex_7 != (PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *)0x0) {
    pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
             param_1->___paletteTex_7->___srcTex_0;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                      (pOVar1,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar4) {
LAB_10303a79:
      TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
                (param_1,param_1->___houseTex_5,(MethodInfo *)0x0);
      TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
                (param_1,param_1->___typeTex_6,(MethodInfo *)0x0);
      TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
                (param_1,param_1->___paletteTex_7,(MethodInfo *)0x0);
      return;
    }
    pPVar2 = param_1->___paletteTex_7;
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pMVar3 = param_1->___master_4->___materialMaster_13,
       pMVar3 != (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0)) {
      pTVar5 = MaterialMaster_CreatePaletteTexture_mB4E6584F2AA1ADE286145E712542A8DC55E9AD10
                         (pMVar3,(MethodInfo *)0x0);
      if (pPVar2 != (PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *)0x0) {
        pPVar2->___srcTex_0 = pTVar5;
        pPVar2 = param_1->___paletteTex_7;
        if (pPVar2 != (PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *)0x0) {
          pTVar5 = pPVar2->___srcTex_0;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          pTVar5 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
                   Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                             ((Il2CppObject *)pTVar5,
                              Object_Instantiate_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m5FBE0271575DA03AC87A6BACC1D048FDEADDE1E7_RuntimeMethod_var
                             );
          pPVar2->___gameTex_1 = pTVar5;
          goto LAB_10303a79;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
