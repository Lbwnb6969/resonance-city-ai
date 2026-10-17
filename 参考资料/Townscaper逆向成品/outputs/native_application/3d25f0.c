// RVA 0x3d25f0 | Placemaker.Maker$$Undo
// PDB: Maker_Undo_m04FE233B3A64C6FA8F9A71C1E55BA4D95C34F6FF
// Body: [[103d25f0, 103d269e] [103d26a5, 103d26d9] [103d26dd, 103d2762]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d18d0 Maker_ActionQueueChanged_m7E6C25D10911E379AAFB4D8808E71CC52E028559
// 103f4210 WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
// 103f8b00 WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
// 1040fe40 HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC
// 10871830 Action_GetReverse_m2A97B6361217A8CE7CB8EB2DC4473B4B6D9D82C5
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6b480 Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700

bool __cdecl
Maker_Undo_m04FE233B3A64C6FA8F9A71C1E55BA4D95C34F6FF
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar1;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *pWVar2;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar3;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar4;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar5;
  int iVar6;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_34;
  int local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_14;

  if (DAT_1151c853 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var)
    ;
    DAT_1151c853 = '\x01';
  }
  local_14.___hexPos_0.___x_0 = 0;
  local_14.___hexPos_0.___y_1 = 0;
  local_14.___height_1 = '\0';
  local_14.___inType_2 = '\0';
  local_14.___outType_3 = '\0';
  local_14._11_1_ = 0;
  local_14.___actionId_4 = 0;
  if (param_1->___actionCount_7 == 0) {
    return false;
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pHVar1 = param_1->___master_4->___hoverData_18,
     pHVar1 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC(pHVar1,(MethodInfo *)0x0);
    if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
                (param_1->___master_4,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pWVar2 = param_1->___master_4->___waveFunctionCollapse_10,
         pWVar2 != (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0)) {
        WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
                  (pWVar2,(MethodInfo *)0x0);
        pLVar3 = param_1->___actions_5;
        if (pLVar3 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
          iVar6 = param_1->___actionIndex_6;
          if ((uint)pLVar3->____size_2 <= iVar6 - 1U) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pAVar5 = pLVar3->____items_1->m_Items + iVar6 + -1;
          local_24 = (pAVar5->___hexPos_0).___x_0;
          iStack_20 = (pAVar5->___hexPos_0).___y_1;
          uStack_1c._0_1_ = pAVar5->___height_1;
          uStack_1c._1_1_ = pAVar5->___inType_2;
          uStack_1c._2_1_ = pAVar5->___outType_3;
          uStack_1c._3_1_ = pAVar5->field_0xb;
          iStack_18 = pAVar5->___actionId_4;
          while (0 < iVar6) {
            pLVar3 = param_1->___actions_5;
            if (pLVar3 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)
            goto LAB_103d275e;
            if ((uint)pLVar3->____size_2 <= iVar6 - 1U) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pAVar5 = pLVar3->____items_1->m_Items + iVar6 + -1;
            local_14.___hexPos_0.___x_0 = (pAVar5->___hexPos_0).___x_0;
            local_14.___hexPos_0.___y_1 = (pAVar5->___hexPos_0).___y_1;
            local_14.___height_1 = pAVar5->___height_1;
            local_14.___inType_2 = pAVar5->___inType_2;
            local_14.___outType_3 = pAVar5->___outType_3;
            local_14._11_1_ = pAVar5->field_0xb;
            local_14.___actionId_4 = pAVar5->___actionId_4;
            if (local_14.___actionId_4 != iStack_18) break;
            if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) goto LAB_103d275e;
            pGVar4 = param_1->___master_4->___graph_7;
            pAVar5 = Action_GetReverse_m2A97B6361217A8CE7CB8EB2DC4473B4B6D9D82C5
                               (&local_34,&local_14,(MethodInfo *)0x0);
            if (pGVar4 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) goto LAB_103d275e;
            Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700
                      (pGVar4,*pAVar5,true,(MethodInfo *)0x0);
            iVar6 = param_1->___actionIndex_6 + -1;
            param_1->___actionIndex_6 = iVar6;
          }
          param_1->___actionCount_7 = param_1->___actionCount_7 + -1;
          Maker_ActionQueueChanged_m7E6C25D10911E379AAFB4D8808E71CC52E028559
                    (param_1,(MethodInfo *)0x0);
          return true;
        }
      }
    }
  }
LAB_103d275e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
