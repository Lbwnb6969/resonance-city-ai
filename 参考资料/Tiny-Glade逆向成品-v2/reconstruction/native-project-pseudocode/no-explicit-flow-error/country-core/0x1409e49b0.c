// VA 0x1409e49b0, PDB extent 69 bytes
// country_core::resources::feedback_report_resources::impl$3::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::feedback_report_resources::impl$3::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
   Extent: 69 */

void pdb_1409e49b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_20 [2];
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined2 uStack_4;
  undefined1 uStack_2;
  
  auStack_20[0] = 0;
  uStack_10 = 0;
  uStack_2 = 0;
  uStack_4 = 0x101;
  uStack_8 = 0;
  uVar1 = pdb_141900710(param_2,auStack_20);
  pdb_140c94fb0(uVar1);
  return;
}

