// VA 0x1419a7d70, PDB extent 129 bytes
// utils::curve::Curve::get_pos_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_pos_at_u<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 129 */

float pdb_1419a7d70(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  float extraout_XMM0_Da;
  
  uVar2 = pdb_1419a9060();
  uVar3 = (ulonglong)uVar2;
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar3,uVar1,&UNK_14335e4e0);
  }
  if (uVar3 + 1 < uVar1) {
    return *(float *)(*(longlong *)(param_1 + 8) + 8 + uVar3 * 8) * extraout_XMM0_Da +
           *(float *)(*(longlong *)(param_1 + 8) + uVar3 * 8) * (_DAT_142e36f28 - extraout_XMM0_Da);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar3 + 1,uVar1,&UNK_14335e4f8);
}

