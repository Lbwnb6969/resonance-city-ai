// VA 0x140defdf0, PDB extent 306 bytes
// utils::geometry::circle::Circle2d::as_curve3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::as_curve3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 306 */

longlong * pdb_140defdf0(longlong *param_1,longlong param_2,float param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  fVar3 = (float)pub_142e329c0((*(float *)(param_2 + 8) * _DAT_142f57bcc) / param_3);
  uVar2 = (longlong)(fVar3 - _DAT_142e36f2c) & (longlong)fVar3 >> 0x3f | (longlong)fVar3;
  if (fVar3 < 0.0) {
    uVar2 = 0;
  }
  uVar1 = 0xffffffffffffffff;
  if (fVar3 <= _DAT_142e36f30) {
    uVar1 = uVar2;
  }
  uStack_78 = 3;
  if (3 < uVar1) {
    uStack_78 = uVar1;
  }
  uStack_70 = 0;
  lStack_80 = param_2;
  uStack_68 = uStack_78;
  uStack_60 = param_4;
  pdb_141e3aec0(&uStack_48,&lStack_80);
  pdb_14148c570(&lStack_80,&uStack_48,0);
  if (!SBORROW8(0,lStack_80)) {
    param_1[6] = lStack_50;
    param_1[4] = CONCAT44(uStack_5c,uStack_60);
    param_1[5] = lStack_58;
    param_1[2] = uStack_70;
    param_1[3] = uStack_68;
    *param_1 = lStack_80;
    param_1[1] = uStack_78;
    return param_1;
  }
  uStack_48 = (undefined4)uStack_78;
  uStack_44 = uStack_78._4_4_;
  uStack_40 = (undefined4)uStack_70;
  uStack_3c = uStack_70._4_4_;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1433ecb08,0x2b,&uStack_48,&UNK_1433ecae8,&UNK_1431ff870);
}

