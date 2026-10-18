// VA 0x1406c19d0, PDB extent 1337 bytes
// system_roof::delete_roof::delete_roofs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/delete_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_roof::delete_roof::delete_roofs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/delete_roof.rs
   Extent: 1337 */

void pdb_1406c19d0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  bool bVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puStack_110;
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong lStack_b0;
  undefined8 uStack_a8;
  longlong *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar5 = *param_1;
  lVar6 = param_1[1];
  puVar23 = *(uint **)(lVar5 + 0xf8);
  puVar1 = puVar23 + *(longlong *)(lVar5 + 0x100);
  cVar3 = *(char *)(lVar5 + 0x108);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar7 = *param_3;
  puVar8 = (undefined4 *)param_3[2];
  uVar9 = param_2[3];
  uVar10 = param_2[2];
  uVar11 = *param_2;
  plVar12 = (longlong *)param_2[1];
  lVar25 = 0;
  plStack_f0 = (longlong *)0x8;
  plStack_f8 = (longlong *)0x8;
  bVar17 = false;
  puStack_110 = (undefined8 *)0x0;
  lVar21 = 0;
  lVar24 = 0;
  uVar19 = 0;
  do {
    if (cVar3 == '\0') {
      if (uVar19 != (uint)lVar24) {
        lVar14 = plStack_f8[(ulonglong)uVar19 * 2];
        uVar18 = (ulonglong)~*(uint *)(plStack_f8 + (ulonglong)uVar19 * 2 + 1);
        goto LAB_1406c1bd5;
      }
      do {
        if (puVar23 == puVar1) {
          return;
        }
        uVar19 = *puVar23;
        puVar23 = puVar23 + 1;
        lVar24 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)uVar19 * 0xa0);
      } while (lVar24 == 0);
      lVar14 = *(longlong *)(lVar6 + 0x100) + (ulonglong)uVar19 * 0xa0;
      lVar21 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)*(uint *)(lVar14 + 0x94) * 0x48;
      uVar18 = *(ulonglong *)
                (*(longlong *)(lVar6 + 0x1a0) + 0x40 + (ulonglong)*(uint *)(lVar14 + 0x94) * 0x48);
      if ((*(ulonglong *)(lVar5 + 0x110) < uVar18) &&
         (uVar22 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
         uVar22 != 0)) {
        puStack_110 = *(undefined8 **)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar22 * 0x30);
      }
      else {
        puStack_110 = (undefined8 *)0x0;
      }
      uVar22 = *(ulonglong *)(lVar5 + 0x118);
      bVar13 = false;
      bVar17 = false;
      if (uVar22 < *(ulonglong *)(lVar14 + 0x88)) {
        if (*(longlong *)(*(longlong *)(lVar14 + 0x80) + uVar22 * 8) == 0) {
          bVar17 = false;
          bVar13 = false;
          uVar22 = *(ulonglong *)(lVar5 + 0x120);
        }
        else {
          if ((uVar18 <= uVar22) ||
             (uVar22 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + uVar22 * 8), uVar22 == 0)) {
            bVar17 = true;
            bVar13 = true;
            lVar25 = 0;
            goto LAB_1406c1de0;
          }
          lVar25 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar22 * 0x30);
          bVar17 = true;
          bVar13 = true;
          uVar22 = *(ulonglong *)(lVar5 + 0x120);
        }
        if (uVar18 <= uVar22) goto LAB_1406c1eae;
