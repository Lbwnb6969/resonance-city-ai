// VA 0x140ae30f0, PDB extent 262 bytes
// country_core::resources::history::History::current_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::current_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 262 */

longlong * pdb_140ae30f0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plStack_18;
  int iStack_10;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (uVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar8 = 0;
    lVar7 = lVar8;
    uVar10 = uVar2;
    if (uVar2 != 1) {
      do {
        lVar8 = lVar7 + (uVar10 >> 1);
        if (iVar1 <= *(int *)(lVar3 + 8 + lVar8 * 0x10)) {
          lVar8 = lVar7;
        }
        uVar10 = uVar10 - (uVar10 >> 1);
        lVar7 = lVar8;
      } while (1 < uVar10);
    }
    uVar10 = (ulonglong)(*(int *)(lVar3 + 8 + lVar8 * 0x10) < iVar1) + lVar8;
    if (uVar10 < uVar2) {
      puVar6 = (undefined8 *)(lVar3 + uVar10 * 0x10);
      if (uVar10 != 0) {
        iVar9 = -(*(int *)(puVar6 + -1) - iVar1);
        if (iVar9 < 0) {
          iVar9 = *(int *)(puVar6 + -1) - iVar1;
        }
        iVar5 = -(*(int *)(puVar6 + 1) - iVar1);
        if (iVar5 < 0) {
          iVar5 = *(int *)(puVar6 + 1) - iVar1;
        }
        puVar6 = puVar6 + (ulonglong)(iVar5 <= iVar9) * 2 + -2;
      }
    }
    else {
      puVar6 = (undefined8 *)(lVar3 + uVar2 * 0x10 + -0x10);
    }
    if (puVar6 != (undefined8 *)0x0) {
      plStack_18 = (longlong *)*puVar6;
      iStack_10 = *(int *)(puVar6 + 1);
      LOCK();
      lVar3 = *plStack_18;
      *plStack_18 = *plStack_18 + 1;
      UNLOCK();
      if (*plStack_18 != 0 && SCARRY8(lVar3,1) == *plStack_18 < 0) {
        if (iStack_10 != iVar1) {
          LOCK();
          *plStack_18 = *plStack_18 + -1;
          UNLOCK();
          if (*plStack_18 == 0) {
            pdb_140315620(&plStack_18);
          }
          plStack_18 = (longlong *)0x0;
        }
        return plStack_18;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  return (longlong *)0x0;
}

