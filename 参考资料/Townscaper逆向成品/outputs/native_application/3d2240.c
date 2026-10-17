// RVA 0x3d2240 | Placemaker.Maker$$Redo
// PDB: Maker_Redo_m8435C7AED24EE7742B8E38213A64F25F650E39C0
// Body: [[103d2240, 103d22ff] [103d2309, 103d233d] [103d2341, 103d23b9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d18d0 Maker_ActionQueueChanged_m7E6C25D10911E379AAFB4D8808E71CC52E028559
// 103f4210 WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
// 103f8b00 WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
// 1040fe40 HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6b480 Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700

bool __cdecl
Maker_Redo_m8435C7AED24EE7742B8E38213A64F25F650E39C0
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar1;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *pWVar2;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar3;
  int iVar4;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar5;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar6;
  uint uVar7;

  if (DAT_1151c854 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mB1D3E0F73A4AC5C0641BFEBD257139A23EDFAF0B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var)
    ;
    DAT_1151c854 = '\x01';
  }
  if (param_1->___actions_5 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
    if (param_1->___actionIndex_6 == param_1->___actions_5->____size_2) {
      return false;
    }
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pHVar1 = param_1->___master_4->___hoverData_18,
       pHVar1 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
      HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC(pHVar1,(MethodInfo *)0x0);
      if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
        WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
                  (param_1->___master_4,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pWVar2 = param_1->___master_4->___waveFunctionCollapse_10,
              pWVar2 != (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0)) {
          WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
                    (pWVar2,(MethodInfo *)0x0);
          pLVar5 = param_1->___actions_5;
          uVar7 = param_1->___actionIndex_6;
          if (pLVar5 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
            if ((uint)pLVar5->____size_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            iVar4 = pLVar5->____items_1->m_Items[uVar7].___actionId_4;
            if (pLVar5 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
              do {
                if (pLVar5->____size_2 <= (int)uVar7) {
LAB_103d2395:
                  param_1->___actionCount_7 = param_1->___actionCount_7 + 1;
                  Maker_ActionQueueChanged_m7E6C25D10911E379AAFB4D8808E71CC52E028559
                            (param_1,(MethodInfo *)0x0);
                  return true;
                }
                if (pLVar5 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) break;
                if ((uint)pLVar5->____size_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                pAVar6 = pLVar5->____items_1->m_Items + uVar7;
                if (pAVar6->___actionId_4 != iVar4) goto LAB_103d2395;
                if ((param_1->___master_4 ==
                     (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                   (pGVar3 = param_1->___master_4->___graph_7,
                   pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) break;
                Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700
                          (pGVar3,*pAVar6,true,(MethodInfo *)0x0);
                uVar7 = param_1->___actionIndex_6 + 1;
                param_1->___actionIndex_6 = uVar7;
                pLVar5 = param_1->___actions_5;
                if (pLVar5 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) break;
              } while( true );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
