// VA 0x140b6a9c0, PDB extent 136 bytes
// country_core::systems::terrain::animate_terrain_delete::TerrainDeleteAnimation::start
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/animate_terrain_delete.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::terrain::animate_terrain_delete::TerrainDeleteAnimation::start
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/animate_terrain_delete.rs
   Extent: 136 */

void pdb_140b6a9c0(char *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x12') {
    *(undefined8 *)(param_1 + 0x10) = param_4[2];
    uVar1 = param_4[1];
    *(undefined8 *)param_1 = *param_4;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = param_3;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14305ac68,0x27,&UNK_14305acd8);
}

