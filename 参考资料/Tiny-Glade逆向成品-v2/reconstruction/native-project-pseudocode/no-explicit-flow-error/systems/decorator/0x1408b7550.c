// VA 0x1408b7550, PDB extent 2708 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_stone_railings_assemble::assemble_stone_railing_tips
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_stone_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_stone_railings_assemble::assemble_stone_railing_tips
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_stone_railings_assemble.rs
   Extent: 2708 */

void pdb_1408b7550(undefined8 param_1,undefined8 param_2,uint *param_3,ulonglong *param_4,
                  undefined4 param_5,undefined4 param_6,char param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,longlong param_14,undefined8 param_15,undefined8 param_16,
                  undefined2 param_17)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar10;
  undefined6 uVar11;
  float *pfVar12;
  float *pfVar13;
  bool bVar14;
  ulonglong uVar15;
  float *pfVar16;
  ulonglong uVar17;
  float *pfVar18;
  ulonglong uVar19;
  uint uVar20;
  byte *pbVar21;
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
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fStack_278;
  float fStack_274;
  undefined8 uStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined2 uStack_1f8;
  undefined8 uStack_1f0;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined8 uStack_1cc;
  longlong lStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined2 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined6 uStack_146;
  float *pfStack_140;
  longlong lStack_138;
  longlong lStack_130;
  byte *pbStack_128;
  longlong lStack_120;
  byte *pbStack_118;
  float *pfStack_110;
  byte *pbStack_108;
  longlong lStack_100;
  float fStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_148 = param_17;
  puStack_1a8 = &uStack_148;
  uStack_190 = param_16;
  uStack_1e8 = 0;
  uStack_188 = param_13;
  uStack_180 = param_14;
  uStack_178 = param_11;
  uStack_170 = param_12;
  uStack_168 = param_9;
  uStack_160 = param_10;
  uStack_158 = (undefined4)param_15;
  fStack_154 = (float)((ulonglong)param_15 >> 0x20);
  uStack_150 = &uStack_1e8;
  uVar20 = *param_3;
  pfVar18 = (float *)(ulonglong)uVar20;
  uVar4 = param_3[1];
  uStack_1a0 = param_2;
  uStack_198 = param_1;
  pdb_1408af5c0(&puStack_1a8,pfVar18,uVar4,0,0);
  pdb_1408af5c0(&puStack_1a8,uVar4,uVar20,param_14 + -1,1);
  uStack_238 = param_13;
  lStack_230 = param_14;
  uStack_228 = param_11;
  uStack_220 = param_12;
  uStack_218 = param_9;
  uStack_210 = param_10;
  uStack_208 = 0;
  uStack_200 = 2;
  uStack_1f8 = uStack_1e8;
  uStack_1f0 = 0;
  pdb_141498680(&lStack_130,&uStack_238);
  fVar10 = _DAT_142e36f50;
  if (param_7 == '\x03') {
    pbStack_118 = pbStack_128;
    pdb_1408bb8b0(pbStack_128,lStack_120,param_4,param_6,3,param_8);
  }
  else {
    uStack_f4 = (param_7 == '\x02') + 1;
    lStack_100 = lStack_130;
    pbStack_1b0 = pbStack_128 + lStack_120 * 0x48;
    pbStack_108 = pbStack_128;
    pbVar21 = pbStack_128;
    while (pbStack_128 = pbStack_108, lStack_130 = lStack_100, pbVar21 != pbStack_1b0) {
      fVar34 = *(float *)(pbVar21 + 0x2c);
      fVar39 = *(float *)(pbVar21 + 0x40);
      fVar35 = *(float *)(pbVar21 + 0x38) * fVar39 * fVar10;
      fVar38 = (float)*(undefined8 *)(pbVar21 + 0x30);
      fVar42 = fVar39 * *(float *)(pbVar21 + 0x3c) * _DAT_142e36f60;
      fVar43 = fVar39 * (float)((ulonglong)*(undefined8 *)(pbVar21 + 0x30) >> 0x20) * _UNK_142e36f64
      ;
      fVar39 = *(float *)(pbVar21 + 0x28);
      pdb_140de9410(&uStack_1e8,*(undefined4 *)(pbVar21 + 8),*(undefined4 *)(pbVar21 + 0xc));
      uVar11 = uStack_1e6;
      fVar22 = fVar34 + fVar35;
      fVar34 = fVar34 - fVar35;
      fVar40 = fVar38 + fVar42;
      fVar41 = fVar39 + fVar43;
      fVar38 = fVar38 - fVar42;
      fVar39 = fVar39 - fVar43;
      fVar35 = SQRT((fVar22 - fVar34) * (fVar22 - fVar34) + (fVar41 - fVar39) * (fVar41 - fVar39) +
                    (fVar40 - fVar38) * (fVar40 - fVar38));
      fVar42 = fVar35 / _DAT_142e3c620;
      pbVar21 = pbVar21 + 0x48;
      uVar20 = 0;
      uVar15 = 0;
      if (0.0 <= fVar42) {
        uVar15 = (longlong)(fVar42 - _DAT_142e36f2c) & (longlong)fVar42 >> 0x3f | (longlong)fVar42;
      }
      fVar43 = fVar35 * _DAT_142e37988;
      if (_DAT_142e3787c <= fVar35 * _DAT_142e37988) {
        fVar43 = _DAT_142e3787c;
      }
      if (_DAT_142e36f30 < fVar42) {
        uVar15 = 0xffffffffffffffff;
      }
      lStack_1c0 = uVar15 + 1 + (ulonglong)(uVar15 == 0);
      uVar9 = CONCAT62(uStack_1e6,uStack_1e8);
      fStack_f8 = fStack_1e0;
      fVar42 = fStack_1dc * _DAT_1430155f0;
      fVar24 = fStack_1d8 * _UNK_1430155f4;
      fVar25 = fStack_1d4 * _UNK_1430155f8;
      fVar26 = fStack_1d0 * _UNK_1430155fc;
      fVar27 = (float)uStack_1cc * _DAT_143015600;
      fVar30 = (float)((ulonglong)uStack_1cc >> 0x20) * _UNK_143015604;
      pbStack_1b8 = pbVar21;
      for (; uVar20 < uStack_f4; uVar20 = uVar20 + 1) {
        pdb_140de8290(&uStack_148,lStack_1c0,fVar43 / fVar35,param_4,&UNK_143015888);
        fVar28 = ((float)(int)uVar20 + _DAT_142e36f28) * _DAT_143015180;
        pfStack_110 = pfStack_140;
        if (lStack_138 != 0) {
          pfVar1 = pfStack_140 + lStack_138;
          fVar23 = ((float)(int)uVar20 + _DAT_142e36f28) * 0.0;
          bVar14 = true;
          pfVar13 = pfStack_140;
          pfVar16 = pfVar18;
          do {
            pfVar12 = pfVar13 + 1;
            pfVar18 = pfVar13;
            if (bVar14) {
              pfVar18 = pfVar16;
              if (pfVar12 == pfVar1) break;
              pfVar16 = pfVar13;
              pfVar18 = pfVar12;
              pfVar12 = pfVar13 + 2;
            }
            pfVar13 = pfVar12;
            fVar2 = *pfVar18;
            fVar3 = *pfVar16;
            fVar46 = _DAT_142e37950 - fVar3;
            fVar47 = _UNK_142e37954 - fVar2;
            fVar36 = fVar34 * fVar3 + fVar22 * fVar46 + fVar28;
            fVar37 = fVar34 * fVar2 + fVar22 * fVar47 + fVar28;
            fVar44 = fVar36 * _DAT_142e36f60;
            fVar45 = fVar37 * _UNK_142e36f64;
            uStack_158 = pdb_14094c330(param_5);
            uVar19 = *param_4;
            uVar15 = uVar19 + 0xa0761d6478bd642f;
            *param_4 = uVar15;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar15 ^ 0xe7037ed1a0b428db;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            uVar17 = SUB168(auVar5 * auVar7,8) ^ SUB168(auVar5 * auVar7,0);
            if ((uint)((int)uVar17 * 1000) < 0x128) {
              uVar19 = uVar19 + 0x40ec3ac8f17ac85e;
              do {
                uVar15 = uVar15 + 0xa0761d6478bd642f;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar19 ^ 0xe7037ed1a0b428db;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar19;
                uVar17 = SUB168(auVar6 * auVar8,8) ^ SUB168(auVar6 * auVar8,0);
                uVar19 = uVar19 + 0xa0761d6478bd642f;
              } while ((uint)((int)uVar17 * 1000) < 0x128);
              *param_4 = uVar15;
            }
            fVar29 = fVar3 * fVar38 + fVar46 * fVar40 + fVar23;
            fVar31 = fVar3 * fVar39 + fVar46 * fVar41 + fVar23;
            fVar46 = fVar2 * fVar38 + fVar47 * fVar40 + fVar23;
            fVar47 = fVar2 * fVar39 + fVar47 * fVar41 + fVar23;
            fVar32 = fVar29 - fVar46;
            fVar33 = fVar31 - fVar47;
            fVar36 = fVar36 - fVar37;
            fVar36 = SQRT(fVar33 * fVar33 + fVar36 * fVar36 + fVar32 * fVar32);
            fStack_278 = (float)uVar9;
            fStack_274 = (float)((uint6)uVar11 >> 0x10);
            uStack_178 = 0;
            uStack_170 = 0;
            puStack_1a8 = (undefined2 *)CONCAT44(fVar36 * fStack_274,fVar36 * fStack_278);
            uStack_1a0 = CONCAT44(fVar42,fVar36 * fStack_f8);
            uStack_198 = CONCAT44(fVar25,fVar24);
            uStack_190 = CONCAT44(fVar27,fVar26);
            uStack_188 = CONCAT44(fVar31 * fVar10 + fVar47 * fVar10,fVar30);
            uStack_180 = CONCAT44(fVar46 * fVar10 + fVar29 * fVar10,fVar45 + fVar44 + _UNK_143015614
                                 );
            fStack_154 = fVar3 * fVar35;
            uStack_150._0_4_ = fVar2 * fVar35;
            uStack_168 = _DAT_1430155a0;
            uStack_160 = CONCAT44((int)((uVar17 & 0xffffffff) * 1000 >> 0x20),0xc2c80000);
            uStack_150._4_4_ = 0x40;
            pdb_14094c790(&uStack_238,&puStack_1a8);
            pdb_1414aad80(param_8,&uStack_238);
            bVar14 = false;
            pfVar16 = pfVar18;
          } while (pfVar13 != pfVar1);
        }
        pbVar21 = pbStack_1b8;
        if (CONCAT62(uStack_146,uStack_148) != 0) {
          pub_1406abac0((byte *)pfStack_110,CONCAT62(uStack_146,uStack_148) << 2,4);
        }
      }
    }
  }
  if (lStack_130 != 0) {
    pub_1406abac0(pbStack_128,lStack_130 * 0x48,8);
  }
  return;
}

