// RVA 0xa07ce0 | Placemaker.Ui.ScreenshotSwitch$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__22_2
// PDB: ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_2_mF4481B37688941E424E3705A5EFB40F278672DB4
// Body: [[10a07ce0, 10a07d9c]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10672190 Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B
// 10a07930 ScreenshotSwitch_SetFrameTarget_mE02545B2AEBA766CDC533D55C433328DCF8C56F8

void __cdecl
ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_2_mF4481B37688941E424E3705A5EFB40F278672DB4
          (ScreenshotSwitch_t30DE06810CA11EC175DDE16D672DF0D80E0FD901 *param_1,float param_2,
          MethodInfo *param_3)

{
  Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E *pVVar1;
  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 VVar2;
  Exception_t *pEVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  MethodInfo *pMVar5;

  if (param_2 != __real_3f800000) {
    return;
  }
  if (param_1->___frameOneState_15 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
  {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___frameOneState_15,false,(MethodInfo *)0x0);
    if (param_1->___frameTwoState_16 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
       ) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___frameTwoState_16,false,(MethodInfo *)0x0);
      ScreenshotSwitch_SetFrameTarget_mE02545B2AEBA766CDC533D55C433328DCF8C56F8
                (param_1,0.0,1.0,0.0,(MethodInfo *)0x0);
      pVVar1 = param_1->___frameSizes_21;
      if (pVVar1 != (Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E *)0x0) {
        pMVar5 = (MethodInfo *)0x0;
        if (2 < (uint)pVVar1->_padding_) {
          VVar2.___m_X_0 = pVVar1[1]._padding_;
          VVar2.___m_Y_1 = pVVar1[1]._padding_;
          VVar4 = Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B
                            (VVar2,(MethodInfo *)0x0);
          param_1->___frameTarget_22 = VVar4;
          return;
        }
        pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar3,pMVar5);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
