// VA 0x140c07410, PDB extent 4541 bytes
// country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::Cobblestone2RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$3<country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$4<country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$5<country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::Cobblestone2RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$3<country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$4<country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$5<country_core::resources::world_raster_defs::PathRaster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::Cobblestone3Raster>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 4541 */

uint * pdb_140c07410(uint *param_1,float *param_2,longlong *param_3,longlong param_4)

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
    uStack_90 = 0x140c07592;
    puVar20 = (uint *)pdb_140bd6210(lVar23 + 0x8e0,&uStack_48,(char)param_1[3],param_1[2]);
    return puVar20;
  }
  if ((int)lVar32 == 1) {
    lVar32 = *(longlong *)(lVar23 + 0x918);
    if ((lVar32 == 0) || (*(longlong *)(lVar23 + 0x910) + lVar32 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c079b1;
      pdb_142dc8150(&UNK_143064978);
    }
    puVar20 = (uint *)(*(longlong *)(lVar23 + 0x910) + lVar32 * 0xc);
    if (SQRT((param_2[2] - (float)puVar20[-1]) * (param_2[2] - (float)puVar20[-1]) +
             (param_2[1] - (float)puVar20[-2]) * (param_2[1] - (float)puVar20[-2]) +
             (*param_2 - (float)puVar20[-3]) * (*param_2 - (float)puVar20[-3])) <= _DAT_142e37870) {
      return puVar20;
    }
    uStack_90 = 0x140c074e3;
    pdb_140bd6640();
    *(undefined8 *)(lVar23 + 0x938) = 0;
    lVar32 = *(longlong *)(lVar23 + 0x8f8);
    uVar36 = *(ulonglong *)(lVar23 + 0x900);
    if (*(ulonglong *)(lVar23 + 0x928) < uVar36) {
      lStack_68 = 0xc;
      uStack_90 = 0x140c079d0;
      pdb_142d7f1b0(lVar23 + 0x928,0,uVar36,4);
      lVar21 = *(longlong *)(lVar23 + 0x938);
      lVar24 = *(longlong *)(lVar23 + 0x930);
      if (uVar36 == 1) goto LAB_140c0752c;
LAB_140c079eb:
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
      if ((uVar36 & 1) == 0) goto LAB_140c07a6b;
      lVar26 = -lVar26;
LAB_140c07a4e:
      *(undefined4 *)(lVar24 + 8 + lVar21 * 0xc) = *(undefined4 *)(lVar32 + 8 + lVar26 * 0xc);
      *(undefined8 *)(lVar24 + lVar21 * 0xc) = *(undefined8 *)(lVar32 + lVar26 * 0xc);
      lVar21 = lVar21 + 1;
    }
    else {
      lVar21 = 0;
      if (uVar36 != 0) {
        lVar24 = *(longlong *)(lVar23 + 0x930);
        if (uVar36 != 1) goto LAB_140c079eb;
LAB_140c0752c:
        lVar26 = 0;
        goto LAB_140c07a4e;
      }
    }
LAB_140c07a6b:
    *(longlong *)(lVar23 + 0x938) = lVar21;
    uStack_90 = 0x140c07a85;
    pdb_140bd6350(*(undefined8 *)(lVar23 + 0x910),*(undefined8 *)(lVar23 + 0x918),lVar23 + 0x928);
    uStack_90 = 0x140c07aa1;
    pdb_1419a60d0(*(undefined8 *)(lVar23 + 0x930),*(undefined8 *)(lVar23 + 0x938),10,0);
    uStack_90 = 0x140c07ab8;
    pub_142e32780(lVar23 + 0xb50,0,0x200);
    uStack_90 = 0x140c07adf;
    pdb_140a83c80(lVar23 + 0xb50,*(longlong *)(lVar23 + 0x930),
                  *(longlong *)(lVar23 + 0x930) + *(longlong *)(lVar23 + 0x938) * 0xc,
                  *(undefined4 *)(lVar23 + 0x940));
    uVar36 = *(ulonglong *)(lVar23 + 0xb58);
    uVar25 = *(ulonglong *)(lVar23 + 0xb60);
    uVar18 = *(ulonglong *)(lVar23 + 0xb68);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0xb50)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xb78);
    uVar25 = *(ulonglong *)(lVar23 + 0xb80);
    uVar18 = *(ulonglong *)(lVar23 + 0xb88);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar23 + 0xb70) | *(ulonglong *)(param_4 + 0xb8)
    ;
    *(ulonglong *)(param_4 + 0xc0) = uVar36 | *(ulonglong *)(param_4 + 0xc0);
    *(ulonglong *)(param_4 + 200) = uVar25 | *(ulonglong *)(param_4 + 200);
    *(ulonglong *)(param_4 + 0xd0) = uVar18 | *(ulonglong *)(param_4 + 0xd0);
    uVar36 = *(ulonglong *)(lVar23 + 0xb98);
    uVar25 = *(ulonglong *)(lVar23 + 0xba0);
    uVar18 = *(ulonglong *)(lVar23 + 0xba8);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0xb90)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 3000);
    uVar25 = *(ulonglong *)(lVar23 + 0xbc0);
    uVar18 = *(ulonglong *)(lVar23 + 0xbc8);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0xbb0)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xbd8);
    uVar25 = *(ulonglong *)(lVar23 + 0xbe0);
    uVar18 = *(ulonglong *)(lVar23 + 0xbe8);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0xbd0);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xbf8);
    uVar25 = *(ulonglong *)(lVar23 + 0xc00);
    uVar18 = *(ulonglong *)(lVar23 + 0xc08);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0xbf0);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xc18);
    uVar25 = *(ulonglong *)(lVar23 + 0xc20);
    uVar18 = *(ulonglong *)(lVar23 + 0xc28);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0xc10);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xc38);
    uVar25 = *(ulonglong *)(lVar23 + 0xc40);
    uVar18 = *(ulonglong *)(lVar23 + 0xc48);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0xc30);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xc58);
    uVar25 = *(ulonglong *)(lVar23 + 0xc60);
    uVar18 = *(ulonglong *)(lVar23 + 0xc68);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0xc50);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xc78);
    uVar25 = *(ulonglong *)(lVar23 + 0xc80);
    uVar18 = *(ulonglong *)(lVar23 + 0xc88);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0xc70);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xc98);
    uVar25 = *(ulonglong *)(lVar23 + 0xca0);
    uVar18 = *(ulonglong *)(lVar23 + 0xca8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0xc90);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xcb8);
    uVar25 = *(ulonglong *)(lVar23 + 0xcc0);
    uVar18 = *(ulonglong *)(lVar23 + 0xcc8);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0xcb0);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xcd8);
    uVar25 = *(ulonglong *)(lVar23 + 0xce0);
    uVar18 = *(ulonglong *)(lVar23 + 0xce8);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0xcd0);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xcf8);
    uVar25 = *(ulonglong *)(lVar23 + 0xd00);
    uVar18 = *(ulonglong *)(lVar23 + 0xd08);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0xcf0);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xd18);
    uVar25 = *(ulonglong *)(lVar23 + 0xd20);
    uVar18 = *(ulonglong *)(lVar23 + 0xd28);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0xd10);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xd38);
    uVar25 = *(ulonglong *)(lVar23 + 0xd40);
    uVar18 = *(ulonglong *)(lVar23 + 0xd48);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 0xd30);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar36;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x958);
    uVar25 = *(ulonglong *)(lVar23 + 0x960);
    uVar18 = *(ulonglong *)(lVar23 + 0x968);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0x950)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x978);
    uVar25 = *(ulonglong *)(lVar23 + 0x980);
    uVar18 = *(ulonglong *)(lVar23 + 0x988);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(param_4 + 0xb8) | *(ulonglong *)(lVar23 + 0x970)
    ;
    *(ulonglong *)(param_4 + 0xc0) = *(ulonglong *)(param_4 + 0xc0) | uVar36;
    *(ulonglong *)(param_4 + 200) = *(ulonglong *)(param_4 + 200) | uVar25;
    *(ulonglong *)(param_4 + 0xd0) = *(ulonglong *)(param_4 + 0xd0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x998);
    uVar25 = *(ulonglong *)(lVar23 + 0x9a0);
    uVar18 = *(ulonglong *)(lVar23 + 0x9a8);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0x990)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x9b8);
    uVar25 = *(ulonglong *)(lVar23 + 0x9c0);
    uVar18 = *(ulonglong *)(lVar23 + 0x9c8);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0x9b0)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x9d8);
    uVar25 = *(ulonglong *)(lVar23 + 0x9e0);
    uVar18 = *(ulonglong *)(lVar23 + 0x9e8);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0x9d0);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x9f8);
    uVar25 = *(ulonglong *)(lVar23 + 0xa00);
    uVar18 = *(ulonglong *)(lVar23 + 0xa08);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0x9f0);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa18);
    uVar25 = *(ulonglong *)(lVar23 + 0xa20);
    uVar18 = *(ulonglong *)(lVar23 + 0xa28);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0xa10);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa38);
    uVar25 = *(ulonglong *)(lVar23 + 0xa40);
    uVar18 = *(ulonglong *)(lVar23 + 0xa48);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0xa30);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa58);
    uVar25 = *(ulonglong *)(lVar23 + 0xa60);
    uVar18 = *(ulonglong *)(lVar23 + 0xa68);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0xa50);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa78);
    uVar25 = *(ulonglong *)(lVar23 + 0xa80);
    uVar18 = *(ulonglong *)(lVar23 + 0xa88);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0xa70);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa98);
    uVar25 = *(ulonglong *)(lVar23 + 0xaa0);
    uVar18 = *(ulonglong *)(lVar23 + 0xaa8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0xa90);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xab8);
    uVar25 = *(ulonglong *)(lVar23 + 0xac0);
    uVar18 = *(ulonglong *)(lVar23 + 0xac8);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0xab0);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xad8);
    uVar25 = *(ulonglong *)(lVar23 + 0xae0);
    uVar18 = *(ulonglong *)(lVar23 + 0xae8);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0xad0);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xaf8);
    uVar25 = *(ulonglong *)(lVar23 + 0xb00);
    uVar18 = *(ulonglong *)(lVar23 + 0xb08);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0xaf0);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xb18);
    uVar25 = *(ulonglong *)(lVar23 + 0xb20);
    uVar18 = *(ulonglong *)(lVar23 + 0xb28);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0xb10);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xb38);
    uVar25 = *(ulonglong *)(lVar23 + 0xb40);
    uVar18 = *(ulonglong *)(lVar23 + 0xb48);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 0xb30);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar36;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
    uVar6 = *(undefined8 *)(lVar23 + 0xb50);
    uVar13 = *(undefined8 *)(lVar23 + 0xb58);
    uVar14 = *(undefined8 *)(lVar23 + 0xb60);
    uVar15 = *(undefined8 *)(lVar23 + 0xb68);
    *(undefined8 *)(lVar23 + 0xb50) = *(undefined8 *)(lVar23 + 0x950);
    *(undefined8 *)(lVar23 + 0xb58) = *(undefined8 *)(lVar23 + 0x958);
    *(undefined8 *)(lVar23 + 0xb60) = *(undefined8 *)(lVar23 + 0x960);
    *(undefined8 *)(lVar23 + 0xb68) = *(undefined8 *)(lVar23 + 0x968);
    *(undefined8 *)(lVar23 + 0x950) = uVar6;
    *(undefined8 *)(lVar23 + 0x958) = uVar13;
    *(undefined8 *)(lVar23 + 0x960) = uVar14;
    *(undefined8 *)(lVar23 + 0x968) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xb70);
    uVar13 = *(undefined8 *)(lVar23 + 0xb78);
    uVar14 = *(undefined8 *)(lVar23 + 0xb80);
    uVar15 = *(undefined8 *)(lVar23 + 0xb88);
    *(undefined8 *)(lVar23 + 0xb70) = *(undefined8 *)(lVar23 + 0x970);
    *(undefined8 *)(lVar23 + 0xb78) = *(undefined8 *)(lVar23 + 0x978);
    *(undefined8 *)(lVar23 + 0xb80) = *(undefined8 *)(lVar23 + 0x980);
    *(undefined8 *)(lVar23 + 0xb88) = *(undefined8 *)(lVar23 + 0x988);
    *(undefined8 *)(lVar23 + 0x970) = uVar6;
    *(undefined8 *)(lVar23 + 0x978) = uVar13;
    *(undefined8 *)(lVar23 + 0x980) = uVar14;
    *(undefined8 *)(lVar23 + 0x988) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xb90);
    uVar13 = *(undefined8 *)(lVar23 + 0xb98);
    uVar14 = *(undefined8 *)(lVar23 + 0xba0);
    uVar15 = *(undefined8 *)(lVar23 + 0xba8);
    *(undefined8 *)(lVar23 + 0xb90) = *(undefined8 *)(lVar23 + 0x990);
    *(undefined8 *)(lVar23 + 0xb98) = *(undefined8 *)(lVar23 + 0x998);
    *(undefined8 *)(lVar23 + 0xba0) = *(undefined8 *)(lVar23 + 0x9a0);
    *(undefined8 *)(lVar23 + 0xba8) = *(undefined8 *)(lVar23 + 0x9a8);
    *(undefined8 *)(lVar23 + 0x990) = uVar6;
    *(undefined8 *)(lVar23 + 0x998) = uVar13;
    *(undefined8 *)(lVar23 + 0x9a0) = uVar14;
    *(undefined8 *)(lVar23 + 0x9a8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xbb0);
    uVar13 = *(undefined8 *)(lVar23 + 3000);
    uVar14 = *(undefined8 *)(lVar23 + 0xbc0);
    uVar15 = *(undefined8 *)(lVar23 + 0xbc8);
    *(undefined8 *)(lVar23 + 0xbb0) = *(undefined8 *)(lVar23 + 0x9b0);
    *(undefined8 *)(lVar23 + 3000) = *(undefined8 *)(lVar23 + 0x9b8);
    *(undefined8 *)(lVar23 + 0xbc0) = *(undefined8 *)(lVar23 + 0x9c0);
    *(undefined8 *)(lVar23 + 0xbc8) = *(undefined8 *)(lVar23 + 0x9c8);
    *(undefined8 *)(lVar23 + 0x9b0) = uVar6;
    *(undefined8 *)(lVar23 + 0x9b8) = uVar13;
    *(undefined8 *)(lVar23 + 0x9c0) = uVar14;
    *(undefined8 *)(lVar23 + 0x9c8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xbd0);
    uVar13 = *(undefined8 *)(lVar23 + 0xbd8);
    uVar14 = *(undefined8 *)(lVar23 + 0xbe0);
    uVar15 = *(undefined8 *)(lVar23 + 0xbe8);
    *(undefined8 *)(lVar23 + 0xbd0) = *(undefined8 *)(lVar23 + 0x9d0);
    *(undefined8 *)(lVar23 + 0xbd8) = *(undefined8 *)(lVar23 + 0x9d8);
    *(undefined8 *)(lVar23 + 0xbe0) = *(undefined8 *)(lVar23 + 0x9e0);
    *(undefined8 *)(lVar23 + 0xbe8) = *(undefined8 *)(lVar23 + 0x9e8);
    *(undefined8 *)(lVar23 + 0x9d0) = uVar6;
    *(undefined8 *)(lVar23 + 0x9d8) = uVar13;
    *(undefined8 *)(lVar23 + 0x9e0) = uVar14;
    *(undefined8 *)(lVar23 + 0x9e8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xbf0);
    uVar13 = *(undefined8 *)(lVar23 + 0xbf8);
    uVar14 = *(undefined8 *)(lVar23 + 0xc00);
    uVar15 = *(undefined8 *)(lVar23 + 0xc08);
    *(undefined8 *)(lVar23 + 0xbf0) = *(undefined8 *)(lVar23 + 0x9f0);
    *(undefined8 *)(lVar23 + 0xbf8) = *(undefined8 *)(lVar23 + 0x9f8);
    *(undefined8 *)(lVar23 + 0xc00) = *(undefined8 *)(lVar23 + 0xa00);
    *(undefined8 *)(lVar23 + 0xc08) = *(undefined8 *)(lVar23 + 0xa08);
    *(undefined8 *)(lVar23 + 0x9f0) = uVar6;
    *(undefined8 *)(lVar23 + 0x9f8) = uVar13;
    *(undefined8 *)(lVar23 + 0xa00) = uVar14;
    *(undefined8 *)(lVar23 + 0xa08) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xc10);
    uVar13 = *(undefined8 *)(lVar23 + 0xc18);
    uVar14 = *(undefined8 *)(lVar23 + 0xc20);
    uVar15 = *(undefined8 *)(lVar23 + 0xc28);
    *(undefined8 *)(lVar23 + 0xc10) = *(undefined8 *)(lVar23 + 0xa10);
    *(undefined8 *)(lVar23 + 0xc18) = *(undefined8 *)(lVar23 + 0xa18);
    *(undefined8 *)(lVar23 + 0xc20) = *(undefined8 *)(lVar23 + 0xa20);
    *(undefined8 *)(lVar23 + 0xc28) = *(undefined8 *)(lVar23 + 0xa28);
    *(undefined8 *)(lVar23 + 0xa10) = uVar6;
    *(undefined8 *)(lVar23 + 0xa18) = uVar13;
    *(undefined8 *)(lVar23 + 0xa20) = uVar14;
    *(undefined8 *)(lVar23 + 0xa28) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xc30);
    uVar13 = *(undefined8 *)(lVar23 + 0xc38);
    uVar14 = *(undefined8 *)(lVar23 + 0xc40);
    uVar15 = *(undefined8 *)(lVar23 + 0xc48);
    *(undefined8 *)(lVar23 + 0xc30) = *(undefined8 *)(lVar23 + 0xa30);
    *(undefined8 *)(lVar23 + 0xc38) = *(undefined8 *)(lVar23 + 0xa38);
    *(undefined8 *)(lVar23 + 0xc40) = *(undefined8 *)(lVar23 + 0xa40);
    *(undefined8 *)(lVar23 + 0xc48) = *(undefined8 *)(lVar23 + 0xa48);
    *(undefined8 *)(lVar23 + 0xa30) = uVar6;
    *(undefined8 *)(lVar23 + 0xa38) = uVar13;
    *(undefined8 *)(lVar23 + 0xa40) = uVar14;
    *(undefined8 *)(lVar23 + 0xa48) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xc50);
    uVar13 = *(undefined8 *)(lVar23 + 0xc58);
    uVar14 = *(undefined8 *)(lVar23 + 0xc60);
    uVar15 = *(undefined8 *)(lVar23 + 0xc68);
    *(undefined8 *)(lVar23 + 0xc50) = *(undefined8 *)(lVar23 + 0xa50);
    *(undefined8 *)(lVar23 + 0xc58) = *(undefined8 *)(lVar23 + 0xa58);
    *(undefined8 *)(lVar23 + 0xc60) = *(undefined8 *)(lVar23 + 0xa60);
    *(undefined8 *)(lVar23 + 0xc68) = *(undefined8 *)(lVar23 + 0xa68);
    *(undefined8 *)(lVar23 + 0xa50) = uVar6;
    *(undefined8 *)(lVar23 + 0xa58) = uVar13;
    *(undefined8 *)(lVar23 + 0xa60) = uVar14;
    *(undefined8 *)(lVar23 + 0xa68) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xc70);
    uVar13 = *(undefined8 *)(lVar23 + 0xc78);
    uVar14 = *(undefined8 *)(lVar23 + 0xc80);
    uVar15 = *(undefined8 *)(lVar23 + 0xc88);
    *(undefined8 *)(lVar23 + 0xc70) = *(undefined8 *)(lVar23 + 0xa70);
    *(undefined8 *)(lVar23 + 0xc78) = *(undefined8 *)(lVar23 + 0xa78);
    *(undefined8 *)(lVar23 + 0xc80) = *(undefined8 *)(lVar23 + 0xa80);
    *(undefined8 *)(lVar23 + 0xc88) = *(undefined8 *)(lVar23 + 0xa88);
    *(undefined8 *)(lVar23 + 0xa70) = uVar6;
    *(undefined8 *)(lVar23 + 0xa78) = uVar13;
    *(undefined8 *)(lVar23 + 0xa80) = uVar14;
    *(undefined8 *)(lVar23 + 0xa88) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xc90);
    uVar13 = *(undefined8 *)(lVar23 + 0xc98);
    uVar14 = *(undefined8 *)(lVar23 + 0xca0);
    uVar15 = *(undefined8 *)(lVar23 + 0xca8);
    *(undefined8 *)(lVar23 + 0xc90) = *(undefined8 *)(lVar23 + 0xa90);
    *(undefined8 *)(lVar23 + 0xc98) = *(undefined8 *)(lVar23 + 0xa98);
    *(undefined8 *)(lVar23 + 0xca0) = *(undefined8 *)(lVar23 + 0xaa0);
    *(undefined8 *)(lVar23 + 0xca8) = *(undefined8 *)(lVar23 + 0xaa8);
    *(undefined8 *)(lVar23 + 0xa90) = uVar6;
    *(undefined8 *)(lVar23 + 0xa98) = uVar13;
    *(undefined8 *)(lVar23 + 0xaa0) = uVar14;
    *(undefined8 *)(lVar23 + 0xaa8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xcb0);
    uVar13 = *(undefined8 *)(lVar23 + 0xcb8);
    uVar14 = *(undefined8 *)(lVar23 + 0xcc0);
    uVar15 = *(undefined8 *)(lVar23 + 0xcc8);
    *(undefined8 *)(lVar23 + 0xcb0) = *(undefined8 *)(lVar23 + 0xab0);
    *(undefined8 *)(lVar23 + 0xcb8) = *(undefined8 *)(lVar23 + 0xab8);
    *(undefined8 *)(lVar23 + 0xcc0) = *(undefined8 *)(lVar23 + 0xac0);
    *(undefined8 *)(lVar23 + 0xcc8) = *(undefined8 *)(lVar23 + 0xac8);
    *(undefined8 *)(lVar23 + 0xab0) = uVar6;
    *(undefined8 *)(lVar23 + 0xab8) = uVar13;
    *(undefined8 *)(lVar23 + 0xac0) = uVar14;
    *(undefined8 *)(lVar23 + 0xac8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xcd0);
    uVar13 = *(undefined8 *)(lVar23 + 0xcd8);
    uVar14 = *(undefined8 *)(lVar23 + 0xce0);
    uVar15 = *(undefined8 *)(lVar23 + 0xce8);
    *(undefined8 *)(lVar23 + 0xcd0) = *(undefined8 *)(lVar23 + 0xad0);
    *(undefined8 *)(lVar23 + 0xcd8) = *(undefined8 *)(lVar23 + 0xad8);
    *(undefined8 *)(lVar23 + 0xce0) = *(undefined8 *)(lVar23 + 0xae0);
    *(undefined8 *)(lVar23 + 0xce8) = *(undefined8 *)(lVar23 + 0xae8);
    *(undefined8 *)(lVar23 + 0xad0) = uVar6;
    *(undefined8 *)(lVar23 + 0xad8) = uVar13;
    *(undefined8 *)(lVar23 + 0xae0) = uVar14;
    *(undefined8 *)(lVar23 + 0xae8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xcf0);
    uVar13 = *(undefined8 *)(lVar23 + 0xcf8);
    uVar14 = *(undefined8 *)(lVar23 + 0xd00);
    uVar15 = *(undefined8 *)(lVar23 + 0xd08);
    *(undefined8 *)(lVar23 + 0xcf0) = *(undefined8 *)(lVar23 + 0xaf0);
    *(undefined8 *)(lVar23 + 0xcf8) = *(undefined8 *)(lVar23 + 0xaf8);
    *(undefined8 *)(lVar23 + 0xd00) = *(undefined8 *)(lVar23 + 0xb00);
    *(undefined8 *)(lVar23 + 0xd08) = *(undefined8 *)(lVar23 + 0xb08);
    *(undefined8 *)(lVar23 + 0xaf0) = uVar6;
    *(undefined8 *)(lVar23 + 0xaf8) = uVar13;
    *(undefined8 *)(lVar23 + 0xb00) = uVar14;
    *(undefined8 *)(lVar23 + 0xb08) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xd10);
    uVar13 = *(undefined8 *)(lVar23 + 0xd18);
    uVar14 = *(undefined8 *)(lVar23 + 0xd20);
    uVar15 = *(undefined8 *)(lVar23 + 0xd28);
    *(undefined8 *)(lVar23 + 0xd10) = *(undefined8 *)(lVar23 + 0xb10);
    *(undefined8 *)(lVar23 + 0xd18) = *(undefined8 *)(lVar23 + 0xb18);
    *(undefined8 *)(lVar23 + 0xd20) = *(undefined8 *)(lVar23 + 0xb20);
    *(undefined8 *)(lVar23 + 0xd28) = *(undefined8 *)(lVar23 + 0xb28);
    *(undefined8 *)(lVar23 + 0xb10) = uVar6;
    *(undefined8 *)(lVar23 + 0xb18) = uVar13;
    *(undefined8 *)(lVar23 + 0xb20) = uVar14;
    *(undefined8 *)(lVar23 + 0xb28) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0xd30);
    uVar13 = *(undefined8 *)(lVar23 + 0xd38);
    uVar11 = *(undefined4 *)(lVar23 + 0xd40);
    uVar12 = *(undefined4 *)(lVar23 + 0xd48);
    *(undefined8 *)(lVar23 + 0xd30) = *(undefined8 *)(lVar23 + 0xb30);
    *(undefined8 *)(lVar23 + 0xd38) = *(undefined8 *)(lVar23 + 0xb38);
    *(undefined8 *)(lVar23 + 0xd40) = *(undefined8 *)(lVar23 + 0xb40);
    *(undefined8 *)(lVar23 + 0xd48) = *(undefined8 *)(lVar23 + 0xb48);
    *(undefined8 *)(lVar23 + 0xb30) = uVar6;
    *(undefined8 *)(lVar23 + 0xb38) = uVar13;
    *(undefined4 *)(lVar23 + 0xb40) = uVar11;
    *(undefined4 *)(lVar23 + 0xb44) = *(undefined4 *)(lVar23 + 0xd44);
    *(undefined4 *)(lVar23 + 0xb48) = uVar12;
    *(undefined4 *)(lVar23 + 0xb4c) = *(undefined4 *)(lVar23 + 0xd4c);
    uStack_90 = 0x140c08527;
    pdb_140a79940(param_4);
    puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,*(undefined4 *)(lVar23 + 0x94c));
    plStack_58 = (longlong *)CONCAT44(plStack_58._4_4_,*(undefined4 *)(lVar23 + 0x948));
    uStack_60 = CONCAT71(uStack_60._1_7_,*(undefined1 *)(lVar23 + 0x944));
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)(lVar23 + 0x940));
    uStack_90 = 0x140c0857c;
    pdb_140a79030(param_4,1,*(longlong *)(lVar23 + 0x930),
                  *(longlong *)(lVar23 + 0x930) + *(longlong *)(lVar23 + 0x938) * 0xc);
    puVar27 = &UNK_14331c8b0;
    uStack_90 = 0x140c0858c;
    puVar22 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c8b0);
    if (puVar22 == (undefined8 *)0x0) {
LAB_140c085c0:
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c085cc;
      pdb_142dc8150(&UNK_1430683e0);
    }
    uStack_90 = 0x140c0859b;
    lVar23 = (**(code **)(puVar22[1] + 0x18))(*puVar22);
    if (lVar23 == 0) goto LAB_140c085c0;
  }
  else {
    if (*(ulonglong *)(lVar23 + 0x938) < 2) {
      return param_1;
    }
    *(undefined4 *)param_3[0x16] = *(undefined4 *)((longlong)param_3 + 0xbc);
    lVar32 = param_3[0x14];
    lVar24 = *(longlong *)(lVar32 + 0x30);
    uVar6 = *(undefined8 *)(lVar32 + 0x40);
    if (lVar24 == *(longlong *)(lVar32 + 0x20)) {
      uStack_90 = 0x140c075d2;
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
      uStack_90 = 0x140c07612;
      pdb_142d7e8a0(lVar32 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar32 + 0x28) + lVar24 * 8) = uVar6;
    *(longlong *)(lVar32 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar32 + 0x40) = *(longlong *)(lVar32 + 0x40) + 1;
    uVar36 = *(ulonglong *)(lVar23 + 0x958);
    uVar25 = *(ulonglong *)(lVar23 + 0x960);
    uVar18 = *(ulonglong *)(lVar23 + 0x968);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0x950)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x978);
    uVar17 = *(uint *)(lVar23 + 0x980);
    uVar8 = *(uint *)(lVar23 + 0x984);
    uVar9 = *(uint *)(lVar23 + 0x988);
    uVar10 = *(uint *)(lVar23 + 0x98c);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar23 + 0x970) | *(ulonglong *)(param_4 + 0xb8)
    ;
    *(ulonglong *)(param_4 + 0xc0) = uVar36 | *(ulonglong *)(param_4 + 0xc0);
    *(uint *)(param_4 + 200) = uVar17 | *(uint *)(param_4 + 200);
    *(uint *)(param_4 + 0xcc) = uVar8 | *(uint *)(param_4 + 0xcc);
    *(uint *)(param_4 + 0xd0) = uVar9 | *(uint *)(param_4 + 0xd0);
    *(uint *)(param_4 + 0xd4) = uVar10 | *(uint *)(param_4 + 0xd4);
    uVar36 = *(ulonglong *)(lVar23 + 0x998);
    uVar25 = *(ulonglong *)(lVar23 + 0x9a0);
    uVar18 = *(ulonglong *)(lVar23 + 0x9a8);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0x990)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x9b8);
    uVar25 = *(ulonglong *)(lVar23 + 0x9c0);
    uVar18 = *(ulonglong *)(lVar23 + 0x9c8);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0x9b0)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x9d8);
    uVar25 = *(ulonglong *)(lVar23 + 0x9e0);
    uVar18 = *(ulonglong *)(lVar23 + 0x9e8);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0x9d0);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x9f8);
    uVar25 = *(ulonglong *)(lVar23 + 0xa00);
    uVar18 = *(ulonglong *)(lVar23 + 0xa08);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0x9f0);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa18);
    uVar25 = *(ulonglong *)(lVar23 + 0xa20);
    uVar18 = *(ulonglong *)(lVar23 + 0xa28);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0xa10);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa38);
    uVar25 = *(ulonglong *)(lVar23 + 0xa40);
    uVar18 = *(ulonglong *)(lVar23 + 0xa48);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0xa30);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa58);
    uVar25 = *(ulonglong *)(lVar23 + 0xa60);
    uVar18 = *(ulonglong *)(lVar23 + 0xa68);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0xa50);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa78);
    uVar25 = *(ulonglong *)(lVar23 + 0xa80);
    uVar18 = *(ulonglong *)(lVar23 + 0xa88);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0xa70);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xa98);
    uVar25 = *(ulonglong *)(lVar23 + 0xaa0);
    uVar18 = *(ulonglong *)(lVar23 + 0xaa8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0xa90);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xab8);
    uVar25 = *(ulonglong *)(lVar23 + 0xac0);
    uVar18 = *(ulonglong *)(lVar23 + 0xac8);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0xab0);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xad8);
    uVar25 = *(ulonglong *)(lVar23 + 0xae0);
    uVar18 = *(ulonglong *)(lVar23 + 0xae8);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0xad0);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xaf8);
    uVar25 = *(ulonglong *)(lVar23 + 0xb00);
    uVar18 = *(ulonglong *)(lVar23 + 0xb08);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0xaf0);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0xb18);
    uVar25 = *(ulonglong *)(lVar23 + 0xb20);
    uVar18 = *(ulonglong *)(lVar23 + 0xb28);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0xb10);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar18 = *(ulonglong *)(lVar23 + 0xb38);
    uVar36 = *(ulonglong *)(lVar23 + 0xb40);
    uVar25 = *(ulonglong *)(lVar23 + 0xb48);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 0xb30);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar18;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar36;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar25;
    uStack_90 = 0x140c07959;
    pub_142e32780(lVar23 + 0x950,0,0x200);
    uStack_90 = 0x140c07961;
    pdb_140a79cd0(param_4);
    puVar27 = &UNK_14331c8b0;
    uStack_90 = 0x140c07971;
    puVar22 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c8b0);
    if (puVar22 == (undefined8 *)0x0) {
LAB_140c07989:
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c07995;
      pdb_142dc8150(&UNK_1430683f8);
    }
    uStack_90 = 0x140c07980;
    lVar23 = (**(code **)(puVar22[1] + 0x18))(*puVar22);
    if (lVar23 == 0) goto LAB_140c07989;
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

