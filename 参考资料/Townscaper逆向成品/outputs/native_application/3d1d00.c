// RVA 0x3d1d00 | Placemaker.Maker$$CanClear
// PDB: Maker_CanClear_m6A60933B9B7F25FE012283543F6051E6799C4DD5
// Body: [[103d1d00, 103d1d28]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10e79e40 Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD

bool __cdecl
Maker_CanClear_m6A60933B9B7F25FE012283543F6051E6799C4DD5
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  bool bVar2;

  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar1 = param_1->___master_4->___graph_7,
     pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    bVar2 = Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD(pGVar1,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
