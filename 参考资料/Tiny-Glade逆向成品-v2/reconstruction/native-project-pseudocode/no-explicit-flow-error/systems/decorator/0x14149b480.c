// VA 0x14149b480, PDB extent 551 bytes
// system_decorator::decorator_visual::lantern::compare_light_lists<system_decorator::decorator_visual::lantern::maintain_lantern_lights::closure_env$5>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::lantern::compare_light_lists<system_decorator::decorator_visual::lantern::maintain_lantern_lights::closure_env$5>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
   Extent: 551 */

void pdb_14149b480(uint *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  code *pcVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 uStack_58;
  uint *puStack_50;
  uint *puStack_48;
  
  uVar5 = 0;
  if (param_4 == 0 || param_2 == 0) {
    uVar8 = 0;
    if (param_2 != 0) {
LAB_14149b5aa:
      lVar6 = param_2 * 0x1c + uVar5 * -0x1c;
      puVar3 = param_1 + uVar5 * 7;
      do {
        uStack_58 = 0;
        puStack_50 = puVar3;
        pdb_14149b6b0(param_5,&uStack_58);
        lVar6 = lVar6 + -0x1c;
        puVar3 = puVar3 + 7;
      } while (lVar6 != 0);
    }
  }
  else {
    uVar7 = 0;
    puVar3 = param_1;
    while( true ) {
      if (param_4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330e6b0);
      }
      puStack_50 = (uint *)(uVar7 * 0x1c + param_3);
      bVar9 = *puVar3 < *puStack_50;
      bVar1 = !bVar9 && *puVar3 != *puStack_50;
      if (bVar1 == bVar9) break;
      if ((char)(bVar1 - bVar9) == '\x01') {
        uStack_58 = 1;
        pdb_14149b6b0(param_5,&uStack_58);
LAB_14149b589:
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
        if (param_4 <= uVar7) goto LAB_14149b592;
      }
      else {
        uStack_58 = 0;
        puStack_50 = puVar3;
        pdb_14149b6b0(param_5,&uStack_58);
        uVar5 = uVar5 + 1;
        uVar8 = uVar7;
        if (param_2 <= uVar5) goto LAB_14149b592;
      }
      puVar3 = param_1 + uVar5 * 7;
      if (param_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330e698);
      }
    }
    uStack_58 = 2;
    puStack_48 = puVar3;
    pdb_14149b6b0(param_5,&uStack_58);
    uVar5 = uVar5 + 1;
    uVar8 = uVar7 + 1;
    if (uVar5 < param_2) goto LAB_14149b589;
LAB_14149b592:
    if (param_2 < uVar5) {
      pdb_142dc8420(uVar5,param_2,param_2,&UNK_14330e6c8);
      goto LAB_14149b691;
    }
    if (uVar5 != param_2) goto LAB_14149b5aa;
  }
  if (uVar8 < param_4 || uVar8 == param_4) {
    if (uVar8 != param_4) {
      lVar6 = param_4 * 0x1c + uVar8 * -0x1c;
      puStack_50 = (uint *)(param_3 + uVar8 * 0x1c);
      do {
        uStack_58 = 1;
        lVar4 = (longlong)puStack_50 + 0x1c;
        pdb_14149b6b0(param_5,&uStack_58);
        lVar6 = lVar6 + -0x1c;
        puStack_50 = (uint *)lVar4;
      } while (lVar6 != 0);
    }
    return;
  }
LAB_14149b691:
  pdb_142dc8420(uVar8,param_4,param_4,&UNK_14330e6e0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

