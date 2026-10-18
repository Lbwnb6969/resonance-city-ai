// VA 0x140c06250, PDB extent 4541 bytes
// country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::Cobblestone1RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$0<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::PathRaster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$1<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::PathRaster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$2<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::PathRaster> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::Cobblestone1RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$0<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::PathRaster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$1<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::PathRaster>,country_core::systems::paths::draw_path::erase_other_path_variants::closure_env$2<country_core::resources::world_raster_defs::Cobblestone1Raster,country_core::resources::world_raster_defs::Cobblestone2Raster,country_core::resources::world_raster_defs::PathRaster>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 4541 */

uint * pdb_140c06250(uint *param_1,float *param_2,longlong *param_3,longlong param_4)

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
    uStack_90 = 0x140c063d2;
    puVar20 = (uint *)pdb_140bd6210(lVar23 + 0x470,&uStack_48,(char)param_1[3],param_1[2]);
    return puVar20;
  }
  if ((int)lVar32 == 1) {
    lVar32 = *(longlong *)(lVar23 + 0x4a8);
    if ((lVar32 == 0) || (*(longlong *)(lVar23 + 0x4a0) + lVar32 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c067f1;
      pdb_142dc8150(&UNK_143064978);
    }
    puVar20 = (uint *)(*(longlong *)(lVar23 + 0x4a0) + lVar32 * 0xc);
    if (SQRT((param_2[2] - (float)puVar20[-1]) * (param_2[2] - (float)puVar20[-1]) +
             (param_2[1] - (float)puVar20[-2]) * (param_2[1] - (float)puVar20[-2]) +
             (*param_2 - (float)puVar20[-3]) * (*param_2 - (float)puVar20[-3])) <= _DAT_142e37870) {
      return puVar20;
    }
    uStack_90 = 0x140c06323;
    pdb_140bd6640();
    *(undefined8 *)(lVar23 + 0x4c8) = 0;
    lVar32 = *(longlong *)(lVar23 + 0x488);
    uVar36 = *(ulonglong *)(lVar23 + 0x490);
    if (*(ulonglong *)(lVar23 + 0x4b8) < uVar36) {
      lStack_68 = 0xc;
      uStack_90 = 0x140c06810;
      pdb_142d7f1b0(lVar23 + 0x4b8,0,uVar36,4);
      lVar21 = *(longlong *)(lVar23 + 0x4c8);
      lVar24 = *(longlong *)(lVar23 + 0x4c0);
      if (uVar36 == 1) goto LAB_140c0636c;
LAB_140c0682b:
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
      if ((uVar36 & 1) == 0) goto LAB_140c068ab;
      lVar26 = -lVar26;
LAB_140c0688e:
      *(undefined4 *)(lVar24 + 8 + lVar21 * 0xc) = *(undefined4 *)(lVar32 + 8 + lVar26 * 0xc);
      *(undefined8 *)(lVar24 + lVar21 * 0xc) = *(undefined8 *)(lVar32 + lVar26 * 0xc);
      lVar21 = lVar21 + 1;
    }
    else {
      lVar21 = 0;
      if (uVar36 != 0) {
        lVar24 = *(longlong *)(lVar23 + 0x4c0);
        if (uVar36 != 1) goto LAB_140c0682b;
LAB_140c0636c:
        lVar26 = 0;
        goto LAB_140c0688e;
      }
    }
LAB_140c068ab:
    *(longlong *)(lVar23 + 0x4c8) = lVar21;
    uStack_90 = 0x140c068c5;
    pdb_140bd6350(*(undefined8 *)(lVar23 + 0x4a0),*(undefined8 *)(lVar23 + 0x4a8),lVar23 + 0x4b8);
    uStack_90 = 0x140c068e1;
    pdb_1419a60d0(*(undefined8 *)(lVar23 + 0x4c0),*(undefined8 *)(lVar23 + 0x4c8),10,0);
    uStack_90 = 0x140c068f8;
    pub_142e32780(lVar23 + 0x6e0,0,0x200);
    uStack_90 = 0x140c0691f;
    pdb_140a83c80(lVar23 + 0x6e0,*(longlong *)(lVar23 + 0x4c0),
                  *(longlong *)(lVar23 + 0x4c0) + *(longlong *)(lVar23 + 0x4c8) * 0xc,
                  *(undefined4 *)(lVar23 + 0x4d0));
    uVar36 = *(ulonglong *)(lVar23 + 0x6e8);
    uVar25 = *(ulonglong *)(lVar23 + 0x6f0);
    uVar18 = *(ulonglong *)(lVar23 + 0x6f8);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0x6e0)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x708);
    uVar25 = *(ulonglong *)(lVar23 + 0x710);
    uVar18 = *(ulonglong *)(lVar23 + 0x718);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar23 + 0x700) | *(ulonglong *)(param_4 + 0xb8)
    ;
    *(ulonglong *)(param_4 + 0xc0) = uVar36 | *(ulonglong *)(param_4 + 0xc0);
    *(ulonglong *)(param_4 + 200) = uVar25 | *(ulonglong *)(param_4 + 200);
    *(ulonglong *)(param_4 + 0xd0) = uVar18 | *(ulonglong *)(param_4 + 0xd0);
    uVar36 = *(ulonglong *)(lVar23 + 0x728);
    uVar25 = *(ulonglong *)(lVar23 + 0x730);
    uVar18 = *(ulonglong *)(lVar23 + 0x738);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0x720)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x748);
    uVar25 = *(ulonglong *)(lVar23 + 0x750);
    uVar18 = *(ulonglong *)(lVar23 + 0x758);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0x740)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x768);
    uVar25 = *(ulonglong *)(lVar23 + 0x770);
    uVar18 = *(ulonglong *)(lVar23 + 0x778);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0x760);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x788);
    uVar25 = *(ulonglong *)(lVar23 + 0x790);
    uVar18 = *(ulonglong *)(lVar23 + 0x798);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0x780);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x7a8);
    uVar25 = *(ulonglong *)(lVar23 + 0x7b0);
    uVar18 = *(ulonglong *)(lVar23 + 0x7b8);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0x7a0);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x7c8);
    uVar25 = *(ulonglong *)(lVar23 + 2000);
    uVar18 = *(ulonglong *)(lVar23 + 0x7d8);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0x7c0);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x7e8);
    uVar25 = *(ulonglong *)(lVar23 + 0x7f0);
    uVar18 = *(ulonglong *)(lVar23 + 0x7f8);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0x7e0);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x808);
    uVar25 = *(ulonglong *)(lVar23 + 0x810);
    uVar18 = *(ulonglong *)(lVar23 + 0x818);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0x800);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x828);
    uVar25 = *(ulonglong *)(lVar23 + 0x830);
    uVar18 = *(ulonglong *)(lVar23 + 0x838);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0x820);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x848);
    uVar25 = *(ulonglong *)(lVar23 + 0x850);
    uVar18 = *(ulonglong *)(lVar23 + 0x858);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0x840);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x868);
    uVar25 = *(ulonglong *)(lVar23 + 0x870);
    uVar18 = *(ulonglong *)(lVar23 + 0x878);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0x860);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x888);
    uVar25 = *(ulonglong *)(lVar23 + 0x890);
    uVar18 = *(ulonglong *)(lVar23 + 0x898);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0x880);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x8a8);
    uVar25 = *(ulonglong *)(lVar23 + 0x8b0);
    uVar18 = *(ulonglong *)(lVar23 + 0x8b8);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0x8a0);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x8c8);
    uVar25 = *(ulonglong *)(lVar23 + 0x8d0);
    uVar18 = *(ulonglong *)(lVar23 + 0x8d8);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 0x8c0);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar36;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x4e8);
    uVar25 = *(ulonglong *)(lVar23 + 0x4f0);
    uVar18 = *(ulonglong *)(lVar23 + 0x4f8);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0x4e0)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x508);
    uVar25 = *(ulonglong *)(lVar23 + 0x510);
    uVar18 = *(ulonglong *)(lVar23 + 0x518);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(param_4 + 0xb8) | *(ulonglong *)(lVar23 + 0x500)
    ;
    *(ulonglong *)(param_4 + 0xc0) = *(ulonglong *)(param_4 + 0xc0) | uVar36;
    *(ulonglong *)(param_4 + 200) = *(ulonglong *)(param_4 + 200) | uVar25;
    *(ulonglong *)(param_4 + 0xd0) = *(ulonglong *)(param_4 + 0xd0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x528);
    uVar25 = *(ulonglong *)(lVar23 + 0x530);
    uVar18 = *(ulonglong *)(lVar23 + 0x538);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0x520)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x548);
    uVar25 = *(ulonglong *)(lVar23 + 0x550);
    uVar18 = *(ulonglong *)(lVar23 + 0x558);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0x540)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x568);
    uVar25 = *(ulonglong *)(lVar23 + 0x570);
    uVar18 = *(ulonglong *)(lVar23 + 0x578);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0x560);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x588);
    uVar25 = *(ulonglong *)(lVar23 + 0x590);
    uVar18 = *(ulonglong *)(lVar23 + 0x598);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0x580);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x5a8);
    uVar25 = *(ulonglong *)(lVar23 + 0x5b0);
    uVar18 = *(ulonglong *)(lVar23 + 0x5b8);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0x5a0);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x5c8);
    uVar25 = *(ulonglong *)(lVar23 + 0x5d0);
    uVar18 = *(ulonglong *)(lVar23 + 0x5d8);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0x5c0);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x5e8);
    uVar25 = *(ulonglong *)(lVar23 + 0x5f0);
    uVar18 = *(ulonglong *)(lVar23 + 0x5f8);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0x5e0);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x608);
    uVar25 = *(ulonglong *)(lVar23 + 0x610);
    uVar18 = *(ulonglong *)(lVar23 + 0x618);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0x600);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x628);
    uVar25 = *(ulonglong *)(lVar23 + 0x630);
    uVar18 = *(ulonglong *)(lVar23 + 0x638);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0x620);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x648);
    uVar25 = *(ulonglong *)(lVar23 + 0x650);
    uVar18 = *(ulonglong *)(lVar23 + 0x658);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0x640);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x668);
    uVar25 = *(ulonglong *)(lVar23 + 0x670);
    uVar18 = *(ulonglong *)(lVar23 + 0x678);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0x660);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x688);
    uVar25 = *(ulonglong *)(lVar23 + 0x690);
    uVar18 = *(ulonglong *)(lVar23 + 0x698);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0x680);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x6a8);
    uVar25 = *(ulonglong *)(lVar23 + 0x6b0);
    uVar18 = *(ulonglong *)(lVar23 + 0x6b8);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0x6a0);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x6c8);
    uVar25 = *(ulonglong *)(lVar23 + 0x6d0);
    uVar18 = *(ulonglong *)(lVar23 + 0x6d8);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 0x6c0);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar36;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
    uVar6 = *(undefined8 *)(lVar23 + 0x6e0);
    uVar13 = *(undefined8 *)(lVar23 + 0x6e8);
    uVar14 = *(undefined8 *)(lVar23 + 0x6f0);
    uVar15 = *(undefined8 *)(lVar23 + 0x6f8);
    *(undefined8 *)(lVar23 + 0x6e0) = *(undefined8 *)(lVar23 + 0x4e0);
    *(undefined8 *)(lVar23 + 0x6e8) = *(undefined8 *)(lVar23 + 0x4e8);
    *(undefined8 *)(lVar23 + 0x6f0) = *(undefined8 *)(lVar23 + 0x4f0);
    *(undefined8 *)(lVar23 + 0x6f8) = *(undefined8 *)(lVar23 + 0x4f8);
    *(undefined8 *)(lVar23 + 0x4e0) = uVar6;
    *(undefined8 *)(lVar23 + 0x4e8) = uVar13;
    *(undefined8 *)(lVar23 + 0x4f0) = uVar14;
    *(undefined8 *)(lVar23 + 0x4f8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x700);
    uVar13 = *(undefined8 *)(lVar23 + 0x708);
    uVar14 = *(undefined8 *)(lVar23 + 0x710);
    uVar15 = *(undefined8 *)(lVar23 + 0x718);
    *(undefined8 *)(lVar23 + 0x700) = *(undefined8 *)(lVar23 + 0x500);
    *(undefined8 *)(lVar23 + 0x708) = *(undefined8 *)(lVar23 + 0x508);
    *(undefined8 *)(lVar23 + 0x710) = *(undefined8 *)(lVar23 + 0x510);
    *(undefined8 *)(lVar23 + 0x718) = *(undefined8 *)(lVar23 + 0x518);
    *(undefined8 *)(lVar23 + 0x500) = uVar6;
    *(undefined8 *)(lVar23 + 0x508) = uVar13;
    *(undefined8 *)(lVar23 + 0x510) = uVar14;
    *(undefined8 *)(lVar23 + 0x518) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x720);
    uVar13 = *(undefined8 *)(lVar23 + 0x728);
    uVar14 = *(undefined8 *)(lVar23 + 0x730);
    uVar15 = *(undefined8 *)(lVar23 + 0x738);
    *(undefined8 *)(lVar23 + 0x720) = *(undefined8 *)(lVar23 + 0x520);
    *(undefined8 *)(lVar23 + 0x728) = *(undefined8 *)(lVar23 + 0x528);
    *(undefined8 *)(lVar23 + 0x730) = *(undefined8 *)(lVar23 + 0x530);
    *(undefined8 *)(lVar23 + 0x738) = *(undefined8 *)(lVar23 + 0x538);
    *(undefined8 *)(lVar23 + 0x520) = uVar6;
    *(undefined8 *)(lVar23 + 0x528) = uVar13;
    *(undefined8 *)(lVar23 + 0x530) = uVar14;
    *(undefined8 *)(lVar23 + 0x538) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x740);
    uVar13 = *(undefined8 *)(lVar23 + 0x748);
    uVar14 = *(undefined8 *)(lVar23 + 0x750);
    uVar15 = *(undefined8 *)(lVar23 + 0x758);
    *(undefined8 *)(lVar23 + 0x740) = *(undefined8 *)(lVar23 + 0x540);
    *(undefined8 *)(lVar23 + 0x748) = *(undefined8 *)(lVar23 + 0x548);
    *(undefined8 *)(lVar23 + 0x750) = *(undefined8 *)(lVar23 + 0x550);
    *(undefined8 *)(lVar23 + 0x758) = *(undefined8 *)(lVar23 + 0x558);
    *(undefined8 *)(lVar23 + 0x540) = uVar6;
    *(undefined8 *)(lVar23 + 0x548) = uVar13;
    *(undefined8 *)(lVar23 + 0x550) = uVar14;
    *(undefined8 *)(lVar23 + 0x558) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x760);
    uVar13 = *(undefined8 *)(lVar23 + 0x768);
    uVar14 = *(undefined8 *)(lVar23 + 0x770);
    uVar15 = *(undefined8 *)(lVar23 + 0x778);
    *(undefined8 *)(lVar23 + 0x760) = *(undefined8 *)(lVar23 + 0x560);
    *(undefined8 *)(lVar23 + 0x768) = *(undefined8 *)(lVar23 + 0x568);
    *(undefined8 *)(lVar23 + 0x770) = *(undefined8 *)(lVar23 + 0x570);
    *(undefined8 *)(lVar23 + 0x778) = *(undefined8 *)(lVar23 + 0x578);
    *(undefined8 *)(lVar23 + 0x560) = uVar6;
    *(undefined8 *)(lVar23 + 0x568) = uVar13;
    *(undefined8 *)(lVar23 + 0x570) = uVar14;
    *(undefined8 *)(lVar23 + 0x578) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x780);
    uVar13 = *(undefined8 *)(lVar23 + 0x788);
    uVar14 = *(undefined8 *)(lVar23 + 0x790);
    uVar15 = *(undefined8 *)(lVar23 + 0x798);
    *(undefined8 *)(lVar23 + 0x780) = *(undefined8 *)(lVar23 + 0x580);
    *(undefined8 *)(lVar23 + 0x788) = *(undefined8 *)(lVar23 + 0x588);
    *(undefined8 *)(lVar23 + 0x790) = *(undefined8 *)(lVar23 + 0x590);
    *(undefined8 *)(lVar23 + 0x798) = *(undefined8 *)(lVar23 + 0x598);
    *(undefined8 *)(lVar23 + 0x580) = uVar6;
    *(undefined8 *)(lVar23 + 0x588) = uVar13;
    *(undefined8 *)(lVar23 + 0x590) = uVar14;
    *(undefined8 *)(lVar23 + 0x598) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x7a0);
    uVar13 = *(undefined8 *)(lVar23 + 0x7a8);
    uVar14 = *(undefined8 *)(lVar23 + 0x7b0);
    uVar15 = *(undefined8 *)(lVar23 + 0x7b8);
    *(undefined8 *)(lVar23 + 0x7a0) = *(undefined8 *)(lVar23 + 0x5a0);
    *(undefined8 *)(lVar23 + 0x7a8) = *(undefined8 *)(lVar23 + 0x5a8);
    *(undefined8 *)(lVar23 + 0x7b0) = *(undefined8 *)(lVar23 + 0x5b0);
    *(undefined8 *)(lVar23 + 0x7b8) = *(undefined8 *)(lVar23 + 0x5b8);
    *(undefined8 *)(lVar23 + 0x5a0) = uVar6;
    *(undefined8 *)(lVar23 + 0x5a8) = uVar13;
    *(undefined8 *)(lVar23 + 0x5b0) = uVar14;
    *(undefined8 *)(lVar23 + 0x5b8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x7c0);
    uVar13 = *(undefined8 *)(lVar23 + 0x7c8);
    uVar14 = *(undefined8 *)(lVar23 + 2000);
    uVar15 = *(undefined8 *)(lVar23 + 0x7d8);
    *(undefined8 *)(lVar23 + 0x7c0) = *(undefined8 *)(lVar23 + 0x5c0);
    *(undefined8 *)(lVar23 + 0x7c8) = *(undefined8 *)(lVar23 + 0x5c8);
    *(undefined8 *)(lVar23 + 2000) = *(undefined8 *)(lVar23 + 0x5d0);
    *(undefined8 *)(lVar23 + 0x7d8) = *(undefined8 *)(lVar23 + 0x5d8);
    *(undefined8 *)(lVar23 + 0x5c0) = uVar6;
    *(undefined8 *)(lVar23 + 0x5c8) = uVar13;
    *(undefined8 *)(lVar23 + 0x5d0) = uVar14;
    *(undefined8 *)(lVar23 + 0x5d8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x7e0);
    uVar13 = *(undefined8 *)(lVar23 + 0x7e8);
    uVar14 = *(undefined8 *)(lVar23 + 0x7f0);
    uVar15 = *(undefined8 *)(lVar23 + 0x7f8);
    *(undefined8 *)(lVar23 + 0x7e0) = *(undefined8 *)(lVar23 + 0x5e0);
    *(undefined8 *)(lVar23 + 0x7e8) = *(undefined8 *)(lVar23 + 0x5e8);
    *(undefined8 *)(lVar23 + 0x7f0) = *(undefined8 *)(lVar23 + 0x5f0);
    *(undefined8 *)(lVar23 + 0x7f8) = *(undefined8 *)(lVar23 + 0x5f8);
    *(undefined8 *)(lVar23 + 0x5e0) = uVar6;
    *(undefined8 *)(lVar23 + 0x5e8) = uVar13;
    *(undefined8 *)(lVar23 + 0x5f0) = uVar14;
    *(undefined8 *)(lVar23 + 0x5f8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x800);
    uVar13 = *(undefined8 *)(lVar23 + 0x808);
    uVar14 = *(undefined8 *)(lVar23 + 0x810);
    uVar15 = *(undefined8 *)(lVar23 + 0x818);
    *(undefined8 *)(lVar23 + 0x800) = *(undefined8 *)(lVar23 + 0x600);
    *(undefined8 *)(lVar23 + 0x808) = *(undefined8 *)(lVar23 + 0x608);
    *(undefined8 *)(lVar23 + 0x810) = *(undefined8 *)(lVar23 + 0x610);
    *(undefined8 *)(lVar23 + 0x818) = *(undefined8 *)(lVar23 + 0x618);
    *(undefined8 *)(lVar23 + 0x600) = uVar6;
    *(undefined8 *)(lVar23 + 0x608) = uVar13;
    *(undefined8 *)(lVar23 + 0x610) = uVar14;
    *(undefined8 *)(lVar23 + 0x618) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x820);
    uVar13 = *(undefined8 *)(lVar23 + 0x828);
    uVar14 = *(undefined8 *)(lVar23 + 0x830);
    uVar15 = *(undefined8 *)(lVar23 + 0x838);
    *(undefined8 *)(lVar23 + 0x820) = *(undefined8 *)(lVar23 + 0x620);
    *(undefined8 *)(lVar23 + 0x828) = *(undefined8 *)(lVar23 + 0x628);
    *(undefined8 *)(lVar23 + 0x830) = *(undefined8 *)(lVar23 + 0x630);
    *(undefined8 *)(lVar23 + 0x838) = *(undefined8 *)(lVar23 + 0x638);
    *(undefined8 *)(lVar23 + 0x620) = uVar6;
    *(undefined8 *)(lVar23 + 0x628) = uVar13;
    *(undefined8 *)(lVar23 + 0x630) = uVar14;
    *(undefined8 *)(lVar23 + 0x638) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x840);
    uVar13 = *(undefined8 *)(lVar23 + 0x848);
    uVar14 = *(undefined8 *)(lVar23 + 0x850);
    uVar15 = *(undefined8 *)(lVar23 + 0x858);
    *(undefined8 *)(lVar23 + 0x840) = *(undefined8 *)(lVar23 + 0x640);
    *(undefined8 *)(lVar23 + 0x848) = *(undefined8 *)(lVar23 + 0x648);
    *(undefined8 *)(lVar23 + 0x850) = *(undefined8 *)(lVar23 + 0x650);
    *(undefined8 *)(lVar23 + 0x858) = *(undefined8 *)(lVar23 + 0x658);
    *(undefined8 *)(lVar23 + 0x640) = uVar6;
    *(undefined8 *)(lVar23 + 0x648) = uVar13;
    *(undefined8 *)(lVar23 + 0x650) = uVar14;
    *(undefined8 *)(lVar23 + 0x658) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x860);
    uVar13 = *(undefined8 *)(lVar23 + 0x868);
    uVar14 = *(undefined8 *)(lVar23 + 0x870);
    uVar15 = *(undefined8 *)(lVar23 + 0x878);
    *(undefined8 *)(lVar23 + 0x860) = *(undefined8 *)(lVar23 + 0x660);
    *(undefined8 *)(lVar23 + 0x868) = *(undefined8 *)(lVar23 + 0x668);
    *(undefined8 *)(lVar23 + 0x870) = *(undefined8 *)(lVar23 + 0x670);
    *(undefined8 *)(lVar23 + 0x878) = *(undefined8 *)(lVar23 + 0x678);
    *(undefined8 *)(lVar23 + 0x660) = uVar6;
    *(undefined8 *)(lVar23 + 0x668) = uVar13;
    *(undefined8 *)(lVar23 + 0x670) = uVar14;
    *(undefined8 *)(lVar23 + 0x678) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x880);
    uVar13 = *(undefined8 *)(lVar23 + 0x888);
    uVar14 = *(undefined8 *)(lVar23 + 0x890);
    uVar15 = *(undefined8 *)(lVar23 + 0x898);
    *(undefined8 *)(lVar23 + 0x880) = *(undefined8 *)(lVar23 + 0x680);
    *(undefined8 *)(lVar23 + 0x888) = *(undefined8 *)(lVar23 + 0x688);
    *(undefined8 *)(lVar23 + 0x890) = *(undefined8 *)(lVar23 + 0x690);
    *(undefined8 *)(lVar23 + 0x898) = *(undefined8 *)(lVar23 + 0x698);
    *(undefined8 *)(lVar23 + 0x680) = uVar6;
    *(undefined8 *)(lVar23 + 0x688) = uVar13;
    *(undefined8 *)(lVar23 + 0x690) = uVar14;
    *(undefined8 *)(lVar23 + 0x698) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x8a0);
    uVar13 = *(undefined8 *)(lVar23 + 0x8a8);
    uVar14 = *(undefined8 *)(lVar23 + 0x8b0);
    uVar15 = *(undefined8 *)(lVar23 + 0x8b8);
    *(undefined8 *)(lVar23 + 0x8a0) = *(undefined8 *)(lVar23 + 0x6a0);
    *(undefined8 *)(lVar23 + 0x8a8) = *(undefined8 *)(lVar23 + 0x6a8);
    *(undefined8 *)(lVar23 + 0x8b0) = *(undefined8 *)(lVar23 + 0x6b0);
    *(undefined8 *)(lVar23 + 0x8b8) = *(undefined8 *)(lVar23 + 0x6b8);
    *(undefined8 *)(lVar23 + 0x6a0) = uVar6;
    *(undefined8 *)(lVar23 + 0x6a8) = uVar13;
    *(undefined8 *)(lVar23 + 0x6b0) = uVar14;
    *(undefined8 *)(lVar23 + 0x6b8) = uVar15;
    uVar6 = *(undefined8 *)(lVar23 + 0x8c0);
    uVar13 = *(undefined8 *)(lVar23 + 0x8c8);
    uVar11 = *(undefined4 *)(lVar23 + 0x8d0);
    uVar12 = *(undefined4 *)(lVar23 + 0x8d8);
    *(undefined8 *)(lVar23 + 0x8c0) = *(undefined8 *)(lVar23 + 0x6c0);
    *(undefined8 *)(lVar23 + 0x8c8) = *(undefined8 *)(lVar23 + 0x6c8);
    *(undefined8 *)(lVar23 + 0x8d0) = *(undefined8 *)(lVar23 + 0x6d0);
    *(undefined8 *)(lVar23 + 0x8d8) = *(undefined8 *)(lVar23 + 0x6d8);
    *(undefined8 *)(lVar23 + 0x6c0) = uVar6;
    *(undefined8 *)(lVar23 + 0x6c8) = uVar13;
    *(undefined4 *)(lVar23 + 0x6d0) = uVar11;
    *(undefined4 *)(lVar23 + 0x6d4) = *(undefined4 *)(lVar23 + 0x8d4);
    *(undefined4 *)(lVar23 + 0x6d8) = uVar12;
    *(undefined4 *)(lVar23 + 0x6dc) = *(undefined4 *)(lVar23 + 0x8dc);
    uStack_90 = 0x140c07367;
    pdb_140a79940(param_4);
    puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,*(undefined4 *)(lVar23 + 0x4dc));
    plStack_58 = (longlong *)CONCAT44(plStack_58._4_4_,*(undefined4 *)(lVar23 + 0x4d8));
    uStack_60 = CONCAT71(uStack_60._1_7_,*(undefined1 *)(lVar23 + 0x4d4));
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)(lVar23 + 0x4d0));
    uStack_90 = 0x140c073bc;
    pdb_140a79030(param_4,1,*(longlong *)(lVar23 + 0x4c0),
                  *(longlong *)(lVar23 + 0x4c0) + *(longlong *)(lVar23 + 0x4c8) * 0xc);
    puVar27 = &UNK_14331c9a8;
    uStack_90 = 0x140c073cc;
    puVar22 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c9a8);
    if (puVar22 == (undefined8 *)0x0) {
LAB_140c07400:
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c0740c;
      pdb_142dc8150(&UNK_1430683e0);
    }
    uStack_90 = 0x140c073db;
    lVar23 = (**(code **)(puVar22[1] + 0x18))(*puVar22);
    if (lVar23 == 0) goto LAB_140c07400;
  }
  else {
    if (*(ulonglong *)(lVar23 + 0x4c8) < 2) {
      return param_1;
    }
    *(undefined4 *)param_3[0x16] = *(undefined4 *)((longlong)param_3 + 0xbc);
    lVar32 = param_3[0x14];
    lVar24 = *(longlong *)(lVar32 + 0x30);
    uVar6 = *(undefined8 *)(lVar32 + 0x40);
    if (lVar24 == *(longlong *)(lVar32 + 0x20)) {
      uStack_90 = 0x140c06412;
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
      uStack_90 = 0x140c06452;
      pdb_142d7e8a0(lVar32 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar32 + 0x28) + lVar24 * 8) = uVar6;
    *(longlong *)(lVar32 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar32 + 0x40) = *(longlong *)(lVar32 + 0x40) + 1;
    uVar36 = *(ulonglong *)(lVar23 + 0x4e8);
    uVar25 = *(ulonglong *)(lVar23 + 0x4f0);
    uVar18 = *(ulonglong *)(lVar23 + 0x4f8);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar23 + 0x4e0)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar36;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x508);
    uVar17 = *(uint *)(lVar23 + 0x510);
    uVar8 = *(uint *)(lVar23 + 0x514);
    uVar9 = *(uint *)(lVar23 + 0x518);
    uVar10 = *(uint *)(lVar23 + 0x51c);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar23 + 0x500) | *(ulonglong *)(param_4 + 0xb8)
    ;
    *(ulonglong *)(param_4 + 0xc0) = uVar36 | *(ulonglong *)(param_4 + 0xc0);
    *(uint *)(param_4 + 200) = uVar17 | *(uint *)(param_4 + 200);
    *(uint *)(param_4 + 0xcc) = uVar8 | *(uint *)(param_4 + 0xcc);
    *(uint *)(param_4 + 0xd0) = uVar9 | *(uint *)(param_4 + 0xd0);
    *(uint *)(param_4 + 0xd4) = uVar10 | *(uint *)(param_4 + 0xd4);
    uVar36 = *(ulonglong *)(lVar23 + 0x528);
    uVar25 = *(ulonglong *)(lVar23 + 0x530);
    uVar18 = *(ulonglong *)(lVar23 + 0x538);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar23 + 0x520)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar36;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x548);
    uVar25 = *(ulonglong *)(lVar23 + 0x550);
    uVar18 = *(ulonglong *)(lVar23 + 0x558);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar23 + 0x540)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar36;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x568);
    uVar25 = *(ulonglong *)(lVar23 + 0x570);
    uVar18 = *(ulonglong *)(lVar23 + 0x578);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar23 + 0x560);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar36;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x588);
    uVar25 = *(ulonglong *)(lVar23 + 0x590);
    uVar18 = *(ulonglong *)(lVar23 + 0x598);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar23 + 0x580);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar36;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x5a8);
    uVar25 = *(ulonglong *)(lVar23 + 0x5b0);
    uVar18 = *(ulonglong *)(lVar23 + 0x5b8);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar23 + 0x5a0);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar36;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x5c8);
    uVar25 = *(ulonglong *)(lVar23 + 0x5d0);
    uVar18 = *(ulonglong *)(lVar23 + 0x5d8);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar23 + 0x5c0);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar36;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x5e8);
    uVar25 = *(ulonglong *)(lVar23 + 0x5f0);
    uVar18 = *(ulonglong *)(lVar23 + 0x5f8);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar23 + 0x5e0);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar36;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x608);
    uVar25 = *(ulonglong *)(lVar23 + 0x610);
    uVar18 = *(ulonglong *)(lVar23 + 0x618);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar23 + 0x600);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar36;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x628);
    uVar25 = *(ulonglong *)(lVar23 + 0x630);
    uVar18 = *(ulonglong *)(lVar23 + 0x638);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar23 + 0x620);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar36;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x648);
    uVar25 = *(ulonglong *)(lVar23 + 0x650);
    uVar18 = *(ulonglong *)(lVar23 + 0x658);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar23 + 0x640);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar36;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x668);
    uVar25 = *(ulonglong *)(lVar23 + 0x670);
    uVar18 = *(ulonglong *)(lVar23 + 0x678);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar23 + 0x660);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar36;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x688);
    uVar25 = *(ulonglong *)(lVar23 + 0x690);
    uVar18 = *(ulonglong *)(lVar23 + 0x698);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar23 + 0x680);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar36;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar36 = *(ulonglong *)(lVar23 + 0x6a8);
    uVar25 = *(ulonglong *)(lVar23 + 0x6b0);
    uVar18 = *(ulonglong *)(lVar23 + 0x6b8);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar23 + 0x6a0);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar36;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar18 = *(ulonglong *)(lVar23 + 0x6c8);
    uVar36 = *(ulonglong *)(lVar23 + 0x6d0);
    uVar25 = *(ulonglong *)(lVar23 + 0x6d8);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar23 + 0x6c0);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar18;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar36;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar25;
    uStack_90 = 0x140c06799;
    pub_142e32780(lVar23 + 0x4e0,0,0x200);
    uStack_90 = 0x140c067a1;
    pdb_140a79cd0(param_4);
    puVar27 = &UNK_14331c9a8;
    uStack_90 = 0x140c067b1;
    puVar22 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c9a8);
    if (puVar22 == (undefined8 *)0x0) {
LAB_140c067c9:
                    /* WARNING: Subroutine does not return */
      uStack_90 = 0x140c067d5;
      pdb_142dc8150(&UNK_1430683f8);
    }
    uStack_90 = 0x140c067c0;
    lVar23 = (**(code **)(puVar22[1] + 0x18))(*puVar22);
    if (lVar23 == 0) goto LAB_140c067c9;
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

