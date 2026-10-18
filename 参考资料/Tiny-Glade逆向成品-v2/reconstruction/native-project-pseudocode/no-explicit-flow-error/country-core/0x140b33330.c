// VA 0x140b33330, PDB extent 81 bytes
// country_core::resources::gpu_lut::impl$0::build::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gpu_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gpu_lut::impl$0::build::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gpu_lut.rs
   Extent: 81 */

void pdb_140b33330(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined1 auStack_90 [136];
  
  pub_142e32760(auStack_90,param_2,0x88);
  uStack_ac = 0x10000000100;
  uStack_a4 = 1;
  uStack_b0 = 1;
  pdb_140e28810(auStack_90,&uStack_b0);
  return;
}

