// RVA 0x3d1b50 | Placemaker.Maker$$BeginNewAction
// PDB: Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// Body: [[103d1b50, 103d1bbb] [103d1bbf, 103d1cfb]]
// Direct callees:
// 10068e90 List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f4210 WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
// 103f8b00 WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar1;
  ActionU5BU5D_t3FA7448F5CB2D8B68DBEB43EC534F7DE8D06342E *pAVar2;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *pWVar3;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
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
    iVar5 = param_1->___actionCount_7;
    while (0x3e6 < iVar5) {
      pLVar1 = param_1->___actions_5;
      if (pLVar1 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) goto LAB_103d1cf7;
      if (pLVar1->____size_2 == 0) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pAVar2 = pLVar1->____items_1;
      iVar5 = 0;
      iVar6 = 0;
      local_14 = pAVar2->m_Items[0].___hexPos_0.___x_0;
      iStack_10 = pAVar2->m_Items[0].___hexPos_0.___y_1;
      uStack_c._0_1_ = pAVar2->m_Items[0].___height_1;
      uStack_c._1_1_ = pAVar2->m_Items[0].___inType_2;
      uStack_c._2_1_ = pAVar2->m_Items[0].___outType_3;
      uStack_c._3_1_ = pAVar2->m_Items[0].field_0xb;
      iStack_8 = pAVar2->m_Items[0].___actionId_4;
      while( true ) {
        pLVar1 = param_1->___actions_5;
        if (pLVar1 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) goto LAB_103d1cf7;
        if (pLVar1->____size_2 <= iVar6) break;
        List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                  (&local_24,pLVar1,iVar6,
                   List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var);
        if (param_1->___actions_5 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)
        goto LAB_103d1cf7;
        pAVar4 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                           (&local_34,param_1->___actions_5,iVar6,
                            List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var
                           );
        if (pAVar4->___actionId_4 != iStack_8) break;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 1;
      }
      if (param_1->___actions_5 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)
      goto LAB_103d1cf7;
      List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___actions_5,0,iVar5,
                 List_1_RemoveRange_mE6540E6E7503D015E26CC2AA142D3D782D496785_RuntimeMethod_var);
      param_1->___actionIndex_6 = param_1->___actionIndex_6 - iVar5;
      param_1->___actionCount_7 = param_1->___actionCount_7 + -1;
      iVar5 = param_1->___actionCount_7;
    }
    pLVar1 = param_1->___actions_5;
    if (pLVar1 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
      List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar1,
                 param_1->___actionIndex_6,pLVar1->____size_2 - param_1->___actionIndex_6,
                 List_1_RemoveRange_mE6540E6E7503D015E26CC2AA142D3D782D496785_RuntimeMethod_var);
      if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
        WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
                  (param_1->___master_4,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pWVar3 = param_1->___master_4->___waveFunctionCollapse_10,
              pWVar3 != (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0)) {
          WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
                    (pWVar3,(MethodInfo *)0x0);
          param_1->___actionCount_7 = param_1->___actionCount_7 + 1;
          param_1->___actionId_10 = param_1->___actionId_10 + 1;
          bVar7 = DAT_1151c84e == '\0';
          param_1->___actionRedoMax_8 = param_1->___actionCount_7;
          if (bVar7) {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&
                               Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var
                      );
            DAT_1151c84e = '\x01';
          }
          if ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)param_1->___onQueueChange_11 !=
              (Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)0x0) {
            Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
                      ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
                       param_1->___onQueueChange_11,param_1->___actionCount_7,
                       param_1->___actionRedoMax_8 - param_1->___actionCount_7,
                       Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var);
            return;
          }
        }
      }
    }
  }
LAB_103d1cf7:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
