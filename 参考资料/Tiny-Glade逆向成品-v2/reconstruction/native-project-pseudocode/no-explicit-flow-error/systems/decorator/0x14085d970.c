// VA 0x14085d970, PDB extent 484 bytes
// system_decorator::ui_systems::ui_stairs_misc::continue_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_misc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::ui_systems::ui_stairs_misc::continue_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_misc.rs
   Extent: 484 */

void pdb_14085d970(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int aiStack_70 [4];
  int iStack_60;
  ulonglong uStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x06') {
    if (*(int *)(pcVar2 + 8) != 7) {
      return;
    }
  }
  else {
    if (*pcVar2 != '\0') {
      return;
    }
    if (*(int *)(pcVar2 + 8) != 5) {
      return;
    }
  }
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *param_2;
  puVar8 = (ulonglong *)pdb_1406d0830(*param_3);
  uVar4 = *puVar8;
  if (uVar4 < 0xfffffffffffffff0 && (char)(((uint)uVar4 & 8) >> 3) == '\0') {
    LOCK();
    uVar5 = *puVar8;
    if (uVar4 == uVar5) {
      *puVar8 = uVar4 + 0x10;
    }
    UNLOCK();
    if (uVar4 == uVar5) goto LAB_14085d9ff;
  }
  pdb_142dbb5f0(puVar8,0);
LAB_14085d9ff:
  pdb_140e9a150(puVar8);
  uStack_58 = (ulonglong)puVar8 | 1;
  pdb_140e9a150();
  uVar4 = puVar8[3];
  puStack_50 = puVar8;
  if (uVar4 != 0) {
    uVar5 = puVar8[2];
    lVar9 = 0;
    do {
      if ((*(int *)(uVar5 + lVar9) == 3) && (*(int *)(uVar5 + 0x80 + lVar9) == 7)) {
        uVar6 = *(undefined8 *)(uVar5 + 8 + lVar9);
        uVar7 = *(undefined8 *)(uVar5 + 0x10 + lVar9);
        iVar1 = *(int *)(uVar5 + 0x40 + lVar9);
        pdb_140a61440(uVar3,iVar1);
        pdb_140a61500(aiStack_70,uVar3);
        if ((aiStack_70[0] != 3) && (iStack_60 != iVar1)) {
          pdb_140a61170(uVar3,iStack_60,iVar1);
        }
        if (*(char *)(uVar5 + 0xa0 + lVar9) == '\0') {
          pdb_140901390(aiStack_70,uVar6,uVar7,iVar1);
          pdb_140a60230(uVar3,aiStack_70);
        }
      }
      lVar9 = lVar9 + 0xa8;
    } while (uVar4 * 0xa8 - lVar9 != 0);
  }
  puVar8 = puStack_50;
  pdb_140e9a350(puStack_50);
  pdb_140e9a350(uStack_58);
  LOCK();
  uVar4 = *puVar8;
  *puVar8 = *puVar8 - 0x10;
  UNLOCK();
  if ((uVar4 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar8);
  }
  return;
}

