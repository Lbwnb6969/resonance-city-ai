// VA 0x1420f05f0, PDB extent 1339 bytes
// system_onboarding::hint_popup::progress_bar_update_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_popup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_popup::progress_bar_update_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_popup.rs
   Extent: 1339 */

void pdb_1420f05f0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong unaff_R12;
  longlong lVar21;
  uint *puVar22;
  bool bVar23;
  float fVar24;
  longlong lStack_e0;
  longlong lStack_a8;
  
  fVar12 = _DAT_143020f30;
  fVar11 = _DAT_142e3798c;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar22 = *(uint **)(lVar5 + 0xf8);
  puVar1 = puVar22 + *(longlong *)(lVar5 + 0x100);
  pfVar7 = (float *)*param_2;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar8 = *param_3;
  puVar9 = (undefined4 *)param_3[2];
  if (*(char *)(lVar5 + 0x108) == '\0') {
    lVar21 = 0;
    lVar13 = 8;
    lStack_e0 = 0;
    lVar19 = 0;
    uVar18 = 0;
    do {
      if (uVar18 == (uint)lVar21) {
        if (puVar22 == puVar1) {
          return;
        }
        while( true ) {
          lVar21 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)*puVar22 * 0xa0);
          if (lVar21 != 0) break;
          puVar22 = puVar22 + 1;
          if (puVar22 == puVar1) {
            return;
          }
        }
        lVar15 = *(longlong *)(lVar6 + 0x100) + (ulonglong)*puVar22 * 0xa0;
        uVar14 = (ulonglong)*(uint *)(lVar15 + 0x94);
        lVar13 = *(longlong *)(lVar6 + 0x1a0);
        lVar19 = lVar13 + uVar14 * 0x48;
        lVar16 = *(longlong *)(lVar13 + 0x38 + uVar14 * 0x48);
        if (*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar13 + 0x40 + uVar14 * 0x48)) {
          uVar14 = *(ulonglong *)(lVar16 + *(ulonglong *)(lVar5 + 0x110) * 8);
          lVar13 = *(longlong *)(lVar19 + 0x18);
          if (uVar14 == 0) goto LAB_1420f09a7;
          lVar19 = *(longlong *)(lVar13 + 0x10 + ~uVar14 * 0x30);
        }
        else {
          lVar13 = *(longlong *)(lVar19 + 0x18);
LAB_1420f09a7:
          lVar19 = 0;
        }
        puVar22 = puVar22 + 1;
        lVar16 = ~*(ulonglong *)(lVar16 + *(longlong *)(lVar5 + 0x118) * 8) * 0x30;
        lStack_e0 = *(longlong *)(lVar13 + 0x10 + lVar16);
        lStack_a8 = *(longlong *)(lVar13 + 0x28 + lVar16);
        lVar13 = *(longlong *)(lVar15 + 0x50);
        uVar18 = 1;
        uVar14 = 0;
      }
      else {
        uVar14 = (ulonglong)uVar18;
        uVar18 = uVar18 + 1;
      }
      uVar14 = (ulonglong)~*(uint *)(lVar13 + 8 + uVar14 * 0x10);
      cVar2 = *(char *)(lVar19 + uVar14);
      pfVar17 = pfVar7;
      if (((cVar2 != '\n') && (pfVar17 = pfVar7 + 1, cVar2 != '\v')) &&
         (pfVar17 = pfVar7 + 2, cVar2 != '\f')) goto LAB_1420f0b12;
      fVar24 = *pfVar17;
      if ((fVar24 != 0.0) || (NAN(fVar24))) {
        if ((fVar24 < 0.0) || (uVar20 = 1, fVar11 < fVar24)) {
          uVar20 = (ulonglong)(-(uint)(fVar24 <= fVar12 && fVar11 <= fVar24) & 1) ^ 3;
        }
      }
      else {
        uVar20 = 0;
      }
      if (uVar20 != *(ulonglong *)(lStack_e0 + uVar14 * 8)) {
        *puVar9 = uVar4;
        lVar16 = *(longlong *)(lVar8 + 0x30);
        uVar10 = *(undefined8 *)(lVar8 + 0x40);
        if (lVar16 == *(longlong *)(lVar8 + 0x20)) {
          pdb_142d7e6e0(lVar8 + 0x20);
        }
        lVar15 = *(longlong *)(lVar8 + 0x28);
        *(undefined4 *)(lVar15 + lVar16 * 0x20) = 0x1c;
        *(undefined8 *)(lVar15 + 0x18 + lVar16 * 0x20) = uVar10;
        *(longlong *)(lVar8 + 0x30) = lVar16 + 1;
        *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
      }
      *(undefined4 *)(lStack_a8 + uVar14 * 4) = uVar3;
      *(ulonglong *)(lStack_e0 + uVar14 * 8) = uVar20;
    } while( true );
  }
  lVar21 = 0;
  lStack_e0 = 0;
  lVar19 = 0;
  uVar18 = 0;
  do {
    if (uVar18 == (uint)lVar21) {
      if (puVar22 == puVar1) {
        return;
      }
      while( true ) {
        lVar21 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)*puVar22 * 0x48);
        if (lVar21 != 0) break;
        puVar22 = puVar22 + 1;
        if (puVar22 == puVar1) {
          return;
        }
      }
      lVar13 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)*puVar22 * 0x48;
      if (*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar13 + 0x40)) {
        uVar14 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8);
        lVar16 = *(longlong *)(lVar13 + 0x18);
        if (uVar14 == 0) goto LAB_1420f0768;
        lVar19 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
      }
      else {
        lVar16 = *(longlong *)(lVar13 + 0x18);
LAB_1420f0768:
        lVar19 = 0;
      }
      puVar22 = puVar22 + 1;
      lVar13 = ~*(ulonglong *)(*(longlong *)(lVar13 + 0x38) + *(longlong *)(lVar5 + 0x118) * 8) *
               0x30;
      lStack_e0 = *(longlong *)(lVar16 + 0x10 + lVar13);
      unaff_R12 = *(longlong *)(lVar16 + 0x28 + lVar13);
      uVar18 = 0;
    }
    uVar14 = (ulonglong)uVar18;
    cVar2 = *(char *)(lVar19 + uVar14);
    pfVar17 = pfVar7;
    if (cVar2 == '\n') {
LAB_1420f07bb:
      fVar24 = *pfVar17;
      bVar23 = fVar24 < 0.0;
      if ((fVar24 == 0.0) && (!NAN(fVar24))) goto LAB_1420f07c6;
LAB_1420f07e3:
      if ((bVar23) || (uVar20 = 1, fVar11 < fVar24)) {
        uVar20 = (ulonglong)(-(uint)(fVar24 <= fVar12 && fVar11 <= fVar24) & 1) ^ 3;
      }
    }
    else {
      if (cVar2 != '\v') {
        pfVar17 = pfVar7 + 2;
        if (cVar2 != '\f') {
LAB_1420f0b12:
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1435ac44c,0x28,&UNK_1435ac4c8);
        }
        goto LAB_1420f07bb;
      }
      fVar24 = pfVar7[1];
      bVar23 = fVar24 < 0.0;
      if ((fVar24 != 0.0) || (NAN(fVar24))) goto LAB_1420f07e3;
LAB_1420f07c6:
      uVar20 = 0;
    }
    if (uVar20 != *(ulonglong *)(lStack_e0 + uVar14 * 8)) {
      *puVar9 = uVar4;
      lVar13 = *(longlong *)(lVar8 + 0x30);
      uVar10 = *(undefined8 *)(lVar8 + 0x40);
      if (lVar13 == *(longlong *)(lVar8 + 0x20)) {
        pdb_142d7e6e0(lVar8 + 0x20);
      }
      lVar16 = *(longlong *)(lVar8 + 0x28);
      *(undefined4 *)(lVar16 + lVar13 * 0x20) = 0x1c;
      *(undefined8 *)(lVar16 + 0x18 + lVar13 * 0x20) = uVar10;
      *(longlong *)(lVar8 + 0x30) = lVar13 + 1;
      *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
    }
    uVar18 = uVar18 + 1;
    *(undefined4 *)(unaff_R12 + uVar14 * 4) = uVar3;
    *(ulonglong *)(lStack_e0 + uVar14 * 8) = uVar20;
  } while( true );
}

