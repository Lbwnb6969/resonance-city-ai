// VA 0x1406c1f10, PDB extent 1226 bytes
// system_roof::delete_roof::mark_roof_for_deletion
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/delete_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_roof::delete_roof::mark_roof_for_deletion
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/delete_roof.rs
   Extent: 1226 */

void pdb_1406c1f10(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint *puVar18;
  longlong *plVar19;
  undefined4 uStack_d7;
  undefined4 uStack_d3;
  undefined4 uStack_cf;
  undefined4 uStack_cb;
  undefined3 uStack_c7;
  undefined4 uStack_c4;
  undefined1 auStack_bc [8];
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  longlong lStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_78 = 0;
  pbStack_70 = (byte *)0x8;
  lStack_68 = 0;
  puVar4 = (ulonglong *)*param_1;
  lVar5 = param_1[1];
  uVar13 = *puVar4;
  uVar16 = 0;
  uVar11 = uVar13 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar11 = uVar16;
  }
  uVar15 = uVar13 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar15 = uVar16;
  }
  lVar9 = uVar11 * 0x18 + *(longlong *)(lVar5 + 8);
  uVar13 = *(ulonglong *)(lVar5 + 0x10) - uVar11;
  if (*(ulonglong *)(lVar5 + 0x10) < uVar11) {
    lVar9 = 8;
    uVar13 = uVar16;
  }
  lVar12 = uVar15 * 0x18 + *(longlong *)(lVar5 + 0x28);
  uVar11 = *(ulonglong *)(lVar5 + 0x30) - uVar15;
  if (*(ulonglong *)(lVar5 + 0x30) < uVar15) {
    lVar12 = 8;
    uVar11 = uVar16;
  }
  *puVar4 = (*(longlong *)(lVar5 + 0x40) - uVar11) - uVar13;
  lVar5 = lVar9 + uVar13 * 0x18;
  lVar1 = lVar12 + uVar11 * 0x18;
  lStack_80 = param_3;
  plStack_58 = param_2;
  plStack_50 = param_4;
  do {
    lVar8 = lStack_68;
    if ((lVar9 == 0) || (lVar9 == lVar5)) {
      if ((lVar12 == 0) || (lVar12 == lVar1)) break;
      *puVar4 = *puVar4 + 1;
      uVar6 = *(undefined8 *)(lVar12 + 8);
      lVar12 = lVar12 + 0x18;
      lVar9 = 0;
    }
    else {
      *puVar4 = *puVar4 + 1;
      uVar6 = *(undefined8 *)(lVar9 + 8);
      lVar9 = lVar9 + 0x18;
    }
    if (lStack_68 == lStack_78) {
      pdb_142d7e8a0(&lStack_78);
    }
    *(undefined8 *)(pbStack_70 + lVar8 * 8) = uVar6;
    lStack_68 = lVar8 + 1;
  } while( true );
  lStack_90 = *plStack_58;
  puVar18 = *(uint **)(lStack_90 + 0xf8);
  plStack_60 = *(longlong **)(lStack_80 + 8);
  if (plStack_60 == (longlong *)0x0) {
    plStack_60 = *(longlong **)(lStack_80 + 0x10);
  }
  lVar5 = plStack_58[1];
  puVar17 = puVar18 + *(longlong *)(lStack_90 + 0x100);
  lStack_80 = CONCAT71(lStack_80._1_7_,*(undefined1 *)(lStack_90 + 0x108));
  uStack_84 = *(undefined4 *)((longlong)plStack_50 + 0x1c);
  plStack_58 = (longlong *)*plStack_50;
  puStack_b0 = (undefined4 *)plStack_50[2];
  lStack_a8 = (longlong)plStack_58 + 0x20;
  lVar9 = 0;
  lStack_a0 = 8;
  lStack_98 = 8;
  plStack_50 = (longlong *)0x0;
  uVar14 = 0;
