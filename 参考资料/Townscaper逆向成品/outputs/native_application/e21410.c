// RVA 0xe21410 | Placemaker.GroundClicker$$get_maker
// PDB: GroundClicker_get_maker_m7C20687F62B9E77076DA155218ABF603F533E269
// Body: [[10e21410, 10e2142d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

Maker_t537981F2ED20294ACF4C94693B3268049739203D * __cdecl
GroundClicker_get_maker_m7C20687F62B9E77076DA155218ABF603F533E269
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;

  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pWVar1 = param_1->___master_4->___worldMaster_5,
     pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    return pWVar1->___maker_6;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
