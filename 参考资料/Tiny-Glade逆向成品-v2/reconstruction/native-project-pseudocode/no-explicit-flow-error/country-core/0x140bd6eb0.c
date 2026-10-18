// VA 0x140bd6eb0, PDB extent 96 bytes
// country_core::resources::logo_animation::impl$2::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::logo_animation::impl$2::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
   Extent: 96 */

void pdb_140bd6eb0(undefined8 param_1,undefined8 param_2)

{
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_1c = _DAT_143063f30;
  uStack_18 = _UNK_143063f34;
  uStack_14 = _UNK_143063f38;
  uStack_10 = _UNK_143063f3c;
  uStack_c = 0x3f000000;
  auStack_40[0] = 0;
  uStack_38 = 0;
  pdb_141915680(param_2,auStack_40);
  pdb_140c96ed0(param_2);
  pdb_140c95b90(param_2);
  return;
}

