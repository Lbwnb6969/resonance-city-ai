// VA 0x1409bba50, PDB extent 4660 bytes
// country_core::systems::ui::signifiers::SignifierEntityBuilder::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::SignifierEntityBuilder::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 4660 */

void pdb_1409bba50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = 3;
  if (*param_2 < 0) {
    lVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001409bbada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14302b7c4 + *(int *)(&UNK_14302b7c4 + lVar1 * 4)))
            (&UNK_14302b7c4 + *(int *)(&UNK_14302b7c4 + lVar1 * 4),(int)param_2[0xb] == 1);
  return;
}

