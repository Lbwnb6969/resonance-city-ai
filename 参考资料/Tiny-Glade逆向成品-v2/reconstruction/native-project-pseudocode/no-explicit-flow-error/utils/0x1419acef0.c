// VA 0x1419acef0, PDB extent 168 bytes
// utils::curve::Curve::project_point<utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::project_point<utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 168 */

float pdb_1419acef0(longlong param_1)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float fVar6;
  
  fVar5 = (float)pdb_1419aaa60();
  fVar2 = _DAT_142e36f28;
  fVar6 = 0.0;
  if (0.0 <= fVar5) {
    fVar6 = fVar5;
  }
  fVar5 = _DAT_142e36f28;
  if (fVar6 <= _DAT_142e36f28) {
    fVar5 = fVar6;
  }
  uVar3 = pdb_1419a9060(param_1,fVar5);
  uVar4 = (ulonglong)uVar3;
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar4 < uVar1) {
    if (uVar4 + 1 < uVar1) {
      return *(float *)(*(longlong *)(param_1 + 8) + 8 + uVar4 * 8) * extraout_XMM0_Da +
             *(float *)(*(longlong *)(param_1 + 8) + uVar4 * 8) * (fVar2 - extraout_XMM0_Da);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar4 + 1,uVar1,&UNK_14335e4f8);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar4,uVar1,&UNK_14335e4e0);
}

