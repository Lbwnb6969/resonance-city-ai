// RVA 0x4bc800 | CornerImage$$UpdateMaterial
// PDB: CornerImage_UpdateMaterial_m5F46A0B5E5D4DC15BB5D605425059F2083BD3330
// Body: [[104bc800, 104bc8a0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10669710 Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB
// 107c1bb0 Graphic_UpdateMaterial_m5A5D02BFE3677C9EC1A30054B6CC486BEE3F45A9
// 107c1d60 Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 11135030 CanvasRenderer_SetTexture_m390FCD8FBC6E992F4AAC9967EBFA3F32A2BD93C1

void __cdecl
CornerImage_UpdateMaterial_m5F46A0B5E5D4DC15BB5D605425059F2083BD3330
          (CornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2 *param_1,MethodInfo *param_2)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  bool bVar2;
  CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E *pCVar3;
  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *pTVar4;

  if (DAT_1151d0f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151d0f9 = '\x01';
  }
  Graphic_UpdateMaterial_m5A5D02BFE3677C9EC1A30054B6CC486BEE3F45A9
            ((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)param_1,(MethodInfo *)0x0);
  pCVar3 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A
                     ((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)param_1,(MethodInfo *)0x0
                     );
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->____sprite_36;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if (param_1->____sprite_36 == (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)0x0)
    goto LAB_104bc89c;
    pTVar4 = (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
             Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB
                       (param_1->____sprite_36,(MethodInfo *)0x0);
  }
  else {
    pTVar4 = (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)0x0;
  }
  if (pCVar3 != (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E *)0x0) {
    CanvasRenderer_SetTexture_m390FCD8FBC6E992F4AAC9967EBFA3F32A2BD93C1
              (pCVar3,pTVar4,(MethodInfo *)0x0);
    return;
  }
LAB_104bc89c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
