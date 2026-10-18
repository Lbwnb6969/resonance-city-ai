// VA 0x1406c23e0, PDB extent 1962 bytes
// system_roof::delete_roof::process_invalid_roof_notifications
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/delete_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_roof::delete_roof::process_invalid_roof_notifications
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/delete_roof.rs
   Extent: 1962 */

void pdb_1406c23e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  uint *puVar23;
  ulonglong uVar24;
  bool bVar25;
  longlong lStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined4 *puStack_e8;
  longlong lStack_e0;
  ulonglong *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  byte *pbStack_98;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined4 *puStack_68;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)*param_3;
  lVar3 = param_3[1];
  uVar12 = *puVar2;
  uVar24 = 0;
  uVar16 = uVar12 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar12 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar16 = uVar24;
  }
  uVar15 = uVar12 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar12 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar15 = uVar24;
  }
  uVar12 = *(ulonglong *)(lVar3 + 0x30);
  uVar18 = uVar12 - uVar15;
  if (uVar12 < uVar15) {
    uVar18 = uVar24;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x10);
  uVar20 = uVar4 - uVar16;
  if (uVar4 < uVar16) {
    uVar20 = uVar24;
  }
  uVar5 = *(ulonglong *)(lVar3 + 0x40);
  *puVar2 = uVar5 - (uVar20 + uVar18);
  if ((uVar4 < uVar16 || uVar4 - uVar16 == 0) && (uVar12 < uVar15 || uVar12 - uVar15 == 0)) {
    puStack_d8 = (ulonglong *)*param_2;
    lVar3 = param_2[1];
    uVar12 = *puStack_d8;
    uVar16 = uVar12 - *(ulonglong *)(lVar3 + 0x18);
    if (uVar12 < *(ulonglong *)(lVar3 + 0x18)) {
      uVar16 = uVar24;
    }
    uVar15 = uVar12 - *(ulonglong *)(lVar3 + 0x38);
    if (uVar12 < *(ulonglong *)(lVar3 + 0x38)) {
      uVar15 = uVar24;
    }
    uStack_d0 = (byte *)(uVar16 * 0x10 + *(longlong *)(lVar3 + 8));
    uVar12 = *(ulonglong *)(lVar3 + 0x10) - uVar16;
    if (*(ulonglong *)(lVar3 + 0x10) < uVar16) {
      uStack_d0 = (byte *)0x8;
      uVar12 = uVar24;
    }
    lStack_c0 = uVar15 * 0x10 + *(longlong *)(lVar3 + 0x28);
    lStack_70 = 8;
    uVar16 = *(ulonglong *)(lVar3 + 0x30) - uVar15;
    if (*(ulonglong *)(lVar3 + 0x30) < uVar15) {
      lStack_c0 = 8;
      uVar16 = uVar24;
    }
    lStack_b0 = uVar16 + uVar12;
    *puStack_d8 = *(longlong *)(lVar3 + 0x40) - lStack_b0;
    uStack_c8 = uStack_d0 + uVar12 * 0x10;
    lStack_b8 = uVar16 * 0x10 + lStack_c0;
    pdb_140fc81a0(&lStack_118,&puStack_d8);
    puStack_68 = (undefined4 *)*param_1;
    lVar3 = param_1[1];
    puVar23 = *(uint **)((longlong)puStack_68 + 0xf8);
    puVar1 = puVar23 + *(longlong *)((longlong)puStack_68 + 0x100);
    uStack_5c = CONCAT31(uStack_5c._1_3_,*(char *)((longlong)puStack_68 + 0x108));
    lStack_78 = CONCAT44(lStack_78._4_4_,*(undefined4 *)((longlong)param_4 + 0x1c));
    uStack_100 = *param_4;
    puStack_88 = (undefined4 *)param_4[2];
    uVar19 = *(undefined4 *)((longlong)param_5 + 0x1c);
    lStack_80 = *param_5;
    puVar14 = (undefined4 *)param_5[2];
    lStack_108 = lStack_108 << 3;
    lStack_e0 = lStack_80 + 0x20;
    lStack_50 = 0;
    uStack_58._0_4_ = 0;
    pbStack_98 = pbStack_110;
    cVar8 = *(char *)((longlong)puStack_68 + 0x108);
joined_r0x0001406c257f:
    bVar25 = false;
    if (cVar8 != '\0') goto LAB_1406c268f;
LAB_1406c2585:
    if ((uint)uStack_58 != (uint)uVar24) goto LAB_1406c264a;
    do {
      if (puVar23 == puVar1) {
LAB_1406c29ca:
        if (lStack_118 != 0) {
          pub_1406abac0(pbStack_98,lStack_118 << 3,8);
        }
        return;
      }
      uVar13 = *puVar23;
      puVar23 = puVar23 + 1;
      uVar24 = *(ulonglong *)(*(longlong *)(lVar3 + 0x100) + 0x58 + (ulonglong)uVar13 * 0xa0);
    } while (uVar24 == 0);
    lVar17 = *(longlong *)(lVar3 + 0x100) + (ulonglong)uVar13 * 0xa0;
    if (*(ulonglong *)((longlong)puStack_68 + 0x110) <
        *(ulonglong *)
         (*(longlong *)(lVar3 + 0x1a0) + 0x40 + (ulonglong)*(uint *)(lVar17 + 0x94) * 0x48)) {
      lVar22 = *(longlong *)(lVar3 + 0x1a0) + (ulonglong)*(uint *)(lVar17 + 0x94) * 0x48;
      uVar12 = *(ulonglong *)
                (*(longlong *)(lVar22 + 0x38) + *(ulonglong *)((longlong)puStack_68 + 0x110) * 8);
      if (uVar12 == 0) goto LAB_1406c260b;
      lStack_50 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar12 * 0x30);
    }
    else {
LAB_1406c260b:
      lStack_50 = 0;
    }
    uStack_58._0_4_ = 0;
    bVar25 = false;
    if (*(ulonglong *)((longlong)puStack_68 + 0x118) < *(ulonglong *)(lVar17 + 0x88)) {
      bVar25 = *(longlong *)
                (*(longlong *)(lVar17 + 0x80) + *(ulonglong *)((longlong)puStack_68 + 0x118) * 8) !=
               0;
    }
    lStack_70 = *(longlong *)(lVar17 + 0x50);
