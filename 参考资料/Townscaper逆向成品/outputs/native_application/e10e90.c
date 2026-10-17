// RVA 0xe10e90 | Placemaker.GridGenerator$$GetPatchOffset
// PDB: GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
// Body: [[10e10e90, 10e11013]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040e060 HexMath_RotateCCW_m223FA44F37054C50E3781C297A0F168C7B890B9B
// 1040e110 HexMath_RotateCW_m8E02437E8EB233E657214919BD466140DAFE4B31
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 __cdecl
GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar1;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar2;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar3;
  int iVar4;
  int iVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_38;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2c;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_20;
  int local_14;
  int iStack_10;
  undefined4 uStack_c;
  float local_8;

  if (DAT_11522662 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522662 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar2 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                     (&local_2c,param_2,(MethodInfo *)0x0);
  local_20.___x_0 = piVar2->___x_0;
  local_20.___y_1 = piVar2->___y_1;
  local_38.___x_0 = (float)piVar2->___x_0;
  local_38.___y_1 = (float)piVar2->___y_1;
  local_2c.___z_2 = (int)(float)piVar2->___z_2;
  fVar1.___y_1 = (float)(int)local_20.___y_1;
  fVar1.___x_0 = (float)(int)local_20.___x_0;
  fVar1.___z_2 = (float)local_2c.___z_2;
  local_14 = local_20.___x_0;
  iStack_10 = local_20.___y_1;
  local_8 = (float)local_2c.___z_2;
  pfVar3 = HexMath_RotateCW_m8E02437E8EB233E657214919BD466140DAFE4B31
                     (&local_38,fVar1,(MethodInfo *)0x0);
  local_2c.___z_2 = (int)pfVar3->___z_2;
  local_2c.___x_0 = (int)pfVar3->___x_0;
  local_2c.___y_1 = (int)pfVar3->___y_1;
  local_8 = (local_8 + (float)local_2c.___z_2) / __real_43580000;
  local_20._0_8_ = local_2c._0_8_;
  iVar4 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (((float)iStack_10 + (float)local_2c.___y_1) / __real_43580000,(MethodInfo *)0x0
                    );
  iStack_10 = 0;
  uStack_c = 0;
  iVar5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(local_8,(MethodInfo *)0x0);
  iStack_10 = 0;
  uStack_c = 0;
  iVar5 = (iVar5 + iVar4) * -0xd8;
  iVar6.___y_1 = iVar4 * 0xd8;
  iVar6.___x_0 = iVar5;
  iVar6 = HexMath_RotateCCW_m223FA44F37054C50E3781C297A0F168C7B890B9B(iVar6,(MethodInfo *)0x0);
  iVar7.___y_1 = (iVar4 * 0xd8 + iVar6.___y_1) / 3 - param_2.___y_1;
  iVar7.___x_0 = (iVar6.___x_0 + iVar5) / 3 - param_2.___x_0;
  return iVar7;
}
