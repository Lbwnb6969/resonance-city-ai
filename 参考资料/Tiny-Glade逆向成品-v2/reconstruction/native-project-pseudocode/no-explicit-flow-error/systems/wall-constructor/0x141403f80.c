// VA 0x141403f80, PDB extent 1880 bytes
// system_wall_constructor::arch_walker::ArchWalker::walk<system_wall_constructor::construct_playermade_stairs::brackets::construct_playermade_stair_brackets::closure_env$8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/arch_walker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141404147) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::arch_walker::ArchWalker::walk<system_wall_constructor::construct_playermade_stairs::brackets::construct_playermade_stair_brackets::closure_env$8>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/arch_walker.rs
   Extent: 1880 */

void pdb_141403f80(longlong param_1,float *param_2,ulonglong param_3,float *param_4,
                  ulonglong param_5,float *param_6,ulonglong param_7,undefined8 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_1c0;
  undefined8 uStack_1bc;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  ulonglong uStack_188;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong lStack_158;
  ulonglong uStack_150;
  undefined1 auStack_144 [8];
  undefined4 uStack_13c;
  float *pfStack_138;
  code *pcStack_130;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143307160);
  }
  if (param_3 != 0) {
    fVar6 = *param_4;
    fVar10 = param_4[2];
    fVar11 = param_4[1];
    fVar13 = *param_2;
    uStack_1bc = CONCAT44(uStack_1bc._4_4_,fVar10);
    fStack_1c0 = fVar6;
    uStack_150 = param_3;
    pdb_140df4540(&uStack_180,&fStack_1c0,fVar11 + fVar13);
    uVar3 = uStack_150;
    if (param_5 < uStack_150) {
      uVar3 = param_5;
    }
    fVar9 = 0.0;
    uVar2 = (ulonglong)(uVar3 != 0);
    if (uVar2 < uVar3) {
      uVar1 = uVar2 + 1;
      if (uVar3 == 0) {
        uVar2 = uVar1;
        uVar1 = 2;
      }
      while( true ) {
        fStack_1c0 = param_4[uVar2 * 3];
        uStack_1bc = CONCAT44(uStack_1bc._4_4_,param_4[uVar2 * 3 + 2]);
        pdb_140df4540(&fStack_174,&fStack_1c0,param_4[uVar2 * 3 + 1] + param_2[uVar2]);
        fVar9 = fVar9 + SQRT((fStack_16c - fStack_178) * (fStack_16c - fStack_178) +
                             (fStack_170 - uStack_180._4_4_) * (fStack_170 - uStack_180._4_4_) +
                             (fStack_174 - (float)uStack_180) * (fStack_174 - (float)uStack_180));
        fStack_178 = fStack_16c;
        uStack_180 = CONCAT44(fStack_170,fStack_174);
        if (uVar3 <= uVar1) break;
        uVar2 = uVar1;
        uVar1 = uVar1 + 1;
      }
    }
    fVar4 = (float)pub_142e32a40(fVar9 / *(float *)(param_1 + 8) + _DAT_142e36f50);
    if (fVar4 <= _DAT_142e36f28) {
      fVar4 = _DAT_142e36f28;
    }
    uVar2 = 0;
    if (0.0 <= fVar4) {
      uVar2 = (longlong)(fVar4 - _DAT_142e36f2c) & (longlong)fVar4 >> 0x3f | (longlong)fVar4;
    }
    uVar1 = 0xffffffffffffffff;
    if (fVar4 <= _DAT_142e36f30) {
      uVar1 = uVar2;
    }
    if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143307190);
    }
    fVar9 = fVar9 / (float)uVar1;
    fVar4 = *param_6;
    uStack_1bc = CONCAT44(uStack_1bc._4_4_,fVar10);
    fStack_1c0 = fVar6;
    pdb_140df4540(&fStack_198,&fStack_1c0,fVar11 + fVar13);
    if (param_7 < uVar3) {
      uVar3 = param_7;
    }
    uStack_188 = 0;
    fVar13 = 0.0;
    uVar2 = 1;
    lStack_158 = 2;
    fVar6 = fStack_198;
    fVar10 = fStack_194;
    fVar11 = fStack_190;
    fStack_1a0 = fVar4;
    if (1 < uVar3) {
      do {
        fStack_19c = param_6[uVar2];
        fStack_1c0 = param_4[uVar2 * 3];
        uStack_1bc = CONCAT44(uStack_1bc._4_4_,param_4[uVar2 * 3 + 2]);
        pdb_140df4540(&fStack_164,&fStack_1c0,param_4[uVar2 * 3 + 1] + param_2[uVar2]);
        fStack_118 = fStack_160;
        fStack_114 = fStack_15c;
        fStack_128 = fStack_194;
        fStack_124 = fStack_190;
        auStack_f8 = ZEXT416((uint)fStack_164);
        auStack_108 = ZEXT416((uint)fStack_198);
        uStack_110 = 0;
        uStack_120 = 0;
        fVar8 = SQRT((fStack_15c - fStack_190) * (fStack_15c - fStack_190) +
                     (fStack_160 - fStack_194) * (fStack_160 - fStack_194) +
                     (fStack_164 - fStack_198) * (fStack_164 - fStack_198));
        fVar5 = fVar13 + fVar8;
        if (fVar9 < fVar5) {
          fVar12 = 0.0;
          fVar7 = fVar4;
          do {
            fVar4 = fStack_1a0;
            fVar5 = fVar9 - fVar13;
            if (fVar9 - fVar13 <= 0.0) {
              fVar5 = 0.0;
            }
            fVar12 = fVar5 + fVar12;
            fVar5 = fVar12 / fVar8;
            uStack_1bc = CONCAT44(fVar11,fVar10);
            fStack_1c0 = fVar6;
            fVar6 = (float)pdb_140dea7c0(param_1,fStack_19c,fStack_1a0);
            fVar4 = (float)pdb_140dea610(param_1,fVar6 * fVar5 + fVar4);
            fStack_168 = fVar4;
            if ((fVar4 < 0.0) || (_DAT_142e36f28 < fVar4)) {
              pfStack_138 = &fStack_168;
              pcStack_130 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&pfStack_138,&UNK_143307148);
            }
            fVar6 = _DAT_142e36f28 - fVar5;
            fVar10 = fVar6 * fStack_128 + fVar5 * fStack_118;
            fVar11 = fVar6 * fStack_124 + fVar5 * fStack_114;
            fVar6 = fVar6 * (float)auStack_108._0_4_ + fVar5 * (float)auStack_f8._0_4_;
            fVar13 = fVar13 - fVar9;
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
            fStack_1b4 = fVar6;
            fStack_1b0 = fVar10;
            fStack_1ac = fVar11;
            fStack_1a8 = fVar7;
            fStack_1a4 = fVar4;
            pdb_1414054c0(param_8,&fStack_1c0,&fStack_1b4,fVar7,fVar4);
            fVar5 = (fVar8 - fVar12) + fVar13;
            fVar7 = fVar4;
          } while (fVar9 < fVar5);
        }
        if (fVar5 < 0.0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1433070d0,0x26,&UNK_143307130);
        }
        uVar2 = uStack_188 + lStack_158;
        fStack_190 = fStack_15c;
        fStack_198 = fStack_164;
        fStack_194 = fStack_160;
        fStack_1a0 = fStack_19c;
        lStack_158 = 1;
        fVar13 = fVar5;
        uStack_188 = uVar2;
      } while (uVar2 < uVar3);
    }
    if (fVar9 * *(float *)(param_1 + 0xc) < fVar13) {
      uVar3 = param_5 - 1;
      if (param_7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar3,param_7,&UNK_1433071a8);
      }
      fStack_1c0 = param_4[uVar3 * 3];
      fVar13 = param_6[param_5 - 1];
      uStack_1bc = CONCAT44(uStack_1bc._4_4_,param_4[uVar3 * 3 + 2]);
      pdb_140df4540(auStack_144,&fStack_1c0,param_2[uStack_150 - 1] + param_4[uVar3 * 3 + 1]);
      uStack_1bc = CONCAT44(fVar11,fVar10);
      fStack_1b4 = auStack_144._0_4_;
      fStack_1b0 = auStack_144._4_4_;
      fStack_1ac = (float)uStack_13c;
      fStack_1c0 = fVar6;
      fStack_1a8 = fVar4;
      fStack_1a4 = fVar13;
      pdb_1414054c0(param_8,&fStack_1c0,&fStack_1b4,fVar4,fVar13);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_143307178);
}

