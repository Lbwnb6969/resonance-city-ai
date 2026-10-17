// RVA 0x3d1d90 | Placemaker.Maker$$ClearUndoQueue
// PDB: Maker_ClearUndoQueue_m9787B1C9A4798042F4588C9128018EBB2788AFFE
// Body: [[103d1d90, 103d1e23]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared

void __cdecl
Maker_ClearUndoQueue_m9787B1C9A4798042F4588C9128018EBB2788AFFE
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  bool bVar1;

  if (DAT_1151c84f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_mF401CC5E9774E433A1043A553EFBCE2E95D92440_RuntimeMethod_var);
    DAT_1151c84f = '\x01';
  }
  if (param_1->___actions_5 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___actions_5,
               List_1_Clear_mF401CC5E9774E433A1043A553EFBCE2E95D92440_RuntimeMethod_var);
    param_1->___actionIndex_6 = 0;
    bVar1 = DAT_1151c84e == '\0';
    param_1->___actionCount_7 = 0;
    param_1->___actionRedoMax_8 = 0;
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var
                );
      DAT_1151c84e = '\x01';
    }
    if ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)param_1->___onQueueChange_11 !=
        (Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)0x0) {
      Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
                ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)param_1->___onQueueChange_11,
                 param_1->___actionCount_7,param_1->___actionRedoMax_8 - param_1->___actionCount_7,
                 Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
