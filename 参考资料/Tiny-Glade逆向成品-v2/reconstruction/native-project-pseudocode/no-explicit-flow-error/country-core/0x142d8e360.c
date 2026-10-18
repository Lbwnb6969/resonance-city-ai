// VA 0x142d8e360, PDB extent 126 bytes
// country_core::meta_commander::commander_update::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::meta_commander::commander_update::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 126 */

void pdb_142d8e360(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  code *pcStack_30;
  undefined8 *puStack_28;
  code *pcStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  pcStack_30 = pdb_140117660;
  puStack_28 = &uStack_18;
  pcStack_20 = pdb_140f56800;
  uStack_38 = param_1;
  uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143038e10,&uStack_38,&UNK_143038e30);
}

