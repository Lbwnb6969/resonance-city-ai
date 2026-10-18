// VA 0x1414c8680, PDB extent 3295 bytes
// system_decorator::ui_systems::handle_splitting_roof_decorators::try_display_roof_decorator_parts_and_get_hovered_part_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_roof_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::handle_splitting_roof_decorators::try_display_roof_decorator_parts_and_get_hovered_part_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_roof_decorators.rs
   Extent: 3295 */

undefined8
pdb_1414c8680(longlong param_1,longlong param_2,float *param_3,undefined4 param_4,char param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,longlong *param_9,
             longlong *param_10)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  float *pfVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined *in_stack_fffffffffffffde8;
  undefined4 uVar40;
  ulonglong uStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  byte *pbStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  ulonglong uStack_158;
  float fStack_150;
  byte *pbStack_148;
  float fStack_13c;
  undefined8 uStack_138;
  float fStack_130;
  float fStack_12c;
  byte *pbStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined4 uStack_104;
  byte *pbStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar9 = pdb_140c413f0(param_6);
  uVar10 = pdb_140b54b40(param_8,uVar9);
  if ((uVar10 & 0xffffffff) == 0) {
    return 0;
  }
  lVar3 = param_9[1];
  uVar18 = uVar10 & 0xffffffff ^ 0xffffffff;
  if (*(ulonglong *)(lVar3 + 0x10) <= uVar18) {
    return 0;
  }
  piVar17 = (int *)(*(longlong *)(lVar3 + 8) + uVar18 * 0x18);
  iVar8 = (int)(uVar10 >> 0x20);
  if (piVar17[4] != iVar8) {
    return 0;
  }
  if (*piVar17 == 0) {
    return 0;
  }
  lVar4 = *param_9;
  uVar10 = *(ulonglong *)(piVar17 + 2);
  if (*(ulonglong *)(lVar4 + 0x38) <= (uVar10 & 0xffffffff)) {
    return 0;
  }
  if ((*(ulonglong *)(*(longlong *)(lVar4 + 0x28) + (uVar10 >> 6 & 0x3ffffff) * 8) >>
       (uVar10 & 0x3f) & 1) == 0) {
    return 0;
  }
  if (*(ulonglong *)(lVar4 + 0x110) <
      *(ulonglong *)(*(longlong *)(lVar3 + 0x1a0) + 0x40 + (uVar10 >> 0x20) * 0x48)) {
    lVar3 = *(longlong *)(lVar3 + 0x1a0) + (uVar10 >> 0x20) * 0x48;
    uVar10 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
    if (uVar10 == 0) goto LAB_1414c87e8;
    lStack_110 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar10 * 0x30);
  }
  else {
LAB_1414c87e8:
    lStack_110 = 0;
  }
  lVar3 = param_10[1];
  if (*(ulonglong *)(lVar3 + 0x10) <= uVar18) {
    return 0;
  }
  piVar16 = (int *)(uVar18 * 0x18 + *(longlong *)(lVar3 + 8));
  if (piVar16[4] != iVar8) {
    return 0;
  }
  if (*piVar16 == 0) {
    return 0;
  }
  lVar4 = *param_10;
  uVar10 = *(ulonglong *)(piVar16 + 2);
  if (*(ulonglong *)(lVar4 + 0x38) <= (uVar10 & 0xffffffff)) {
    return 0;
  }
  if ((*(ulonglong *)(*(longlong *)(lVar4 + 0x28) + (uVar10 >> 6 & 0x3ffffff) * 8) >>
       (uVar10 & 0x3f) & 1) == 0) {
    return 0;
  }
  if (*(ulonglong *)(lVar4 + 0x110) <
      *(ulonglong *)(*(longlong *)(lVar3 + 0x1a0) + 0x40 + (uVar10 >> 0x20) * 0x48)) {
    lVar3 = *(longlong *)(lVar3 + 0x1a0) + (uVar10 >> 0x20) * 0x48;
    uVar10 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
    if (uVar10 != 0) {
      lStack_1b0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar10 * 0x30);
      goto LAB_1414c8893;
    }
  }
  lStack_1b0 = 0;
