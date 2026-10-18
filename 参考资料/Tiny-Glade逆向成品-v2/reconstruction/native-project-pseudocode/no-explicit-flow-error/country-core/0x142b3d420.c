// VA 0x142b3d420, PDB extent 1496 bytes
// country_core::resources::terrain_height::TerrainHeightsData::intersect_ray<country_core::resources::terrain_height::TerrainHeightSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::terrain_height::TerrainHeightsData::intersect_ray<country_core::resources::terrain_height::TerrainHeightSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
   Extent: 1496 */

undefined4 * pdb_142b3d420(undefined4 *param_1,longlong param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iStack_fc;
  float fStack_f8;
  float fStack_f4;
  int iStack_f0;
  float fStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  
  fStack_ec = *(float *)(param_2 + 0x50) + _DAT_142e3784c;
  fStack_e0 = *(float *)(param_2 + 0x54) + _DAT_142e37870;
  iStack_f0 = -0x3d7e0000;
  uStack_e8 = (uint)_DAT_143312c00;
  uStack_e4 = (undefined4)((ulonglong)_DAT_143312c00 >> 0x20);
  uStack_dc = 0x42820000;
  pdb_140deee20(&iStack_fc,&iStack_f0);
  if (iStack_fc != 0) {
    if ((iStack_fc == 1) && (fStack_f8 <= 0.0)) {
      fStack_f8 = 0.0;
    }
    if (fStack_f8 <= param_4) {
      fVar13 = param_4;
      if (fStack_f4 <= param_4) {
        fVar13 = fStack_f4;
      }
      fVar18 = ((float)(~-(uint)NAN(fStack_f4) & (uint)fVar13 |
                       -(uint)NAN(fStack_f4) & (uint)param_4) - fStack_f8) * _DAT_143312c10;
      fVar5 = *param_3;
      fVar6 = param_3[1];
      fVar7 = param_3[2];
      fVar8 = param_3[3];
      fVar13 = param_3[3];
      fVar1 = param_3[2];
      fVar2 = param_3[1];
      uVar4 = *(undefined8 *)(param_3 + 4);
      fVar16 = (float)uVar4;
      fVar3 = param_3[5];
      lVar10 = 0x20;
      fVar15 = fStack_f8;
      fStack_d8 = param_4;
      do {
        fVar17 = fVar18 + fVar15;
        fVar12 = (float)pdb_14140ce00(param_2,fVar13 * fVar17 + fVar5,fVar3 * fVar17 + fVar1);
        if (fVar16 * fVar17 + fVar2 < fVar12) {
          if (fVar15 < fVar17) {
            fVar18 = (fVar15 + fVar17) * _DAT_142e36f50;
            fVar14 = fVar16 * fVar18 + fVar2;
            fVar12 = (float)pdb_14140ce00(param_2,fVar13 * fVar18 + fVar5,fVar3 * fVar18 + fVar1);
            uVar11 = -(uint)(fVar14 < fVar12);
            fVar15 = (float)(~uVar11 & (uint)fVar18 | (uint)fVar15 & uVar11);
            if (fVar12 <= fVar14) {
              fVar18 = fVar17;
            }
            fVar12 = (fVar15 + fVar18) * _DAT_142e36f50;
            fVar14 = fVar16 * fVar12 + fVar2;
            fVar17 = (float)pdb_14140ce00(param_2,fVar13 * fVar12 + fVar5,fVar3 * fVar12 + fVar1);
            uVar11 = -(uint)(fVar14 < fVar17);
            fVar15 = (float)(~uVar11 & (uint)fVar12 | uVar11 & (uint)fVar15);
            if (fVar17 <= fVar14) {
              fVar12 = fVar18;
            }
            fVar18 = (fVar15 + fVar12) * _DAT_142e36f50;
            fVar14 = fVar16 * fVar18 + fVar2;
            fVar17 = (float)pdb_14140ce00(param_2,fVar13 * fVar18 + fVar5,fVar3 * fVar18 + fVar1);
            uVar11 = -(uint)(fVar14 < fVar17);
            fVar15 = (float)(~uVar11 & (uint)fVar18 | uVar11 & (uint)fVar15);
            if (fVar17 <= fVar14) {
              fVar18 = fVar12;
            }
            fVar12 = (fVar15 + fVar18) * _DAT_142e36f50;
            fVar14 = fVar16 * fVar12 + fVar2;
            fVar17 = (float)pdb_14140ce00(param_2,fVar13 * fVar12 + fVar5,fVar3 * fVar12 + fVar1);
            uVar11 = -(uint)(fVar14 < fVar17);
            fVar15 = (float)(~uVar11 & (uint)fVar12 | uVar11 & (uint)fVar15);
            if (fVar17 <= fVar14) {
              fVar12 = fVar18;
            }
            fVar18 = (fVar15 + fVar12) * _DAT_142e36f50;
            fVar14 = fVar16 * fVar18 + fVar2;
            fVar17 = (float)pdb_14140ce00(param_2,fVar13 * fVar18 + fVar5,fVar3 * fVar18 + fVar1);
            uVar11 = -(uint)(fVar14 < fVar17);
            fVar15 = (float)(~uVar11 & (uint)fVar18 | uVar11 & (uint)fVar15);
            if (fVar17 <= fVar14) {
              fVar18 = fVar12;
            }
            fVar12 = (fVar15 + fVar18) * _DAT_142e36f50;
            fVar14 = fVar16 * fVar12 + fVar2;
            fVar17 = (float)pdb_14140ce00(param_2,fVar13 * fVar12 + fVar5,fVar3 * fVar12 + fVar1);
            uVar11 = -(uint)(fVar14 < fVar17);
            fVar15 = (float)(~uVar11 & (uint)fVar12 | uVar11 & (uint)fVar15);
            if (fVar17 <= fVar14) {
              fVar12 = fVar18;
            }
            fVar18 = (fVar15 + fVar12) * _DAT_142e36f50;
            fVar14 = fVar16 * fVar18 + fVar2;
            fVar17 = (float)pdb_14140ce00(param_2,fVar13 * fVar18 + fVar5,fVar3 * fVar18 + fVar1);
            uVar11 = -(uint)(fVar14 < fVar17);
            fVar15 = (float)(~uVar11 & (uint)fVar18 | uVar11 & (uint)fVar15);
            if (fVar17 <= fVar14) {
              fVar18 = fVar12;
            }
            fVar18 = (fVar15 + fVar18) * _DAT_142e36f50;
            fVar13 = (float)pdb_14140ce00(param_2,fVar13 * fVar18 + fVar5,fVar1 + fVar3 * fVar18);
            uVar11 = -(uint)(fVar2 + fVar16 * fVar18 < fVar13);
            fVar13 = (float)(~uVar11 & (uint)fVar18 | uVar11 & (uint)fVar15);
            param_1[1] = fVar13 + _DAT_14300c770 * _DAT_142e377f0;
            param_1[2] = fVar5 + fVar13 * fVar8;
            param_1[3] = fVar6 + fVar13 * fVar16;
            param_1[4] = fVar7 + fVar13 * (float)((ulonglong)uVar4 >> 0x20);
            uVar9 = 1;
            goto LAB_142b3d911;
          }
          break;
        }
        lVar10 = lVar10 + -1;
        fVar15 = fVar17;
      } while (lVar10 != 0);
      uVar9 = 0;
LAB_142b3d911:
      *param_1 = uVar9;
      param_4 = fStack_d8;
      goto LAB_142b3d918;
    }
  }
  *param_1 = 0;
  uVar9 = 0;
LAB_142b3d918:
  pdb_1414ce0c0(&iStack_f0,&UNK_14366cdf0,param_3,0);
  if (((iStack_f0 != 1) || (param_4 < fStack_ec)) ||
     (((float)(uStack_e8 & _DAT_142e377e0) <= _DAT_14300e4bc &&
      ((float)(_DAT_142e377e0 & (uint)fStack_e0) <= _DAT_14300e4bc)))) {
    if ((char)uVar9 == '\0') {
      *param_1 = 0;
    }
  }
  else if (((char)uVar9 == '\0') ||
          (fStack_ec < (float)param_1[1] || fStack_ec == (float)param_1[1])) {
    *param_1 = 1;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_e8,fStack_ec);
    param_1[3] = uStack_e4;
    param_1[4] = fStack_e0;
  }
  return param_1;
}

