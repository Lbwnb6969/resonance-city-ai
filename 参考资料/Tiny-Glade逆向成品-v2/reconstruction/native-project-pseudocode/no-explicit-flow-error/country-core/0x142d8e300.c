// VA 0x142d8e300, PDB extent 86 bytes
// country_core::resources::history::wall_compound_edit::panic_deprecated_operation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::panic_deprecated_operation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 86 */

void pdb_142d8e300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  code *pcStack_18;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  puStack_20 = &uStack_40;
  pcStack_18 = pdb_1402ed400;
  puStack_10 = &uStack_30;
  pcStack_8 = pdb_1402ed400;
  uStack_40 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1430372f8,&puStack_20,&UNK_1430373b0);
}

