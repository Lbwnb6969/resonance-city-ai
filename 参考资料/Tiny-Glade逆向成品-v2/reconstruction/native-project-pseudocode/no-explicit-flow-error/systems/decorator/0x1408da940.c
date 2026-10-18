// VA 0x1408da940, PDB extent 7871 bytes
// system_decorator::cull_oob_decorators::is_decorator_location_valid
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::cull_oob_decorators::is_decorator_location_valid
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 7871 */

void pdb_1408da940(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_3 + 0x32)) {
    lVar1 = (ulonglong)*(byte *)(param_3 + 0x32) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0001408da9fa */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14301a27c + *(int *)(&UNK_14301a27c + lVar1 * 4)))
            (param_6,&UNK_14301a27c + *(int *)(&UNK_14301a27c + lVar1 * 4));
  return;
}

