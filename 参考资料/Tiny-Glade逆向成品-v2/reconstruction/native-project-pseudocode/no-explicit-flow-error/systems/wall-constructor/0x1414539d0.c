// VA 0x1414539d0, PDB extent 2273 bytes
// system_wall_constructor::construct_wooden_walls::stone_foundation_window_frames::emit_stone_foundation_brick_line<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/stone_foundation_window_frames.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::stone_foundation_window_frames::emit_stone_foundation_brick_line<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/stone_foundation_window_frames.rs
   Extent: 2273 */

void pdb_1414539d0(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  float param_5,undefined4 param_6,undefined8 param_7,ulonglong param_8,
                  float param_9,undefined4 param_10,uint param_11,uint param_12,longlong param_13,
                  char param_14,undefined8 param_15)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  undefined4 *puStack_208;
  undefined8 uStack_200;
  uint *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  byte *pbStack_1b8;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  uint uStack_180;
  uint uStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  ulonglong uStack_170;
  longlong lStack_168;
  byte *pbStack_160;
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong lStack_140;
  byte *pbStack_138;
  longlong lStack_130;
  longlong lStack_128;
  byte *pbStack_120;
  longlong lStack_118;
  ulonglong uStack_110;
  byte *pbStack_108;
  ulonglong uStack_100;
  char acStack_f1 [177];
  
  fVar13 = _DAT_142e37848;
  acStack_f1[1] = -2;
  acStack_f1[2] = -1;
  acStack_f1[3] = -1;
  acStack_f1[4] = -1;
  acStack_f1[5] = -1;
  acStack_f1[6] = -1;
  acStack_f1[7] = -1;
  acStack_f1[8] = -1;
  lStack_1a0 = param_13;
  fStack_178 = param_5;
  uStack_174 = param_6;
  uStack_148 = 0xbc32e9cd;
  uStack_180 = param_11;
  uStack_17c = param_12;
  acStack_f1[0] = param_14;
  if (((1 < param_8) && (_DAT_142e37848 < param_9)) &&
     (fVar2 = *(float *)(param_3 + 0x3c), _DAT_142e37848 < fVar2)) {
    uStack_1a8 = param_1;
    lStack_198 = param_3;
    uStack_144 = param_2;
    pdb_1424bd5f0(&lStack_1c0,param_7,param_8,param_10);
    fVar3 = _DAT_142e36f28;
    if (1 < uStack_1b0) {
      uStack_110 = 0;
      pbStack_108 = (byte *)0x4;
      uStack_100 = 0;
      lStack_128 = 0;
      pbStack_120 = (byte *)0x4;
      lStack_118 = 0;
      lStack_140 = 0;
      pbStack_138 = (byte *)0x4;
      lStack_130 = 0;
      pbStack_188 = pbStack_1b8;
      pbVar4 = pbStack_1b8;
      lVar6 = 0;
      uVar8 = uStack_1b0;
      uStack_190 = param_1;
      while( true ) {
        lVar5 = lVar6;
        if (uVar8 < 2) break;
        uVar8 = uVar8 - 1;
        pbVar1 = pbVar4 + 8;
        lVar6 = lVar5 + 1;
        fVar16 = (float)*(undefined8 *)pbVar4;
        fVar17 = (float)((ulonglong)*(undefined8 *)pbVar4 >> 0x20);
        fVar14 = (float)*(undefined8 *)(pbVar4 + 8) - fVar16;
        fVar15 = (float)((ulonglong)*(undefined8 *)(pbVar4 + 8) >> 0x20) - fVar17;
        fVar12 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
        pbVar4 = pbVar1;
        if (fVar13 < fVar12) {
          lStack_168 = lVar6;
          pbStack_160 = pbVar1;
          fVar13 = (float)pub_142e329c0(fVar12 / _DAT_14300bbe0);
          if (fVar13 <= fVar3) {
            fVar13 = fVar3;
          }
          uVar9 = (longlong)(fVar13 - _DAT_142e36f2c) & (longlong)fVar13 >> 0x3f | (longlong)fVar13;
          if (fVar13 < 0.0) {
            uVar9 = 0;
          }
          if (_DAT_142e36f30 < fVar13) {
            uVar9 = 0xffffffffffffffff;
          }
          bVar7 = false;
          uVar11 = 0;
          uStack_170 = uVar8;
          while ((uVar10 = uVar11, pbVar4 = pbStack_160, lVar6 = lStack_168, uVar8 = uStack_170,
                 fVar13 = _DAT_142e37848, !bVar7 && (uVar10 <= uVar9))) {
            bVar7 = uVar10 >= uVar9;
            uVar11 = uVar10 + (uVar10 < uVar9);
            if ((lVar5 == 0) || (uVar10 != 0)) {
              pdb_141483090(&uStack_228,param_4);
              uVar8 = uStack_100;
              if ((uint)uStack_228 == 1) {
                fVar13 = uStack_200._4_4_ * (float)uStack_210 +
                         (fVar3 - uStack_200._4_4_) * uStack_228._4_4_;
                fVar12 = uStack_200._4_4_ * (float)((ulonglong)uStack_210 >> 0x20) +
                         (fVar3 - uStack_200._4_4_) * (float)uStack_220;
              }
              else {
                fVar13 = 0.0;
                fVar12 = 0.0;
              }
              if (uStack_100 == uStack_110) {
                pdb_142db7820(&uStack_110);
              }
              lVar6 = lStack_118;
              *(float *)(pbStack_108 + uVar8 * 0xc) = fVar13;
              pbVar4 = pbStack_108 + uVar8 * 0xc + 4;
              pbVar4[0] = 0;
              pbVar4[1] = 0;
              pbVar4[2] = 0;
              pbVar4[3] = 0;
              *(float *)(pbStack_108 + uVar8 * 0xc + 8) = fVar12;
              uStack_100 = uVar8 + 1;
              if (lStack_118 == lStack_128) {
                pdb_142d89720(&lStack_128);
              }
              *(float *)(pbStack_120 + lVar6 * 4) = ((float)uVar10 / (float)uVar9) * fVar15 + fVar17
              ;
              lStack_118 = lVar6 + 1;
              fVar13 = (fVar14 * ((float)uVar10 / (float)uVar9) + fVar16) / fVar2;
              if (param_14 == '\0') {
                fVar12 = 0.0;
                if (0.0 <= fVar13) {
                  fVar12 = fVar13;
                }
                fVar13 = fVar3;
                if (fVar12 <= fVar3) {
                  fVar13 = fVar12;
                }
              }
              else {
                fVar13 = (float)pub_142e32a70(fVar13,fVar3);
                fVar13 = (float)(~-(uint)(fVar13 < 0.0) & (uint)fVar13 |
                                (uint)(fVar13 + fVar3) & -(uint)(fVar13 < 0.0));
              }
              lVar6 = lStack_130;
              fStack_158 = fVar13;
              if ((fVar13 < 0.0) || (fVar3 < fVar13)) {
                uStack_228 = &fStack_158;
                uStack_220._0_4_ = 7.7206726;
                uStack_220._4_4_ = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&uStack_228,&UNK_14330a400);
              }
              if (lStack_130 == lStack_140) {
                pdb_142d8d710(&lStack_140);
              }
              *(float *)(pbStack_138 + lVar6 * 4) = fVar13;
              lStack_130 = lVar6 + 1;
            }
          }
        }
      }
      if (1 < uStack_100) {
        uStack_1c8 = 0;
        uStack_228._0_4_ = (uint)uStack_190;
        uStack_228._4_4_ = (float)((ulonglong)uStack_190 >> 0x20);
        uVar8 = pdb_140315970(&uStack_228);
        uVar8 = ((ulonglong)param_11 + 0x9e3779b97f4a7c15 ^ uVar8 ^ 5000000) * -0x40a7b892e31b1a47;
        uVar8 = (uVar8 >> 0x20 ^ (ulonglong)param_12 + 0x9e3779b97f4a7c15 ^ uVar8) *
                -0x40a7b892e31b1a47;
        uVar8 = (uVar8 >> 0x20 ^ lStack_1a0 + 0x9e3779b97f4a7c15U ^ uVar8) * -0x40a7b892e31b1a47;
        uVar8 = (uVar8 ^ 0x9e3779b97f4a7c15 ^ uVar8 >> 0x20) * -0x40a7b892e31b1a47;
        lVar6 = (uVar8 ^ 0x9e3779b97f4a7c16 ^ uVar8 >> 0x20) * -0x40a7b892e31b1a47;
        uStack_228._4_4_ = (float)((ulonglong)lVar6 >> 0x20);
        uStack_228._0_4_ = (uint)uStack_228._4_4_ ^ (uint)lVar6;
        fVar13 = (float)pdb_140e02880(&uStack_228);
        fStack_150 = fVar13 * _DAT_142e37ad4 + _DAT_14300b140;
        uStack_14c = 0x3dcccccd;
        fStack_158 = param_5;
        uStack_154 = param_6;
        uStack_228 = (float *)acStack_f1;
        uStack_220 = &fStack_178;
        lStack_218 = lStack_198;
        puStack_208 = &param_9;
        uStack_200 = &uStack_1a8;
        puStack_1f8 = &uStack_180;
        puStack_1f0 = &param_13;
        puStack_1e8 = &uStack_1c8;
        uStack_1e0 = param_15;
        puStack_1d8 = &uStack_148;
        puStack_1d0 = &uStack_144;
        uStack_210 = param_4;
        pdb_141402cf0(&fStack_158,pbStack_120,lStack_118,pbStack_108,uStack_100,pbStack_138._0_4_,
                      (undefined4)lStack_130,&uStack_228);
      }
      if (lStack_140 != 0) {
        pub_1406abac0(pbStack_138,lStack_140 << 2,4);
      }
      if (lStack_128 != 0) {
        pub_1406abac0(pbStack_120,lStack_128 << 2,4);
      }
      if (uStack_110 != 0) {
        pub_1406abac0(pbStack_108,uStack_110 * 0xc,4);
      }
    }
    if (lStack_1c0 != 0) {
      pub_1406abac0(pbStack_1b8,lStack_1c0 << 3,4);
    }
  }
  return;
}

