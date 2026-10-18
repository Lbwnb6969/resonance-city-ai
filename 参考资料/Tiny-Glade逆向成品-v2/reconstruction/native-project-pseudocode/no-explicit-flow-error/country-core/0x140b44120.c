// VA 0x140b44120, PDB extent 40 bytes
// country_core::systems::mode_manager::wall_group_selection_inactive
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::wall_group_selection_inactive
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 40 */

bool pdb_140b44120(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  bool bVar1;
  
  bVar1 = true;
  if (((*(char *)*param_2 == '\x01') && (*(char *)(*param_3 + 0x18) != '\x02')) &&
     (*(char *)*param_1 == '\0')) {
    bVar1 = *(int *)((char *)*param_1 + 8) - 4U < 0xfffffffd;
  }
  return bVar1;
}