LAB_1406c2106:
  do {
    if ((char)lStack_80 == '\0') {
      if (uVar14 == (uint)lVar9) {
        do {
          if (puVar18 == puVar17) goto LAB_1406c2354;
          uVar14 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)uVar14 * 0xa0);
        } while (lVar9 == 0);
        lVar12 = *(longlong *)(lVar5 + 0x100) + (ulonglong)uVar14 * 0xa0;
        uVar13 = (ulonglong)*(uint *)(lVar12 + 0x94);
        if (*(ulonglong *)(lStack_90 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar5 + 0x1a0) + 0x40 + uVar13 * 0x48)) {
          lVar1 = *(longlong *)(lVar5 + 0x1a0) + uVar13 * 0x48;
          uVar13 = *(ulonglong *)
                    (*(longlong *)(lVar1 + 0x38) + *(ulonglong *)(lStack_90 + 0x110) * 8);
          if (uVar13 == 0) goto LAB_1406c223b;
          plStack_50 = *(longlong **)(*(longlong *)(lVar1 + 0x18) + 0x10 + ~uVar13 * 0x30);
        }
        else {
LAB_1406c223b:
          plStack_50 = (longlong *)0x0;
        }
        lStack_98 = *(longlong *)(lVar12 + 0x50);
        uVar14 = 0;
      }
      puVar10 = (undefined8 *)(lStack_98 + (ulonglong)uVar14 * 0x10);
      uVar13 = (ulonglong)~*(uint *)(lStack_98 + 8 + (ulonglong)uVar14 * 0x10);
    }
    else {
      if (uVar14 == (uint)lVar9) {
        do {
          if (puVar18 == puVar17) goto LAB_1406c2354;
          uVar14 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)uVar14 * 0x48);
        } while (lVar9 == 0);
        lVar12 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)uVar14 * 0x48;
        if ((*(ulonglong *)(lStack_90 + 0x110) < *(ulonglong *)(lVar12 + 0x40)) &&
           (uVar13 = *(ulonglong *)
                      (*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lStack_90 + 0x110) * 8),
           uVar13 != 0)) {
          plStack_50 = *(longlong **)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar13 * 0x30);
        }
        else {
          plStack_50 = (longlong *)0x0;
        }
        lStack_a0 = *(longlong *)(lVar12 + 8);
        uVar14 = 0;
      }
      uVar13 = (ulonglong)uVar14;
      puVar10 = (undefined8 *)(lStack_a0 + uVar13 * 8);
    }
    plVar19 = (longlong *)(uVar13 * 0x58 + (longlong)plStack_50);
    uVar6 = *puVar10;
    if ((int)uVar6 == 0) {
LAB_1406c2354:
      if (lStack_78 != 0) {
        pub_1406abac0(pbStack_70,lStack_78 << 3,8);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    lVar12 = 0;
    do {
      if (lStack_68 << 3 == lVar12) goto LAB_1406c2106;
      pbVar2 = pbStack_70 + lVar12;
      lVar12 = lVar12 + 8;
    } while (*(longlong *)pbVar2 != *plVar19);
    lVar12 = plStack_60[2];
    uStack_88 = uVar14;
    if ((ulonglong)(*plStack_60 - lVar12) < 0x18) {
      pdb_142d7f1b0(plStack_60,lVar12,0x18,1,1);
    }
    lVar1 = plStack_60[1];
    *(code **)(lVar1 + lVar12) = pdb_140fc5e20;
    *(undefined8 *)(lVar1 + 8 + lVar12) = uVar6;
    *(undefined1 *)(lVar1 + 0x10 + lVar12) = 0;
    plStack_60[2] = lVar12 + 0x18;
    pdb_140b77b90(auStack_bc,plVar19);
    uVar7 = uStack_b4;
    uStack_cb._3_1_ = auStack_bc[0];
    uStack_c7 = auStack_bc._1_3_;
    uStack_c4 = auStack_bc._4_4_;
    *puStack_b0 = uStack_84;
    lVar12 = *(longlong *)((longlong)plStack_58 + 0x30);
    uVar6 = *(undefined8 *)((longlong)plStack_58 + 0x40);
    if (lVar12 == *(longlong *)((longlong)plStack_58 + 0x20)) {
      pdb_142d7ede0(lStack_a8);
    }
    lVar1 = *(longlong *)((longlong)plStack_58 + 0x28);
    *(undefined8 *)(lVar1 + lVar12 * 0x28) = uVar6;
    *(undefined1 *)(lVar1 + 8 + lVar12 * 0x28) = 1;
    puVar10 = (undefined8 *)(lVar1 + 0x14 + lVar12 * 0x28);
    *puVar10 = CONCAT35(uStack_c7,CONCAT41(uStack_cb,uStack_cf._3_1_));
    puVar10[1] = CONCAT44(uVar7,uStack_c4);
    puVar3 = (undefined4 *)(lVar1 + 9 + lVar12 * 0x28);
    *puVar3 = uStack_d7;
    puVar3[1] = uStack_d3;
    puVar3[2] = uStack_cf;
    puVar3[3] = uStack_cb;
    *(longlong *)((longlong)plStack_58 + 0x30) = lVar12 + 1;
    *(longlong *)((longlong)plStack_58 + 0x40) = *(longlong *)((longlong)plStack_58 + 0x40) + 1;
    uVar14 = uStack_88;
  } while( true );
}

