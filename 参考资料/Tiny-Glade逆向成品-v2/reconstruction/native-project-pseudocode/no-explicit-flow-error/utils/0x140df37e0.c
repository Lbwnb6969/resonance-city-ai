// VA 0x140df37e0, PDB extent 723 bytes
// utils::geometry::rectangle::Rectangle2d::as_curve2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::as_curve2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 723 */

longlong * pdb_140df37e0(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  fVar9 = *(float *)(param_2 + 2);
  fVar8 = *(float *)((longlong)param_2 + 0x14);
  if (fVar9 * fVar8 <= 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffcb0);
  }
  fVar10 = (float)*param_2;
  fVar11 = (float)((ulonglong)*param_2 >> 0x20);
  fVar4 = (float)param_2[1];
  fVar5 = (float)((ulonglong)param_2[1] >> 0x20);
  pdb_14007ee60();
  uStack_88 = (float *)pub_1406abab0(0x20,4);
  if (uStack_88 != (float *)0x0) {
    fVar2 = (float)(_UNK_142e37824 ^ (uint)fVar11);
    fVar3 = fVar9 * _DAT_142e36f38;
    fVar1 = _DAT_142e36f38 * fVar8;
    fVar6 = fVar1 * fVar2 + fVar3 * fVar10 + fVar4;
    fVar7 = fVar1 * fVar10 + fVar3 * fVar11 + fVar5;
    fVar9 = fVar9 * _DAT_142e36f50;
    fVar8 = fVar8 * _DAT_142e36f50;
    *uStack_88 = fVar6;
    uStack_88[1] = _DAT_142e377f0 + fVar7;
    uStack_88[2] = fVar8 * fVar2 + fVar3 * fVar10 + fVar4;
    uStack_88[3] = fVar8 * fVar10 + fVar3 * fVar11 + fVar5;
    uStack_88[4] = fVar8 * fVar2 + fVar9 * fVar10 + fVar4;
    *(ulonglong *)(uStack_88 + 5) =
         CONCAT44(fVar1 * fVar2 + fVar9 * fVar10 + fVar4,fVar8 * fVar10 + fVar9 * fVar11 + fVar5);
    uStack_88[7] = fVar5 + fVar1 * fVar10 + fVar9 * fVar11;
    uStack_90 = 4;
    uStack_80 = 4;
    uStack_71 = 1;
    pdb_142d8d7f0(&uStack_90);
    *(ulonglong *)(uStack_88 + 8) = CONCAT44(fVar7,fVar6);
    uStack_80 = 5;
    uStack_a8 = (undefined4)uStack_90;
    uStack_a4 = uStack_90._4_4_;
    uStack_a0 = (undefined4)uStack_88;
    uStack_9c = uStack_88._4_4_;
    uStack_98 = 5;
    uStack_71 = 0;
    pdb_140080c90(&lStack_e0,&uStack_a8,0);
    if (!SBORROW8(0,lStack_e0)) {
      param_1[6] = lStack_b0;
      param_1[4] = lStack_c0;
      param_1[5] = lStack_b8;
      param_1[2] = CONCAT44(uStack_cc,uStack_d0);
      param_1[3] = lStack_c8;
      *param_1 = lStack_e0;
      param_1[1] = CONCAT44(uStack_d4,uStack_d8);
      return param_1;
    }
    uStack_a8 = uStack_d8;
    uStack_a4 = uStack_d4;
    uStack_a0 = uStack_d0;
    uStack_9c = uStack_cc;
    uStack_71 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433ecb08,0x2b,&uStack_a8,&UNK_1433ecae8,&UNK_1431ffcc8);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x20);
}

