// RVA 0x40f000 | Os.Hex.HexOnionIterator$$Decrement
// PDB: HexOnionIterator_Decrement_m328868E0BA22F7C891D1A31EA27EAF166651210E
// Body: [[1040f000, 1040f1a5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
HexOnionIterator_Decrement_m328868E0BA22F7C891D1A31EA27EAF166651210E
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iStack_30;
  int iStack_24;
  undefined8 local_1c;
  int local_10;
  int iStack_c;

  if (DAT_1151ca8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral391DD102B3676963DF87773A55EE1D253B89542A);
    DAT_1151ca8c = '\x01';
  }
  uVar12 = param_1->____vertIndex_0;
  if (uVar12 == 0) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
              ((Il2CppObject *)_stringLiteral391DD102B3676963DF87773A55EE1D253B89542A,
               (MethodInfo *)0x0);
  }
  else {
    uVar9 = param_1->____vertIndexInSide_3;
    if (uVar9 == 0) {
      uVar1 = (param_1->___delta_6).___x_0;
      uVar5 = (param_1->___delta_6).___y_1;
      iVar10 = (param_1->___delta_6).___z_2;
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
        uVar12 = param_1->____vertIndex_0;
      }
      (param_1->___delta_6).___x_0 = -uVar5;
      (param_1->___delta_6).___y_1 = -iVar10;
      (param_1->___delta_6).___z_2 = -uVar1;
      if (param_1->____sideIndex_1 == 0) {
        uVar2 = (param_1->____hexPos_5).___x_0;
        uVar6 = (param_1->____hexPos_5).___y_1;
        iVar10 = (param_1->____hexPos_5).___z_2;
        param_1->____vertCountInSide_4 = param_1->____vertCountInSide_4 - 1;
        param_1->____layerIndex_2 = param_1->____layerIndex_2 - 1;
        (param_1->____hexPos_5).___x_0 = uVar2 + -1;
        (param_1->____hexPos_5).___y_1 = uVar6 + 1;
        param_1->____sideIndex_1 = 5;
        (param_1->____hexPos_5).___z_2 = iVar10;
      }
      else {
        param_1->____sideIndex_1 = param_1->____sideIndex_1 - 1;
      }
      uVar9 = param_1->____vertCountInSide_4;
    }
    param_1->____vertIndexInSide_3 = uVar9 - 1;
    uVar3 = (param_1->___delta_6).___x_0;
    iVar10 = (param_1->____hexPos_5).___z_2;
    uVar4 = (param_1->____hexPos_5).___x_0;
    uVar7 = (param_1->____hexPos_5).___y_1;
    uVar8 = (param_1->___delta_6).___y_1;
    iVar11 = (param_1->___delta_6).___z_2;
    (param_1->____hexPos_5).___x_0 = uVar4 - uVar3;
    (param_1->____hexPos_5).___y_1 = uVar7 - uVar8;
    (param_1->____hexPos_5).___z_2 = iVar10 - iVar11;
    param_1->____vertIndex_0 = uVar12 - 1;
  }
  iVar11 = (param_1->____hexPos_5).___y_1;
  iVar10 = (param_1->____hexPos_5).___z_2;
  __return_storage_ptr__->___x_0 = (param_1->____hexPos_5).___x_0;
  __return_storage_ptr__->___y_1 = iVar11;
  __return_storage_ptr__->___z_2 = iVar10;
  return __return_storage_ptr__;
}
