// VA 0x1407fd340, PDB extent 24 bytes
// system_wall_constructor::arch_walker::ArchWalker::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/arch_walker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_wall_constructor::arch_walker::ArchWalker::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/arch_walker.rs
   Extent: 24 */

undefined4 *
pdb_1407fd340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[2] = param_2;
  param_1[3] = 0x3dcccccd;
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}

