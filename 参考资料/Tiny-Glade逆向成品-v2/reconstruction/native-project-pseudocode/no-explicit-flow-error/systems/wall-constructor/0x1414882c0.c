// VA 0x1414882c0, PDB extent 1306 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::split_oversized_board_piece
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::split_oversized_board_piece
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 1306 */

longlong *
pdb_1414882c0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,char param_5
             ,longlong param_6)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong lStack_108;
  byte *pbStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar12 = *(float *)(param_6 + 0x10);
  fVar13 = *(float *)(param_6 + 0x14);
  pdb_14007ee60();
  pbStack_100 = pub_1406abab0(0x10,4);
  if (pbStack_100 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x10);
  }
  if (fVar12 <= _DAT_142e37ad4) {
    fVar12 = _DAT_142e37ad4;
  }
  if (fVar13 <= _DAT_142e37ad4) {
    fVar13 = _DAT_142e37ad4;
  }
  uVar3 = param_4[1];
  *(undefined8 *)pbStack_100 = *param_4;
  *(undefined8 *)(pbStack_100 + 8) = uVar3;
  fVar4 = _DAT_142e37988;
  lStack_108 = 1;
  lStack_130 = 0;
  lStack_128 = 4;
  lStack_120 = 0;
  lStack_f8 = 1;
  do {
    while( true ) {
      lStack_f8 = lStack_f8 + -1;
      pfVar2 = (float *)(pbStack_100 + lStack_f8 * 0x10);
      fStack_118 = *pfVar2;
      fStack_114 = pfVar2[1];
      fStack_110 = pfVar2[2];
      fStack_10c = pfVar2[3];
      if (param_5 != '\0') break;
      fVar11 = (float)pdb_140deec50(&fStack_118);
      fVar5 = fStack_10c;
      fVar15 = fStack_114;
      lVar8 = lStack_120;
      if (fVar11 <= fVar12) {
        if (lStack_120 == lStack_130) {
          pdb_142d7ef30(&lStack_130);
        }
        goto LAB_1414883c0;
      }
      uStack_138 = param_2;
      uVar6 = pdb_140315970(&uStack_138);
      uStack_140 = uVar6 ^ param_3 * 0xf4243 ^
                   (ulonglong)(uint)fVar5 * 0x17cfb ^ (ulonglong)(uint)fVar15 * 0x10c6f;
      fVar10 = (float)pdb_140e02880(&uStack_140);
      lVar8 = lStack_f8;
      fVar9 = fStack_110;
      fVar14 = fStack_118;
      fVar10 = fVar10 * _DAT_142e3798c;
      if (lStack_f8 == lStack_108) {
        pdb_142d7ef30(&lStack_108);
      }
      fVar11 = fVar11 * (fVar10 + fVar4) + fVar15;
      lVar7 = lVar8 * 0x10;
      *(float *)(pbStack_100 + lVar7) = fVar14;
      *(float *)(pbStack_100 + lVar7 + 4) = fVar11;
      *(float *)(pbStack_100 + lVar7 + 8) = fVar9;
      *(float *)(pbStack_100 + lVar7 + 0xc) = fVar5;
      lVar7 = lVar8 + 1;
      if (lVar7 == lStack_108) {
        lStack_f8 = lVar7;
        pdb_142d7ef30(&lStack_108);
      }
LAB_1414885d4:
      lVar7 = lVar7 * 0x10;
      *(float *)(pbStack_100 + lVar7) = fVar14;
      *(float *)(pbStack_100 + lVar7 + 4) = fVar15;
      *(float *)(pbStack_100 + lVar7 + 8) = fVar9;
      *(float *)(pbStack_100 + lVar7 + 0xc) = fVar11;
      lStack_f8 = lVar8 + 2;
      if (lStack_f8 == 0) {
        lStack_f8 = 0;
        goto LAB_14148864d;
      }
    }
    fVar9 = (float)pdb_140deec10(&fStack_118);
    fVar5 = fStack_110;
    fVar14 = fStack_118;
    lVar8 = lStack_120;
    if (fVar13 < fVar9) {
      uStack_138 = param_2;
      uVar6 = pdb_140315970(&uStack_138);
      uStack_140 = uVar6 ^ param_3 * 0xf4243 ^
                   (ulonglong)(uint)fVar5 * 0x17cfb ^ (ulonglong)(uint)fVar14 * 0x10c6f;
      fVar10 = (float)pdb_140e02880(&uStack_140);
      lVar8 = lStack_f8;
      fVar11 = fStack_10c;
      fVar15 = fStack_114;
      fVar16 = (_DAT_142e36f28 - fVar10) * _DAT_142e3c608;
      fVar10 = fVar10 * _DAT_143011010;
      if (lStack_f8 == lStack_108) {
        pdb_142d7ef30(&lStack_108);
      }
      fVar9 = fVar9 * (fVar10 + fVar16) + fVar14;
      lVar7 = lVar8 * 0x10;
      *(float *)(pbStack_100 + lVar7) = fVar9;
      *(float *)(pbStack_100 + lVar7 + 4) = fVar15;
      *(float *)(pbStack_100 + lVar7 + 8) = fVar5;
      *(float *)(pbStack_100 + lVar7 + 0xc) = fVar11;
      lVar7 = lVar8 + 1;
      if (lVar7 == lStack_108) {
        lStack_f8 = lVar7;
        pdb_142d7ef30(&lStack_108);
      }
      goto LAB_1414885d4;
    }
    if (lStack_120 == lStack_130) {
      pdb_142d7ef30(&lStack_130);
    }
LAB_1414883c0:
    puVar1 = (undefined8 *)(lStack_128 + lVar8 * 0x10);
    *puVar1 = CONCAT44(fStack_114,fStack_118);
    puVar1[1] = CONCAT44(fStack_10c,fStack_110);
    lStack_120 = lVar8 + 1;
  } while (lStack_f8 != 0);
LAB_14148864d:
  param_1[2] = lStack_120;
  *param_1 = lStack_130;
  param_1[1] = lStack_128;
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_100,lStack_108 << 4,4);
  }
  return param_1;
}

