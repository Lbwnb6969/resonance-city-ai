// VA 0x140b73b00, PDB extent 49 bytes
// country_core::resources::roofs::roof_visual_shape::RoofBoundsDims::as_rectangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_visual_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_visual_shape::RoofBoundsDims::as_rectangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_visual_shape.rs
   Extent: 49 */

undefined8 * pdb_140b73b00(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 1) {
    uVar1 = *(undefined8 *)(param_2 + 3);
    *param_1 = *(undefined8 *)(param_2 + 1);
    param_1[1] = uVar1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14305b6be,0x28,&UNK_14305b988);
}

