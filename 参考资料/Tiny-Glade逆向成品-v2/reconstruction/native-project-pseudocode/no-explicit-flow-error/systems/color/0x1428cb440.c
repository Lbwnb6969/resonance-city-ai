// VA 0x1428cb440, PDB extent 591 bytes
// system_color::set_window_light::set_window_light
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_window_light.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::set_window_light::set_window_light
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_window_light.rs
   Extent: 591 */

void pdb_1428cb440(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 uVar25;
  undefined4 uStack_94;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  puVar5 = (ulonglong *)*param_2;
  lVar6 = param_2[1];
  uVar7 = *puVar5;
  uVar18 = 0;
  uVar22 = uVar7 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar7 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar22 = uVar18;
  }
  uVar23 = uVar7 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar7 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar23 = uVar18;
  }
  lVar19 = uVar22 * 0x18 + *(longlong *)(lVar6 + 8);
  uVar7 = *(ulonglong *)(lVar6 + 0x10) - uVar22;
  if (*(ulonglong *)(lVar6 + 0x10) < uVar22) {
    lVar19 = 8;
    uVar7 = uVar18;
  }
  lVar24 = uVar23 * 0x18 + *(longlong *)(lVar6 + 0x28);
  uVar22 = *(ulonglong *)(lVar6 + 0x30) - uVar23;
  if (*(ulonglong *)(lVar6 + 0x30) < uVar23) {
    lVar24 = 8;
    uVar22 = uVar18;
  }
  *puVar5 = (*(longlong *)(lVar6 + 0x40) - uVar22) - uVar7;
  lVar6 = lVar24 + uVar22 * 0x18;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar8 = *param_1;
  puVar9 = (undefined4 *)param_1[2];
  uVar10 = *param_4;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar11 = *param_3;
  puVar12 = (undefined4 *)param_3[2];
  lVar20 = lVar19;
  do {
    if ((lVar20 == 0) || (lVar20 == lVar19 + uVar7 * 0x18)) {
      if ((lVar24 == 0) || (lVar24 == lVar6)) {
        return;
      }
      lVar21 = 0;
      lVar13 = lVar24 + 0x18;
      lVar17 = lVar24;
    }
    else {
      lVar21 = lVar20 + 0x18;
      lVar13 = lVar24;
      lVar17 = lVar20;
    }
    lVar24 = lVar13;
    *puVar5 = *puVar5 + 1;
    *puVar9 = uVar1;
    uVar3 = *(undefined4 *)(lVar17 + 8);
    puVar15 = (ulonglong *)pdb_140c40a30(uVar8,uVar3);
    if (puVar15 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1435af3b0);
    }
    uVar4 = *(undefined4 *)(lVar17 + 0xc);
    puVar16 = (undefined4 *)pdb_1409014f0(puVar15 + 7,&UNK_1435af3c8);
    *puVar16 = uVar4;
    lVar20 = lVar21;
    if (*(char *)(lVar17 + 0x10) != '\0') {
      uVar25 = 10;
      if ((0xcfUL >> (*puVar15 & 0x3f) & 1) == 0) {
        if (*puVar15 == 4) {
          uStack_94 = (undefined4)puVar15[10];
          uVar25 = 0xd;
        }
        else {
          uVar25 = 8;
        }
      }
      pdb_140c45db0(&uStack_4c,uVar10,uVar3,&UNK_1435af3e0);
      *puVar12 = uVar2;
      lVar21 = *(longlong *)(lVar11 + 0x30);
      uVar14 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar21 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7e6e0(lVar11 + 0x20);
      }
      lVar13 = *(longlong *)(lVar11 + 0x28);
      lVar17 = lVar21 * 0x20;
      *(undefined8 *)(lVar13 + lVar17) = uVar14;
      *(undefined1 *)(lVar13 + 8 + lVar17) = uVar25;
      *(undefined4 *)(lVar13 + 0xc + lVar17) = uStack_94;
      *(undefined4 *)(lVar13 + 0x18 + lVar17) = uStack_44;
      *(undefined8 *)(lVar13 + 0x10 + lVar17) = uStack_4c;
      *(longlong *)(lVar11 + 0x30) = lVar21 + 1;
      *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
    }
  } while( true );
}

