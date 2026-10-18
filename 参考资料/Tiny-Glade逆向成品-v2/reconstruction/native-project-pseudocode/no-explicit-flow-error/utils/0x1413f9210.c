// VA 0x1413f9210, PDB extent 358 bytes
// utils::curve::Curve::crashy_resample<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 358 */

longlong * pdb_1413f9210(longlong *param_1,longlong param_2,float param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  if (*(ulonglong *)(param_2 + 0x10) < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306650,0x28,&UNK_143306678);
  }
  if ((param_3 == 0.0) && (!NAN(param_3))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306690,0x27,&UNK_1433066b8);
  }
  fVar3 = *(float *)(param_2 + 0x30);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433066d0,0x24,&UNK_1433066f8);
  }
  if (fVar3 <= _DAT_142e36f24) {
    fVar3 = _DAT_142e36f24;
  }
  fVar4 = param_3 / fVar3;
  if (_DAT_142e36f28 <= param_3 / fVar3) {
    fVar4 = _DAT_142e36f28;
  }
  fVar3 = (float)pub_142e32b00(_DAT_142e36f28 / fVar4);
  uVar1 = (longlong)(fVar3 - _DAT_142e36f2c) & (longlong)fVar3 >> 0x3f | (longlong)fVar3;
  if (fVar3 < 0.0) {
    uVar1 = 0;
  }
  uVar2 = 0xffffffffffffffff;
  if (fVar3 <= _DAT_142e36f30) {
    uVar2 = uVar1;
  }
  pdb_1413fa980(&lStack_50,param_2,uVar2 + 1 + (ulonglong)(uVar2 == 0),0);
  if (!SBORROW8(0,lStack_50)) {
    param_1[6] = lStack_20;
    param_1[4] = lStack_30;
    param_1[5] = lStack_28;
    param_1[2] = CONCAT44(uStack_3c,uStack_40);
    param_1[3] = lStack_38;
    *param_1 = lStack_50;
    param_1[1] = CONCAT44(uStack_44,uStack_48);
    return param_1;
  }
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143306430,0x2b,&uStack_68,&UNK_143306410,&UNK_143306710);
}

