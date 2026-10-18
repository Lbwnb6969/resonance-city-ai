// VA 0x140a0c900, PDB extent 174 bytes
// country_core::resources::walls::wall_path_segment::WallPathSegment::length_ws
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_path_segment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_path_segment::WallPathSegment::length_ws
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_path_segment.rs
   Extent: 174 */

float pdb_140a0c900(longlong param_1)

{
  float *pfVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  fVar6 = 0.0;
  if (1 < uVar2) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    fVar6 = *(float *)(puVar3 + 1) - *(float *)((longlong)puVar3 + 0x14);
    uVar7 = *(undefined8 *)((longlong)puVar3 + 0xc);
    fVar9 = (float)*puVar3 - (float)uVar7;
    fVar10 = (float)((ulonglong)*puVar3 >> 0x20) - (float)((ulonglong)uVar7 >> 0x20);
    fVar6 = SQRT(fVar6 * fVar6 + fVar10 * fVar10 + fVar9 * fVar9);
    if (uVar2 != 2) {
      puVar5 = puVar3 + 3;
      fVar9 = *(float *)((longlong)puVar3 + 0x14);
      do {
        fVar10 = (float)uVar7;
        uVar4 = (ulonglong)uVar7 >> 0x20;
        uVar7 = *puVar5;
        pfVar1 = (float *)(puVar5 + 1);
        fVar8 = (float)uVar4 - (float)((ulonglong)uVar7 >> 0x20);
        fVar10 = fVar10 - (float)uVar7;
        fVar9 = fVar9 - *pfVar1;
        fVar6 = fVar6 + SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
        puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
        fVar9 = *pfVar1;
      } while (puVar5 != (undefined8 *)((longlong)puVar3 + uVar2 * 0xc));
    }
  }
  return fVar6;
}

