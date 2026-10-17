// RVA 0x10d0090 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry$$Draw
// PDB: MenuNavigationEntry_Draw_m10D4ABB0598D48133927B01E8BF195AED85463EB
// Body: [[110d0090, 110d0120]]
// Direct callees:
// 1003e130 Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 11025260 GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162

void __cdecl
MenuNavigationEntry_Draw_m10D4ABB0598D48133927B01E8BF195AED85463EB
          (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_1,
          MethodInfo *param_2)

{
  bool bVar1;
  String_t *pSVar2;
  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B *pGVar3;

  if (DAT_11523abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
              );
    DAT_11523abb = '\x01';
  }
  if (DAT_11523ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5702BC82BA508CABFC1503DE3E28635583FE8585);
    DAT_11523ab9 = '\x01';
  }
  pSVar2 = (String_t *)param_1->_padding_;
  if ((char)param_1->_padding_ != '\0') {
    pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                       (pSVar2,_stringLiteral5702BC82BA508CABFC1503DE3E28635583FE8585,
                        (MethodInfo *)0x0);
  }
  pGVar3 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline
                     (
                     Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var
                     );
  bVar1 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162
                    (pSVar2,pGVar3,(MethodInfo *)0x0);
  if (bVar1) {
    (**(code **)(param_1->_padding_ + 0xec))(param_1,*(undefined4 *)(param_1->_padding_ + 0xf0));
  }
  return;
}
