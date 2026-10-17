// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::split_oversized_board_piece
// VA 0x1414882c0, PDB extent 1306 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::split_oversized_board_piece
   Extent: 1306 bytes. No whole-program auto-analysis. */

undefined4 *
pdb_1414882c0(undefined4 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             char param_5,longlong param_6)

{
  undefined8 *puVar1;
  float *pfVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong lStack_108;
  undefined8 *puStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar14 = *(float *)(param_6 + 0x10);
  fVar15 = *(float *)(param_6 + 0x14);
  pdb_14007ee60();
  puStack_100 = (undefined8 *)func_0x0001406abab0(0x10,4);
  if (puStack_100 == (undefined8 *)0x0) {
    pdb_142dc7e11(4,0x10);
    pcVar3 = (code *)swi(3);
    puVar8 = (undefined4 *)(*pcVar3)();
    return puVar8;
  }
  if (fVar14 <= _DAT_142e37ad4) {
    fVar14 = _DAT_142e37ad4;
  }
  if (fVar15 <= _DAT_142e37ad4) {
    fVar15 = _DAT_142e37ad4;
  }
  uVar4 = param_4[1];
  *puStack_100 = *param_4;
  puStack_100[1] = uVar4;
  fVar5 = _DAT_142e37988;
  lStack_108 = 1;
  uStack_130 = 0;
  uStack_128 = 4;
  lStack_120 = 0;
  lStack_f8 = 1;
  do {
    while( true ) {
      lStack_f8 = lStack_f8 + -1;
      pfVar2 = (float *)(puStack_100 + lStack_f8 * 2);
      fStack_118 = *pfVar2;
      fStack_114 = pfVar2[1];
      fStack_110 = pfVar2[2];
      fStack_10c = pfVar2[3];
      if (param_5 != '\0') break;
      fVar13 = (float)pdb_140deec50(&fStack_118);
      fVar6 = fStack_10c;
      fVar17 = fStack_114;
      lVar9 = lStack_120;
      if (fVar13 <= fVar14) {
        if (lStack_120 == uStack_130) {
          pdb_142d7ef30(&uStack_130);
        }
        goto LAB_1414883c0;
      }
      uStack_138 = param_2;
      uVar7 = pdb_140315970(&uStack_138);
      uStack_140 = uVar7 ^ param_3 * 0xf4243 ^
                   (ulonglong)(uint)fVar6 * 0x17cfb ^ (ulonglong)(uint)fVar17 * 0x10c6f;
      fVar12 = (float)pdb_140e02880(&uStack_140);
      lVar9 = lStack_f8;
      fVar11 = fStack_110;
      fVar16 = fStack_118;
      fVar12 = fVar12 * _DAT_142e3798c;
      if (lStack_f8 == lStack_108) {
        pdb_142d7ef30(&lStack_108);
      }
      fVar13 = fVar13 * (fVar12 + fVar5) + fVar17;
      *(float *)(puStack_100 + lVar9 * 2) = fVar16;
      *(float *)((longlong)puStack_100 + lVar9 * 0x10 + 4) = fVar13;
      *(float *)(puStack_100 + lVar9 * 2 + 1) = fVar11;
      *(float *)((longlong)puStack_100 + lVar9 * 0x10 + 0xc) = fVar6;
      lVar10 = lVar9 + 1;
      if (lVar10 == lStack_108) {
        lStack_f8 = lVar10;
        pdb_142d7ef30(&lStack_108);
      }
LAB_1414885d4:
      *(float *)(puStack_100 + lVar10 * 2) = fVar16;
      *(float *)((longlong)puStack_100 + lVar10 * 0x10 + 4) = fVar17;
      *(float *)(puStack_100 + lVar10 * 2 + 1) = fVar11;
      *(float *)((longlong)puStack_100 + lVar10 * 0x10 + 0xc) = fVar13;
      lStack_f8 = lVar9 + 2;
      if (lStack_f8 == 0) {
        lStack_f8 = 0;
        goto LAB_14148864d;
      }
    }
    fVar11 = (float)pdb_140deec10(&fStack_118);
    fVar6 = fStack_110;
    fVar16 = fStack_118;
    lVar9 = lStack_120;
    if (fVar15 < fVar11) {
      uStack_138 = param_2;
      uVar7 = pdb_140315970(&uStack_138);
      uStack_140 = uVar7 ^ param_3 * 0xf4243 ^
                   (ulonglong)(uint)fVar6 * 0x17cfb ^ (ulonglong)(uint)fVar16 * 0x10c6f;
      fVar12 = (float)pdb_140e02880(&uStack_140);
      lVar9 = lStack_f8;
      fVar13 = fStack_10c;
      fVar17 = fStack_114;
      fVar18 = (_DAT_142e36f28 - fVar12) * _DAT_142e3c608;
      fVar12 = fVar12 * _DAT_143011010;
      if (lStack_f8 == lStack_108) {
        pdb_142d7ef30(&lStack_108);
      }
      fVar11 = fVar11 * (fVar12 + fVar18) + fVar16;
      *(float *)(puStack_100 + lVar9 * 2) = fVar11;
      *(float *)((longlong)puStack_100 + lVar9 * 0x10 + 4) = fVar17;
      *(float *)(puStack_100 + lVar9 * 2 + 1) = fVar6;
      *(float *)((longlong)puStack_100 + lVar9 * 0x10 + 0xc) = fVar13;
      lVar10 = lVar9 + 1;
      if (lVar10 == lStack_108) {
        lStack_f8 = lVar10;
        pdb_142d7ef30(&lStack_108);
      }
      goto LAB_1414885d4;
    }
    if (lStack_120 == uStack_130) {
      pdb_142d7ef30(&uStack_130);
    }
LAB_1414883c0:
    puVar1 = (undefined8 *)(uStack_128 + lVar9 * 0x10);
    *puVar1 = CONCAT44(fStack_114,fStack_118);
    puVar1[1] = CONCAT44(fStack_10c,fStack_110);
    lStack_120 = lVar9 + 1;
  } while (lStack_f8 != 0);
LAB_14148864d:
  *(longlong *)(param_1 + 4) = lStack_120;
  *param_1 = (undefined4)uStack_130;
  param_1[1] = uStack_130._4_4_;
  param_1[2] = (undefined4)uStack_128;
  param_1[3] = uStack_128._4_4_;
  if (lStack_108 != 0) {
    func_0x0001406abac0(puStack_100,lStack_108 << 4,4);
  }
  return param_1;
}

