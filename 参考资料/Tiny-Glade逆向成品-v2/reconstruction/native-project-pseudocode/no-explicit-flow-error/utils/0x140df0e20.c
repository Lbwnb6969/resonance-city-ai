// VA 0x140df0e20, PDB extent 643 bytes
// utils::geometry::rectangle::Rectangle2d::try_as_curve2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::try_as_curve2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 643 */

undefined8 pdb_140df0e20(undefined8 param_1,undefined8 *param_2)

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
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffaf8);
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
    pdb_140080c90(param_1,&uStack_a8,0);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x20);
}

