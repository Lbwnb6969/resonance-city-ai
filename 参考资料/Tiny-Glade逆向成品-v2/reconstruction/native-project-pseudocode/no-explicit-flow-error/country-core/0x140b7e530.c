// VA 0x140b7e530, PDB extent 52 bytes
// country_core::systems::save::load_completion_checker::claim_session
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::load_completion_checker::claim_session
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
   Extent: 52 */

undefined8 pdb_140b7e530(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = pdb_140b7e9a0();
  if ((byte)(cVar1 - 1U) < 2) {
    return 0;
  }
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  uVar2 = pdb_140a3b620(&uStack_18);
  return uVar2;
}

