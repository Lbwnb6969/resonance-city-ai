// RVA 0x4c6a10 | Placemaker.DrawPlane$$Update
// PDB: DrawPlane_Update_mB275AD270182AC2C4581DF821AD5385E0C43024F
// Body: [[104c6a10, 104c6b01]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 104c5590 DrawPlane_IterateUpdate_m409B9DBA42C82A7AEA620E4AD6B4D68CCFE1B554
// 104c66d0 DrawPlane_SetToHoverData_m2E472B9E438CEABB1DC6631676F365B137C52762
// 1066f480 Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
// 10836df0 ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 1113ef20 Input_GetKeyInt_mCBF4A2379EF913E589DFF4AE9C9407D0AC6B4E4D

void __cdecl
DrawPlane_Update_mB275AD270182AC2C4581DF821AD5385E0C43024F
          (DrawPlane_t25E93171CC5BAAB4443AC73B5628F14D1F786176 *param_1,MethodInfo *param_2)

{
  float fVar1;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar2;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar3;
  bool bVar4;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_18;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_c;

  if (DAT_1151d137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151d137 = '\x01';
  }
  DrawPlane_IterateUpdate_m409B9DBA42C82A7AEA620E4AD6B4D68CCFE1B554(param_1,(MethodInfo *)0x0);
  pCVar5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
  if (pCVar5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
    pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar5,
                        (MethodInfo *)0x0);
    if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar7 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                         (&local_18,pTVar6,(MethodInfo *)0x0);
      local_c.___x_0 = (int)pVVar7->___x_2;
      local_c.___y_1 = (int)pVVar7->___y_3;
      fVar1 = pVVar7->___z_4;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      fVar3.___z_2 = fVar1;
      fVar3.___x_0 = (float)local_c.___x_0;
      fVar3.___y_1 = (float)local_c.___y_1;
      fVar8 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                        (fVar3,(MethodInfo *)0x0);
      VVar9 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                        ((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar8,(MethodInfo *)0x0)
      ;
      iVar2.___z_2 = 0;
      iVar2.___x_0 = (int)VVar9.___x_0;
      iVar2.___y_1 = (int)VVar9.___y_1;
      local_c = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                          (iVar2,(MethodInfo *)fVar8.___x_0);
      (param_1->___camDir_10).___x_0 = (float)local_c.___x_0;
      (param_1->___camDir_10).___y_1 = (float)local_c.___y_1;
      bVar4 = Input_GetKeyInt_mCBF4A2379EF913E589DFF4AE9C9407D0AC6B4E4D(0x130,(MethodInfo *)0x0);
      if (bVar4) {
        DrawPlane_SetToHoverData_m2E472B9E438CEABB1DC6631676F365B137C52762
                  (param_1,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
