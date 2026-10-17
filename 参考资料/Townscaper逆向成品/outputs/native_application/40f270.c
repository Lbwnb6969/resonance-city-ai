// RVA 0x40f270 | Os.Hex.HexOnionIterator$$Increment
// PDB: HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
// Body: [[1040f270, 1040f46c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar5;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 local_1c;
  int local_10;

  if (DAT_1151ca8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_il2cpp_TypeInfo_var);
    DAT_1151ca8b = '\x01';
  }
  if (param_1->____vertIndex_0 == 0) {
    uVar5 = *(undefined8 *)
             int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_il2cpp_TypeInfo_var->static_fields;
    local_34._0_4_ = (int)uVar5;
    if ((((param_1->___delta_6).___x_0 == (int)local_34) &&
        (local_34._4_4_ = (int)((ulonglong)uVar5 >> 0x20),
        (param_1->___delta_6).___y_1 == local_34._4_4_)) &&
       ((param_1->___delta_6).___z_2 ==
        *(int *)((int)int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_il2cpp_TypeInfo_var->
                      static_fields + 8))) {
      (param_1->___delta_6).___x_0 = -1;
      (param_1->___delta_6).___y_1 = 0;
      (param_1->___delta_6).___z_2 = 1;
    }
    (param_1->____hexPos_5).___x_0 = 1;
    uVar13 = 1;
    (param_1->____hexPos_5).___y_1 = -1;
    (param_1->____hexPos_5).___z_2 = 0;
    param_1->____layerIndex_2 = 1;
    param_1->____vertCountInSide_4 = 1;
    param_1->____vertIndexInSide_3 = 0;
    param_1->____sideIndex_1 = 0;
  }
  else {
    uVar1 = (param_1->___delta_6).___x_0;
    iVar10 = (param_1->___delta_6).___z_2;
    iVar11 = (param_1->____hexPos_5).___z_2;
    param_1->____vertIndexInSide_3 = param_1->____vertIndexInSide_3 + 1;
    uVar12 = param_1->____vertIndexInSide_3;
    uVar2 = (param_1->____hexPos_5).___x_0;
    uVar6 = (param_1->____hexPos_5).___y_1;
    uVar7 = (param_1->___delta_6).___y_1;
    (param_1->____hexPos_5).___x_0 = uVar1 + uVar2;
    (param_1->____hexPos_5).___y_1 = uVar7 + uVar6;
    (param_1->____hexPos_5).___z_2 = iVar10 + iVar11;
    uVar13 = param_1->____vertIndex_0;
    if (uVar12 == param_1->____vertCountInSide_4) {
      uVar3 = (param_1->___delta_6).___x_0;
      uVar8 = (param_1->___delta_6).___y_1;
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
        uVar13 = param_1->____vertIndex_0;
      }
      param_1->____sideIndex_1 = param_1->____sideIndex_1 + 1;
      uVar12 = param_1->____sideIndex_1;
      (param_1->___delta_6).___x_0 = -iVar10;
      (param_1->___delta_6).___y_1 = -uVar3;
      (param_1->___delta_6).___z_2 = -uVar8;
      param_1->____vertIndexInSide_3 = 0;
      if (uVar12 == 6) {
        uVar4 = (param_1->____hexPos_5).___x_0;
        uVar9 = (param_1->____hexPos_5).___y_1;
        iVar10 = (param_1->____hexPos_5).___z_2;
        param_1->____vertCountInSide_4 = param_1->____vertCountInSide_4 + 1;
        param_1->____layerIndex_2 = param_1->____layerIndex_2 + 1;
        (param_1->____hexPos_5).___x_0 = uVar4 + 1;
        (param_1->____hexPos_5).___y_1 = uVar9 + -1;
        param_1->____sideIndex_1 = 0;
        (param_1->____hexPos_5).___z_2 = iVar10;
      }
    }
    uVar13 = uVar13 + 1;
  }
  param_1->____vertIndex_0 = uVar13;
  iVar11 = (param_1->____hexPos_5).___y_1;
  iVar10 = (param_1->____hexPos_5).___z_2;
  __return_storage_ptr__->___x_0 = (param_1->____hexPos_5).___x_0;
  __return_storage_ptr__->___y_1 = iVar11;
  __return_storage_ptr__->___z_2 = iVar10;
  return __return_storage_ptr__;
}
