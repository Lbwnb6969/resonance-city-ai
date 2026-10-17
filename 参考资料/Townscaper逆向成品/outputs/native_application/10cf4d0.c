// RVA 0x10cf4d0 | FuryStudios.FurySDK.Utils.DebugMenu.LabelEntry$$Draw
// PDB: LabelEntry_Draw_m779ABBF8519743B5F09876AC0B6A89CF9F0C3473
// Body: [[110cf4d0, 110cf59c]]
// Direct callees:
// 1003e130 Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1920 Calibration_get_controllerType_m2B309727A79F43A4825B375B7E5CCA3079BDC48F
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 110263f0 GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502
// 1102fb70 GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F
// 110e1730 GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684

void __cdecl
LabelEntry_Draw_m779ABBF8519743B5F09876AC0B6A89CF9F0C3473
          (LabelEntry_t1CFCC0E98A51F61E2829703CD00245F80E21BEDD *param_1,MethodInfo *param_2)

{
  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *pGVar1;
  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *pGVar2;
  String_t *pSVar3;
  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *pGVar4;

  if (DAT_11523ab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
    DAT_11523ab8 = '\x01';
  }
  if ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
  }
  pGVar1 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F((MethodInfo *)0x0);
  if (pGVar1 != (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *)0x0) {
    pGVar2 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)
             Calibration_get_controllerType_m2B309727A79F43A4825B375B7E5CCA3079BDC48F
                       ((Calibration_t4B5B2B22C0A60238B9A9B11E60201AD997C6AE42 *)pGVar1,
                        (MethodInfo *)0x0);
    if (pGVar2 != (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)0x0) {
      GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(pGVar2,true,(MethodInfo *)0x0)
      ;
      if (DAT_11523ab9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&_stringLiteral5702BC82BA508CABFC1503DE3E28635583FE8585);
        DAT_11523ab9 = '\x01';
      }
      pSVar3 = *(String_t **)&param_1->field_0x8;
      if (param_1->field_0xc != '\0') {
        pSVar3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                           (pSVar3,_stringLiteral5702BC82BA508CABFC1503DE3E28635583FE8585,
                            (MethodInfo *)0x0);
      }
      pGVar4 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                         (
                         Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                         );
      GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(pSVar3,pGVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
