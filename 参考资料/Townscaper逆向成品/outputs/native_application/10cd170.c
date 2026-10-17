// RVA 0x10cd170 | FuryStudios.FurySDK.Utils.DebugMenu.ButtonEntry$$Draw
// PDB: ButtonEntry_Draw_m1A9AA79CC7CB98A4CB760D6CAC01369A4C3A574D
// Body: [[110cd170, 110cd25a]]
// Direct callees:
// 1003e130 Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1de0 ControllerSelection_get_typePrev_m183711FA283FE7D1257A7402BF1F8D214818766A
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 11025260 GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162
// 1102fb70 GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F
// 110e1730 GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684

void __cdecl
ButtonEntry_Draw_m1A9AA79CC7CB98A4CB760D6CAC01369A4C3A574D
          (ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *pGVar2;
  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *pGVar3;
  String_t *pSVar4;
  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *pGVar5;

  if (DAT_11523ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
    DAT_11523ab7 = '\x01';
  }
  if ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
  }
  pGVar2 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F((MethodInfo *)0x0);
  if (pGVar2 != (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *)0x0) {
    pGVar3 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)
             ControllerSelection_get_typePrev_m183711FA283FE7D1257A7402BF1F8D214818766A
                       ((ControllerSelection_t9870C49D5444501858F864E31B530269D961307C *)pGVar2,
                        (MethodInfo *)0x0);
    if (pGVar3 != (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)0x0) {
      GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(pGVar3,true,(MethodInfo *)0x0)
      ;
      if (DAT_11523ab9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&_stringLiteral5702BC82BA508CABFC1503DE3E28635583FE8585);
        DAT_11523ab9 = '\x01';
      }
      pSVar4 = (String_t *)param_1->_padding_;
      if ((char)param_1->_padding_ != '\0') {
        pSVar4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                           (pSVar4,_stringLiteral5702BC82BA508CABFC1503DE3E28635583FE8585,
                            (MethodInfo *)0x0);
      }
      pGVar5 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                         (
                         Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                         );
      bVar1 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162
                        (pSVar4,pGVar5,(MethodInfo *)0x0);
      if (bVar1) {
        (**(code **)(param_1->_padding_ + 0xec))(param_1,*(undefined4 *)(param_1->_padding_ + 0xf0))
        ;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
