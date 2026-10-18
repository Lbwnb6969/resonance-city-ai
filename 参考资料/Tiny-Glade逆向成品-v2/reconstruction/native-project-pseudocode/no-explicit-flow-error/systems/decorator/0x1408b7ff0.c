// VA 0x1408b7ff0, PDB extent 1309 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_stone_railings_assemble::add_corner_stone_railing_piece
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_stone_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_stone_railings_assemble::add_corner_stone_railing_piece
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_stone_railings_assemble.rs
   Extent: 1309 */

void pdb_1408b7ff0(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4,
                  longlong param_5,ulonglong param_6,undefined8 *param_7,ulonglong param_8,
                  longlong param_9,ulonglong param_10,char param_11,char param_12,float param_13,
                  float param_14)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined8 uStack_1c4;
  float fStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined1 auStack_118 [216];
  
  if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_1430158a0);
  }
  fVar6 = (float)((ulonglong)*param_7 >> 0x20) * param_14 + (float)*param_7 * param_13;
  uVar4 = 0;
  if (0.0 < fVar6) {
    uVar4 = param_6 - 1;
  }
  if (param_6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar4,param_6,&UNK_1430158b8);
  }
  if (param_8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar4,param_8,&UNK_1430158d0);
  }
  fVar5 = *(float *)(param_5 + uVar4 * 4);
  fVar8 = *(float *)(param_7 + uVar4);
  fVar9 = *(float *)((longlong)param_7 + uVar4 * 8 + 4);
  fVar10 = _DAT_142e36f28 / SQRT(fVar8 * fVar8 + fVar9 * fVar9);
  fStack_178 = (float)(_DAT_142e37820 ^ (uint)fVar9) * fVar10;
  fStack_174 = fVar8 * fVar10;
  pdb_140df4520(&fStack_188,&fStack_178);
  if (uVar4 < param_10) {
    fVar5 = fVar5 + _DAT_143015558;
    if (fVar5 <= _DAT_142e3b1d8) {
      fVar5 = _DAT_142e3b1d8;
    }
    fVar7 = *(float *)(param_9 + 8 + uVar4 * 0xc);
    fVar6 = *(float *)(&UNK_142f61070 + (ulonglong)(0.0 < fVar6) * 4);
    fStack_1e4 = fVar9 * fVar10;
    fStack_1e8 = fVar8 * fVar10;
    pdb_140df4520(&fStack_178,&fStack_1e8);
    uVar2 = *(undefined8 *)(param_9 + uVar4 * 0xc);
    fVar8 = fStack_178 * fVar6 * _DAT_143015620 * _DAT_142e36f60 + (float)uVar2;
    fVar9 = fStack_174 * fVar6 * _UNK_143015624 * _UNK_142e36f64 + (float)((ulonglong)uVar2 >> 0x20)
    ;
    fVar7 = fVar6 * fStack_170 * _DAT_1430155dc * _DAT_142e36f50 + fVar7;
    uVar1 = *(undefined4 *)(&UNK_143015900 + (ulonglong)(param_3 & 0xff) * 4);
    fVar11 = fStack_188 - fStack_184 * 0.0;
    fVar6 = fStack_184 * 0.0 - fStack_180;
    fVar10 = fStack_180 * 0.0 - fStack_188 * 0.0;
    if (param_11 == '\0') {
      fVar12 = fStack_180 * fVar5 * _DAT_142e36f38;
      uVar3 = pdb_14094c330(param_2);
      pdb_140951920(&fStack_178);
      fStack_1e8 = fStack_188 * _DAT_143015630;
      fStack_1e4 = fStack_184 * _UNK_143015634;
      fStack_1e0 = fStack_180 * _UNK_143015638;
      fStack_1dc = _DAT_142e36f28 * _UNK_14301563c;
      fStack_1d4 = _DAT_142e36f28 * _DAT_143015640;
      fStack_1d0 = fVar6 * _UNK_143015644;
      fStack_1cc = fVar10 * _UNK_143015648;
      fStack_1c8 = fVar11 * _UNK_14301564c;
      uStack_1c4 = CONCAT44(fStack_184 * fVar5 * _UNK_142e61234 + fVar9,
                            fStack_188 * fVar5 * _DAT_142e61230 + fVar8);
      uStack_1b8 = uStack_148;
      uStack_1b0 = uStack_140;
      uStack_1a8 = uStack_138;
      uStack_1a0 = uStack_130;
      uStack_194 = _DAT_142e378e0;
      uStack_18c = 0x40;
      uStack_1d8 = uVar1;
      fStack_1bc = fVar12 + fVar7;
      uStack_19c = (int)uVar4;
      uStack_198 = uVar3;
      pdb_14094c790(auStack_118,&fStack_1e8);
      pdb_1414aad80(param_4,auStack_118);
    }
    if (param_12 == '\0') {
      fVar12 = fStack_180 * fVar5 * _DAT_142e36f50;
      uVar3 = pdb_14094c330(param_2);
      pdb_140951920(&fStack_178);
      fStack_1e8 = fStack_188 * _DAT_143015630;
      fStack_1e4 = fStack_184 * _UNK_143015634;
      fStack_1e0 = fStack_180 * _UNK_143015638;
      fStack_1dc = _DAT_142e36f28 * _UNK_14301563c;
      fStack_1d4 = _DAT_142e36f28 * _DAT_143015640;
      fStack_1d0 = fVar6 * _UNK_143015644;
      fStack_1cc = fVar10 * _UNK_143015648;
      fStack_1c8 = fVar11 * _UNK_14301564c;
      uStack_1c4 = CONCAT44(fVar9 + fStack_184 * fVar5 * _UNK_142e36f64,
                            fVar8 + fStack_188 * fVar5 * _DAT_142e36f60);
      uStack_1b8 = uStack_148;
      uStack_1b0 = uStack_140;
      uStack_1a8 = uStack_138;
      uStack_1a0 = uStack_130;
      uStack_194 = _DAT_142e378e0;
      uStack_18c = 0x40;
      uStack_1d8 = uVar1;
      fStack_1bc = fVar7 + fVar12;
      uStack_19c = (int)uVar4;
      uStack_198 = uVar3;
      pdb_14094c790(auStack_118,&fStack_1e8);
      pdb_1414aad80(param_4,auStack_118);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar4,param_10,&UNK_1430158e8);
}