LAB_1406c264a:
    bVar9 = true;
    if (bVar25) goto LAB_1406c2682;
    uVar13 = ~*(uint *)(lStack_70 + 8 + (ulonglong)(uint)uStack_58 * 0x10);
    do {
      plVar21 = (longlong *)((ulonglong)uVar13 * 0x58 + lStack_50);
      lVar22 = *plVar21;
      lVar17 = 0;
      do {
        if (lStack_108 == lVar17) {
          uStack_58._0_4_ = (uint)uStack_58 + 1;
          cVar8 = (char)uStack_5c;
          goto joined_r0x0001406c257f;
        }
        pbVar10 = pbStack_98 + lVar17;
        lVar17 = lVar17 + 8;
      } while (*(longlong *)pbVar10 != lVar22);
      *puVar14 = uVar19;
      lVar17 = *(longlong *)(lStack_80 + 0x30);
      uStack_f8 = *(undefined8 *)(lStack_80 + 0x40);
      lStack_f0 = lStack_108;
      puStack_e8 = puVar14;
      uStack_8c = uVar19;
      if (lVar17 == *(longlong *)(lStack_80 + 0x20)) {
        pdb_142d7e830(lStack_e0);
      }
      lVar11 = *(longlong *)(lStack_80 + 0x28);
      *(undefined8 *)(lVar11 + lVar17 * 0x18) = uStack_f8;
      *(longlong *)(lVar11 + 8 + lVar17 * 0x18) = lVar22;
      *(undefined1 *)(lVar11 + 0x10 + lVar17 * 0x18) = 0;
      *(longlong *)(lStack_80 + 0x30) = lVar17 + 1;
      *(longlong *)(lStack_80 + 0x40) = *(longlong *)(lStack_80 + 0x40) + 1;
      *puStack_88 = (undefined4)lStack_78;
      puStack_d8 = *(ulonglong **)((longlong)plVar21 + 0x24);
      uStack_d0 = *(byte **)((longlong)plVar21 + 0x2c);
      uStack_c8 = *(byte **)((longlong)plVar21 + 0x34);
      lStack_c0 = CONCAT44(lStack_c0._4_4_,*(undefined4 *)((longlong)plVar21 + 0x3c));
      lVar17 = plVar21[10];
      lStack_a8 = plVar21[8];
      uStack_a0 = (undefined4)plVar21[9];
      pdb_14007ee60();
      pbVar10 = pub_1406abab0(0x50,8);
      if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x50);
      }
      pbVar10[0] = 1;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      pbVar10[4] = 0;
      pbVar10[5] = 0;
      pbVar10[6] = 0;
      pbVar10[7] = 0;
      pbVar10[8] = 1;
      pbVar10[9] = 0;
      pbVar10[10] = 0;
      pbVar10[0xb] = 0;
      pbVar10[0xc] = 0;
      pbVar10[0xd] = 0;
      pbVar10[0xe] = 0;
      pbVar10[0xf] = 0;
      pbVar10[0x10] = 1;
      *(int *)(pbVar10 + 0x14) = (int)lVar17;
      *(longlong *)(pbVar10 + 0x18) = lStack_a8;
      *(undefined4 *)(pbVar10 + 0x20) = uStack_a0;
      *(ulonglong **)(pbVar10 + 0x24) = puStack_d8;
      *(byte **)(pbVar10 + 0x2c) = uStack_d0;
      *(undefined4 *)(pbVar10 + 0x30) = uStack_d0._4_4_;
      *(undefined4 *)(pbVar10 + 0x34) = (undefined4)uStack_c8;
      *(undefined4 *)(pbVar10 + 0x38) = uStack_c8._4_4_;
      *(undefined4 *)(pbVar10 + 0x3c) = (undefined4)lStack_c0;
      *(longlong *)(pbVar10 + 0x40) = lVar22;
      puStack_d8 = (ulonglong *)0x8;
      uStack_d0 = pbVar10;
      pdb_140ae5180(uStack_100,&puStack_d8,&UNK_142f98ec0);
      puVar14 = puStack_e8;
      lStack_108 = lStack_f0;
      uVar19 = uStack_8c;
      bVar9 = false;
