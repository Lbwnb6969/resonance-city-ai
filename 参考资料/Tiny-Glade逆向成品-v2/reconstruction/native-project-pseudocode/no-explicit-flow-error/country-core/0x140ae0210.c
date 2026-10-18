// VA 0x140ae0210, PDB extent 1217 bytes
// country_core::systems::ui_clutter::debug_spawn_clutter::debug_spawn_all_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/debug_spawn_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_clutter::debug_spawn_clutter::debug_spawn_all_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/debug_spawn_clutter.rs
   Extent: 1217 */

void pdb_140ae0210(byte *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  byte *pbVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined1 *puStack_d8;
  code *pcStack_d0;
  longlong *plStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)*param_2;
  lVar24 = param_2[1];
  uVar3 = *puVar2;
  pbVar19 = (byte *)0x0;
  pbVar17 = (byte *)(uVar3 - *(ulonglong *)(lVar24 + 0x18));
  if (uVar3 < *(ulonglong *)(lVar24 + 0x18)) {
    pbVar17 = pbVar19;
  }
  pbVar11 = (byte *)(uVar3 - *(ulonglong *)(lVar24 + 0x38));
  if (uVar3 < *(ulonglong *)(lVar24 + 0x38)) {
    pbVar11 = pbVar19;
  }
  pbVar4 = *(byte **)(lVar24 + 0x10);
  pbStack_a0 = *(byte **)(lVar24 + 0x30);
  pbVar15 = pbStack_a0 + -(longlong)pbVar11;
  if (pbStack_a0 < pbVar11) {
    pbVar15 = pbVar19;
  }
  pbVar25 = pbVar4 + -(longlong)pbVar17;
  if (pbVar4 < pbVar17) {
    pbVar25 = pbVar19;
  }
  uVar3 = *(ulonglong *)(lVar24 + 0x40);
  lVar14 = *(longlong *)(lVar24 + 8);
  lVar24 = *(longlong *)(lVar24 + 0x28);
  *puVar2 = (uVar3 - (longlong)pbVar15) - (longlong)pbVar25;
  plStack_c8 = param_3;
  pbStack_a8 = param_1;
  if (pbVar4 >= pbVar17 && pbVar4 + -(longlong)pbVar17 != (byte *)0x0 ||
      pbStack_a0 >= pbVar11 && pbStack_a0 + -(longlong)pbVar11 != (byte *)0x0) {
    lVar24 = lVar24 + (longlong)pbVar11 * 0x10;
    lVar14 = lVar14 + (longlong)pbVar17 * 0x10;
    if (pbVar4 < pbVar17) {
      lVar14 = 8;
    }
    lVar20 = 0;
    if (pbVar17 < pbVar4) {
      lVar20 = lVar14 + -0x10 + (longlong)pbVar25 * 0x10;
    }
    if (pbStack_a0 < pbVar11) {
      lVar24 = 8;
    }
    lVar24 = lVar24 + -0x10 + (longlong)pbVar15 * 0x10;
    if (pbStack_a0 <= pbVar11) {
      lVar24 = lVar20;
    }
    *puVar2 = uVar3;
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    pdb_140ae4960(*param_5,param_6);
    uStack_91 = *(undefined1 *)(lVar24 + 8);
    puStack_d8 = &uStack_91;
    pcStack_d0 = pdb_140c2a9d0;
    pdb_140f60760(&uStack_c0,&UNK_14306af45);
    pbStack_a0 = pbStack_b8;
    uVar9 = pdb_140e940b0(pbStack_b8,uStack_b0);
    if (uStack_c0 != 0) {
      pub_1406abac0(pbStack_a0,uStack_c0,1);
    }
    *(undefined4 *)plStack_c8[2] = *(undefined4 *)((longlong)plStack_c8 + 0x1c);
    lVar24 = *plStack_c8;
    lVar14 = *(longlong *)(lVar24 + 0x30);
    uVar10 = *(undefined8 *)(lVar24 + 0x40);
    if (lVar14 == *(longlong *)(lVar24 + 0x20)) {
      pdb_142d7ebb0(lVar24 + 0x20);
    }
    lVar20 = *(longlong *)(lVar24 + 0x28);
    lVar12 = lVar14 * 0x58;
    *(undefined8 *)(lVar20 + lVar12) = 6;
    *(undefined8 *)(lVar20 + 8 + lVar12) = uVar9;
    *(undefined4 *)(lVar20 + 0x10 + lVar12) = 2;
    *(undefined1 *)(lVar20 + 0x3f + lVar12) = 3;
    puVar1 = (undefined8 *)(lVar20 + 0x40 + lVar12);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar20 + 0x50 + lVar12) = uVar10;
    *(longlong *)(lVar24 + 0x30) = lVar14 + 1;
    *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
  }
  puVar2 = *(ulonglong **)pbStack_a8;
  lVar24 = *(longlong *)(pbStack_a8 + 8);
  uVar3 = *puVar2;
  uVar16 = 0;
  uVar18 = uVar3 - *(ulonglong *)(lVar24 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar24 + 0x18)) {
    uVar18 = uVar16;
  }
  uVar22 = uVar3 - *(ulonglong *)(lVar24 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar24 + 0x38)) {
    uVar22 = uVar16;
  }
  uVar3 = *(ulonglong *)(lVar24 + 0x30);
  uVar21 = uVar3 - uVar22;
  if (uVar22 > uVar3) {
    uVar21 = uVar16;
  }
  uVar5 = *(ulonglong *)(lVar24 + 0x10);
  uVar23 = uVar5 - uVar18;
  if (uVar18 > uVar5) {
    uVar23 = uVar16;
  }
  uVar16 = *(ulonglong *)(lVar24 + 0x40);
  *puVar2 = uVar16 - (uVar23 + uVar21);
  if (uVar18 <= uVar5 && uVar5 - uVar18 != 0 || uVar22 <= uVar3 && uVar3 - uVar22 != 0) {
    *puVar2 = uVar16;
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    pdb_140ae4960(*param_5,param_6);
    fVar8 = _DAT_14304ee3c;
    uVar9 = *param_4;
    pbStack_a0 = (byte *)CONCAT44(pbStack_a0._4_4_,*(undefined4 *)((longlong)plStack_c8 + 0x1c));
    lVar24 = *plStack_c8;
    puVar6 = (undefined4 *)plStack_c8[2];
    lVar14 = 0;
    do {
      fVar29 = SQRT((float)lVar14);
      fVar28 = (float)lVar14 * fVar8;
      fVar26 = (float)pub_142e329e0(fVar28);
      fVar26 = fVar26 * fVar29;
      fVar28 = (float)pub_142e32b30(fVar28);
      fVar28 = fVar28 * fVar29;
      uVar27 = pdb_1419c1ac0(uVar9,fVar26,fVar28);
      uStack_91 = (&UNK_14302e0d0)[lVar14];
      puStack_d8 = &uStack_91;
      pcStack_d0 = pdb_140c2a9d0;
      pdb_140f60760(&uStack_c0,&UNK_14306af45,&puStack_d8);
      pbStack_a8 = pbStack_b8;
      uVar10 = pdb_140e940b0(pbStack_b8,uStack_b0);
      if (uStack_c0 != 0) {
        pub_1406abac0(pbStack_a8,uStack_c0,1);
      }
      *puVar6 = pbStack_a0._0_4_;
      lVar20 = *(longlong *)(lVar24 + 0x30);
      uVar7 = *(undefined8 *)(lVar24 + 0x40);
      if (lVar20 == *(longlong *)(lVar24 + 0x20)) {
        pdb_142d7ebb0(lVar24 + 0x20);
      }
      lVar14 = lVar14 + 1;
      lVar12 = *(longlong *)(lVar24 + 0x28);
      lVar13 = lVar20 * 0x58;
      *(undefined8 *)(lVar12 + lVar13) = 6;
      *(undefined8 *)(lVar12 + 8 + lVar13) = uVar10;
      *(undefined4 *)(lVar12 + 0x10 + lVar13) = 2;
      *(undefined1 *)(lVar12 + 0x3f + lVar13) = 3;
      *(undefined4 *)(lVar12 + 0x40 + lVar13) = 0;
      *(float *)(lVar12 + 0x44 + lVar13) = fVar26;
      *(undefined4 *)(lVar12 + 0x48 + lVar13) = uVar27;
      *(float *)(lVar12 + 0x4c + lVar13) = fVar28;
      *(undefined8 *)(lVar12 + 0x50 + lVar13) = uVar7;
      *(longlong *)(lVar24 + 0x30) = lVar20 + 1;
      *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
    } while (lVar14 != 0x2e);
  }
  return;
}

