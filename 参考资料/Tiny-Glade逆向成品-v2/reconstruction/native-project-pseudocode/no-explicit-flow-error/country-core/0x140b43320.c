// VA 0x140b43320, PDB extent 522 bytes
// country_core::systems::mode_manager::WallSelectionGroups::retain_history_walls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::mode_manager::WallSelectionGroups::retain_history_walls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 522 */

void pdb_140b43320(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uVar5 = _UNK_1430593c8;
  uVar4 = _DAT_1430593c0;
  lVar3 = _UNK_1430593b8;
  lVar9 = _DAT_1430593b0;
  uStack_70 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    lVar10 = uVar1 * 0x18;
    uVar8 = param_2;
    plVar11 = plVar2;
    do {
      plVar6 = (longlong *)pdb_140f3bda0();
      if ((char)plVar6[2] == '\x01') {
        lStack_88 = *plVar6;
        uVar8 = plVar6[1];
      }
      else {
        plStack_78 = plVar6;
        lStack_88 = pdb_140f4fd10();
        *plStack_78 = lStack_88;
        plStack_78[1] = uVar8;
        *(undefined1 *)(plStack_78 + 2) = 1;
        plVar6 = plStack_78;
      }
      *plVar6 = lStack_88 + 1;
      uStack_98 = uVar4;
      uStack_90 = uVar5;
      lStack_a8 = lVar9;
      lStack_a0 = lVar3;
      uStack_80 = uVar8;
      pdb_1415e0f50(plVar11,param_2,&lStack_a8);
      uVar8 = 0;
      if (lStack_a0 != 0) {
        uVar7 = lStack_a0 * 8 + 0x17U & 0xfffffffffffffff0;
        uVar8 = lStack_a0 + uVar7 + 0x11;
        if (uVar8 != 0) {
          pub_1406abac0((byte *)(lStack_a8 - uVar7),uVar8,0x10);
        }
      }
      plVar11 = plVar11 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
    uVar8 = 0;
    plVar11 = plVar2;
    do {
      plVar6 = plVar11 + 3;
      if ((ulonglong)plVar11[2] < 2) {
        if (*plVar11 != 0) {
          pub_1406abac0((byte *)plVar11[1],*plVar11 << 3,8);
        }
        if (uVar8 + 1 < uVar1) {
          lVar9 = (uVar1 - 1) - uVar8;
          do {
            if ((ulonglong)plVar6[2] < 2) {
              if (*plVar6 != 0) {
                pub_1406abac0((byte *)plVar6[1],*plVar6 << 3,8);
              }
            }
            else {
              plVar2[uVar8 * 3 + 2] = plVar6[2];
              lVar3 = plVar6[1];
              plVar2[uVar8 * 3] = *plVar6;
              (plVar2 + uVar8 * 3)[1] = lVar3;
              uVar8 = uVar8 + 1;
            }
            plVar6 = plVar6 + 3;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        *(ulonglong *)(param_1 + 0x10) = uVar8;
        return;
      }
      uVar8 = uVar8 + 1;
      plVar11 = plVar6;
    } while (uVar1 != uVar8);
  }
  return;
}

