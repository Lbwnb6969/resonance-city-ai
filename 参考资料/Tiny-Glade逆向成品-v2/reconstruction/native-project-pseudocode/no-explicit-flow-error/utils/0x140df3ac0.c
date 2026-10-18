// VA 0x140df3ac0, PDB extent 841 bytes
// utils::geometry::rectangle::Rectangle2d::as_curve3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::as_curve3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 841 */

longlong * pdb_140df3ac0(longlong *param_1,undefined8 *param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lStack_f0;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  fVar6 = *(float *)(param_2 + 2);
  fVar11 = *(float *)((longlong)param_2 + 0x14);
  if (fVar6 * fVar11 <= 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffce0);
  }
  fVar9 = (float)*param_2;
  fVar10 = (float)((ulonglong)*param_2 >> 0x20);
  uVar2 = param_2[1];
  fVar7 = (float)uVar2;
  fVar1 = *(float *)((longlong)param_2 + 0xc);
  pdb_14007ee60();
  uStack_98 = (float *)pub_1406abab0(0x30,4);
  if (uStack_98 != (float *)0x0) {
    fVar5 = fVar6 * _DAT_142e36f50;
    fVar4 = fVar11 * _DAT_142e36f38;
    fVar3 = (float)(_UNK_142e37824 ^ (uint)fVar10);
    fVar11 = fVar11 * _DAT_142e36f50;
    fVar6 = fVar6 * _DAT_142e36f38;
    fVar8 = _DAT_142e377f0 + param_3;
    *uStack_98 = fVar4 * fVar3 + fVar6 * fVar9 + fVar7;
    uStack_98[1] = fVar8;
    uStack_98[2] = fVar4 * fVar9 + fVar6 * fVar10 + (float)((ulonglong)uVar2 >> 0x20);
    uStack_98[3] = fVar11 * fVar3 + fVar6 * fVar9 + fVar7;
    uStack_98[4] = param_3;
    uStack_98[5] = fVar11 * fVar9 + fVar6 * fVar10 + fVar1;
    uStack_98[6] = fVar7 + fVar11 * fVar3 + fVar5 * fVar9;
    uStack_98[7] = param_3;
    uStack_98[8] = fVar11 * fVar9 + fVar5 * fVar10 + fVar1;
    uStack_98[9] = fVar7 + fVar4 * fVar3 + fVar5 * fVar9;
    uStack_98[10] = param_3;
    uStack_98[0xb] = fVar4 * fVar9 + fVar5 * fVar10 + fVar1;
    uStack_a0 = 4;
    uStack_90 = 4;
    fStack_e8 = uStack_98[2];
    lStack_f0 = *(longlong *)uStack_98;
    uStack_81 = 1;
    pdb_142d7f010(&uStack_a0);
    uStack_98[0xe] = fStack_e8;
    *(longlong *)(uStack_98 + 0xc) = lStack_f0;
    uStack_90 = 5;
    fStack_b8 = (float)uStack_a0;
    uStack_b4 = uStack_a0._4_4_;
    uStack_b0 = (undefined4)uStack_98;
    uStack_ac = uStack_98._4_4_;
    uStack_a8 = 5;
    uStack_81 = 0;
    pdb_14148c570(&lStack_f0,&fStack_b8,0);
    if (!SBORROW8(0,lStack_f0)) {
      param_1[6] = lStack_c0;
      param_1[4] = lStack_d0;
      param_1[5] = lStack_c8;
      param_1[2] = CONCAT44(uStack_dc,uStack_e0);
      param_1[3] = lStack_d8;
      *param_1 = lStack_f0;
      param_1[1] = CONCAT44(uStack_e4,fStack_e8);
      return param_1;
    }
    fStack_b8 = fStack_e8;
    uStack_b4 = uStack_e4;
    uStack_b0 = uStack_e0;
    uStack_ac = uStack_dc;
    uStack_81 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433ecb08,0x2b,&fStack_b8,&UNK_1433ecae8,&UNK_1431ffcf8);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x30);
}

