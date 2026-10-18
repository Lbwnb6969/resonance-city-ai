// VA 0x140ae4150, PDB extent 732 bytes
// country_core::resources::history::History::set_current_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::set_current_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 732 */

void pdb_140ae4150(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plStack_70;
  int iStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  int iStack_50;
  longlong *plStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar10 = *(ulonglong *)(param_1 + 0x28);
  plStack_60 = param_2;
  plStack_48 = param_2;
  if (uVar10 == 0) {
    uVar10 = 0;
    uVar9 = 0;
    plStack_58 = param_2;
    iStack_50 = iVar1;
    if (*(longlong *)(param_1 + 0x18) != 0) goto LAB_140ae42b2;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    lVar7 = lVar5;
    uVar9 = uVar10;
    if (uVar10 != 1) {
      do {
        lVar5 = lVar7 + (uVar9 >> 1);
        if (iVar1 <= *(int *)(lVar2 + 8 + lVar5 * 0x10)) {
          lVar5 = lVar7;
        }
        uVar9 = uVar9 - (uVar9 >> 1);
        lVar7 = lVar5;
      } while (1 < uVar9);
    }
    uVar9 = (ulonglong)(*(int *)(lVar2 + 8 + lVar5 * 0x10) < iVar1) + lVar5;
    if (uVar9 < uVar10) {
      puVar6 = (undefined8 *)(uVar9 * 0x10 + lVar2);
      if (uVar9 != 0) {
        iVar11 = -(*(int *)(puVar6 + -1) - iVar1);
        if (iVar11 < 0) {
          iVar11 = *(int *)(puVar6 + -1) - iVar1;
        }
        iVar8 = -(*(int *)(puVar6 + 1) - iVar1);
        if (iVar8 < 0) {
          iVar8 = *(int *)(puVar6 + 1) - iVar1;
        }
        puVar6 = puVar6 + (ulonglong)(iVar8 <= iVar11) * 2 + -2;
      }
    }
    else {
      puVar6 = (undefined8 *)(uVar10 * 0x10 + lVar2 + -0x10);
    }
    iVar11 = iVar1;
    plVar4 = param_2;
    if (puVar6 != (undefined8 *)0x0) {
      plStack_70 = (longlong *)*puVar6;
      iVar11 = *(int *)(puVar6 + 1);
      LOCK();
      lVar5 = *plStack_70;
      *plStack_70 = *plStack_70 + 1;
      UNLOCK();
      if (*plStack_70 == 0 || SCARRY8(lVar5,1) != *plStack_70 < 0) goto LAB_140ae43a4;
      plStack_58 = plStack_70;
      iStack_50 = iVar11;
      if (iVar11 == iVar1) {
        LOCK();
        *plStack_70 = *plStack_70 + -1;
        UNLOCK();
        iStack_68 = iVar1;
        if (*plStack_70 == 0) {
          uStack_39 = 1;
          pdb_140315620(&plStack_70);
        }
        uStack_39 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14304f408,0x33,&UNK_14304f440);
      }
      LOCK();
      *plStack_70 = *plStack_70 + -1;
      UNLOCK();
      if (*plStack_70 == 0) {
        uStack_39 = 1;
        pdb_140315620(&plStack_58);
      }
      iVar11 = *(int *)(param_1 + 0x68);
      plVar4 = plStack_48;
    }
    plStack_58 = plVar4;
    lVar5 = 0;
    if (uVar10 != 1) {
      do {
        lVar7 = lVar5 + (uVar10 >> 1);
        if (iVar11 <= *(int *)(lVar2 + 8 + lVar7 * 0x10)) {
          lVar7 = lVar5;
        }
        lVar5 = lVar7;
        uVar10 = uVar10 - (uVar10 >> 1);
      } while (1 < uVar10);
    }
    uVar9 = (ulonglong)(*(int *)(lVar2 + 8 + lVar5 * 0x10) < iVar11) + lVar5;
    uVar10 = *(ulonglong *)(param_1 + 0x28);
    plStack_48 = plStack_58;
    if (uVar10 < uVar9) {
      iStack_50 = iVar1;
      pdb_142dc7e73(uVar9,uVar10,&UNK_14304f458);
LAB_140ae43a4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    iStack_50 = iVar1;
    if (uVar10 != *(ulonglong *)(param_1 + 0x18)) goto LAB_140ae42b2;
  }
  plStack_58 = plStack_48;
  iStack_50 = iVar1;
  pdb_142d7e980(param_1 + 0x18);
LAB_140ae42b2:
  puVar6 = (undefined8 *)(uVar9 * 0x10 + *(longlong *)(param_1 + 0x20));
  if (uVar9 <= uVar10 && uVar10 - uVar9 != 0) {
    pub_142e32770(puVar6 + 2,puVar6,(uVar10 - uVar9) * 0x10);
  }
  *puVar6 = plStack_48;
  *(int *)(puVar6 + 1) = iVar1;
  *(ulonglong *)(param_1 + 0x28) = uVar10 + 1;
  return;
}

