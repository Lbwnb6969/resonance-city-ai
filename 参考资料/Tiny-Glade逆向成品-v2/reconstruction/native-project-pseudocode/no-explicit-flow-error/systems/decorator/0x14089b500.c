// VA 0x14089b500, PDB extent 557 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::derive_stair_node_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::derive_stair_node_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 557 */

void pdb_14089b500(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int aiStack_7c [15];
  
  lVar2 = pdb_140a61160(param_4);
  aiStack_7c[0] = *(int *)(param_5 + 0x10);
  uVar1 = *(ulonglong *)(lVar2 + 0x10);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      if (aiStack_7c[0] == *(int *)(*(longlong *)(lVar2 + 8) + 0x20)) {
LAB_14089b597:
        lVar2 = 0;
        if (1 < (ulonglong)*(byte *)(param_2 + 0x32)) {
          lVar2 = (ulonglong)*(byte *)(param_2 + 0x32) - 1;
        }
                    /* WARNING: Could not emulate address calculation at 0x00014089b5ec */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_143014048 + *(int *)(&UNK_143014048 + lVar2 * 4)))
                  (&UNK_143014048 + *(int *)(&UNK_143014048 + lVar2 * 4));
        return;
      }
    }
    else {
      uVar3 = pdb_1400aede0(lVar2 + 0x38,aiStack_7c);
      uVar4 = pdb_1414af660(lVar2,uVar3,aiStack_7c);
      if ((uVar4 & 1) != 0) {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar3,uVar1,&UNK_143311df8);
        }
        if (*(longlong *)(lVar2 + 8) != 0) goto LAB_14089b597;
      }
    }
  }
  lVar2 = 0;
  if (1 < (ulonglong)*(byte *)(param_2 + 0x32)) {
    lVar2 = (ulonglong)*(byte *)(param_2 + 0x32) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x00014089b5c8 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143014048 + *(int *)(&UNK_143014048 + lVar2 * 4)))
            (&UNK_143014048 + *(int *)(&UNK_143014048 + lVar2 * 4));
  return;
}

