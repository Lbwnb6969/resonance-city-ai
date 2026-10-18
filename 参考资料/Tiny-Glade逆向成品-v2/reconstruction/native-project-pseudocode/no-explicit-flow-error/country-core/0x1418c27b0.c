// VA 0x1418c27b0, PDB extent 425 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::allocate_draw_lists<country_core::render::nani::gpu_world::RenderSublistIter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::allocate_draw_lists<country_core::render::nani::gpu_world::RenderSublistIter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 425 */

void pdb_1418c27b0(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1b8 [136];
  longlong *plStack_130;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  plStack_58 = *(longlong **)(param_2 + 0x30);
  LOCK();
  lVar1 = *plStack_58;
  *plStack_58 = *plStack_58 + 1;
  UNLOCK();
  if (*plStack_58 != 0 && SCARRY8(lVar1,1) == *plStack_58 < 0) {
    uVar3 = *(undefined8 *)(param_9 + 0x28);
    uVar4 = *(undefined8 *)(param_9 + 0x30);
    uStack_70 = 0;
    uStack_68 = 8;
    uStack_60 = 0;
    uStack_41 = 1;
    plStack_50 = plStack_58;
    uVar5 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330ccc,0x2d,&uStack_70);
    uStack_41 = 1;
    pdb_140e291c0(&plStack_130,&UNK_143330ccc,0x2d,uVar5,param_1);
    uStack_98 = param_5;
    uStack_90 = param_7;
    uStack_88 = param_8;
    uStack_80 = 0;
    uStack_41 = 1;
    uStack_a8 = uVar3;
    uStack_a0 = uVar4;
    pdb_14178b5a0(auStack_1b8,&plStack_130,&uStack_a8);
    plStack_130 = plStack_50;
    uStack_41 = 0;
    uStack_128 = param_3;
    uStack_127 = param_4;
    pdb_1417a58e0(auStack_1b8,param_6,&plStack_130);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

