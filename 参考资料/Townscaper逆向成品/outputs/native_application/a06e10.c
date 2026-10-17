// RVA 0xa06e10 | Placemaker.Ui.ScreenshotFrame$$SetRect
// PDB: ScreenshotFrame_SetRect_mACE1E5354315B05A96C37547F64278EB12D1E5F8
// Body: [[10a06e10, 10a06ea7]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661fa0 RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
// 10662000 RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
// 10662090 RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
// 106622e0 RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
// 10662550 RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828

void __cdecl
ScreenshotFrame_SetRect_mACE1E5354315B05A96C37547F64278EB12D1E5F8
          (ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *param_1,
          RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *param_2,float param_3,
          float param_4,float param_5,float param_6,MethodInfo *param_7)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;

  VVar1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  if (param_2 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
              (param_2,VVar1,(MethodInfo *)0x0);
    VVar1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
              (param_2,VVar1,(MethodInfo *)0x0);
    VVar1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
              (param_2,VVar1,(MethodInfo *)0x0);
    VVar1.___y_1 = param_5;
    VVar1.___x_0 = param_3;
    RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
              (param_2,VVar1,(MethodInfo *)0x0);
    VVar2.___y_1 = param_6;
    VVar2.___x_0 = param_4;
    RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
              (param_2,VVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
