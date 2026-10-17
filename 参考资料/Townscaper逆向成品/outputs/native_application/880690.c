// RVA 0x880690 | Placemaker.BootMaster$$DoFullscreen
// PDB: BootMaster_DoFullscreen_mF68B1F89BDDB49B46CFBDB4FED9AD9704FB9EA8A
// Body: [[10880690, 10880740]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e5f40 Point_get_X_m7EF58A2BD9AF797A66FA2A9C80F95D116B1C7F2B_inline
// 101e5f50 Point_get_Y_m1683D17DE5C7EE2959092F79BB0C9ECA5C790997_inline
// 10667640 Screen_SetResolution_m1C17EB7EDF8CDA862338782353D53DFF6742DFC5
// 10667800 Screen_get_resolutions_mA2968FF5FA4EA6A6AE76019C47338824E8610A81
// 106678b0 Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB
// 10a35d40 Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4

void __cdecl BootMaster_DoFullscreen_mF68B1F89BDDB49B46CFBDB4FED9AD9704FB9EA8A(MethodInfo *param_1)

{
  uint uVar1;
  int iVar2;
  ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597 *pRVar3;
  int iVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  Point_tE9FC99C1484EE9E02E5F280BE414986863EC17B1 local_10;
  int local_8;

  iVar2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4((MethodInfo *)0x0);
  if (iVar2 == 2) {
    Screen_SetResolution_m1C17EB7EDF8CDA862338782353D53DFF6742DFC5
              (0x7fffffff,0x7fffffff,true,(MethodInfo *)0x0);
    return;
  }
  pRVar3 = Screen_get_resolutions_mA2968FF5FA4EA6A6AE76019C47338824E8610A81((MethodInfo *)0x0);
  if (pRVar3 == (ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  uVar1 = pRVar3->_padding_;
  if (uVar1 == 0) {
    Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB(true,(MethodInfo *)0x0);
    return;
  }
  if (uVar1 - 1 < uVar1) {
    local_10 = *(Point_tE9FC99C1484EE9E02E5F280BE414986863EC17B1 *)(pRVar3->m_Items + (uVar1 - 1));
    local_8 = pRVar3->m_Items[uVar1 - 1].___m_RefreshRate_2;
    iVar2 = Point_get_X_m7EF58A2BD9AF797A66FA2A9C80F95D116B1C7F2B_inline
                      (&local_10,(MethodInfo *)0x0);
    iVar4 = Point_get_Y_m1683D17DE5C7EE2959092F79BB0C9ECA5C790997_inline
                      (&local_10,(MethodInfo *)0x0);
    Screen_SetResolution_m1C17EB7EDF8CDA862338782353D53DFF6742DFC5
              (iVar2,iVar4,true,(MethodInfo *)0x0);
    return;
  }
  pMVar6 = (MethodInfo *)0x0;
  pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar5,pMVar6);
}
