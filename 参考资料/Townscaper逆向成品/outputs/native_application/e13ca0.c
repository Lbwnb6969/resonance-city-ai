// RVA 0xe13ca0 | Placemaker.GridGenerator$$IsBorder
// PDB: GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
// Body: [[10e13ca0, 10e13ecd]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040e060 HexMath_RotateCCW_m223FA44F37054C50E3781C297A0F168C7B890B9B

bool __cdecl
GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar10;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_44;
  undefined8 local_38;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2c;
  int local_20;
  int iStack_1c;
  int local_8;

  if (DAT_11522660 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522660 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar5 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                     (&local_2c,param_2,(MethodInfo *)0x0);
  local_38._0_4_ = piVar5->___x_0;
  local_38._4_4_ = piVar5->___y_1;
  local_8 = piVar5->___z_2;
  iVar10.___y_1 = param_2.___y_1 * 2;
  iVar10.___x_0 = param_2.___x_0 * 2;
  iVar10 = HexMath_RotateCCW_m223FA44F37054C50E3781C297A0F168C7B890B9B(iVar10,(MethodInfo *)0x0);
  iVar4.___y_1 = (param_2.___y_1 * 2 + iVar10.___y_1) / 3;
  iVar4.___x_0 = (iVar10.___x_0 + param_2.___x_0 * 2) / 3;
  piVar5 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                     (&local_44,iVar4,(MethodInfo *)0x0);
  uVar1 = piVar5->___x_0;
  uVar2 = piVar5->___y_1;
  iVar8 = piVar5->___z_2;
  iVar9 = 0x48;
  uVar3 = piVar5->___y_1;
  iVar6 = 0x48;
  if ((int)uVar1 < 1) {
    iVar6 = -0x48;
  }
  iVar7 = 0x48;
  iVar6 = uVar1 + ((iVar6 + uVar1) / 0x90) * -0x90;
  if ((int)uVar2 < 1) {
    iVar7 = -0x48;
  }
  iVar7 = uVar3 + ((iVar7 + uVar2) / 0x90) * -0x90;
  if (iVar8 < 1) {
    iVar9 = -0x48;
  }
  iVar8 = iVar8 + ((iVar9 + iVar8) / 0x90) * -0x90;
  iVar9 = -iVar6;
  if (-iVar6 == iVar6 || -iVar6 < iVar6) {
    iVar9 = iVar6;
  }
  iVar6 = -iVar7;
  if (-iVar7 == iVar7 || -iVar7 < iVar7) {
    iVar6 = iVar7;
  }
  iVar7 = -iVar8;
  if (-iVar8 == iVar8 || -iVar8 < iVar8) {
    iVar7 = iVar8;
  }
  if (iVar6 <= iVar9) {
    if ((iVar7 <= iVar9) && (0 < iVar9)) {
      iVar8 = -(int)local_38;
      if (-(int)local_38 == (int)local_38 || -(int)local_38 < (int)local_38) {
        iVar8 = (int)local_38;
      }
      if (iVar8 == (iVar8 / 0x48) * 0x48) {
        return true;
      }
    }
    if (iVar6 < iVar9) goto LAB_10e13e89;
  }
  if ((iVar7 <= iVar6) && (0 < iVar6)) {
    iVar8 = -local_38._4_4_;
    if (-local_38._4_4_ == local_38._4_4_ || -local_38._4_4_ < local_38._4_4_) {
      iVar8 = local_38._4_4_;
    }
    if (iVar8 == (iVar8 / 0x48) * 0x48) {
      return true;
    }
  }
LAB_10e13e89:
  if (((iVar9 <= iVar7) && (iVar6 <= iVar7)) && (0 < iVar7)) {
    iVar8 = -local_8;
    if (-local_8 == local_8 || -local_8 < local_8) {
      iVar8 = local_8;
    }
    if (iVar8 == (iVar8 / 0x48) * 0x48) {
      return true;
    }
  }
  return false;
}
