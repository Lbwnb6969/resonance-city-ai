// VA 0x1408e8b70, PDB extent 1066 bytes
// system_decorator::decorator_on_wall_height_changed::decorator_on_wall_height_changed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_wall_height_changed.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_on_wall_height_changed::decorator_on_wall_height_changed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_wall_height_changed.rs
   Extent: 1066 */

void pdb_1408e8b70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char cVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  
  puVar2 = (ulonglong *)*param_3;
  lVar15 = param_3[1];
  uVar7 = *puVar2;
  uVar8 = 0;
  uVar5 = uVar7 - *(ulonglong *)(lVar15 + 0x18);
  if (uVar7 < *(ulonglong *)(lVar15 + 0x18)) {
    uVar5 = uVar8;
  }
  uVar12 = uVar7 - *(ulonglong *)(lVar15 + 0x38);
  if (uVar7 < *(ulonglong *)(lVar15 + 0x38)) {
    uVar12 = uVar8;
  }
  uVar7 = *(ulonglong *)(lVar15 + 0x10);
  uVar14 = *(ulonglong *)(lVar15 + 0x30);
  uVar13 = uVar14 - uVar12;
  if (uVar12 > uVar14) {
    uVar13 = uVar8;
  }
  uVar10 = uVar7 - uVar5;
  if (uVar5 > uVar7) {
    uVar10 = uVar8;
  }
  uVar8 = *(ulonglong *)(lVar15 + 0x40);
  lVar9 = *(longlong *)(lVar15 + 8);
  lVar15 = *(longlong *)(lVar15 + 0x28);
  *puVar2 = (uVar8 - uVar13) - uVar10;
  if (uVar5 <= uVar7 && uVar7 - uVar5 != 0 || uVar12 <= uVar14 && uVar14 - uVar12 != 0) {
    lVar15 = lVar15 + uVar12 * 0x10;
    lVar9 = lVar9 + uVar5 * 0x10;
    uVar16 = 0;
    if (uVar7 < uVar5) {
      lVar9 = 8;
    }
    uVar10 = lVar9 + -0x10 + uVar10 * 0x10;
    if (uVar7 <= uVar5) {
      uVar10 = uVar16;
    }
    if (uVar14 < uVar12) {
      lVar15 = 8;
    }
    uVar7 = lVar15 + -0x10 + uVar13 * 0x10;
    if (uVar14 <= uVar12) {
      uVar7 = uVar10;
    }
    *puVar2 = uVar8;
    uVar11 = *param_1;
    pdb_1408e8fa0(param_6,uVar11,*(undefined8 *)(uVar7 + 8));
    puVar2 = (ulonglong *)*param_4;
    lVar15 = param_4[1];
    uVar7 = *puVar2;
    uVar5 = uVar7 - *(ulonglong *)(lVar15 + 0x18);
    if (uVar7 < *(ulonglong *)(lVar15 + 0x18)) {
      uVar5 = uVar16;
    }
    uVar8 = uVar7 - *(ulonglong *)(lVar15 + 0x38);
    if (uVar7 < *(ulonglong *)(lVar15 + 0x38)) {
      uVar8 = uVar16;
    }
    lVar9 = *(longlong *)(lVar15 + 8);
    uVar7 = *(ulonglong *)(lVar15 + 0x30);
    uVar12 = uVar7 - uVar8;
    if (uVar7 < uVar8) {
      uVar12 = uVar16;
    }
    uVar14 = *(ulonglong *)(lVar15 + 0x10);
    uVar13 = uVar14 - uVar5;
    if (uVar14 < uVar5) {
      uVar13 = uVar16;
    }
    lVar6 = *(longlong *)(lVar15 + 0x28);
    uVar10 = *(ulonglong *)(lVar15 + 0x40);
    *puVar2 = (uVar10 - uVar12) - uVar13;
    if ((uVar14 < uVar5 || uVar14 - uVar5 == 0) && (uVar7 < uVar8 || uVar7 - uVar8 == 0))
    goto LAB_1408e8ed2;
    lVar6 = lVar6 + uVar8 * 0x10;
    lVar9 = lVar9 + uVar5 * 0x10;
    if (uVar14 < uVar5) {
      lVar9 = 8;
    }
    lVar15 = 0;
    if (uVar5 < uVar14) {
      lVar15 = lVar9 + -0x10 + uVar13 * 0x10;
    }
    if (uVar7 < uVar8) {
      lVar6 = 8;
    }
    lVar9 = lVar6 + -0x10 + uVar12 * 0x10;
    if (uVar7 <= uVar8) {
      lVar9 = lVar15;
    }
    *puVar2 = uVar10;
  }
  else {
    puVar2 = (ulonglong *)*param_4;
    lVar15 = param_4[1];
    uVar7 = *puVar2;
    uVar8 = 0;
    uVar5 = uVar7 - *(ulonglong *)(lVar15 + 0x18);
    if (uVar7 < *(ulonglong *)(lVar15 + 0x18)) {
      uVar5 = uVar8;
    }
    uVar12 = uVar7 - *(ulonglong *)(lVar15 + 0x38);
    if (uVar7 < *(ulonglong *)(lVar15 + 0x38)) {
      uVar12 = uVar8;
    }
    lVar9 = *(longlong *)(lVar15 + 8);
    uVar7 = *(ulonglong *)(lVar15 + 0x30);
    uVar14 = uVar7 - uVar12;
    if (uVar7 < uVar12) {
      uVar14 = uVar8;
    }
    uVar13 = *(ulonglong *)(lVar15 + 0x10);
    uVar10 = uVar13 - uVar5;
    if (uVar13 < uVar5) {
      uVar10 = uVar8;
    }
    lVar6 = *(longlong *)(lVar15 + 0x28);
    uVar8 = *(ulonglong *)(lVar15 + 0x40);
    *puVar2 = (uVar8 - uVar14) - uVar10;
    if ((uVar13 < uVar5 || uVar13 - uVar5 == 0) && (uVar7 < uVar12 || uVar7 - uVar12 == 0)) {
      puVar2 = (ulonglong *)*param_2;
      lVar15 = param_2[1];
      uVar7 = *puVar2;
      uVar8 = 0;
      uVar5 = uVar7 - *(ulonglong *)(lVar15 + 0x18);
      if (uVar7 < *(ulonglong *)(lVar15 + 0x18)) {
        uVar5 = uVar8;
      }
      uVar12 = uVar7 - *(ulonglong *)(lVar15 + 0x38);
      if (uVar7 < *(ulonglong *)(lVar15 + 0x38)) {
        uVar12 = uVar8;
      }
      lVar9 = uVar5 * 0x30 + *(longlong *)(lVar15 + 8);
      uVar7 = *(ulonglong *)(lVar15 + 0x10) - uVar5;
      if (*(ulonglong *)(lVar15 + 0x10) < uVar5) {
        lVar9 = 8;
        uVar7 = uVar8;
      }
      lVar6 = uVar12 * 0x30 + *(longlong *)(lVar15 + 0x28);
      uVar5 = *(ulonglong *)(lVar15 + 0x30) - uVar12;
      if (*(ulonglong *)(lVar15 + 0x30) < uVar12) {
        lVar6 = 8;
        uVar5 = uVar8;
      }
      *puVar2 = (*(longlong *)(lVar15 + 0x40) - uVar5) - uVar7;
      lVar18 = uVar7 * 0x30 + lVar9;
      lVar15 = uVar5 * 0x30 + lVar6;
      uVar11 = *param_1;
      do {
        if ((lVar9 == 0) || (lVar9 == lVar18)) {
          if ((lVar6 == 0) || (lVar6 == lVar15)) goto LAB_1408e8ed2;
          *puVar2 = *puVar2 + 1;
          cVar1 = *(char *)(lVar6 + 0x21);
          lVar3 = 0;
          lVar4 = lVar6 + 0x30;
          lVar17 = lVar6;
        }
        else {
          *puVar2 = *puVar2 + 1;
          cVar1 = *(char *)(lVar9 + 0x21);
          lVar3 = lVar9 + 0x30;
          lVar4 = lVar6;
          lVar17 = lVar9;
        }
        lVar6 = lVar4;
        lVar9 = lVar3;
        if (cVar1 == '\0') {
          pdb_1408e8fa0(param_6,uVar11,*(undefined8 *)(lVar17 + 0x18));
        }
      } while( true );
    }
    lVar6 = lVar6 + uVar12 * 0x10;
    lVar9 = lVar9 + uVar5 * 0x10;
    if (uVar13 < uVar5) {
      lVar9 = 8;
    }
    lVar15 = 0;
    if (uVar5 < uVar13) {
      lVar15 = lVar9 + -0x10 + uVar10 * 0x10;
    }
    if (uVar7 < uVar12) {
      lVar6 = 8;
    }
    lVar9 = lVar6 + -0x10 + uVar14 * 0x10;
    if (uVar7 <= uVar12) {
      lVar9 = lVar15;
    }
    *puVar2 = uVar8;
    uVar11 = *param_1;
  }
  pdb_1408e8fa0(param_6,uVar11,*(undefined8 *)(lVar9 + 8));
