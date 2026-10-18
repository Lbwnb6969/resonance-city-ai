// VA 0x140ace8a0, PDB extent 468 bytes
// country_core::systems::mod_editor::EditingMod::open_sound_board
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure: country_core::systems::mod_editor::EditingMod::open_sound_board
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 468 */

void pdb_140ace8a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x50);
    lVar6 = param_2[1];
    lVar7 = param_2[2];
    lVar11 = 0;
    do {
      if ((*(longlong *)(lVar5 + 0x10 + lVar11) == lVar7) &&
         (iVar9 = pub_142e32750(*(undefined8 *)(lVar5 + 8 + lVar11),lVar6,lVar7), iVar9 == 0)) {
        cVar3 = *(char *)(lVar5 + 0x19 + lVar11);
        cVar8 = '\x12';
        if (cVar3 != '\'') {
          cVar8 = cVar3;
        }
        if (*(longlong *)(param_1 + 0x100) == -0x7ffffffffffffffa) {
          *(undefined8 *)(param_1 + 0x100) = 0x8000000000000005;
          lVar4 = param_2[1];
          *(longlong *)(param_1 + 0x108) = *param_2;
          *(longlong *)(param_1 + 0x110) = lVar4;
          *(longlong *)(param_1 + 0x118) = param_2[2];
          *(char *)(param_1 + 0x120) = cVar8;
          return;
        }
        lVar5 = *param_2;
        lVar6 = param_2[1];
        lVar4 = param_2[2];
        uVar13 = *(ulonglong *)(param_1 + 0x78);
        uVar10 = *(ulonglong *)(param_1 + 0x90);
        if (uVar10 == uVar13) {
          pdb_140929340(param_1 + 0x78);
          uVar13 = *(ulonglong *)(param_1 + 0x78);
          uVar10 = *(ulonglong *)(param_1 + 0x90);
        }
        *(ulonglong *)(param_1 + 0x90) = uVar10 + 1;
        uVar10 = uVar10 + *(longlong *)(param_1 + 0x88);
        uVar14 = 0;
        if (uVar13 <= uVar10) {
          uVar14 = uVar13;
        }
        lVar7 = *(longlong *)(param_1 + 0x80);
        lVar11 = (uVar10 - uVar14) * 0x40;
        puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar11);
        *puVar1 = uStack_58;
        puVar1[1] = uStack_50;
        puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar11);
        *puVar1 = CONCAT71(uStack_67,cVar8);
        puVar1[1] = uStack_60;
        plVar2 = (longlong *)(lVar7 + 0x10 + lVar11);
        *plVar2 = lVar6;
        plVar2[1] = lVar4;
        *(undefined8 *)(lVar7 + lVar11) = 0x8000000000000005;
        ((undefined8 *)(lVar7 + lVar11))[1] = lVar5;
        return;
      }
      lVar11 = lVar11 + 0x20;
    } while (lVar4 << 5 != lVar11);
  }
  if (*param_2 == 0) {
    return;
  }
  lVar4 = param_2[1];
  uVar12 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar12,0,lVar4);
  return;
}

