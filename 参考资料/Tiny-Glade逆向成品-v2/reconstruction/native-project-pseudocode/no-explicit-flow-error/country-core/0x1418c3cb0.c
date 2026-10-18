// VA 0x1418c3cb0, PDB extent 372 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::prepare_empty_unsorted_draw_lists<country_core::render::nani::gpu_world::RenderSublistIter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::prepare_empty_unsorted_draw_lists<country_core::render::nani::gpu_world::RenderSublistIter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 372 */

void pdb_1418c3cb0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_188 [136];
  longlong *plStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  plStack_48 = *(longlong **)(param_2 + 0x30);
  LOCK();
  lVar1 = *plStack_48;
  *plStack_48 = *plStack_48 + 1;
  UNLOCK();
  if (*plStack_48 != 0 && SCARRY8(lVar1,1) == *plStack_48 < 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x48);
    uStack_60 = 0;
    uStack_58 = 8;
    uStack_50 = 0;
    uStack_31 = 1;
    plStack_40 = plStack_48;
    uVar4 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330c72,0x32,&uStack_60);
    uStack_31 = 1;
    pdb_140e291c0(&plStack_100,&UNK_143330c72,0x32,uVar4,param_1);
    lStack_78 = param_3 + 0x50;
    uStack_68 = 0;
    uStack_31 = 1;
    uStack_70 = uVar2;
    pdb_14178e420(auStack_188,&plStack_100,&lStack_78);
    uStack_f7 = param_5;
    plStack_100 = plStack_40;
    uStack_31 = 0;
    uStack_f8 = param_4;
    pdb_141782a50(auStack_188,&plStack_100);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

