// VA 0x141b6b1e0, PDB extent 299 bytes
// country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$4>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$4>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 299 */

void pdb_141b6b1e0(char param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 uStack_29;
  undefined7 uStack_28;
  
  if (param_1 == '\0') {
    plVar7 = (longlong *)*param_3;
    pbVar8 = (byte *)param_3[1];
    puVar9 = (undefined8 *)param_3[2];
    *(undefined4 *)plVar7[2] = *(undefined4 *)((longlong)plVar7 + 0x1c);
    lVar4 = *plVar7;
    bVar2 = *pbVar8;
    if ((ulonglong)bVar2 < *(ulonglong *)(lVar4 + 0x10)) {
      lVar14 = (ulonglong)bVar2 * 0x20 + *(longlong *)(lVar4 + 8);
      uVar10 = *(ulonglong *)(lVar14 + 0x10);
      if (uVar10 != 0) {
        if (bVar2 == *(byte *)(lVar4 + 0x18)) {
          uVar13 = *(longlong *)(lVar14 + 0x18) + 1;
          if ((uVar13 | uVar10) >> 0x20 == 0) {
            uVar13 = (uVar13 & 0xffffffff) % (uVar10 & 0xffffffff);
          }
          else {
            uVar13 = uVar13 % uVar10;
          }
          *(ulonglong *)(lVar14 + 0x18) = uVar13;
        }
        else {
          uVar13 = *(ulonglong *)(lVar14 + 0x18);
          if (uVar10 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar13,uVar10,&UNK_14304f650);
          }
        }
        lVar14 = *(longlong *)(lVar14 + 8);
        cVar3 = *(char *)(lVar14 + uVar13 * 0x18);
        uStack_28 = (undefined7)((ulonglong)*(undefined8 *)(lVar14 + 0x10 + uVar13 * 0x18) >> 8);
        puVar1 = (undefined8 *)(lVar14 + 1 + uVar13 * 0x18);
        uVar5 = *puVar1;
        uVar12 = puVar1[1];
        uStack_29 = (undefined1)((ulonglong)uVar12 >> 0x38);
        *(byte *)(lVar4 + 0x18) = bVar2;
        if (cVar3 != '\x12') {
          *(undefined4 *)puVar9[2] = *(undefined4 *)((longlong)puVar9 + 0x1c);
          pcVar11 = (char *)*puVar9;
          *pcVar11 = cVar3;
          *(undefined8 *)(pcVar11 + 1) = uVar5;
          *(undefined8 *)(pcVar11 + 9) = uVar12;
          *(ulonglong *)(pcVar11 + 0x10) = CONCAT71(uStack_28,uStack_29);
        }
      }
    }
  }
  else {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar4 = *param_2;
    lVar14 = *(longlong *)(lVar4 + 0x30);
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    if (lVar14 == *(longlong *)(lVar4 + 0x20)) {
      pdb_142d7e6e0(lVar4 + 0x20);
    }
    lVar6 = *(longlong *)(lVar4 + 0x28);
    *(undefined4 *)(lVar6 + lVar14 * 0x20) = 4;
    *(undefined8 *)(lVar6 + 0x18 + lVar14 * 0x20) = uVar5;
    *(longlong *)(lVar4 + 0x30) = lVar14 + 1;
    *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
  }
  return;
}

