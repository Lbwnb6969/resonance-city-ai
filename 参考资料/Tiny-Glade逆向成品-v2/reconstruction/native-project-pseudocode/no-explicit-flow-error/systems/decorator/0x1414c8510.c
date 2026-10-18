// VA 0x1414c8510, PDB extent 362 bytes
// system_decorator::ui_systems::handle_splitting_roof_decorators::handle_moving_out_roof_decorator_part::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_roof_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::handle_splitting_roof_decorators::handle_moving_out_roof_decorator_part::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_roof_decorators.rs
   Extent: 362 */

void pdb_1414c8510(undefined8 *param_1,longlong *param_2,int param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined1 auStack_64 [76];
  
  if (param_3 == 1) {
    lVar3 = *param_2;
    if (*(char *)(lVar3 + 8) == '\0') {
      uStack_80 = *(undefined4 *)((undefined8 *)param_2[1] + 1);
      uStack_88 = *(undefined8 *)param_2[1];
      pdb_140b77d90(auStack_64,lVar3,&uStack_88);
      fVar8 = (float)pdb_140a85220(auStack_64);
      param_4 = param_4 / fVar8;
    }
    else {
      puVar6 = (undefined8 *)param_2[1];
      uVar1 = *(undefined4 *)puVar6;
      uStack_88 = *puVar6;
      uVar2 = *(undefined4 *)(puVar6 + 1);
      uStack_80 = uVar2;
      pdb_140b77d90(auStack_64,lVar3,&uStack_88);
      puVar6 = (undefined8 *)pdb_140a84d90(auStack_64);
      uStack_88 = *puVar6;
      uStack_80 = *(undefined4 *)(puVar6 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_78 = puVar6[2];
      uVar7 = pdb_140df2280(&uStack_88,uVar1,uVar2);
      fVar8 = (float)pdb_140df05b0(&uStack_88,uVar7);
      param_4 = (param_4 / fVar8) * _DAT_142e37ae4;
    }
    param_4 = param_4 + *(float *)param_2[2];
    fVar8 = ((float *)param_2[2])[1];
    if (param_4 <= _DAT_142e36f28) {
      if (param_4 < 0.0) {
        param_4 = param_4 + _DAT_142e36f28;
      }
    }
    else {
      param_4 = param_4 + _DAT_142e36f34;
    }
    uVar7 = *(undefined8 *)param_2[3];
    uVar4 = ((undefined8 *)param_2[3])[1];
    uVar5 = pdb_14008fbf0();
    *param_1 = uVar7;
    param_1[1] = uVar4;
    *(float *)(param_1 + 2) = param_4;
    *(ulonglong *)((longlong)param_1 + 0x14) = (ulonglong)(uint)fVar8;
    *(undefined1 *)((longlong)param_1 + 0x32) = 2;
    *(undefined1 *)(param_1 + 7) = uVar5;
  }
  else {
    *param_1 = 3;
  }
  return;
}

