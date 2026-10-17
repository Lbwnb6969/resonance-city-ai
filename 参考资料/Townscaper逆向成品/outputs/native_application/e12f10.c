// RVA 0xe12f10 | Placemaker.GridGenerator$$HexToGridCentroid
// PDB: GridGenerator_HexToGridCentroid_mF34D17274241E9BD8D48AC0638EC1CF0C02C6204
// Body: [[10e12f10, 10e131ca]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040e070 HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
// 1040e0f0 HexMath_RotateCW_m4869DF41303A2C6074160A090C43E1CD10CDC45A

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
GridGenerator_HexToGridCentroid_mF34D17274241E9BD8D48AC0638EC1CF0C02C6204
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar3;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_54;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_48;
  undefined8 local_3c;
  undefined8 local_30;
  int local_24;
  int iStack_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (DAT_1152265f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1152265f = '\x01';
  }
  local_24 = param_2.___x_0;
  __return_storage_ptr__->___x_0 = 0;
  __return_storage_ptr__->___y_1 = 0;
  __return_storage_ptr__->___z_2 = 0;
  iStack_20 = param_2.___y_1 + -0x870;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  iVar3.___y_1 = iStack_20;
  iVar3.___x_0 = local_24;
  iVar3.___z_2 = param_2.___z_2 + 0x870;
  piVar4 = HexMath_RotateCW_m4869DF41303A2C6074160A090C43E1CD10CDC45A
                     (&local_48,iVar3,(MethodInfo *)0x0);
  local_3c._0_4_ = piVar4->___x_0;
  local_3c._4_4_ = piVar4->___y_1;
  local_54.___x_0 = piVar4->___x_0;
  local_54.___y_1 = piVar4->___y_1;
  iVar6 = (param_2.___x_0 + (undefined4)local_3c) / 3;
  iVar8 = (iStack_20 + local_3c._4_4_) / 3;
  iVar7 = (param_2.___z_2 + 0x870 + piVar4->___z_2) / 3;
  __return_storage_ptr__->___x_0 = iVar6;
  __return_storage_ptr__->___y_1 = iVar8;
  __return_storage_ptr__->___z_2 = iVar7;
  local_c = (int)(((uint)(0 < iVar8) * 2 + -1) * 0x480 + iVar8) / 0x900;
  iVar5 = 0x480;
  local_10 = (int)(((uint)(0 < iVar7) * 2 + -1) * 0x480 + iVar7) / 0x900;
  if (__return_storage_ptr__->___x_0 < 1) {
    iVar5 = -0x480;
  }
  iVar5 = (iVar5 + iVar6) / 0x900;
  local_14 = local_c * 0x900;
  iVar8 = iVar8 + local_c * -0x900;
  local_8 = local_10 * 0x900;
  iVar6 = iVar6 + iVar5 * -0x900;
  iVar7 = iVar7 + local_10 * -0x900;
  __return_storage_ptr__->___x_0 = iVar5 * 0x900;
  __return_storage_ptr__->___y_1 = local_14;
  __return_storage_ptr__->___z_2 = local_8;
  iVar5 = -iVar6;
  if (-iVar6 <= iVar6) {
    iVar5 = iVar6;
  }
  local_18 = -iVar8;
  if (-iVar8 == iVar8 || -iVar8 < iVar8) {
    local_18 = iVar8;
  }
  iVar6 = -iVar7;
  if (-iVar7 == iVar7 || -iVar7 < iVar7) {
    iVar6 = iVar7;
  }
  if ((local_18 < iVar5) && (iVar6 < iVar5)) {
    __return_storage_ptr__->___x_0 = (local_c + local_10) * -0x900;
  }
  else if (iVar6 < local_18) {
    __return_storage_ptr__->___y_1 = -(__return_storage_ptr__->___x_0 + local_8);
  }
  else {
    __return_storage_ptr__->___z_2 = -(__return_storage_ptr__->___x_0 + local_14);
  }
  local_30._0_4_ = __return_storage_ptr__->___x_0;
  local_30._4_4_ = __return_storage_ptr__->___y_1;
  iVar6 = __return_storage_ptr__->___z_2;
  iVar3 = *__return_storage_ptr__;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar4 = HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
                     (&local_54,iVar3,(MethodInfo *)0x0);
  uVar1 = piVar4->___x_0;
  uVar2 = piVar4->___y_1;
  iVar8 = piVar4->___z_2;
  __return_storage_ptr__->___x_0 = uVar1 + (int)local_30;
  __return_storage_ptr__->___y_1 = local_30._4_4_ + 0x870 + uVar2;
  __return_storage_ptr__->___z_2 = iVar6 + -0x870 + iVar8;
  return __return_storage_ptr__;
}
