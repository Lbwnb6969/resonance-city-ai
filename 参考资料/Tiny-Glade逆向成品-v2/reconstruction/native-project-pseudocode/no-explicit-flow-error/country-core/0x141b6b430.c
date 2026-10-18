// VA 0x141b6b430, PDB extent 310 bytes
// country_core::systems::mode_manager::check_if_can_switch<country_core::systems::timelapse_replay::start_timelapse::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::mode_manager::check_if_can_switch<country_core::systems::timelapse_replay::start_timelapse::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 310 */

void pdb_141b6b430(char param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_50;
  
  if (param_1 == '\0') {
    plVar5 = (longlong *)*param_3;
    puVar6 = (undefined8 *)param_3[2];
    plVar7 = (longlong *)param_3[3];
    puVar8 = (undefined8 *)param_3[4];
    puVar9 = (undefined8 *)param_3[5];
    puVar10 = (undefined8 *)param_3[6];
    puVar11 = *(undefined8 **)param_3[1];
    uVar3 = puVar11[2];
    uVar13 = *puVar11;
    uVar14 = puVar11[1];
    *(undefined4 *)plVar5[2] = *(undefined4 *)((longlong)plVar5 + 0x1c);
    puVar11 = (undefined8 *)*plVar5;
    puVar11[2] = uVar3;
    *puVar11 = uVar13;
    puVar11[1] = uVar14;
    *(undefined4 *)puVar6[2] = *(undefined4 *)((longlong)puVar6 + 0x1c);
    uStack_80 = *(undefined8 *)(*plVar7 + 0xa0);
    uStack_78 = *(undefined8 *)(*plVar7 + 0xa8);
    uStack_88 = 0x8000000000000000;
    uStack_70 = 0;
    uStack_68 = 1;
    uStack_50 = 0x8000000000000001;
    pdb_140928100(*puVar6,&uStack_88);
    fVar15 = *(float *)*puVar9 * _DAT_142e37834;
    *(undefined4 *)puVar8[2] = *(undefined4 *)((longlong)puVar8 + 0x1c);
    puVar12 = (undefined4 *)*puVar8;
    *puVar12 = 1;
    puVar12[1] = fVar15;
    *(undefined4 *)puVar10[2] = *(undefined4 *)((longlong)puVar10 + 0x1c);
    *(undefined1 *)*puVar10 = 0;
  }
  else {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar1 = *param_2;
    lVar2 = *(longlong *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (lVar2 == *(longlong *)(lVar1 + 0x20)) {
      pdb_142d7e6e0(lVar1 + 0x20);
    }
    lVar4 = *(longlong *)(lVar1 + 0x28);
    *(undefined4 *)(lVar4 + lVar2 * 0x20) = 4;
    *(undefined8 *)(lVar4 + 0x18 + lVar2 * 0x20) = uVar3;
    *(longlong *)(lVar1 + 0x30) = lVar2 + 1;
    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
  }
  return;
}