LAB_1406c2682:
      do {
        bVar25 = bVar9;
        uStack_58._0_4_ = (uint)uStack_58 + 1;
        if ((char)uStack_5c == '\0') goto LAB_1406c2585;
LAB_1406c268f:
        if ((uint)uStack_58 == (uint)uVar24) {
          do {
            if (puVar23 == puVar1) goto LAB_1406c29ca;
            uVar13 = *puVar23;
            puVar23 = puVar23 + 1;
            uVar24 = *(ulonglong *)(*(longlong *)(lVar3 + 0x1a0) + 0x10 + (ulonglong)uVar13 * 0x48);
          } while (uVar24 == 0);
          lVar17 = *(longlong *)(lVar3 + 0x1a0) + (ulonglong)uVar13 * 0x48;
          if ((*(ulonglong *)((longlong)puStack_68 + 0x110) < *(ulonglong *)(lVar17 + 0x40)) &&
             (uVar12 = *(ulonglong *)
                        (*(longlong *)(lVar17 + 0x38) +
                        *(ulonglong *)((longlong)puStack_68 + 0x110) * 8), uVar12 != 0)) {
            lStack_50 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar12 * 0x30);
          }
          else {
            lStack_50 = 0;
          }
          uStack_58._0_4_ = 0;
          bVar25 = false;
          if (*(ulonglong *)((longlong)puStack_68 + 0x118) < *(ulonglong *)(lVar17 + 0x40)) {
            bVar25 = *(longlong *)
                      (*(longlong *)(lVar17 + 0x38) +
                      *(ulonglong *)((longlong)puStack_68 + 0x118) * 8) != 0;
          }
        }
        uVar13 = (uint)uStack_58;
        bVar9 = true;
      } while (bVar25);
    } while( true );
  }
  *puVar2 = uVar5;
  lStack_70 = *param_1;
  lVar3 = param_1[1];
  puVar23 = *(uint **)(lStack_70 + 0xf8);
  puVar1 = puVar23 + *(longlong *)(lStack_70 + 0x100);
  uStack_5c = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar17 = *param_5;
  puVar14 = (undefined4 *)param_5[2];
  lStack_80 = lVar17 + 0x20;
  puStack_68 = puVar14;
  lStack_50 = lVar17;
  if (*(char *)(lStack_70 + 0x108) != '\0') {
    uVar13 = 0;
    uStack_58 = 0;
    lVar22 = 0;
    uVar19 = uStack_5c;
    do {
      if (uVar13 == (uint)lVar22) {
        do {
          if (puVar23 == puVar1) {
            return;
          }
          uVar13 = *puVar23;
          puVar23 = puVar23 + 1;
          lVar22 = *(longlong *)(*(longlong *)(lVar3 + 0x1a0) + 0x10 + (ulonglong)uVar13 * 0x48);
        } while (lVar22 == 0);
        lVar11 = *(longlong *)(lVar3 + 0x1a0) + (ulonglong)uVar13 * 0x48;
        if ((*(ulonglong *)(lStack_70 + 0x110) < *(ulonglong *)(lVar11 + 0x40)) &&
           (uVar12 = *(ulonglong *)
                      (*(longlong *)(lVar11 + 0x38) + *(ulonglong *)(lStack_70 + 0x110) * 8),
           uVar12 != 0)) {
          uStack_58 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x10 + ~uVar12 * 0x30);
        }
        else {
          uStack_58 = 0;
        }
        uVar13 = 0;
      }
      lStack_78 = *(undefined8 *)(uStack_58 + (ulonglong)uVar13 * 0x58);
      *puVar14 = uVar19;
      lVar11 = *(longlong *)(lVar17 + 0x30);
      uVar7 = *(undefined8 *)(lVar17 + 0x40);
      if (lVar11 == *(longlong *)(lVar17 + 0x20)) {
        pdb_142d7e830(lStack_80);
        lVar17 = lStack_50;
        puVar14 = puStack_68;
        uVar19 = uStack_5c;
      }
      uVar13 = uVar13 + 1;
      lVar6 = *(longlong *)(lVar17 + 0x28);
      *(undefined8 *)(lVar6 + lVar11 * 0x18) = uVar7;
      *(longlong *)(lVar6 + 8 + lVar11 * 0x18) = lStack_78;
      *(undefined1 *)(lVar6 + 0x10 + lVar11 * 0x18) = 0;
      *(longlong *)(lVar17 + 0x30) = lVar11 + 1;
      *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
    } while( true );
  }
  puStack_88 = (undefined4 *)0x8;
  uVar13 = 0;
  lStack_78 = 0;
  lVar22 = 0;
  uVar19 = uStack_5c;
  do {
    if (uVar13 == (uint)lVar22) {
      do {
        if (puVar23 == puVar1) {
          return;
        }
        uVar13 = *puVar23;
        puVar23 = puVar23 + 1;
        lVar22 = *(longlong *)(*(longlong *)(lVar3 + 0x100) + 0x58 + (ulonglong)uVar13 * 0xa0);
      } while (lVar22 == 0);
      lVar11 = *(longlong *)(lVar3 + 0x100) + (ulonglong)uVar13 * 0xa0;
      uVar12 = (ulonglong)*(uint *)(lVar11 + 0x94);
      if (*(ulonglong *)(lStack_70 + 0x110) <
          *(ulonglong *)(*(longlong *)(lVar3 + 0x1a0) + 0x40 + uVar12 * 0x48)) {
        lVar6 = *(longlong *)(lVar3 + 0x1a0) + uVar12 * 0x48;
        uVar12 = *(ulonglong *)(*(longlong *)(lVar6 + 0x38) + *(ulonglong *)(lStack_70 + 0x110) * 8)
        ;
        if (uVar12 == 0) goto LAB_1406c2ab2;
        lStack_78 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x10 + ~uVar12 * 0x30);
      }
      else {
LAB_1406c2ab2:
        lStack_78 = 0;
      }
      puStack_88 = *(undefined4 **)(lVar11 + 0x50);
      uVar13 = 0;
    }
    uStack_58 = *(undefined8 *)
                 (lStack_78 +
                 (ulonglong)~*(uint *)((longlong)puStack_88 + 8 + (ulonglong)uVar13 * 0x10) * 0x58);
    *puVar14 = uVar19;
    lVar11 = *(longlong *)(lVar17 + 0x30);
    uVar7 = *(undefined8 *)(lVar17 + 0x40);
    if (lVar11 == *(longlong *)(lVar17 + 0x20)) {
      pdb_142d7e830(lStack_80);
      lVar17 = lStack_50;
      puVar14 = puStack_68;
      uVar19 = uStack_5c;
    }
    uVar13 = uVar13 + 1;
    lVar6 = *(longlong *)(lVar17 + 0x28);
    *(undefined8 *)(lVar6 + lVar11 * 0x18) = uVar7;
    *(longlong *)(lVar6 + 8 + lVar11 * 0x18) = uStack_58;
    *(undefined1 *)(lVar6 + 0x10 + lVar11 * 0x18) = 0;
    *(longlong *)(lVar17 + 0x30) = lVar11 + 1;
    *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
  } while( true );
}