LAB_1414c8893:
  lStack_110 = lStack_110 + (ulonglong)(uint)~piVar17[1] * 0x58;
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar26 = param_3[3];
  fVar33 = fVar7 * fVar7;
  fVar34 = fVar26 * fVar26;
  fVar23 = fVar6 * fVar6 + fVar5 * fVar5;
  fVar31 = fVar34 - (fVar23 + fVar33);
  fVar32 = fVar34 - (fVar23 + fVar33);
  fVar34 = fVar34 - (fVar23 + fVar33);
  fVar23 = _UNK_142e378f8 * fVar7 + _UNK_142e378f4 * fVar6 + _DAT_142e378f0 * fVar5;
  fVar23 = fVar23 + fVar23;
  fVar26 = fVar26 + fVar26;
  fVar19 = (fVar6 * _DAT_142e36f28 - fVar7 * 0.0) * fVar26 +
           fVar23 * fVar5 + fVar31 * _DAT_142e378f0;
  fVar21 = (fVar7 * 0.0 - fVar5 * _DAT_142e36f28) * fVar26 +
           fVar23 * fVar6 + fVar32 * _UNK_142e378f4;
  fVar22 = (fVar5 * 0.0 - fVar6 * 0.0) * fVar26 + fVar23 * fVar7 + fVar34 * _UNK_142e378f8;
  fVar23 = *(float *)(param_1 + 0x18);
  uVar10 = *(ulonglong *)(param_3 + 4);
  fVar30 = (float)uVar10;
  fVar33 = param_3[6];
  fVar28 = (float)*(undefined8 *)(param_1 + 0x1c);
  fVar29 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  fVar27 = fVar22 * (fVar29 - (float)((ulonglong)*(undefined8 *)(param_3 + 5) >> 0x20)) +
           (fVar23 - fVar30) * fVar19 + fVar21 * (fVar28 - (float)*(undefined8 *)(param_3 + 5));
  bVar2 = *(byte *)(param_2 + 0x59);
  uVar18 = (ulonglong)bVar2 - 1;
  if ((longlong)uVar18 < 0) {
    fVar35 = (float)uVar18;
  }
  else {
    fVar35 = (float)(int)uVar18;
  }
  lStack_1b0 = lStack_1b0 + (ulonglong)(uint)~piVar16[1] * 0x48;
  fVar39 = _DAT_142e36f28 - _DAT_142e36f28 / (float)bVar2;
  cStack_f1 = *(char *)(lStack_110 + 8);
  uVar1 = *(undefined4 *)(lStack_110 + 0x4c);
  uStack_18c = bVar2 - 1;
  uStack_1a8 = (ulonglong)(uStack_18c & 0xff);
  fStack_13c = _DAT_142e3a74c;
  uVar18 = 0;
  uStack_158 = uVar10;
  fStack_150 = fVar33;
  uStack_104 = param_4;
  while (uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20), uVar18 < bVar2) {
    uStack_1a0 = uVar18;
    if (2 < (byte)uStack_18c) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143011c40,0x28,&UNK_143011cb8);
    }
    fVar36 = ((float)(longlong)uVar18 / fVar35 + _DAT_142e36f38) *
             *(float *)(&UNK_1433132a0 + uStack_1a8 * 4) * fVar39;
    uStack_188 = (ulonglong *)uVar10;
    fStack_180 = fVar33;
    if (cStack_f1 == '\0') {
      pdb_140b77d90(&uStack_138,lStack_110,&uStack_188);
      fVar20 = (float)pdb_140a85220(&uStack_138);
      fVar20 = fVar36 / fVar20;
    }
    else {
      pdb_140b77d90(&uStack_138,lStack_110,&uStack_188);
      puVar11 = (ulonglong *)pdb_140a84d90(&uStack_138);
      uStack_188 = (ulonglong *)*puVar11;
      fStack_180 = *(float *)(puVar11 + 1);
      fStack_17c = *(float *)((longlong)puVar11 + 0xc);
      pbStack_178 = (byte *)puVar11[2];
      uVar9 = pdb_140df2280(&uStack_188,fVar30,fVar33);
      fVar20 = (float)pdb_140df05b0(&uStack_188,uVar9);
      fVar20 = (fVar36 / fVar20) * _DAT_142e37ae4;
    }
    pfVar12 = (float *)pdb_1409010f0(param_2,&UNK_143313228);
    fVar20 = fVar20 + *pfVar12;
    if (fVar20 <= _DAT_142e36f28) {
      if (fVar20 < 0.0) {
        fVar20 = fVar20 + _DAT_142e36f28;
      }
    }
    else {
      fVar20 = fVar20 + _DAT_142e36f34;
    }
    pdb_140a0a130(&uStack_138,lStack_1b0,fVar20,pfVar12[1],CONCAT44(uVar40,uVar1));
    fVar20 = fStack_12c;
    fVar37 = uStack_138._4_4_;
    fVar38 = fStack_130;
    if ((int)uStack_138 != 1) {
      fVar24 = fVar36 * _DAT_142e36f28;
      fVar25 = fVar36 * 0.0;
      fVar36 = fVar36 * 0.0;
      fVar38 = fVar7 * fVar36 + fVar6 * fVar25 + fVar5 * fVar24;
      fVar38 = fVar38 + fVar38;
      fVar20 = (fVar5 * fVar25 - fVar24 * fVar6) * fVar26 + fVar38 * fVar7 + fVar36 * fVar34 +
               fVar33;
      fVar37 = fVar30 + (fVar6 * fVar36 - fVar25 * fVar7) * fVar26 +
                        fVar38 * fVar5 + fVar24 * fVar31;
      fVar38 = (float)(uVar10 >> 0x20) +
               (fVar7 * fVar24 - fVar36 * fVar5) * fVar26 + fVar38 * fVar6 + fVar25 * fVar32;
    }
    if ((bVar2 == 3) && (uVar18 == 1)) {
      uStack_138 = &uStack_1a0;
      fStack_130 = 7.7239075;
      fStack_12c = 1.4013e-45;
      pbStack_128 = (byte *)&uStack_104;
      uStack_120 = pdb_140905500;
      pdb_140f60760(&uStack_188,&UNK_1433131e0,&uStack_138);
      pbVar14 = pbStack_178;
      pbStack_100 = (byte *)uStack_188;
      pbVar15 = (byte *)CONCAT44(fStack_17c,fStack_180);
      pdb_14007ee60();
      pbVar13 = pub_1406abab0(0x20,8);
      pbStack_148 = pbVar15;
      if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      fVar37 = fVar37 + _DAT_142f89640;
      fVar38 = fVar38 + _UNK_142f89644;
      pbVar13[0] = 1;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13[4] = 0;
      pbVar13[5] = 0;
      pbVar13[6] = 0;
      pbVar13[7] = 0;
      pbVar13[8] = 1;
      pbVar13[9] = 0;
      pbVar13[10] = 0;
      pbVar13[0xb] = 0;
      pbVar13[0xc] = 0;
      pbVar13[0xd] = 0;
      pbVar13[0xe] = 0;
      pbVar13[0xf] = 0;
      *(ulonglong *)(pbVar13 + 0x10) = CONCAT44(fVar38,fVar37);
      *(float *)(pbVar13 + 0x18) = fVar20 + 0.0;
      in_stack_fffffffffffffde8 = &UNK_143313240;
      pdb_1409baea0(&uStack_138,pbVar15,pbVar14,pbVar13,&UNK_143313240);
      uStack_168 = uStack_118;
      pbStack_178 = pbStack_128;
      uStack_170 = (undefined4)uStack_120;
      uStack_16c = uStack_120._4_4_;
      uStack_188 = uStack_138;
      fStack_180 = fStack_130;
      fStack_17c = fStack_12c;
      pdb_140b133a0(param_7,&uStack_188);
      uVar18 = 2;
      if (pbStack_100 != (byte *)0x0) {
        pub_1406abac0(pbStack_148,(ulonglong)pbStack_100,1);
      }
    }
    else {
      fVar36 = fVar38 - (fVar28 - fVar21 * fVar27);
      fVar24 = fVar37 - (fVar23 - fVar27 * fVar19);
      fVar25 = fVar20 - (fVar29 - fVar27 * fVar22);
      fVar36 = SQRT(fVar25 * fVar25 + fVar36 * fVar36 + fVar24 * fVar24);
      if (fVar36 < fStack_13c) {
        uStack_158 = CONCAT44(fVar38 + _UNK_142f89644,fVar37 + _DAT_142f89640);
        fStack_150 = fVar20 + 0.0;
        fStack_13c = fVar36;
      }
      uStack_138 = &uStack_1a0;
      fStack_130 = 7.7239075;
      fStack_12c = 1.4013e-45;
      pbStack_128 = (byte *)&uStack_104;
      uStack_120 = pdb_140905500;
      pdb_140f60760(&uStack_188,&UNK_1433131e0,&uStack_138);
      pbStack_100 = (byte *)uStack_188;
      pbVar15 = (byte *)CONCAT44(fStack_17c,fStack_180);
      pbStack_148 = pbStack_178;
      pdb_14007ee60();
      pbVar14 = pub_1406abab0(0x20,8);
      pbStack_198 = pbVar15;
      if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      pbVar14[0] = 1;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      pbVar14[4] = 0;
      pbVar14[5] = 0;
      pbVar14[6] = 0;
      pbVar14[7] = 0;
      pbVar14[8] = 1;
      pbVar14[9] = 0;
      pbVar14[10] = 0;
      pbVar14[0xb] = 0;
      pbVar14[0xc] = 0;
      pbVar14[0xd] = 0;
      pbVar14[0xe] = 0;
      pbVar14[0xf] = 0;
      *(ulonglong *)(pbVar14 + 0x10) = CONCAT44(fVar38 + _UNK_142f89644,fVar37 + _DAT_142f89640);
      *(float *)(pbVar14 + 0x18) = fVar20 + 0.0;
      in_stack_fffffffffffffde8 = &UNK_143313270;
      pdb_1409baea0(&uStack_138,pbVar15,pbStack_148,pbVar14,&UNK_143313270);
      uStack_168 = uStack_118;
      pbStack_178 = pbStack_128;
      uStack_170 = (undefined4)uStack_120;
      uStack_16c = uStack_120._4_4_;
      uStack_188 = uStack_138;
      fStack_180 = fStack_130;
      fStack_17c = fStack_12c;
      pdb_140b133a0(param_7,&uStack_188);
      uVar18 = uVar18 + 1;
      if (pbStack_100 != (byte *)0x0) {
        pub_1406abac0(pbStack_198,(ulonglong)pbStack_100,1);
      }
    }
  }
  uStack_138 = &uStack_158;
  fStack_130 = 7.6013107;
  fStack_12c = 1.4013e-45;
  pbStack_128 = (byte *)&uStack_104;
  uStack_120 = pdb_140905500;
  pdb_140f60760(&uStack_1c8,&UNK_1433131e0,&uStack_138);
  fStack_130 = fStack_150;
  uStack_138._0_4_ = (int)uStack_158;
  uStack_138._4_4_ = (float)(uStack_158 >> 0x20);
  pdb_14007ee60();
  pbVar15 = pub_1406abab0(0x20,8);
  pbStack_100 = pbStack_1c0;
  if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  pbVar15[0] = 1;
  pbVar15[1] = 0;
  pbVar15[2] = 0;
  pbVar15[3] = 0;
  pbVar15[4] = 0;
  pbVar15[5] = 0;
  pbVar15[6] = 0;
  pbVar15[7] = 0;
  pbVar15[8] = 1;
  pbVar15[9] = 0;
  pbVar15[10] = 0;
  pbVar15[0xb] = 0;
  pbVar15[0xc] = 0;
  pbVar15[0xd] = 0;
  pbVar15[0xe] = 0;
  pbVar15[0xf] = 0;
  *(ulonglong *)(pbVar15 + 0x10) = CONCAT44(uStack_138._4_4_,(int)uStack_138);
  *(float *)(pbVar15 + 0x18) = fStack_130;
  pdb_1409baea0(&uStack_138,pbStack_1c0,uStack_1b8,pbVar15,&UNK_1433131f8);
  uStack_168 = uStack_118;
  pbStack_178 = pbStack_128;
  uStack_170 = (undefined4)uStack_120;
  uStack_16c = uStack_120._4_4_;
  uStack_188 = (ulonglong *)CONCAT44(uStack_138._4_4_,(int)uStack_138);
  fStack_180 = fStack_130;
  fStack_17c = fStack_12c;
  pdb_140b133a0(param_7,&uStack_188);
  if (uStack_1c8 != 0) {
    pub_1406abac0(pbStack_100,uStack_1c8,1);
  }
  if ((param_5 != '\b') && (param_5 != '\x02')) {
    return 0;
  }
  return 1;
}

