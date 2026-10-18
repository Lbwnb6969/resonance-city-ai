// VA 0x140c5cea0, PDB extent 893 bytes
// country_core::systems::render_loop::draw_passes::draw_shaders::billboard_forest::startup_billboard_forest
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_shaders/billboard_forest.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_shaders::billboard_forest::startup_billboard_forest
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_shaders/billboard_forest.rs
   Extent: 893 */

void pdb_140c5cea0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined1 auStack_138 [40];
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong lStack_80;
  ulonglong *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_d8 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  puStack_78 = (ulonglong *)((ulonglong)puStack_78 & 0xffffffff00000000);
  uStack_6c = 0;
  uStack_68 = 1;
  uStack_64 = uStack_64 & 0xffffff00;
  puVar9 = &uStack_d8;
  pdb_1415edd10(&uStack_110);
  plVar3 = (longlong *)pdb_140f3bda0();
  if ((char)plVar3[2] == '\x01') {
    lStack_80 = *plVar3;
    puVar9 = (ulonglong *)plVar3[1];
  }
  else {
    lStack_80 = pdb_140f4fd10();
    *plVar3 = lStack_80;
    plVar3[1] = (longlong)puVar9;
    *(undefined1 *)(plVar3 + 2) = 1;
  }
  *plVar3 = lStack_80 + 1;
  uStack_d8 = uStack_110;
  uStack_d0 = uStack_108;
  uStack_c0 = 0x8000000000000000;
  uStack_a0 = _DAT_14306f530;
  uStack_98 = _UNK_14306f538;
  uStack_90 = CONCAT44(_UNK_14306f544,_DAT_14306f540);
  uStack_88 = _UNK_14306f548;
  uStack_84 = _UNK_14306f54c;
  uStack_70 = 0x4306f370;
  uStack_6c = 1;
  uStack_68 = 0x10;
  uStack_64 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  puStack_78 = puVar9;
  uVar4 = pdb_140b08d00(&uStack_d8,&UNK_14306f380,0x10,*param_4,*param_2);
  pdb_140a596f0(&uStack_110,*param_5,&UNK_14306f390,0x1d,&UNK_14306f408);
  lVar1 = *(longlong *)*param_1;
  uVar2 = *param_3;
  uStack_41 = 1;
  uVar5 = pdb_140df4400(&UNK_14306f420,0xd);
  uStack_41 = 1;
  uVar6 = pdb_140a2e580(uVar2,uVar5);
  uStack_41 = 1;
  uVar5 = pdb_140df4400(&UNK_14306f42d,0xd);
  uStack_41 = 1;
  uVar5 = pdb_140a2e580(uVar2,uVar5);
  uStack_41 = 1;
  uVar7 = pdb_140df4400(&UNK_14306f43a,0xd);
  uStack_41 = 1;
  uVar7 = pdb_140a2e580(uVar2,uVar7);
  uStack_41 = 1;
  uVar8 = pdb_140df4400(&UNK_14306f447,0xd);
  uStack_41 = 1;
  uStack_c0 = pdb_140a2e580(uVar2,uVar8);
  uStack_41 = 1;
  uStack_d8 = uVar6;
  uStack_d0 = uVar5;
  uStack_c8 = uVar7;
  uStack_60 = pdb_141992010(&uStack_110,lVar1 + 0x10,&uStack_d8);
  uStack_68 = (undefined4)uStack_e0;
  uStack_64 = (uint)((ulonglong)uStack_e0 >> 0x20);
  uStack_70 = uStack_e8;
  uStack_6c = uStack_e4;
  uStack_88 = uStack_100;
  uStack_84 = uStack_fc;
  uStack_98 = uStack_110;
  uStack_90 = uStack_108;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = CONCAT44(_UNK_142e4e654,_DAT_142e4e650);
  uStack_c0 = CONCAT44(_UNK_142e4e65c,_UNK_142e4e658);
  uStack_ac = 0x3f800000;
  uStack_a8 = 0x3f800000;
  uStack_a4 = 0x3f800000;
  uStack_58 = 0x7000001f4;
  uStack_41 = 0;
  uStack_d0 = uVar4;
  pdb_14161e7a0(auStack_138,param_6,&uStack_d8,&UNK_14306f458);
  return;
}

