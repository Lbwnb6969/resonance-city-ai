// VA 0x141b6aad0, PDB extent 292 bytes
// country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$10>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$10>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 292 */

void pdb_141b6aad0(char param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 uStack_29;
  undefined7 uStack_28;
  
  if (param_1 == '\0') {
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar3 = *param_3;
    if (6 < *(ulonglong *)(lVar3 + 0x10)) {
      lVar4 = *(longlong *)(lVar3 + 8);
      uVar7 = *(ulonglong *)(lVar4 + 0xd0);
      if (uVar7 != 0) {
        if (*(char *)(lVar3 + 0x18) == '\x06') {
          uVar10 = *(longlong *)(lVar4 + 0xd8) + 1;
          if ((uVar10 | uVar7) >> 0x20 == 0) {
            uVar10 = (uVar10 & 0xffffffff) % (uVar7 & 0xffffffff);
          }
          else {
            uVar10 = uVar10 % uVar7;
          }
          *(ulonglong *)(lVar4 + 0xd8) = uVar10;
        }
        else {
          uVar10 = *(ulonglong *)(lVar4 + 0xd8);
          if (uVar7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar10,uVar7,&UNK_14304f650);
          }
        }
        lVar4 = *(longlong *)(lVar4 + 200);
        cVar2 = *(char *)(lVar4 + uVar10 * 0x18);
        uStack_28 = (undefined7)((ulonglong)*(undefined8 *)(lVar4 + 0x10 + uVar10 * 0x18) >> 8);
        puVar1 = (undefined8 *)(lVar4 + 1 + uVar10 * 0x18);
        uVar5 = *puVar1;
        uVar9 = puVar1[1];
        uStack_29 = (undefined1)((ulonglong)uVar9 >> 0x38);
        *(undefined1 *)(lVar3 + 0x18) = 6;
        if (cVar2 != '\x12') {
          *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
          pcVar8 = (char *)*param_4;
          *pcVar8 = cVar2;
          *(undefined8 *)(pcVar8 + 1) = uVar5;
          *(undefined8 *)(pcVar8 + 9) = uVar9;
          *(ulonglong *)(pcVar8 + 0x10) = CONCAT71(uStack_28,uStack_29);
        }
      }
    }
  }
  else {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar3 = *param_2;
    lVar4 = *(longlong *)(lVar3 + 0x30);
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
      pdb_142d7e6e0(lVar3 + 0x20);
    }
    lVar6 = *(longlong *)(lVar3 + 0x28);
    *(undefined4 *)(lVar6 + lVar4 * 0x20) = 4;
    *(undefined8 *)(lVar6 + 0x18 + lVar4 * 0x20) = uVar5;
    *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
    *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
  }
  return;
}

