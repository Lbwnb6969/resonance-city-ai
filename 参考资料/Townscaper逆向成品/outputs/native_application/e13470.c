// RVA 0xe13470 | Placemaker.GridGenerator$$HexToPatchHexes
// PDB: GridGenerator_HexToPatchHexes_mB9BA2AEA3CF397B62EB12D81892932BECA961822
// Body: [[10e13470, 10e13a2f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040e070 HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
// 1040e0f0 HexMath_RotateCW_m4869DF41303A2C6074160A090C43E1CD10CDC45A

void __cdecl
GridGenerator_HexToPatchHexes_mB9BA2AEA3CF397B62EB12D81892932BECA961822
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,
          int3x3_t1164F7C264DD9B11A19FA20671EE3113194A242D *param_3,uchar *param_4,
          MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_50;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_44;
  undefined8 local_38;
  undefined8 local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (DAT_1152265e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1152265e = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar16 = HexMath_RotateCW_m4869DF41303A2C6074160A090C43E1CD10CDC45A
                      (&local_44,param_2,(MethodInfo *)0x0);
  local_2c._0_4_ = piVar16->___x_0;
  local_2c._4_4_ = piVar16->___y_1;
  local_50.___x_0 = piVar16->___x_0;
  local_50.___y_1 = piVar16->___y_1;
  iVar18 = ((undefined4)local_2c + param_2.___x_0) / 3;
  iVar13 = (local_2c._4_4_ + param_2.___y_1) / 3;
  iVar14 = (piVar16->___z_2 + param_2.___z_2) / 3;
  local_20 = (uint)(0 < iVar18) * 2 + -1;
  local_18 = (uint)(0 < iVar13) * 2 + -1;
  local_1c = (uint)(0 < iVar14) * 2 + -1;
  iVar17 = (iVar18 + local_20 * 0x24) / 0x48;
  local_10 = iVar17 * 0x48;
  iVar21 = (iVar13 + local_18 * 0x24) / 0x48;
  param_2.___y_1 = iVar21 * 0x48;
  iVar20 = iVar13 + iVar21 * -0x48;
  iVar21 = (iVar14 + local_1c * 0x24) / 0x48;
  local_8 = iVar21 * 0x48;
  iVar21 = iVar14 + iVar21 * -0x48;
  iVar17 = iVar18 + iVar17 * -0x48;
  local_c = local_10 - iVar18;
  if (local_10 - iVar18 <= iVar17) {
    local_c = iVar17;
  }
  iVar18 = param_2.___y_1 - iVar13;
  if (param_2.___y_1 - iVar13 <= iVar20) {
    iVar18 = iVar20;
  }
  local_14 = local_8 - iVar14;
  if (local_8 - iVar14 <= iVar21) {
    local_14 = iVar21;
  }
  if ((iVar18 < local_c) && (local_14 < local_c)) {
    local_38 = CONCAT44(param_2.___y_1,-(local_8 + param_2.___y_1));
LAB_10e1365a:
    (param_3->___c0_0).___x_0 = (int)local_38;
    (param_3->___c0_0).___y_1 = local_38._4_4_;
    (param_3->___c0_0).___z_2 = local_8;
  }
  else {
    if (local_14 < iVar18) {
      local_38 = CONCAT44(-(local_8 + local_10),local_10);
      goto LAB_10e1365a;
    }
    (param_3->___c0_0).___x_0 = local_10;
    (param_3->___c0_0).___y_1 = param_2.___y_1;
    (param_3->___c0_0).___z_2 = -(param_2.___y_1 + local_10);
  }
  if ((local_c == 0x24) && (iVar18 == 0)) {
    local_2c._0_4_ = (param_3->___c0_0).___x_0;
    local_2c._4_4_ = (param_3->___c0_0).___y_1;
    iVar13 = (param_3->___c0_0).___z_2;
    local_50.___x_0 = (param_3->___c0_0).___x_0;
    local_50.___y_1 = (param_3->___c0_0).___y_1;
    (param_3->___c1_1).___x_0 = (undefined4)local_2c + local_20 * -0x48;
    (param_3->___c1_1).___y_1 = local_2c._4_4_;
    (param_3->___c1_1).___z_2 = local_20 * 0x48 + iVar13;
  }
  else {
    if ((local_c < iVar18) && (local_14 < iVar18)) {
      (param_3->___c1_1).___x_0 = local_10;
      (param_3->___c1_1).___y_1 = -(local_10 + local_8);
      (param_3->___c1_1).___z_2 = local_8;
    }
    else if (local_c < local_14) {
      (param_3->___c1_1).___x_0 = local_10;
      (param_3->___c1_1).___y_1 = param_2.___y_1;
      (param_3->___c1_1).___z_2 = -(local_10 + param_2.___y_1);
    }
    else {
      (param_3->___c1_1).___x_0 = -(param_2.___y_1 + local_8);
      (param_3->___c1_1).___y_1 = param_2.___y_1;
      (param_3->___c1_1).___z_2 = local_8;
    }
    if ((iVar18 == 0x24) && (local_14 == 0)) {
      iVar18 = (param_3->___c1_1).___z_2;
      uVar1 = (param_3->___c1_1).___x_0;
      uVar7 = (param_3->___c1_1).___y_1;
      local_50.___x_0 = (param_3->___c1_1).___x_0;
      local_50.___y_1 = (param_3->___c1_1).___y_1;
      (param_3->___c2_2).___x_0 = uVar1 + local_18 * 0x48;
      (param_3->___c2_2).___y_1 = uVar7 + local_18 * -0x48;
      (param_3->___c2_2).___z_2 = iVar18;
      goto LAB_10e13828;
    }
  }
  if ((local_c < local_14) && (iVar18 < local_14)) {
    (param_3->___c2_2).___x_0 = local_10;
    (param_3->___c2_2).___y_1 = param_2.___y_1;
    (param_3->___c2_2).___z_2 = -(local_10 + param_2.___y_1);
  }
  else {
    if (iVar18 < local_c) {
      param_2.___x_0 = -(param_2.___y_1 + local_8);
    }
    else {
      param_2.___y_1 = -(local_10 + local_8);
      param_2.___x_0 = local_10;
    }
    (param_3->___c2_2).___x_0 = param_2.___x_0;
    (param_3->___c2_2).___y_1 = param_2.___y_1;
    (param_3->___c2_2).___z_2 = local_8;
  }
  if ((local_14 == 0x24) && (local_c == 0)) {
    uVar2 = (param_3->___c2_2).___x_0;
    uVar8 = (param_3->___c2_2).___y_1;
    iVar18 = (param_3->___c2_2).___z_2;
    local_50.___x_0 = (param_3->___c2_2).___x_0;
    local_50.___y_1 = (param_3->___c2_2).___y_1;
    (param_3->___c0_0).___x_0 = uVar2;
    (param_3->___c0_0).___y_1 = uVar8 + local_1c * 0x48;
    (param_3->___c0_0).___z_2 = iVar18 + local_1c * -0x48;
  }
LAB_10e13828:
  local_38._0_4_ = (param_3->___c0_0).___x_0;
  local_38._4_4_ = (param_3->___c0_0).___y_1;
  iVar18 = (param_3->___c0_0).___z_2;
  iVar15 = param_3->___c0_0;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar16 = HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
                      (&local_50,iVar15,(MethodInfo *)0x0);
  local_2c._0_4_ = piVar16->___x_0;
  local_2c._4_4_ = piVar16->___y_1;
  iVar13 = piVar16->___z_2;
  local_44.___x_0 = piVar16->___x_0;
  local_44.___y_1 = piVar16->___y_1;
  (param_3->___c0_0).___x_0 = (undefined4)local_2c + (int)local_38;
  (param_3->___c0_0).___y_1 = local_38._4_4_ + local_2c._4_4_;
  (param_3->___c0_0).___z_2 = iVar18 + iVar13;
  piVar16 = &param_3->___c1_1;
  local_38._0_4_ = piVar16->___x_0;
  local_38._4_4_ = piVar16->___y_1;
  iVar18 = (param_3->___c1_1).___z_2;
  piVar16 = HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
                      (&local_50,*piVar16,(MethodInfo *)0x0);
  local_2c._0_4_ = piVar16->___x_0;
  local_2c._4_4_ = piVar16->___y_1;
  iVar13 = piVar16->___z_2;
  local_44.___x_0 = piVar16->___x_0;
  local_44.___y_1 = piVar16->___y_1;
  (param_3->___c1_1).___x_0 = (undefined4)local_2c + (int)local_38;
  (param_3->___c1_1).___y_1 = local_38._4_4_ + local_2c._4_4_;
  (param_3->___c1_1).___z_2 = iVar18 + iVar13;
  piVar16 = &param_3->___c2_2;
  local_38._0_4_ = piVar16->___x_0;
  local_38._4_4_ = piVar16->___y_1;
  iVar18 = (param_3->___c2_2).___z_2;
  piVar16 = HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
                      (&local_50,*piVar16,(MethodInfo *)0x0);
  uVar3 = piVar16->___x_0;
  uVar9 = piVar16->___y_1;
  iVar13 = piVar16->___z_2;
  (param_3->___c2_2).___x_0 = uVar3 + (int)local_38;
  (param_3->___c2_2).___y_1 = local_38._4_4_ + uVar9;
  (param_3->___c2_2).___z_2 = iVar18 + iVar13;
  *param_4 = '\x01';
  uVar4 = (param_3->___c0_0).___x_0;
  uVar10 = (param_3->___c0_0).___y_1;
  if (((param_3->___c1_1).___x_0 == uVar4) && ((param_3->___c1_1).___y_1 == uVar10)) {
    bVar22 = (param_3->___c1_1).___z_2 == (param_3->___c0_0).___z_2;
  }
  else {
    bVar22 = false;
  }
  cVar19 = '\x01';
  if (!bVar22) {
    *param_4 = '\x03';
    cVar19 = '\x03';
  }
  uVar5 = (param_3->___c0_0).___x_0;
  uVar11 = (param_3->___c0_0).___y_1;
  iVar18 = (param_3->___c2_2).___x_0;
  if (((iVar18 != uVar5) || ((param_3->___c2_2).___y_1 != uVar11)) ||
     ((param_3->___c2_2).___z_2 != (param_3->___c0_0).___z_2)) {
    uVar6 = (param_3->___c1_1).___x_0;
    uVar12 = (param_3->___c1_1).___y_1;
    if (((iVar18 != uVar6) || ((param_3->___c2_2).___y_1 != uVar12)) ||
       ((param_3->___c2_2).___z_2 != (param_3->___c1_1).___z_2)) {
      *param_4 = cVar19 + '\x04';
    }
  }
  return;
}
