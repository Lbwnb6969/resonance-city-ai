// RVA 0xe131d0 | Placemaker.GridGenerator$$HexToPatchHex
// PDB: GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
// Body: [[10e131d0, 10e13384]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040dcd0 HexMath_HexRound_mB5669241E9FCD76CEB1248A76A81EF3875F42ACF
// 1040e070 HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
// 1040e110 HexMath_RotateCW_m8E02437E8EB233E657214919BD466140DAFE4B31

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar6;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar7;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_34;
  undefined8 local_28;
  float local_20;
  undefined8 local_1c;
  undefined8 local_10;

  if (DAT_11522659 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522659 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  pfVar8 = HexMath_RotateCW_m8E02437E8EB233E657214919BD466140DAFE4B31
                     (&local_34,param_2,(MethodInfo *)0x0);
  local_1c._0_4_ = pfVar8->___x_0;
  local_1c._4_4_ = pfVar8->___y_1;
  local_20 = pfVar8->___z_2;
  local_28._0_4_ = pfVar8->___x_0;
  local_28._4_4_ = pfVar8->___y_1;
  fVar6.___y_1 = (param_2.___y_1 + (float)local_1c._4_4_) / __real_43580000;
  fVar6.___x_0 = (param_2.___x_0 + (float)(undefined4)local_1c) / __real_43580000;
  fVar6.___z_2 = (param_2.___z_2 + local_20) / __real_43580000;
  local_10 = local_1c;
  piVar9 = HexMath_HexRound_mB5669241E9FCD76CEB1248A76A81EF3875F42ACF
                     ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_34,fVar6,
                      (MethodInfo *)0x0);
  uVar1 = piVar9->___x_0;
  uVar3 = piVar9->___y_1;
  iVar12 = uVar1 * 0xd8;
  local_1c._0_4_ = piVar9->___x_0;
  local_1c._4_4_ = piVar9->___y_1;
  iVar11 = uVar3 * 0xd8;
  iVar10 = piVar9->___z_2 * 0xd8;
  local_28 = CONCAT44(iVar11,iVar12);
  iVar7.___z_2 = iVar10;
  iVar7.___x_0 = iVar12;
  iVar7.___y_1 = iVar11;
  piVar9 = HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
                     ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_34,iVar7,
                      (MethodInfo *)0x0);
  uVar2 = piVar9->___x_0;
  uVar4 = piVar9->___y_1;
  iVar5 = piVar9->___z_2;
  __return_storage_ptr__->___x_0 = (iVar12 + uVar2) / 3;
  __return_storage_ptr__->___y_1 = (iVar11 + uVar4) / 3;
  __return_storage_ptr__->___z_2 = (iVar10 + iVar5) / 3;
  return __return_storage_ptr__;
}
