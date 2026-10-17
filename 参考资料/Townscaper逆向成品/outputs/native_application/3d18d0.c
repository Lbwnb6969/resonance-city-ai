// RVA 0x3d18d0 | Placemaker.Maker$$ActionQueueChanged
// PDB: Maker_ActionQueueChanged_m7E6C25D10911E379AAFB4D8808E71CC52E028559
// Body: [[103d18d0, 103d1919]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared

void __cdecl
Maker_ActionQueueChanged_m7E6C25D10911E379AAFB4D8808E71CC52E028559
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  if (DAT_1151c84e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var)
    ;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
