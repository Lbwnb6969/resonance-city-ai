// RVA 0xa059f0 | Placemaker.Ui.ScreenshotButtons$$ResetPath
// PDB: ScreenshotButtons_ResetPath_m5282A8FCE61481C147F8118E67DF38C5CB3CDE01
// Body: [[10a059f0, 10a05a4c]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5930 UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
// 10858820 TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB

String_t * __cdecl
ScreenshotButtons_ResetPath_m5282A8FCE61481C147F8118E67DF38C5CB3CDE01
          (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *param_1,MethodInfo *param_2)

{
  TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *pTVar1;
  String_t *pSVar2;

  if (DAT_115201c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
    DAT_115201c7 = '\x01';
  }
  pTVar1 = param_1->___pathInput_18;
  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pSVar2 = UiMaster_DefaultPath_m7B34E896C34419876ED19C2CC57601B1122E11F8
                       (param_1->___master_4,_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093,
                        (MethodInfo *)0x0);
    if (pTVar1 != (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0) {
      TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB
                (pTVar1,pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
