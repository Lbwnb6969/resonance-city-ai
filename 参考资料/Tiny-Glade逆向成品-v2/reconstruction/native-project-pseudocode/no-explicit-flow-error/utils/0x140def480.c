// VA 0x140def480, PDB extent 348 bytes
// utils::geometry::circle::Circle2d::as_curve2_range
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::as_curve2_range
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 348 */

longlong *
pdb_140def480(longlong *param_1,longlong param_2,float param_3,float param_4,float param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  longlong lStack_90;
  undefined8 uStack_88;
  float fStack_80;
  float fStack_7c;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  
  fVar3 = (float)pub_142e329c0((param_5 - param_4) *
                               ((*(float *)(param_2 + 8) * _DAT_142f57bcc) / param_3));
  uVar2 = (longlong)(fVar3 - _DAT_142e36f2c) & (longlong)fVar3 >> 0x3f | (longlong)fVar3;
  if (fVar3 < 0.0) {
    uVar2 = 0;
  }
  uVar1 = 0xffffffffffffffff;
  if (fVar3 <= _DAT_142e36f30) {
    uVar1 = uVar2;
  }
  uStack_88 = 3;
  if (3 < uVar1) {
    uStack_88 = uVar1;
  }
  fStack_7c = param_5;
  lStack_78 = 0;
  lStack_90 = param_2;
  fStack_80 = param_4;
  uStack_70 = uStack_88;
  pdb_141e3b510(&uStack_58,&lStack_90);
  pdb_140080c90(&lStack_90,&uStack_58,0);
  if (!SBORROW8(0,lStack_90)) {
    param_1[6] = lStack_60;
    param_1[4] = uStack_70;
    param_1[5] = lStack_68;
    param_1[2] = CONCAT44(fStack_7c,fStack_80);
    param_1[3] = lStack_78;
    *param_1 = lStack_90;
    param_1[1] = uStack_88;
    return param_1;
  }
  uStack_58 = (undefined4)uStack_88;
  uStack_54 = uStack_88._4_4_;
  fStack_50 = fStack_80;
  fStack_4c = fStack_7c;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1433ecb08,0x2b,&uStack_58,&UNK_1433ecae8,&UNK_1431ff828);
}