LAB_1408e8ed2:
  puVar2 = (ulonglong *)*param_5;
  lVar15 = param_5[1];
  uVar7 = *puVar2;
  uVar8 = 0;
  uVar5 = uVar7 - *(ulonglong *)(lVar15 + 0x18);
  if (uVar7 < *(ulonglong *)(lVar15 + 0x18)) {
    uVar5 = uVar8;
  }
  uVar12 = uVar7 - *(ulonglong *)(lVar15 + 0x38);
  if (uVar7 < *(ulonglong *)(lVar15 + 0x38)) {
    uVar12 = uVar8;
  }
  lVar9 = uVar5 * 0x10 + *(longlong *)(lVar15 + 8);
  uVar7 = *(ulonglong *)(lVar15 + 0x10) - uVar5;
  if (*(ulonglong *)(lVar15 + 0x10) < uVar5) {
    lVar9 = 8;
    uVar7 = uVar8;
  }
  lVar6 = uVar12 * 0x10 + *(longlong *)(lVar15 + 0x28);
  uVar5 = *(ulonglong *)(lVar15 + 0x30) - uVar12;
  if (*(ulonglong *)(lVar15 + 0x30) < uVar12) {
    lVar6 = 8;
    uVar5 = uVar8;
  }
  *puVar2 = (*(longlong *)(lVar15 + 0x40) - uVar5) - uVar7;
  lVar18 = uVar5 * 0x10 + lVar6;
  lVar15 = lVar9;
  do {
    if ((lVar15 == 0) || (lVar15 == uVar7 * 0x10 + lVar9)) {
      if ((lVar6 == 0) || (lVar6 == lVar18)) {
        return;
      }
      lVar17 = 0;
      lVar15 = lVar6;
      lVar6 = lVar6 + 0x10;
    }
    else {
      lVar17 = lVar15 + 0x10;
    }
    *puVar2 = *puVar2 + 1;
    pdb_1408e8fa0(param_6,uVar11,*(undefined8 *)(lVar15 + 8));
    lVar15 = lVar17;
  } while( true );
}

