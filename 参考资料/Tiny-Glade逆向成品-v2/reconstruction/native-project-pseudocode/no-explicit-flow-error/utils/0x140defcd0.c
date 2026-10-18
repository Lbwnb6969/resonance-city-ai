// VA 0x140defcd0, PDB extent 281 bytes
// utils::geometry::circle::Circle2d::as_curve2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::as_curve2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 281 */

longlong * pdb_140defcd0(longlong *param_1,longlong param_2,float param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fVar3 = (float)pub_142e329c0((*(float *)(param_2 + 8) * _DAT_142f57bcc) / param_3);
  uVar2 = (longlong)(fVar3 - _DAT_142e36f2c) & (longlong)fVar3 >> 0x3f | (longlong)fVar3;
  if (fVar3 < 0.0) {
    uVar2 = 0;
  }
  uVar1 = 0xffffffffffffffff;
  if (fVar3 <= _DAT_142e36f30) {
    uVar1 = uVar2;
  }
  uStack_68 = 3;
  if (3 < uVar1) {
    uStack_68 = uVar1;
  }
  uStack_60 = 0;
  lStack_70 = param_2;
  uStack_58 = uStack_68;
  pdb_141e3b210(&uStack_38,&lStack_70);
  pdb_140080c90(&lStack_70,&uStack_38,0);
  if (!SBORROW8(0,lStack_70)) {
    param_1[6] = lStack_40;
    param_1[4] = lStack_50;
    param_1[5] = lStack_48;
    param_1[2] = uStack_60;
    param_1[3] = uStack_58;
    *param_1 = lStack_70;
    param_1[1] = uStack_68;
    return param_1;
  }
  uStack_38 = (undefined4)uStack_68;
  uStack_34 = uStack_68._4_4_;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1433ecb08,0x2b,&uStack_38,&UNK_1433ecae8,&UNK_1431ff858);
}

