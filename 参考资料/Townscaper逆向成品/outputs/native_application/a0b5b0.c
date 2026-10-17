// RVA 0xa0b5b0 | Placemaker.Ui.SideMenuNavigator$$OnRectTransformDimensionsChange
// PDB: SideMenuNavigator_OnRectTransformDimensionsChange_m2D54027BD7E3C15D89F6A8F1522B12934E0AAD4F
// Body: [[10a0b5b0, 10a0b5e7]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8590 UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
// 10a0bbe0 SideMenuNavigator_SetTargetsToButton_m5C834A93C291FA2044EF011191E607C54900A53F

void __cdecl
SideMenuNavigator_OnRectTransformDimensionsChange_m2D54027BD7E3C15D89F6A8F1522B12934E0AAD4F
          (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *param_1,MethodInfo *param_2)

{
  if (param_1->___targetArrowY_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    SideMenuNavigator_SetTargetsToButton_m5C834A93C291FA2044EF011191E607C54900A53F
              (param_1,param_1->___selectedButton_5,(MethodInfo *)0x0);
    if (param_1->___targetArrowY_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    {
      UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
                (param_1->___targetArrowY_8,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
