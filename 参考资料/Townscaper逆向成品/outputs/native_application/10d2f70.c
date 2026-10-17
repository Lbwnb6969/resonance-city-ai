// RVA 0x10d2f70 | FuryStudios.FurySDK.Utils.DebugMenu.TextFieldEntry$$Draw
// PDB: TextFieldEntry_Draw_m95CF7C353EB5F55492993A4F50E546B88C930DFB
// Body: [[110d2f70, 110d3012]]
// Direct callees:
// 1003e130 Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10626950 ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
// 110246e0 GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661
// 11025e20 GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946
// 110263f0 GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502
// 110268e0 GUILayout_TextField_mC9C6AA168E42FD26C48D770E5F4A3E7FC36C823D

void __cdecl
TextFieldEntry_Draw_m95CF7C353EB5F55492993A4F50E546B88C930DFB
          (TextFieldEntry_t2B2A6465BC2D58FC8FC8864FD18870251E06E7C6 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *pGVar2;
  String_t *pSVar3;

  if (DAT_11523ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
              );
    DAT_11523ac0 = '\x01';
  }
  bVar1 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                    ((String_t *)param_1->_padding_,(MethodInfo *)0x0);
  if (!bVar1) {
    pGVar2 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                       (
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                       );
    GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(pGVar2,(MethodInfo *)0x0);
    pSVar3 = (String_t *)param_1->_padding_;
    pGVar2 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                       (
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                       );
    GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(pSVar3,pGVar2,(MethodInfo *)0x0);
    pSVar3 = param_1->___U3CValueU3Ek__BackingField_2;
    pGVar2 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                       (
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                       );
    pSVar3 = GUILayout_TextField_mC9C6AA168E42FD26C48D770E5F4A3E7FC36C823D
                       (pSVar3,pGVar2,(MethodInfo *)0x0);
    param_1->___U3CValueU3Ek__BackingField_2 = pSVar3;
    GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946((MethodInfo *)0x0);
    return;
  }
  pSVar3 = param_1->___U3CValueU3Ek__BackingField_2;
  pGVar2 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                     (
                     Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                     );
  pSVar3 = GUILayout_TextField_mC9C6AA168E42FD26C48D770E5F4A3E7FC36C823D
                     (pSVar3,pGVar2,(MethodInfo *)0x0);
  param_1->___U3CValueU3Ek__BackingField_2 = pSVar3;
  return;
}
