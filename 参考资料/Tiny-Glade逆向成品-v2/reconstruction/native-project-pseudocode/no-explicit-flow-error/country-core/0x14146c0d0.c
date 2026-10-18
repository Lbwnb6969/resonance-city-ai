// VA 0x14146c0d0, PDB extent 494 bytes
// country_core::resources::walls::wall_holes::FinalizedWallHoles::iter_holes_with_padding<system_wall_constructor::wall_constructor::impl$0::normalize_holes::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::FinalizedWallHoles::iter_holes_with_padding<system_wall_constructor::wall_constructor::impl$0::normalize_holes::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 494 */

void pdb_14146c0d0(longlong param_1,float *param_2,undefined8 *param_3,longlong *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  float in_XMM1_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    pfVar8 = (float *)pdb_140c2b5c0();
    if (pfVar8 != param_2) {
      uVar5 = *param_3;
      uVar6 = *param_3;
      lVar10 = param_4[2];
      lVar11 = lVar10 << 4;
      do {
        fVar2 = *pfVar8;
        fVar12 = pfVar8[1];
        fVar13 = pfVar8[2];
        fVar14 = pfVar8[3];
        if (lVar10 == *param_4) {
          pdb_142d7ef30(param_4);
        }
        pfVar8 = pfVar8 + 5;
        pfVar9 = (float *)(param_4[1] + lVar11);
        *pfVar9 = fVar2 * (float)uVar5;
        pfVar9[1] = fVar12 * (float)((ulonglong)uVar5 >> 0x20);
        pfVar9[2] = fVar13 * (float)uVar6;
        pfVar9[3] = fVar14 * (float)((ulonglong)uVar6 >> 0x20);
        lVar10 = lVar10 + 1;
        param_4[2] = lVar10;
        lVar11 = lVar11 + 0x10;
      } while (pfVar8 != param_2);
    }
    return;
  }
  fVar2 = *(float *)(param_1 + 0x18);
  pfVar8 = (float *)pdb_140c2b5c0();
  fVar12 = (float)*param_3;
  fVar13 = (float)((ulonglong)*param_3 >> 0x20);
  fVar14 = (float)*param_3;
  fVar15 = (float)((ulonglong)*param_3 >> 0x20);
LAB_14146c167:
  do {
    pfVar9 = pfVar8;
    if (pfVar9 == param_2) {
      return;
    }
    pfVar8 = pfVar9 + 5;
  } while (*(char *)((longlong)pfVar9 + 0x11) != '\0');
  fVar16 = *pfVar9;
  fVar3 = pfVar9[1];
  fVar4 = pfVar9[2];
  fVar17 = pfVar9[3];
  lVar10 = param_4[2];
  if (lVar10 == *param_4) {
    pdb_142d7ef30(param_4);
  }
  pfVar1 = (float *)(param_4[1] + lVar10 * 0x10);
  *pfVar1 = fVar16 * fVar12;
  pfVar1[1] = fVar3 * fVar13;
  pfVar1[2] = fVar4 * fVar14;
  pfVar1[3] = fVar17 * fVar15;
  lVar11 = lVar10 + 1;
  param_4[2] = lVar11;
  fVar16 = *pfVar9;
  if (in_XMM1_Da <= fVar16) goto LAB_14146c1e5;
  fVar3 = pfVar9[1];
  fVar4 = pfVar9[3];
  fVar16 = fVar16 + fVar2;
  fVar17 = pfVar9[2] + fVar2;
  lVar7 = *param_4;
  goto joined_r0x00014146c215;
LAB_14146c1e5:
  if (fVar2 < in_XMM1_Da + pfVar9[2]) {
    fVar3 = pfVar9[1];
    fVar4 = pfVar9[3];
    fVar16 = fVar16 - fVar2;
    fVar17 = pfVar9[2] - fVar2;
    lVar7 = *param_4;
joined_r0x00014146c215:
    if (lVar11 == lVar7) {
      pdb_142d7ef30(param_4);
    }
    pfVar9 = (float *)(param_4[1] + lVar11 * 0x10);
    *pfVar9 = fVar16 * fVar12;
    pfVar9[1] = fVar3 * fVar13;
    pfVar9[2] = fVar17 * fVar14;
    pfVar9[3] = fVar4 * fVar15;
    param_4[2] = lVar10 + 2;
  }
  goto LAB_14146c167;
}

