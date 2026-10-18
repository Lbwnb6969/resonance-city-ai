// VA 0x1408f80c0, PDB extent 652 bytes
// country_core::components::drawable::cache_prev_object_transforms
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::components::drawable::cache_prev_object_transforms
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 652 */

void pdb_1408f80c0(longlong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong unaff_RSI;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar17 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar17 + *(longlong *)(lVar4 + 0x100);
  if (*(char *)(lVar4 + 0x108) != '\0') {
    lVar18 = 0;
    lVar15 = 0;
    lVar19 = 0;
    uVar12 = 0;
    do {
      if (uVar12 == (uint)lVar18) {
        if (puVar17 == puVar1) {
          return;
        }
        while( true ) {
          lVar18 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar17 * 0x48);
          if (lVar18 != 0) break;
          puVar17 = puVar17 + 1;
          if (puVar17 == puVar1) {
            return;
          }
        }
        lVar15 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar17 * 0x48;
        if (*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar15 + 0x40)) {
          uVar20 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
          lVar13 = *(longlong *)(lVar15 + 0x18);
          if (uVar20 == 0) goto LAB_1408f8252;
          lVar19 = *(longlong *)(lVar13 + 0x10 + ~uVar20 * 0x30);
        }
        else {
          lVar13 = *(longlong *)(lVar15 + 0x18);
LAB_1408f8252:
          lVar19 = 0;
        }
        puVar17 = puVar17 + 1;
        lVar14 = ~*(ulonglong *)(*(longlong *)(lVar15 + 0x38) + *(longlong *)(lVar4 + 0x118) * 8) *
                 0x30;
        lVar15 = *(longlong *)(lVar13 + 0x10 + lVar14);
        unaff_RSI = *(longlong *)(lVar13 + 0x28 + lVar14);
        uVar12 = 0;
      }
      uVar20 = (ulonglong)uVar12;
      lVar13 = uVar20 * 0x30;
      uVar12 = uVar12 + 1;
      uVar6 = *(undefined8 *)(lVar19 + lVar13);
      uVar7 = ((undefined8 *)(lVar19 + lVar13))[1];
      puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar13);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar13);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      *(undefined4 *)(unaff_RSI + uVar20 * 4) = uVar3;
      puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar13);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar13);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      *(undefined8 *)(lVar15 + lVar13) = uVar6;
      ((undefined8 *)(lVar15 + lVar13))[1] = uVar7;
    } while( true );
  }
  do {
    if (puVar17 == puVar1) {
      return;
    }
    while( true ) {
      lVar15 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar17 * 0xa0);
      if (lVar15 != 0) break;
      puVar17 = puVar17 + 1;
      if (puVar17 == puVar1) {
        return;
      }
    }
    lVar14 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar17 * 0xa0;
    uVar20 = (ulonglong)*(uint *)(lVar14 + 0x94);
    lVar19 = *(longlong *)(lVar5 + 0x1a0);
    lVar18 = lVar19 + uVar20 * 0x48;
    lVar13 = *(longlong *)(lVar19 + 0x38 + uVar20 * 0x48);
    if (*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar19 + 0x40 + uVar20 * 0x48)) {
      uVar20 = *(ulonglong *)(lVar13 + *(ulonglong *)(lVar4 + 0x110) * 8);
      lVar18 = *(longlong *)(lVar18 + 0x18);
      if (uVar20 == 0) goto LAB_1408f81b4;
      lVar19 = *(longlong *)(lVar18 + 0x10 + ~uVar20 * 0x30);
    }
    else {
      lVar18 = *(longlong *)(lVar18 + 0x18);
LAB_1408f81b4:
      lVar19 = 0;
    }
    puVar17 = puVar17 + 1;
    lVar16 = ~*(ulonglong *)(lVar13 + *(longlong *)(lVar4 + 0x118) * 8) * 0x30;
    lVar13 = *(longlong *)(lVar18 + 0x10 + lVar16);
    lVar18 = *(longlong *)(lVar18 + 0x28 + lVar16);
    lVar14 = *(longlong *)(lVar14 + 0x50);
    uVar12 = 1;
    uVar20 = 0;
    while( true ) {
      uVar20 = (ulonglong)~*(uint *)(lVar14 + 8 + uVar20 * 0x10);
      lVar16 = uVar20 * 0x30;
      uVar6 = *(undefined8 *)(lVar19 + lVar16);
      uVar7 = ((undefined8 *)(lVar19 + lVar16))[1];
      puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar16);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar16);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      *(undefined4 *)(lVar18 + uVar20 * 4) = uVar3;
      puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar16);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar16);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      *(undefined8 *)(lVar13 + lVar16) = uVar6;
      ((undefined8 *)(lVar13 + lVar16))[1] = uVar7;
      if (uVar12 == (uint)lVar15) break;
      uVar20 = (ulonglong)uVar12;
      uVar12 = uVar12 + 1;
    }
  } while( true );
}

