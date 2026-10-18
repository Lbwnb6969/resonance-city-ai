// VA 0x140c05090, PDB extent 4541 bytes
// country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::Cobblestone3RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$6<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$7<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$8<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::Cobblestone3RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$6<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$7<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$8<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 4541 */

uint * pdb_140c05090(uint *param_1,float *param_2,longlong *param_3,longlong param_4)

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
  uint *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined *puVar27;
  byte *pbVar28;
  uint *puVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  longlong lVar32;
  char *pcVar33;
  longlong lVar34;
  undefined *puVar35;
  ulonglong uVar36;
  bool bVar37;
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
  uint *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar23 = *param_3;
  uVar17 = *param_1;
  lVar32 = 0;
  if (1 < (ulonglong)uVar17) {
    lVar32 = (ulonglong)uVar17 - 1;
  }
  if (lVar32 == 0) {
    *(undefined4 *)param_3[6] = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(undefined1 *)(param_3[4] + 0x1e0) = 1;
    pcVar33 = "";
    if (*(char *)param_3[8] != '\0') {
      pcVar33 = (char *)param_3[8] + 4;
    }
    _uStack_40 = CONCAT44(uStack_3c,*(undefined4 *)(pcVar33 + 8));
    uStack_48 = *(undefined8 *)pcVar33;
    uStack_60 = CONCAT44(uStack_60._4_4_,param_1[1]);
    lStack_68 = CONCAT44(lStack_68._4_4_,uVar17);
    uStack_90 = 0x140c05212;
    puVar20 = (uint *)pdb_140bd6210(lVar23 + 0xd50,&uStack_48,(char)param_1[3],param_1[2]);
    return puVar20;
  }
  if ((int)lVar32 == 1) {
    lVar32 = *(longlong *)(lVar23 + 0xd88);
    if ((lVar32 == 0) || (*(longlong *)(lVar23 + 0xd80) + lVar32 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c05631;
      pdb_142dc8150(&UNK_143064978);
    }
    puVar20 = (uint *)(*(longlong *)(lVar23 + 0xd80) + lVar32 * 0xc);
    if (SQRT((param_2[2] - (float)puVar20[-1]) * (param_2[2] - (float)puVar20[-1]) +
             (param_2[1] - (float)puVar20[-2]) * (param_2[1] - (float)puVar20[-2]) +
             (*param_2 - (float)puVar20[-3]) * (*param_2 - (float)puVar20[-3])) <= _DAT_142e37870) {
      return puVar20;
    }
    uStack_90 = 0x140c05163;
    pdb_140bd6640();
    *(undefined8 *)(lVar23 + 0xda8) = 0;
    lVar32 = *(longlong *)(lVar23 + 0xd68);
    uVar36 = *(ulonglong *)(lVar23 + 0xd70);
    if (*(ulonglong *)(lVar23 + 0xd98) < uVar36) {
      lStack_68 = 0xc;
      uStack_90 = 0x140c05650;
      pdb_142d7f1b0(lVar23 + 0xd98,0,uVar36,4);
      lVar21 = *(longlong *)(lVar23 + 0xda8);
      lVar24 = *(longlong *)(lVar23 + 0xda0);
      if (uVar36 == 1) goto LAB_140c051ac;
LAB_140c0566b:
      lVar2 = lVar24 + lVar21 * 0xc;
      lVar34 = 0xc;
      lVar26 = 0;
      do {
        *(undefined4 *)(lVar2 + -4 + lVar34) = *(undefined4 *)(lVar32 + -4 + lVar34);
        *(undefined8 *)(lVar2 + -0xc + lVar34) = *(undefined8 *)(lVar32 + -0xc + lVar34);
        *(undefined8 *)(lVar2 + lVar34) = *(undefined8 *)(lVar32 + lVar34);
        *(undefined4 *)(lVar2 + 8 + lVar34) = *(undefined4 *)(lVar32 + 8 + lVar34);
        lVar34 = lVar34 + 0x18;
        lVar26 = lVar26 + -2;
      } while (-lVar26 != (uVar36 & 0xfffffffffffffffe));
      lVar21 = lVar21 - lVar26;
      if ((uVar36 & 1) == 0) goto LAB_140c056eb;
      lVar26 = -lVar26;
LAB_140c056ce:
      *(undefined4 *)(lVar24 + 8 + lVar21 * 0xc) = *(undefined4 *)(lVar32 + 8 + lVar26 * 0xc);
      *(undefined8 *)(lVar24 + lVar21 * 0xc) = *(undefined8 *)(lVar32 + lVar26 * 0xc);
      lVar21 = lVar21 + 1;
    }
    else {
      lVar21 = 0;
      if (uVar36 != 0) {
        lVar24 = *(longlong *)(lVar23 + 0xda0);
        if (uVar36 != 1) goto LAB_140c0566b;
LAB_140c051ac:
        lVar26 = 0;
        goto LAB_140c056ce;
      }
    }
LAB_140c056eb:
    *(longlong *)(lVar23 + 0xda8) = lVar21;
    uStack_90 = 0x140c05705;
    pdb_140bd6350(*(undefined8 *)(lVar23 + 0xd80),*(undefined8 *)(lVar23 + 0xd88),lVar23 + 0xd98);
    uStack_90 = 0x140c05721;
    pdb_1419a60d0(*(undefined8 *)(lVar23 + 0xda0),*(undefined8 *)(lVar23 + 0xda8),10,0);
    uStack_90 = 0x140c05738;
    pub_142e32780(lVar23 + 0xfc0,0,0x200);
    uStack_90 = 0x140c0575f;
    pdb_140a83c80(lVar23 + 0xfc0,*(longlong *)(lVar23 + 0xda0),
                  *(longlong *)(lVar23 + 0xda0) + *(longlong *)(lVar23 + 0xda8) * 0xc,
                  *(undefined4 *)(lVar23 + 0xdb0));
    uVar36 = *(ulonglong *)(lVar23 + 0xfc8);
    uVar25 = *(ulonglong *)(lVar23 + 0xfd0);
    uVar18 = *(ulonglong *)(lVar23 + 0xfd8);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0xfc0)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xfe8);
    uVar25 = *(ulonglong *)(lVar23 + 0xff0);
    uVar18 = *(ulonglong *)(lVar23 + 0xff8);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar23 + 0xfe0) | *(ulonglong *)(param_4 + 0xb8)
    ;
    *(ulonglong *)(param_4 + 0xc0) = uVar36 | *(ulonglong *)(param_4 + 0xc0);
    *(ulonglong *)(param_4 + 200) = uVar25 | *(ulonglong *)(param_4 + 200);
    *(ulonglong *)(param_4 + 0xd0) = uVar18 | *(ulonglong *)(param_4 + 0xd0);
    uVar36 = *(ulonglong *)(lVar23 + 0x1008);
    uVar25 = *(ulonglong *)(lVar23 + 0x1010);
    uVar18 = *(ulonglong *)(lVar23 + 0x1018);
    *(ulonglong *)(param_4 + 0xd8) =
         *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0x1000);
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1028);
    uVar25 = *(ulonglong *)(lVar23 + 0x1030);
    uVar18 = *(ulonglong *)(lVar23 + 0x1038);
    *(ulonglong *)(param_4 + 0xf8) =
         *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0x1020);
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1048);
    uVar25 = *(ulonglong *)(lVar23 + 0x1050);
    uVar18 = *(ulonglong *)(lVar23 + 0x1058);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0x1040);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1068);
    uVar25 = *(ulonglong *)(lVar23 + 0x1070);
    uVar18 = *(ulonglong *)(lVar23 + 0x1078);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0x1060);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1088);
    uVar25 = *(ulonglong *)(lVar23 + 0x1090);
    uVar18 = *(ulonglong *)(lVar23 + 0x1098);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0x1080);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x10a8);
    uVar25 = *(ulonglong *)(lVar23 + 0x10b0);
    uVar18 = *(ulonglong *)(lVar23 + 0x10b8);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0x10a0);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x10c8);
    uVar25 = *(ulonglong *)(lVar23 + 0x10d0);
    uVar18 = *(ulonglong *)(lVar23 + 0x10d8);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0x10c0);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x10e8);
    uVar25 = *(ulonglong *)(lVar23 + 0x10f0);
    uVar18 = *(ulonglong *)(lVar23 + 0x10f8);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0x10e0);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1108);
    uVar25 = *(ulonglong *)(lVar23 + 0x1110);
    uVar18 = *(ulonglong *)(lVar23 + 0x1118);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0x1100);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1128);
    uVar25 = *(ulonglong *)(lVar23 + 0x1130);
    uVar18 = *(ulonglong *)(lVar23 + 0x1138);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0x1120);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1148);
    uVar25 = *(ulonglong *)(lVar23 + 0x1150);
    uVar18 = *(ulonglong *)(lVar23 + 0x1158);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0x1140);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1168);
    uVar25 = *(ulonglong *)(lVar23 + 0x1170);
    uVar18 = *(ulonglong *)(lVar23 + 0x1178);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0x1160);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x1188);
    uVar25 = *(ulonglong *)(lVar23 + 0x1190);
    uVar18 = *(ulonglong *)(lVar23 + 0x1198);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0x1180);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x11a8);
    uVar25 = *(ulonglong *)(lVar23 + 0x11b0);
    uVar18 = *(ulonglong *)(lVar23 + 0x11b8);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 0x11a0);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar36;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xdc8);
    uVar25 = *(ulonglong *)(lVar23 + 0xdd0);
    uVar18 = *(ulonglong *)(lVar23 + 0xdd8);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0xdc0)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xde8);
    uVar25 = *(ulonglong *)(lVar23 + 0xdf0);
    uVar18 = *(ulonglong *)(lVar23 + 0xdf8);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(param_4 + 0xb8) | *(ulonglong *)(lVar23 + 0xde0)
    ;
    *(ulonglong *)(param_4 + 0xc0) = *(ulonglong *)(param_4 + 0xc0) | uVar36;
    *(ulonglong *)(param_4 + 200) = *(ulonglong *)(param_4 + 200) | uVar25;
    *(ulonglong *)(param_4 + 0xd0) = *(ulonglong *)(param_4 + 0xd0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe08);
    uVar25 = *(ulonglong *)(lVar23 + 0xe10);
    uVar18 = *(ulonglong *)(lVar23 + 0xe18);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0xe00)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe28);
    uVar25 = *(ulonglong *)(lVar23 + 0xe30);
    uVar18 = *(ulonglong *)(lVar23 + 0xe38);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0xe20)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe48);
    uVar25 = *(ulonglong *)(lVar23 + 0xe50);
    uVar18 = *(ulonglong *)(lVar23 + 0xe58);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0xe40);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe68);
    uVar25 = *(ulonglong *)(lVar23 + 0xe70);
    uVar18 = *(ulonglong *)(lVar23 + 0xe78);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0xe60);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe88);
    uVar25 = *(ulonglong *)(lVar23 + 0xe90);
    uVar18 = *(ulonglong *)(lVar23 + 0xe98);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0xe80);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xea8);
    uVar25 = *(ulonglong *)(lVar23 + 0xeb0);
    uVar18 = *(ulonglong *)(lVar23 + 0xeb8);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0xea0);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xec8);
    uVar25 = *(ulonglong *)(lVar23 + 0xed0);
    uVar18 = *(ulonglong *)(lVar23 + 0xed8);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0xec0);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xee8);
    uVar25 = *(ulonglong *)(lVar23 + 0xef0);
    uVar18 = *(ulonglong *)(lVar23 + 0xef8);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0xee0);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf08);
    uVar25 = *(ulonglong *)(lVar23 + 0xf10);
    uVar18 = *(ulonglong *)(lVar23 + 0xf18);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0xf00);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf28);
    uVar25 = *(ulonglong *)(lVar23 + 0xf30);
    uVar18 = *(ulonglong *)(lVar23 + 0xf38);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0xf20);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf48);
    uVar25 = *(ulonglong *)(lVar23 + 0xf50);
    uVar18 = *(ulonglong *)(lVar23 + 0xf58);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0xf40);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf68);
    uVar25 = *(ulonglong *)(lVar23 + 0xf70);
    uVar18 = *(ulonglong *)(lVar23 + 0xf78);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0xf60);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf88);
    uVar25 = *(ulonglong *)(lVar23 + 0xf90);
    uVar18 = *(ulonglong *)(lVar23 + 0xf98);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0xf80);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xfa8);
    uVar25 = *(ulonglong *)(lVar23 + 0xfb0);
    uVar18 = *(ulonglong *)(lVar23 + 0xfb8);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 4000);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar36;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
    uVar6 = *(undefined8 *)(lVar23 + 0xfc0);
    uVar13 = *(undefined8 *)(lVar23 + 0xfc8);
    uVar14 = *(undefined8 *)(lVar23 + 0xfd0);
    uVar15 = *(undefined8 *)(lVar23 + 0xfd8);
    *(undefined8 *)(lVar23 + 0xfc0) = *(undefined8 *)(lVar23 + 0xdc0);
    *(undefined8 *)(lVar23 + 0xfc8) = *(undefined8 *)(lVar23 + 0xdc8);
    *(undefined8 *)(lVar23 + 0xfd0) = *(undefined8 *)(lVar23 + 0xdd0);
    *(undefined8 *)(lVar23 + 0xfd8) = *(undefined8 *)(lVar23 + 0xdd8);
    *(undefined8 *)(lVar23 + 0xdc0) = uVar6;
    *(undefined8 *)(lVar23 + 0xdc8) = uVar13;
    *(undefined8 *)(lVar23 + 0xdd0) = uVar14;
    *(undefined8 *)(lVar23 + 0xdd8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xfe0);
    uVar13 = *(undefined8 *)(lVar23 + 0xfe8);
    uVar14 = *(undefined8 *)(lVar23 + 0xff0);
    uVar15 = *(undefined8 *)(lVar23 + 0xff8);
    *(undefined8 *)(lVar23 + 0xfe0) = *(undefined8 *)(lVar23 + 0xde0);
    *(undefined8 *)(lVar23 + 0xfe8) = *(undefined8 *)(lVar23 + 0xde8);
    *(undefined8 *)(lVar23 + 0xff0) = *(undefined8 *)(lVar23 + 0xdf0);
    *(undefined8 *)(lVar23 + 0xff8) = *(undefined8 *)(lVar23 + 0xdf8);
    *(undefined8 *)(lVar23 + 0xde0) = uVar6;
    *(undefined8 *)(lVar23 + 0xde8) = uVar13;
    *(undefined8 *)(lVar23 + 0xdf0) = uVar14;
    *(undefined8 *)(lVar23 + 0xdf8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1000);
    uVar13 = *(undefined8 *)(lVar23 + 0x1008);
    uVar14 = *(undefined8 *)(lVar23 + 0x1010);
    uVar15 = *(undefined8 *)(lVar23 + 0x1018);
    *(undefined8 *)(lVar23 + 0x1000) = *(undefined8 *)(lVar23 + 0xe00);
    *(undefined8 *)(lVar23 + 0x1008) = *(undefined8 *)(lVar23 + 0xe08);
    *(undefined8 *)(lVar23 + 0x1010) = *(undefined8 *)(lVar23 + 0xe10);
    *(undefined8 *)(lVar23 + 0x1018) = *(undefined8 *)(lVar23 + 0xe18);
    *(undefined8 *)(lVar23 + 0xe00) = uVar6;
    *(undefined8 *)(lVar23 + 0xe08) = uVar13;
    *(undefined8 *)(lVar23 + 0xe10) = uVar14;
    *(undefined8 *)(lVar23 + 0xe18) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1020);
    uVar13 = *(undefined8 *)(lVar23 + 0x1028);
    uVar14 = *(undefined8 *)(lVar23 + 0x1030);
    uVar15 = *(undefined8 *)(lVar23 + 0x1038);
    *(undefined8 *)(lVar23 + 0x1020) = *(undefined8 *)(lVar23 + 0xe20);
    *(undefined8 *)(lVar23 + 0x1028) = *(undefined8 *)(lVar23 + 0xe28);
    *(undefined8 *)(lVar23 + 0x1030) = *(undefined8 *)(lVar23 + 0xe30);
    *(undefined8 *)(lVar23 + 0x1038) = *(undefined8 *)(lVar23 + 0xe38);
    *(undefined8 *)(lVar23 + 0xe20) = uVar6;
    *(undefined8 *)(lVar23 + 0xe28) = uVar13;
    *(undefined8 *)(lVar23 + 0xe30) = uVar14;
    *(undefined8 *)(lVar23 + 0xe38) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1040);
    uVar13 = *(undefined8 *)(lVar23 + 0x1048);
    uVar14 = *(undefined8 *)(lVar23 + 0x1050);
    uVar15 = *(undefined8 *)(lVar23 + 0x1058);
    *(undefined8 *)(lVar23 + 0x1040) = *(undefined8 *)(lVar23 + 0xe40);
    *(undefined8 *)(lVar23 + 0x1048) = *(undefined8 *)(lVar23 + 0xe48);
    *(undefined8 *)(lVar23 + 0x1050) = *(undefined8 *)(lVar23 + 0xe50);
    *(undefined8 *)(lVar23 + 0x1058) = *(undefined8 *)(lVar23 + 0xe58);
    *(undefined8 *)(lVar23 + 0xe40) = uVar6;
    *(undefined8 *)(lVar23 + 0xe48) = uVar13;
    *(undefined8 *)(lVar23 + 0xe50) = uVar14;
    *(undefined8 *)(lVar23 + 0xe58) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1060);
    uVar13 = *(undefined8 *)(lVar23 + 0x1068);
    uVar14 = *(undefined8 *)(lVar23 + 0x1070);
    uVar15 = *(undefined8 *)(lVar23 + 0x1078);
    *(undefined8 *)(lVar23 + 0x1060) = *(undefined8 *)(lVar23 + 0xe60);
    *(undefined8 *)(lVar23 + 0x1068) = *(undefined8 *)(lVar23 + 0xe68);
    *(undefined8 *)(lVar23 + 0x1070) = *(undefined8 *)(lVar23 + 0xe70);
    *(undefined8 *)(lVar23 + 0x1078) = *(undefined8 *)(lVar23 + 0xe78);
    *(undefined8 *)(lVar23 + 0xe60) = uVar6;
    *(undefined8 *)(lVar23 + 0xe68) = uVar13;
    *(undefined8 *)(lVar23 + 0xe70) = uVar14;
    *(undefined8 *)(lVar23 + 0xe78) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1080);
    uVar13 = *(undefined8 *)(lVar23 + 0x1088);
    uVar14 = *(undefined8 *)(lVar23 + 0x1090);
    uVar15 = *(undefined8 *)(lVar23 + 0x1098);
    *(undefined8 *)(lVar23 + 0x1080) = *(undefined8 *)(lVar23 + 0xe80);
    *(undefined8 *)(lVar23 + 0x1088) = *(undefined8 *)(lVar23 + 0xe88);
    *(undefined8 *)(lVar23 + 0x1090) = *(undefined8 *)(lVar23 + 0xe90);
    *(undefined8 *)(lVar23 + 0x1098) = *(undefined8 *)(lVar23 + 0xe98);
    *(undefined8 *)(lVar23 + 0xe80) = uVar6;
    *(undefined8 *)(lVar23 + 0xe88) = uVar13;
    *(undefined8 *)(lVar23 + 0xe90) = uVar14;
    *(undefined8 *)(lVar23 + 0xe98) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x10a0);
    uVar13 = *(undefined8 *)(lVar23 + 0x10a8);
    uVar14 = *(undefined8 *)(lVar23 + 0x10b0);
    uVar15 = *(undefined8 *)(lVar23 + 0x10b8);
    *(undefined8 *)(lVar23 + 0x10a0) = *(undefined8 *)(lVar23 + 0xea0);
    *(undefined8 *)(lVar23 + 0x10a8) = *(undefined8 *)(lVar23 + 0xea8);
    *(undefined8 *)(lVar23 + 0x10b0) = *(undefined8 *)(lVar23 + 0xeb0);
    *(undefined8 *)(lVar23 + 0x10b8) = *(undefined8 *)(lVar23 + 0xeb8);
    *(undefined8 *)(lVar23 + 0xea0) = uVar6;
    *(undefined8 *)(lVar23 + 0xea8) = uVar13;
    *(undefined8 *)(lVar23 + 0xeb0) = uVar14;
    *(undefined8 *)(lVar23 + 0xeb8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x10c0);
    uVar13 = *(undefined8 *)(lVar23 + 0x10c8);
    uVar14 = *(undefined8 *)(lVar23 + 0x10d0);
    uVar15 = *(undefined8 *)(lVar23 + 0x10d8);
    *(undefined8 *)(lVar23 + 0x10c0) = *(undefined8 *)(lVar23 + 0xec0);
    *(undefined8 *)(lVar23 + 0x10c8) = *(undefined8 *)(lVar23 + 0xec8);
    *(undefined8 *)(lVar23 + 0x10d0) = *(undefined8 *)(lVar23 + 0xed0);
    *(undefined8 *)(lVar23 + 0x10d8) = *(undefined8 *)(lVar23 + 0xed8);
    *(undefined8 *)(lVar23 + 0xec0) = uVar6;
    *(undefined8 *)(lVar23 + 0xec8) = uVar13;
    *(undefined8 *)(lVar23 + 0xed0) = uVar14;
    *(undefined8 *)(lVar23 + 0xed8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x10e0);
    uVar13 = *(undefined8 *)(lVar23 + 0x10e8);
    uVar14 = *(undefined8 *)(lVar23 + 0x10f0);
    uVar15 = *(undefined8 *)(lVar23 + 0x10f8);
    *(undefined8 *)(lVar23 + 0x10e0) = *(undefined8 *)(lVar23 + 0xee0);
    *(undefined8 *)(lVar23 + 0x10e8) = *(undefined8 *)(lVar23 + 0xee8);
    *(undefined8 *)(lVar23 + 0x10f0) = *(undefined8 *)(lVar23 + 0xef0);
    *(undefined8 *)(lVar23 + 0x10f8) = *(undefined8 *)(lVar23 + 0xef8);
    *(undefined8 *)(lVar23 + 0xee0) = uVar6;
    *(undefined8 *)(lVar23 + 0xee8) = uVar13;
    *(undefined8 *)(lVar23 + 0xef0) = uVar14;
    *(undefined8 *)(lVar23 + 0xef8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1100);
    uVar13 = *(undefined8 *)(lVar23 + 0x1108);
    uVar14 = *(undefined8 *)(lVar23 + 0x1110);
    uVar15 = *(undefined8 *)(lVar23 + 0x1118);
    *(undefined8 *)(lVar23 + 0x1100) = *(undefined8 *)(lVar23 + 0xf00);
    *(undefined8 *)(lVar23 + 0x1108) = *(undefined8 *)(lVar23 + 0xf08);
    *(undefined8 *)(lVar23 + 0x1110) = *(undefined8 *)(lVar23 + 0xf10);
    *(undefined8 *)(lVar23 + 0x1118) = *(undefined8 *)(lVar23 + 0xf18);
    *(undefined8 *)(lVar23 + 0xf00) = uVar6;
    *(undefined8 *)(lVar23 + 0xf08) = uVar13;
    *(undefined8 *)(lVar23 + 0xf10) = uVar14;
    *(undefined8 *)(lVar23 + 0xf18) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1120);
    uVar13 = *(undefined8 *)(lVar23 + 0x1128);
    uVar14 = *(undefined8 *)(lVar23 + 0x1130);
    uVar15 = *(undefined8 *)(lVar23 + 0x1138);
    *(undefined8 *)(lVar23 + 0x1120) = *(undefined8 *)(lVar23 + 0xf20);
    *(undefined8 *)(lVar23 + 0x1128) = *(undefined8 *)(lVar23 + 0xf28);
    *(undefined8 *)(lVar23 + 0x1130) = *(undefined8 *)(lVar23 + 0xf30);
    *(undefined8 *)(lVar23 + 0x1138) = *(undefined8 *)(lVar23 + 0xf38);
    *(undefined8 *)(lVar23 + 0xf20) = uVar6;
    *(undefined8 *)(lVar23 + 0xf28) = uVar13;
    *(undefined8 *)(lVar23 + 0xf30) = uVar14;
    *(undefined8 *)(lVar23 + 0xf38) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1140);
    uVar13 = *(undefined8 *)(lVar23 + 0x1148);
    uVar14 = *(undefined8 *)(lVar23 + 0x1150);
    uVar15 = *(undefined8 *)(lVar23 + 0x1158);
    *(undefined8 *)(lVar23 + 0x1140) = *(undefined8 *)(lVar23 + 0xf40);
    *(undefined8 *)(lVar23 + 0x1148) = *(undefined8 *)(lVar23 + 0xf48);
    *(undefined8 *)(lVar23 + 0x1150) = *(undefined8 *)(lVar23 + 0xf50);
    *(undefined8 *)(lVar23 + 0x1158) = *(undefined8 *)(lVar23 + 0xf58);
    *(undefined8 *)(lVar23 + 0xf40) = uVar6;
    *(undefined8 *)(lVar23 + 0xf48) = uVar13;
    *(undefined8 *)(lVar23 + 0xf50) = uVar14;
    *(undefined8 *)(lVar23 + 0xf58) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1160);
    uVar13 = *(undefined8 *)(lVar23 + 0x1168);
    uVar14 = *(undefined8 *)(lVar23 + 0x1170);
    uVar15 = *(undefined8 *)(lVar23 + 0x1178);
    *(undefined8 *)(lVar23 + 0x1160) = *(undefined8 *)(lVar23 + 0xf60);
    *(undefined8 *)(lVar23 + 0x1168) = *(undefined8 *)(lVar23 + 0xf68);
    *(undefined8 *)(lVar23 + 0x1170) = *(undefined8 *)(lVar23 + 0xf70);
    *(undefined8 *)(lVar23 + 0x1178) = *(undefined8 *)(lVar23 + 0xf78);
    *(undefined8 *)(lVar23 + 0xf60) = uVar6;
    *(undefined8 *)(lVar23 + 0xf68) = uVar13;
    *(undefined8 *)(lVar23 + 0xf70) = uVar14;
    *(undefined8 *)(lVar23 + 0xf78) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x1180);
    uVar13 = *(undefined8 *)(lVar23 + 0x1188);
    uVar14 = *(undefined8 *)(lVar23 + 0x1190);
    uVar15 = *(undefined8 *)(lVar23 + 0x1198);
    *(undefined8 *)(lVar23 + 0x1180) = *(undefined8 *)(lVar23 + 0xf80);
    *(undefined8 *)(lVar23 + 0x1188) = *(undefined8 *)(lVar23 + 0xf88);
    *(undefined8 *)(lVar23 + 0x1190) = *(undefined8 *)(lVar23 + 0xf90);
    *(undefined8 *)(lVar23 + 0x1198) = *(undefined8 *)(lVar23 + 0xf98);
    *(undefined8 *)(lVar23 + 0xf80) = uVar6;
    *(undefined8 *)(lVar23 + 0xf88) = uVar13;
    *(undefined8 *)(lVar23 + 0xf90) = uVar14;
    *(undefined8 *)(lVar23 + 0xf98) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x11a0);
    uVar13 = *(undefined8 *)(lVar23 + 0x11a8);
    uVar11 = *(undefined4 *)(lVar23 + 0x11b0);
    uVar12 = *(undefined4 *)(lVar23 + 0x11b8);
    *(undefined8 *)(lVar23 + 0x11a0) = *(undefined8 *)(lVar23 + 4000);
    *(undefined8 *)(lVar23 + 0x11a8) = *(undefined8 *)(lVar23 + 0xfa8);
    *(undefined8 *)(lVar23 + 0x11b0) = *(undefined8 *)(lVar23 + 0xfb0);
    *(undefined8 *)(lVar23 + 0x11b8) = *(undefined8 *)(lVar23 + 0xfb8);
    *(undefined8 *)(lVar23 + 4000) = uVar6;
    *(undefined8 *)(lVar23 + 0xfa8) = uVar13;
    *(undefined4 *)(lVar23 + 0xfb0) = uVar11;
    *(undefined4 *)(lVar23 + 0xfb4) = *(undefined4 *)(lVar23 + 0x11b4);
    *(undefined4 *)(lVar23 + 0xfb8) = uVar12;
    *(undefined4 *)(lVar23 + 0xfbc) = *(undefined4 *)(lVar23 + 0x11bc);
    uStack_90 = 0x140c061a7;
    pdb_140a79940(param_4);
    puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,*(undefined4 *)(lVar23 + 0xdbc));
    plStack_58 = (longlong *)CONCAT44(plStack_58._4_4_,*(undefined4 *)(lVar23 + 0xdb8));
    uStack_60 = CONCAT71(uStack_60._1_7_,*(undefined1 *)(lVar23 + 0xdb4));
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)(lVar23 + 0xdb0));
    uStack_90 = 0x140c061fc;
    pdb_140a79030(param_4,1,*(longlong *)(lVar23 + 0xda0),
                  *(longlong *)(lVar23 + 0xda0) + *(longlong *)(lVar23 + 0xda8) * 0xc);
    puVar27 = &UNK_14331c858;
    uStack_90 = 0x140c0620c;
    puVar22 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c858);
    if (puVar22 == (undefined8 *)0x0) {
LAB_140c06240:
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c0624c;
      pdb_142dc8150(&UNK_1430683e0);
    }
    uStack_90 = 0x140c0621b;
    lVar23 = (**(code **)(puVar22[1] + 0x18))(*puVar22);
    if (lVar23 == 0) goto LAB_140c06240;
  }
  else {
    if (*(ulonglong *)(lVar23 + 0xda8) < 2) {
      return param_1;
    }
    *(undefined4 *)param_3[0x16] = *(undefined4 *)((longlong)param_3 + 0xbc);
    lVar32 = param_3[0x14];
    lVar24 = *(longlong *)(lVar32 + 0x30);
    uVar6 = *(undefined8 *)(lVar32 + 0x40);
    if (lVar24 == *(longlong *)(lVar32 + 0x20)) {
      uStack_90 = 0x140c05252;
      pdb_142d7e8a0(lVar32 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar32 + 0x28) + lVar24 * 8) = uVar6;
    *(longlong *)(lVar32 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar32 + 0x40) = *(longlong *)(lVar32 + 0x40) + 1;
    *(undefined4 *)param_3[0x12] = *(undefined4 *)((longlong)param_3 + 0x9c);
    lVar32 = param_3[0x10];
    lVar24 = *(longlong *)(lVar32 + 0x30);
    uVar6 = *(undefined8 *)(lVar32 + 0x40);
    if (lVar24 == *(longlong *)(lVar32 + 0x20)) {
      uStack_90 = 0x140c05292;
      pdb_142d7e8a0(lVar32 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar32 + 0x28) + lVar24 * 8) = uVar6;
    *(longlong *)(lVar32 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar32 + 0x40) = *(longlong *)(lVar32 + 0x40) + 1;
    uVar36 = *(ulonglong *)(lVar23 + 0xdc8);
    uVar25 = *(ulonglong *)(lVar23 + 0xdd0);
    uVar18 = *(ulonglong *)(lVar23 + 0xdd8);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0xdc0)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xde8);
    uVar17 = *(uint *)(lVar23 + 0xdf0);
    uVar8 = *(uint *)(lVar23 + 0xdf4);
    uVar9 = *(uint *)(lVar23 + 0xdf8);
    uVar10 = *(uint *)(lVar23 + 0xdfc);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar23 + 0xde0) | *(ulonglong *)(param_4 + 0xb8)
    ;
    *(ulonglong *)(param_4 + 0xc0) = uVar36 | *(ulonglong *)(param_4 + 0xc0);
    *(uint *)(param_4 + 200) = uVar17 | *(uint *)(param_4 + 200);
    *(uint *)(param_4 + 0xcc) = uVar8 | *(uint *)(param_4 + 0xcc);
    *(uint *)(param_4 + 0xd0) = uVar9 | *(uint *)(param_4 + 0xd0);
    *(uint *)(param_4 + 0xd4) = uVar10 | *(uint *)(param_4 + 0xd4);
    uVar36 = *(ulonglong *)(lVar23 + 0xe08);
    uVar25 = *(ulonglong *)(lVar23 + 0xe10);
    uVar18 = *(ulonglong *)(lVar23 + 0xe18);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0xe00)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe28);
    uVar25 = *(ulonglong *)(lVar23 + 0xe30);
    uVar18 = *(ulonglong *)(lVar23 + 0xe38);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0xe20)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe48);
    uVar25 = *(ulonglong *)(lVar23 + 0xe50);
    uVar18 = *(ulonglong *)(lVar23 + 0xe58);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0xe40);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe68);
    uVar25 = *(ulonglong *)(lVar23 + 0xe70);
    uVar18 = *(ulonglong *)(lVar23 + 0xe78);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0xe60);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xe88);
    uVar25 = *(ulonglong *)(lVar23 + 0xe90);
    uVar18 = *(ulonglong *)(lVar23 + 0xe98);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0xe80);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xea8);
    uVar25 = *(ulonglong *)(lVar23 + 0xeb0);
    uVar18 = *(ulonglong *)(lVar23 + 0xeb8);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0xea0);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xec8);
    uVar25 = *(ulonglong *)(lVar23 + 0xed0);
    uVar18 = *(ulonglong *)(lVar23 + 0xed8);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0xec0);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xee8);
    uVar25 = *(ulonglong *)(lVar23 + 0xef0);
    uVar18 = *(ulonglong *)(lVar23 + 0xef8);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0xee0);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf08);
    uVar25 = *(ulonglong *)(lVar23 + 0xf10);
    uVar18 = *(ulonglong *)(lVar23 + 0xf18);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0xf00);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf28);
    uVar25 = *(ulonglong *)(lVar23 + 0xf30);
    uVar18 = *(ulonglong *)(lVar23 + 0xf38);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0xf20);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf48);
    uVar25 = *(ulonglong *)(lVar23 + 0xf50);
    uVar18 = *(ulonglong *)(lVar23 + 0xf58);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0xf40);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf68);
    uVar25 = *(ulonglong *)(lVar23 + 0xf70);
    uVar18 = *(ulonglong *)(lVar23 + 0xf78);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0xf60);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xf88);
    uVar25 = *(ulonglong *)(lVar23 + 0xf90);
    uVar18 = *(ulonglong *)(lVar23 + 0xf98);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0xf80);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar18 = *(ulonglong *)(lVar23 + 0xfa8);
    uVar36 = *(ulonglong *)(lVar23 + 0xfb0);
    uVar25 = *(ulonglong *)(lVar23 + 0xfb8);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 4000);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar18;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar36;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar25;
    uStack_90 = 0x140c055d9;
    pub_142e32780(lVar23 + 0xdc0,0,0x200);
    uStack_90 = 0x140c055e1;
    pdb_140a79cd0(param_4);
    puVar27 = &UNK_14331c858;
    uStack_90 = 0x140c055f1;
    puVar22 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c858);
    if (puVar22 == (undefined8 *)0x0) {
LAB_140c05609:
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c05615;
      pdb_142dc8150(&UNK_1430683f8);
    }
    uStack_90 = 0x140c05600;
    lVar23 = (**(code **)(puVar22[1] + 0x18))(*puVar22);
    if (lVar23 == 0) goto LAB_140c05609;
  }
  pbVar28 = *(byte **)(lVar23 + 8);
  puVar20 = *(uint **)(lVar23 + 0x10);
  uStack_48 = 0xfffffffffffffffe;
  uVar36 = CONCAT71((int7)((ulonglong)puVar27 >> 8),1) & 0xffffffff;
  if (*(char *)(param_4 + 0x299) != '\0') {
    pub_142e32780(pbVar28,0,puVar20);
    *(undefined1 *)(param_4 + 0x299) = 0;
  }
  *(char *)(param_4 + 0x298) = (char)uVar36;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_68 = 0;
  }
  else {
    puVar27 = &UNK_1430423bf;
    puVar29 = (uint *)0x82;
    uVar25 = 0x82;
    lVar23 = pdb_140a7a9e0(&UNK_1430423bf);
    if (lVar23 == 1) {
      if (0x82 < uVar25) {
LAB_140a78eb7:
        pdb_142dc8070(&UNK_1430423bf,0x82,0);
LAB_140a78ed7:
        pdb_142dc8070(&UNK_1430423bf,0x82);
        pcVar7 = (code *)swi(3);
        puVar20 = (uint *)(*pcVar7)();
        return puVar20;
      }
      puVar27 = &UNK_1430423bf;
      uVar18 = pdb_140a7a9e0(&UNK_1430423bf);
      if ((uVar18 & 1) != 0) {
        if (0x82 < uVar25 + 2) goto LAB_140a78ed7;
        puVar29 = (uint *)(0x80 - uVar25);
        puVar27 = &UNK_1430423c1 + uVar25;
      }
    }
    puVar30 = &UNK_1430420e1;
    puVar35 = &UNK_1430420b0;
    do {
      bVar3 = puVar30[-1];
      uVar17 = (uint)(char)bVar3;
      puStack_50 = puVar20;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar30[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar30[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar30 + -4;
            puVar30 = puVar30 + -4;
            uVar17 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar30 = puVar30 + -3;
            uVar17 = bVar5 & 0xf;
          }
          uVar17 = bVar4 & 0x3f | uVar17 << 6;
        }
        else {
          puVar30 = puVar30 + -2;
          uVar17 = bVar4 & 0x1f;
        }
        uVar17 = (uint)(bVar3 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_140a78c34;
LAB_140a78c4d:
        puVar35 = puVar30 + -0x1430420af;
        if ((undefined *)0x31 < puVar35) {
          pdb_142dc8070(&UNK_1430420b0,0x31,puVar35,0x31,&UNK_1430425b0);
          goto LAB_140a78eb7;
        }
        lVar23 = 0x31 - (longlong)puVar35;
        puVar35 = puVar30 + 1;
        goto LAB_140a78c70;
      }
      puVar30 = puVar30 + -1;
      if (uVar17 == 0x5c) goto LAB_140a78c4d;
LAB_140a78c34:
      if (uVar17 == 0x2f) goto LAB_140a78c4d;
    } while (puVar30 != &UNK_1430420b0);
    lVar23 = 0x31;
LAB_140a78c70:
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] != '\x01') &&
       (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 == (longlong *)0x0))
    goto LAB_140a78e63;
    if (*plVar19 != 0) goto LAB_140a78e33;
    *plVar19 = -1;
    plStack_58 = plVar19;
    uStack_60 = pdb_140e94f10(plVar19 + 1,puVar27,puVar29,puVar35,lVar23,1,0);
    *plStack_58 = *plStack_58 + 1;
    lStack_68 = 1;
    puVar20 = puStack_50;
  }
  puVar22 = (undefined8 *)(param_4 + 0x20);
  puVar31 = (undefined8 *)(param_4 + 0x28);
  if ((char)uVar36 == '\0') {
    puVar31 = (undefined8 *)(param_4 + 0x10);
    puVar22 = (undefined8 *)(param_4 + 8);
  }
  uStack_270 = *puVar31;
  uStack_278 = *puVar22;
  uStack_268 = *(undefined8 *)(param_4 + 0x50);
  uStack_260 = *(undefined8 *)(param_4 + 0x58);
  uVar36 = param_4 + 0x98;
  lStack_258 = param_4 + 0x30;
  pbStack_250 = pbVar28;
  pbStack_248 = (byte *)puVar20;
  pdb_140a84210(uVar36,&uStack_278);
  if (-1 < *(longlong *)(param_4 + 0x60)) {
    puVar29 = (uint *)(param_4 + 0x60);
    pub_142e32760(&uStack_278,uVar36,0x200);
    puVar20 = (uint *)pdb_1409c5460(puVar29,&uStack_278);
    do {
      pbVar28 = (byte *)&uStack_278;
      *(undefined1 *)(param_4 + 0x29a) = 1;
      if (lStack_68 == 0) {
        return puVar20;
      }
      puVar20 = (uint *)pdb_140e97000();
      if ((char)puVar20[0x1a] != '\x01') goto LAB_140a78e3f;
      do {
        if (*(longlong *)puVar20 == 0) {
          puVar20[0] = 0xffffffff;
          puVar20[1] = 0xffffffff;
          puStack_50 = puVar20;
          pdb_140e95370(puVar20 + 2,uStack_60);
          *(longlong *)puStack_50 = *(longlong *)puStack_50 + 1;
          return puStack_50;
        }
LAB_140a78e33:
        puVar20 = (uint *)pdb_142dc8090(&UNK_143326a50);
LAB_140a78e3f:
        puVar20 = (uint *)pdb_142d8ec20(puVar20,0);
      } while (puVar20 != (uint *)0x0);
LAB_140a78e63:
      pdb_142dc7890(&UNK_143326860);
LAB_140a78e70:
      pdb_142dbd1a0(pbVar28);
LAB_140a78d80:
      pdb_140e9a150(pbVar28);
      puStack_50 = (uint *)pbVar28;
      pub_142e32760(&uStack_278,uVar36,0x200);
      pdb_1409c5460((byte *)((longlong)puVar29 + 0x18));
      puVar29 = puStack_50;
      pdb_140e9a350();
      puVar20 = (uint *)0x1;
      LOCK();
      bVar3 = (byte)*puVar29;
      if (bVar3 == 1) {
        *(byte *)puVar29 = 0;
      }
      else {
        puVar20 = (uint *)(ulonglong)bVar3;
      }
      UNLOCK();
      if (bVar3 != 1) {
        puVar20 = (uint *)pdb_142dbcef0(puVar29);
      }
    } while( true );
  }
  puVar29 = *(uint **)(param_4 + 0x68);
  pbVar28 = (byte *)((longlong)puVar29 + 0x10);
  LOCK();
  bVar37 = *(byte *)((longlong)puVar29 + 0x10) == 0;
  if (bVar37) {
    *(byte *)((longlong)puVar29 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar37) goto LAB_140a78e70;
  goto LAB_140a78d80;
}

