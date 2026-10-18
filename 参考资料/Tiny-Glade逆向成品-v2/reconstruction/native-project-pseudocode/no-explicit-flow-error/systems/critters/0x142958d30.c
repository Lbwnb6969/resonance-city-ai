// VA 0x142958d30, PDB extent 919 bytes
// system_critters::shared::smooth_critter_velocities
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/shared.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::shared::smooth_critter_velocities
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/shared.rs
   Extent: 919 */

void pdb_142958d30(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  float fVar19;
  float fVar20;
  longlong lStack_a0;
  ulonglong uStack_98;
  longlong lStack_88;
  
  fVar10 = _DAT_142e36f28;
  uVar2 = *(undefined4 *)(*param_2 + 0x28);
  lVar8 = *param_1;
  lVar9 = param_1[1];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar18 = *(uint **)(lVar8 + 0xf8);
  puVar1 = puVar18 + *(longlong *)(lVar8 + 0x100);
  if (*(char *)(lVar8 + 0x108) != '\0') {
    lVar17 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uVar12 = 0;
    do {
      if ((int)uVar12 == (int)lVar17) {
        if (puVar18 == puVar1) {
          return;
        }
        while( true ) {
          lVar17 = *(longlong *)(*(longlong *)(lVar9 + 0x1a0) + 0x10 + (ulonglong)*puVar18 * 0x48);
          if (lVar17 != 0) break;
          puVar18 = puVar18 + 1;
          if (puVar18 == puVar1) {
            return;
          }
        }
        lVar13 = *(longlong *)(lVar9 + 0x1a0) + (ulonglong)*puVar18 * 0x48;
        if (*(ulonglong *)(lVar8 + 0x110) < *(ulonglong *)(lVar13 + 0x40)) {
          uVar12 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lVar8 + 0x110) * 8);
          lVar15 = *(longlong *)(lVar13 + 0x18);
          if (uVar12 == 0) goto LAB_142958f74;
          uStack_98 = *(longlong *)(lVar15 + 0x10 + ~uVar12 * 0x30);
        }
        else {
          lVar15 = *(longlong *)(lVar13 + 0x18);
LAB_142958f74:
          uStack_98 = 0;
        }
        puVar18 = puVar18 + 1;
        lVar13 = ~*(ulonglong *)(*(longlong *)(lVar13 + 0x38) + *(longlong *)(lVar8 + 0x118) * 8) *
                 0x30;
        lStack_a0 = *(longlong *)(lVar15 + 0x10 + lVar13);
        lStack_88 = *(longlong *)(lVar15 + 0x28 + lVar13);
        uVar12 = 0;
      }
      lVar13 = uVar12 * 0x10;
      fVar19 = (float)pub_142e32ad0(*(undefined4 *)(uStack_98 + 0xc + lVar13),uVar2);
      fVar20 = fVar10 - fVar19;
      fVar3 = *(float *)(uStack_98 + 8 + lVar13);
      fVar4 = *(float *)(lStack_a0 + 8 + uVar12 * 0xc);
      uVar5 = *(undefined8 *)(uStack_98 + lVar13);
      uVar6 = *(undefined8 *)(lStack_a0 + uVar12 * 0xc);
      *(undefined4 *)(lStack_88 + uVar12 * 4) = uVar7;
      *(ulonglong *)(lStack_a0 + uVar12 * 0xc) =
           CONCAT44((float)((ulonglong)uVar6 >> 0x20) * fVar19 +
                    (float)((ulonglong)uVar5 >> 0x20) * fVar20,
                    (float)uVar6 * fVar19 + (float)uVar5 * fVar20);
      *(float *)(lStack_a0 + 8 + uVar12 * 0xc) = fVar19 * fVar4 + fVar20 * fVar3;
      uVar12 = (ulonglong)((int)uVar12 + 1);
    } while( true );
  }
  do {
    if (puVar18 == puVar1) {
      return;
    }
    while( true ) {
      lVar17 = *(longlong *)(*(longlong *)(lVar9 + 0x100) + 0x58 + (ulonglong)*puVar18 * 0xa0);
      if (lVar17 != 0) break;
      puVar18 = puVar18 + 1;
      if (puVar18 == puVar1) {
        return;
      }
    }
    lVar16 = *(longlong *)(lVar9 + 0x100) + (ulonglong)*puVar18 * 0xa0;
    uVar12 = (ulonglong)*(uint *)(lVar16 + 0x94);
    lVar15 = *(longlong *)(lVar9 + 0x1a0);
    lVar13 = lVar15 + uVar12 * 0x48;
    lVar14 = *(longlong *)(lVar15 + 0x38 + uVar12 * 0x48);
    if (*(ulonglong *)(lVar8 + 0x110) < *(ulonglong *)(lVar15 + 0x40 + uVar12 * 0x48)) {
      uVar12 = *(ulonglong *)(lVar14 + *(ulonglong *)(lVar8 + 0x110) * 8);
      lVar13 = *(longlong *)(lVar13 + 0x18);
      if (uVar12 == 0) goto LAB_142958e94;
      lStack_a0 = *(longlong *)(lVar13 + 0x10 + ~uVar12 * 0x30);
    }
    else {
      lVar13 = *(longlong *)(lVar13 + 0x18);
LAB_142958e94:
      lStack_a0 = 0;
    }
    puVar18 = puVar18 + 1;
    lVar14 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar8 + 0x118) * 8) * 0x30;
    lVar15 = *(longlong *)(lVar13 + 0x10 + lVar14);
    lVar13 = *(longlong *)(lVar13 + 0x28 + lVar14);
    lVar14 = *(longlong *)(lVar16 + 0x50);
    uStack_98 = 1;
    uVar12 = 0;
    while( true ) {
      uVar11 = uStack_98;
      uVar12 = (ulonglong)~*(uint *)(lVar14 + 8 + uVar12 * 0x10);
      lVar16 = uVar12 * 0x10;
      fVar19 = (float)pub_142e32ad0(*(undefined4 *)(lStack_a0 + 0xc + lVar16),uVar2);
      fVar20 = fVar10 - fVar19;
      fVar3 = *(float *)(lStack_a0 + 8 + lVar16);
      fVar4 = *(float *)(lVar15 + 8 + uVar12 * 0xc);
      uVar5 = *(undefined8 *)(lStack_a0 + lVar16);
      uVar6 = *(undefined8 *)(lVar15 + uVar12 * 0xc);
      *(undefined4 *)(lVar13 + uVar12 * 4) = uVar7;
      *(ulonglong *)(lVar15 + uVar12 * 0xc) =
           CONCAT44((float)((ulonglong)uVar6 >> 0x20) * fVar19 +
                    (float)((ulonglong)uVar5 >> 0x20) * fVar20,
                    (float)uVar6 * fVar19 + (float)uVar5 * fVar20);
      *(float *)(lVar15 + 8 + uVar12 * 0xc) = fVar19 * fVar4 + fVar20 * fVar3;
      if ((int)uStack_98 == (int)lVar17) break;
      uStack_98 = (ulonglong)((int)uStack_98 + 1);
      uVar12 = uVar11;
    }
  } while( true );
}

