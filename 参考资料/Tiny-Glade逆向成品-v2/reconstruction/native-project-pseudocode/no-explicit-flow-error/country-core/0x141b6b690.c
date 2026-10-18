// VA 0x141b6b690, PDB extent 410 bytes
// country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$14>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$14>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 410 */

void pdb_141b6b690(char param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  if (param_1 == '\0') {
    pcVar7 = (char *)*param_3;
    if (*pcVar7 == '\x10') {
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      *pcVar7 = '\0';
      pcVar7[8] = '\0';
      pcVar7[9] = '\0';
      pcVar7[10] = '\0';
      pcVar7[0xb] = '\0';
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      uStack_28 = (undefined7)*(undefined8 *)(pcVar7 + 0x10);
      uStack_21 = (undefined1)((ulonglong)*(undefined8 *)(pcVar7 + 0x10) >> 0x38);
      uStack_38 = *(undefined8 *)pcVar7;
      uStack_30 = *(undefined4 *)(pcVar7 + 8);
      uStack_2c = *(undefined4 *)(pcVar7 + 0xc);
      pdb_140ae55f0(*param_4,&uStack_38);
    }
    else {
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      lVar3 = *param_4;
      if (10 < *(ulonglong *)(lVar3 + 0x10)) {
        lVar4 = *(longlong *)(lVar3 + 8);
        uVar8 = *(ulonglong *)(lVar4 + 0x150);
        if (uVar8 != 0) {
          if (*(char *)(lVar3 + 0x18) == '\n') {
            uVar10 = *(longlong *)(lVar4 + 0x158) + 1;
            if ((uVar10 | uVar8) >> 0x20 == 0) {
              uVar10 = (uVar10 & 0xffffffff) % (uVar8 & 0xffffffff);
            }
            else {
              uVar10 = uVar10 % uVar8;
            }
            *(ulonglong *)(lVar4 + 0x158) = uVar10;
          }
          else {
            uVar10 = *(ulonglong *)(lVar4 + 0x158);
            if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar10,uVar8,&UNK_14304f650);
            }
          }
          lVar4 = *(longlong *)(lVar4 + 0x148);
          cVar2 = *(char *)(lVar4 + uVar10 * 0x18);
          uStack_28 = (undefined7)((ulonglong)*(undefined8 *)(lVar4 + 0x10 + uVar10 * 0x18) >> 8);
          puVar1 = (undefined8 *)(lVar4 + 1 + uVar10 * 0x18);
          uVar5 = *puVar1;
          uVar9 = puVar1[1];
          *(undefined1 *)(lVar3 + 0x18) = 10;
          if (cVar2 != '\x12') {
            *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
            *pcVar7 = cVar2;
            *(undefined8 *)(pcVar7 + 1) = uVar5;
            *(undefined8 *)(pcVar7 + 9) = uVar9;
            uStack_2c._3_1_ = (undefined1)((ulonglong)uVar9 >> 0x38);
            *(ulonglong *)(pcVar7 + 0x10) = CONCAT71(uStack_28,uStack_2c._3_1_);
          }
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

