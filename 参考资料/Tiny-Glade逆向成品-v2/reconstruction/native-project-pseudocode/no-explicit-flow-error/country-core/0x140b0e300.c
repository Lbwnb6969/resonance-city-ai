// VA 0x140b0e300, PDB extent 131 bytes
// country_core::resources::walls::inner_walls::InnerWalls::new_wall_with_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_walls::InnerWalls::new_wall_with_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 131 */

void pdb_140b0e300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  
  uStack_88 = param_2;
  pdb_1417b3e60(&puStack_80,param_1,param_2,param_3);
  if (SBORROW8(0,(longlong)puStack_80)) {
    pdb_1403b05d0(param_1 + 0x30,param_2);
    return;
  }
  pdb_1400da600(&puStack_80);
  puStack_80 = &uStack_88;
  pcStack_78 = pdb_140b0f370;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1430544d0,&puStack_80,&UNK_1430544e8);
}

