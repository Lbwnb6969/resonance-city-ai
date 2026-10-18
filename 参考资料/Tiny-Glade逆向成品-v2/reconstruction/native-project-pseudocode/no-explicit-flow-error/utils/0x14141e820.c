// VA 0x14141e820, PDB extent 173 bytes
// utils::curve::impl$82::fmt<utils::curve::CurveCoordSemanticThresholded3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::impl$82::fmt<utils::curve::CurveCoordSemanticThresholded3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 173 */

void pdb_14141e820(longlong param_1,undefined8 param_2)

{
  longlong lStack_8;
  
  lStack_8 = param_1 + 8;
  pdb_140f66ff0(param_2,&UNK_1433085d8,0x12,&UNK_1433085ea,1,param_1,&UNK_143308578,&UNK_1433085eb,1
                ,param_1 + 4,&UNK_143308598,&UNK_1433085ec,6,&lStack_8,&UNK_1433085b8);
  return;
}

