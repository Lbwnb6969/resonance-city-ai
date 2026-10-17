// RVA 0xe109c0 | Placemaker.GridGenerator$$GetClosestClusterPos
// PDB: GridGenerator_GetClosestClusterPos_m7824F99A7919904038888BB85769659401FB0FED
// Body: [[10e109c0, 10e10b7c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040e070 HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
// 1040e0f0 HexMath_RotateCW_m4869DF41303A2C6074160A090C43E1CD10CDC45A

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
GridGenerator_GetClosestClusterPos_m7824F99A7919904038888BB85769659401FB0FED
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
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_40;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_34;
  undefined8 local_28;
  undefined8 local_1c;
  int local_10;
  int local_c;
  int local_8;

  if (DAT_1152265d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1152265d = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar4 = HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
                     (&local_34,param_2,(MethodInfo *)0x0);
  local_28._0_4_ = piVar4->___x_0;
  local_28._4_4_ = piVar4->___y_1;
  local_40.___x_0 = piVar4->___x_0;
  local_40.___y_1 = piVar4->___y_1;
  local_8 = param_2.___z_2 + piVar4->___z_2;
  iVar7 = 0x6c;
  iVar5 = 0x6c;
  if (param_2.___x_0 + (undefined4)local_28 < 1) {
    iVar5 = -0x6c;
  }
  iVar5 = ((param_2.___x_0 + (undefined4)local_28) / 0xd8) * 0xd8 + iVar5;
  iVar6 = 0x6c;
  if (param_2.___y_1 + local_28._4_4_ < 1) {
    iVar6 = -0x6c;
  }
  iVar6 = ((param_2.___y_1 + local_28._4_4_) / 0xd8) * 0xd8 + iVar6;
  if (local_8 < 1) {
    iVar7 = -0x6c;
  }
  iVar7 = (local_8 / 0xd8) * 0xd8 + iVar7;
  local_1c = local_28;
  local_10 = iVar5;
  local_c = iVar6;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  iVar3.___y_1 = iVar6;
  iVar3.___x_0 = iVar5;
  iVar3.___z_2 = iVar7;
  piVar4 = HexMath_RotateCW_m4869DF41303A2C6074160A090C43E1CD10CDC45A
                     (&local_40,iVar3,(MethodInfo *)0x0);
  uVar1 = piVar4->___x_0;
  uVar2 = piVar4->___y_1;
  iVar5 = piVar4->___z_2;
  __return_storage_ptr__->___x_0 = (uVar1 + local_10) / 3;
  __return_storage_ptr__->___y_1 = (iVar6 + uVar2) / 3;
  __return_storage_ptr__->___z_2 = (iVar5 + iVar7) / 3;
  return __return_storage_ptr__;
}
