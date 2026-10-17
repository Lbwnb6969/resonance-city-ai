// RVA 0xa0aba0 | Placemaker.ShadowBaker$$OnStart
// PDB: ShadowBaker_OnStart_m10ACAAB45A859142BE3722EBB81BB681A7E4F7DC
// Body: [[10a0aba0, 10a0aee4]]
// Direct callees:
// 1003e770 SetAt
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10665440 RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF
// 106684d0 Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
// 10668580 Shader_SetGlobalVector_m0887A74FF8E1A2586B2D9ABEC6D6A06245923C7C
// 1066ba70 Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
// 1066c2c0 Texture2D_SetPixels32_m6C2602EBE75F9C70DBC36D0B67EA4C12638518BB
// 1066c450 Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4
// 1066d760 Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
// 1066d7d0 Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0
// 1066d860 Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D
// 10a38090 Camera_SetReplacementShader_m94E6511F9E7E21A29574D1765150F0D05111483E
// 10a388a0 Camera_set_opaqueSortMode_mB5F37D92D5E7E57870A45F6AB94148538CA0058A
// 10a389d0 Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596
// 10a38c50 Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94
// 10a43b20 Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C

void __cdecl
ShadowBaker_OnStart_m10ACAAB45A859142BE3722EBB81BB681A7E4F7DC
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,MethodInfo *param_2)

