// VA 0x1414c46d0, PDB extent 1752 bytes
// country_core::resources::terrain_height::TerrainHeightsData::intersect_ray<country_core::resources::terrain_height::TerrainHeightSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::terrain_height::TerrainHeightsData::intersect_ray<country_core::resources::terrain_height::TerrainHeightSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
   Extent: 1752 */

undefined4 * pdb_1414c46d0(undefined4 *param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int iStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  
  uVar10 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar16 = (float)param_4;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  fStack_fc = _DAT_142e3784c + (float)uVar4;
  fStack_f0 = (float)((ulonglong)uVar4 >> 0x20) + _DAT_142e37870;
  uStack_100 = 0xc2820000;
  uStack_f8 = _DAT_143312c00;
  uStack_ec = 0x42820000;
  pdb_140deee20(&iStack_140,&uStack_100);
  if (iStack_140 != 0) {
    fVar26 = fStack_13c;
    if ((iStack_140 == 1) && (fStack_13c <= 0.0)) {
      fVar26 = 0.0;
    }
    if (fVar26 <= fVar16) {
      fVar13 = fVar16;
      if ((float)uStack_138 <= fVar16) {
        fVar13 = (float)uStack_138;
      }
      fVar17 = ((float)(~-(uint)NAN((float)uStack_138) & (uint)fVar13 |
                       -(uint)NAN((float)uStack_138) & (uint)fVar16) - fVar26) * _DAT_143312c10;
      fStack_128 = *param_3;
      fStack_124 = param_3[1];
      fStack_120 = param_3[2];
      fStack_11c = param_3[3];
      fVar13 = param_3[3];
      fVar1 = param_3[2];
      fVar2 = param_3[1];
      uVar5 = *(undefined8 *)(param_3 + 4);
      fVar19 = (float)uVar5;
      fVar3 = param_3[5];
      uVar6 = *(undefined8 *)(param_2 + 8);
      lVar7 = *(longlong *)(param_2 + 0x10) * 2;
      lVar11 = 0x20;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      fStack_e8 = fVar16;
      do {
        fVar23 = fVar17 + fVar26;
        iStack_140 = (int)uVar6;
        iVar8 = iStack_140;
        fStack_13c = (float)((ulonglong)uVar6 >> 0x20);
        fVar16 = fStack_13c;
        uStack_130 = uVar4;
        uStack_138 = lVar7;
        fVar14 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar23 + fStack_128,
                                      fVar3 * fVar23 + fVar1);
        if (fVar19 * fVar23 + fVar2 < fVar14) {
          if (fVar26 < fVar23) {
            fVar17 = (fVar26 + fVar23) * _DAT_142e36f50;
            fVar18 = fVar19 * fVar17 + fVar2;
            iStack_140 = iVar8;
            fStack_13c = fVar16;
            uStack_130 = uVar4;
            uStack_138 = lVar7;
            fVar14 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar17 + fStack_128,
                                          fVar3 * fVar17 + fVar1);
            uVar12 = -(uint)(fVar18 < fVar14);
            fVar26 = (float)(~uVar12 & (uint)fVar17 | (uint)fVar26 & uVar12);
            uVar20 = uVar27;
            uVar21 = uVar28;
            uVar22 = uVar29;
            if (fVar14 <= fVar18) {
              fVar17 = fVar23;
              uVar20 = uVar10;
              uVar21 = in_XMM3_Dc;
              uVar22 = in_XMM3_Dd;
            }
            fVar18 = (fVar26 + fVar17) * _DAT_142e36f50;
            fVar23 = fVar19 * fVar18 + fVar2;
            iStack_140 = iVar8;
            fStack_13c = fVar16;
            uStack_130 = uVar4;
            uStack_138 = lVar7;
            fVar14 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar18 + fStack_128,
                                          fVar3 * fVar18 + fVar1);
            uVar12 = -(uint)(fVar23 < fVar14);
            fVar26 = (float)(~uVar12 & (uint)fVar18 | uVar12 & (uint)fVar26);
            fStack_118 = fVar18;
            uStack_114 = uVar27;
            uStack_110 = uVar28;
            uStack_10c = uVar29;
            if (fVar14 <= fVar23) {
              fStack_118 = fVar17;
              uStack_114 = uVar20;
              uStack_110 = uVar21;
              uStack_10c = uVar22;
            }
            fVar17 = (fVar26 + fStack_118) * _DAT_142e36f50;
            fVar23 = fVar19 * fVar17 + fVar2;
            iStack_140 = iVar8;
            fStack_13c = fVar16;
            uStack_130 = uVar4;
            uStack_138 = lVar7;
            fVar14 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar17 + fStack_128,
                                          fVar3 * fVar17 + fVar1);
            uVar12 = -(uint)(fVar23 < fVar14);
            fVar26 = (float)(~uVar12 & (uint)fVar17 | uVar12 & (uint)fVar26);
            uVar10 = uVar27;
            uVar20 = uVar28;
            uVar21 = uVar29;
            if (fVar14 <= fVar23) {
              fVar17 = fStack_118;
              uVar10 = uStack_114;
              uVar20 = uStack_110;
              uVar21 = uStack_10c;
            }
            fVar23 = (fVar26 + fVar17) * _DAT_142e36f50;
            fVar18 = fVar19 * fVar23 + fVar2;
            iStack_140 = iVar8;
            fStack_13c = fVar16;
            uStack_130 = uVar4;
            uStack_138 = lVar7;
            fVar14 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar23 + fStack_128,
                                          fVar3 * fVar23 + fVar1);
            uVar12 = -(uint)(fVar18 < fVar14);
            fVar26 = (float)(~uVar12 & (uint)fVar23 | uVar12 & (uint)fVar26);
            fStack_118 = fVar23;
            uStack_114 = uVar27;
            uStack_110 = uVar28;
            uStack_10c = uVar29;
            if (fVar14 <= fVar18) {
              fStack_118 = fVar17;
              uStack_114 = uVar10;
              uStack_110 = uVar20;
              uStack_10c = uVar21;
            }
            fVar17 = (fVar26 + fStack_118) * _DAT_142e36f50;
            fVar23 = fVar19 * fVar17 + fVar2;
            iStack_140 = iVar8;
            fStack_13c = fVar16;
            uStack_130 = uVar4;
            uStack_138 = lVar7;
            fVar14 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar17 + fStack_128,
                                          fVar3 * fVar17 + fVar1);
            uVar12 = -(uint)(fVar23 < fVar14);
            fVar26 = (float)(~uVar12 & (uint)fVar17 | uVar12 & (uint)fVar26);
            if (fVar14 <= fVar23) {
              fVar17 = fStack_118;
            }
            fVar14 = (fVar26 + fVar17) * _DAT_142e36f50;
            fVar18 = fVar19 * fVar14 + fVar2;
            iStack_140 = iVar8;
            fStack_13c = fVar16;
            uStack_130 = uVar4;
            uStack_138 = lVar7;
            fVar23 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar14 + fStack_128,
                                          fVar3 * fVar14 + fVar1);
            uVar12 = -(uint)(fVar18 < fVar23);
            fVar26 = (float)(~uVar12 & (uint)fVar14 | uVar12 & (uint)fVar26);
            if (fVar23 <= fVar18) {
              fVar14 = fVar17;
            }
            fVar24 = (fVar26 + fVar14) * _DAT_142e36f50;
            fVar25 = fVar19 * fVar24 + fVar2;
            iStack_140 = iVar8;
            fStack_13c = fVar16;
            uStack_130 = uVar4;
            uStack_138 = lVar7;
            fVar15 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar24 + fStack_128,
                                          fVar3 * fVar24 + fVar1);
            fVar9 = fStack_11c;
            fVar18 = fStack_120;
            fVar23 = fStack_124;
            fVar17 = fStack_128;
            uVar12 = -(uint)(fVar25 < fVar15);
            fVar26 = (float)(~uVar12 & (uint)fVar24 | uVar12 & (uint)fVar26);
            if (fVar15 <= fVar25) {
              fVar24 = fVar14;
            }
            fVar14 = (fVar26 + fVar24) * _DAT_142e36f50;
            iStack_140 = iVar8;
            fStack_13c = fVar16;
            uStack_130 = uVar4;
            uStack_138 = lVar7;
            fVar16 = (float)pdb_1402202d0(&iStack_140,fVar13 * fVar14 + fStack_128,
                                          fVar1 + fVar3 * fVar14);
            uVar12 = -(uint)(fVar2 + fVar19 * fVar14 < fVar16);
            fVar16 = (float)(~uVar12 & (uint)fVar14 | uVar12 & (uint)fVar26);
            param_1[1] = fVar16 + _DAT_14300c770 * _DAT_142e377f0;
            param_1[2] = fVar17 + fVar16 * fVar9;
            param_1[3] = fVar23 + fVar16 * fVar19;
            param_1[4] = fVar18 + fVar16 * (float)((ulonglong)uVar5 >> 0x20);
            uVar10 = 1;
            goto LAB_1414c4cad;
          }
          break;
        }
        lVar11 = lVar11 + -1;
        fVar26 = fVar23;
        uVar27 = uVar10;
        uVar28 = in_XMM3_Dc;
        uVar29 = in_XMM3_Dd;
      } while (lVar11 != 0);
      uVar10 = 0;
LAB_1414c4cad:
      *param_1 = uVar10;
      fVar16 = fStack_e8;
      goto LAB_1414c4cb7;
    }
  }
  *param_1 = 0;
  uVar10 = 0;
LAB_1414c4cb7:
  pdb_1414ce0c0(&iStack_140,&UNK_143312c14,param_3,0);
  if (((iStack_140 != 1) || (fVar16 < fStack_13c)) ||
     (((float)((uint)(float)uStack_138 & _DAT_142e377e0) <= _DAT_14300e4bc &&
      ((float)(_DAT_142e377e0 & (uint)uStack_130) <= _DAT_14300e4bc)))) {
    if ((char)uVar10 == '\0') {
      *param_1 = 0;
    }
  }
  else if (((char)uVar10 == '\0') ||
          (fStack_13c < (float)param_1[1] || fStack_13c == (float)param_1[1])) {
    *param_1 = 1;
    *(ulonglong *)(param_1 + 1) = CONCAT44((float)uStack_138,fStack_13c);
    param_1[3] = uStack_138._4_4_;
    param_1[4] = (uint)uStack_130;
  }
  return param_1;
}

