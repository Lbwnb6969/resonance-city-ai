// VA 0x140c428a0, PDB extent 62 bytes
// country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutout::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/stone_foundation_cutouts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutout::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/stone_foundation_cutouts.rs
   Extent: 62 */

void pdb_140c428a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(&UNK_14306d554 + (ulonglong)param_6 * 4);
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = uVar1;
  return;
}

