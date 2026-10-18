// VA 0x1419aaa60, PDB extent 195 bytes
// utils::curve::Curve::get_approx_u_from_pos<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_approx_u_from_pos<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 195 */

void pdb_1419aaa60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  float extraout_XMM0_Da;
  float fVar5;
  
  if (*(ulonglong *)(param_1 + 0x10) < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e660,0x29,param_4);
  }
  uVar3 = pdb_1419aad80();
  uVar4 = (ulonglong)uVar3;
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar4,uVar2,param_4);
  }
  if (uVar2 <= uVar4 + 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar4 + 1,uVar2,param_4);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
  fVar5 = extraout_XMM0_Da * (float)((ulonglong)uVar1 >> 0x20) +
          (_DAT_142e36f28 - extraout_XMM0_Da) * (float)uVar1;
  if (!NAN(fVar5)) {
    if (ABS(fVar5) != INFINITY) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335ed00,0x22,param_4);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14335ec63,0x1d,param_4);
}

