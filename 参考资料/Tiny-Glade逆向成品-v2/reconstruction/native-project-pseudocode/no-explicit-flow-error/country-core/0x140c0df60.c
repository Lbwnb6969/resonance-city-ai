// VA 0x140c0df60, PDB extent 4873 bytes
// country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::Cobblestone2RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::draw_path::closure_env$6,country_core::systems::paths::draw_path::draw_path::closure_env$7,country_core::systems::paths::draw_path::draw_path::closure_env$8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::Cobblestone2RasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::draw_path::closure_env$6,country_core::systems::paths::draw_path::draw_path::closure_env$7,country_core::systems::paths::draw_path::draw_path::closure_env$8>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 4873 */

uint * pdb_140c0df60(uint *param_1,float *param_2,longlong *param_3,longlong param_4,
                    longlong *param_5,longlong *param_6,longlong *param_7)

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
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined *puVar27;
  longlong lVar28;
  byte *pbVar29;
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
  lVar21 = *param_3;
  uVar17 = *param_1;
  lVar24 = 0;
  if (1 < (ulonglong)uVar17) {
    lVar24 = (ulonglong)uVar17 - 1;
  }
  if (lVar24 == 0) {
    *(undefined4 *)param_3[6] = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(undefined1 *)(param_3[4] + 0x1e0) = 1;
    plVar19 = (longlong *)&UNK_143044340;
    if (*(char *)param_3[8] != '\0') {
      plVar19 = (longlong *)((char *)param_3[8] + 4);
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,(int)plVar19[1]);
    lStack_68 = *plVar19;
    uStack_90 = param_1[1];
    uStack_98 = CONCAT44(uStack_98._4_4_,uVar17);
    uStack_c0 = 0x140c0e106;
    puVar20 = (uint *)pdb_140bd6210(lVar21 + 0x8e0,&lStack_68,(char)param_1[3],param_1[2]);
    return puVar20;
  }
  if ((int)lVar24 != 1) {
    if (*(ulonglong *)(lVar21 + 0x938) < 2) {
      return param_1;
    }
    *(undefined4 *)param_3[0x16] = *(undefined4 *)((longlong)param_3 + 0xbc);
    lVar24 = param_3[0x14];
    lVar25 = *(longlong *)(lVar24 + 0x30);
    uVar6 = *(undefined8 *)(lVar24 + 0x40);
    if (lVar25 == *(longlong *)(lVar24 + 0x20)) {
      uStack_c0 = 0x140c0e146;
      pdb_142d7e8a0(lVar24 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar24 + 0x28) + lVar25 * 8) = uVar6;
    *(longlong *)(lVar24 + 0x30) = lVar25 + 1;
    *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar24 = *param_7;
    lVar25 = *(longlong *)(lVar24 + 0x30);
    uVar6 = *(undefined8 *)(lVar24 + 0x40);
    if (lVar25 == *(longlong *)(lVar24 + 0x20)) {
      uStack_c0 = 0x140c0e17c;
      pdb_142d7e8a0(lVar24 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar24 + 0x28) + lVar25 * 8) = uVar6;
    *(longlong *)(lVar24 + 0x30) = lVar25 + 1;
    *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
    *(undefined4 *)param_3[0x12] = *(undefined4 *)((longlong)param_3 + 0x9c);
    lVar24 = param_3[0x10];
    lVar25 = *(longlong *)(lVar24 + 0x30);
    uVar6 = *(undefined8 *)(lVar24 + 0x40);
    if (lVar25 == *(longlong *)(lVar24 + 0x20)) {
      uStack_c0 = 0x140c0e1bc;
      pdb_142d7e8a0(lVar24 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar24 + 0x28) + lVar25 * 8) = uVar6;
    *(longlong *)(lVar24 + 0x30) = lVar25 + 1;
    *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
    uVar35 = *(ulonglong *)(lVar21 + 0x958);
    uVar26 = *(ulonglong *)(lVar21 + 0x960);
    uVar18 = *(ulonglong *)(lVar21 + 0x968);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar21 + 0x950)
    ;
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar26;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0x978);
    uVar17 = *(uint *)(lVar21 + 0x980);
    uVar8 = *(uint *)(lVar21 + 0x984);
    uVar9 = *(uint *)(lVar21 + 0x988);
    uVar10 = *(uint *)(lVar21 + 0x98c);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar21 + 0x970) | *(ulonglong *)(param_4 + 0xb8)
    ;
    *(ulonglong *)(param_4 + 0xc0) = uVar35 | *(ulonglong *)(param_4 + 0xc0);
    *(uint *)(param_4 + 200) = uVar17 | *(uint *)(param_4 + 200);
    *(uint *)(param_4 + 0xcc) = uVar8 | *(uint *)(param_4 + 0xcc);
    *(uint *)(param_4 + 0xd0) = uVar9 | *(uint *)(param_4 + 0xd0);
    *(uint *)(param_4 + 0xd4) = uVar10 | *(uint *)(param_4 + 0xd4);
    uVar35 = *(ulonglong *)(lVar21 + 0x998);
    uVar26 = *(ulonglong *)(lVar21 + 0x9a0);
    uVar18 = *(ulonglong *)(lVar21 + 0x9a8);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar21 + 0x990)
    ;
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar26;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0x9b8);
    uVar26 = *(ulonglong *)(lVar21 + 0x9c0);
    uVar18 = *(ulonglong *)(lVar21 + 0x9c8);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar21 + 0x9b0)
    ;
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar26;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0x9d8);
    uVar26 = *(ulonglong *)(lVar21 + 0x9e0);
    uVar18 = *(ulonglong *)(lVar21 + 0x9e8);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar21 + 0x9d0);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar26;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0x9f8);
    uVar26 = *(ulonglong *)(lVar21 + 0xa00);
    uVar18 = *(ulonglong *)(lVar21 + 0xa08);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar21 + 0x9f0);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar26;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xa18);
    uVar26 = *(ulonglong *)(lVar21 + 0xa20);
    uVar18 = *(ulonglong *)(lVar21 + 0xa28);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar21 + 0xa10);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar26;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xa38);
    uVar26 = *(ulonglong *)(lVar21 + 0xa40);
    uVar18 = *(ulonglong *)(lVar21 + 0xa48);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar21 + 0xa30);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar26;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xa58);
    uVar26 = *(ulonglong *)(lVar21 + 0xa60);
    uVar18 = *(ulonglong *)(lVar21 + 0xa68);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar21 + 0xa50);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar26;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xa78);
    uVar26 = *(ulonglong *)(lVar21 + 0xa80);
    uVar18 = *(ulonglong *)(lVar21 + 0xa88);
    *(ulonglong *)(param_4 + 0x1b8) =
         *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar21 + 0xa70);
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar26;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xa98);
    uVar26 = *(ulonglong *)(lVar21 + 0xaa0);
    uVar18 = *(ulonglong *)(lVar21 + 0xaa8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar21 + 0xa90);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar26;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xab8);
    uVar26 = *(ulonglong *)(lVar21 + 0xac0);
    uVar18 = *(ulonglong *)(lVar21 + 0xac8);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar21 + 0xab0);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar26;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xad8);
    uVar26 = *(ulonglong *)(lVar21 + 0xae0);
    uVar18 = *(ulonglong *)(lVar21 + 0xae8);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar21 + 0xad0);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar26;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xaf8);
    uVar26 = *(ulonglong *)(lVar21 + 0xb00);
    uVar18 = *(ulonglong *)(lVar21 + 0xb08);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar21 + 0xaf0);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar26;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar35 = *(ulonglong *)(lVar21 + 0xb18);
    uVar26 = *(ulonglong *)(lVar21 + 0xb20);
    uVar18 = *(ulonglong *)(lVar21 + 0xb28);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar21 + 0xb10);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar26;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar18 = *(ulonglong *)(lVar21 + 0xb38);
    uVar35 = *(ulonglong *)(lVar21 + 0xb40);
    uVar26 = *(ulonglong *)(lVar21 + 0xb48);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar21 + 0xb30);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar18;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar35;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar26;
    uStack_c0 = 0x140c0e503;
    pub_142e32780(lVar21 + 0x950,0,0x200);
    uStack_c0 = 0x140c0e50b;
    pdb_140a79cd0(param_4);
    puVar27 = &UNK_14331c8b0;
    uStack_c0 = 0x140c0e51b;
    puVar23 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c8b0);
    if (puVar23 != (undefined8 *)0x0) {
      uStack_c0 = 0x140c0e52e;
      lVar21 = (**(code **)(puVar23[1] + 0x18))(*puVar23);
      if (lVar21 != 0) {
        pbVar29 = *(byte **)(lVar21 + 8);
        pbVar36 = *(byte **)(lVar21 + 0x10);
        uStack_48 = 0xfffffffffffffffe;
        uVar35 = CONCAT71((int7)((ulonglong)puVar27 >> 8),1) & 0xffffffff;
        if (*(char *)(param_4 + 0x299) != '\0') {
          pub_142e32780(pbVar29,0,pbVar36);
          *(undefined1 *)(param_4 + 0x299) = 0;
        }
        *(char *)(param_4 + 0x298) = (char)uVar35;
        cVar16 = pdb_140e94b40();
        if (cVar16 == '\0') {
          lStack_68 = 0;
        }
        else {
          puVar27 = &UNK_1430423bf;
          pbVar30 = (byte *)0x82;
          uVar26 = 0x82;
          lVar21 = pdb_140a7a9e0(&UNK_1430423bf);
          if (lVar21 == 1) {
            if (0x82 < uVar26) {
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
              if (0x82 < uVar26 + 2) goto LAB_140a78ed7;
              pbVar30 = (byte *)(0x80 - uVar26);
              puVar27 = &UNK_1430423c1 + uVar26;
            }
          }
          puVar31 = &UNK_1430420e1;
          puVar34 = &UNK_1430420b0;
          do {
            bVar3 = puVar31[-1];
            uVar17 = (uint)(char)bVar3;
            uStack_50 = (uint *)pbVar36;
            if ((char)bVar3 < '\0') {
              bVar4 = puVar31[-2];
              if ((char)bVar4 < -0x40) {
                bVar5 = puVar31[-3];
                if ((char)bVar5 < -0x40) {
                  pbVar1 = puVar31 + -4;
                  puVar31 = puVar31 + -4;
                  uVar17 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
                }
                else {
                  puVar31 = puVar31 + -3;
                  uVar17 = bVar5 & 0xf;
                }
                uVar17 = bVar4 & 0x3f | uVar17 << 6;
              }
              else {
                puVar31 = puVar31 + -2;
                uVar17 = bVar4 & 0x1f;
              }
              uVar17 = (uint)(bVar3 & 0x3f) | uVar17 << 6;
              if (uVar17 != 0x5c) goto LAB_140a78c34;
LAB_140a78c4d:
              puVar34 = puVar31 + -0x1430420af;
              if ((undefined *)0x31 < puVar34) {
                pdb_142dc8070(&UNK_1430420b0,0x31,puVar34,0x31,&UNK_1430425b0);
                goto LAB_140a78eb7;
              }
              lVar21 = 0x31 - (longlong)puVar34;
              puVar34 = puVar31 + 1;
              goto LAB_140a78c70;
            }
            puVar31 = puVar31 + -1;
            if (uVar17 == 0x5c) goto LAB_140a78c4d;
LAB_140a78c34:
            if (uVar17 == 0x2f) goto LAB_140a78c4d;
          } while (puVar31 != &UNK_1430420b0);
          lVar21 = 0x31;
LAB_140a78c70:
          plVar19 = (longlong *)pdb_140e97000();
          if (((char)plVar19[0xd] != '\x01') &&
             (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 == (longlong *)0x0))
          goto LAB_140a78e63;
          if (*plVar19 != 0) goto LAB_140a78e33;
          *plVar19 = -1;
          uStack_58 = plVar19;
          uStack_60 = pdb_140e94f10(plVar19 + 1,puVar27,pbVar30,puVar34,lVar21,1,0);
          *uStack_58 = *uStack_58 + 1;
          lStack_68 = 1;
          pbVar36 = (byte *)uStack_50;
        }
        puVar23 = (undefined8 *)(param_4 + 0x20);
        puVar32 = (undefined8 *)(param_4 + 0x28);
        if ((char)uVar35 == '\0') {
          puVar32 = (undefined8 *)(param_4 + 0x10);
          puVar23 = (undefined8 *)(param_4 + 8);
        }
        uStack_270 = *puVar32;
        uStack_278 = *puVar23;
        uStack_268 = *(undefined8 *)(param_4 + 0x50);
        uStack_260 = *(undefined8 *)(param_4 + 0x58);
        uVar35 = param_4 + 0x98;
        lStack_258 = param_4 + 0x30;
        pbStack_250 = pbVar29;
        pbStack_248 = pbVar36;
        pdb_140a84210(uVar35,&uStack_278);
        if (-1 < *(longlong *)(param_4 + 0x60)) {
          pbVar30 = (byte *)(param_4 + 0x60);
          pub_142e32760(&uStack_278,uVar35,0x200);
          puVar20 = (uint *)pdb_1409c5460(pbVar30,&uStack_278);
          do {
            pbVar29 = (byte *)&uStack_278;
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
                uStack_50 = puVar20;
                pdb_140e95370(puVar20 + 2,uStack_60);
                *(longlong *)uStack_50 = *(longlong *)uStack_50 + 1;
                return uStack_50;
              }
LAB_140a78e33:
              puVar20 = (uint *)pdb_142dc8090(&UNK_143326a50);
LAB_140a78e3f:
              puVar20 = (uint *)pdb_142d8ec20(puVar20,0);
            } while (puVar20 != (uint *)0x0);
LAB_140a78e63:
            pdb_142dc7890(&UNK_143326860);
LAB_140a78e70:
            pdb_142dbd1a0(pbVar29);
LAB_140a78d80:
            pdb_140e9a150(pbVar29);
            uStack_50 = (uint *)pbVar29;
            pub_142e32760(&uStack_278,uVar35,0x200);
            pdb_1409c5460(pbVar30 + 0x18);
            pbVar30 = (byte *)uStack_50;
            pdb_140e9a350();
            puVar20 = (uint *)0x1;
            LOCK();
            bVar3 = *pbVar30;
            if (bVar3 == 1) {
              *pbVar30 = 0;
            }
            else {
              puVar20 = (uint *)(ulonglong)bVar3;
            }
            UNLOCK();
            if (bVar3 != 1) {
              puVar20 = (uint *)pdb_142dbcef0(pbVar30);
            }
          } while( true );
        }
        pbVar30 = *(byte **)(param_4 + 0x68);
        pbVar29 = pbVar30 + 0x10;
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
    uStack_c0 = 0x140c0f25c;
    pdb_142dc8150(&UNK_1430683f8);
  }
  lVar24 = *(longlong *)(lVar21 + 0x918);
  if ((lVar24 == 0) || (*(longlong *)(lVar21 + 0x910) + lVar24 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
    uStack_c0 = 0x140c0e56a;
    pdb_142dc8150(&UNK_143064978);
  }
  puVar20 = (uint *)(*(longlong *)(lVar21 + 0x910) + lVar24 * 0xc);
  if (SQRT((param_2[2] - (float)puVar20[-1]) * (param_2[2] - (float)puVar20[-1]) +
           (param_2[1] - (float)puVar20[-2]) * (param_2[1] - (float)puVar20[-2]) +
           (*param_2 - (float)puVar20[-3]) * (*param_2 - (float)puVar20[-3])) <= _DAT_142e37870) {
    return puVar20;
  }
  uStack_c0 = 0x140c0e057;
  pfStack_70 = param_2;
  pdb_140bd6640();
  *(undefined8 *)(lVar21 + 0x938) = 0;
  lVar24 = *(longlong *)(lVar21 + 0x8f8);
  uVar35 = *(ulonglong *)(lVar21 + 0x900);
  if (*(ulonglong *)(lVar21 + 0x928) < uVar35) {
    uStack_98 = 0xc;
    uStack_c0 = 0x140c0e586;
    pdb_142d7f1b0(lVar21 + 0x928,0,uVar35,4);
    lVar22 = *(longlong *)(lVar21 + 0x938);
    lVar25 = *(longlong *)(lVar21 + 0x930);
    if (uVar35 == 1) goto LAB_140c0e0a0;
LAB_140c0e5a5:
    lVar2 = lVar25 + lVar22 * 0xc;
    lVar33 = 0xc;
    lVar28 = 0;
    do {
      *(undefined4 *)(lVar2 + -4 + lVar33) = *(undefined4 *)(lVar24 + -4 + lVar33);
      *(undefined8 *)(lVar2 + -0xc + lVar33) = *(undefined8 *)(lVar24 + -0xc + lVar33);
      *(undefined8 *)(lVar2 + lVar33) = *(undefined8 *)(lVar24 + lVar33);
      *(undefined4 *)(lVar2 + 8 + lVar33) = *(undefined4 *)(lVar24 + 8 + lVar33);
      lVar33 = lVar33 + 0x18;
      lVar28 = lVar28 + -2;
    } while (-lVar28 != (uVar35 & 0xfffffffffffffffe));
    lVar22 = lVar22 - lVar28;
    if ((uVar35 & 1) == 0) goto LAB_140c0e61d;
    lVar28 = -lVar28;
  }
  else {
    lVar22 = 0;
    if (uVar35 == 0) goto LAB_140c0e61d;
    lVar25 = *(longlong *)(lVar21 + 0x930);
    if (uVar35 != 1) goto LAB_140c0e5a5;
LAB_140c0e0a0:
    lVar28 = 0;
  }
  *(undefined4 *)(lVar25 + 8 + lVar22 * 0xc) = *(undefined4 *)(lVar24 + 8 + lVar28 * 0xc);
  *(undefined8 *)(lVar25 + lVar22 * 0xc) = *(undefined8 *)(lVar24 + lVar28 * 0xc);
  lVar22 = lVar22 + 1;
LAB_140c0e61d:
  *(longlong *)(lVar21 + 0x938) = lVar22;
  uStack_c0 = 0x140c0e637;
  pdb_140bd6350(*(undefined8 *)(lVar21 + 0x910),*(undefined8 *)(lVar21 + 0x918),lVar21 + 0x928);
  uStack_c0 = 0x140c0e653;
  pdb_1419a60d0(*(undefined8 *)(lVar21 + 0x930),*(undefined8 *)(lVar21 + 0x938),10,0);
  uStack_c0 = 0x140c0e66a;
  pub_142e32780(lVar21 + 0xb50,0,0x200);
  uStack_c0 = 0x140c0e691;
  pdb_140a83c80(lVar21 + 0xb50,*(longlong *)(lVar21 + 0x930),
                *(longlong *)(lVar21 + 0x930) + *(longlong *)(lVar21 + 0x938) * 0xc,
                *(undefined4 *)(lVar21 + 0x940));
  uVar35 = *(ulonglong *)(lVar21 + 0xb58);
  uVar26 = *(ulonglong *)(lVar21 + 0xb60);
  uVar18 = *(ulonglong *)(lVar21 + 0xb68);
  *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar21 + 0xb50);
  *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
  *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar26;
  *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xb78);
  uVar26 = *(ulonglong *)(lVar21 + 0xb80);
  uVar18 = *(ulonglong *)(lVar21 + 0xb88);
  *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar21 + 0xb70) | *(ulonglong *)(param_4 + 0xb8);
  *(ulonglong *)(param_4 + 0xc0) = uVar35 | *(ulonglong *)(param_4 + 0xc0);
  *(ulonglong *)(param_4 + 200) = uVar26 | *(ulonglong *)(param_4 + 200);
  *(ulonglong *)(param_4 + 0xd0) = uVar18 | *(ulonglong *)(param_4 + 0xd0);
  uVar35 = *(ulonglong *)(lVar21 + 0xb98);
  uVar26 = *(ulonglong *)(lVar21 + 0xba0);
  uVar18 = *(ulonglong *)(lVar21 + 0xba8);
  *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar21 + 0xb90);
  *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
  *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar26;
  *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 3000);
  uVar26 = *(ulonglong *)(lVar21 + 0xbc0);
  uVar18 = *(ulonglong *)(lVar21 + 0xbc8);
  *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar21 + 0xbb0);
  *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
  *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar26;
  *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xbd8);
  uVar26 = *(ulonglong *)(lVar21 + 0xbe0);
  uVar18 = *(ulonglong *)(lVar21 + 0xbe8);
  *(ulonglong *)(param_4 + 0x118) = *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar21 + 0xbd0)
  ;
  *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
  *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar26;
  *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xbf8);
  uVar26 = *(ulonglong *)(lVar21 + 0xc00);
  uVar18 = *(ulonglong *)(lVar21 + 0xc08);
  *(ulonglong *)(param_4 + 0x138) = *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar21 + 0xbf0)
  ;
  *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
  *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar26;
  *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xc18);
  uVar26 = *(ulonglong *)(lVar21 + 0xc20);
  uVar18 = *(ulonglong *)(lVar21 + 0xc28);
  *(ulonglong *)(param_4 + 0x158) = *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar21 + 0xc10)
  ;
  *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
  *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar26;
  *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xc38);
  uVar26 = *(ulonglong *)(lVar21 + 0xc40);
  uVar18 = *(ulonglong *)(lVar21 + 0xc48);
  *(ulonglong *)(param_4 + 0x178) = *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar21 + 0xc30)
  ;
  *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
  *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar26;
  *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xc58);
  uVar26 = *(ulonglong *)(lVar21 + 0xc60);
  uVar18 = *(ulonglong *)(lVar21 + 0xc68);
  *(ulonglong *)(param_4 + 0x198) = *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar21 + 0xc50)
  ;
  *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
  *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar26;
  *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xc78);
  uVar26 = *(ulonglong *)(lVar21 + 0xc80);
  uVar18 = *(ulonglong *)(lVar21 + 0xc88);
  *(ulonglong *)(param_4 + 0x1b8) = *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar21 + 0xc70)
  ;
  *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
  *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar26;
  *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xc98);
  uVar26 = *(ulonglong *)(lVar21 + 0xca0);
  uVar18 = *(ulonglong *)(lVar21 + 0xca8);
  *(ulonglong *)(param_4 + 0x1d8) = *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar21 + 0xc90)
  ;
  *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
  *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar26;
  *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xcb8);
  uVar26 = *(ulonglong *)(lVar21 + 0xcc0);
  uVar18 = *(ulonglong *)(lVar21 + 0xcc8);
  *(ulonglong *)(param_4 + 0x1f8) = *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar21 + 0xcb0)
  ;
  *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
  *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar26;
  *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xcd8);
  uVar26 = *(ulonglong *)(lVar21 + 0xce0);
  uVar18 = *(ulonglong *)(lVar21 + 0xce8);
  *(ulonglong *)(param_4 + 0x218) = *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar21 + 0xcd0)
  ;
  *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
  *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar26;
  *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xcf8);
  uVar26 = *(ulonglong *)(lVar21 + 0xd00);
  uVar18 = *(ulonglong *)(lVar21 + 0xd08);
  *(ulonglong *)(param_4 + 0x238) = *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar21 + 0xcf0)
  ;
  *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
  *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar26;
  *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xd18);
  uVar26 = *(ulonglong *)(lVar21 + 0xd20);
  uVar18 = *(ulonglong *)(lVar21 + 0xd28);
  *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar21 + 0xd10);
  *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
  *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar26;
  *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xd38);
  uVar26 = *(ulonglong *)(lVar21 + 0xd40);
  uVar18 = *(ulonglong *)(lVar21 + 0xd48);
  *(ulonglong *)(param_4 + 0x278) = *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar21 + 0xd30)
  ;
  *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar35;
  *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar26;
  *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0x958);
  uVar26 = *(ulonglong *)(lVar21 + 0x960);
  uVar18 = *(ulonglong *)(lVar21 + 0x968);
  *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar21 + 0x950);
  *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar35;
  *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar26;
  *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0x978);
  uVar26 = *(ulonglong *)(lVar21 + 0x980);
  uVar18 = *(ulonglong *)(lVar21 + 0x988);
  *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(param_4 + 0xb8) | *(ulonglong *)(lVar21 + 0x970);
  *(ulonglong *)(param_4 + 0xc0) = *(ulonglong *)(param_4 + 0xc0) | uVar35;
  *(ulonglong *)(param_4 + 200) = *(ulonglong *)(param_4 + 200) | uVar26;
  *(ulonglong *)(param_4 + 0xd0) = *(ulonglong *)(param_4 + 0xd0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0x998);
  uVar26 = *(ulonglong *)(lVar21 + 0x9a0);
  uVar18 = *(ulonglong *)(lVar21 + 0x9a8);
  *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar21 + 0x990);
  *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar35;
  *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar26;
  *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0x9b8);
  uVar26 = *(ulonglong *)(lVar21 + 0x9c0);
  uVar18 = *(ulonglong *)(lVar21 + 0x9c8);
  *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar21 + 0x9b0);
  *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar35;
  *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar26;
  *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0x9d8);
  uVar26 = *(ulonglong *)(lVar21 + 0x9e0);
  uVar18 = *(ulonglong *)(lVar21 + 0x9e8);
  *(ulonglong *)(param_4 + 0x118) = *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar21 + 0x9d0)
  ;
  *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar35;
  *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar26;
  *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0x9f8);
  uVar26 = *(ulonglong *)(lVar21 + 0xa00);
  uVar18 = *(ulonglong *)(lVar21 + 0xa08);
  *(ulonglong *)(param_4 + 0x138) = *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar21 + 0x9f0)
  ;
  *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar35;
  *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar26;
  *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xa18);
  uVar26 = *(ulonglong *)(lVar21 + 0xa20);
  uVar18 = *(ulonglong *)(lVar21 + 0xa28);
  *(ulonglong *)(param_4 + 0x158) = *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar21 + 0xa10)
  ;
  *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar35;
  *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar26;
  *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xa38);
  uVar26 = *(ulonglong *)(lVar21 + 0xa40);
  uVar18 = *(ulonglong *)(lVar21 + 0xa48);
  *(ulonglong *)(param_4 + 0x178) = *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar21 + 0xa30)
  ;
  *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar35;
  *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar26;
  *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xa58);
  uVar26 = *(ulonglong *)(lVar21 + 0xa60);
  uVar18 = *(ulonglong *)(lVar21 + 0xa68);
  *(ulonglong *)(param_4 + 0x198) = *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar21 + 0xa50)
  ;
  *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar35;
  *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar26;
  *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xa78);
  uVar26 = *(ulonglong *)(lVar21 + 0xa80);
  uVar18 = *(ulonglong *)(lVar21 + 0xa88);
  *(ulonglong *)(param_4 + 0x1b8) = *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar21 + 0xa70)
  ;
  *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar35;
  *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar26;
  *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xa98);
  uVar26 = *(ulonglong *)(lVar21 + 0xaa0);
  uVar18 = *(ulonglong *)(lVar21 + 0xaa8);
  *(ulonglong *)(param_4 + 0x1d8) = *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar21 + 0xa90)
  ;
  *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar35;
  *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar26;
  *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xab8);
  uVar26 = *(ulonglong *)(lVar21 + 0xac0);
  uVar18 = *(ulonglong *)(lVar21 + 0xac8);
  *(ulonglong *)(param_4 + 0x1f8) = *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar21 + 0xab0)
  ;
  *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar35;
  *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar26;
  *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xad8);
  uVar26 = *(ulonglong *)(lVar21 + 0xae0);
  uVar18 = *(ulonglong *)(lVar21 + 0xae8);
  *(ulonglong *)(param_4 + 0x218) = *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar21 + 0xad0)
  ;
  *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar35;
  *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar26;
  *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xaf8);
  uVar26 = *(ulonglong *)(lVar21 + 0xb00);
  uVar18 = *(ulonglong *)(lVar21 + 0xb08);
  *(ulonglong *)(param_4 + 0x238) = *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar21 + 0xaf0)
  ;
  *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar35;
  *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar26;
  *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xb18);
  uVar26 = *(ulonglong *)(lVar21 + 0xb20);
  uVar18 = *(ulonglong *)(lVar21 + 0xb28);
  *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar21 + 0xb10);
  *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar35;
  *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar26;
  *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
  uVar35 = *(ulonglong *)(lVar21 + 0xb38);
  uVar26 = *(ulonglong *)(lVar21 + 0xb40);
  uVar18 = *(ulonglong *)(lVar21 + 0xb48);
  *(ulonglong *)(param_4 + 0x278) = *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar21 + 0xb30)
  ;
  *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar35;
  *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar26;
  *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
  uVar6 = *(undefined8 *)(lVar21 + 0xb50);
  uVar13 = *(undefined8 *)(lVar21 + 0xb58);
  uVar14 = *(undefined8 *)(lVar21 + 0xb60);
  uVar15 = *(undefined8 *)(lVar21 + 0xb68);
  *(undefined8 *)(lVar21 + 0xb50) = *(undefined8 *)(lVar21 + 0x950);
  *(undefined8 *)(lVar21 + 0xb58) = *(undefined8 *)(lVar21 + 0x958);
  *(undefined8 *)(lVar21 + 0xb60) = *(undefined8 *)(lVar21 + 0x960);
  *(undefined8 *)(lVar21 + 0xb68) = *(undefined8 *)(lVar21 + 0x968);
  *(undefined8 *)(lVar21 + 0x950) = uVar6;
  *(undefined8 *)(lVar21 + 0x958) = uVar13;
  *(undefined8 *)(lVar21 + 0x960) = uVar14;
  *(undefined8 *)(lVar21 + 0x968) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xb70);
  uVar13 = *(undefined8 *)(lVar21 + 0xb78);
  uVar14 = *(undefined8 *)(lVar21 + 0xb80);
  uVar15 = *(undefined8 *)(lVar21 + 0xb88);
  *(undefined8 *)(lVar21 + 0xb70) = *(undefined8 *)(lVar21 + 0x970);
  *(undefined8 *)(lVar21 + 0xb78) = *(undefined8 *)(lVar21 + 0x978);
  *(undefined8 *)(lVar21 + 0xb80) = *(undefined8 *)(lVar21 + 0x980);
  *(undefined8 *)(lVar21 + 0xb88) = *(undefined8 *)(lVar21 + 0x988);
  *(undefined8 *)(lVar21 + 0x970) = uVar6;
  *(undefined8 *)(lVar21 + 0x978) = uVar13;
  *(undefined8 *)(lVar21 + 0x980) = uVar14;
  *(undefined8 *)(lVar21 + 0x988) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xb90);
  uVar13 = *(undefined8 *)(lVar21 + 0xb98);
  uVar14 = *(undefined8 *)(lVar21 + 0xba0);
  uVar15 = *(undefined8 *)(lVar21 + 0xba8);
  *(undefined8 *)(lVar21 + 0xb90) = *(undefined8 *)(lVar21 + 0x990);
  *(undefined8 *)(lVar21 + 0xb98) = *(undefined8 *)(lVar21 + 0x998);
  *(undefined8 *)(lVar21 + 0xba0) = *(undefined8 *)(lVar21 + 0x9a0);
  *(undefined8 *)(lVar21 + 0xba8) = *(undefined8 *)(lVar21 + 0x9a8);
  *(undefined8 *)(lVar21 + 0x990) = uVar6;
  *(undefined8 *)(lVar21 + 0x998) = uVar13;
  *(undefined8 *)(lVar21 + 0x9a0) = uVar14;
  *(undefined8 *)(lVar21 + 0x9a8) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xbb0);
  uVar13 = *(undefined8 *)(lVar21 + 3000);
  uVar14 = *(undefined8 *)(lVar21 + 0xbc0);
  uVar15 = *(undefined8 *)(lVar21 + 0xbc8);
  *(undefined8 *)(lVar21 + 0xbb0) = *(undefined8 *)(lVar21 + 0x9b0);
  *(undefined8 *)(lVar21 + 3000) = *(undefined8 *)(lVar21 + 0x9b8);
  *(undefined8 *)(lVar21 + 0xbc0) = *(undefined8 *)(lVar21 + 0x9c0);
  *(undefined8 *)(lVar21 + 0xbc8) = *(undefined8 *)(lVar21 + 0x9c8);
  *(undefined8 *)(lVar21 + 0x9b0) = uVar6;
  *(undefined8 *)(lVar21 + 0x9b8) = uVar13;
  *(undefined8 *)(lVar21 + 0x9c0) = uVar14;
  *(undefined8 *)(lVar21 + 0x9c8) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xbd0);
  uVar13 = *(undefined8 *)(lVar21 + 0xbd8);
  uVar14 = *(undefined8 *)(lVar21 + 0xbe0);
  uVar15 = *(undefined8 *)(lVar21 + 0xbe8);
  *(undefined8 *)(lVar21 + 0xbd0) = *(undefined8 *)(lVar21 + 0x9d0);
  *(undefined8 *)(lVar21 + 0xbd8) = *(undefined8 *)(lVar21 + 0x9d8);
  *(undefined8 *)(lVar21 + 0xbe0) = *(undefined8 *)(lVar21 + 0x9e0);
  *(undefined8 *)(lVar21 + 0xbe8) = *(undefined8 *)(lVar21 + 0x9e8);
  *(undefined8 *)(lVar21 + 0x9d0) = uVar6;
  *(undefined8 *)(lVar21 + 0x9d8) = uVar13;
  *(undefined8 *)(lVar21 + 0x9e0) = uVar14;
  *(undefined8 *)(lVar21 + 0x9e8) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xbf0);
  uVar13 = *(undefined8 *)(lVar21 + 0xbf8);
  uVar14 = *(undefined8 *)(lVar21 + 0xc00);
  uVar15 = *(undefined8 *)(lVar21 + 0xc08);
  *(undefined8 *)(lVar21 + 0xbf0) = *(undefined8 *)(lVar21 + 0x9f0);
  *(undefined8 *)(lVar21 + 0xbf8) = *(undefined8 *)(lVar21 + 0x9f8);
  *(undefined8 *)(lVar21 + 0xc00) = *(undefined8 *)(lVar21 + 0xa00);
  *(undefined8 *)(lVar21 + 0xc08) = *(undefined8 *)(lVar21 + 0xa08);
  *(undefined8 *)(lVar21 + 0x9f0) = uVar6;
  *(undefined8 *)(lVar21 + 0x9f8) = uVar13;
  *(undefined8 *)(lVar21 + 0xa00) = uVar14;
  *(undefined8 *)(lVar21 + 0xa08) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xc10);
  uVar13 = *(undefined8 *)(lVar21 + 0xc18);
  uVar14 = *(undefined8 *)(lVar21 + 0xc20);
  uVar15 = *(undefined8 *)(lVar21 + 0xc28);
  *(undefined8 *)(lVar21 + 0xc10) = *(undefined8 *)(lVar21 + 0xa10);
  *(undefined8 *)(lVar21 + 0xc18) = *(undefined8 *)(lVar21 + 0xa18);
  *(undefined8 *)(lVar21 + 0xc20) = *(undefined8 *)(lVar21 + 0xa20);
  *(undefined8 *)(lVar21 + 0xc28) = *(undefined8 *)(lVar21 + 0xa28);
  *(undefined8 *)(lVar21 + 0xa10) = uVar6;
  *(undefined8 *)(lVar21 + 0xa18) = uVar13;
  *(undefined8 *)(lVar21 + 0xa20) = uVar14;
  *(undefined8 *)(lVar21 + 0xa28) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xc30);
  uVar13 = *(undefined8 *)(lVar21 + 0xc38);
  uVar14 = *(undefined8 *)(lVar21 + 0xc40);
  uVar15 = *(undefined8 *)(lVar21 + 0xc48);
  *(undefined8 *)(lVar21 + 0xc30) = *(undefined8 *)(lVar21 + 0xa30);
  *(undefined8 *)(lVar21 + 0xc38) = *(undefined8 *)(lVar21 + 0xa38);
  *(undefined8 *)(lVar21 + 0xc40) = *(undefined8 *)(lVar21 + 0xa40);
  *(undefined8 *)(lVar21 + 0xc48) = *(undefined8 *)(lVar21 + 0xa48);
  *(undefined8 *)(lVar21 + 0xa30) = uVar6;
  *(undefined8 *)(lVar21 + 0xa38) = uVar13;
  *(undefined8 *)(lVar21 + 0xa40) = uVar14;
  *(undefined8 *)(lVar21 + 0xa48) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xc50);
  uVar13 = *(undefined8 *)(lVar21 + 0xc58);
  uVar14 = *(undefined8 *)(lVar21 + 0xc60);
  uVar15 = *(undefined8 *)(lVar21 + 0xc68);
  *(undefined8 *)(lVar21 + 0xc50) = *(undefined8 *)(lVar21 + 0xa50);
  *(undefined8 *)(lVar21 + 0xc58) = *(undefined8 *)(lVar21 + 0xa58);
  *(undefined8 *)(lVar21 + 0xc60) = *(undefined8 *)(lVar21 + 0xa60);
  *(undefined8 *)(lVar21 + 0xc68) = *(undefined8 *)(lVar21 + 0xa68);
  *(undefined8 *)(lVar21 + 0xa50) = uVar6;
  *(undefined8 *)(lVar21 + 0xa58) = uVar13;
  *(undefined8 *)(lVar21 + 0xa60) = uVar14;
  *(undefined8 *)(lVar21 + 0xa68) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xc70);
  uVar13 = *(undefined8 *)(lVar21 + 0xc78);
  uVar14 = *(undefined8 *)(lVar21 + 0xc80);
  uVar15 = *(undefined8 *)(lVar21 + 0xc88);
  *(undefined8 *)(lVar21 + 0xc70) = *(undefined8 *)(lVar21 + 0xa70);
  *(undefined8 *)(lVar21 + 0xc78) = *(undefined8 *)(lVar21 + 0xa78);
  *(undefined8 *)(lVar21 + 0xc80) = *(undefined8 *)(lVar21 + 0xa80);
  *(undefined8 *)(lVar21 + 0xc88) = *(undefined8 *)(lVar21 + 0xa88);
  *(undefined8 *)(lVar21 + 0xa70) = uVar6;
  *(undefined8 *)(lVar21 + 0xa78) = uVar13;
  *(undefined8 *)(lVar21 + 0xa80) = uVar14;
  *(undefined8 *)(lVar21 + 0xa88) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xc90);
  uVar13 = *(undefined8 *)(lVar21 + 0xc98);
  uVar14 = *(undefined8 *)(lVar21 + 0xca0);
  uVar15 = *(undefined8 *)(lVar21 + 0xca8);
  *(undefined8 *)(lVar21 + 0xc90) = *(undefined8 *)(lVar21 + 0xa90);
  *(undefined8 *)(lVar21 + 0xc98) = *(undefined8 *)(lVar21 + 0xa98);
  *(undefined8 *)(lVar21 + 0xca0) = *(undefined8 *)(lVar21 + 0xaa0);
  *(undefined8 *)(lVar21 + 0xca8) = *(undefined8 *)(lVar21 + 0xaa8);
  *(undefined8 *)(lVar21 + 0xa90) = uVar6;
  *(undefined8 *)(lVar21 + 0xa98) = uVar13;
  *(undefined8 *)(lVar21 + 0xaa0) = uVar14;
  *(undefined8 *)(lVar21 + 0xaa8) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xcb0);
  uVar13 = *(undefined8 *)(lVar21 + 0xcb8);
  uVar14 = *(undefined8 *)(lVar21 + 0xcc0);
  uVar15 = *(undefined8 *)(lVar21 + 0xcc8);
  *(undefined8 *)(lVar21 + 0xcb0) = *(undefined8 *)(lVar21 + 0xab0);
  *(undefined8 *)(lVar21 + 0xcb8) = *(undefined8 *)(lVar21 + 0xab8);
  *(undefined8 *)(lVar21 + 0xcc0) = *(undefined8 *)(lVar21 + 0xac0);
  *(undefined8 *)(lVar21 + 0xcc8) = *(undefined8 *)(lVar21 + 0xac8);
  *(undefined8 *)(lVar21 + 0xab0) = uVar6;
  *(undefined8 *)(lVar21 + 0xab8) = uVar13;
  *(undefined8 *)(lVar21 + 0xac0) = uVar14;
  *(undefined8 *)(lVar21 + 0xac8) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xcd0);
  uVar13 = *(undefined8 *)(lVar21 + 0xcd8);
  uVar14 = *(undefined8 *)(lVar21 + 0xce0);
  uVar15 = *(undefined8 *)(lVar21 + 0xce8);
  *(undefined8 *)(lVar21 + 0xcd0) = *(undefined8 *)(lVar21 + 0xad0);
  *(undefined8 *)(lVar21 + 0xcd8) = *(undefined8 *)(lVar21 + 0xad8);
  *(undefined8 *)(lVar21 + 0xce0) = *(undefined8 *)(lVar21 + 0xae0);
  *(undefined8 *)(lVar21 + 0xce8) = *(undefined8 *)(lVar21 + 0xae8);
  *(undefined8 *)(lVar21 + 0xad0) = uVar6;
  *(undefined8 *)(lVar21 + 0xad8) = uVar13;
  *(undefined8 *)(lVar21 + 0xae0) = uVar14;
  *(undefined8 *)(lVar21 + 0xae8) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xcf0);
  uVar13 = *(undefined8 *)(lVar21 + 0xcf8);
  uVar14 = *(undefined8 *)(lVar21 + 0xd00);
  uVar15 = *(undefined8 *)(lVar21 + 0xd08);
  *(undefined8 *)(lVar21 + 0xcf0) = *(undefined8 *)(lVar21 + 0xaf0);
  *(undefined8 *)(lVar21 + 0xcf8) = *(undefined8 *)(lVar21 + 0xaf8);
  *(undefined8 *)(lVar21 + 0xd00) = *(undefined8 *)(lVar21 + 0xb00);
  *(undefined8 *)(lVar21 + 0xd08) = *(undefined8 *)(lVar21 + 0xb08);
  *(undefined8 *)(lVar21 + 0xaf0) = uVar6;
  *(undefined8 *)(lVar21 + 0xaf8) = uVar13;
  *(undefined8 *)(lVar21 + 0xb00) = uVar14;
  *(undefined8 *)(lVar21 + 0xb08) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xd10);
  uVar13 = *(undefined8 *)(lVar21 + 0xd18);
  uVar14 = *(undefined8 *)(lVar21 + 0xd20);
  uVar15 = *(undefined8 *)(lVar21 + 0xd28);
  *(undefined8 *)(lVar21 + 0xd10) = *(undefined8 *)(lVar21 + 0xb10);
  *(undefined8 *)(lVar21 + 0xd18) = *(undefined8 *)(lVar21 + 0xb18);
  *(undefined8 *)(lVar21 + 0xd20) = *(undefined8 *)(lVar21 + 0xb20);
  *(undefined8 *)(lVar21 + 0xd28) = *(undefined8 *)(lVar21 + 0xb28);
  *(undefined8 *)(lVar21 + 0xb10) = uVar6;
  *(undefined8 *)(lVar21 + 0xb18) = uVar13;
  *(undefined8 *)(lVar21 + 0xb20) = uVar14;
  *(undefined8 *)(lVar21 + 0xb28) = uVar15;
  uVar6 = *(undefined8 *)(lVar21 + 0xd30);
  uVar13 = *(undefined8 *)(lVar21 + 0xd38);
  uVar11 = *(undefined4 *)(lVar21 + 0xd40);
  uVar12 = *(undefined4 *)(lVar21 + 0xd48);
  *(undefined8 *)(lVar21 + 0xd30) = *(undefined8 *)(lVar21 + 0xb30);
  *(undefined8 *)(lVar21 + 0xd38) = *(undefined8 *)(lVar21 + 0xb38);
  *(undefined8 *)(lVar21 + 0xd40) = *(undefined8 *)(lVar21 + 0xb40);
  *(undefined8 *)(lVar21 + 0xd48) = *(undefined8 *)(lVar21 + 0xb48);
  *(undefined8 *)(lVar21 + 0xb30) = uVar6;
  *(undefined8 *)(lVar21 + 0xb38) = uVar13;
  *(undefined4 *)(lVar21 + 0xb40) = uVar11;
  *(undefined4 *)(lVar21 + 0xb44) = *(undefined4 *)(lVar21 + 0xd44);
  *(undefined4 *)(lVar21 + 0xb48) = uVar12;
  *(undefined4 *)(lVar21 + 0xb4c) = *(undefined4 *)(lVar21 + 0xd4c);
  uStack_c0 = 0x140c0f0d9;
  pdb_140a79940(param_4);
  uStack_88 = *(undefined4 *)(lVar21 + 0x948);
  uStack_80 = *(undefined4 *)(lVar21 + 0x94c);
  uStack_90 = CONCAT31(uStack_90._1_3_,*(undefined1 *)(lVar21 + 0x944));
  uStack_98 = CONCAT44(uStack_98._4_4_,*(undefined4 *)(lVar21 + 0x940));
  uStack_c0 = 0x140c0f12e;
  pdb_140a79030(param_4,1,*(longlong *)(lVar21 + 0x930),
                *(longlong *)(lVar21 + 0x930) + *(longlong *)(lVar21 + 0x938) * 0xc);
  uStack_c0 = 0x140c0f13e;
  puVar23 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c8b0);
  if (puVar23 != (undefined8 *)0x0) {
    uStack_c0 = 0x140c0f151;
    lVar24 = (**(code **)(puVar23[1] + 0x18))(*puVar23);
    if (lVar24 != 0) {
      uStack_c0 = 0x140c0f16c;
      pdb_140a78ae0(param_4,1,*(undefined8 *)(lVar24 + 8),*(undefined8 *)(lVar24 + 0x10));
      uVar17 = *(uint *)(lVar21 + 0x940);
      if (*(char *)(lVar21 + 0x944) == '\0') {
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        lVar21 = *param_6;
        lVar24 = *(longlong *)(lVar21 + 0x30);
        uVar6 = *(undefined8 *)(lVar21 + 0x40);
        if (lVar24 == *(longlong *)(lVar21 + 0x20)) {
          uStack_c0 = 0x140c0f201;
          pdb_142d7e6e0(lVar21 + 0x20);
        }
        puVar20 = *(uint **)(lVar21 + 0x28);
        *(undefined8 *)(puVar20 + lVar24 * 8) = uVar6;
        *(undefined8 *)(puVar20 + lVar24 * 8 + 2) = *(undefined8 *)pfStack_70;
        puVar20[lVar24 * 8 + 4] = (uint)pfStack_70[2];
        puVar20[lVar24 * 8 + 5] = uVar17;
        *(undefined1 *)(puVar20 + lVar24 * 8 + 6) = 0;
      }
      else {
        *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
        lVar21 = *param_5;
        lVar24 = *(longlong *)(lVar21 + 0x30);
        uVar6 = *(undefined8 *)(lVar21 + 0x40);
        if (lVar24 == *(longlong *)(lVar21 + 0x20)) {
          uStack_c0 = 0x140c0f1a6;
          pdb_142d7e6e0(lVar21 + 0x20);
        }
        puVar20 = *(uint **)(lVar21 + 0x28);
        *(undefined8 *)(puVar20 + lVar24 * 8) = uVar6;
        *(undefined8 *)(puVar20 + lVar24 * 8 + 2) = *(undefined8 *)pfStack_70;
        puVar20[lVar24 * 8 + 4] = (uint)pfStack_70[2];
        puVar20[lVar24 * 8 + 5] = uVar17;
        *(undefined1 *)(puVar20 + lVar24 * 8 + 6) = 0;
        *(undefined2 *)(puVar20 + lVar24 * 8 + 7) = 0x201;
      }
      *(longlong *)(lVar21 + 0x30) = lVar24 + 1;
      *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
      return puVar20;
    }
  }
                    /* WARNING: Subroutine does not return */
  uStack_c0 = 0x140c0f268;
  pdb_142dc8150(&UNK_1430683e0);
}

