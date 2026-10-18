// VA 0x141496170, PDB extent 82 bytes
// utils::curve::impl$12::sample_at_coord<f32,alloc::vec::Vec<f32,alloc::alloc::Global>,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::impl$12::sample_at_coord<f32,alloc::vec::Vec<f32,alloc::alloc::Global>,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 82 */

float pdb_141496170(longlong param_1,ulonglong param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  ulonglong uVar2;
  
  param_2 = param_2 & 0xffffffff;
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar2,param_4);
  }
  if (param_2 + 1 < uVar2) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 8) + param_2 * 4);
    return param_3 * (*(float *)(*(longlong *)(param_1 + 8) + 4 + param_2 * 4) - fVar1) + fVar1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(param_2 + 1,uVar2,param_4);
}

