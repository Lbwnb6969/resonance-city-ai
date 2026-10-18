// VA 0x14148da30, PDB extent 77 bytes
// utils::curve::impl$12::sample_at_coord<f32,slice2$<f32>,utils::curve::CurveCoordSemanticThresholded3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::impl$12::sample_at_coord<f32,slice2$<f32>,utils::curve::CurveCoordSemanticThresholded3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 77 */

float pdb_14148da30(longlong param_1,ulonglong param_2,uint param_3,float param_4,undefined8 param_5
                   )

{
  float fVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar2,param_2,param_5);
  }
  if (uVar2 + 1 < param_2) {
    fVar1 = *(float *)(param_1 + uVar2 * 4);
    return param_4 * (*(float *)(param_1 + 4 + uVar2 * 4) - fVar1) + fVar1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar2 + 1,param_2,param_5);
}

