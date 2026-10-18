// VA 0x1414961d0, PDB extent 103 bytes
// utils::curve::impl$12::sample_at_coord<glam::f32::vec2::Vec2,alloc::vec::Vec<glam::f32::vec2::Vec2,alloc::alloc::Global>,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::impl$12::sample_at_coord<glam::f32::vec2::Vec2,alloc::vec::Vec<glam::f32::vec2::Vec2,alloc::alloc::Global>,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 103 */

float pdb_1414961d0(longlong param_1,ulonglong param_2,float param_3,undefined8 param_4)

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
    fVar1 = *(float *)(*(longlong *)(param_1 + 8) + param_2 * 8);
    return (*(float *)(*(longlong *)(param_1 + 8) + 8 + param_2 * 8) - fVar1) * param_3 + fVar1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(param_2 + 1,uVar2,param_4);
}

