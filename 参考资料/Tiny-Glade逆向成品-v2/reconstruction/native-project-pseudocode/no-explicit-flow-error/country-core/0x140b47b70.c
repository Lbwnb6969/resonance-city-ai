// VA 0x140b47b70, PDB extent 74 bytes
// country_core::systems::ui_move_wall_group::WallGroupTransformCache::cursor_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_move_wall_group::WallGroupTransformCache::cursor_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 74 */

float pdb_140b47b70(int param_1,float param_2,char *param_3,float *param_4)

{
  float *pfVar1;
  
  if (param_1 == 1) {
    return param_4[3] * ((param_2 - param_4[1]) / param_4[4]) + *param_4;
  }
  pfVar1 = (float *)&UNK_143044340;
  if (*param_3 != '\0') {
    pfVar1 = (float *)(param_3 + 4);
  }
  return *pfVar1;
}

