// VA 0x1418c2960, PDB extent 1121 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::fill_instance_lists<country_core::render::nani::gpu_world::RenderSublistIter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::fill_instance_lists<country_core::render::nani::gpu_world::RenderSublistIter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 1121 */

undefined4 *
pdb_1418c2960(undefined4 *param_1,longlong param_2,longlong param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_1f8 [136];
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined4 *puStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong *plStack_80;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_3 + 0x30);
  LOCK();
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uStack_4a = param_4;
  if (*plVar1 != 0 && SCARRY8(lVar9,1) == *plVar1 < 0) {
    lVar9 = param_2;
    puStack_a0 = param_1;
    plStack_60 = plVar1;
    uVar6 = pdb_140e25e40((ulonglong)*(uint *)(plVar1 + 0xe) << 2);
    uStack_170 = (longlong *)CONCAT62(uStack_170._2_6_,1);
    uStack_170 = (longlong *)CONCAT44(uVar6,(undefined4)uStack_170);
    puStack_160 = &UNK_143356a00;
    uStack_158 = 0x15;
    uStack_168 = (char)lVar9;
    uStack_64 = pdb_140e2b4e0(param_2,&uStack_170);
    plVar1 = plStack_60;
    uStack_70 = CONCAT31(uStack_70._1_3_,(char)lVar9);
    uStack_6c = 0xffffffff00000000;
    LOCK();
    *_DAT_143ca4b48 = *_DAT_143ca4b48 + 1;
    UNLOCK();
    LOCK();
    lVar9 = *plStack_60;
    *plStack_60 = *plStack_60 + 1;
    UNLOCK();
    uStack_74 = uVar6;
    if (*plStack_60 != 0 && SCARRY8(lVar9,1) == *plStack_60 < 0) {
      plStack_80 = plStack_60;
      uVar2 = *(undefined8 *)(param_8 + 0x18);
      uVar3 = *(undefined8 *)(param_8 + 0x28);
      uVar8 = *(undefined8 *)(param_8 + 0x48);
      uStack_98 = 0;
      uStack_90 = 8;
      uStack_88 = 0;
      plStack_58 = plStack_60;
      uStack_49 = 1;
      uVar7 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331026,0x32,&uStack_98);
      plStack_58 = plVar1;
      uStack_49 = 1;
      pdb_140e291c0(&uStack_170,&UNK_143331026,0x32,uVar7,param_2);
      uStack_e0 = param_7;
      puStack_c8 = &uStack_74;
      uStack_b0 = 0;
      uStack_a8 = 0;
      plStack_58 = plVar1;
      uStack_49 = 1;
      uStack_e8 = uVar3;
      uStack_d8 = uVar2;
      lStack_d0 = param_8 + 0x8c;
      lStack_c0 = param_8 + 0x78;
      uStack_b8 = uVar8;
      pdb_1417951e0(auStack_1f8,&uStack_170,&uStack_e8);
      uStack_166 = 0;
      uStack_168 = uStack_4a;
      uStack_167 = param_5;
      uStack_170 = plVar1;
      plStack_58 = plVar1;
      uStack_49 = 0;
      pdb_1417a5d60(auStack_1f8,param_6,&uStack_170);
      plVar1 = plStack_60;
      LOCK();
      lVar9 = *plStack_60;
      *plStack_60 = *plStack_60 + 1;
      UNLOCK();
      if (*plStack_60 != 0 && SCARRY8(lVar9,1) == *plStack_60 < 0) {
        plStack_80 = plStack_60;
        uVar2 = *(undefined8 *)(param_8 + 0x18);
        uVar3 = *(undefined8 *)(param_8 + 0x28);
        uStack_98 = 0;
        uStack_90 = 8;
        uStack_88 = 0;
        plStack_58 = plStack_60;
        uStack_49 = 1;
        uVar8 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143330c42,0x30,&uStack_98);
        plStack_58 = plVar1;
        uStack_49 = 1;
        pdb_140e291c0(&uStack_170,&UNK_143330c42,0x30,uVar8,param_2);
        uStack_e0 = param_7;
        puStack_c8 = &uStack_74;
        uStack_b8 = 0;
        plStack_58 = plVar1;
        uStack_49 = 1;
        uStack_e8 = uVar3;
        uStack_d8 = uVar2;
        lStack_d0 = param_8 + 0x8c;
        lStack_c0 = param_8 + 0x78;
        pdb_141791b10(auStack_1f8,&uStack_170,&uStack_e8);
        uStack_166 = 1;
        uStack_168 = uStack_4a;
        uStack_167 = param_5;
        uStack_170 = plVar1;
        plStack_58 = plVar1;
        uStack_49 = 0;
        pdb_1417a5d60(auStack_1f8,param_6,&uStack_170);
        puVar5 = puStack_a0;
        puStack_a0[4] = uStack_64;
        *puStack_a0 = uStack_74;
        puStack_a0[1] = uStack_70;
        puStack_a0[2] = (undefined4)uStack_6c;
        puStack_a0[3] = uStack_6c._4_4_;
        LOCK();
        *plStack_60 = *plStack_60 + -1;
        UNLOCK();
        if (*plStack_60 == 0) {
          pdb_140c7aeb0(&plStack_60);
        }
        return puVar5;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

