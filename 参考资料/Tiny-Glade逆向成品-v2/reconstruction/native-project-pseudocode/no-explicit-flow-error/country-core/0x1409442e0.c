// VA 0x1409442e0, PDB extent 297 bytes
// country_core::systems::history::impl$0::insert_history_resources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::history::impl$0::insert_history_resources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/mod.rs
   Extent: 297 */

void pdb_1409442e0(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_50 = 0xffffffffffffffff;
  uStack_b8 = 0;
  uStack_b0 = 8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 8;
  uStack_90 = 0;
  uStack_88 = 0x8000000000000000;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar1 = pdb_1418ff620(param_1,&uStack_b8);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x3f800000);
  uStack_b8 = 0;
  uStack_b0 = 8;
  uStack_98 = 0;
  uVar1 = pdb_1418f3370(uVar1,&uStack_b8);
  uVar1 = pdb_14190b400(uVar1,0);
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  uStack_b8 = uStack_b8 & 0xffffffffffffff00;
  uVar1 = pdb_1419001d0(uVar1,&uStack_b8);
  pdb_140c35ca0(&uStack_b8);
  uVar1 = pdb_1419055f0(uVar1,&uStack_b8);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 1;
  uVar1 = pdb_1418fda70(uVar1,&uStack_b8);
  pdb_141915100(uVar1,0,0);
  return;
}

