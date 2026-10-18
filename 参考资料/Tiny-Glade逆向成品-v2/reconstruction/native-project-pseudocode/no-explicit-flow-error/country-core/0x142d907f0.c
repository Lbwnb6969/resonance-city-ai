// VA 0x142d907f0, PDB extent 59 bytes
// country_core::systems::grass2::impl$1::texture_name::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::grass2::impl$1::texture_name::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
   Extent: 59 */

void pdb_142d907f0(undefined4 *param_1)

{
  undefined4 *puStack_28;
  code *pcStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  puStack_28 = &uStack_18;
  pcStack_20 = pdb_140c27f50;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306ac86,&puStack_28,&UNK_14306acb0);
}