{
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar1;
  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *pRVar2;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar3;
  Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *this;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  uchar uVar9;
  uchar uVar10;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_30;
  float local_1c;
  float local_18;
  int local_14;
  undefined1 local_10;
  undefined3 uStack_f;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_c;
  uint local_8;

  if (DAT_115201e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral288D3B30927E4D95B96B2D2711C4053AA1D54F18);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral489E71EBF345F23CAE9E4B629A4F6899D5861F61);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral48BACAEB28E18A8F3ED694FDCD0AB00C34397D8B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral56F1664072CDF1448FFD7F25A4DD9CD0BE89298A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF7B2454CAD9CFC635A1114601C105726CCD29AC5);
    DAT_115201e2 = '\x01';
  }
  iVar5 = param_1->___resolution_9;
  pRVar2 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)
           il2cpp_codegen_object_new
                     (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
  RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF
            (pRVar2,iVar5,iVar5,0x18,(MethodInfo *)0x0);
  param_1->___tex0_5 = pRVar2;
  if (param_1->___cam_7 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
    Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596
              (param_1->___cam_7,pRVar2,(MethodInfo *)0x0);
    if (param_1->___cam_7 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
      Camera_set_opaqueSortMode_mB5F37D92D5E7E57870A45F6AB94148538CA0058A
                (param_1->___cam_7,2,(MethodInfo *)0x0);
      if ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___tex0_5 !=
          (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)0x0) {
        Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0
                  ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___tex0_5,0,
                   (MethodInfo *)0x0);
        if (param_1->___cam_7 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
          Camera_SetReplacementShader_m94E6511F9E7E21A29574D1765150F0D05111483E
                    (param_1->___cam_7,param_1->___shader_19,
                     _stringLiteral56F1664072CDF1448FFD7F25A4DD9CD0BE89298A,(MethodInfo *)0x0);
          pTVar3 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
                   il2cpp_codegen_object_new
                             (
                             Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var
                             );
          Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4
                    (pTVar3,0x20,0x20,(MethodInfo *)0x0);
          param_1->___lampTex_25 = pTVar3;
          if (pTVar3 != (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
            Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D
                      ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar3,1,
                       (MethodInfo *)0x0);
            this = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *)
                   il2cpp_array_new_specific
                             (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var
                              ,0x400);
            local_8 = 0;
            uVar6 = 0x1e36ffc;
            local_14 = 0;
            do {
              local_1c = (float)Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C
                                          (local_14,1,0x1c,(MethodInfo *)0x0);
              uVar7 = uVar6 ^ uVar6 << 0xd;
              uVar7 = uVar7 ^ uVar7 >> 0x11;
              _local_10 = CONCAT31(uStack_f,(char)((ulonglong)uVar6 * 0xff >> 0x20));
              uVar6 = uVar7 ^ uVar7 << 5;
              iVar5 = -(int)local_1c;
              do {
                local_c.___rgba_0 = 0;
                if (iVar5 < 0) {
                  uVar10 = '\0';
                  uVar9 = '\0';
                }
                else if (iVar5 == 0) {
                  uVar10 = '\x14';
                  uVar9 = 0xaa;
                }
                else if (iVar5 == 1) {
                  uVar10 = 'd';
                  uVar9 = '\x14';
                }
                else {
                  uVar10 = 0xff;
                  uVar9 = 0xff;
                }
                Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94
                          ((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)&local_c._s_4,uVar9,
                           uVar10,(uchar)_local_10,'\x01',(MethodInfo *)0x0);
                if (this == (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *)0x0)
                goto LAB_10a0aee0;
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                          ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)this,local_8,
                           (Il2CppObject *)local_c);
                iVar5 = iVar5 + 1;
                local_8 = local_8 + 1;
              } while ((int)local_1c + iVar5 < 0x20);
              local_14 = local_14 + 1;
            } while (local_14 < 0x20);
            if (param_1->___lampTex_25 != (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0
               ) {
              Texture2D_SetPixels32_m6C2602EBE75F9C70DBC36D0B67EA4C12638518BB
                        (param_1->___lampTex_25,this,(MethodInfo *)0x0);
              if (param_1->___lampTex_25 !=
                  (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
                Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
                          (param_1->___lampTex_25,(MethodInfo *)0x0);
                Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
                          (_stringLiteral48BACAEB28E18A8F3ED694FDCD0AB00C34397D8B,
                           (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                           param_1->___lampTex_25,(MethodInfo *)0x0);
                Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
                          (_stringLiteral288D3B30927E4D95B96B2D2711C4053AA1D54F18,
                           (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___tex0_5,
                           (MethodInfo *)0x0);
                Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
                          (_stringLiteral489E71EBF345F23CAE9E4B629A4F6899D5861F61,
                           param_1->___noiseTex_6,(MethodInfo *)0x0);
                if ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___tex0_5 !=
                    (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)0x0) {
                  VVar8 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
                                    ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                                     param_1->___tex0_5,(MethodInfo *)0x0);
                  local_18 = VVar8.___x_0;
                  if ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___tex0_5 !=
                      (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)0x0) {
                    VVar8 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
                                      ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                                       param_1->___tex0_5,(MethodInfo *)0x0);
                    local_1c = VVar8.___y_1;
                    pRVar2 = param_1->___tex0_5;
                    if (pRVar2 != (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)0x0) {
                      iVar5 = (**(code **)(*(int *)pRVar2 + 0xdc))
                                        (pRVar2,*(undefined4 *)(*(int *)pRVar2 + 0xe0));
                      pRVar2 = param_1->___tex0_5;
                      if (pRVar2 != (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)0x0)
                      {
                        iVar4 = (**(code **)(*(int *)pRVar2 + 0xec))
                                          (pRVar2,*(undefined4 *)(*(int *)pRVar2 + 0xf0));
                        local_30.___m_Left_0 = 0.0;
                        local_30.___m_Right_1 = 0.0;
                        local_30.___m_Top_2 = 0.0;
                        local_30.___m_Bottom_3 = 0.0;
                        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                                  (&local_30,local_18,local_1c,(float)iVar5,(float)iVar4,
                                   (MethodInfo *)0x0);
                        VVar1.___y_2 = local_30.___m_Right_1;
                        VVar1.___x_1 = local_30.___m_Left_0;
                        VVar1.___z_3 = local_30.___m_Top_2;
                        VVar1.___w_4 = local_30.___m_Bottom_3;
                        Shader_SetGlobalVector_m0887A74FF8E1A2586B2D9ABEC6D6A06245923C7C
                                  (_stringLiteralF7B2454CAD9CFC635A1114601C105726CCD29AC5,VVar1,
                                   (MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10a0aee0:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
