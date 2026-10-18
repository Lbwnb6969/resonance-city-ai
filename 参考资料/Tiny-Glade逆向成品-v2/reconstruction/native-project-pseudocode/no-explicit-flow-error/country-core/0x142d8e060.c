// VA 0x142d8e060, PDB extent 76 bytes
// country_core::systems::backend::input::input_record_replay::control_input_replay::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_record_replay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::backend::input::input_record_replay::control_input_replay::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_record_replay.rs
   Extent: 76 */

void pdb_142d8e060(undefined8 param_1,longlong param_2)

{
  longlong lStack_28;
  undefined8 uStack_20;
  code *pcStack_18;
  longlong *plStack_10;
  code *pcStack_8;
  
  lStack_28 = param_2 + -1;
  pcStack_18 = pdb_1403d7700;
  plStack_10 = &lStack_28;
  pcStack_8 = pdb_140f72a40;
  uStack_20 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1430233a7,&uStack_20,&UNK_1430233f0);
}

