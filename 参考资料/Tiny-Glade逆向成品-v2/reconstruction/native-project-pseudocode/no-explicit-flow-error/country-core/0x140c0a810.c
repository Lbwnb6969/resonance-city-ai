// VA 0x140c0a810, PDB extent 4820 bytes
// country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::GardenRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::garden::draw_garden::draw_garden::closure_env$1,country_core::systems::garden::draw_garden::draw_garden::closure_env$2,country_core::systems::garden::draw_garden::draw_garden::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::GardenRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::garden::draw_garden::draw_garden::closure_env$1,country_core::systems::garden::draw_garden::draw_garden::closure_env$2,country_core::systems::garden::draw_garden::draw_garden::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 4820 */

uint * pdb_140c0a810(uint *param_1,float *param_2,longlong *param_3,longlong param_4,
                    longlong *param_5,longlong *param_6,longlong *param_7)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined *puVar26;
  longlong lVar27;
  byte *pbVar28;
  undefined8 uVar29;
  byte *pbVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  longlong lVar33;
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
  undefined8 uStack_268;
  undefined8 uStack_260;
  longlong lStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  undefined8 uStack_c0;
  undefined8 uStack_98;
  uint uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  float *pfStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = (longlong *)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uStack_50 = (uint *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar20 = *param_3;
  uVar16 = *param_1;
  lVar23 = 0;
  if (1 < (ulonglong)uVar16) {
    lVar23 = (ulonglong)uVar16 - 1;
  }
  if (lVar23 == 0) {
    *(undefined4 *)param_3[6] = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(undefined1 *)(param_3[4] + 0x1e0) = 1;
    plVar18 = (longlong *)&UNK_143044340;
    if (*(char *)param_3[8] != '\0') {
      plVar18 = (longlong *)((char *)param_3[8] + 4);
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,(int)plVar18[1]);
    lStack_68 = *plVar18;
    uStack_90 = param_1[1];
    uStack_98 = CONCAT44(uStack_98._4_4_,uVar16);
    uStack_c0 = 0x140c0a9b6;
    puVar19 = (uint *)pdb_140bd6210(lVar20 + 0x1630,&lStack_68,(char)param_1[3],param_1[2]);
    return puVar19;
  }
  if ((int)lVar23 != 1) {
    if (*(ulonglong *)(lVar20 + 0x1688) < 2) {
      return param_1;
    }
    *(undefined4 *)param_3[0x16] = *(undefined4 *)((longlong)param_3 + 0xbc);
    lVar23 = param_3[0x14];
    lVar24 = *(longlong *)(lVar23 + 0x30);
    uVar29 = *(undefined8 *)(lVar23 + 0x40);
    if (lVar24 == *(longlong *)(lVar23 + 0x20)) {
      uStack_c0 = 0x140c0a9f6;
      pdb_142d7e8a0(lVar23 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar23 + 0x28) + lVar24 * 8) = uVar29;
    *(longlong *)(lVar23 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar23 = *param_7;
    lVar24 = *(longlong *)(lVar23 + 0x30);
    uVar29 = *(undefined8 *)(lVar23 + 0x40);
    if (lVar24 == *(longlong *)(lVar23 + 0x20)) {
      uStack_c0 = 0x140c0aa2c;
      pdb_142d7e8a0(lVar23 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar23 + 0x28) + lVar24 * 8) = uVar29;
    *(longlong *)(lVar23 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
    *(undefined4 *)param_3[0x12] = *(undefined4 *)((longlong)param_3 + 0x9c);
    lVar23 = param_3[0x10];
    lVar24 = *(longlong *)(lVar23 + 0x30);
    uVar29 = *(undefined8 *)(lVar23 + 0x40);
    if (lVar24 == *(longlong *)(lVar23 + 0x20)) {
      uStack_c0 = 0x140c0aa6c;
      pdb_142d7e8a0(lVar23 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar23 + 0x28) + lVar24 * 8) = uVar29;
    *(longlong *)(lVar23 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
    uVar35 = *(ulonglong *)(lVar20 + 0x16a8);
    uVar25 = *(ulonglong *)(lVar20 + 0x16b0);
    uVar17 = *(ulonglong *)(lVar20 + 0x16b8);
    *(ulonglong *)(param_4 + 0x98) =
         *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar20 + 0x16a0);
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x16c8);
    uVar16 = *(uint *)(lVar20 + 0x16d0);
    uVar7 = *(uint *)(lVar20 + 0x16d4);
    uVar8 = *(uint *)(lVar20 + 0x16d8);
    uVar9 = *(uint *)(lVar20 + 0x16dc);
    *(ulonglong *)(param_4 + 0xb8) =
         *(ulonglong *)(lVar20 + 0x16c0) | *(ulonglong *)(param_4 + 0xb8);
    *(ulonglong *)(param_4 + 0xc0) = uVar35 | *(ulonglong *)(param_4 + 0xc0);
    *(uint *)(param_4 + 200) = uVar16 | *(uint *)(param_4 + 200);
    *(uint *)(param_4 + 0xcc) = uVar7 | *(uint *)(param_4 + 0xcc);
    *(uint *)(param_4 + 0xd0) = uVar8 | *(uint *)(param_4 + 0xd0);
    *(uint *)(param_4 + 0xd4) = uVar9 | *(uint *)(param_4 + 0xd4);
    uVar35 = *(ulonglong *)(lVar20 + 0x16e8);
    uVar25 = *(ulonglong *)(lVar20 + 0x16f0);
    uVar17 = *(ulonglong *)(lVar20 + 0x16f8);
    *(ulonglong *)(param_4 + 0xd8) =
         *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar20 + 0x16e0);
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1708);
    uVar25 = *(ulonglong *)(lVar20 + 0x1710);
    uVar17 = *(ulonglong *)(lVar20 + 0x1718);
    *(ulonglong *)(param_4 + 0xf8) =
         *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar20 + 0x1700);
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1728);
    uVar25 = *(ulonglong *)(lVar20 + 0x1730);
    uVar17 = *(ulonglong *)(lVar20 + 0x1738);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar20 + 0x1720);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1748);
    uVar25 = *(ulonglong *)(lVar20 + 0x1750);
    uVar17 = *(ulonglong *)(lVar20 + 0x1758);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar20 + 0x1740);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1768);
    uVar25 = *(ulonglong *)(lVar20 + 6000);
    uVar17 = *(ulonglong *)(lVar20 + 0x1778);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar20 + 0x1760);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1788);
    uVar25 = *(ulonglong *)(lVar20 + 0x1790);
    uVar17 = *(ulonglong *)(lVar20 + 0x1798);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar20 + 0x1780);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x17a8);
    uVar25 = *(ulonglong *)(lVar20 + 0x17b0);
    uVar17 = *(ulonglong *)(lVar20 + 0x17b8);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar20 + 0x17a0);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x17c8);
    uVar25 = *(ulonglong *)(lVar20 + 0x17d0);
    uVar17 = *(ulonglong *)(lVar20 + 0x17d8);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar20 + 0x17c0);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x17e8);
    uVar25 = *(ulonglong *)(lVar20 + 0x17f0);
    uVar17 = *(ulonglong *)(lVar20 + 0x17f8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar20 + 0x17e0);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1808);
    uVar25 = *(ulonglong *)(lVar20 + 0x1810);
    uVar17 = *(ulonglong *)(lVar20 + 0x1818);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar20 + 0x1800);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1828);
    uVar25 = *(ulonglong *)(lVar20 + 0x1830);
    uVar17 = *(ulonglong *)(lVar20 + 0x1838);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar20 + 0x1820);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1848);
    uVar25 = *(ulonglong *)(lVar20 + 0x1850);
    uVar17 = *(ulonglong *)(lVar20 + 0x1858);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar20 + 0x1840);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar17;
    uVar35 = *(ulonglong *)(lVar20 + 0x1868);
    uVar25 = *(ulonglong *)(lVar20 + 0x1870);
    uVar17 = *(ulonglong *)(lVar20 + 0x1878);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar20 + 0x1860);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar17;
    uVar17 = *(ulonglong *)(lVar20 + 0x1888);
    uVar35 = *(ulonglong *)(lVar20 + 0x1890);
    uVar25 = *(ulonglong *)(lVar20 + 0x1898);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar20 + 0x1880);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar17;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar35;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar25;
    uStack_c0 = 0x140c0adb3;
    pub_142e32780(lVar20 + 0x16a0,0,0x200);
    uStack_c0 = 0x140c0adbb;
    pdb_140a79cd0(param_4);
    puVar26 = &UNK_14331ca50;
    uStack_c0 = 0x140c0adcb;
    puVar22 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331ca50);
    if (puVar22 != (undefined8 *)0x0) {
      uStack_c0 = 0x140c0adde;
      lVar20 = (**(code **)(puVar22[1] + 0x18))(*puVar22);
      if (lVar20 != 0) {
        pbVar28 = *(byte **)(lVar20 + 8);
        pbVar36 = *(byte **)(lVar20 + 0x10);
        uStack_48 = 0xfffffffffffffffe;
        uVar35 = CONCAT71((int7)((ulonglong)puVar26 >> 8),1) & 0xffffffff;
        if (*(char *)(param_4 + 0x299) != '\0') {
          pub_142e32780(pbVar28,0,pbVar36);
          *(undefined1 *)(param_4 + 0x299) = 0;
        }
        *(char *)(param_4 + 0x298) = (char)uVar35;
        cVar15 = pdb_140e94b40();
        if (cVar15 == '\0') {
          lStack_68 = 0;
        }
        else {
          puVar26 = &UNK_1430423bf;
          pbVar30 = (byte *)0x82;
          uVar25 = 0x82;
          lVar20 = pdb_140a7a9e0(&UNK_1430423bf);
          if (lVar20 == 1) {
            if (0x82 < uVar25) {
LAB_140a78eb7:
              pdb_142dc8070(&UNK_1430423bf,0x82,0);
LAB_140a78ed7:
              pdb_142dc8070(&UNK_1430423bf,0x82);
              pcVar6 = (code *)swi(3);
              puVar19 = (uint *)(*pcVar6)();
              return puVar19;
            }
            puVar26 = &UNK_1430423bf;
            uVar17 = pdb_140a7a9e0(&UNK_1430423bf);
            if ((uVar17 & 1) != 0) {
              if (0x82 < uVar25 + 2) goto LAB_140a78ed7;
              pbVar30 = (byte *)(0x80 - uVar25);
              puVar26 = &UNK_1430423c1 + uVar25;
            }
          }
          puVar31 = &UNK_1430420e1;
          puVar34 = &UNK_1430420b0;
          do {
            bVar3 = puVar31[-1];
            uVar16 = (uint)(char)bVar3;
            uStack_50 = (uint *)pbVar36;
            if ((char)bVar3 < '\0') {
              bVar4 = puVar31[-2];
              if ((char)bVar4 < -0x40) {
                bVar5 = puVar31[-3];
                if ((char)bVar5 < -0x40) {
                  pbVar1 = puVar31 + -4;
                  puVar31 = puVar31 + -4;
                  uVar16 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
                }
                else {
                  puVar31 = puVar31 + -3;
                  uVar16 = bVar5 & 0xf;
                }
                uVar16 = bVar4 & 0x3f | uVar16 << 6;
              }
              else {
                puVar31 = puVar31 + -2;
                uVar16 = bVar4 & 0x1f;
              }
              uVar16 = (uint)(bVar3 & 0x3f) | uVar16 << 6;
              if (uVar16 != 0x5c) goto LAB_140a78c34;
LAB_140a78c4d:
              puVar34 = puVar31 + -0x1430420af;
              if ((undefined *)0x31 < puVar34) {
                pdb_142dc8070(&UNK_1430420b0,0x31,puVar34,0x31,&UNK_1430425b0);
                goto LAB_140a78eb7;
              }
              lVar20 = 0x31 - (longlong)puVar34;
              puVar34 = puVar31 + 1;
              goto LAB_140a78c70;
            }
            puVar31 = puVar31 + -1;
            if (uVar16 == 0x5c) goto LAB_140a78c4d;
LAB_140a78c34:
            if (uVar16 == 0x2f) goto LAB_140a78c4d;
          } while (puVar31 != &UNK_1430420b0);
          lVar20 = 0x31;
LAB_140a78c70:
          plVar18 = (longlong *)pdb_140e97000();
          if (((char)plVar18[0xd] != '\x01') &&
             (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 == (longlong *)0x0))
          goto LAB_140a78e63;
          if (*plVar18 != 0) goto LAB_140a78e33;
          *plVar18 = -1;
          uStack_58 = plVar18;
          uStack_60 = pdb_140e94f10(plVar18 + 1,puVar26,pbVar30,puVar34,lVar20,1,0);
          *uStack_58 = *uStack_58 + 1;
          lStack_68 = 1;
          pbVar36 = (byte *)uStack_50;
        }
        puVar22 = (undefined8 *)(param_4 + 0x20);
        puVar32 = (undefined8 *)(param_4 + 0x28);
        if ((char)uVar35 == '\0') {
          puVar32 = (undefined8 *)(param_4 + 0x10);
          puVar22 = (undefined8 *)(param_4 + 8);
        }
        uStack_270 = *puVar32;
        uStack_278 = *puVar22;
        uStack_268 = *(undefined8 *)(param_4 + 0x50);
        uStack_260 = *(undefined8 *)(param_4 + 0x58);
        uVar35 = param_4 + 0x98;
        lStack_258 = param_4 + 0x30;
        pbStack_250 = pbVar28;
        pbStack_248 = pbVar36;
        pdb_140a84210(uVar35,&uStack_278);
        if (-1 < *(longlong *)(param_4 + 0x60)) {
          pbVar30 = (byte *)(param_4 + 0x60);
          pub_142e32760(&uStack_278,uVar35,0x200);
          puVar19 = (uint *)pdb_1409c5460(pbVar30,&uStack_278);
          do {
            pbVar28 = (byte *)&uStack_278;
            *(undefined1 *)(param_4 + 0x29a) = 1;
            if (lStack_68 == 0) {
              return puVar19;
            }
            puVar19 = (uint *)pdb_140e97000();
            if ((char)puVar19[0x1a] != '\x01') goto LAB_140a78e3f;
            do {
              if (*(longlong *)puVar19 == 0) {
                puVar19[0] = 0xffffffff;
                puVar19[1] = 0xffffffff;
                uStack_50 = puVar19;
                pdb_140e95370(puVar19 + 2,uStack_60);
                *(longlong *)uStack_50 = *(longlong *)uStack_50 + 1;
                return uStack_50;
              }
LAB_140a78e33:
              puVar19 = (uint *)pdb_142dc8090(&UNK_143326a50);
LAB_140a78e3f:
              puVar19 = (uint *)pdb_142d8ec20(puVar19,0);
            } while (puVar19 != (uint *)0x0);
LAB_140a78e63:
            pdb_142dc7890(&UNK_143326860);
LAB_140a78e70:
            pdb_142dbd1a0(pbVar28);
LAB_140a78d80:
            pdb_140e9a150(pbVar28);
            uStack_50 = (uint *)pbVar28;
            pub_142e32760(&uStack_278,uVar35,0x200);
            pdb_1409c5460(pbVar30 + 0x18);
            pbVar30 = (byte *)uStack_50;
            pdb_140e9a350();
            puVar19 = (uint *)0x1;
            LOCK();
            bVar3 = *pbVar30;
            if (bVar3 == 1) {
              *pbVar30 = 0;
            }
            else {
              puVar19 = (uint *)(ulonglong)bVar3;
            }
            UNLOCK();
            if (bVar3 != 1) {
              puVar19 = (uint *)pdb_142dbcef0(pbVar30);
            }
          } while( true );
        }
        pbVar30 = *(byte **)(param_4 + 0x68);
        pbVar28 = pbVar30 + 0x10;
        LOCK();
        bVar37 = pbVar30[0x10] == 0;
        if (bVar37) {
          pbVar30[0x10] = 1;
        }
        UNLOCK();
        if (!bVar37) goto LAB_140a78e70;
        goto LAB_140a78d80;
      }
    }
                    /* WARNING: Subroutine does not return */
    uStack_c0 = 0x140c0bad7;
    pdb_142dc8150(&UNK_1430683f8);
  }
  lVar23 = *(longlong *)(lVar20 + 0x1668);
  if ((lVar23 == 0) || (*(longlong *)(lVar20 + 0x1660) + lVar23 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
    uStack_c0 = 0x140c0ae1a;
    pdb_142dc8150(&UNK_143064978);
  }
  puVar19 = (uint *)(*(longlong *)(lVar20 + 0x1660) + lVar23 * 0xc);
  if (SQRT((param_2[2] - (float)puVar19[-1]) * (param_2[2] - (float)puVar19[-1]) +
           (param_2[1] - (float)puVar19[-2]) * (param_2[1] - (float)puVar19[-2]) +
           (*param_2 - (float)puVar19[-3]) * (*param_2 - (float)puVar19[-3])) <= _DAT_142e37870) {
    return puVar19;
  }
  uStack_c0 = 0x140c0a907;
  pfStack_70 = param_2;
  pdb_140bd6640();
  *(undefined8 *)(lVar20 + 0x1688) = 0;
  lVar23 = *(longlong *)(lVar20 + 0x1648);
  uVar35 = *(ulonglong *)(lVar20 + 0x1650);
  if (*(ulonglong *)(lVar20 + 0x1678) < uVar35) {
    uStack_98 = 0xc;
    uStack_c0 = 0x140c0ae36;
    pdb_142d7f1b0(lVar20 + 0x1678,0,uVar35,4);
    lVar21 = *(longlong *)(lVar20 + 0x1688);
    lVar24 = *(longlong *)(lVar20 + 0x1680);
    if (uVar35 == 1) goto LAB_140c0a950;
LAB_140c0ae55:
    lVar2 = lVar24 + lVar21 * 0xc;
    lVar33 = 0xc;
    lVar27 = 0;
    do {
      *(undefined4 *)(lVar2 + -4 + lVar33) = *(undefined4 *)(lVar23 + -4 + lVar33);
      *(undefined8 *)(lVar2 + -0xc + lVar33) = *(undefined8 *)(lVar23 + -0xc + lVar33);
      *(undefined8 *)(lVar2 + lVar33) = *(undefined8 *)(lVar23 + lVar33);
      *(undefined4 *)(lVar2 + 8 + lVar33) = *(undefined4 *)(lVar23 + 8 + lVar33);
      lVar33 = lVar33 + 0x18;
      lVar27 = lVar27 + -2;
    } while (-lVar27 != (uVar35 & 0xfffffffffffffffe));
    lVar21 = lVar21 - lVar27;
    if ((uVar35 & 1) == 0) goto LAB_140c0aecd;
    lVar27 = -lVar27;
  }
  else {
    lVar21 = 0;
    if (uVar35 == 0) goto LAB_140c0aecd;
    lVar24 = *(longlong *)(lVar20 + 0x1680);
    if (uVar35 != 1) goto LAB_140c0ae55;
LAB_140c0a950:
    lVar27 = 0;
  }
  *(undefined4 *)(lVar24 + 8 + lVar21 * 0xc) = *(undefined4 *)(lVar23 + 8 + lVar27 * 0xc);
  *(undefined8 *)(lVar24 + lVar21 * 0xc) = *(undefined8 *)(lVar23 + lVar27 * 0xc);
  lVar21 = lVar21 + 1;
LAB_140c0aecd:
  *(longlong *)(lVar20 + 0x1688) = lVar21;
  uStack_c0 = 0x140c0aee7;
  pdb_140bd6350(*(undefined8 *)(lVar20 + 0x1660),*(undefined8 *)(lVar20 + 0x1668),lVar20 + 0x1678);
  uStack_c0 = 0x140c0af03;
  pdb_1419a60d0(*(undefined8 *)(lVar20 + 0x1680),*(undefined8 *)(lVar20 + 0x1688),10,0);
  uStack_c0 = 0x140c0af1a;
  pub_142e32780(lVar20 + 0x18a0,0,0x200);
  uStack_c0 = 0x140c0af41;
  pdb_140a83c80(lVar20 + 0x18a0,*(longlong *)(lVar20 + 0x1680),
                *(longlong *)(lVar20 + 0x1680) + *(longlong *)(lVar20 + 0x1688) * 0xc,
                *(undefined4 *)(lVar20 + 0x1690));
  uVar35 = *(ulonglong *)(lVar20 + 0x18a8);
  uVar25 = *(ulonglong *)(lVar20 + 0x18b0);
  uVar17 = *(ulonglong *)(lVar20 + 0x18b8);
  *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar20 + 0x18a0);
  *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
  *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
  *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x18c8);
  uVar25 = *(ulonglong *)(lVar20 + 0x18d0);
  uVar17 = *(ulonglong *)(lVar20 + 0x18d8);
  *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar20 + 0x18c0) | *(ulonglong *)(param_4 + 0xb8);
  *(ulonglong *)(param_4 + 0xc0) = uVar35 | *(ulonglong *)(param_4 + 0xc0);
  *(ulonglong *)(param_4 + 200) = uVar25 | *(ulonglong *)(param_4 + 200);
  *(ulonglong *)(param_4 + 0xd0) = uVar17 | *(ulonglong *)(param_4 + 0xd0);
  uVar35 = *(ulonglong *)(lVar20 + 0x18e8);
  uVar25 = *(ulonglong *)(lVar20 + 0x18f0);
  uVar17 = *(ulonglong *)(lVar20 + 0x18f8);
  *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar20 + 0x18e0);
  *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
  *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
  *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1908);
  uVar25 = *(ulonglong *)(lVar20 + 0x1910);
  uVar17 = *(ulonglong *)(lVar20 + 0x1918);
  *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar20 + 0x1900);
  *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
  *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
  *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1928);
  uVar25 = *(ulonglong *)(lVar20 + 0x1930);
  uVar17 = *(ulonglong *)(lVar20 + 0x1938);
  *(ulonglong *)(param_4 + 0x118) =
       *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar20 + 0x1920);
  *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
  *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
  *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1948);
  uVar25 = *(ulonglong *)(lVar20 + 0x1950);
  uVar17 = *(ulonglong *)(lVar20 + 0x1958);
  *(ulonglong *)(param_4 + 0x138) =
       *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar20 + 0x1940);
  *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
  *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
  *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1968);
  uVar25 = *(ulonglong *)(lVar20 + 0x1970);
  uVar17 = *(ulonglong *)(lVar20 + 0x1978);
  *(ulonglong *)(param_4 + 0x158) =
       *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar20 + 0x1960);
  *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
  *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
  *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1988);
  uVar25 = *(ulonglong *)(lVar20 + 0x1990);
  uVar17 = *(ulonglong *)(lVar20 + 0x1998);
  *(ulonglong *)(param_4 + 0x178) =
       *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar20 + 0x1980);
  *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
  *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
  *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x19a8);
  uVar25 = *(ulonglong *)(lVar20 + 0x19b0);
  uVar17 = *(ulonglong *)(lVar20 + 0x19b8);
  *(ulonglong *)(param_4 + 0x198) =
       *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar20 + 0x19a0);
  *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
  *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
  *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x19c8);
  uVar25 = *(ulonglong *)(lVar20 + 0x19d0);
  uVar17 = *(ulonglong *)(lVar20 + 0x19d8);
  *(ulonglong *)(param_4 + 0x1b8) =
       *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar20 + 0x19c0);
  *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
  *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
  *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x19e8);
  uVar25 = *(ulonglong *)(lVar20 + 0x19f0);
  uVar17 = *(ulonglong *)(lVar20 + 0x19f8);
  *(ulonglong *)(param_4 + 0x1d8) =
       *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar20 + 0x19e0);
  *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
  *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
  *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1a08);
  uVar25 = *(ulonglong *)(lVar20 + 0x1a10);
  uVar17 = *(ulonglong *)(lVar20 + 0x1a18);
  *(ulonglong *)(param_4 + 0x1f8) =
       *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar20 + 0x1a00);
  *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
  *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
  *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1a28);
  uVar25 = *(ulonglong *)(lVar20 + 0x1a30);
  uVar17 = *(ulonglong *)(lVar20 + 0x1a38);
  *(ulonglong *)(param_4 + 0x218) =
       *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar20 + 0x1a20);
  *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
  *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
  *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1a48);
  uVar25 = *(ulonglong *)(lVar20 + 0x1a50);
  uVar17 = *(ulonglong *)(lVar20 + 0x1a58);
  *(ulonglong *)(param_4 + 0x238) =
       *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar20 + 0x1a40);
  *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
  *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
  *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1a68);
  uVar25 = *(ulonglong *)(lVar20 + 0x1a70);
  uVar17 = *(ulonglong *)(lVar20 + 0x1a78);
  *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar20 + 0x1a60);
  *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
  *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
  *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1a88);
  uVar25 = *(ulonglong *)(lVar20 + 0x1a90);
  uVar17 = *(ulonglong *)(lVar20 + 0x1a98);
  *(ulonglong *)(param_4 + 0x278) =
       *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar20 + 0x1a80);
  *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar35;
  *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
  *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x16a8);
  uVar25 = *(ulonglong *)(lVar20 + 0x16b0);
  uVar17 = *(ulonglong *)(lVar20 + 0x16b8);
  *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar20 + 0x16a0);
  *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
  *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
  *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x16c8);
  uVar25 = *(ulonglong *)(lVar20 + 0x16d0);
  uVar17 = *(ulonglong *)(lVar20 + 0x16d8);
  *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(param_4 + 0xb8) | *(ulonglong *)(lVar20 + 0x16c0);
  *(ulonglong *)(param_4 + 0xc0) = *(ulonglong *)(param_4 + 0xc0) | uVar35;
  *(ulonglong *)(param_4 + 200) = *(ulonglong *)(param_4 + 200) | uVar25;
  *(ulonglong *)(param_4 + 0xd0) = *(ulonglong *)(param_4 + 0xd0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x16e8);
  uVar25 = *(ulonglong *)(lVar20 + 0x16f0);
  uVar17 = *(ulonglong *)(lVar20 + 0x16f8);
  *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar20 + 0x16e0);
  *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
  *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
  *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1708);
  uVar25 = *(ulonglong *)(lVar20 + 0x1710);
  uVar17 = *(ulonglong *)(lVar20 + 0x1718);
  *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar20 + 0x1700);
  *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
  *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
  *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1728);
  uVar25 = *(ulonglong *)(lVar20 + 0x1730);
  uVar17 = *(ulonglong *)(lVar20 + 0x1738);
  *(ulonglong *)(param_4 + 0x118) =
       *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar20 + 0x1720);
  *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
  *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
  *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1748);
  uVar25 = *(ulonglong *)(lVar20 + 0x1750);
  uVar17 = *(ulonglong *)(lVar20 + 0x1758);
  *(ulonglong *)(param_4 + 0x138) =
       *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar20 + 0x1740);
  *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
  *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
  *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1768);
  uVar25 = *(ulonglong *)(lVar20 + 6000);
  uVar17 = *(ulonglong *)(lVar20 + 0x1778);
  *(ulonglong *)(param_4 + 0x158) =
       *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar20 + 0x1760);
  *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
  *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
  *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1788);
  uVar25 = *(ulonglong *)(lVar20 + 0x1790);
  uVar17 = *(ulonglong *)(lVar20 + 0x1798);
  *(ulonglong *)(param_4 + 0x178) =
       *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar20 + 0x1780);
  *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
  *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
  *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x17a8);
  uVar25 = *(ulonglong *)(lVar20 + 0x17b0);
  uVar17 = *(ulonglong *)(lVar20 + 0x17b8);
  *(ulonglong *)(param_4 + 0x198) =
       *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar20 + 0x17a0);
  *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
  *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
  *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x17c8);
  uVar25 = *(ulonglong *)(lVar20 + 0x17d0);
  uVar17 = *(ulonglong *)(lVar20 + 0x17d8);
  *(ulonglong *)(param_4 + 0x1b8) =
       *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar20 + 0x17c0);
  *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
  *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
  *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x17e8);
  uVar25 = *(ulonglong *)(lVar20 + 0x17f0);
  uVar17 = *(ulonglong *)(lVar20 + 0x17f8);
  *(ulonglong *)(param_4 + 0x1d8) =
       *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar20 + 0x17e0);
  *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
  *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
  *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1808);
  uVar25 = *(ulonglong *)(lVar20 + 0x1810);
  uVar17 = *(ulonglong *)(lVar20 + 0x1818);
  *(ulonglong *)(param_4 + 0x1f8) =
       *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar20 + 0x1800);
  *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
  *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
  *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1828);
  uVar25 = *(ulonglong *)(lVar20 + 0x1830);
  uVar17 = *(ulonglong *)(lVar20 + 0x1838);
  *(ulonglong *)(param_4 + 0x218) =
       *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar20 + 0x1820);
  *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
  *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
  *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1848);
  uVar25 = *(ulonglong *)(lVar20 + 0x1850);
  uVar17 = *(ulonglong *)(lVar20 + 0x1858);
  *(ulonglong *)(param_4 + 0x238) =
       *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar20 + 0x1840);
  *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
  *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
  *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1868);
  uVar25 = *(ulonglong *)(lVar20 + 0x1870);
  uVar17 = *(ulonglong *)(lVar20 + 0x1878);
  *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar20 + 0x1860);
  *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
  *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
  *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar17;
  uVar35 = *(ulonglong *)(lVar20 + 0x1888);
  uVar25 = *(ulonglong *)(lVar20 + 0x1890);
  uVar17 = *(ulonglong *)(lVar20 + 0x1898);
  *(ulonglong *)(param_4 + 0x278) =
       *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar20 + 0x1880);
  *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar35;
  *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
  *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar17;
  uVar29 = *(undefined8 *)(lVar20 + 0x18a0);
  uVar12 = *(undefined8 *)(lVar20 + 0x18a8);
  uVar13 = *(undefined8 *)(lVar20 + 0x18b0);
  uVar14 = *(undefined8 *)(lVar20 + 0x18b8);
  *(undefined8 *)(lVar20 + 0x18a0) = *(undefined8 *)(lVar20 + 0x16a0);
  *(undefined8 *)(lVar20 + 0x18a8) = *(undefined8 *)(lVar20 + 0x16a8);
  *(undefined8 *)(lVar20 + 0x18b0) = *(undefined8 *)(lVar20 + 0x16b0);
  *(undefined8 *)(lVar20 + 0x18b8) = *(undefined8 *)(lVar20 + 0x16b8);
  *(undefined8 *)(lVar20 + 0x16a0) = uVar29;
  *(undefined8 *)(lVar20 + 0x16a8) = uVar12;
  *(undefined8 *)(lVar20 + 0x16b0) = uVar13;
  *(undefined8 *)(lVar20 + 0x16b8) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x18c0);
  uVar12 = *(undefined8 *)(lVar20 + 0x18c8);
  uVar13 = *(undefined8 *)(lVar20 + 0x18d0);
  uVar14 = *(undefined8 *)(lVar20 + 0x18d8);
  *(undefined8 *)(lVar20 + 0x18c0) = *(undefined8 *)(lVar20 + 0x16c0);
  *(undefined8 *)(lVar20 + 0x18c8) = *(undefined8 *)(lVar20 + 0x16c8);
  *(undefined8 *)(lVar20 + 0x18d0) = *(undefined8 *)(lVar20 + 0x16d0);
  *(undefined8 *)(lVar20 + 0x18d8) = *(undefined8 *)(lVar20 + 0x16d8);
  *(undefined8 *)(lVar20 + 0x16c0) = uVar29;
  *(undefined8 *)(lVar20 + 0x16c8) = uVar12;
  *(undefined8 *)(lVar20 + 0x16d0) = uVar13;
  *(undefined8 *)(lVar20 + 0x16d8) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x18e0);
  uVar12 = *(undefined8 *)(lVar20 + 0x18e8);
  uVar13 = *(undefined8 *)(lVar20 + 0x18f0);
  uVar14 = *(undefined8 *)(lVar20 + 0x18f8);
  *(undefined8 *)(lVar20 + 0x18e0) = *(undefined8 *)(lVar20 + 0x16e0);
  *(undefined8 *)(lVar20 + 0x18e8) = *(undefined8 *)(lVar20 + 0x16e8);
  *(undefined8 *)(lVar20 + 0x18f0) = *(undefined8 *)(lVar20 + 0x16f0);
  *(undefined8 *)(lVar20 + 0x18f8) = *(undefined8 *)(lVar20 + 0x16f8);
  *(undefined8 *)(lVar20 + 0x16e0) = uVar29;
  *(undefined8 *)(lVar20 + 0x16e8) = uVar12;
  *(undefined8 *)(lVar20 + 0x16f0) = uVar13;
  *(undefined8 *)(lVar20 + 0x16f8) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1900);
  uVar12 = *(undefined8 *)(lVar20 + 0x1908);
  uVar13 = *(undefined8 *)(lVar20 + 0x1910);
  uVar14 = *(undefined8 *)(lVar20 + 0x1918);
  *(undefined8 *)(lVar20 + 0x1900) = *(undefined8 *)(lVar20 + 0x1700);
  *(undefined8 *)(lVar20 + 0x1908) = *(undefined8 *)(lVar20 + 0x1708);
  *(undefined8 *)(lVar20 + 0x1910) = *(undefined8 *)(lVar20 + 0x1710);
  *(undefined8 *)(lVar20 + 0x1918) = *(undefined8 *)(lVar20 + 0x1718);
  *(undefined8 *)(lVar20 + 0x1700) = uVar29;
  *(undefined8 *)(lVar20 + 0x1708) = uVar12;
  *(undefined8 *)(lVar20 + 0x1710) = uVar13;
  *(undefined8 *)(lVar20 + 0x1718) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1920);
  uVar12 = *(undefined8 *)(lVar20 + 0x1928);
  uVar13 = *(undefined8 *)(lVar20 + 0x1930);
  uVar14 = *(undefined8 *)(lVar20 + 0x1938);
  *(undefined8 *)(lVar20 + 0x1920) = *(undefined8 *)(lVar20 + 0x1720);
  *(undefined8 *)(lVar20 + 0x1928) = *(undefined8 *)(lVar20 + 0x1728);
  *(undefined8 *)(lVar20 + 0x1930) = *(undefined8 *)(lVar20 + 0x1730);
  *(undefined8 *)(lVar20 + 0x1938) = *(undefined8 *)(lVar20 + 0x1738);
  *(undefined8 *)(lVar20 + 0x1720) = uVar29;
  *(undefined8 *)(lVar20 + 0x1728) = uVar12;
  *(undefined8 *)(lVar20 + 0x1730) = uVar13;
  *(undefined8 *)(lVar20 + 0x1738) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1940);
  uVar12 = *(undefined8 *)(lVar20 + 0x1948);
  uVar13 = *(undefined8 *)(lVar20 + 0x1950);
  uVar14 = *(undefined8 *)(lVar20 + 0x1958);
  *(undefined8 *)(lVar20 + 0x1940) = *(undefined8 *)(lVar20 + 0x1740);
  *(undefined8 *)(lVar20 + 0x1948) = *(undefined8 *)(lVar20 + 0x1748);
  *(undefined8 *)(lVar20 + 0x1950) = *(undefined8 *)(lVar20 + 0x1750);
  *(undefined8 *)(lVar20 + 0x1958) = *(undefined8 *)(lVar20 + 0x1758);
  *(undefined8 *)(lVar20 + 0x1740) = uVar29;
  *(undefined8 *)(lVar20 + 0x1748) = uVar12;
  *(undefined8 *)(lVar20 + 0x1750) = uVar13;
  *(undefined8 *)(lVar20 + 0x1758) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1960);
  uVar12 = *(undefined8 *)(lVar20 + 0x1968);
  uVar13 = *(undefined8 *)(lVar20 + 0x1970);
  uVar14 = *(undefined8 *)(lVar20 + 0x1978);
  *(undefined8 *)(lVar20 + 0x1960) = *(undefined8 *)(lVar20 + 0x1760);
  *(undefined8 *)(lVar20 + 0x1968) = *(undefined8 *)(lVar20 + 0x1768);
  *(undefined8 *)(lVar20 + 0x1970) = *(undefined8 *)(lVar20 + 6000);
  *(undefined8 *)(lVar20 + 0x1978) = *(undefined8 *)(lVar20 + 0x1778);
  *(undefined8 *)(lVar20 + 0x1760) = uVar29;
  *(undefined8 *)(lVar20 + 0x1768) = uVar12;
  *(undefined8 *)(lVar20 + 6000) = uVar13;
  *(undefined8 *)(lVar20 + 0x1778) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1980);
  uVar12 = *(undefined8 *)(lVar20 + 0x1988);
  uVar13 = *(undefined8 *)(lVar20 + 0x1990);
  uVar14 = *(undefined8 *)(lVar20 + 0x1998);
  *(undefined8 *)(lVar20 + 0x1980) = *(undefined8 *)(lVar20 + 0x1780);
  *(undefined8 *)(lVar20 + 0x1988) = *(undefined8 *)(lVar20 + 0x1788);
  *(undefined8 *)(lVar20 + 0x1990) = *(undefined8 *)(lVar20 + 0x1790);
  *(undefined8 *)(lVar20 + 0x1998) = *(undefined8 *)(lVar20 + 0x1798);
  *(undefined8 *)(lVar20 + 0x1780) = uVar29;
  *(undefined8 *)(lVar20 + 0x1788) = uVar12;
  *(undefined8 *)(lVar20 + 0x1790) = uVar13;
  *(undefined8 *)(lVar20 + 0x1798) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x19a0);
  uVar12 = *(undefined8 *)(lVar20 + 0x19a8);
  uVar13 = *(undefined8 *)(lVar20 + 0x19b0);
  uVar14 = *(undefined8 *)(lVar20 + 0x19b8);
  *(undefined8 *)(lVar20 + 0x19a0) = *(undefined8 *)(lVar20 + 0x17a0);
  *(undefined8 *)(lVar20 + 0x19a8) = *(undefined8 *)(lVar20 + 0x17a8);
  *(undefined8 *)(lVar20 + 0x19b0) = *(undefined8 *)(lVar20 + 0x17b0);
  *(undefined8 *)(lVar20 + 0x19b8) = *(undefined8 *)(lVar20 + 0x17b8);
  *(undefined8 *)(lVar20 + 0x17a0) = uVar29;
  *(undefined8 *)(lVar20 + 0x17a8) = uVar12;
  *(undefined8 *)(lVar20 + 0x17b0) = uVar13;
  *(undefined8 *)(lVar20 + 0x17b8) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x19c0);
  uVar12 = *(undefined8 *)(lVar20 + 0x19c8);
  uVar13 = *(undefined8 *)(lVar20 + 0x19d0);
  uVar14 = *(undefined8 *)(lVar20 + 0x19d8);
  *(undefined8 *)(lVar20 + 0x19c0) = *(undefined8 *)(lVar20 + 0x17c0);
  *(undefined8 *)(lVar20 + 0x19c8) = *(undefined8 *)(lVar20 + 0x17c8);
  *(undefined8 *)(lVar20 + 0x19d0) = *(undefined8 *)(lVar20 + 0x17d0);
  *(undefined8 *)(lVar20 + 0x19d8) = *(undefined8 *)(lVar20 + 0x17d8);
  *(undefined8 *)(lVar20 + 0x17c0) = uVar29;
  *(undefined8 *)(lVar20 + 0x17c8) = uVar12;
  *(undefined8 *)(lVar20 + 0x17d0) = uVar13;
  *(undefined8 *)(lVar20 + 0x17d8) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x19e0);
  uVar12 = *(undefined8 *)(lVar20 + 0x19e8);
  uVar13 = *(undefined8 *)(lVar20 + 0x19f0);
  uVar14 = *(undefined8 *)(lVar20 + 0x19f8);
  *(undefined8 *)(lVar20 + 0x19e0) = *(undefined8 *)(lVar20 + 0x17e0);
  *(undefined8 *)(lVar20 + 0x19e8) = *(undefined8 *)(lVar20 + 0x17e8);
  *(undefined8 *)(lVar20 + 0x19f0) = *(undefined8 *)(lVar20 + 0x17f0);
  *(undefined8 *)(lVar20 + 0x19f8) = *(undefined8 *)(lVar20 + 0x17f8);
  *(undefined8 *)(lVar20 + 0x17e0) = uVar29;
  *(undefined8 *)(lVar20 + 0x17e8) = uVar12;
  *(undefined8 *)(lVar20 + 0x17f0) = uVar13;
  *(undefined8 *)(lVar20 + 0x17f8) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1a00);
  uVar12 = *(undefined8 *)(lVar20 + 0x1a08);
  uVar13 = *(undefined8 *)(lVar20 + 0x1a10);
  uVar14 = *(undefined8 *)(lVar20 + 0x1a18);
  *(undefined8 *)(lVar20 + 0x1a00) = *(undefined8 *)(lVar20 + 0x1800);
  *(undefined8 *)(lVar20 + 0x1a08) = *(undefined8 *)(lVar20 + 0x1808);
  *(undefined8 *)(lVar20 + 0x1a10) = *(undefined8 *)(lVar20 + 0x1810);
  *(undefined8 *)(lVar20 + 0x1a18) = *(undefined8 *)(lVar20 + 0x1818);
  *(undefined8 *)(lVar20 + 0x1800) = uVar29;
  *(undefined8 *)(lVar20 + 0x1808) = uVar12;
  *(undefined8 *)(lVar20 + 0x1810) = uVar13;
  *(undefined8 *)(lVar20 + 0x1818) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1a20);
  uVar12 = *(undefined8 *)(lVar20 + 0x1a28);
  uVar13 = *(undefined8 *)(lVar20 + 0x1a30);
  uVar14 = *(undefined8 *)(lVar20 + 0x1a38);
  *(undefined8 *)(lVar20 + 0x1a20) = *(undefined8 *)(lVar20 + 0x1820);
  *(undefined8 *)(lVar20 + 0x1a28) = *(undefined8 *)(lVar20 + 0x1828);
  *(undefined8 *)(lVar20 + 0x1a30) = *(undefined8 *)(lVar20 + 0x1830);
  *(undefined8 *)(lVar20 + 0x1a38) = *(undefined8 *)(lVar20 + 0x1838);
  *(undefined8 *)(lVar20 + 0x1820) = uVar29;
  *(undefined8 *)(lVar20 + 0x1828) = uVar12;
  *(undefined8 *)(lVar20 + 0x1830) = uVar13;
  *(undefined8 *)(lVar20 + 0x1838) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1a40);
  uVar12 = *(undefined8 *)(lVar20 + 0x1a48);
  uVar13 = *(undefined8 *)(lVar20 + 0x1a50);
  uVar14 = *(undefined8 *)(lVar20 + 0x1a58);
  *(undefined8 *)(lVar20 + 0x1a40) = *(undefined8 *)(lVar20 + 0x1840);
  *(undefined8 *)(lVar20 + 0x1a48) = *(undefined8 *)(lVar20 + 0x1848);
  *(undefined8 *)(lVar20 + 0x1a50) = *(undefined8 *)(lVar20 + 0x1850);
  *(undefined8 *)(lVar20 + 0x1a58) = *(undefined8 *)(lVar20 + 0x1858);
  *(undefined8 *)(lVar20 + 0x1840) = uVar29;
  *(undefined8 *)(lVar20 + 0x1848) = uVar12;
  *(undefined8 *)(lVar20 + 0x1850) = uVar13;
  *(undefined8 *)(lVar20 + 0x1858) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1a60);
  uVar12 = *(undefined8 *)(lVar20 + 0x1a68);
  uVar13 = *(undefined8 *)(lVar20 + 0x1a70);
  uVar14 = *(undefined8 *)(lVar20 + 0x1a78);
  *(undefined8 *)(lVar20 + 0x1a60) = *(undefined8 *)(lVar20 + 0x1860);
  *(undefined8 *)(lVar20 + 0x1a68) = *(undefined8 *)(lVar20 + 0x1868);
  *(undefined8 *)(lVar20 + 0x1a70) = *(undefined8 *)(lVar20 + 0x1870);
  *(undefined8 *)(lVar20 + 0x1a78) = *(undefined8 *)(lVar20 + 0x1878);
  *(undefined8 *)(lVar20 + 0x1860) = uVar29;
  *(undefined8 *)(lVar20 + 0x1868) = uVar12;
  *(undefined8 *)(lVar20 + 0x1870) = uVar13;
  *(undefined8 *)(lVar20 + 0x1878) = uVar14;
  uVar29 = *(undefined8 *)(lVar20 + 0x1a80);
  uVar12 = *(undefined8 *)(lVar20 + 0x1a88);
  uVar10 = *(undefined4 *)(lVar20 + 0x1a90);
  uVar11 = *(undefined4 *)(lVar20 + 0x1a98);
  *(undefined8 *)(lVar20 + 0x1a80) = *(undefined8 *)(lVar20 + 0x1880);
  *(undefined8 *)(lVar20 + 0x1a88) = *(undefined8 *)(lVar20 + 0x1888);
  *(undefined8 *)(lVar20 + 0x1a90) = *(undefined8 *)(lVar20 + 0x1890);
  *(undefined8 *)(lVar20 + 0x1a98) = *(undefined8 *)(lVar20 + 0x1898);
  *(undefined8 *)(lVar20 + 0x1880) = uVar29;
  *(undefined8 *)(lVar20 + 0x1888) = uVar12;
  *(undefined4 *)(lVar20 + 0x1890) = uVar10;
  *(undefined4 *)(lVar20 + 0x1894) = *(undefined4 *)(lVar20 + 0x1a94);
  *(undefined4 *)(lVar20 + 0x1898) = uVar11;
  *(undefined4 *)(lVar20 + 0x189c) = *(undefined4 *)(lVar20 + 0x1a9c);
  uStack_c0 = 0x140c0b989;
  pdb_140a79940(param_4);
  uStack_88 = *(undefined4 *)(lVar20 + 0x1698);
  uStack_80 = *(undefined4 *)(lVar20 + 0x169c);
  uStack_90 = CONCAT31(uStack_90._1_3_,*(undefined1 *)(lVar20 + 0x1694));
  uStack_98 = CONCAT44(uStack_98._4_4_,*(undefined4 *)(lVar20 + 0x1690));
  uStack_c0 = 0x140c0b9de;
  pdb_140a79030(param_4,1,*(longlong *)(lVar20 + 0x1680),
                *(longlong *)(lVar20 + 0x1680) + *(longlong *)(lVar20 + 0x1688) * 0xc);
  uStack_c0 = 0x140c0b9ee;
  puVar22 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331ca50);
  if (puVar22 != (undefined8 *)0x0) {
    uStack_c0 = 0x140c0ba01;
    lVar23 = (**(code **)(puVar22[1] + 0x18))(*puVar22);
    if (lVar23 != 0) {
      uStack_c0 = 0x140c0ba1c;
      pdb_140a78ae0(param_4,1,*(undefined8 *)(lVar23 + 8),*(undefined8 *)(lVar23 + 0x10));
      uVar16 = *(uint *)(lVar20 + 0x1690);
      if (*(char *)(lVar20 + 0x1694) == '\0') {
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        lVar20 = *param_6;
        lVar23 = *(longlong *)(lVar20 + 0x30);
        uVar29 = *(undefined8 *)(lVar20 + 0x40);
        if (lVar23 == *(longlong *)(lVar20 + 0x20)) {
          uStack_c0 = 0x140c0ba7c;
          pdb_142d7e6e0(lVar20 + 0x20);
        }
      }
      else {
        *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
        lVar20 = *param_5;
        lVar23 = *(longlong *)(lVar20 + 0x30);
        uVar29 = *(undefined8 *)(lVar20 + 0x40);
        if (lVar23 == *(longlong *)(lVar20 + 0x20)) {
          uStack_c0 = 0x140c0ba56;
          pdb_142d7e6e0(lVar20 + 0x20);
        }
      }
      puVar19 = *(uint **)(lVar20 + 0x28);
      *(undefined8 *)(puVar19 + lVar23 * 8) = uVar29;
      *(undefined8 *)(puVar19 + lVar23 * 8 + 2) = *(undefined8 *)pfStack_70;
      puVar19[lVar23 * 8 + 4] = (uint)pfStack_70[2];
      puVar19[lVar23 * 8 + 5] = uVar16;
      *(undefined1 *)(puVar19 + lVar23 * 8 + 6) = 0;
      *(longlong *)(lVar20 + 0x30) = lVar23 + 1;
      *(longlong *)(lVar20 + 0x40) = *(longlong *)(lVar20 + 0x40) + 1;
      return puVar19;
    }
  }
                    /* WARNING: Subroutine does not return */
  uStack_c0 = 0x140c0bae3;
  pdb_142dc8150(&UNK_1430683e0);
}

