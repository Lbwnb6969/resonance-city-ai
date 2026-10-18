// VA 0x140b43940, PDB extent 727 bytes
// country_core::systems::mode_manager::expand_wall_selection_group
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::expand_wall_selection_group
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 727 */

void pdb_140b43940(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uStack_60;
  undefined4 uStack_58;
  ulonglong uStack_50;
  undefined4 *puStack_48;
  
  lVar7 = param_6[1];
  uVar14 = *(ulonglong *)*param_6;
  puVar12 = (ulonglong *)0x0;
  puVar16 = (ulonglong *)(uVar14 - *(ulonglong *)(lVar7 + 0x18));
  if (uVar14 < *(ulonglong *)(lVar7 + 0x18)) {
    puVar16 = puVar12;
  }
  puVar13 = (ulonglong *)(uVar14 - *(ulonglong *)(lVar7 + 0x38));
  if (uVar14 < *(ulonglong *)(lVar7 + 0x38)) {
    puVar13 = puVar12;
  }
  lVar8 = (longlong)puVar16 * 0x18 + *(longlong *)(lVar7 + 8);
  lVar15 = (longlong)puVar13 * 0x18 + *(longlong *)(lVar7 + 0x28);
  bVar17 = *(ulonglong **)(lVar7 + 0x10) < puVar16;
  puVar16 = (ulonglong *)((longlong)*(ulonglong **)(lVar7 + 0x10) - (longlong)puVar16);
  bVar19 = puVar16 == (ulonglong *)0x0;
  if (bVar17) {
    puVar16 = puVar12;
  }
  if (bVar17) {
    lVar8 = 8;
  }
  puVar9 = (ulonglong *)(lVar8 + -0x18 + (longlong)puVar16 * 0x18);
  if (bVar17 || bVar19) {
    puVar9 = puVar12;
  }
  bVar18 = *(ulonglong **)(lVar7 + 0x30) < puVar13;
  puVar13 = (ulonglong *)((longlong)*(ulonglong **)(lVar7 + 0x30) - (longlong)puVar13);
  bVar20 = puVar13 == (ulonglong *)0x0;
  if (bVar18) {
    lVar15 = 8;
    puVar13 = puVar12;
  }
  puVar11 = (ulonglong *)(lVar15 + -0x18 + (longlong)puVar13 * 0x18);
  if (bVar18 || bVar20) {
    puVar11 = puVar9;
  }
  puVar16 = (ulonglong *)((longlong)puVar13 + (longlong)puVar16);
  if (!bVar17 && !bVar19 || !bVar18 && !bVar20) {
    puVar16 = puVar12;
  }
  *(ulonglong *)*param_6 = *(longlong *)(lVar7 + 0x40) - (longlong)puVar16;
  if (((!bVar17 && !bVar19 || !bVar18 && !bVar20) && (SBORROW8(0,*(longlong *)(*param_2 + 0x30))))
     && (pcVar3 = (char *)*param_1, *pcVar3 == '\0')) {
    iVar1 = *(int *)(pcVar3 + 8);
    if (iVar1 == 3) {
      plVar10 = (longlong *)*param_5;
      uVar14 = plVar10[2];
      lVar7 = 0;
      do {
        if (uVar14 * 8 - lVar7 == 0) {
          return;
        }
        puVar16 = (ulonglong *)(plVar10[1] + lVar7);
        lVar7 = lVar7 + 8;
      } while (*puVar16 != puVar11[1]);
    }
    else {
      if ((iVar1 != 2) && (iVar1 != 1)) {
        return;
      }
      uVar14 = *(ulonglong *)(pcVar3 + 0x10);
      if (uVar14 != puVar11[1]) {
        return;
      }
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      plVar10 = (longlong *)*param_5;
      plVar10[2] = 0;
      if (*plVar10 == 0) {
        pdb_142d7f1b0(plVar10,0,1,8,8);
        lVar7 = plVar10[2];
      }
      else {
        lVar7 = 0;
      }
      *(ulonglong *)(plVar10[1] + lVar7 * 8) = uVar14;
      uVar14 = lVar7 + 1;
      plVar10[2] = uVar14;
    }
    uVar4 = *puVar11;
    if (uVar4 < *(ulonglong *)(*param_4 + 0x10)) {
      lVar7 = *(longlong *)(*param_4 + 8);
      uVar2 = *(undefined4 *)((longlong)param_5 + 0x1c);
      puStack_48 = (undefined4 *)param_5[2];
      *puStack_48 = uVar2;
      puVar12 = *(ulonglong **)(lVar7 + 8 + uVar4 * 0x18);
      puVar16 = puVar12 + *(longlong *)(lVar7 + 0x10 + uVar4 * 0x18);
      uVar5 = *param_3;
LAB_140b43af2:
      if (puVar12 != puVar16) {
        uVar4 = *puVar12;
        puVar12 = puVar12 + 1;
        uStack_60 = uVar4;
        cVar6 = pdb_1417b1cb0(uVar5);
        if (cVar6 != '\0') {
          lVar15 = plVar10[1];
          lVar8 = plVar10[2];
          lVar7 = 0;
          do {
            if (lVar8 * 8 - lVar7 == 0) {
              if (lVar8 == *plVar10) {
                pdb_142d7e8a0(plVar10);
                lVar15 = plVar10[1];
              }
              *(ulonglong *)(lVar15 + lVar8 * 8) = uVar4;
              plVar10[2] = lVar8 + 1;
              break;
            }
            puVar13 = (ulonglong *)(lVar15 + lVar7);
            lVar7 = lVar7 + 8;
          } while (*puVar13 != uVar4);
        }
        goto LAB_140b43af2;
      }
      uStack_50 = plVar10[2];
      if (uVar14 < uStack_50) {
        uStack_60 = CONCAT44(uStack_60._4_4_,0x2a);
        pdb_1414af090(param_8,&uStack_60,&UNK_143058e58);
        uStack_50 = plVar10[2];
      }
      if (uStack_50 != 0) {
        if (uStack_50 == 1) {
          uStack_50 = *(ulonglong *)plVar10[1];
          *puStack_48 = uVar2;
          plVar10[2] = 0;
          uStack_58 = 1;
        }
        else {
          uStack_58 = 3;
        }
        uStack_60 = uStack_60 & 0xffffffffffffff00;
        pdb_1414af090(param_7,&uStack_60,&UNK_143058e70);
      }
    }
  }
  return;
}