LAB_1406c1df0:
        uVar18 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + uVar22 * 8);
        if (uVar18 == 0) goto LAB_1406c1eae;
        lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar18 * 0x30);
      }
      else {
LAB_1406c1de0:
        uVar22 = *(ulonglong *)(lVar5 + 0x120);
        if (uVar22 < uVar18) goto LAB_1406c1df0;
LAB_1406c1eae:
        lVar21 = 0;
      }
      plStack_f8 = *(longlong **)(lVar14 + 0x50);
      lVar14 = *plStack_f8;
      uVar18 = (ulonglong)~*(uint *)(plStack_f8 + 1);
      puVar16 = puStack_110 + uVar18 * 0xb;
      uVar19 = 0;
      lVar20 = lVar25;
      if (!bVar13) {
        lVar20 = 0;
        uVar19 = 0;
      }
    }
    else if (uVar19 == (uint)lVar24) {
      do {
        if (puVar23 == puVar1) {
          return;
        }
        uVar19 = *puVar23;
        puVar23 = puVar23 + 1;
        lVar24 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)uVar19 * 0x48);
      } while (lVar24 == 0);
      lVar14 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)uVar19 * 0x48;
      uVar18 = *(ulonglong *)(lVar14 + 0x40);
      if ((*(ulonglong *)(lVar5 + 0x110) < uVar18) &&
         (uVar22 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
         uVar22 != 0)) {
        puVar16 = *(undefined8 **)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar22 * 0x30);
      }
      else {
        puVar16 = (undefined8 *)0x0;
      }
      bVar13 = false;
      bVar17 = false;
      if (*(ulonglong *)(lVar5 + 0x118) < uVar18) {
        uVar22 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + *(ulonglong *)(lVar5 + 0x118) * 8);
        if (uVar22 == 0) {
          bVar17 = false;
          bVar13 = false;
        }
        else {
          lVar25 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar22 * 0x30);
          bVar17 = true;
          bVar13 = true;
        }
      }
      if ((*(ulonglong *)(lVar5 + 0x120) < uVar18) &&
         (uVar18 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + *(ulonglong *)(lVar5 + 0x120) * 8),
         uVar18 != 0)) {
        lVar21 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar18 * 0x30);
      }
      else {
        lVar21 = 0;
      }
      plStack_f0 = *(longlong **)(lVar14 + 8);
      lVar14 = *plStack_f0;
      uVar18 = 0;
      lVar20 = 0;
      uVar19 = 0;
      puStack_110 = puVar16;
      if (bVar13) {
        uVar19 = 0;
        lVar20 = lVar25;
      }
    }
    else {
      uVar18 = (ulonglong)uVar19;
      lVar14 = plStack_f0[uVar18];
LAB_1406c1bd5:
      puVar16 = puStack_110 + uVar18 * 0xb;
      bVar13 = !bVar17;
      lVar20 = lVar25;
      bVar17 = true;
      if (bVar13) {
        lVar20 = 0;
        bVar17 = false;
      }
    }
    if ((int)lVar14 == 0) {
      return;
    }
    uVar19 = uVar19 + 1;
    if (((lVar20 != 0) && (fVar2 = *(float *)(lVar21 + uVar18 * 8), fVar2 == 0.0)) && (!NAN(fVar2)))
    {
      *puVar8 = uVar4;
      uStack_70 = *puVar16;
      uStack_78 = 1;
      uVar15 = pdb_140fc4d00(lVar7 + 0x20,&uStack_78);
      pdb_140caac10(&lStack_b0,lVar7,uVar15,&uStack_78);
      uStack_80 = 2;
      if (lStack_b0 != 4) {
        uStack_80 = (undefined1)uStack_98;
      }
      plStack_88 = plStack_a0;
      if (lStack_b0 != 4) {
        LOCK();
        *plStack_a0 = *plStack_a0 + -1;
        UNLOCK();
        if (*plStack_a0 == 0) {
          pdb_140c7b740(&plStack_88);
        }
        *(undefined1 *)(lVar7 + 0x38) = 1;
      }
      lStack_b0 = lVar14;
      uStack_a8 = uVar11;
      plStack_a0 = plVar12;
      uStack_98 = uVar10;
      uStack_90 = uVar9;
      pdb_140f04aa0(&lStack_b0,&UNK_142f98ea8);
    }
  } while( true );
}

