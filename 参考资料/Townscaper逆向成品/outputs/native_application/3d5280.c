// RVA 0x3d5280 | Placemaker.Ui.MasterClicker$$get_maker
// PDB: MasterClicker_get_maker_m331ACBF9E07F15F64C7E4DFE272BC1F3C74EFF26
// Body: [[103d5280, 103d52a1]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58

Maker_t537981F2ED20294ACF4C94693B3268049739203D * __cdecl
MasterClicker_get_maker_m331ACBF9E07F15F64C7E4DFE272BC1F3C74EFF26
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar1;

  if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pMVar1 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                       (param_1->___master_7,(MethodInfo *)0x0);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
