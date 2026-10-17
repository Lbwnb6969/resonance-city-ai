// RVA 0x3d3ee0 | Placemaker.Ui.MasterClicker$$ColorPick
// PDB: MasterClicker_ColorPick_m7075CE2A175732B0648136D88827210882A2373D
// Body: [[103d3ee0, 103d4004]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10233080 ClickEffect_ColorPick_m43147E628DA95AC83F3B63EF300805B3BD94CF2E
// 103e7640 UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 1074f300 PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

bool __cdecl
MasterClicker_ColorPick_m7075CE2A175732B0648136D88827210882A2373D
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *pPVar3;
  bool bVar4;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar5;
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar6;

  if (DAT_1151c860 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c860 = '\x01';
  }
  if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pHVar5 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                         (param_1->___master_7,(MethodInfo *)0x0),
     pHVar5 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    pVVar1 = pHVar5->___voxel_9;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar1,(MethodInfo *)0x0)
    ;
    if (!bVar4) {
      return false;
    }
    if (((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pHVar5 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                            (param_1->___master_7,(MethodInfo *)0x0),
        pHVar5 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
       (pHVar5->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) {
      if ('\x0e' < pHVar5->___voxel_9->___type_4) {
        return false;
      }
      pUVar2 = param_1->___master_7;
      if (pUVar2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pPVar3 = pUVar2->___paletteMenu_9;
        pHVar5 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                           (pUVar2,(MethodInfo *)0x0);
        if (((pHVar5 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) &&
            (pHVar5->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) &&
           (pPVar3 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
          PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                    (pPVar3,(int)pHVar5->___voxel_9->___type_4,(MethodInfo *)0x0);
          if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            pCVar6 = UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
                               (param_1->___master_7,(MethodInfo *)0x0);
            if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
               && (pHVar5 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                      (param_1->___master_7,(MethodInfo *)0x0),
                  pCVar6 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0)) {
              ClickEffect_ColorPick_m43147E628DA95AC83F3B63EF300805B3BD94CF2E
                        (pCVar6,pHVar5,(MethodInfo *)0x0);
              return true;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
