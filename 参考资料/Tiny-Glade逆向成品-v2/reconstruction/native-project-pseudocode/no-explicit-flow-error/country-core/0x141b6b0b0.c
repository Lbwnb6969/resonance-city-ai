// VA 0x141b6b0b0, PDB extent 292 bytes
// country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::check_if_can_switch<country_core::systems::mode_manager::mode_manager::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 292 */

ulonglong pdb_141b6b0b0(char param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == '\0') {
    plVar4 = (longlong *)*param_3;
    puVar5 = (undefined8 *)param_3[1];
    plVar6 = (longlong *)param_3[2];
    *(undefined4 *)plVar4[2] = *(undefined4 *)((longlong)plVar4 + 0x1c);
    puVar7 = (undefined4 *)*plVar4;
    uStack_28 = puVar5[2];
    uVar3 = *puVar5;
    uVar9 = puVar5[1];
    *(undefined4 *)plVar6[2] = *(undefined4 *)((longlong)plVar6 + 0x1c);
    lVar1 = *plVar6;
    *(undefined8 *)(puVar7 + 4) = uStack_28;
    uStack_38._0_4_ = (undefined4)uVar3;
    uStack_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_30._0_4_ = (undefined4)uVar9;
    uStack_30._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    *puVar7 = (undefined4)uStack_38;
    puVar7[1] = uStack_38._4_4_;
    puVar7[2] = (undefined4)uStack_30;
    puVar7[3] = uStack_30._4_4_;
    uStack_38._0_1_ = (char)uVar3;
    uVar10 = (ulonglong)(byte)((char)uStack_38 - 1U);
    uStack_38 = uVar3;
    uStack_30 = uVar9;
    if ((byte)((char)uStack_38 - 1U) < 0x10) {
      uVar10 = pdb_140ae55f0(lVar1,&uStack_38);
    }
    else if (7 < *(ulonglong *)(lVar1 + 0x10)) {
      lVar2 = *(longlong *)(lVar1 + 8);
      uVar8 = *(ulonglong *)(lVar2 + 0xf0);
      if (uVar8 != 0) {
        if (*(char *)(lVar1 + 0x18) == '\a') {
          uVar11 = *(longlong *)(lVar2 + 0xf8) + 1;
          if ((uVar11 | uVar8) >> 0x20 == 0) {
            uVar10 = (uVar11 & 0xffffffff) / (uVar8 & 0xffffffff);
            uVar11 = (uVar11 & 0xffffffff) % (uVar8 & 0xffffffff);
          }
          else {
            uVar10 = uVar11 / uVar8;
            uVar11 = uVar11 % uVar8;
          }
          *(ulonglong *)(lVar2 + 0xf8) = uVar11;
        }
        else {
          uVar10 = *(ulonglong *)(lVar2 + 0xf8);
          if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar10,uVar8,&UNK_14304f650);
          }
        }
        *(undefined1 *)(lVar1 + 0x18) = 7;
      }
    }
  }
  else {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar1 = *param_2;
    lVar2 = *(longlong *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (lVar2 == *(longlong *)(lVar1 + 0x20)) {
      pdb_142d7e6e0(lVar1 + 0x20);
    }
    uVar10 = *(ulonglong *)(lVar1 + 0x28);
    *(undefined4 *)(uVar10 + lVar2 * 0x20) = 4;
    *(undefined8 *)(uVar10 + 0x18 + lVar2 * 0x20) = uVar3;
    *(longlong *)(lVar1 + 0x30) = lVar2 + 1;
    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
  }
  return uVar10;
}

