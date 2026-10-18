// VA 0x1414c4fb0, PDB extent 1149 bytes
// system_decorator::ui_systems::calculate_decorator_grab_offset::try_get_grab_offset_ss_if_valid
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/calculate_decorator_grab_offset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::calculate_decorator_grab_offset::try_get_grab_offset_ss_if_valid
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/calculate_decorator_grab_offset.rs
   Extent: 1149 */

void pdb_1414c4fb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_3 + 0x32)) {
    lVar1 = (ulonglong)*(byte *)(param_3 + 0x32) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0001414c5007 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143312e04 + *(int *)(&UNK_143312e04 + lVar1 * 4)))
            (&UNK_143312e04 + *(int *)(&UNK_143312e04 + lVar1 * 4));
  return;
}

