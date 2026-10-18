// VA 0x140b133f0, PDB extent 69 bytes
// country_core::systems::ui::signifiers::signifier_create::OwnedSignifierStream::write
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_create.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::signifier_create::OwnedSignifierStream::write
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_create.rs
   Extent: 69 */

void pdb_140b133f0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  uStack_38 = param_1[1];
  uStack_30 = *(undefined1 *)(param_1 + 2);
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  uStack_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  uStack_8 = *(undefined8 *)(param_2 + 8);
  pdb_141a88350(*param_1,&uStack_38);
  return;
}

