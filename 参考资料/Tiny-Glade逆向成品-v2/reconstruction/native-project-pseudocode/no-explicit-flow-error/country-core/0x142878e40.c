// VA 0x142878e40, PDB extent 1945 bytes
// country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::WaterRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,system_water::draw_water::draw_water::closure_env$2,system_water::draw_water::draw_water::closure_env$3,system_water::draw_water::draw_water::closure_env$4>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::WaterRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,system_water::draw_water::draw_water::closure_env$2,system_water::draw_water::draw_water::closure_env$3,system_water::draw_water::draw_water::closure_env$4>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 1945 */

float * pdb_142878e40(uint *param_1,float *param_2,undefined8 *param_3,longlong param_4,
                     longlong *param_5,longlong *param_6,longlong *param_7)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  uint uVar20;
  longlong lVar21;
  float *pfVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  undefined *puVar28;
  ulonglong uVar29;
  byte *pbVar30;
  byte *pbVar31;
  undefined *puVar32;
  undefined8 *puVar33;
  undefined *puVar34;
  ulonglong uVar35;
  byte *pbVar36;
  bool bVar37;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong lStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  undefined8 uStack_c0;
  uint uStack_98;
  uint uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = (longlong *)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uStack_50 = (float *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  plStack_60 = param_6;
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_c0 = 0x142878e99;
  lVar21 = pdb_140bd69b0(*param_3,4,&UNK_1435a9030);
  uStack_98 = *param_1;
  pfVar22 = (float *)0x0;
  if (1 < (ulonglong)uStack_98) {
    pfVar22 = (float *)((ulonglong)uStack_98 - 1);
  }
  if (pfVar22 == (float *)0x0) {
    *(undefined4 *)param_3[6] = *(undefined4 *)((longlong)param_3 + 0x3c);
    uStack_c0 = 0x1428793d5;
    pdb_140c419a0(param_3[4]);
    uStack_c0 = 0x1428793e6;
    pdb_140a8e090(&uStack_70,param_3[8]);
    uStack_90 = param_1[1];
    uStack_c0 = 0x14287940d;
    pfVar22 = (float *)pdb_140bd6210(lVar21,&uStack_70,(char)param_1[3],param_1[2]);
  }
  else if ((int)pfVar22 == 1) {
    uStack_c0 = 0x142878ec7;
    pfVar22 = (float *)pdb_140bd6600(lVar21);
    if (_DAT_142e37870 <
        SQRT((param_2[2] - pfVar22[2]) * (param_2[2] - pfVar22[2]) +
             (param_2[1] - pfVar22[1]) * (param_2[1] - pfVar22[1]) +
             (*param_2 - *pfVar22) * (*param_2 - *pfVar22))) {
      lStack_68 = CONCAT44(lStack_68._4_4_,param_2[2]);
      uStack_70 = *(undefined8 *)param_2;
      puVar24 = &uStack_70;
      uStack_c0 = 0x142878f33;
      pdb_140bd6640(lVar21,puVar24);
      uStack_c0 = 0x142878f3b;
      pdb_140bd60f0(lVar21);
      lVar27 = lVar21 + 0x270;
      uStack_c0 = 0x142878f4e;
      pdb_140a83f40(lVar27);
      uStack_c0 = 0x142878f56;
      uVar23 = pdb_140bd4b20(lVar21 + 0x48);
      uStack_c0 = 0x142878f69;
      pdb_142b1f2f0(lVar27,uVar23,puVar24,*(undefined4 *)(lVar21 + 0x60));
      uStack_c0 = 0x142878f7b;
      pdb_140a83f50(param_4 + 0x98,lVar27);
      lVar27 = lVar21 + 0x70;
      uStack_c0 = 0x142878f8a;
      pdb_140a83f50(param_4 + 0x98,lVar27);
      uVar23 = *(undefined8 *)(lVar21 + 0x270);
      uVar16 = *(undefined8 *)(lVar21 + 0x278);
      uVar17 = *(undefined8 *)(lVar21 + 0x280);
      uVar18 = *(undefined8 *)(lVar21 + 0x288);
      *(undefined8 *)(lVar21 + 0x270) = *(undefined8 *)(lVar21 + 0x70);
      *(undefined8 *)(lVar21 + 0x278) = *(undefined8 *)(lVar21 + 0x78);
      *(undefined8 *)(lVar21 + 0x280) = *(undefined8 *)(lVar21 + 0x80);
      *(undefined8 *)(lVar21 + 0x288) = *(undefined8 *)(lVar21 + 0x88);
      *(undefined8 *)(lVar21 + 0x70) = uVar23;
      *(undefined8 *)(lVar21 + 0x78) = uVar16;
      *(undefined8 *)(lVar21 + 0x80) = uVar17;
      *(undefined8 *)(lVar21 + 0x88) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x290);
      uVar16 = *(undefined8 *)(lVar21 + 0x298);
      uVar17 = *(undefined8 *)(lVar21 + 0x2a0);
      uVar18 = *(undefined8 *)(lVar21 + 0x2a8);
      *(undefined8 *)(lVar21 + 0x290) = *(undefined8 *)(lVar21 + 0x90);
      *(undefined8 *)(lVar21 + 0x298) = *(undefined8 *)(lVar21 + 0x98);
      *(undefined8 *)(lVar21 + 0x2a0) = *(undefined8 *)(lVar21 + 0xa0);
      *(undefined8 *)(lVar21 + 0x2a8) = *(undefined8 *)(lVar21 + 0xa8);
      *(undefined8 *)(lVar21 + 0x90) = uVar23;
      *(undefined8 *)(lVar21 + 0x98) = uVar16;
      *(undefined8 *)(lVar21 + 0xa0) = uVar17;
      *(undefined8 *)(lVar21 + 0xa8) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x2b0);
      uVar16 = *(undefined8 *)(lVar21 + 0x2b8);
      uVar17 = *(undefined8 *)(lVar21 + 0x2c0);
      uVar18 = *(undefined8 *)(lVar21 + 0x2c8);
      *(undefined8 *)(lVar21 + 0x2b0) = *(undefined8 *)(lVar21 + 0xb0);
      *(undefined8 *)(lVar21 + 0x2b8) = *(undefined8 *)(lVar21 + 0xb8);
      *(undefined8 *)(lVar21 + 0x2c0) = *(undefined8 *)(lVar21 + 0xc0);
      *(undefined8 *)(lVar21 + 0x2c8) = *(undefined8 *)(lVar21 + 200);
      *(undefined8 *)(lVar21 + 0xb0) = uVar23;
      *(undefined8 *)(lVar21 + 0xb8) = uVar16;
      *(undefined8 *)(lVar21 + 0xc0) = uVar17;
      *(undefined8 *)(lVar21 + 200) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x2d0);
      uVar16 = *(undefined8 *)(lVar21 + 0x2d8);
      uVar17 = *(undefined8 *)(lVar21 + 0x2e0);
      uVar18 = *(undefined8 *)(lVar21 + 0x2e8);
      *(undefined8 *)(lVar21 + 0x2d0) = *(undefined8 *)(lVar21 + 0xd0);
      *(undefined8 *)(lVar21 + 0x2d8) = *(undefined8 *)(lVar21 + 0xd8);
      *(undefined8 *)(lVar21 + 0x2e0) = *(undefined8 *)(lVar21 + 0xe0);
      *(undefined8 *)(lVar21 + 0x2e8) = *(undefined8 *)(lVar21 + 0xe8);
      *(undefined8 *)(lVar21 + 0xd0) = uVar23;
      *(undefined8 *)(lVar21 + 0xd8) = uVar16;
      *(undefined8 *)(lVar21 + 0xe0) = uVar17;
      *(undefined8 *)(lVar21 + 0xe8) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x2f0);
      uVar16 = *(undefined8 *)(lVar21 + 0x2f8);
      uVar17 = *(undefined8 *)(lVar21 + 0x300);
      uVar18 = *(undefined8 *)(lVar21 + 0x308);
      *(undefined8 *)(lVar21 + 0x2f0) = *(undefined8 *)(lVar21 + 0xf0);
      *(undefined8 *)(lVar21 + 0x2f8) = *(undefined8 *)(lVar21 + 0xf8);
      *(undefined8 *)(lVar21 + 0x300) = *(undefined8 *)(lVar21 + 0x100);
      *(undefined8 *)(lVar21 + 0x308) = *(undefined8 *)(lVar21 + 0x108);
      *(undefined8 *)(lVar21 + 0xf0) = uVar23;
      *(undefined8 *)(lVar21 + 0xf8) = uVar16;
      *(undefined8 *)(lVar21 + 0x100) = uVar17;
      *(undefined8 *)(lVar21 + 0x108) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x310);
      uVar16 = *(undefined8 *)(lVar21 + 0x318);
      uVar17 = *(undefined8 *)(lVar21 + 800);
      uVar18 = *(undefined8 *)(lVar21 + 0x328);
      *(undefined8 *)(lVar21 + 0x310) = *(undefined8 *)(lVar21 + 0x110);
      *(undefined8 *)(lVar21 + 0x318) = *(undefined8 *)(lVar21 + 0x118);
      *(undefined8 *)(lVar21 + 800) = *(undefined8 *)(lVar21 + 0x120);
      *(undefined8 *)(lVar21 + 0x328) = *(undefined8 *)(lVar21 + 0x128);
      *(undefined8 *)(lVar21 + 0x110) = uVar23;
      *(undefined8 *)(lVar21 + 0x118) = uVar16;
      *(undefined8 *)(lVar21 + 0x120) = uVar17;
      *(undefined8 *)(lVar21 + 0x128) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x330);
      uVar16 = *(undefined8 *)(lVar21 + 0x338);
      uVar17 = *(undefined8 *)(lVar21 + 0x340);
      uVar18 = *(undefined8 *)(lVar21 + 0x348);
      *(undefined8 *)(lVar21 + 0x330) = *(undefined8 *)(lVar21 + 0x130);
      *(undefined8 *)(lVar21 + 0x338) = *(undefined8 *)(lVar21 + 0x138);
      *(undefined8 *)(lVar21 + 0x340) = *(undefined8 *)(lVar21 + 0x140);
      *(undefined8 *)(lVar21 + 0x348) = *(undefined8 *)(lVar21 + 0x148);
      *(undefined8 *)(lVar21 + 0x130) = uVar23;
      *(undefined8 *)(lVar21 + 0x138) = uVar16;
      *(undefined8 *)(lVar21 + 0x140) = uVar17;
      *(undefined8 *)(lVar21 + 0x148) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x350);
      uVar16 = *(undefined8 *)(lVar21 + 0x358);
      uVar17 = *(undefined8 *)(lVar21 + 0x360);
      uVar18 = *(undefined8 *)(lVar21 + 0x368);
      *(undefined8 *)(lVar21 + 0x350) = *(undefined8 *)(lVar21 + 0x150);
      *(undefined8 *)(lVar21 + 0x358) = *(undefined8 *)(lVar21 + 0x158);
      *(undefined8 *)(lVar21 + 0x360) = *(undefined8 *)(lVar21 + 0x160);
      *(undefined8 *)(lVar21 + 0x368) = *(undefined8 *)(lVar21 + 0x168);
      *(undefined8 *)(lVar21 + 0x150) = uVar23;
      *(undefined8 *)(lVar21 + 0x158) = uVar16;
      *(undefined8 *)(lVar21 + 0x160) = uVar17;
      *(undefined8 *)(lVar21 + 0x168) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x370);
      uVar16 = *(undefined8 *)(lVar21 + 0x378);
      uVar17 = *(undefined8 *)(lVar21 + 0x380);
      uVar18 = *(undefined8 *)(lVar21 + 0x388);
      *(undefined8 *)(lVar21 + 0x370) = *(undefined8 *)(lVar21 + 0x170);
      *(undefined8 *)(lVar21 + 0x378) = *(undefined8 *)(lVar21 + 0x178);
      *(undefined8 *)(lVar21 + 0x380) = *(undefined8 *)(lVar21 + 0x180);
      *(undefined8 *)(lVar21 + 0x388) = *(undefined8 *)(lVar21 + 0x188);
      *(undefined8 *)(lVar21 + 0x170) = uVar23;
      *(undefined8 *)(lVar21 + 0x178) = uVar16;
      *(undefined8 *)(lVar21 + 0x180) = uVar17;
      *(undefined8 *)(lVar21 + 0x188) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x390);
      uVar16 = *(undefined8 *)(lVar21 + 0x398);
      uVar17 = *(undefined8 *)(lVar21 + 0x3a0);
      uVar18 = *(undefined8 *)(lVar21 + 0x3a8);
      *(undefined8 *)(lVar21 + 0x390) = *(undefined8 *)(lVar21 + 400);
      *(undefined8 *)(lVar21 + 0x398) = *(undefined8 *)(lVar21 + 0x198);
      *(undefined8 *)(lVar21 + 0x3a0) = *(undefined8 *)(lVar21 + 0x1a0);
      *(undefined8 *)(lVar21 + 0x3a8) = *(undefined8 *)(lVar21 + 0x1a8);
      *(undefined8 *)(lVar21 + 400) = uVar23;
      *(undefined8 *)(lVar21 + 0x198) = uVar16;
      *(undefined8 *)(lVar21 + 0x1a0) = uVar17;
      *(undefined8 *)(lVar21 + 0x1a8) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x3b0);
      uVar16 = *(undefined8 *)(lVar21 + 0x3b8);
      uVar17 = *(undefined8 *)(lVar21 + 0x3c0);
      uVar18 = *(undefined8 *)(lVar21 + 0x3c8);
      *(undefined8 *)(lVar21 + 0x3b0) = *(undefined8 *)(lVar21 + 0x1b0);
      *(undefined8 *)(lVar21 + 0x3b8) = *(undefined8 *)(lVar21 + 0x1b8);
      *(undefined8 *)(lVar21 + 0x3c0) = *(undefined8 *)(lVar21 + 0x1c0);
      *(undefined8 *)(lVar21 + 0x3c8) = *(undefined8 *)(lVar21 + 0x1c8);
      *(undefined8 *)(lVar21 + 0x1b0) = uVar23;
      *(undefined8 *)(lVar21 + 0x1b8) = uVar16;
      *(undefined8 *)(lVar21 + 0x1c0) = uVar17;
      *(undefined8 *)(lVar21 + 0x1c8) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x3d0);
      uVar16 = *(undefined8 *)(lVar21 + 0x3d8);
      uVar17 = *(undefined8 *)(lVar21 + 0x3e0);
      uVar18 = *(undefined8 *)(lVar21 + 1000);
      *(undefined8 *)(lVar21 + 0x3d0) = *(undefined8 *)(lVar21 + 0x1d0);
      *(undefined8 *)(lVar21 + 0x3d8) = *(undefined8 *)(lVar21 + 0x1d8);
      *(undefined8 *)(lVar21 + 0x3e0) = *(undefined8 *)(lVar21 + 0x1e0);
      *(undefined8 *)(lVar21 + 1000) = *(undefined8 *)(lVar21 + 0x1e8);
      *(undefined8 *)(lVar21 + 0x1d0) = uVar23;
      *(undefined8 *)(lVar21 + 0x1d8) = uVar16;
      *(undefined8 *)(lVar21 + 0x1e0) = uVar17;
      *(undefined8 *)(lVar21 + 0x1e8) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x3f0);
      uVar16 = *(undefined8 *)(lVar21 + 0x3f8);
      uVar17 = *(undefined8 *)(lVar21 + 0x400);
      uVar18 = *(undefined8 *)(lVar21 + 0x408);
      *(undefined8 *)(lVar21 + 0x3f0) = *(undefined8 *)(lVar21 + 0x1f0);
      *(undefined8 *)(lVar21 + 0x3f8) = *(undefined8 *)(lVar21 + 0x1f8);
      *(undefined8 *)(lVar21 + 0x400) = *(undefined8 *)(lVar21 + 0x200);
      *(undefined8 *)(lVar21 + 0x408) = *(undefined8 *)(lVar21 + 0x208);
      *(undefined8 *)(lVar21 + 0x1f0) = uVar23;
      *(undefined8 *)(lVar21 + 0x1f8) = uVar16;
      *(undefined8 *)(lVar21 + 0x200) = uVar17;
      *(undefined8 *)(lVar21 + 0x208) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x410);
      uVar16 = *(undefined8 *)(lVar21 + 0x418);
      uVar17 = *(undefined8 *)(lVar21 + 0x420);
      uVar18 = *(undefined8 *)(lVar21 + 0x428);
      *(undefined8 *)(lVar21 + 0x410) = *(undefined8 *)(lVar21 + 0x210);
      *(undefined8 *)(lVar21 + 0x418) = *(undefined8 *)(lVar21 + 0x218);
      *(undefined8 *)(lVar21 + 0x420) = *(undefined8 *)(lVar21 + 0x220);
      *(undefined8 *)(lVar21 + 0x428) = *(undefined8 *)(lVar21 + 0x228);
      *(undefined8 *)(lVar21 + 0x210) = uVar23;
      *(undefined8 *)(lVar21 + 0x218) = uVar16;
      *(undefined8 *)(lVar21 + 0x220) = uVar17;
      *(undefined8 *)(lVar21 + 0x228) = uVar18;
      uVar23 = *(undefined8 *)(lVar21 + 0x430);
      uVar16 = *(undefined8 *)(lVar21 + 0x438);
      uVar17 = *(undefined8 *)(lVar21 + 0x440);
      uVar18 = *(undefined8 *)(lVar21 + 0x448);
      *(undefined8 *)(lVar21 + 0x430) = *(undefined8 *)(lVar21 + 0x230);
      *(undefined8 *)(lVar21 + 0x438) = *(undefined8 *)(lVar21 + 0x238);
      *(undefined8 *)(lVar21 + 0x440) = *(undefined8 *)(lVar21 + 0x240);
      *(undefined8 *)(lVar21 + 0x448) = *(undefined8 *)(lVar21 + 0x248);
      *(undefined8 *)(lVar21 + 0x230) = uVar23;
      *(undefined8 *)(lVar21 + 0x238) = uVar16;
      *(undefined8 *)(lVar21 + 0x240) = uVar17;
      *(undefined8 *)(lVar21 + 0x248) = uVar18;
      uVar8 = *(undefined4 *)(lVar21 + 0x450);
      uVar9 = *(undefined4 *)(lVar21 + 0x454);
      uVar10 = *(undefined4 *)(lVar21 + 0x458);
      uVar11 = *(undefined4 *)(lVar21 + 0x45c);
      uVar12 = *(undefined4 *)(lVar21 + 0x460);
      uVar13 = *(undefined4 *)(lVar21 + 0x464);
      uVar14 = *(undefined4 *)(lVar21 + 0x468);
      uVar15 = *(undefined4 *)(lVar21 + 0x46c);
      *(undefined4 *)(lVar21 + 0x450) = *(undefined4 *)(lVar21 + 0x250);
      *(undefined4 *)(lVar21 + 0x454) = *(undefined4 *)(lVar21 + 0x254);
      *(undefined4 *)(lVar21 + 0x458) = *(undefined4 *)(lVar21 + 600);
      *(undefined4 *)(lVar21 + 0x45c) = *(undefined4 *)(lVar21 + 0x25c);
      *(undefined4 *)(lVar21 + 0x460) = *(undefined4 *)(lVar21 + 0x260);
      *(undefined4 *)(lVar21 + 0x464) = *(undefined4 *)(lVar21 + 0x264);
      *(undefined4 *)(lVar21 + 0x468) = *(undefined4 *)(lVar21 + 0x268);
      *(undefined4 *)(lVar21 + 0x46c) = *(undefined4 *)(lVar21 + 0x26c);
      *(undefined4 *)(lVar21 + 0x250) = uVar8;
      *(undefined4 *)(lVar21 + 0x254) = uVar9;
      *(undefined4 *)(lVar21 + 600) = uVar10;
      *(undefined4 *)(lVar21 + 0x25c) = uVar11;
      *(undefined4 *)(lVar21 + 0x260) = uVar12;
      *(undefined4 *)(lVar21 + 0x264) = uVar13;
      *(undefined4 *)(lVar21 + 0x268) = uVar14;
      *(undefined4 *)(lVar21 + 0x26c) = uVar15;
      uStack_c0 = 0x14287930c;
      pdb_14287a780(param_4);
      uStack_c0 = 0x142879314;
      uVar23 = pdb_140bd4b20(lVar21 + 0x48);
      uStack_98 = *(undefined4 *)(lVar21 + 0x60);
      uStack_88 = *(undefined4 *)(lVar21 + 0x68);
      uStack_80 = *(undefined4 *)(lVar21 + 0x6c);
      uStack_90 = CONCAT31(uStack_90._1_3_,*(undefined1 *)(lVar21 + 100));
      uStack_c0 = 0x142879349;
      pdb_142879e70(param_4,CONCAT71((uint7)(uint3)((uint)uStack_88 >> 8),1),uVar23,lVar27);
      uStack_c0 = 0x142879359;
      puVar24 = (undefined8 *)pdb_142b20200(param_3[0xc],&UNK_143669560);
      if (puVar24 != (undefined8 *)0x0) {
        uStack_c0 = 0x14287936c;
        lVar27 = (**(code **)(puVar24[1] + 0x18))(*puVar24);
        if (lVar27 != 0) {
          uStack_c0 = 0x142879387;
          pdb_142879920(param_4,1,*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar27 + 0x10));
          fVar2 = *(float *)(lVar21 + 0x60);
          if (*(char *)(lVar21 + 100) == '\0') {
            *(undefined4 *)plStack_60[2] = *(undefined4 *)((longlong)plStack_60 + 0x1c);
            lVar21 = *plStack_60;
            lVar27 = *(longlong *)(lVar21 + 0x30);
            uVar23 = *(undefined8 *)(lVar21 + 0x40);
            if (lVar27 == *(longlong *)(lVar21 + 0x20)) {
              uStack_c0 = 0x142879575;
              pdb_142d7e6e0(lVar21 + 0x20);
            }
          }
          else {
            *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
            lVar21 = *param_5;
            lVar27 = *(longlong *)(lVar21 + 0x30);
            uVar23 = *(undefined8 *)(lVar21 + 0x40);
            if (lVar27 == *(longlong *)(lVar21 + 0x20)) {
              uStack_c0 = 0x1428793be;
              pdb_142d7e6e0(lVar21 + 0x20);
            }
          }
          pfVar22 = *(float **)(lVar21 + 0x28);
          *(undefined8 *)(pfVar22 + lVar27 * 8) = uVar23;
          *(undefined8 *)(pfVar22 + lVar27 * 8 + 2) = *(undefined8 *)param_2;
          pfVar22[lVar27 * 8 + 4] = param_2[2];
          pfVar22[lVar27 * 8 + 5] = fVar2;
          *(undefined1 *)(pfVar22 + lVar27 * 8 + 6) = 0;
          *(longlong *)(lVar21 + 0x30) = lVar27 + 1;
          *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
          return pfVar22;
        }
      }
                    /* WARNING: Subroutine does not return */
      uStack_c0 = 0x1428795cc;
      pdb_142dc8150(&UNK_1435a9048);
    }
  }
  else if (1 < *(ulonglong *)(lVar21 + 0x58)) {
    *(undefined4 *)param_3[0x16] = *(undefined4 *)((longlong)param_3 + 0xbc);
    lVar27 = param_3[0x14];
    lVar6 = *(longlong *)(lVar27 + 0x30);
    uVar23 = *(undefined8 *)(lVar27 + 0x40);
    if (lVar6 == *(longlong *)(lVar27 + 0x20)) {
      uStack_c0 = 0x14287944a;
      pdb_142d7e8a0(lVar27 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar27 + 0x28) + lVar6 * 8) = uVar23;
    *(longlong *)(lVar27 + 0x30) = lVar6 + 1;
    *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar27 = *param_7;
    lVar6 = *(longlong *)(lVar27 + 0x30);
    uVar23 = *(undefined8 *)(lVar27 + 0x40);
    if (lVar6 == *(longlong *)(lVar27 + 0x20)) {
      uStack_c0 = 0x142879484;
      pdb_142d7e8a0(lVar27 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar27 + 0x28) + lVar6 * 8) = uVar23;
    *(longlong *)(lVar27 + 0x30) = lVar6 + 1;
    *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
    *(undefined4 *)param_3[0x12] = *(undefined4 *)((longlong)param_3 + 0x9c);
    lVar27 = param_3[0x10];
    lVar6 = *(longlong *)(lVar27 + 0x30);
    uVar23 = *(undefined8 *)(lVar27 + 0x40);
    if (lVar6 == *(longlong *)(lVar27 + 0x20)) {
      uStack_c0 = 0x1428794c4;
      pdb_142d7e8a0(lVar27 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar27 + 0x28) + lVar6 * 8) = uVar23;
    *(longlong *)(lVar27 + 0x30) = lVar6 + 1;
    *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
    uStack_c0 = 0x1428794ea;
    pdb_140a83f50(param_4 + 0x98,lVar21 + 0x70);
    uStack_c0 = 0x1428794f2;
    pdb_140a83f40(lVar21 + 0x70);
    uStack_c0 = 0x1428794fa;
    pdb_14287ab10(param_4);
    puVar28 = &UNK_143669560;
    uStack_c0 = 0x14287950a;
    puVar24 = (undefined8 *)pdb_142b20200(param_3[0xc],&UNK_143669560);
    if (puVar24 != (undefined8 *)0x0) {
      uStack_c0 = 0x14287951d;
      lVar21 = (**(code **)(puVar24[1] + 0x18))(*puVar24);
      if (lVar21 != 0) {
        pbVar30 = *(byte **)(lVar21 + 8);
        pbVar36 = *(byte **)(lVar21 + 0x10);
        uStack_48 = 0xfffffffffffffffe;
        uVar35 = CONCAT71((int7)((ulonglong)puVar28 >> 8),1) & 0xffffffff;
        if (*(char *)(param_4 + 0x299) != '\0') {
          pub_142e32780(pbVar30,0,pbVar36);
          *(undefined1 *)(param_4 + 0x299) = 0;
        }
        *(char *)(param_4 + 0x298) = (char)uVar35;
        cVar19 = pdb_140e94b40();
        if (cVar19 == '\0') {
          lStack_68 = 0;
        }
        else {
          puVar28 = &UNK_1435a9487;
          pbVar31 = (byte *)0x82;
          uVar29 = 0x82;
          lVar21 = pdb_14287aea0(&UNK_1435a9487);
          if (lVar21 == 1) {
            if (0x82 < uVar29) {
LAB_142879cf7:
              pdb_142dc8070(&UNK_1435a9487,0x82,0);
LAB_142879d17:
              pdb_142dc8070(&UNK_1435a9487,0x82);
              pcVar7 = (code *)swi(3);
              pfVar22 = (float *)(*pcVar7)();
              return pfVar22;
            }
            puVar28 = &UNK_1435a9487;
            uVar25 = pdb_14287aea0(&UNK_1435a9487);
            if ((uVar25 & 1) != 0) {
              if (0x82 < uVar29 + 2) goto LAB_142879d17;
              pbVar31 = (byte *)(0x80 - uVar29);
              puVar28 = &UNK_1435a9489 + uVar29;
            }
          }
          puVar32 = &UNK_1435a9299;
          puVar34 = &UNK_1435a9268;
          do {
            bVar3 = puVar32[-1];
            uVar20 = (uint)(char)bVar3;
            uStack_50 = (float *)pbVar36;
            if ((char)bVar3 < '\0') {
              bVar4 = puVar32[-2];
              if ((char)bVar4 < -0x40) {
                bVar5 = puVar32[-3];
                if ((char)bVar5 < -0x40) {
                  pbVar1 = puVar32 + -4;
                  puVar32 = puVar32 + -4;
                  uVar20 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
                }
                else {
                  puVar32 = puVar32 + -3;
                  uVar20 = bVar5 & 0xf;
                }
                uVar20 = bVar4 & 0x3f | uVar20 << 6;
              }
              else {
                puVar32 = puVar32 + -2;
                uVar20 = bVar4 & 0x1f;
              }
              uVar20 = (uint)(bVar3 & 0x3f) | uVar20 << 6;
              if (uVar20 != 0x5c) goto LAB_142879a74;
LAB_142879a8d:
              puVar34 = puVar32 + -0x1435a9267;
              if ((undefined *)0x31 < puVar34) {
                pdb_142dc8070(&UNK_1435a9268,0x31,puVar34,0x31,&UNK_1435a9600);
                goto LAB_142879cf7;
              }
              lVar21 = 0x31 - (longlong)puVar34;
              puVar34 = puVar32 + 1;
              goto LAB_142879ab0;
            }
            puVar32 = puVar32 + -1;
            if (uVar20 == 0x5c) goto LAB_142879a8d;
LAB_142879a74:
            if (uVar20 == 0x2f) goto LAB_142879a8d;
          } while (puVar32 != &UNK_1435a9268);
          lVar21 = 0x31;
LAB_142879ab0:
          plVar26 = (longlong *)pdb_140e97000();
          if (((char)plVar26[0xd] != '\x01') &&
             (plVar26 = (longlong *)pdb_142e2a5b0(plVar26,0), plVar26 == (longlong *)0x0))
          goto LAB_142879ca3;
          if (*plVar26 != 0) goto LAB_142879c73;
          *plVar26 = -1;
          uStack_58 = plVar26;
          plStack_60 = (longlong *)pdb_140e94f10(plVar26 + 1,puVar28,pbVar31,puVar34,lVar21,1,0);
          *uStack_58 = *uStack_58 + 1;
          lStack_68 = 1;
          pbVar36 = (byte *)uStack_50;
        }
        puVar24 = (undefined8 *)(param_4 + 0x20);
        puVar33 = (undefined8 *)(param_4 + 0x28);
        if ((char)uVar35 == '\0') {
          puVar33 = (undefined8 *)(param_4 + 0x10);
          puVar24 = (undefined8 *)(param_4 + 8);
        }
        uStack_270 = *puVar33;
        uStack_278 = *puVar24;
        uStack_268 = *(undefined4 *)(param_4 + 0x50);
        uStack_264 = *(undefined4 *)(param_4 + 0x54);
        uStack_260 = *(undefined4 *)(param_4 + 0x58);
        uStack_25c = *(undefined4 *)(param_4 + 0x5c);
        uVar35 = param_4 + 0x98;
        lStack_258 = param_4 + 0x30;
        pbStack_250 = pbVar30;
        pbStack_248 = pbVar36;
        pdb_142b1f5b0(uVar35,&uStack_278);
        if (-1 < *(longlong *)(param_4 + 0x60)) {
          pbVar31 = (byte *)(param_4 + 0x60);
          pub_142e32760(&uStack_278,uVar35,0x200);
          pfVar22 = (float *)pdb_1428f4370(pbVar31,&uStack_278);
          do {
            pbVar30 = (byte *)&uStack_278;
            *(undefined1 *)(param_4 + 0x29a) = 1;
            if (lStack_68 == 0) {
              return pfVar22;
            }
            pfVar22 = (float *)pdb_140e97000();
            if (*(char *)(pfVar22 + 0x1a) != '\x01') goto LAB_142879c7f;
            do {
              if (*(longlong *)pfVar22 == 0) {
                pfVar22[0] = -NAN;
                pfVar22[1] = -NAN;
                uStack_50 = pfVar22;
                pdb_140e95370(pfVar22 + 2,plStack_60);
                *(longlong *)uStack_50 = *(longlong *)uStack_50 + 1;
                return uStack_50;
              }
LAB_142879c73:
              pfVar22 = (float *)pdb_142dc8090(&UNK_1435a9730);
LAB_142879c7f:
              pfVar22 = (float *)pdb_142e2a5b0(pfVar22,0);
            } while (pfVar22 != (float *)0x0);
LAB_142879ca3:
            pdb_142dc7890(&UNK_1435a96c0);
LAB_142879cb0:
            pdb_142dbd1a0(pbVar30);
LAB_142879bc0:
            pdb_140e9a150(pbVar30);
            uStack_50 = (float *)pbVar30;
            pub_142e32760(&uStack_278,uVar35,0x200);
            pdb_1428f4370(pbVar31 + 0x18);
            pbVar31 = (byte *)uStack_50;
            pdb_140e9a350();
            pfVar22 = (float *)0x1;
            LOCK();
            bVar3 = *pbVar31;
            if (bVar3 == 1) {
              *pbVar31 = 0;
            }
            else {
              pfVar22 = (float *)(ulonglong)bVar3;
            }
            UNLOCK();
            if (bVar3 != 1) {
              pfVar22 = (float *)pdb_142dbcef0(pbVar31);
            }
          } while( true );
        }
        pbVar31 = *(byte **)(param_4 + 0x68);
        pbVar30 = pbVar31 + 0x10;
        LOCK();
        bVar37 = pbVar31[0x10] == 0;
        if (bVar37) {
          pbVar31[0x10] = 1;
        }
        UNLOCK();
        if (!bVar37) goto LAB_142879cb0;
        goto LAB_142879bc0;
      }
    }
                    /* WARNING: Subroutine does not return */
    uStack_c0 = 0x1428795d8;
    pdb_142dc8150(&UNK_1435a9060);
  }
  return pfVar22;
}

