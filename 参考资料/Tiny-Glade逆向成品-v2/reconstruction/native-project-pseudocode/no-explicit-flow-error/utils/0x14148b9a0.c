// VA 0x14148b9a0, PDB extent 79 bytes
// utils::curve::curve_u::CurveU::new<utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_u.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_u::CurveU::new<utils::curve::CurveCoordSemantic3D>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_u.rs
   Extent: 79 */

void pdb_14148b9a0(float param_1,undefined8 param_2)

{
  float fStack_14;
  float *pfStack_10;
  code *pcStack_8;
  
  if ((0.0 <= param_1) && (param_1 <= _DAT_142e36f28)) {
    return;
  }
  pfStack_10 = &fStack_14;
  pcStack_8 = pdb_140f70fc0;
  fStack_14 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14330d448,&pfStack_10,param_2);
}

