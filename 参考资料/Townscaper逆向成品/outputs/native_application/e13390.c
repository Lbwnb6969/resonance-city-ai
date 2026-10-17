// RVA 0xe13390 | Placemaker.GridGenerator$$HexToPatchHex
// PDB: GridGenerator_HexToPatchHex_mAF7074C65081E4618D744A60551C3EEFA4CF48D8
// Body: [[10e13390, 10e13468]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 10e131d0 GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02

int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 __cdecl
GridGenerator_HexToPatchHex_mAF7074C65081E4618D744A60551C3EEFA4CF48D8
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar3;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_1c;
  undefined8 local_10;
  float local_8;

  if (DAT_1152265a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1152265a = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar4 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                     (&local_1c,param_2,(MethodInfo *)0x0);
  uVar1 = piVar4->___x_0;
  uVar2 = piVar4->___y_1;
  local_10._0_4_ = piVar4->___x_0;
  local_10._4_4_ = piVar4->___y_1;
  local_8 = (float)piVar4->___z_2;
  fVar3.___y_1 = (float)(int)uVar2;
  fVar3.___x_0 = (float)(int)uVar1;
  fVar3.___z_2 = local_8;
  piVar4 = GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
                     (&local_1c,param_1,fVar3,(MethodInfo *)0x0);
  iVar5 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(*piVar4,(MethodInfo *)0x0);
  return iVar5;
}
