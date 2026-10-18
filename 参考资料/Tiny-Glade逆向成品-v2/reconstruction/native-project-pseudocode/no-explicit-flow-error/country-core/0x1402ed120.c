// VA 0x1402ed120, PDB extent 5 bytes
// uuid::fmt::impl$0::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: uuid::fmt::impl$0::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
   Extent: 5 */

void pdb_1402ed120(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_34 [36];
  
  pdb_140eac6c0(auStack_34,param_1,0);
  pdb_140f679a0(param_2,auStack_34,0x24);
  return;
}

