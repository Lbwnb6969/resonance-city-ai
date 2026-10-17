// RVA 0x3d28d0 | Placemaker.Maker$$get_graph
// PDB: Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// Body: [[103d28d0, 103d28e6]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 * __cdecl
Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    return param_1->___master_4->___graph_7;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
