// VA 0x1420ec830, PDB extent 632 bytes
// system_onboarding::hint_display_system::hint_deletion_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_display_system::hint_deletion_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
   Extent: 632 */

void pdb_1420ec830(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  puVar15 = *(uint **)(lVar3 + 0xf8);
  puVar1 = puVar15 + *(longlong *)(lVar3 + 0x100);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[3];
  uVar8 = param_2[2];
  if (*(char *)(lVar3 + 0x108) == '\0') {
    lVar14 = 0;
    lVar11 = 8;
    lVar12 = 0;
    uVar13 = 0;
    while( true ) {
      if (uVar13 == (uint)lVar14) {
        do {
          if (puVar15 == puVar1) {
            return;
          }
          uVar13 = *puVar15;
          puVar15 = puVar15 + 1;
          lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)uVar13 * 0xa0);
        } while (lVar14 == 0);
        lVar11 = *(longlong *)(lVar4 + 0x100) + (ulonglong)uVar13 * 0xa0;
        uVar10 = (ulonglong)*(uint *)(lVar11 + 0x94);
        lVar12 = *(longlong *)(lVar4 + 0x1a0);
        if ((*(ulonglong *)(lVar3 + 0x118) < *(ulonglong *)(lVar12 + 0x40 + uVar10 * 0x48)) &&
           (uVar9 = *(ulonglong *)
                     (*(longlong *)(lVar12 + 0x38 + uVar10 * 0x48) +
                     *(ulonglong *)(lVar3 + 0x118) * 8), uVar9 != 0)) {
          lVar12 = *(longlong *)
                    (*(longlong *)(lVar12 + uVar10 * 0x48 + 0x18) + 0x10 + ~uVar9 * 0x30);
        }
        else {
          lVar12 = 0;
        }
        lVar11 = *(longlong *)(lVar11 + 0x50);
        uVar13 = 0;
      }
      uVar10 = (ulonglong)uVar13;
      uStack_80 = *(undefined8 *)(lVar11 + uVar10 * 0x10);
      if ((int)uStack_80 == 0) break;
      uVar13 = uVar13 + 1;
      fVar2 = *(float *)(lVar12 + 4 + (ulonglong)~*(uint *)(uVar10 * 0x10 + lVar11 + 8) * 0xc);
      if ((fVar2 == 0.0) && (!NAN(fVar2))) {
        uStack_78 = uVar5;
        uStack_70 = uVar6;
        uStack_68 = uVar8;
        uStack_60 = uVar7;
        pdb_140f04aa0(&uStack_80,&UNK_14345aea8);
      }
    }
  }
  else {
    lVar14 = 0;
    lVar11 = 8;
    lVar12 = 0;
    uVar13 = 0;
    while( true ) {
      if (uVar13 == (uint)lVar14) {
        do {
          if (puVar15 == puVar1) {
            return;
          }
          uVar13 = *puVar15;
          puVar15 = puVar15 + 1;
          lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)uVar13 * 0x48);
        } while (lVar14 == 0);
        lVar11 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)uVar13 * 0x48;
        if ((*(ulonglong *)(lVar3 + 0x118) < *(ulonglong *)(lVar11 + 0x40)) &&
           (uVar10 = *(ulonglong *)
                      (*(longlong *)(lVar11 + 0x38) + *(ulonglong *)(lVar3 + 0x118) * 8),
           uVar10 != 0)) {
          lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x10 + ~uVar10 * 0x30);
        }
        else {
          lVar12 = 0;
        }
        lVar11 = *(longlong *)(lVar11 + 8);
        uVar13 = 0;
      }
      uVar10 = (ulonglong)uVar13;
      uStack_80 = *(undefined8 *)(lVar11 + uVar10 * 8);
      if ((int)uStack_80 == 0) break;
      uVar13 = uVar13 + 1;
      fVar2 = *(float *)(lVar12 + 4 + uVar10 * 0xc);
      if ((fVar2 == 0.0) && (!NAN(fVar2))) {
        uStack_78 = uVar5;
        uStack_70 = uVar6;
        uStack_68 = uVar8;
        uStack_60 = uVar7;
        pdb_140f04aa0(&uStack_80,&UNK_14345aea8);
      }
    }
  }
  return;
}

