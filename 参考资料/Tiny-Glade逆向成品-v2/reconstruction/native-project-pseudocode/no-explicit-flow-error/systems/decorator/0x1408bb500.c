// VA 0x1408bb500, PDB extent 933 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::add_corner_wooden_railing_piece
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::add_corner_wooden_railing_piece
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 933 */

void pdb_1408bb500(undefined8 param_1,undefined4 param_2,byte param_3,undefined8 param_4,
                  longlong param_5,ulonglong param_6,undefined8 *param_7,ulonglong param_8,
                  longlong param_9,ulonglong param_10,char param_11,char param_12,float param_13,
                  float param_14)

{
  float fVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_e8;
  float fStack_e0;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined1 auStack_c4 [132];
  
  if (1 < param_3) {
    if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143015cb0);
    }
    fVar5 = (float)((ulonglong)*param_7 >> 0x20) * param_14 + (float)*param_7 * param_13;
    uVar3 = 0;
    if (0.0 < fVar5) {
      uVar3 = param_6 - 1;
    }
    if (param_6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar3,param_6,&UNK_143015cc8);
    }
    if (param_8 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar3,param_8,&UNK_143015ce0);
    }
    fVar4 = *(float *)(param_5 + uVar3 * 4);
    fVar10 = *(float *)(param_7 + uVar3);
    fVar1 = *(float *)((longlong)param_7 + uVar3 * 8 + 4);
    fVar7 = _DAT_142e36f28 / SQRT(fVar10 * fVar10 + fVar1 * fVar1);
    uStack_e8._0_4_ = (float)(_DAT_142e37820 ^ (uint)fVar1) * fVar7;
    fVar10 = fVar10 * fVar7;
    uStack_e8._4_4_ = fVar10;
    pdb_140df4520(auStack_d8,&uStack_e8);
    if (param_10 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar3,param_10,&UNK_143015cf8);
    }
    fVar4 = fVar4 + _DAT_143015558;
    if (fVar4 <= _DAT_142e3b1d8) {
      fVar4 = _DAT_142e3b1d8;
    }
    fVar6 = *(float *)(param_9 + 8 + uVar3 * 0xc);
    fVar5 = *(float *)(&UNK_142f61070 + (ulonglong)(0.0 < fVar5) * 4);
    fStack_cc = fVar10;
    fStack_c8 = fVar1 * fVar7;
    pdb_140df4520(&uStack_e8,&fStack_cc);
    uVar2 = *(undefined8 *)(param_9 + uVar3 * 0xc);
    fVar8 = (float)uStack_e8 * fVar5 * _DAT_143015620 * _DAT_142e36f60 + (float)uVar2;
    fVar9 = uStack_e8._4_4_ * fVar5 * _UNK_143015624 * _UNK_142e36f64 +
            (float)((ulonglong)uVar2 >> 0x20);
    fVar6 = fVar5 * fStack_e0 * _DAT_1430155dc * _DAT_142e36f50 + fVar6;
    uStack_e8 = CONCAT44(fVar1 * fVar7,fVar10);
    pdb_140df4520(auStack_c4,&uStack_e8);
    if (param_11 == '\0') {
      fStack_e0 = fStack_d0 * fVar4 * _DAT_142e36f38 + fVar6 + 0.0;
      uStack_e8 = CONCAT44(fVar4 * auStack_d8._4_4_ * _UNK_142e61234 + fVar9 + _UNK_14300c2c4,
                           fVar4 * auStack_d8._0_4_ * _DAT_142e61230 + fVar8 + _DAT_14300c2c0);
      pdb_1408b95b0(param_1,param_2,param_4,&uStack_e8,auStack_c4,param_3,0,0);
    }
    if (param_12 == '\0') {
      fStack_e0 = fVar6 + fVar4 * fStack_d0 * _DAT_142e36f50 + 0.0;
      uStack_e8 = CONCAT44(fVar9 + auStack_d8._4_4_ * fVar4 * _UNK_142e36f64 + _UNK_14300c2c4,
                           fVar8 + auStack_d8._0_4_ * fVar4 * _DAT_142e36f60 + _DAT_14300c2c0);
      pdb_1408b95b0(param_1,param_2,param_4,&uStack_e8,auStack_c4,param_3,0,0);
    }
  }
  return;
}

