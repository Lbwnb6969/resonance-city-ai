// VA 0x1418c3650, PDB extent 812 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::cull_and_bucket_external<country_core::resources::roof_tile_ssbo::RoofTileSsbo,country_core::render::nani::cull_shaders::NaniCullAndBucketRoofTile>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::cull_and_bucket_external<country_core::resources::roof_tile_ssbo::RoofTileSsbo,country_core::render::nani::cull_shaders::NaniCullAndBucketRoofTile>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 812 */

void pdb_1418c3650(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_2a0 [140];
  undefined1 auStack_214 [20];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  uint uStack_1e8;
  char cStack_1e4;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c898);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1);
    if (lVar2 != 0) {
      pdb_141a78250(&uStack_70,lVar2);
      uStack_50 = uStack_70;
      uStack_58 = uStack_68;
      uStack_42 = 0;
      pdb_141526130(auStack_214,param_2,param_1);
      uStack_a8 = param_3[8];
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_e8 = *param_3;
      uStack_e0 = param_3[1];
      uStack_d8 = param_3[2];
      uStack_d0 = param_3[3];
      uStack_c8 = param_3[4];
      uStack_c0 = param_3[5];
      uStack_b8 = param_3[6];
      uStack_b0 = param_3[7];
      uStack_88 = *(undefined4 *)(param_3 + 0xc);
      uStack_84 = *(undefined4 *)((longlong)param_3 + 100);
      uStack_80 = *(undefined4 *)(param_3 + 0xd);
      uStack_7c = *(undefined4 *)((longlong)param_3 + 0x6c);
      uStack_41 = 0;
      puStack_a0 = auStack_214;
      pdb_14090d600(auStack_100,&uStack_e8);
      uStack_41 = 0;
      uVar3 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331911,0x30,auStack_100);
      uStack_41 = 0;
      pdb_140e291c0(&uStack_200,&UNK_143331911,0x30,uVar3,param_1);
      uStack_118 = CONCAT44(uStack_84,uStack_88);
      uStack_110 = CONCAT44(uStack_7c,uStack_80);
      uStack_128 = uStack_98;
      uStack_120 = uStack_90;
      uStack_138 = uStack_a8;
      puStack_130 = puStack_a0;
      uStack_148 = (undefined4)uStack_b8;
      uStack_144 = uStack_b8._4_4_;
      uStack_140 = (undefined4)uStack_b0;
      uStack_13c = uStack_b0._4_4_;
      uStack_158 = (undefined4)uStack_c8;
      uStack_154 = uStack_c8._4_4_;
      uStack_150 = (undefined4)uStack_c0;
      uStack_14c = uStack_c0._4_4_;
      uStack_168 = (undefined4)uStack_d8;
      uStack_164 = uStack_d8._4_4_;
      uStack_160 = (undefined4)uStack_d0;
      uStack_15c = uStack_d0._4_4_;
      uStack_178 = (undefined4)uStack_e8;
      uStack_174 = uStack_e8._4_4_;
      uStack_170 = (undefined4)uStack_e0;
      uStack_16c = uStack_e0._4_4_;
      uStack_41 = 0;
      pdb_14178dd80(auStack_2a0,&uStack_200,&uStack_178);
      uStack_1e8 = (uint)(byte)(param_4 * '\x04');
      uStack_200 = uStack_50;
      uStack_1f8 = uStack_58;
      uStack_1f0 = uStack_60;
      uStack_41 = 1;
      cStack_1e4 = param_4;
      pdb_141782930(auStack_2a0,&uStack_200);
      uStack_42 = 1;
      pdb_1415346d0(param_2,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143356a70);
}

