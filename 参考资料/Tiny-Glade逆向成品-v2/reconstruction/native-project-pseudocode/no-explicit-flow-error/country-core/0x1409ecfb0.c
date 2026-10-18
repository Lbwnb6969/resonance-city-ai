// VA 0x1409ecfb0, PDB extent 41 bytes
// country_core::systems::collision::world::impl$3::partial_cmp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::impl$3::partial_cmp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 41 */

char pdb_1409ecfb0(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = (byte)param_1[2];
  bVar2 = (byte)param_2[2];
  cVar3 = (bVar1 >= bVar2 && bVar1 != bVar2) - (bVar1 < bVar2);
  if (bVar1 == bVar2) {
    bVar4 = *param_1 < *param_2;
    bVar5 = false;
    if (*param_1 == *param_2) {
      bVar4 = param_1[1] < param_2[1];
      bVar5 = param_1[1] == param_2[1];
    }
    cVar3 = (!bVar4 && !bVar5) - bVar4;
  }
  return cVar3;
}

