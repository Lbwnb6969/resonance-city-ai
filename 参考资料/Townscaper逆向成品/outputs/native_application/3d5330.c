// RVA 0x3d5330 | Placemaker.MaterialMaster$$CreatePaletteTexture
// PDB: MaterialMaster_CreatePaletteTexture_mB4E6584F2AA1ADE286145E712542A8DC55E9AD10
// Body: [[103d5330, 103d5466]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10662d80 Rect_get_zero_m4F738804E40698120CC691AB45A6416C4FF52589
// 1066ba70 Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
// 1066c240 Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92
// 1066c450 Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4
// 1066d7d0 Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0
// 1066d860 Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D
// 10a38c70 Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623
// 10a44200 Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5

Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __cdecl
MaterialMaster_CreatePaletteTexture_mB4E6584F2AA1ADE286145E712542A8DC55E9AD10
          (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *param_1,MethodInfo *param_2)

{
  Palette_t19EDAE7484381DAC9BAB2F15FAFFE363553E013A *pPVar1;
  Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *pCVar2;
  int iVar3;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar4;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar6;
  Exception_t *pEVar7;
  int iVar8;
  uint uVar9;
  MethodInfo *pMVar10;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_14;

  if (DAT_1151c867 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
    DAT_1151c867 = '\x01';
  }
  iVar3 = Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5(0x10,(MethodInfo *)0x0);
  pTVar4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
           il2cpp_codegen_object_new
                     (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
  Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(pTVar4,iVar3,2,(MethodInfo *)0x0);
  if (pTVar4 != (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
    Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D
              ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar4,1,(MethodInfo *)0x0);
    Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0
              ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar4,0,(MethodInfo *)0x0);
    iVar8 = 0;
    if (0 < iVar3) {
      do {
        pRVar5 = Rect_get_zero_m4F738804E40698120CC691AB45A6416C4FF52589
                           (&local_14,(MethodInfo *)0x0);
        Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92
                  (pTVar4,iVar8,1,(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659)*pRVar5,
                   (MethodInfo *)0x0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3);
    }
    uVar9 = 0;
    iVar3 = 0x10;
    while (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
            (pPVar1 = param_1->___master_4->___palette_33,
            pPVar1 != (Palette_t19EDAE7484381DAC9BAB2F15FAFFE363553E013A *)0x0)) &&
           (pCVar2 = pPVar1->___voxelColors_4,
           pCVar2 != (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *)0x0))) {
      pMVar10 = (MethodInfo *)0x0;
      if ((uint)pCVar2->_padding_ <= uVar9) {
        pEVar7 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar7,pMVar10);
      }
      pCVar6 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623
                         ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)&local_14,
                          (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D)
                          ((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 *)
                          ((int)&((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *)
                                 (pCVar2->m_Items + -4))->_padding_ + iVar3))->_s_8,
                          (MethodInfo *)0x0);
      Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92
                (pTVar4,uVar9,0,*pCVar6,(MethodInfo *)0x0);
      iVar3 = iVar3 + 4;
      uVar9 = uVar9 + 1;
      if (0x4b < iVar3) {
        Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92
                  (pTVar4,0xf,0,param_1->___stoneColor_22,(MethodInfo *)0x0);
        Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(pTVar4,(MethodInfo *)0x0);
        return pTVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
