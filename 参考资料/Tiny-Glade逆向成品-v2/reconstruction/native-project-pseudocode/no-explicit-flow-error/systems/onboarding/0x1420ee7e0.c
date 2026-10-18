// VA 0x1420ee7e0, PDB extent 825 bytes
// system_onboarding::hint_display_system::hint_deletion_cooldown_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_display_system::hint_deletion_cooldown_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
   Extent: 825 */

void pdb_1420ee7e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  float *pfVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  uint *puVar17;
  float fVar18;
  longlong lStack_88;
  longlong lStack_70;
  longlong lStack_68;
  
  lVar5 = *param_1;
  puVar17 = *(uint **)(lVar5 + 0xf8);
  plVar15 = *(longlong **)(param_3 + 8);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = *(longlong **)(param_3 + 0x10);
  }
  lVar6 = param_1[1];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar1 = puVar17 + *(longlong *)(lVar5 + 0x100);
  cVar3 = *(char *)(lVar5 + 0x108);
  lVar7 = *param_2;
  lVar14 = 0;
  lStack_68 = 8;
  lStack_88 = 0;
  lVar13 = 8;
  uVar16 = 0;
  while( true ) {
    if (cVar3 == '\0') {
      if (uVar16 == (uint)lVar14) {
        if (puVar17 == puVar1) {
          return;
        }
        while( true ) {
          lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)*puVar17 * 0xa0);
          if (lVar14 != 0) break;
          puVar17 = puVar17 + 1;
          if (puVar17 == puVar1) {
            return;
          }
        }
        lVar10 = *(longlong *)(lVar6 + 0x100) + (ulonglong)*puVar17 * 0xa0;
        uVar9 = (ulonglong)*(uint *)(lVar10 + 0x94);
        lVar13 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x18 + uVar9 * 0x48);
        lVar11 = ~*(ulonglong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x38 + uVar9 * 0x48) +
                   *(longlong *)(lVar5 + 0x110) * 8) * 0x30;
        lStack_88 = *(longlong *)(lVar13 + 0x10 + lVar11);
        lStack_70 = *(longlong *)(lVar13 + 0x28 + lVar11);
        lVar13 = *(longlong *)(lVar10 + 0x50);
        puVar17 = puVar17 + 1;
        uVar16 = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = (ulonglong)uVar16;
      }
      puVar12 = (undefined8 *)(lVar13 + uVar9 * 0x10);
      uVar9 = (ulonglong)~*(uint *)(lVar13 + 8 + uVar9 * 0x10);
    }
    else {
      if (uVar16 == (uint)lVar14) {
        if (puVar17 == puVar1) {
          return;
        }
        while( true ) {
          lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)*puVar17 * 0x48);
          if (lVar14 != 0) break;
          puVar17 = puVar17 + 1;
          if (puVar17 == puVar1) {
            return;
          }
        }
        lVar10 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)*puVar17 * 0x48;
        lStack_68 = *(longlong *)(lVar10 + 8);
        lVar11 = ~*(ulonglong *)(*(longlong *)(lVar10 + 0x38) + *(longlong *)(lVar5 + 0x110) * 8) *
                 0x30;
        lStack_88 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10 + lVar11);
        lStack_70 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x28 + lVar11);
        puVar17 = puVar17 + 1;
        uVar16 = 0;
      }
      uVar9 = (ulonglong)uVar16;
      puVar12 = (undefined8 *)(lStack_68 + uVar9 * 8);
    }
    pfVar2 = (float *)(lStack_88 + uVar9 * 4);
    uVar8 = *puVar12;
    if ((int)uVar8 == 0) break;
    uVar16 = uVar16 + 1;
    fVar18 = *(float *)(lVar7 + 0x58);
    *(undefined4 *)(lStack_70 + uVar9 * 4) = uVar4;
    fVar18 = *pfVar2 - fVar18;
    *pfVar2 = fVar18;
    if (fVar18 <= 0.0) {
      lVar10 = plVar15[2];
      if ((ulonglong)(*plVar15 - lVar10) < 0x18) {
        pdb_142d7f1b0(plVar15,lVar10,0x18,1,1);
      }
      lVar11 = plVar15[1];
      *(code **)(lVar11 + lVar10) = pdb_14289d0e0;
      *(undefined8 *)(lVar11 + 8 + lVar10) = uVar8;
      *(code **)(lVar11 + 0x10 + lVar10) = pdb_14289d710;
      lVar11 = lVar10 + 0x18;
      plVar15[2] = lVar11;
      if ((ulonglong)(*plVar15 - lVar11) < 0x18) {
        pdb_142d7f1b0(plVar15,lVar11,0x18,1,1);
      }
      lVar11 = plVar15[1];
      *(code **)(lVar11 + 0x18 + lVar10) = pdb_14289d040;
      *(undefined8 *)(lVar11 + 0x20 + lVar10) = uVar8;
      *(undefined1 *)(lVar11 + 0x28 + lVar10) = 0;
      plVar15[2] = lVar10 + 0x30;
    }
  }
  return;
}

