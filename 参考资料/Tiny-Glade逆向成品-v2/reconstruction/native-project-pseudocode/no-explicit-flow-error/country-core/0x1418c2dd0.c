// VA 0x1418c2dd0, PDB extent 537 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_draw_lists<country_core::render::nani::gpu_world::RenderSublistIter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_draw_lists<country_core::render::nani::gpu_world::RenderSublistIter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 537 */

void pdb_1418c2dd0(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_208 [136];
  longlong *plStack_180;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plStack_78 = *(longlong **)(param_2 + 0x30);
  LOCK();
  lVar1 = *plStack_78;
  *plStack_78 = *plStack_78 + 1;
  UNLOCK();
  if (*plStack_78 != 0 && SCARRY8(lVar1,1) == *plStack_78 < 0) {
    uVar6 = *(undefined8 *)(param_10 + 0x28);
    uVar7 = *(undefined8 *)(param_10 + 0x30);
    uVar2 = *(undefined8 *)(param_10 + 0x48);
    uVar3 = *(undefined8 *)(param_10 + 0x18);
    uVar4 = *(undefined8 *)(param_10 + 0x40);
    uStack_90 = 0;
    uStack_88 = 8;
    uStack_80 = 0;
    uStack_61 = 1;
    plStack_70 = plStack_78;
    uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331d09,0x2a,&uStack_90);
    uStack_61 = 1;
    pdb_140e291c0(&plStack_180,&UNK_143331d09,0x2a,uVar8,param_1);
    lStack_e8 = param_10 + 0x50;
    uStack_e0 = param_5;
    uStack_d8 = param_7;
    uStack_d0 = param_8;
    uStack_c8 = param_9;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_61 = 1;
    uStack_f8 = uVar6;
    uStack_f0 = uVar7;
    uStack_c0 = uVar2;
    uStack_b8 = uVar3;
    uStack_b0 = uVar4;
    pdb_141793130(auStack_208,&plStack_180,&uStack_f8);
    plStack_180 = plStack_70;
    uStack_61 = 0;
    uStack_178 = param_3;
    uStack_177 = param_4;
    pdb_1417a54b0(auStack_208,param_6,&plStack_180);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

