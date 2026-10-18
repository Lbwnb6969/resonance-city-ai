// VA 0x140acd240, PDB extent 2936 bytes
// country_core::systems::mod_editor::EditingMod::confirm_modal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::EditingMod::confirm_modal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 2936 */

void pdb_140acd240(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0x8000000000000006;
  if (lVar1 != -0x7ffffffffffffffa) {
                    /* WARNING: Could not recover jumptable at 0x000140acd2b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14304e490 +
              *(int *)(&UNK_14304e490 + (lVar1 >> 0x3f & lVar1 + 0x8000000000000001U) * 4)))
              (&UNK_14304e490 +
               *(int *)(&UNK_14304e490 + (lVar1 >> 0x3f & lVar1 + 0x8000000000000001U) * 4));
    return;
  }
  return;
}

