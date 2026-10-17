// RVA 0x40f4b0 | Os.Hex.HexOnionIterator$$set_vertIndex
// PDB: HexOnionIterator_set_vertIndex_mF30A15DCE36DA2BE0C85C3F5DFFEC8D7EF781EDB
// Body: [[1040f4b0, 1040f6f5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040f270 HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71

void __cdecl
HexOnionIterator_set_vertIndex_mF30A15DCE36DA2BE0C85C3F5DFFEC8D7EF781EDB
          (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *param_1,uint param_2,
          MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *pHVar13;
  int iStack_9c;
  int local_94;
  int iStack_78;
  int local_70;
  int local_58;
  int iStack_54;
  int iStack_3c;
  int iStack_30;
  int local_28;
  int local_1c;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_10;

  pHVar13 = param_1;
  param_1 = (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)param_1->____vertIndex_0;
  while (param_1 < param_2) {
    if (DAT_1151ca8b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_il2cpp_TypeInfo_var);
      param_1 = (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)
                pHVar13->____vertIndex_0;
      DAT_1151ca8b = '\x01';
    }
    if (param_1 == (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)0x0) {
      puVar12 = int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_il2cpp_TypeInfo_var->static_fields;
      local_94 = (int)*puVar12;
      if ((((pHVar13->___delta_6).___x_0 == local_94) &&
          (iStack_9c = (int)((ulonglong)*puVar12 >> 0x20), (pHVar13->___delta_6).___y_1 == iStack_9c
          )) && (local_10._0_8_ = *puVar12, (pHVar13->___delta_6).___z_2 == *(int *)(puVar12 + 1)))
      {
        (pHVar13->___delta_6).___x_0 = -1;
        (pHVar13->___delta_6).___y_1 = 0;
        (pHVar13->___delta_6).___z_2 = 1;
      }
      (pHVar13->____hexPos_5).___x_0 = 1;
      param_1 = (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)&DAT_00000001;
      (pHVar13->____hexPos_5).___y_1 = -1;
      (pHVar13->____hexPos_5).___z_2 = 0;
      pHVar13->____layerIndex_2 = 1;
      pHVar13->____vertCountInSide_4 = 1;
      pHVar13->____vertIndexInSide_3 = 0;
      pHVar13->____sideIndex_1 = 0;
    }
    else {
      uVar1 = (pHVar13->___delta_6).___x_0;
      iVar9 = (pHVar13->___delta_6).___z_2;
      iVar10 = (pHVar13->____hexPos_5).___z_2;
      pHVar13->____vertIndexInSide_3 = pHVar13->____vertIndexInSide_3 + 1;
      uVar11 = pHVar13->____vertIndexInSide_3;
      uVar2 = (pHVar13->____hexPos_5).___x_0;
      uVar5 = (pHVar13->____hexPos_5).___y_1;
      uVar6 = (pHVar13->___delta_6).___y_1;
      local_10.___x_0 = (pHVar13->___delta_6).___x_0;
      local_10.___y_1 = (pHVar13->___delta_6).___y_1;
      (pHVar13->____hexPos_5).___x_0 = uVar1 + uVar2;
      (pHVar13->____hexPos_5).___y_1 = uVar5 + uVar6;
      (pHVar13->____hexPos_5).___z_2 = iVar10 + iVar9;
      if (uVar11 == pHVar13->____vertCountInSide_4) {
        uVar3 = (pHVar13->___delta_6).___x_0;
        uVar7 = (pHVar13->___delta_6).___y_1;
        if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
          param_1 = (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)
                    pHVar13->____vertIndex_0;
        }
        pHVar13->____sideIndex_1 = pHVar13->____sideIndex_1 + 1;
        uVar11 = pHVar13->____sideIndex_1;
        (pHVar13->___delta_6).___x_0 = -iVar9;
        (pHVar13->___delta_6).___y_1 = -uVar3;
        (pHVar13->___delta_6).___z_2 = -uVar7;
        pHVar13->____vertIndexInSide_3 = 0;
        if (uVar11 == 6) {
          uVar4 = (pHVar13->____hexPos_5).___x_0;
          uVar8 = (pHVar13->____hexPos_5).___y_1;
          iVar9 = (pHVar13->____hexPos_5).___z_2;
          pHVar13->____vertCountInSide_4 = pHVar13->____vertCountInSide_4 + 1;
          pHVar13->____layerIndex_2 = pHVar13->____layerIndex_2 + 1;
          local_10.___x_0 = (pHVar13->____hexPos_5).___x_0;
          local_10.___y_1 = (pHVar13->____hexPos_5).___y_1;
          (pHVar13->____hexPos_5).___x_0 = uVar4 + 1;
          (pHVar13->____hexPos_5).___y_1 = uVar8 + -1;
          pHVar13->____sideIndex_1 = 0;
          (pHVar13->____hexPos_5).___z_2 = iVar9;
        }
      }
      param_1 = (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)
                ((int)&param_1->____vertIndex_0 + 1);
    }
    pHVar13->____vertIndex_0 = (uint)param_1;
  }
  while ((param_2 < param_1 &&
         (param_1 != (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)0x0))) {
    HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
              (&local_10,pHVar13,(MethodInfo *)0x0);
    param_1 = (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)pHVar13->____vertIndex_0
    ;
  }
  return;
}
