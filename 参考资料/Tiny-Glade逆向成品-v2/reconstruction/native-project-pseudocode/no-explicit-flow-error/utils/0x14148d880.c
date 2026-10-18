// VA 0x14148d880, PDB extent 122 bytes
// utils::curve::Curve::get_coord_at_wall_space<utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::get_coord_at_wall_space<utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 122 */

ulonglong pdb_14148d880(longlong param_1,float param_2)

{
  undefined8 uStack_28;
  longlong lStack_20;
  code *pcStack_18;
  undefined8 uStack_10;
  ulonglong uStack_8;
  
  lStack_20 = *(longlong *)(param_1 + 0x10);
  if (lStack_20 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143314ab0);
  }
  if (lStack_20 != 0) {
    uStack_28 = *(undefined8 *)(param_1 + 8);
    pcStack_18 = pdb_140ade410;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    uStack_10 = 0;
    uStack_8 = 0;
    pdb_1414d3b90(&uStack_28,param_2);
    return uStack_8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143314a68,0x2d,&UNK_143314a98);
}

