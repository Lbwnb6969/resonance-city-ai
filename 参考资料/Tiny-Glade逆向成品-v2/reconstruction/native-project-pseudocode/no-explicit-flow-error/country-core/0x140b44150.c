// VA 0x140b44150, PDB extent 34 bytes
// country_core::systems::mode_manager::is_wall_group_selection_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::is_wall_group_selection_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 34 */

undefined4 pdb_140b44150(char *param_1,char *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (*param_2 == '\x01') {
    uVar1 = 0;
    if ((*(char *)(param_3 + 0x18) != '\x02') && (*param_1 == '\0')) {
      uVar1 = CONCAT31((int3)(*(int *)(param_1 + 8) - 1U >> 8),*(int *)(param_1 + 8) - 1U < 3);
    }
    return uVar1;
  }
  return 0;
}

