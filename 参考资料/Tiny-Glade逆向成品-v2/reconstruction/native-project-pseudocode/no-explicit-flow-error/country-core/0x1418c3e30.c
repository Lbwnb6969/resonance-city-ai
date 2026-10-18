// VA 0x1418c3e30, PDB extent 536 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::prefix_sum_unsorted_instances_per_atlas_entry<country_core::render::nani::gpu_world::RenderSublistIter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::prefix_sum_unsorted_instances_per_atlas_entry<country_core::render::nani::gpu_world::RenderSublistIter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 536 */

undefined8 *
pdb_1418c3e30(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_1b0 [136];
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  longlong *plStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  plStack_68 = *(longlong **)(param_3 + 0x30);
  LOCK();
  lVar6 = *plStack_68;
  *plStack_68 = *plStack_68 + 1;
  UNLOCK();
  if (*plStack_68 != 0 && SCARRY8(lVar6,1) == *plStack_68 < 0) {
    uStack_39 = 1;
    lVar6 = param_2;
    plStack_48 = plStack_68;
    uVar4 = pdb_140e25e40(0x88000);
    uStack_128 = (longlong *)CONCAT62(uStack_128._2_6_,1);
    uStack_128 = (longlong *)CONCAT44(uVar4,(undefined4)uStack_128);
    puStack_118 = &UNK_143356a88;
    uStack_110 = 0x1e;
    uStack_39 = 1;
    uStack_120 = (char)lVar6;
    uStack_4c = pdb_140e2b4e0(param_2,&uStack_128);
    uStack_58 = CONCAT31(uStack_58._1_3_,(char)lVar6);
    uStack_54 = 0xffffffff00000000;
    uVar1 = *(undefined8 *)(param_4 + 0x28);
    uVar2 = *(undefined8 *)(param_4 + 0x48);
    uStack_80 = 0;
    uStack_78 = 8;
    uStack_70 = 0;
    uStack_39 = 1;
    uStack_5c = uVar4;
    uVar5 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331190,0x44,&uStack_80);
    uStack_39 = 1;
    pdb_140e291c0(&uStack_128,&UNK_143331190,0x44,uVar5,param_2);
    puStack_90 = &uStack_5c;
    uStack_88 = 0;
    uStack_39 = 1;
    uStack_a0 = uVar1;
    uStack_98 = uVar2;
    pdb_14179ea70(auStack_1b0,&uStack_128,&uStack_a0);
    uStack_120 = param_5;
    uStack_11f = param_6;
    uStack_128 = plStack_48;
    uStack_39 = 0;
    pdb_141782820(auStack_1b0,&uStack_128);
    *(undefined4 *)(param_1 + 2) = uStack_4c;
    *param_1 = CONCAT44(uStack_58,uStack_5c);
    param_1[1] = uStack_54;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

