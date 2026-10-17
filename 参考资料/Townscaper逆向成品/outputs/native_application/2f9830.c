// RVA 0x2f9830 | Placemaker.Ui.Slider$$OnRectTransformDimensionsChange
// PDB: Slider_OnRectTransformDimensionsChange_m3FA3B167DBB598ADCF2D7FE40850DCCC63C5578A
// Body: [[102f9830, 102f9867]]
// Direct callees:
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 102f9980 Slider_SetValue_mA38AA36AAF6EC1840DD9C8C03B6E96BB58FD4BAF

void __cdecl
Slider_OnRectTransformDimensionsChange_m3FA3B167DBB598ADCF2D7FE40850DCCC63C5578A
          (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *param_1,MethodInfo *param_2)

{
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  if (param_1->___oldValue_12 != __real_bf800000) {
    Slider_SetValue_mA38AA36AAF6EC1840DD9C8C03B6E96BB58FD4BAF
              (param_1,param_1->___oldValue_12,(MethodInfo *)0x0);
  }
  return;
}
