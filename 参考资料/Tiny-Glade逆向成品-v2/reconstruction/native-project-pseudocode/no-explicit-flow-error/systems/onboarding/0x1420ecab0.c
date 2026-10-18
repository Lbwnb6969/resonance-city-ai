// VA 0x1420ecab0, PDB extent 1239 bytes
// system_onboarding::hint_display_system::hint_highlight_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_display_system::hint_highlight_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
   Extent: 1239 */

void pdb_1420ecab0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint *puVar25;
  
  fVar16 = _DAT_143007998;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  puVar25 = *(uint **)(lVar5 + 0xf8);
  puVar1 = puVar25 + *(longlong *)(lVar5 + 0x100);
  uVar7 = *param_4;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar8 = *param_2;
  puVar9 = (undefined4 *)param_2[2];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar10 = *param_3;
  puVar11 = (undefined4 *)param_3[2];
  if (*(char *)(lVar5 + 0x108) == '\0') {
    lVar23 = 0;
    lVar22 = 8;
    lVar24 = 0;
    lVar19 = 0;
    uVar21 = 0;
    do {
      if (uVar21 == (uint)lVar23) {
        do {
          if (puVar25 == puVar1) {
            return;
          }
          uVar21 = *puVar25;
          puVar25 = puVar25 + 1;
          lVar23 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)uVar21 * 0xa0);
        } while (lVar23 == 0);
        lVar22 = *(longlong *)(lVar6 + 0x100) + (ulonglong)uVar21 * 0xa0;
        uVar18 = (ulonglong)*(uint *)(lVar22 + 0x94);
        lVar19 = *(longlong *)(lVar6 + 0x1a0) + uVar18 * 0x48;
        uVar18 = *(ulonglong *)(*(longlong *)(lVar6 + 0x1a0) + 0x40 + uVar18 * 0x48);
        if ((*(ulonglong *)(lVar5 + 0x110) < uVar18) &&
           (uVar20 = *(ulonglong *)
                      (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
           uVar20 != 0)) {
          lVar24 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar20 * 0x30);
          uVar20 = *(ulonglong *)(lVar5 + 0x118);
          if (uVar18 <= uVar20) goto LAB_1420ece14;
LAB_1420ecdf1:
          uVar18 = *(ulonglong *)(*(longlong *)(lVar19 + 0x38) + uVar20 * 8);
          if (uVar18 == 0) goto LAB_1420ece14;
          lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar18 * 0x30);
        }
        else {
          lVar24 = 0;
          uVar20 = *(ulonglong *)(lVar5 + 0x118);
          if (uVar20 < uVar18) goto LAB_1420ecdf1;
LAB_1420ece14:
          lVar19 = 0;
        }
        lVar22 = *(longlong *)(lVar22 + 0x50);
        uVar21 = 0;
      }
      uVar18 = (ulonglong)~*(uint *)(lVar22 + 8 + (ulonglong)uVar21 * 0x10);
      uVar21 = uVar21 + 1;
      if (fVar16 < *(float *)(lVar19 + 4 + uVar18 * 0xc)) {
        puVar2 = (uint *)(lVar24 + uVar18 * 0x18);
        if (((*puVar2 < 7) && (*puVar2 - 1 < 2)) && (*(char *)((longlong)puVar2 + 0x11) != '\0')) {
          iVar17 = pdb_140b54b40(uVar7,*(undefined8 *)(puVar2 + 2));
          if (iVar17 != 0) {
            uVar12 = *(undefined8 *)(puVar2 + 2);
            *puVar9 = uVar3;
            lVar14 = *(longlong *)(lVar8 + 0x30);
            uVar13 = *(undefined8 *)(lVar8 + 0x40);
            if (lVar14 == *(longlong *)(lVar8 + 0x20)) {
              pdb_142d7e830(lVar8 + 0x20);
            }
            lVar15 = *(longlong *)(lVar8 + 0x28);
            *(undefined8 *)(lVar15 + lVar14 * 0x18) = uVar13;
            *(undefined8 *)(lVar15 + 8 + lVar14 * 0x18) = uVar12;
            *(undefined1 *)(lVar15 + 0x10 + lVar14 * 0x18) = 2;
            *(longlong *)(lVar8 + 0x30) = lVar14 + 1;
            *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
          }
          uVar12 = *(undefined8 *)(puVar2 + 2);
          *puVar11 = uVar4;
          lVar14 = *(longlong *)(lVar10 + 0x30);
          uVar13 = *(undefined8 *)(lVar10 + 0x40);
          if (lVar14 == *(longlong *)(lVar10 + 0x20)) {
            pdb_142d7e830(lVar10 + 0x20);
          }
          lVar15 = *(longlong *)(lVar10 + 0x28);
          *(undefined8 *)(lVar15 + lVar14 * 0x18) = uVar13;
          *(undefined8 *)(lVar15 + 8 + lVar14 * 0x18) = uVar12;
          *(undefined1 *)(lVar15 + 0x10 + lVar14 * 0x18) = 2;
          *(longlong *)(lVar10 + 0x30) = lVar14 + 1;
          *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x40) + 1;
        }
      }
    } while( true );
  }
  lVar23 = 0;
  lVar24 = 0;
  lVar19 = 0;
  uVar21 = 0;
  do {
    if (uVar21 == (uint)lVar23) {
      do {
        if (puVar25 == puVar1) {
          return;
        }
        uVar21 = *puVar25;
        puVar25 = puVar25 + 1;
        lVar23 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)uVar21 * 0x48);
      } while (lVar23 == 0);
      lVar19 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)uVar21 * 0x48;
      uVar18 = *(ulonglong *)(lVar19 + 0x40);
      if ((*(ulonglong *)(lVar5 + 0x110) < uVar18) &&
         (uVar20 = *(ulonglong *)(*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
         uVar20 != 0)) {
        lVar24 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar20 * 0x30);
        uVar20 = *(ulonglong *)(lVar5 + 0x118);
        if (uVar18 <= uVar20) goto LAB_1420ecbfb;
LAB_1420ecbd8:
        uVar18 = *(ulonglong *)(*(longlong *)(lVar19 + 0x38) + uVar20 * 8);
        if (uVar18 == 0) goto LAB_1420ecbfb;
        lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar18 * 0x30);
      }
      else {
        lVar24 = 0;
        uVar20 = *(ulonglong *)(lVar5 + 0x118);
        if (uVar20 < uVar18) goto LAB_1420ecbd8;
LAB_1420ecbfb:
        lVar19 = 0;
      }
      uVar21 = 0;
    }
    uVar18 = (ulonglong)uVar21;
    uVar21 = uVar21 + 1;
    if (fVar16 < *(float *)(lVar19 + 4 + uVar18 * 0xc)) {
      puVar2 = (uint *)(lVar24 + uVar18 * 0x18);
      if (((*puVar2 < 7) && (*puVar2 - 1 < 2)) && (*(char *)((longlong)puVar2 + 0x11) != '\0')) {
        iVar17 = pdb_140b54b40(uVar7,*(undefined8 *)(puVar2 + 2));
        if (iVar17 != 0) {
          uVar12 = *(undefined8 *)(puVar2 + 2);
          *puVar9 = uVar3;
          lVar22 = *(longlong *)(lVar8 + 0x30);
          uVar13 = *(undefined8 *)(lVar8 + 0x40);
          if (lVar22 == *(longlong *)(lVar8 + 0x20)) {
            pdb_142d7e830(lVar8 + 0x20);
          }
          lVar14 = *(longlong *)(lVar8 + 0x28);
          *(undefined8 *)(lVar14 + lVar22 * 0x18) = uVar13;
          *(undefined8 *)(lVar14 + 8 + lVar22 * 0x18) = uVar12;
          *(undefined1 *)(lVar14 + 0x10 + lVar22 * 0x18) = 2;
          *(longlong *)(lVar8 + 0x30) = lVar22 + 1;
          *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
        }
        uVar12 = *(undefined8 *)(puVar2 + 2);
        *puVar11 = uVar4;
        lVar22 = *(longlong *)(lVar10 + 0x30);
        uVar13 = *(undefined8 *)(lVar10 + 0x40);
        if (lVar22 == *(longlong *)(lVar10 + 0x20)) {
          pdb_142d7e830(lVar10 + 0x20);
        }
        lVar14 = *(longlong *)(lVar10 + 0x28);
        *(undefined8 *)(lVar14 + lVar22 * 0x18) = uVar13;
        *(undefined8 *)(lVar14 + 8 + lVar22 * 0x18) = uVar12;
        *(undefined1 *)(lVar14 + 0x10 + lVar22 * 0x18) = 2;
        *(longlong *)(lVar10 + 0x30) = lVar22 + 1;
        *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x40) + 1;
      }
    }
  } while( true );
}

