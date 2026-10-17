// RVA 0x880750 | Placemaker.BootMaster$$OnEnable
// PDB: BootMaster_OnEnable_m63F64AC5E3760704E16BCF8DC486A21CCC5370F3
// Body: [[10880750, 1088095a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e5f40 Point_get_X_m7EF58A2BD9AF797A66FA2A9C80F95D116B1C7F2B_inline
// 101e5f50 Point_get_Y_m1683D17DE5C7EE2959092F79BB0C9ECA5C790997_inline
// 103e6000 UiMaster_MaybeSetup_m11912A7FCA98C9C670452C0AA596C83ECF83501A
// 103e76c0 UiScaler_GetDefaultAntiAliasing_m76C5DE1458909EEF8A4FE54201B6E9D858B76755
// 103e7720 UiScaler_GetScale_m37007E390C6AB42B25FD765FC112D15BE2D84DB9
// 103f8710 WorldMaster_OnOnEnable_mB747B0D7310BFDD649415B5A44A9F42904A8841A
// 1065f360 QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772
// 10667640 Screen_SetResolution_m1C17EB7EDF8CDA862338782353D53DFF6742DFC5
// 106677c0 Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A
// 10667800 Screen_get_resolutions_mA2968FF5FA4EA6A6AE76019C47338824E8610A81
// 106678b0 Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB
// 10668580 Shader_SetGlobalVector_m0887A74FF8E1A2586B2D9ABEC6D6A06245923C7C
// 10a35d40 Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
BootMaster_OnEnable_m63F64AC5E3760704E16BCF8DC486A21CCC5370F3
          (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *param_1,MethodInfo *param_2)

{
  uint uVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar3;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar4;
  bool bVar5;
  int iVar6;
  ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597 *pRVar7;
  int iVar8;
  Exception_t *pEVar9;
  float fVar10;
  MethodInfo *pMVar11;
  Point_tE9FC99C1484EE9E02E5F280BE414986863EC17B1 PStack_10;
  float fStack_8;

  if (DAT_1151f5cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB06AB2E4704D861992E75CFEA9CB69F8E89DE366);
    DAT_1151f5cd = '\x01';
  }
  *(BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 **)
   BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var->static_fields = param_1
  ;
  bVar5 = Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A((MethodInfo *)0x0);
  if (bVar5) {
    iVar6 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4((MethodInfo *)0x0);
    if (iVar6 == 2) {
      Screen_SetResolution_m1C17EB7EDF8CDA862338782353D53DFF6742DFC5
                (0x7fffffff,0x7fffffff,true,(MethodInfo *)0x0);
    }
    else {
      pRVar7 = Screen_get_resolutions_mA2968FF5FA4EA6A6AE76019C47338824E8610A81((MethodInfo *)0x0);
      if (pRVar7 == (ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597 *)0x0)
      goto LAB_10880956;
      uVar1 = pRVar7->_padding_;
      pMVar11 = (MethodInfo *)0x0;
      if (uVar1 == 0) {
        Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB(true,(MethodInfo *)0x0);
      }
      else {
        if (uVar1 <= uVar1 - 1) {
          pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar9,pMVar11);
        }
        PStack_10 = *(Point_tE9FC99C1484EE9E02E5F280BE414986863EC17B1 *)
                     (pRVar7->m_Items + (uVar1 - 1));
        fStack_8 = (float)pRVar7->m_Items[uVar1 - 1].___m_RefreshRate_2;
        iVar6 = Point_get_X_m7EF58A2BD9AF797A66FA2A9C80F95D116B1C7F2B_inline
                          (&PStack_10,(MethodInfo *)0x0);
        iVar8 = Point_get_Y_m1683D17DE5C7EE2959092F79BB0C9ECA5C790997_inline
                          (&PStack_10,(MethodInfo *)0x0);
        Screen_SetResolution_m1C17EB7EDF8CDA862338782353D53DFF6742DFC5
                  (iVar6,iVar8,true,(MethodInfo *)0x0);
      }
    }
  }
  pUVar2 = param_1->___uiMaster_9;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pUVar2,(MethodInfo *)0x0);
  if (bVar5) {
    if (param_1->___uiMaster_9 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
    goto LAB_10880956;
    UiMaster_MaybeSetup_m11912A7FCA98C9C670452C0AA596C83ECF83501A
              (param_1->___uiMaster_9,(MethodInfo *)0x0);
  }
  iVar6 = UiScaler_GetDefaultAntiAliasing_m76C5DE1458909EEF8A4FE54201B6E9D858B76755
                    ((MethodInfo *)0x0);
  QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772
            (iVar6,(MethodInfo *)0x0);
  fVar10 = UiScaler_GetScale_m37007E390C6AB42B25FD765FC112D15BE2D84DB9((MethodInfo *)0x0);
  fStack_8 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                       (fVar10 * __real_3f333333,1.0,2.0,(MethodInfo *)0x0);
  PStack_10.___y_1 = (int)fStack_8;
  PStack_10.___x_0 = (int)fStack_8;
  VVar4.___y_2 = fStack_8;
  VVar4.___x_1 = 1.0;
  VVar4.___z_3 = fStack_8;
  VVar4.___w_4 = fStack_8;
  Shader_SetGlobalVector_m0887A74FF8E1A2586B2D9ABEC6D6A06245923C7C
            (_stringLiteralB06AB2E4704D861992E75CFEA9CB69F8E89DE366,VVar4,(MethodInfo *)0x0);
  pWVar3 = param_1->___worldMaster_8;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pWVar3,(MethodInfo *)0x0);
  if (bVar5) {
    if (param_1->___worldMaster_8 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
LAB_10880956:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    WorldMaster_OnOnEnable_mB747B0D7310BFDD649415B5A44A9F42904A8841A
              (param_1->___worldMaster_8,(MethodInfo *)0x0);
  }
  return;
}
