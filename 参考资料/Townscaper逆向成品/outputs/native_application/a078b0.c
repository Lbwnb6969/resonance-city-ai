// RVA 0xa078b0 | Placemaker.Ui.ScreenshotSwitch$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: ScreenshotSwitch_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mD4269BD144150224BF1BB009E5D5DB269704B466
// Body: [[10a078b0, 10a0792b]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10672190 Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B
// 10a06ed0 ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA

void __cdecl
ScreenshotSwitch_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mD4269BD144150224BF1BB009E5D5DB269704B466
          (ScreenshotSwitch_t30DE06810CA11EC175DDE16D672DF0D80E0FD901 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E *pVVar1;
  ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *pSVar2;
  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 VVar3;
  Exception_t *pEVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  MethodInfo *pMVar6;
  float local_c;
  float local_8;

  param_1->___master_4 = param_2;
  pVVar1 = param_1->___frameSizes_21;
  if (pVVar1 != (Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
    if (pVVar1->_padding_ == 0) {
      pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar4,pMVar6);
    }
    VVar3.___m_X_0 = pVVar1->m_Items[0].___m_X_0;
    VVar3.___m_Y_1 = pVVar1->m_Items[0].___m_Y_1;
    VVar5 = Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B
                      (VVar3,(MethodInfo *)0x0);
    pSVar2 = param_1->___frame_8;
    local_8 = VVar5.___y_1;
    (param_1->___frameTarget_22).___x_0 = local_c;
    (param_1->___frameTarget_22).___y_1 = local_8;
    if (pSVar2 != (ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *)0x0) {
      pSVar2->___width_11 = (int)local_c;
      pSVar2->___height_12 = (int)local_8;
      ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA(pSVar2,(MethodInfo *)0x0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
