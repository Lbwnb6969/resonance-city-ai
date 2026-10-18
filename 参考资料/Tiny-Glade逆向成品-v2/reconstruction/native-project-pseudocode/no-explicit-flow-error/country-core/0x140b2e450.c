// VA 0x140b2e450, PDB extent 71 bytes
// country_core::resources::walls::material_stats::MaterialStats::add_stairs_length
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::material_stats::MaterialStats::add_stairs_length
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
   Extent: 71 */

void pdb_140b2e450(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  
  fVar2 = *(float *)(param_1 + 0xa4);
  do {
    LOCK();
    fVar1 = *(float *)(param_1 + 0xa4);
    bVar3 = fVar2 == fVar1;
    if (bVar3) {
      *(float *)(param_1 + 0xa4) = fVar2 + param_2;
      fVar1 = fVar2;
    }
    fVar2 = fVar1;
    UNLOCK();
  } while (!bVar3);
  fVar2 = *(float *)(param_1 + 0x90);
  do {
    LOCK();
    fVar1 = *(float *)(param_1 + 0x90);
    bVar3 = fVar2 == fVar1;
    if (bVar3) {
      *(float *)(param_1 + 0x90) = fVar2 - param_2;
      fVar1 = fVar2;
    }
    fVar2 = fVar1;
    UNLOCK();
  } while (!bVar3);
  return;
}

