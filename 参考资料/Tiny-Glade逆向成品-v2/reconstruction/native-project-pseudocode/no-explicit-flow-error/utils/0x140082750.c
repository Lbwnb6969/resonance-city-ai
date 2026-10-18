// VA 0x140082750, PDB extent 837 bytes
// utils::curve::Curve::reinterpret_as_curve2<utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::reinterpret_as_curve2<utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 837 */

ulonglong * pdb_140082750(ulonglong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulonglong uVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  
  uVar11 = *(ulonglong *)(param_2 + 0x10);
  pbVar21 = (byte *)0x4;
  pbVar17 = (byte *)0x4;
  if (uVar11 != 0) {
    pbVar18 = *(byte **)(param_2 + 8);
    pdb_14007ee60();
    pbVar17 = pub_1406abab0(uVar11 * 8,4);
    if (pbVar17 == (byte *)0x0) {
      pdb_142dc7e2a(4,uVar11 * 8);
      goto LAB_140082a2e;
    }
    if ((uVar11 < 10) || (pbVar17 < pbVar18 + uVar11 * 0xc && pbVar18 < pbVar17 + uVar11 * 8)) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar11 & 0xfffffffffffffffc;
      pbVar19 = pbVar18 + 0x2c;
      uVar22 = 0;
      do {
        uVar4 = *(undefined4 *)(pbVar19 + -0x24);
        uVar5 = *(undefined4 *)(pbVar19 + -0x20);
        uVar6 = *(undefined4 *)(pbVar19 + -0x18);
        uVar7 = *(undefined4 *)(pbVar19 + -0xc);
        uVar8 = *(undefined4 *)(pbVar19 + -0x14);
        uVar9 = *(undefined4 *)pbVar19;
        uVar10 = *(undefined4 *)(pbVar19 + -8);
        pbVar1 = pbVar17 + uVar22 * 8;
        *(undefined4 *)pbVar1 = *(undefined4 *)(pbVar19 + -0x2c);
        *(undefined4 *)(pbVar1 + 4) = uVar4;
        *(undefined4 *)(pbVar1 + 8) = uVar5;
        *(undefined4 *)(pbVar1 + 0xc) = uVar6;
        pbVar1 = pbVar17 + uVar22 * 8 + 0x10;
        *(undefined4 *)pbVar1 = uVar8;
        *(undefined4 *)(pbVar1 + 4) = uVar7;
        *(undefined4 *)(pbVar1 + 8) = uVar10;
        *(undefined4 *)(pbVar1 + 0xc) = uVar9;
        uVar22 = uVar22 + 4;
        pbVar19 = pbVar19 + 0x30;
      } while (uVar23 != uVar22);
      if (uVar11 == uVar23) goto LAB_1400828d8;
    }
    uVar22 = uVar23;
    if ((uVar11 & 1) != 0) {
      uVar4 = *(undefined4 *)(pbVar18 + uVar23 * 0xc + 8);
      *(undefined4 *)(pbVar17 + uVar23 * 8) = *(undefined4 *)(pbVar18 + uVar23 * 0xc);
      *(undefined4 *)(pbVar17 + uVar23 * 8 + 4) = uVar4;
      uVar22 = uVar23 | 1;
    }
    if (uVar11 != (uVar23 | 1)) {
      pbVar18 = pbVar18 + uVar22 * 0xc + 0x14;
      do {
        uVar4 = *(undefined4 *)(pbVar18 + -0xc);
        *(undefined4 *)(pbVar17 + uVar22 * 8) = *(undefined4 *)(pbVar18 + -0x14);
        *(undefined4 *)(pbVar17 + uVar22 * 8 + 4) = uVar4;
        uVar4 = *(undefined4 *)pbVar18;
        *(undefined4 *)(pbVar17 + uVar22 * 8 + 8) = *(undefined4 *)(pbVar18 + -8);
        *(undefined4 *)(pbVar17 + uVar22 * 8 + 0xc) = uVar4;
        uVar22 = uVar22 + 2;
        pbVar18 = pbVar18 + 0x18;
      } while (uVar11 != uVar22);
    }
  }
LAB_1400828d8:
  uVar23 = *(ulonglong *)(param_2 + 0x28);
  if (uVar23 != 0) {
    lVar12 = *(longlong *)(param_2 + 0x20);
    pbVar18 = (byte *)(uVar23 * 4);
    pdb_14007ee60();
    pbVar21 = pub_1406abab0((ulonglong)pbVar18,4);
    if (pbVar21 == (byte *)0x0) {
LAB_140082a2e:
      pdb_142dc7e2a(4,pbVar18);
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    if ((ulonglong)((longlong)pbVar21 - lVar12) < 0x20 || uVar23 < 8) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar23 & 0xfffffffffffffff8;
      uVar22 = 0;
      do {
        puVar2 = (undefined8 *)(lVar12 + uVar22 * 4);
        uVar14 = puVar2[1];
        puVar3 = (undefined8 *)(lVar12 + 0x10 + uVar22 * 4);
        uVar15 = *puVar3;
        uVar16 = puVar3[1];
        *(undefined8 *)(pbVar21 + uVar22 * 4) = *puVar2;
        *(undefined8 *)(pbVar21 + uVar22 * 4 + 8) = uVar14;
        *(undefined8 *)(pbVar21 + uVar22 * 4 + 0x10) = uVar15;
        *(undefined8 *)(pbVar21 + uVar22 * 4 + 0x10 + 8) = uVar16;
        uVar22 = uVar22 + 8;
      } while (uVar24 != uVar22);
      if (uVar23 == uVar24) goto LAB_1400829eb;
    }
    uVar20 = uVar24;
    for (uVar22 = uVar23 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)(pbVar21 + uVar20 * 4) = *(undefined4 *)(lVar12 + uVar20 * 4);
      uVar20 = uVar20 + 1;
    }
    if (uVar24 - uVar23 < 0xfffffffffffffffd) {
      do {
        *(undefined4 *)(pbVar21 + uVar20 * 4) = *(undefined4 *)(lVar12 + uVar20 * 4);
        *(undefined4 *)(pbVar21 + uVar20 * 4 + 4) = *(undefined4 *)(lVar12 + 4 + uVar20 * 4);
        *(undefined4 *)(pbVar21 + uVar20 * 4 + 8) = *(undefined4 *)(lVar12 + 8 + uVar20 * 4);
        *(undefined4 *)(pbVar21 + uVar20 * 4 + 0xc) = *(undefined4 *)(lVar12 + 0xc + uVar20 * 4);
        uVar20 = uVar20 + 4;
      } while (uVar23 != uVar20);
    }
  }
LAB_1400829eb:
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  *param_1 = uVar11;
  param_1[1] = (ulonglong)pbVar17;
  param_1[2] = uVar11;
  param_1[3] = uVar23;
  param_1[4] = (ulonglong)pbVar21;
  param_1[5] = uVar23;
  *(undefined4 *)(param_1 + 6) = uVar4;
  return param_1;
}

