// VA 0x1418c3980, PDB extent 808 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::group_draw_cmd_prefix_sum<country_core::render::nani::gpu_world::RenderSublistIter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::group_draw_cmd_prefix_sum<country_core::render::nani::gpu_world::RenderSublistIter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 808 */

void pdb_1418c3980(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1b0 [136];
  longlong *plStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  plStack_70 = *(longlong **)(param_2 + 0x30);
  LOCK();
  lVar1 = *plStack_70;
  *plStack_70 = *plStack_70 + 1;
  UNLOCK();
  if (*plStack_70 != 0 && SCARRY8(lVar1,1) == *plStack_70 < 0) {
    LOCK();
    lVar1 = *plStack_70;
    *plStack_70 = *plStack_70 + 1;
    UNLOCK();
    plStack_50 = plStack_70;
    if (*plStack_70 != 0 && SCARRY8(lVar1,1) == *plStack_70 < 0) {
      uVar4 = *(undefined8 *)(param_8 + 0x38);
      uStack_68 = 0;
      uStack_60 = 8;
      uStack_58 = 0;
      uStack_39 = 1;
      uStack_3a = 1;
      plStack_48 = plStack_70;
      uVar3 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333130d,0x30,&uStack_68);
      uStack_39 = 1;
      uStack_3a = 1;
      pdb_140e291c0(&plStack_128,&UNK_14333130d,0x30,uVar3,param_1);
      uStack_a0 = param_6;
      uStack_98 = param_7;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_39 = 1;
      uStack_3a = 1;
      uStack_90 = uVar4;
      pdb_141788ba0(auStack_1b0,&plStack_128,&uStack_a0);
      plStack_128 = plStack_48;
      uStack_39 = 1;
      uStack_3a = 0;
      uStack_120 = param_3;
      uStack_11f = param_4;
      pdb_1417a5b20(auStack_1b0,param_5,&plStack_128);
      uStack_a0 = 0;
      uStack_98 = 8;
      uStack_90 = 0;
      uStack_39 = 1;
      uStack_3a = 0;
      uVar4 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433317b1,0x2a,&uStack_a0);
      uStack_39 = 1;
      uStack_3a = 0;
      pdb_140e291c0(&plStack_128,&UNK_1433317b1,0x2a,uVar4,param_1);
      uStack_68 = param_7;
      uStack_60 = 0;
      uStack_39 = 1;
      uStack_3a = 0;
      pdb_14179b860(auStack_1b0,&plStack_128,&uStack_68);
      plStack_128 = plStack_48;
      uStack_39 = 0;
      uStack_3a = 0;
      uStack_120 = param_3;
      uStack_11f = param_4;
      pdb_1417a5270(auStack_1b0,param_5,&plStack_128);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

