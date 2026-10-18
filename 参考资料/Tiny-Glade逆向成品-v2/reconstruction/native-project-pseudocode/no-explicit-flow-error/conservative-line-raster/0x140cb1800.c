// VA 0x140cb1800, PDB extent 66 bytes
// conservative_line_raster::impl$2::assert_delta
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/conservative-line-raster/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: conservative_line_raster::impl$2::assert_delta
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/conservative-line-raster/src/lib.rs
   Extent: 66 */

void pdb_140cb1800(float param_1,undefined8 param_2)

{
  float fStack_14;
  float *pfStack_10;
  code *pcStack_8;
  
  if (0.0 <= param_1) {
    return;
  }
  pfStack_10 = &fStack_14;
  pcStack_8 = pdb_140f70fc0;
  fStack_14 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143078df0,&pfStack_10,param_2);
}

