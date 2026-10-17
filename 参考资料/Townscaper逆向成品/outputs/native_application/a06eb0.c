// RVA 0xa06eb0 | Placemaker.Ui.ScreenshotFrame$$SetSize
// PDB: ScreenshotFrame_SetSize_mC7389117778175AA7BF5552EDAE1E0F6825D9394
// Body: [[10a06eb0, 10a06ece]]
// Direct callees:
// 10a06ed0 ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA

void __cdecl
ScreenshotFrame_SetSize_mC7389117778175AA7BF5552EDAE1E0F6825D9394
          (ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *param_1,int param_2,
          int param_3,MethodInfo *param_4)

{
  param_1->___width_11 = param_2;
  param_1->___height_12 = param_3;
  ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA(param_1,(MethodInfo *)0x0);
  return;
}
