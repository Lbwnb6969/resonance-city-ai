// VA 0x14085db60, PDB extent 58 bytes
// system_decorator::ui_systems::ui_stairs_misc::stairs_reset_for_new_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_misc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_stairs_misc::stairs_reset_for_new_frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_misc.rs
   Extent: 58 */

void pdb_14085db60(undefined8 *param_1,longlong *param_2)

{
  char *pcVar1;
  
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x06') {
    if (*(int *)(pcVar1 + 8) != 7) goto pdb_140a5f780;
  }
  else if ((*pcVar1 != '\0') || (*(int *)(pcVar1 + 8) != 5)) {
pdb_140a5f780:
    *(undefined8 *)(*param_2 + 0x10) = 3;
    return;
  }
  return;
}

