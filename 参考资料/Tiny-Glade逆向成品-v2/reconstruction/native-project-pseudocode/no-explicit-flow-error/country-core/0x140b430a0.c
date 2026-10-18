// VA 0x140b430a0, PDB extent 321 bytes
// country_core::systems::mode_manager::leave_load_game
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::leave_load_game
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 321 */

void pdb_140b430a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 uStack_49;
  undefined7 uStack_48;
  
  lVar1 = param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  uVar18 = 0;
  uVar12 = uVar2 - *(ulonglong *)(lVar1 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar1 + 0x18)) {
    uVar12 = uVar18;
  }
  uVar7 = uVar2 - *(ulonglong *)(lVar1 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar1 + 0x38)) {
    uVar7 = uVar18;
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x10);
  uVar3 = *(ulonglong *)(lVar1 + 0x30);
  bVar19 = uVar3 < uVar7;
  uVar13 = uVar3 - uVar7;
  uVar14 = uVar13;
  if (bVar19) {
    uVar14 = uVar18;
  }
  bVar20 = uVar2 < uVar12;
  uVar10 = uVar2 - uVar12;
  uVar11 = uVar10;
  if (bVar20) {
    uVar11 = uVar18;
  }
  lVar17 = *(longlong *)(lVar1 + 8);
  uVar15 = uVar14 + uVar11;
  if (!bVar20 && uVar10 != 0 || !bVar19 && uVar13 != 0) {
    uVar15 = uVar18;
  }
  lVar9 = *(longlong *)(lVar1 + 0x28);
  *(ulonglong *)*param_3 = *(longlong *)(lVar1 + 0x40) - uVar15;
  if (!bVar20 && uVar10 != 0 || !bVar19 && uVar13 != 0) {
    lVar9 = lVar9 + uVar7 * 0x20;
    lVar17 = lVar17 + uVar12 * 0x20;
    if (uVar2 < uVar12) {
      lVar17 = 8;
    }
    pcVar16 = (char *)0x0;
    if (uVar12 < uVar2) {
      pcVar16 = (char *)(lVar17 + -0x20 + uVar11 * 0x20);
    }
    if (uVar3 < uVar7) {
      lVar9 = 8;
    }
    pcVar8 = (char *)(lVar9 + -0x20 + uVar14 * 0x20);
    if (uVar3 <= uVar7) {
      pcVar8 = pcVar16;
    }
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined1 *)*param_1 = 9;
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    pcVar16 = (char *)*param_2;
    uStack_48 = (undefined7)((ulonglong)*(undefined8 *)(pcVar8 + 0x10) >> 8);
    uVar5 = *(undefined8 *)(pcVar8 + 1);
    uVar4 = *(undefined4 *)(pcVar8 + 0xd);
    uVar6 = *(undefined8 *)(pcVar8 + 9);
    if ((byte)(*pcVar8 - 9U) < 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14303dc07,0x28,&UNK_14303dc30);
    }
    *pcVar16 = *pcVar8;
    *(undefined8 *)(pcVar16 + 1) = uVar5;
    *(undefined8 *)(pcVar16 + 9) = uVar6;
    uStack_49 = (undefined1)((uint)uVar4 >> 0x18);
    *(ulonglong *)(pcVar16 + 0x10) = CONCAT71(uStack_48,uStack_49);
  }
  return;
}

