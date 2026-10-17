// RVA 0x3d2480 | Placemaker.Maker$$TrimActionList
// PDB: Maker_TrimActionList_mE5145379AD665D00AD6BFDFDF4F7C77F04DD933E
// Body: [[103d2480, 103d24eb] [103d24ef, 103d25ab]]
// Direct callees:
// 10068e90 List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
Maker_TrimActionList_mE5145379AD665D00AD6BFDFDF4F7C77F04DD933E
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar1;
  ActionU5BU5D_t3FA7448F5CB2D8B68DBEB43EC534F7DE8D06342E *pAVar2;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar3;
  int iVar4;
  int iVar5;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_34;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_24;
  int local_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;

  if (DAT_1151c850 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_mE6540E6E7503D015E26CC2AA142D3D782D496785_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mB1D3E0F73A4AC5C0641BFEBD257139A23EDFAF0B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var)
    ;
    DAT_1151c850 = '\x01';
  }
  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    iVar4 = param_1->___actionCount_7;
    while (0x3e6 < iVar4) {
      pLVar1 = param_1->___actions_5;
      if (pLVar1 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) goto LAB_103d25a7;
      if (pLVar1->____size_2 == 0) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pAVar2 = pLVar1->____items_1;
      iVar4 = 0;
      iVar5 = 0;
      local_14 = pAVar2->m_Items[0].___hexPos_0.___x_0;
      iStack_10 = pAVar2->m_Items[0].___hexPos_0.___y_1;
      uStack_c._0_1_ = pAVar2->m_Items[0].___height_1;
      uStack_c._1_1_ = pAVar2->m_Items[0].___inType_2;
      uStack_c._2_1_ = pAVar2->m_Items[0].___outType_3;
      uStack_c._3_1_ = pAVar2->m_Items[0].field_0xb;
      iStack_8 = pAVar2->m_Items[0].___actionId_4;
      while( true ) {
        pLVar1 = param_1->___actions_5;
        if (pLVar1 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) goto LAB_103d25a7;
        if (pLVar1->____size_2 <= iVar5) break;
        List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                  (&local_24,pLVar1,iVar5,
                   List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var);
        if (param_1->___actions_5 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)
        goto LAB_103d25a7;
        pAVar3 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                           (&local_34,param_1->___actions_5,iVar5,
                            List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var
                           );
        if (pAVar3->___actionId_4 != iStack_8) break;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 1;
      }
      if (param_1->___actions_5 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)
      goto LAB_103d25a7;
      List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___actions_5,0,iVar4,
                 List_1_RemoveRange_mE6540E6E7503D015E26CC2AA142D3D782D496785_RuntimeMethod_var);
      param_1->___actionIndex_6 = param_1->___actionIndex_6 - iVar4;
      param_1->___actionCount_7 = param_1->___actionCount_7 + -1;
      iVar4 = param_1->___actionCount_7;
    }
    pLVar1 = param_1->___actions_5;
    if (pLVar1 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
      List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
                 param_1->___actionIndex_6,pLVar1->____size_2 - param_1->___actionIndex_6,
                 List_1_RemoveRange_mE6540E6E7503D015E26CC2AA142D3D782D496785_RuntimeMethod_var);
      return;
    }
  }
LAB_103d25a7:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
