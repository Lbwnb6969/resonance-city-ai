// VA 0x1419acfa0, PDB extent 512 bytes
// utils::curve::Curve::crashy_to_curve2<utils::curve::CurveCoordSemanticThresholded3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::crashy_to_curve2<utils::curve::CurveCoordSemanticThresholded3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 512 */

longlong * pdb_1419acfa0(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  code *pcVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  
  uVar9 = *(ulonglong *)(param_2 + 0x10);
  if (uVar9 == 0) {
    pbStack_70 = (byte *)0x4;
  }
  else {
    pbVar14 = *(byte **)(param_2 + 8);
    pdb_14007ee60();
    pbStack_70 = pub_1406abab0(uVar9 * 8,4);
    if (pbStack_70 == (byte *)0x0) {
      pdb_142dc7e2a(4,uVar9 * 8);
      pcVar10 = (code *)swi(3);
      plVar11 = (longlong *)(*pcVar10)();
      return plVar11;
    }
    if ((uVar9 < 10) || (pbStack_70 < pbVar14 + uVar9 * 0xc && pbVar14 < pbStack_70 + uVar9 * 8)) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar9 & 0xfffffffffffffffc;
      pbVar15 = pbVar14 + 0x2c;
      uVar12 = 0;
      do {
        uVar2 = *(undefined4 *)(pbVar15 + -0x24);
        uVar3 = *(undefined4 *)(pbVar15 + -0x20);
        uVar4 = *(undefined4 *)(pbVar15 + -0x18);
        uVar5 = *(undefined4 *)(pbVar15 + -0xc);
        uVar6 = *(undefined4 *)(pbVar15 + -0x14);
        uVar7 = *(undefined4 *)pbVar15;
        uVar8 = *(undefined4 *)(pbVar15 + -8);
        pbVar1 = pbStack_70 + uVar12 * 8;
        *(undefined4 *)pbVar1 = *(undefined4 *)(pbVar15 + -0x2c);
        *(undefined4 *)(pbVar1 + 4) = uVar2;
        *(undefined4 *)(pbVar1 + 8) = uVar3;
        *(undefined4 *)(pbVar1 + 0xc) = uVar4;
        pbVar1 = pbStack_70 + uVar12 * 8 + 0x10;
        *(undefined4 *)pbVar1 = uVar6;
        *(undefined4 *)(pbVar1 + 4) = uVar5;
        *(undefined4 *)(pbVar1 + 8) = uVar8;
        *(undefined4 *)(pbVar1 + 0xc) = uVar7;
        uVar12 = uVar12 + 4;
        pbVar15 = pbVar15 + 0x30;
      } while (uVar13 != uVar12);
      if (uVar9 == uVar13) goto LAB_1419ad08e;
    }
    uVar12 = uVar13;
    if ((uVar9 & 1) != 0) {
      uVar2 = *(undefined4 *)(pbVar14 + uVar13 * 0xc + 8);
      *(undefined4 *)(pbStack_70 + uVar13 * 8) = *(undefined4 *)(pbVar14 + uVar13 * 0xc);
      *(undefined4 *)(pbStack_70 + uVar13 * 8 + 4) = uVar2;
      uVar12 = uVar13 | 1;
    }
    if (uVar9 != (uVar13 | 1)) {
      pbVar14 = pbVar14 + uVar12 * 0xc + 0x14;
      do {
        uVar2 = *(undefined4 *)(pbVar14 + -0xc);
        *(undefined4 *)(pbStack_70 + uVar12 * 8) = *(undefined4 *)(pbVar14 + -0x14);
        *(undefined4 *)(pbStack_70 + uVar12 * 8 + 4) = uVar2;
        uVar2 = *(undefined4 *)pbVar14;
        *(undefined4 *)(pbStack_70 + uVar12 * 8 + 8) = *(undefined4 *)(pbVar14 + -8);
        *(undefined4 *)(pbStack_70 + uVar12 * 8 + 0xc) = uVar2;
        uVar12 = uVar12 + 2;
        pbVar14 = pbVar14 + 0x18;
      } while (uVar9 != uVar12);
    }
  }
LAB_1419ad08e:
  uStack_78 = uVar9;
  uStack_68 = uVar9;
  pdb_140080c90(&lStack_58,&uStack_78,0);
  if (SBORROW8(0,lStack_58)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_78,&UNK_14335e258,&UNK_14335e958);
  }
  param_1[6] = lStack_28;
  param_1[4] = lStack_38;
  param_1[5] = lStack_30;
  param_1[2] = CONCAT44(uStack_44,uStack_48);
  param_1[3] = lStack_40;
  *param_1 = lStack_58;
  param_1[1] = CONCAT44(uStack_4c,uStack_50);
  return param_1;
}

