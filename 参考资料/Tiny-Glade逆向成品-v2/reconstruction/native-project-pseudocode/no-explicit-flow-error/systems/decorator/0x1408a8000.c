// VA 0x1408a8000, PDB extent 56 bytes
// system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::structural_graph_subscribe
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/calculate_distortion_from_structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::structural_graph_subscribe
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/calculate_distortion_from_structural_graph.rs
   Extent: 56 */

void pdb_1408a8000(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar2 = pdb_1409efbc0(*param_1);
  uVar2 = pdb_1409c5e80(uVar2);
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x10);
    lVar4 = plVar3[2];
    if ((ulonglong)(*plVar3 - lVar4) < 0x10) {
      pdb_142d7f1b0(plVar3,lVar4,0x10,1,1,uVar2,uVar2,0xfffffffffffffffe);
    }
  }
  else {
    lVar4 = plVar3[2];
    if ((ulonglong)(*plVar3 - lVar4) < 0x10) {
      pdb_142d7f1b0(plVar3,lVar4,0x10,1,1,uVar2,uVar2,0xfffffffffffffffe);
    }
  }
  lVar1 = plVar3[1];
  *(code **)(lVar1 + lVar4) = pdb_1414b83f0;
  *(undefined8 *)(lVar1 + 8 + lVar4) = uVar2;
  plVar3[2] = lVar4 + 0x10;
  return;
}

