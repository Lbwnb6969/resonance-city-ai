// VA 0x140c085d0, PDB extent 4214 bytes
// country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$3<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$4<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$5<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone3Raster> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$3<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$4<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$5<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone3Raster>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 4214 */

longlong * pdb_140c085d0(uint *param_1,float *param_2,longlong *param_3,longlong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined *puVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  longlong lVar31;
  char *pcVar32;
  longlong lVar33;
  undefined *puVar34;
  ulonglong uVar35;
  byte *pbVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  longlong lStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  undefined8 uStack_90;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar22 = *param_3;
  uVar17 = *param_1;
  plVar19 = (longlong *)(ulonglong)uVar17;
  lVar31 = 0;
  if ((longlong *)0x1 < plVar19) {
    lVar31 = (longlong)plVar19 - 1;
  }
  if (lVar31 == 0) {
    *(undefined4 *)param_3[6] = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(undefined1 *)(param_3[4] + 0x1e0) = 1;
    pcVar32 = "";
    if (*(char *)param_3[8] != '\0') {
      pcVar32 = (char *)param_3[8] + 4;
    }
    _uStack_40 = CONCAT44(uStack_3c,*(undefined4 *)(pcVar32 + 8));
    uStack_48 = *(undefined8 *)pcVar32;
    uStack_60 = CONCAT44(uStack_60._4_4_,param_1[1]);
    lStack_68 = CONCAT44(lStack_68._4_4_,uVar17);
    uStack_90 = 0x140c08734;
    plVar19 = (longlong *)pdb_140bd6210(lVar22,&uStack_48,(char)param_1[3],param_1[2]);
    return plVar19;
  }
  if ((int)lVar31 == 1) {
    lVar31 = *(longlong *)(lVar22 + 0x38);
    if ((lVar31 == 0) || (*(longlong *)(lVar22 + 0x30) + lVar31 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c08b2a;
      pdb_142dc8150(&UNK_143064978);
    }
    plVar19 = (longlong *)(*(longlong *)(lVar22 + 0x30) + lVar31 * 0xc);
    fVar38 = *param_2 - *(float *)((longlong)plVar19 + -0xc);
    fVar39 = param_2[2] - *(float *)((longlong)plVar19 + -4);
    if (SQRT(fVar39 * fVar39 +
             (param_2[1] - *(float *)(plVar19 + -1)) * (param_2[1] - *(float *)(plVar19 + -1)) +
             fVar38 * fVar38) <= _DAT_142e37870) {
      return plVar19;
    }
    uStack_90 = 0x140c08695;
    pdb_140bd6640(lVar22);
    *(undefined8 *)(lVar22 + 0x58) = 0;
    lVar31 = *(longlong *)(lVar22 + 0x18);
    uVar35 = *(ulonglong *)(lVar22 + 0x20);
    if (*(ulonglong *)(lVar22 + 0x48) < uVar35) {
      lStack_68 = 0xc;
      uStack_90 = 0x140c08b49;
      pdb_142d7f1b0(lVar22 + 0x48,0,uVar35,4);
      lVar20 = *(longlong *)(lVar22 + 0x58);
      lVar23 = *(longlong *)(lVar22 + 0x50);
      if (uVar35 == 1) goto LAB_140c086cc;
LAB_140c08b5e:
      lVar2 = lVar23 + lVar20 * 0xc;
      lVar33 = 0xc;
      lVar25 = 0;
      do {
        *(undefined4 *)(lVar2 + -4 + lVar33) = *(undefined4 *)(lVar31 + -4 + lVar33);
        *(undefined8 *)(lVar2 + -0xc + lVar33) = *(undefined8 *)(lVar31 + -0xc + lVar33);
        *(undefined8 *)(lVar2 + lVar33) = *(undefined8 *)(lVar31 + lVar33);
        *(undefined4 *)(lVar2 + 8 + lVar33) = *(undefined4 *)(lVar31 + 8 + lVar33);
        lVar33 = lVar33 + 0x18;
        lVar25 = lVar25 + -2;
      } while (-lVar25 != (uVar35 & 0xfffffffffffffffe));
      lVar20 = lVar20 - lVar25;
      if ((uVar35 & 1) == 0) goto LAB_140c08bdc;
      lVar25 = -lVar25;
LAB_140c08bbf:
      *(undefined4 *)(lVar23 + 8 + lVar20 * 0xc) = *(undefined4 *)(lVar31 + 8 + lVar25 * 0xc);
      *(undefined8 *)(lVar23 + lVar20 * 0xc) = *(undefined8 *)(lVar31 + lVar25 * 0xc);
      lVar20 = lVar20 + 1;
    }
    else {
      lVar20 = 0;
      if (uVar35 != 0) {
        lVar23 = *(longlong *)(lVar22 + 0x50);
        if (uVar35 != 1) goto LAB_140c08b5e;
LAB_140c086cc:
        lVar25 = 0;
        goto LAB_140c08bbf;
      }
    }
LAB_140c08bdc:
    *(longlong *)(lVar22 + 0x58) = lVar20;
    uStack_90 = 0x140c08bed;
    pdb_140bd6350(*(undefined8 *)(lVar22 + 0x30),*(undefined8 *)(lVar22 + 0x38),lVar22 + 0x48);
    uStack_90 = 0x140c08c03;
    pdb_1419a60d0(*(undefined8 *)(lVar22 + 0x50),*(undefined8 *)(lVar22 + 0x58),10,0);
    uStack_90 = 0x140c08c1a;
    pub_142e32780(lVar22 + 0x270,0,0x200);
    uStack_90 = 0x140c08c37;
    pdb_140a83c80(lVar22 + 0x270,*(longlong *)(lVar22 + 0x50),
                  *(longlong *)(lVar22 + 0x50) + *(longlong *)(lVar22 + 0x58) * 0xc,
                  *(undefined4 *)(lVar22 + 0x60));
    uVar35 = *(ulonglong *)(lVar22 + 0x278);
    uVar24 = *(ulonglong *)(lVar22 + 0x280);
    uVar18 = *(ulonglong *)(lVar22 + 0x288);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar22 + 0x270)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar24;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x298);
    uVar24 = *(ulonglong *)(lVar22 + 0x2a0);
    uVar18 = *(ulonglong *)(lVar22 + 0x2a8);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar22 + 0x290) | *(ulonglong *)(param_4 + 0xb8)
    ;
    *(ulonglong *)(param_4 + 0xc0) = uVar35 | *(ulonglong *)(param_4 + 0xc0);
    *(ulonglong *)(param_4 + 200) = uVar24 | *(ulonglong *)(param_4 + 200);
    *(ulonglong *)(param_4 + 0xd0) = uVar18 | *(ulonglong *)(param_4 + 0xd0);
    uVar35 = *(ulonglong *)(lVar22 + 0x2b8);
    uVar24 = *(ulonglong *)(lVar22 + 0x2c0);
    uVar18 = *(ulonglong *)(lVar22 + 0x2c8);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar22 + 0x2b0)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar24;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x2d8);
    uVar24 = *(ulonglong *)(lVar22 + 0x2e0);
    uVar18 = *(ulonglong *)(lVar22 + 0x2e8);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar22 + 0x2d0)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar24;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x2f8);
    uVar24 = *(ulonglong *)(lVar22 + 0x300);
    uVar18 = *(ulonglong *)(lVar22 + 0x308);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar22 + 0x2f0);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar24;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x318);
    uVar24 = *(ulonglong *)(lVar22 + 800);
    uVar18 = *(ulonglong *)(lVar22 + 0x328);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar22 + 0x310);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar24;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x338);
    uVar24 = *(ulonglong *)(lVar22 + 0x340);
    uVar18 = *(ulonglong *)(lVar22 + 0x348);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar22 + 0x330);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar24;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x358);
    uVar24 = *(ulonglong *)(lVar22 + 0x360);
    uVar18 = *(ulonglong *)(lVar22 + 0x368);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar22 + 0x350);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar24;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x378);
    uVar24 = *(ulonglong *)(lVar22 + 0x380);
    uVar18 = *(ulonglong *)(lVar22 + 0x388);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar22 + 0x370);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar24;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x398);
    uVar24 = *(ulonglong *)(lVar22 + 0x3a0);
    uVar18 = *(ulonglong *)(lVar22 + 0x3a8);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar22 + 0x390);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar24;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x3b8);
    uVar24 = *(ulonglong *)(lVar22 + 0x3c0);
    uVar18 = *(ulonglong *)(lVar22 + 0x3c8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar22 + 0x3b0);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar24;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x3d8);
    uVar24 = *(ulonglong *)(lVar22 + 0x3e0);
    uVar18 = *(ulonglong *)(lVar22 + 1000);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar22 + 0x3d0);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar24;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x3f8);
    uVar24 = *(ulonglong *)(lVar22 + 0x400);
    uVar18 = *(ulonglong *)(lVar22 + 0x408);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar22 + 0x3f0);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar24;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x418);
    uVar24 = *(ulonglong *)(lVar22 + 0x420);
    uVar18 = *(ulonglong *)(lVar22 + 0x428);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar22 + 0x410);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar24;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x438);
    uVar24 = *(ulonglong *)(lVar22 + 0x440);
    uVar18 = *(ulonglong *)(lVar22 + 0x448);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar22 + 0x430);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar24;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x458);
    uVar24 = *(ulonglong *)(lVar22 + 0x460);
    uVar18 = *(ulonglong *)(lVar22 + 0x468);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar22 + 0x450);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar35;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar24;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x78);
    uVar24 = *(ulonglong *)(lVar22 + 0x80);
    uVar18 = *(ulonglong *)(lVar22 + 0x88);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar22 + 0x70);
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar24;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x98);
    uVar24 = *(ulonglong *)(lVar22 + 0xa0);
    uVar18 = *(ulonglong *)(lVar22 + 0xa8);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(param_4 + 0xb8) | *(ulonglong *)(lVar22 + 0x90);
    *(ulonglong *)(param_4 + 0xc0) = *(ulonglong *)(param_4 + 0xc0) | uVar35;
    *(ulonglong *)(param_4 + 200) = *(ulonglong *)(param_4 + 200) | uVar24;
    *(ulonglong *)(param_4 + 0xd0) = *(ulonglong *)(param_4 + 0xd0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0xb8);
    uVar24 = *(ulonglong *)(lVar22 + 0xc0);
    uVar18 = *(ulonglong *)(lVar22 + 200);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar22 + 0xb0);
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar24;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0xd8);
    uVar24 = *(ulonglong *)(lVar22 + 0xe0);
    uVar18 = *(ulonglong *)(lVar22 + 0xe8);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar22 + 0xd0);
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar24;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0xf8);
    uVar24 = *(ulonglong *)(lVar22 + 0x100);
    uVar18 = *(ulonglong *)(lVar22 + 0x108);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar22 + 0xf0);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar24;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x118);
    uVar24 = *(ulonglong *)(lVar22 + 0x120);
    uVar18 = *(ulonglong *)(lVar22 + 0x128);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar22 + 0x110);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar24;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x138);
    uVar24 = *(ulonglong *)(lVar22 + 0x140);
    uVar18 = *(ulonglong *)(lVar22 + 0x148);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar22 + 0x130);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar24;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x158);
    uVar24 = *(ulonglong *)(lVar22 + 0x160);
    uVar18 = *(ulonglong *)(lVar22 + 0x168);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar22 + 0x150);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar24;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x178);
    uVar24 = *(ulonglong *)(lVar22 + 0x180);
    uVar18 = *(ulonglong *)(lVar22 + 0x188);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar22 + 0x170);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar24;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x198);
    uVar24 = *(ulonglong *)(lVar22 + 0x1a0);
    uVar18 = *(ulonglong *)(lVar22 + 0x1a8);
    *(ulonglong *)(param_4 + 0x1b8) = *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar22 + 400)
    ;
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar24;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x1b8);
    uVar24 = *(ulonglong *)(lVar22 + 0x1c0);
    uVar18 = *(ulonglong *)(lVar22 + 0x1c8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar22 + 0x1b0);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar24;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x1d8);
    uVar24 = *(ulonglong *)(lVar22 + 0x1e0);
    uVar18 = *(ulonglong *)(lVar22 + 0x1e8);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar22 + 0x1d0);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar24;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x1f8);
    uVar24 = *(ulonglong *)(lVar22 + 0x200);
    uVar18 = *(ulonglong *)(lVar22 + 0x208);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar22 + 0x1f0);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar24;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x218);
    uVar24 = *(ulonglong *)(lVar22 + 0x220);
    uVar18 = *(ulonglong *)(lVar22 + 0x228);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar22 + 0x210);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar24;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x238);
    uVar24 = *(ulonglong *)(lVar22 + 0x240);
    uVar18 = *(ulonglong *)(lVar22 + 0x248);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar22 + 0x230);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar24;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 600);
    uVar24 = *(ulonglong *)(lVar22 + 0x260);
    uVar18 = *(ulonglong *)(lVar22 + 0x268);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar22 + 0x250);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar35;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar24;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
    uVar6 = *(undefined8 *)(lVar22 + 0x270);
    uVar13 = *(undefined8 *)(lVar22 + 0x278);
    uVar14 = *(undefined8 *)(lVar22 + 0x280);
    uVar15 = *(undefined8 *)(lVar22 + 0x288);
    *(undefined8 *)(lVar22 + 0x270) = *(undefined8 *)(lVar22 + 0x70);
    *(undefined8 *)(lVar22 + 0x278) = *(undefined8 *)(lVar22 + 0x78);
    *(undefined8 *)(lVar22 + 0x280) = *(undefined8 *)(lVar22 + 0x80);
    *(undefined8 *)(lVar22 + 0x288) = *(undefined8 *)(lVar22 + 0x88);
    *(undefined8 *)(lVar22 + 0x70) = uVar6;
    *(undefined8 *)(lVar22 + 0x78) = uVar13;
    *(undefined8 *)(lVar22 + 0x80) = uVar14;
    *(undefined8 *)(lVar22 + 0x88) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x290);
    uVar13 = *(undefined8 *)(lVar22 + 0x298);
    uVar14 = *(undefined8 *)(lVar22 + 0x2a0);
    uVar15 = *(undefined8 *)(lVar22 + 0x2a8);
    *(undefined8 *)(lVar22 + 0x290) = *(undefined8 *)(lVar22 + 0x90);
    *(undefined8 *)(lVar22 + 0x298) = *(undefined8 *)(lVar22 + 0x98);
    *(undefined8 *)(lVar22 + 0x2a0) = *(undefined8 *)(lVar22 + 0xa0);
    *(undefined8 *)(lVar22 + 0x2a8) = *(undefined8 *)(lVar22 + 0xa8);
    *(undefined8 *)(lVar22 + 0x90) = uVar6;
    *(undefined8 *)(lVar22 + 0x98) = uVar13;
    *(undefined8 *)(lVar22 + 0xa0) = uVar14;
    *(undefined8 *)(lVar22 + 0xa8) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x2b0);
    uVar13 = *(undefined8 *)(lVar22 + 0x2b8);
    uVar14 = *(undefined8 *)(lVar22 + 0x2c0);
    uVar15 = *(undefined8 *)(lVar22 + 0x2c8);
    *(undefined8 *)(lVar22 + 0x2b0) = *(undefined8 *)(lVar22 + 0xb0);
    *(undefined8 *)(lVar22 + 0x2b8) = *(undefined8 *)(lVar22 + 0xb8);
    *(undefined8 *)(lVar22 + 0x2c0) = *(undefined8 *)(lVar22 + 0xc0);
    *(undefined8 *)(lVar22 + 0x2c8) = *(undefined8 *)(lVar22 + 200);
    *(undefined8 *)(lVar22 + 0xb0) = uVar6;
    *(undefined8 *)(lVar22 + 0xb8) = uVar13;
    *(undefined8 *)(lVar22 + 0xc0) = uVar14;
    *(undefined8 *)(lVar22 + 200) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x2d0);
    uVar13 = *(undefined8 *)(lVar22 + 0x2d8);
    uVar14 = *(undefined8 *)(lVar22 + 0x2e0);
    uVar15 = *(undefined8 *)(lVar22 + 0x2e8);
    *(undefined8 *)(lVar22 + 0x2d0) = *(undefined8 *)(lVar22 + 0xd0);
    *(undefined8 *)(lVar22 + 0x2d8) = *(undefined8 *)(lVar22 + 0xd8);
    *(undefined8 *)(lVar22 + 0x2e0) = *(undefined8 *)(lVar22 + 0xe0);
    *(undefined8 *)(lVar22 + 0x2e8) = *(undefined8 *)(lVar22 + 0xe8);
    *(undefined8 *)(lVar22 + 0xd0) = uVar6;
    *(undefined8 *)(lVar22 + 0xd8) = uVar13;
    *(undefined8 *)(lVar22 + 0xe0) = uVar14;
    *(undefined8 *)(lVar22 + 0xe8) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x2f0);
    uVar13 = *(undefined8 *)(lVar22 + 0x2f8);
    uVar14 = *(undefined8 *)(lVar22 + 0x300);
    uVar15 = *(undefined8 *)(lVar22 + 0x308);
    *(undefined8 *)(lVar22 + 0x2f0) = *(undefined8 *)(lVar22 + 0xf0);
    *(undefined8 *)(lVar22 + 0x2f8) = *(undefined8 *)(lVar22 + 0xf8);
    *(undefined8 *)(lVar22 + 0x300) = *(undefined8 *)(lVar22 + 0x100);
    *(undefined8 *)(lVar22 + 0x308) = *(undefined8 *)(lVar22 + 0x108);
    *(undefined8 *)(lVar22 + 0xf0) = uVar6;
    *(undefined8 *)(lVar22 + 0xf8) = uVar13;
    *(undefined8 *)(lVar22 + 0x100) = uVar14;
    *(undefined8 *)(lVar22 + 0x108) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x310);
    uVar13 = *(undefined8 *)(lVar22 + 0x318);
    uVar14 = *(undefined8 *)(lVar22 + 800);
    uVar15 = *(undefined8 *)(lVar22 + 0x328);
    *(undefined8 *)(lVar22 + 0x310) = *(undefined8 *)(lVar22 + 0x110);
    *(undefined8 *)(lVar22 + 0x318) = *(undefined8 *)(lVar22 + 0x118);
    *(undefined8 *)(lVar22 + 800) = *(undefined8 *)(lVar22 + 0x120);
    *(undefined8 *)(lVar22 + 0x328) = *(undefined8 *)(lVar22 + 0x128);
    *(undefined8 *)(lVar22 + 0x110) = uVar6;
    *(undefined8 *)(lVar22 + 0x118) = uVar13;
    *(undefined8 *)(lVar22 + 0x120) = uVar14;
    *(undefined8 *)(lVar22 + 0x128) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x330);
    uVar13 = *(undefined8 *)(lVar22 + 0x338);
    uVar14 = *(undefined8 *)(lVar22 + 0x340);
    uVar15 = *(undefined8 *)(lVar22 + 0x348);
    *(undefined8 *)(lVar22 + 0x330) = *(undefined8 *)(lVar22 + 0x130);
    *(undefined8 *)(lVar22 + 0x338) = *(undefined8 *)(lVar22 + 0x138);
    *(undefined8 *)(lVar22 + 0x340) = *(undefined8 *)(lVar22 + 0x140);
    *(undefined8 *)(lVar22 + 0x348) = *(undefined8 *)(lVar22 + 0x148);
    *(undefined8 *)(lVar22 + 0x130) = uVar6;
    *(undefined8 *)(lVar22 + 0x138) = uVar13;
    *(undefined8 *)(lVar22 + 0x140) = uVar14;
    *(undefined8 *)(lVar22 + 0x148) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x350);
    uVar13 = *(undefined8 *)(lVar22 + 0x358);
    uVar14 = *(undefined8 *)(lVar22 + 0x360);
    uVar15 = *(undefined8 *)(lVar22 + 0x368);
    *(undefined8 *)(lVar22 + 0x350) = *(undefined8 *)(lVar22 + 0x150);
    *(undefined8 *)(lVar22 + 0x358) = *(undefined8 *)(lVar22 + 0x158);
    *(undefined8 *)(lVar22 + 0x360) = *(undefined8 *)(lVar22 + 0x160);
    *(undefined8 *)(lVar22 + 0x368) = *(undefined8 *)(lVar22 + 0x168);
    *(undefined8 *)(lVar22 + 0x150) = uVar6;
    *(undefined8 *)(lVar22 + 0x158) = uVar13;
    *(undefined8 *)(lVar22 + 0x160) = uVar14;
    *(undefined8 *)(lVar22 + 0x168) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x370);
    uVar13 = *(undefined8 *)(lVar22 + 0x378);
    uVar14 = *(undefined8 *)(lVar22 + 0x380);
    uVar15 = *(undefined8 *)(lVar22 + 0x388);
    *(undefined8 *)(lVar22 + 0x370) = *(undefined8 *)(lVar22 + 0x170);
    *(undefined8 *)(lVar22 + 0x378) = *(undefined8 *)(lVar22 + 0x178);
    *(undefined8 *)(lVar22 + 0x380) = *(undefined8 *)(lVar22 + 0x180);
    *(undefined8 *)(lVar22 + 0x388) = *(undefined8 *)(lVar22 + 0x188);
    *(undefined8 *)(lVar22 + 0x170) = uVar6;
    *(undefined8 *)(lVar22 + 0x178) = uVar13;
    *(undefined8 *)(lVar22 + 0x180) = uVar14;
    *(undefined8 *)(lVar22 + 0x188) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x390);
    uVar13 = *(undefined8 *)(lVar22 + 0x398);
    uVar14 = *(undefined8 *)(lVar22 + 0x3a0);
    uVar15 = *(undefined8 *)(lVar22 + 0x3a8);
    *(undefined8 *)(lVar22 + 0x390) = *(undefined8 *)(lVar22 + 400);
    *(undefined8 *)(lVar22 + 0x398) = *(undefined8 *)(lVar22 + 0x198);
    *(undefined8 *)(lVar22 + 0x3a0) = *(undefined8 *)(lVar22 + 0x1a0);
    *(undefined8 *)(lVar22 + 0x3a8) = *(undefined8 *)(lVar22 + 0x1a8);
    *(undefined8 *)(lVar22 + 400) = uVar6;
    *(undefined8 *)(lVar22 + 0x198) = uVar13;
    *(undefined8 *)(lVar22 + 0x1a0) = uVar14;
    *(undefined8 *)(lVar22 + 0x1a8) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x3b0);
    uVar13 = *(undefined8 *)(lVar22 + 0x3b8);
    uVar14 = *(undefined8 *)(lVar22 + 0x3c0);
    uVar15 = *(undefined8 *)(lVar22 + 0x3c8);
    *(undefined8 *)(lVar22 + 0x3b0) = *(undefined8 *)(lVar22 + 0x1b0);
    *(undefined8 *)(lVar22 + 0x3b8) = *(undefined8 *)(lVar22 + 0x1b8);
    *(undefined8 *)(lVar22 + 0x3c0) = *(undefined8 *)(lVar22 + 0x1c0);
    *(undefined8 *)(lVar22 + 0x3c8) = *(undefined8 *)(lVar22 + 0x1c8);
    *(undefined8 *)(lVar22 + 0x1b0) = uVar6;
    *(undefined8 *)(lVar22 + 0x1b8) = uVar13;
    *(undefined8 *)(lVar22 + 0x1c0) = uVar14;
    *(undefined8 *)(lVar22 + 0x1c8) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x3d0);
    uVar13 = *(undefined8 *)(lVar22 + 0x3d8);
    uVar14 = *(undefined8 *)(lVar22 + 0x3e0);
    uVar15 = *(undefined8 *)(lVar22 + 1000);
    *(undefined8 *)(lVar22 + 0x3d0) = *(undefined8 *)(lVar22 + 0x1d0);
    *(undefined8 *)(lVar22 + 0x3d8) = *(undefined8 *)(lVar22 + 0x1d8);
    *(undefined8 *)(lVar22 + 0x3e0) = *(undefined8 *)(lVar22 + 0x1e0);
    *(undefined8 *)(lVar22 + 1000) = *(undefined8 *)(lVar22 + 0x1e8);
    *(undefined8 *)(lVar22 + 0x1d0) = uVar6;
    *(undefined8 *)(lVar22 + 0x1d8) = uVar13;
    *(undefined8 *)(lVar22 + 0x1e0) = uVar14;
    *(undefined8 *)(lVar22 + 0x1e8) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x3f0);
    uVar13 = *(undefined8 *)(lVar22 + 0x3f8);
    uVar14 = *(undefined8 *)(lVar22 + 0x400);
    uVar15 = *(undefined8 *)(lVar22 + 0x408);
    *(undefined8 *)(lVar22 + 0x3f0) = *(undefined8 *)(lVar22 + 0x1f0);
    *(undefined8 *)(lVar22 + 0x3f8) = *(undefined8 *)(lVar22 + 0x1f8);
    *(undefined8 *)(lVar22 + 0x400) = *(undefined8 *)(lVar22 + 0x200);
    *(undefined8 *)(lVar22 + 0x408) = *(undefined8 *)(lVar22 + 0x208);
    *(undefined8 *)(lVar22 + 0x1f0) = uVar6;
    *(undefined8 *)(lVar22 + 0x1f8) = uVar13;
    *(undefined8 *)(lVar22 + 0x200) = uVar14;
    *(undefined8 *)(lVar22 + 0x208) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x410);
    uVar13 = *(undefined8 *)(lVar22 + 0x418);
    uVar14 = *(undefined8 *)(lVar22 + 0x420);
    uVar15 = *(undefined8 *)(lVar22 + 0x428);
    *(undefined8 *)(lVar22 + 0x410) = *(undefined8 *)(lVar22 + 0x210);
    *(undefined8 *)(lVar22 + 0x418) = *(undefined8 *)(lVar22 + 0x218);
    *(undefined8 *)(lVar22 + 0x420) = *(undefined8 *)(lVar22 + 0x220);
    *(undefined8 *)(lVar22 + 0x428) = *(undefined8 *)(lVar22 + 0x228);
    *(undefined8 *)(lVar22 + 0x210) = uVar6;
    *(undefined8 *)(lVar22 + 0x218) = uVar13;
    *(undefined8 *)(lVar22 + 0x220) = uVar14;
    *(undefined8 *)(lVar22 + 0x228) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x430);
    uVar13 = *(undefined8 *)(lVar22 + 0x438);
    uVar14 = *(undefined8 *)(lVar22 + 0x440);
    uVar15 = *(undefined8 *)(lVar22 + 0x448);
    *(undefined8 *)(lVar22 + 0x430) = *(undefined8 *)(lVar22 + 0x230);
    *(undefined8 *)(lVar22 + 0x438) = *(undefined8 *)(lVar22 + 0x238);
    *(undefined8 *)(lVar22 + 0x440) = *(undefined8 *)(lVar22 + 0x240);
    *(undefined8 *)(lVar22 + 0x448) = *(undefined8 *)(lVar22 + 0x248);
    *(undefined8 *)(lVar22 + 0x230) = uVar6;
    *(undefined8 *)(lVar22 + 0x238) = uVar13;
    *(undefined8 *)(lVar22 + 0x240) = uVar14;
    *(undefined8 *)(lVar22 + 0x248) = uVar15;
    uVar6 = *(undefined8 *)(lVar22 + 0x450);
    uVar13 = *(undefined8 *)(lVar22 + 0x458);
    uVar11 = *(undefined4 *)(lVar22 + 0x460);
    uVar12 = *(undefined4 *)(lVar22 + 0x468);
    *(undefined8 *)(lVar22 + 0x450) = *(undefined8 *)(lVar22 + 0x250);
    *(undefined8 *)(lVar22 + 0x458) = *(undefined8 *)(lVar22 + 600);
    *(undefined8 *)(lVar22 + 0x460) = *(undefined8 *)(lVar22 + 0x260);
    *(undefined8 *)(lVar22 + 0x468) = *(undefined8 *)(lVar22 + 0x268);
    *(undefined8 *)(lVar22 + 0x250) = uVar6;
    *(undefined8 *)(lVar22 + 600) = uVar13;
    *(undefined4 *)(lVar22 + 0x260) = uVar11;
    *(undefined4 *)(lVar22 + 0x264) = *(undefined4 *)(lVar22 + 0x464);
    *(undefined4 *)(lVar22 + 0x268) = uVar12;
    *(undefined4 *)(lVar22 + 0x26c) = *(undefined4 *)(lVar22 + 0x46c);
    uStack_90 = 0x140c095b6;
    pdb_140a79940(param_4);
    pbStack_50 = (byte *)CONCAT44(pbStack_50._4_4_,*(undefined4 *)(lVar22 + 0x6c));
    plStack_58 = (longlong *)CONCAT44(plStack_58._4_4_,*(undefined4 *)(lVar22 + 0x68));
    uStack_60 = CONCAT71(uStack_60._1_7_,*(undefined1 *)(lVar22 + 100));
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)(lVar22 + 0x60));
    uStack_90 = 0x140c095f5;
    pdb_140a79030(param_4,1,*(longlong *)(lVar22 + 0x50),
                  *(longlong *)(lVar22 + 0x50) + *(longlong *)(lVar22 + 0x58) * 0xc);
    puVar26 = &UNK_14331c878;
    uStack_90 = 0x140c09605;
    puVar21 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c878);
    if (puVar21 == (undefined8 *)0x0) {
LAB_140c09639:
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c09645;
      pdb_142dc8150(&UNK_1430683e0);
    }
    uStack_90 = 0x140c09614;
    lVar22 = (**(code **)(puVar21[1] + 0x18))(*puVar21);
    if (lVar22 == 0) goto LAB_140c09639;
  }
  else {
    if (*(ulonglong *)(lVar22 + 0x58) < 2) {
      return plVar19;
    }
    *(undefined4 *)param_3[0x16] = *(undefined4 *)((longlong)param_3 + 0xbc);
    lVar31 = param_3[0x14];
    lVar23 = *(longlong *)(lVar31 + 0x30);
    uVar6 = *(undefined8 *)(lVar31 + 0x40);
    if (lVar23 == *(longlong *)(lVar31 + 0x20)) {
      uStack_90 = 0x140c08771;
      pdb_142d7e8a0(lVar31 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar31 + 0x28) + lVar23 * 8) = uVar6;
    *(longlong *)(lVar31 + 0x30) = lVar23 + 1;
    *(longlong *)(lVar31 + 0x40) = *(longlong *)(lVar31 + 0x40) + 1;
    *(undefined4 *)param_3[0x12] = *(undefined4 *)((longlong)param_3 + 0x9c);
    lVar31 = param_3[0x10];
    lVar23 = *(longlong *)(lVar31 + 0x30);
    uVar6 = *(undefined8 *)(lVar31 + 0x40);
    if (lVar23 == *(longlong *)(lVar31 + 0x20)) {
      uStack_90 = 0x140c087b1;
      pdb_142d7e8a0(lVar31 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar31 + 0x28) + lVar23 * 8) = uVar6;
    *(longlong *)(lVar31 + 0x30) = lVar23 + 1;
    *(longlong *)(lVar31 + 0x40) = *(longlong *)(lVar31 + 0x40) + 1;
    uVar35 = *(ulonglong *)(lVar22 + 0x78);
    uVar24 = *(ulonglong *)(lVar22 + 0x80);
    uVar18 = *(ulonglong *)(lVar22 + 0x88);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar22 + 0x70);
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar24;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x98);
    uVar17 = *(uint *)(lVar22 + 0xa0);
    uVar8 = *(uint *)(lVar22 + 0xa4);
    uVar9 = *(uint *)(lVar22 + 0xa8);
    uVar10 = *(uint *)(lVar22 + 0xac);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar22 + 0x90) | *(ulonglong *)(param_4 + 0xb8);
    *(ulonglong *)(param_4 + 0xc0) = uVar35 | *(ulonglong *)(param_4 + 0xc0);
    *(uint *)(param_4 + 200) = uVar17 | *(uint *)(param_4 + 200);
    *(uint *)(param_4 + 0xcc) = uVar8 | *(uint *)(param_4 + 0xcc);
    *(uint *)(param_4 + 0xd0) = uVar9 | *(uint *)(param_4 + 0xd0);
    *(uint *)(param_4 + 0xd4) = uVar10 | *(uint *)(param_4 + 0xd4);
    uVar35 = *(ulonglong *)(lVar22 + 0xb8);
    uVar24 = *(ulonglong *)(lVar22 + 0xc0);
    uVar18 = *(ulonglong *)(lVar22 + 200);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar22 + 0xb0);
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar24;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0xd8);
    uVar24 = *(ulonglong *)(lVar22 + 0xe0);
    uVar18 = *(ulonglong *)(lVar22 + 0xe8);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar22 + 0xd0);
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar24;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0xf8);
    uVar24 = *(ulonglong *)(lVar22 + 0x100);
    uVar18 = *(ulonglong *)(lVar22 + 0x108);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar22 + 0xf0);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar24;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x118);
    uVar24 = *(ulonglong *)(lVar22 + 0x120);
    uVar18 = *(ulonglong *)(lVar22 + 0x128);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar22 + 0x110);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar24;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x138);
    uVar24 = *(ulonglong *)(lVar22 + 0x140);
    uVar18 = *(ulonglong *)(lVar22 + 0x148);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar22 + 0x130);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar24;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x158);
    uVar24 = *(ulonglong *)(lVar22 + 0x160);
    uVar18 = *(ulonglong *)(lVar22 + 0x168);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar22 + 0x150);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar24;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x178);
    uVar24 = *(ulonglong *)(lVar22 + 0x180);
    uVar18 = *(ulonglong *)(lVar22 + 0x188);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar22 + 0x170);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar24;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x198);
    uVar24 = *(ulonglong *)(lVar22 + 0x1a0);
    uVar18 = *(ulonglong *)(lVar22 + 0x1a8);
    *(ulonglong *)(param_4 + 0x1b8) = *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar22 + 400)
    ;
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar24;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x1b8);
    uVar24 = *(ulonglong *)(lVar22 + 0x1c0);
    uVar18 = *(ulonglong *)(lVar22 + 0x1c8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar22 + 0x1b0);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar24;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x1d8);
    uVar24 = *(ulonglong *)(lVar22 + 0x1e0);
    uVar18 = *(ulonglong *)(lVar22 + 0x1e8);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar22 + 0x1d0);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar24;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x1f8);
    uVar24 = *(ulonglong *)(lVar22 + 0x200);
    uVar18 = *(ulonglong *)(lVar22 + 0x208);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar22 + 0x1f0);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar24;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x218);
    uVar24 = *(ulonglong *)(lVar22 + 0x220);
    uVar18 = *(ulonglong *)(lVar22 + 0x228);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar22 + 0x210);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar24;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar35 = *(ulonglong *)(lVar22 + 0x238);
    uVar24 = *(ulonglong *)(lVar22 + 0x240);
    uVar18 = *(ulonglong *)(lVar22 + 0x248);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar22 + 0x230);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar24;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar18 = *(ulonglong *)(lVar22 + 600);
    uVar35 = *(ulonglong *)(lVar22 + 0x260);
    uVar24 = *(ulonglong *)(lVar22 + 0x268);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar22 + 0x250);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar18;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar35;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar24;
    uStack_90 = 0x140c08ad2;
    pub_142e32780(lVar22 + 0x70,0,0x200);
    uStack_90 = 0x140c08ada;
    pdb_140a79cd0(param_4);
    puVar26 = &UNK_14331c878;
    uStack_90 = 0x140c08aea;
    puVar21 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c878);
    if (puVar21 == (undefined8 *)0x0) {
LAB_140c08b02:
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c08b0e;
      pdb_142dc8150(&UNK_1430683f8);
    }
    uStack_90 = 0x140c08af9;
    lVar22 = (**(code **)(puVar21[1] + 0x18))(*puVar21);
    if (lVar22 == 0) goto LAB_140c08b02;
  }
  pbVar27 = *(byte **)(lVar22 + 8);
  pbVar36 = *(byte **)(lVar22 + 0x10);
  uStack_48 = 0xfffffffffffffffe;
  uVar35 = CONCAT71((int7)((ulonglong)puVar26 >> 8),1) & 0xffffffff;
  if (*(char *)(param_4 + 0x299) != '\0') {
    pub_142e32780(pbVar27,0,pbVar36);
    *(undefined1 *)(param_4 + 0x299) = 0;
  }
  *(char *)(param_4 + 0x298) = (char)uVar35;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_68 = 0;
  }
  else {
    puVar26 = &UNK_1430423bf;
    pbVar28 = (byte *)0x82;
    uVar24 = 0x82;
    lVar22 = pdb_140a7a9e0(&UNK_1430423bf);
    if (lVar22 == 1) {
      if (0x82 < uVar24) {
LAB_140a78eb7:
        pdb_142dc8070(&UNK_1430423bf,0x82,0);
LAB_140a78ed7:
        pdb_142dc8070(&UNK_1430423bf,0x82);
        pcVar7 = (code *)swi(3);
        plVar19 = (longlong *)(*pcVar7)();
        return plVar19;
      }
      puVar26 = &UNK_1430423bf;
      uVar18 = pdb_140a7a9e0(&UNK_1430423bf);
      if ((uVar18 & 1) != 0) {
        if (0x82 < uVar24 + 2) goto LAB_140a78ed7;
        pbVar28 = (byte *)(0x80 - uVar24);
        puVar26 = &UNK_1430423c1 + uVar24;
      }
    }
    puVar29 = &UNK_1430420e1;
    puVar34 = &UNK_1430420b0;
    do {
      bVar3 = puVar29[-1];
      uVar17 = (uint)(char)bVar3;
      pbStack_50 = pbVar36;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar29[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar29[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar29 + -4;
            puVar29 = puVar29 + -4;
            uVar17 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar29 = puVar29 + -3;
            uVar17 = bVar5 & 0xf;
          }
          uVar17 = bVar4 & 0x3f | uVar17 << 6;
        }
        else {
          puVar29 = puVar29 + -2;
          uVar17 = bVar4 & 0x1f;
        }
        uVar17 = (uint)(bVar3 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_140a78c34;
LAB_140a78c4d:
        puVar34 = puVar29 + -0x1430420af;
        if ((undefined *)0x31 < puVar34) {
          pdb_142dc8070(&UNK_1430420b0,0x31,puVar34,0x31,&UNK_1430425b0);
          goto LAB_140a78eb7;
        }
        lVar22 = 0x31 - (longlong)puVar34;
        puVar34 = puVar29 + 1;
        goto LAB_140a78c70;
      }
      puVar29 = puVar29 + -1;
      if (uVar17 == 0x5c) goto LAB_140a78c4d;
LAB_140a78c34:
      if (uVar17 == 0x2f) goto LAB_140a78c4d;
    } while (puVar29 != &UNK_1430420b0);
    lVar22 = 0x31;
LAB_140a78c70:
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] != '\x01') &&
       (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 == (longlong *)0x0))
    goto LAB_140a78e63;
    if (*plVar19 != 0) goto LAB_140a78e33;
    *plVar19 = -1;
    plStack_58 = plVar19;
    uStack_60 = pdb_140e94f10(plVar19 + 1,puVar26,pbVar28,puVar34,lVar22,1,0);
    *plStack_58 = *plStack_58 + 1;
    lStack_68 = 1;
    pbVar36 = pbStack_50;
  }
  puVar21 = (undefined8 *)(param_4 + 0x20);
  puVar30 = (undefined8 *)(param_4 + 0x28);
  if ((char)uVar35 == '\0') {
    puVar30 = (undefined8 *)(param_4 + 0x10);
    puVar21 = (undefined8 *)(param_4 + 8);
  }
  uStack_270 = *puVar30;
  uStack_278 = *puVar21;
  uStack_268 = *(undefined8 *)(param_4 + 0x50);
  uStack_260 = *(undefined8 *)(param_4 + 0x58);
  uVar35 = param_4 + 0x98;
  lStack_258 = param_4 + 0x30;
  pbStack_250 = pbVar27;
  pbStack_248 = pbVar36;
  pdb_140a84210(uVar35,&uStack_278);
  if (-1 < *(longlong *)(param_4 + 0x60)) {
    pbVar28 = (byte *)(param_4 + 0x60);
    pub_142e32760(&uStack_278,uVar35,0x200);
    plVar19 = (longlong *)pdb_1409c5460(pbVar28,&uStack_278);
    do {
      pbVar27 = (byte *)&uStack_278;
      *(undefined1 *)(param_4 + 0x29a) = 1;
      if (lStack_68 == 0) {
        return plVar19;
      }
      plVar19 = (longlong *)pdb_140e97000();
      if ((char)plVar19[0xd] != '\x01') goto LAB_140a78e3f;
      do {
        if (*plVar19 == 0) {
          *plVar19 = -1;
          pbStack_50 = (byte *)plVar19;
          pdb_140e95370(plVar19 + 1,uStack_60);
          *(longlong *)pbStack_50 = *(longlong *)pbStack_50 + 1;
          return (longlong *)pbStack_50;
        }
LAB_140a78e33:
        plVar19 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a78e3f:
        plVar19 = (longlong *)pdb_142d8ec20(plVar19,0);
      } while (plVar19 != (longlong *)0x0);
LAB_140a78e63:
      pdb_142dc7890(&UNK_143326860);
LAB_140a78e70:
      pdb_142dbd1a0(pbVar27);
LAB_140a78d80:
      pdb_140e9a150(pbVar27);
      pbStack_50 = pbVar27;
      pub_142e32760(&uStack_278,uVar35,0x200);
      pdb_1409c5460(pbVar28 + 0x18);
      pbVar28 = pbStack_50;
      pdb_140e9a350();
      plVar19 = (longlong *)0x1;
      LOCK();
      bVar3 = *pbVar28;
      if (bVar3 == 1) {
        *pbVar28 = 0;
      }
      else {
        plVar19 = (longlong *)(ulonglong)bVar3;
      }
      UNLOCK();
      if (bVar3 != 1) {
        plVar19 = (longlong *)pdb_142dbcef0(pbVar28);
      }
    } while( true );
  }
  pbVar28 = *(byte **)(param_4 + 0x68);
  pbVar27 = pbVar28 + 0x10;
  LOCK();
  bVar37 = pbVar28[0x10] == 0;
  if (bVar37) {
    pbVar28[0x10] = 1;
  }
  UNLOCK();
  if (!bVar37) goto LAB_140a78e70;
  goto LAB_140a78d80;
}

