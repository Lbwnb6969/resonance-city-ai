// VA 0x140b6b2d0, PDB extent 64 bytes
// country_core::systems::_::impl$0::dyn_clone
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::_::impl$0::dyn_clone
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod.rs
   Extent: 64 */

void pdb_140b6b2d0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *param_1;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(1,1);
  if (pbVar2 != (byte *)0x0) {
    *pbVar2 = bVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(1,1);
}

