// VA 0x141f48130, PDB extent 400 bytes
// system_roof::deferred_record_roof_history::roof_record_history
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/deferred_record_roof_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_roof::deferred_record_roof_history::roof_record_history
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/deferred_record_roof_history.rs
   Extent: 400 */

void pdb_141f48130(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  undefined8 uStack_90;
  byte *pbStack_88;
  
  lVar19 = param_2[1];
  uVar1 = *(ulonglong *)*param_2;
  uVar25 = 0;
  uVar16 = uVar1 - *(ulonglong *)(lVar19 + 0x18);
  if (uVar1 < *(ulonglong *)(lVar19 + 0x18)) {
    uVar16 = uVar25;
  }
  uVar15 = uVar1 - *(ulonglong *)(lVar19 + 0x38);
  if (uVar1 < *(ulonglong *)(lVar19 + 0x38)) {
    uVar15 = uVar25;
  }
  uVar1 = *(ulonglong *)(lVar19 + 0x10);
  uVar2 = *(ulonglong *)(lVar19 + 0x30);
  bVar26 = uVar2 < uVar15;
  uVar21 = uVar2 - uVar15;
  uVar22 = uVar21;
  if (bVar26) {
    uVar22 = uVar25;
  }
  bVar27 = uVar1 < uVar16;
  uVar17 = uVar1 - uVar16;
  uVar18 = uVar17;
  if (bVar27) {
    uVar18 = uVar25;
  }
  lVar20 = *(longlong *)(lVar19 + 8);
  uVar24 = uVar22 + uVar18;
  if (!bVar27 && uVar17 != 0 || !bVar26 && uVar21 != 0) {
    uVar24 = uVar25;
  }
  lVar23 = *(longlong *)(lVar19 + 0x28);
  *(ulonglong *)*param_2 = *(longlong *)(lVar19 + 0x40) - uVar24;
  if (!bVar27 && uVar17 != 0 || !bVar26 && uVar21 != 0) {
    lVar23 = lVar23 + uVar15 * 0x98;
    lVar20 = lVar20 + uVar16 * 0x98;
    if (uVar1 < uVar16) {
      lVar20 = 8;
    }
    lVar19 = 0;
    if (uVar16 < uVar1) {
      lVar19 = lVar20 + -0x98 + uVar18 * 0x98;
    }
    if (uVar2 < uVar15) {
      lVar23 = 8;
    }
    lVar20 = lVar23 + -0x98 + uVar22 * 0x98;
    if (uVar2 <= uVar15) {
      lVar20 = lVar19;
    }
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar3 = *param_1;
    uVar13 = *(undefined8 *)(lVar20 + 0x10);
    uVar14 = *(undefined8 *)(lVar20 + 0x18);
    uVar5 = *(undefined4 *)(lVar20 + 0x20);
    uVar6 = *(undefined4 *)(lVar20 + 0x24);
    uVar7 = *(undefined4 *)(lVar20 + 0x28);
    uVar8 = *(undefined4 *)(lVar20 + 0x2c);
    uVar4 = *(undefined8 *)(lVar20 + 0x5c);
    uVar9 = *(undefined4 *)(lVar20 + 100);
    uVar10 = *(undefined4 *)(lVar20 + 0x68);
    uVar11 = *(undefined4 *)(lVar20 + 0x6c);
    uVar12 = *(undefined4 *)(lVar20 + 0x70);
    pdb_14007ee60();
    pbStack_88 = pub_1406abab0(0x50,8);
    if (pbStack_88 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    pbStack_88[0] = 1;
    pbStack_88[1] = 0;
    pbStack_88[2] = 0;
    pbStack_88[3] = 0;
    pbStack_88[4] = 0;
    pbStack_88[5] = 0;
    pbStack_88[6] = 0;
    pbStack_88[7] = 0;
    pbStack_88[8] = 1;
    pbStack_88[9] = 0;
    pbStack_88[10] = 0;
    pbStack_88[0xb] = 0;
    pbStack_88[0xc] = 0;
    pbStack_88[0xd] = 0;
    pbStack_88[0xe] = 0;
    pbStack_88[0xf] = 0;
    pbStack_88[0x10] = 2;
    *(undefined4 *)(pbStack_88 + 0x14) = uVar6;
    *(undefined4 *)(pbStack_88 + 0x18) = uVar5;
    *(undefined4 *)(pbStack_88 + 0x1c) = uVar7;
    *(undefined4 *)(pbStack_88 + 0x20) = uVar8;
    *(undefined4 *)(pbStack_88 + 0x24) = uVar10;
    *(undefined4 *)(pbStack_88 + 0x28) = uVar9;
    *(undefined4 *)(pbStack_88 + 0x2c) = uVar11;
    *(undefined4 *)(pbStack_88 + 0x30) = uVar12;
    *(undefined8 *)(pbStack_88 + 0x38) = uVar13;
    *(undefined8 *)(pbStack_88 + 0x40) = uVar14;
    *(undefined8 *)(pbStack_88 + 0x48) = uVar4;
    uStack_90 = 8;
    pdb_140ae5180(uVar3,&uStack_90,&UNK_1434321e8);
  }
  return;
}

