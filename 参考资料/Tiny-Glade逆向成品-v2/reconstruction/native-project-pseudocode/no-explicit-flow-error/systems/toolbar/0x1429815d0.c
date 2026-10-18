// VA 0x1429815d0, PDB extent 1366 bytes
// toolbar::taffy_update::taffy_finalize_element_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/taffy_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::taffy_update::taffy_finalize_element_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/taffy_update.rs
   Extent: 1366 */

void pdb_1429815d0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint *puVar21;
  float fVar22;
  undefined1 auVar23 [16];
  longlong lStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  longlong lStack_b0;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  float *pfStack_70;
  
  fVar8 = _DAT_142e36f28;
  lVar3 = *param_1;
  lVar4 = param_1[1];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar21 = *(uint **)(lVar3 + 0xf8);
  puVar1 = puVar21 + *(longlong *)(lVar3 + 0x100);
  cVar2 = *(char *)(lVar3 + 0x108);
  lStack_88 = *param_3;
  pfStack_70 = (float *)*param_4;
  uStack_90 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_78 = *param_2;
  puStack_80 = (undefined4 *)param_2[2];
  puStack_c0 = (undefined4 *)0x0;
  lStack_a0 = 8;
  bVar7 = false;
  lStack_c8 = 0;
  lStack_b0 = 0;
  bVar6 = false;
  lVar18 = 0;
  uVar20 = 0;
  do {
    if (cVar2 == '\0') {
      if (uVar20 == (uint)lVar18) {
        if (puVar21 == puVar1) {
          return;
        }
        while( true ) {
          lVar18 = *(longlong *)(*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)*puVar21 * 0xa0);
          if (lVar18 != 0) break;
          puVar21 = puVar21 + 1;
          if (puVar21 == puVar1) {
            return;
          }
        }
        lVar10 = *(longlong *)(lVar4 + 0x100) + (ulonglong)*puVar21 * 0xa0;
        uVar13 = (ulonglong)*(uint *)(lVar10 + 0x94);
        lVar11 = *(longlong *)(lVar4 + 0x1a0);
        uVar15 = *(ulonglong *)(lVar11 + 0x40 + uVar13 * 0x48);
        lVar14 = *(longlong *)(lVar11 + 0x18 + uVar13 * 0x48);
        lVar11 = *(longlong *)(lVar11 + 0x38 + uVar13 * 0x48);
        uVar13 = *(ulonglong *)(lVar3 + 0x118);
        if ((uVar13 < *(ulonglong *)(lVar10 + 0x88)) &&
           (*(longlong *)(*(longlong *)(lVar10 + 0x80) + uVar13 * 8) != 0)) {
          bVar7 = true;
          if ((uVar13 < uVar15) && (uVar13 = *(ulonglong *)(lVar11 + uVar13 * 8), uVar13 != 0)) {
            lStack_c8 = *(longlong *)(lVar14 + 0x10 + ~uVar13 * 0x30);
          }
          else {
            lStack_c8 = 0;
          }
        }
        else {
          bVar7 = false;
        }
        lVar19 = ~*(ulonglong *)(lVar11 + *(longlong *)(lVar3 + 0x110) * 8) * 0x30;
        puStack_c0 = *(undefined4 **)(lVar14 + 0x10 + lVar19);
        puStack_b8 = *(undefined4 **)(lVar14 + 0x28 + lVar19);
        puVar21 = puVar21 + 1;
        uVar13 = *(ulonglong *)(lVar3 + 0x120);
        if ((uVar13 < *(ulonglong *)(lVar10 + 0x88)) &&
           (*(longlong *)(*(longlong *)(lVar10 + 0x80) + uVar13 * 8) != 0)) {
          if ((uVar13 < uVar15) && (uVar15 = *(ulonglong *)(lVar11 + uVar13 * 8), uVar15 != 0)) {
            lStack_b0 = *(longlong *)(lVar14 + 0x10 + ~uVar15 * 0x30);
          }
          else {
            lStack_b0 = 0;
          }
          lStack_a0 = *(longlong *)(lVar10 + 0x50);
          uVar15 = (ulonglong)~*(uint *)(lStack_a0 + 8);
          puVar16 = puStack_c0 + uVar15 * 5;
          puVar17 = puStack_b8 + uVar15;
          uVar20 = 0;
          lVar11 = 0;
          if (bVar7) {
            lVar11 = lStack_c8;
          }
          goto LAB_142981a90;
        }
        lStack_a0 = *(longlong *)(lVar10 + 0x50);
        puVar16 = puStack_c0 + (ulonglong)~*(uint *)(lStack_a0 + 8) * 5;
        puVar17 = puStack_b8 + ~*(uint *)(lStack_a0 + 8);
        lVar11 = 0;
        if (bVar7) {
          lVar11 = lStack_c8;
        }
        uVar20 = 0;
        lVar14 = 0;
        bVar9 = false;
      }
      else {
        uVar15 = (ulonglong)~*(uint *)(lStack_a0 + 8 + (ulonglong)uVar20 * 0x10);
        puVar16 = puStack_c0 + uVar15 * 5;
        puVar17 = puStack_b8 + uVar15;
        lVar14 = 0;
        lVar11 = 0;
        if (bVar7) {
          lVar11 = lStack_c8;
        }
        bVar9 = false;
        if (bVar6) goto LAB_142981a90;
      }
    }
    else if (uVar20 == (uint)lVar18) {
      do {
        if (puVar21 == puVar1) {
          return;
        }
        uVar20 = *puVar21;
        puVar21 = puVar21 + 1;
        lVar18 = *(longlong *)(*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)uVar20 * 0x48);
      } while (lVar18 == 0);
      lVar11 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)uVar20 * 0x48;
      lVar14 = *(longlong *)(lVar11 + 0x18);
      lVar10 = *(longlong *)(lVar11 + 0x38);
      if ((*(ulonglong *)(lVar3 + 0x118) < *(ulonglong *)(lVar11 + 0x40)) &&
         (uVar15 = *(ulonglong *)(lVar10 + *(ulonglong *)(lVar3 + 0x118) * 8), uVar15 != 0)) {
        lStack_c8 = *(longlong *)(lVar14 + 0x10 + ~uVar15 * 0x30);
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      lVar19 = ~*(ulonglong *)(lVar10 + *(longlong *)(lVar3 + 0x110) * 8) * 0x30;
      puVar16 = *(undefined4 **)(lVar14 + 0x10 + lVar19);
      puVar17 = *(undefined4 **)(lVar14 + 0x28 + lVar19);
      puStack_c0 = puVar16;
      puStack_b8 = puVar17;
      if ((*(ulonglong *)(lVar3 + 0x120) < *(ulonglong *)(lVar11 + 0x40)) &&
         (uVar13 = *(ulonglong *)(lVar10 + *(ulonglong *)(lVar3 + 0x120) * 8), uVar13 != 0)) {
        uVar15 = 0;
        lVar11 = 0;
        if (bVar7) {
          lVar11 = lStack_c8;
        }
        lStack_b0 = *(longlong *)(lVar14 + 0x10 + ~uVar13 * 0x30);
        uVar20 = 0;
LAB_142981a90:
        lVar14 = uVar15 * 600 + lStack_b0;
        bVar9 = true;
      }
      else {
        lVar11 = 0;
        if (bVar7) {
          lVar11 = lStack_c8;
        }
        uVar20 = 0;
        lVar14 = 0;
        bVar9 = false;
      }
    }
    else {
      uVar15 = (ulonglong)uVar20;
      puVar16 = puStack_c0 + uVar15 * 5;
      puVar17 = puStack_b8 + uVar15;
      lVar14 = 0;
      lVar11 = 0;
      if (bVar7) {
        lVar11 = lStack_c8;
      }
      if (bVar6) goto LAB_142981a90;
      bVar9 = false;
    }
    bVar6 = bVar9;
    fVar22 = fVar8;
    if (lVar11 != 0) {
      fVar22 = *(float *)(lStack_88 + 0xe8);
    }
    auVar23._0_8_ =
         CONCAT44(*pfStack_70 *
                  fVar22 * (float)((ulonglong)*(undefined8 *)(puVar16 + 2) >> 0x20) *
                           (float)puVar16[4],
                  *pfStack_70 * fVar22 * (float)*(undefined8 *)(puVar16 + 2) * (float)puVar16[4]);
    auVar23._8_8_ = 0;
    uStack_98 = auVar23._0_8_;
    if (lVar14 != 0) {
      puVar12 = (ulonglong *)pdb_140cb6390();
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *puVar12;
      auVar23 = maxps(auVar23,auVar5);
      uStack_98 = auVar23._0_8_;
    }
    uVar20 = uVar20 + 1;
    *puStack_80 = uStack_90;
    pdb_1423909c0(uStack_78,*puVar16,puVar16[1],&uStack_98,(longlong)&uStack_98 + 4);
    *puVar17 = uStack_8c;
    puVar16[4] = 0x3f800000;
  } while( true );
}

