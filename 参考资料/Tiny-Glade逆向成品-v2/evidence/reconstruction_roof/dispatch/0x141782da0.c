// Matched PDB: rhapsody::rg::node_builder::compute_pass_builder::ComputeNode::dispatch_with<country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$1::closure_env$0>
// VA 0x141782da0, PDB extent 273 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   rhapsody::rg::node_builder::compute_pass_builder::ComputeNode::dispatch_with<country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$1::closure_env$0>
   Extent: 273 bytes. No whole-program auto-analysis. */

void pdb_141782da0(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_d0 [136];
  undefined4 auStack_48 [2];
  undefined4 *puStack_40;
  undefined *puStack_38;
  undefined4 *puStack_28;
  undefined4 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  func_0x000142e32760(auStack_d0,param_1,0x88);
  pdb_14007ee60();
  puStack_40 = (undefined4 *)func_0x0001406abab0(0x18,8);
  puStack_28 = puStack_40;
  if (puStack_40 != (undefined4 *)0x0) {
    *(undefined8 *)(puStack_40 + 4) = *(undefined8 *)(param_2 + 4);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *puStack_40 = *param_2;
    puStack_40[1] = uVar2;
    puStack_40[2] = uVar3;
    puStack_40[3] = uVar4;
    puStack_38 = &UNK_143333758;
    auStack_48[0] = 3;
    pdb_140e28810(auStack_d0,auStack_48);
    return;
  }
  puStack_20 = param_2;
  pdb_142dc7e11(8,0x18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

