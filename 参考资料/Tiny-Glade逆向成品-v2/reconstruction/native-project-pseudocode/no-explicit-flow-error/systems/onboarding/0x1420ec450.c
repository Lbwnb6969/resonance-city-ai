// VA 0x1420ec450, PDB extent 978 bytes
// system_onboarding::hint_display_system::hint_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_display_system::hint_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
   Extent: 978 */

void pdb_1420ec450(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  float fVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  uint *puVar18;
  bool bVar19;
  longlong lStack_88;
  
  fVar11 = _DAT_142e36f28;
  lVar4 = *param_1;
  lVar5 = param_1[1];
  puVar1 = *(uint **)(lVar4 + 0xf8) + *(longlong *)(lVar4 + 0x100);
  cVar2 = *(char *)(lVar4 + 0x108);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar6 = *param_2;
  puVar7 = (undefined4 *)param_2[2];
  lVar14 = 0;
  lStack_88 = 8;
  bVar19 = false;
  lVar16 = 0;
  uVar15 = 0;
  puVar17 = *(uint **)(lVar4 + 0xf8);
  do {
    if (cVar2 == '\0') {
      if (uVar15 != (uint)lVar14) {
        lVar12 = lVar16 + (ulonglong)~*(uint *)(lStack_88 + 8 + (ulonglong)uVar15 * 0x10) * 0xc;
        puVar18 = puVar17;
        goto joined_r0x0001420ec5ac;
      }
      if (puVar17 == puVar1) {
        return;
      }
      while( true ) {
        lVar14 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar17 * 0xa0);
        if (lVar14 != 0) break;
        puVar17 = puVar17 + 1;
        if (puVar17 == puVar1) {
          return;
        }
      }
      lVar12 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar17 * 0xa0;
      if (*(ulonglong *)
           (*(longlong *)(lVar5 + 0x1a0) + 0x40 + (ulonglong)*(uint *)(lVar12 + 0x94) * 0x48) <=
          *(ulonglong *)(lVar4 + 0x110)) {
LAB_1420ec734:
        lVar16 = 0;
        uVar13 = *(ulonglong *)(lVar4 + 0x118);
        if (*(ulonglong *)(lVar12 + 0x88) <= uVar13) goto LAB_1420ec776;
LAB_1420ec74b:
        puVar18 = puVar17 + 1;
        if (*(longlong *)(*(longlong *)(lVar12 + 0x80) + uVar13 * 8) == 0) goto LAB_1420ec776;
        lStack_88 = *(longlong *)(lVar12 + 0x50);
        lVar12 = lVar16 + (ulonglong)~*(uint *)(lStack_88 + 8) * 0xc;
        uVar15 = 0;
        goto LAB_1420ec69e;
      }
      lVar16 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*(uint *)(lVar12 + 0x94) * 0x48;
      uVar13 = *(ulonglong *)(*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
      if (uVar13 == 0) goto LAB_1420ec734;
      lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar13 * 0x30);
      uVar13 = *(ulonglong *)(lVar4 + 0x118);
      if (uVar13 < *(ulonglong *)(lVar12 + 0x88)) goto LAB_1420ec74b;
LAB_1420ec776:
      puVar18 = puVar17 + 1;
      lStack_88 = *(longlong *)(lVar12 + 0x50);
      lVar12 = lVar16 + (ulonglong)~*(uint *)(lStack_88 + 8) * 0xc;
      bVar19 = false;
      uVar15 = 0;
    }
    else {
      if (uVar15 == (uint)lVar14) {
        if (puVar17 == puVar1) {
          return;
        }
        while( true ) {
          lVar14 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar17 * 0x48);
          if (lVar14 != 0) break;
          puVar17 = puVar17 + 1;
          if (puVar17 == puVar1) {
            return;
          }
        }
        lVar12 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar17 * 0x48;
        if ((*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar12 + 0x40)) &&
           (uVar13 = *(ulonglong *)
                      (*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8),
           uVar13 != 0)) {
          lVar16 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar13 * 0x30);
        }
        else {
          lVar16 = 0;
        }
        uVar15 = 0;
        bVar19 = false;
        if (*(ulonglong *)(lVar4 + 0x118) < *(ulonglong *)(lVar12 + 0x40)) {
          bVar19 = *(longlong *)(*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lVar4 + 0x118) * 8)
                   != 0;
        }
        puVar17 = puVar17 + 1;
      }
      lVar12 = lVar16 + (ulonglong)uVar15 * 0xc;
      puVar18 = puVar17;
joined_r0x0001420ec5ac:
      if (bVar19) {
LAB_1420ec69e:
        bVar19 = true;
        if ((*(float *)(lVar12 + 4) == fVar11) && (!NAN(*(float *)(lVar12 + 4)) && !NAN(fVar11))) {
          *puVar7 = uVar3;
          lVar8 = *(longlong *)(lVar6 + 0x30);
          uVar9 = *(undefined8 *)(lVar6 + 0x40);
          if (lVar8 == *(longlong *)(lVar6 + 0x20)) {
            pdb_142d7e6e0(lVar6 + 0x20);
          }
          bVar19 = true;
          lVar10 = *(longlong *)(lVar6 + 0x28);
          *(undefined4 *)(lVar10 + lVar8 * 0x20) = 0x1b;
          *(undefined8 *)(lVar10 + 0x18 + lVar8 * 0x20) = uVar9;
          *(longlong *)(lVar6 + 0x30) = lVar8 + 1;
          *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
        }
      }
      else {
        bVar19 = false;
      }
    }
    uVar15 = uVar15 + 1;
    puVar17 = puVar18;
    if ((*(float *)(lVar12 + 8) == 0.0) && (!NAN(*(float *)(lVar12 + 8)))) {
      *puVar7 = uVar3;
      lVar12 = *(longlong *)(lVar6 + 0x30);
      uVar9 = *(undefined8 *)(lVar6 + 0x40);
      if (lVar12 == *(longlong *)(lVar6 + 0x20)) {
        pdb_142d7e6e0(lVar6 + 0x20);
      }
      lVar8 = *(longlong *)(lVar6 + 0x28);
      *(undefined4 *)(lVar8 + lVar12 * 0x20) = 0x1a;
      *(undefined8 *)(lVar8 + 0x18 + lVar12 * 0x20) = uVar9;
      *(longlong *)(lVar6 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
    }
  } while( true );
}

