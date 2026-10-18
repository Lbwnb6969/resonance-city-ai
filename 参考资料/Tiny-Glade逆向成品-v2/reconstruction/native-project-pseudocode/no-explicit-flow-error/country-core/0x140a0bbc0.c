// VA 0x140a0bbc0, PDB extent 280 bytes
// country_core::resources::walls::wall_path_segment::WallPathSegment::length_ws_2d
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_path_segment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_path_segment::WallPathSegment::length_ws_2d
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_path_segment.rs
   Extent: 280 */

undefined8 pdb_140a0bbc0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  fVar6 = 0.0;
  fVar7 = 0.0;
  if (1 < uVar2) {
    pfVar3 = *(float **)(param_1 + 0x20);
    fVar9 = pfVar3[3];
    fVar10 = pfVar3[5];
    fVar7 = 0.0;
    fVar6 = SQRT((pfVar3[2] - fVar10) * (pfVar3[2] - fVar10) + (*pfVar3 - fVar9) * (*pfVar3 - fVar9)
                );
    if (uVar2 != 2) {
      uVar1 = uVar2 * 0xc - 0x24;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar1;
      if ((SUB164(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
        pfVar5 = pfVar3 + 9;
        fVar8 = pfVar3[6];
        fVar11 = pfVar3[8];
        fVar6 = fVar6 + SQRT((fVar10 - fVar11) * (fVar10 - fVar11) +
                             (fVar9 - fVar8) * (fVar9 - fVar8));
      }
      else {
        pfVar5 = pfVar3 + 6;
        fVar8 = fVar9;
        fVar11 = fVar10;
      }
      if (0xb < uVar1) {
        do {
          fVar9 = fVar8 - *pfVar5;
          fVar10 = fVar11 - pfVar5[2];
          fVar8 = pfVar5[3];
          fVar11 = pfVar5[5];
          fVar12 = *pfVar5 - fVar8;
          fVar7 = pfVar5[2] - fVar11;
          fVar7 = fVar7 * fVar7;
          fVar6 = SQRT(fVar7 + fVar12 * fVar12) + SQRT(fVar10 * fVar10 + fVar9 * fVar9) + fVar6;
          pfVar5 = pfVar5 + 6;
        } while (pfVar5 != pfVar3 + uVar2 * 3);
      }
    }
  }
  return CONCAT44(fVar7,fVar6);
}

