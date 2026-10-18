// VA 0x140ae1760, PDB extent 4467 bytes
// country_core::systems::wall::eraser::delete_focused::delete_focused
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/delete_focused.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::delete_focused::delete_focused
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/delete_focused.rs
   Extent: 4467 */

void pdb_140ae1760(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  if ((SBORROW8(0,*(longlong *)(*(longlong *)(param_3 + 0x60) + 0x30))) &&
     (*(char *)*param_1 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000140ae17c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14304fab8 +
              *(int *)(&UNK_14304fab8 + (ulonglong)*(uint *)((char *)*param_1 + 8) * 4)))();
    return;
  }
  return;
}

