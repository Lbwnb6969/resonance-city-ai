// VA 0x140c0ce00, PDB extent 4445 bytes
// country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::draw_path::closure_env$12,country_core::systems::paths::draw_path::draw_path::closure_env$13,country_core::systems::paths::draw_path::draw_path::closure_env$14>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::world_raster::draw_raster<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::paths::draw_path::draw_path::closure_env$12,country_core::systems::paths::draw_path::draw_path::closure_env$13,country_core::systems::paths::draw_path::draw_path::closure_env$14>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 4445 */

longlong *
pdb_140c0ce00(uint *param_1,float *param_2,longlong *param_3,longlong param_4,longlong *param_5,
             longlong *param_6)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined *puVar26;
  longlong lVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  longlong lVar32;
  undefined *puVar33;
  ulonglong uVar34;
  byte *pbVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
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
  undefined8 uStack_b0;
  undefined8 uStack_88;
  uint uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = (longlong *)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uStack_50 = (byte *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar19 = *param_3;
  uVar17 = *param_1;
  plVar23 = (longlong *)(ulonglong)uVar17;
  lVar22 = 0;
  if ((longlong *)0x1 < plVar23) {
    lVar22 = (longlong)plVar23 - 1;
  }
  if (lVar22 == 0) {
    *(undefined4 *)param_3[6] = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(undefined1 *)(param_3[4] + 0x1e0) = 1;
    plVar23 = (longlong *)&UNK_143044340;
    if (*(char *)param_3[8] != '\0') {
      plVar23 = (longlong *)((char *)param_3[8] + 4);
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,(int)plVar23[1]);
    lStack_68 = *plVar23;
    uStack_80 = param_1[1];
    uStack_88 = CONCAT44(uStack_88._4_4_,uVar17);
    uStack_b0 = 0x140c0cf7e;
    plVar23 = (longlong *)pdb_140bd6210(lVar19,&lStack_68,(char)param_1[3],param_1[2]);
    return plVar23;
  }
  if ((int)lVar22 != 1) {
    if (*(ulonglong *)(lVar19 + 0x58) < 2) {
      return plVar23;
    }
    *(undefined4 *)param_3[0x16] = *(undefined4 *)((longlong)param_3 + 0xbc);
    lVar22 = param_3[0x14];
    lVar24 = *(longlong *)(lVar22 + 0x30);
    uVar7 = *(undefined8 *)(lVar22 + 0x40);
    if (lVar24 == *(longlong *)(lVar22 + 0x20)) {
      uStack_b0 = 0x140c0cfbb;
      pdb_142d7e8a0(lVar22 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar22 + 0x28) + lVar24 * 8) = uVar7;
    *(longlong *)(lVar22 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    lVar22 = *param_6;
    lVar24 = *(longlong *)(lVar22 + 0x30);
    uVar7 = *(undefined8 *)(lVar22 + 0x40);
    if (lVar24 == *(longlong *)(lVar22 + 0x20)) {
      uStack_b0 = 0x140c0cff2;
      pdb_142d7e8a0(lVar22 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar22 + 0x28) + lVar24 * 8) = uVar7;
    *(longlong *)(lVar22 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
    *(undefined4 *)param_3[0x12] = *(undefined4 *)((longlong)param_3 + 0x9c);
    lVar22 = param_3[0x10];
    lVar24 = *(longlong *)(lVar22 + 0x30);
    uVar7 = *(undefined8 *)(lVar22 + 0x40);
    if (lVar24 == *(longlong *)(lVar22 + 0x20)) {
      uStack_b0 = 0x140c0d032;
      pdb_142d7e8a0(lVar22 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar22 + 0x28) + lVar24 * 8) = uVar7;
    *(longlong *)(lVar22 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
    uVar34 = *(ulonglong *)(lVar19 + 0x78);
    uVar25 = *(ulonglong *)(lVar19 + 0x80);
    uVar18 = *(ulonglong *)(lVar19 + 0x88);
    *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar19 + 0x70);
    *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar34;
    *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
    *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x98);
    uVar17 = *(uint *)(lVar19 + 0xa0);
    uVar9 = *(uint *)(lVar19 + 0xa4);
    uVar10 = *(uint *)(lVar19 + 0xa8);
    uVar11 = *(uint *)(lVar19 + 0xac);
    *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar19 + 0x90) | *(ulonglong *)(param_4 + 0xb8);
    *(ulonglong *)(param_4 + 0xc0) = uVar34 | *(ulonglong *)(param_4 + 0xc0);
    *(uint *)(param_4 + 200) = uVar17 | *(uint *)(param_4 + 200);
    *(uint *)(param_4 + 0xcc) = uVar9 | *(uint *)(param_4 + 0xcc);
    *(uint *)(param_4 + 0xd0) = uVar10 | *(uint *)(param_4 + 0xd0);
    *(uint *)(param_4 + 0xd4) = uVar11 | *(uint *)(param_4 + 0xd4);
    uVar34 = *(ulonglong *)(lVar19 + 0xb8);
    uVar25 = *(ulonglong *)(lVar19 + 0xc0);
    uVar18 = *(ulonglong *)(lVar19 + 200);
    *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar19 + 0xb0);
    *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar34;
    *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
    *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0xd8);
    uVar25 = *(ulonglong *)(lVar19 + 0xe0);
    uVar18 = *(ulonglong *)(lVar19 + 0xe8);
    *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar19 + 0xd0);
    *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar34;
    *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
    *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0xf8);
    uVar25 = *(ulonglong *)(lVar19 + 0x100);
    uVar18 = *(ulonglong *)(lVar19 + 0x108);
    *(ulonglong *)(param_4 + 0x118) =
         *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar19 + 0xf0);
    *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar34;
    *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
    *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x118);
    uVar25 = *(ulonglong *)(lVar19 + 0x120);
    uVar18 = *(ulonglong *)(lVar19 + 0x128);
    *(ulonglong *)(param_4 + 0x138) =
         *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar19 + 0x110);
    *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar34;
    *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
    *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x138);
    uVar25 = *(ulonglong *)(lVar19 + 0x140);
    uVar18 = *(ulonglong *)(lVar19 + 0x148);
    *(ulonglong *)(param_4 + 0x158) =
         *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar19 + 0x130);
    *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar34;
    *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
    *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x158);
    uVar25 = *(ulonglong *)(lVar19 + 0x160);
    uVar18 = *(ulonglong *)(lVar19 + 0x168);
    *(ulonglong *)(param_4 + 0x178) =
         *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar19 + 0x150);
    *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar34;
    *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
    *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x178);
    uVar25 = *(ulonglong *)(lVar19 + 0x180);
    uVar18 = *(ulonglong *)(lVar19 + 0x188);
    *(ulonglong *)(param_4 + 0x198) =
         *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar19 + 0x170);
    *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar34;
    *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
    *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x198);
    uVar25 = *(ulonglong *)(lVar19 + 0x1a0);
    uVar18 = *(ulonglong *)(lVar19 + 0x1a8);
    *(ulonglong *)(param_4 + 0x1b8) = *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar19 + 400)
    ;
    *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar34;
    *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
    *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x1b8);
    uVar25 = *(ulonglong *)(lVar19 + 0x1c0);
    uVar18 = *(ulonglong *)(lVar19 + 0x1c8);
    *(ulonglong *)(param_4 + 0x1d8) =
         *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar19 + 0x1b0);
    *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar34;
    *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
    *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x1d8);
    uVar25 = *(ulonglong *)(lVar19 + 0x1e0);
    uVar18 = *(ulonglong *)(lVar19 + 0x1e8);
    *(ulonglong *)(param_4 + 0x1f8) =
         *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar19 + 0x1d0);
    *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar34;
    *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
    *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x1f8);
    uVar25 = *(ulonglong *)(lVar19 + 0x200);
    uVar18 = *(ulonglong *)(lVar19 + 0x208);
    *(ulonglong *)(param_4 + 0x218) =
         *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar19 + 0x1f0);
    *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar34;
    *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
    *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x218);
    uVar25 = *(ulonglong *)(lVar19 + 0x220);
    uVar18 = *(ulonglong *)(lVar19 + 0x228);
    *(ulonglong *)(param_4 + 0x238) =
         *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar19 + 0x210);
    *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar34;
    *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
    *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
    uVar34 = *(ulonglong *)(lVar19 + 0x238);
    uVar25 = *(ulonglong *)(lVar19 + 0x240);
    uVar18 = *(ulonglong *)(lVar19 + 0x248);
    *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar19 + 0x230);
    *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar34;
    *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
    *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
    uVar18 = *(ulonglong *)(lVar19 + 600);
    uVar34 = *(ulonglong *)(lVar19 + 0x260);
    uVar25 = *(ulonglong *)(lVar19 + 0x268);
    *(ulonglong *)(param_4 + 0x278) =
         *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar19 + 0x250);
    *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar18;
    *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar34;
    *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar25;
    uStack_b0 = 0x140c0d353;
    pub_142e32780(lVar19 + 0x70,0,0x200);
    uStack_b0 = 0x140c0d35b;
    pdb_140a79cd0(param_4);
    puVar26 = &UNK_14331c878;
    uStack_b0 = 0x140c0d36b;
    puVar21 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c878);
    if (puVar21 != (undefined8 *)0x0) {
      uStack_b0 = 0x140c0d37e;
      lVar19 = (**(code **)(puVar21[1] + 0x18))(*puVar21);
      if (lVar19 != 0) {
        pbVar28 = *(byte **)(lVar19 + 8);
        pbVar35 = *(byte **)(lVar19 + 0x10);
        uStack_48 = 0xfffffffffffffffe;
        uVar34 = CONCAT71((int7)((ulonglong)puVar26 >> 8),1) & 0xffffffff;
        if (*(char *)(param_4 + 0x299) != '\0') {
          pub_142e32780(pbVar28,0,pbVar35);
          *(undefined1 *)(param_4 + 0x299) = 0;
        }
        *(char *)(param_4 + 0x298) = (char)uVar34;
        cVar16 = pdb_140e94b40();
        if (cVar16 == '\0') {
          lStack_68 = 0;
        }
        else {
          puVar26 = &UNK_1430423bf;
          pbVar29 = (byte *)0x82;
          uVar25 = 0x82;
          lVar19 = pdb_140a7a9e0(&UNK_1430423bf);
          if (lVar19 == 1) {
            if (0x82 < uVar25) {
LAB_140a78eb7:
              pdb_142dc8070(&UNK_1430423bf,0x82,0);
LAB_140a78ed7:
              pdb_142dc8070(&UNK_1430423bf,0x82);
              pcVar8 = (code *)swi(3);
              plVar23 = (longlong *)(*pcVar8)();
              return plVar23;
            }
            puVar26 = &UNK_1430423bf;
            uVar18 = pdb_140a7a9e0(&UNK_1430423bf);
            if ((uVar18 & 1) != 0) {
              if (0x82 < uVar25 + 2) goto LAB_140a78ed7;
              pbVar29 = (byte *)(0x80 - uVar25);
              puVar26 = &UNK_1430423c1 + uVar25;
            }
          }
          puVar30 = &UNK_1430420e1;
          puVar33 = &UNK_1430420b0;
          do {
            bVar4 = puVar30[-1];
            uVar17 = (uint)(char)bVar4;
            uStack_50 = pbVar35;
            if ((char)bVar4 < '\0') {
              bVar5 = puVar30[-2];
              if ((char)bVar5 < -0x40) {
                bVar6 = puVar30[-3];
                if ((char)bVar6 < -0x40) {
                  pbVar1 = puVar30 + -4;
                  puVar30 = puVar30 + -4;
                  uVar17 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
                }
                else {
                  puVar30 = puVar30 + -3;
                  uVar17 = bVar6 & 0xf;
                }
                uVar17 = bVar5 & 0x3f | uVar17 << 6;
              }
              else {
                puVar30 = puVar30 + -2;
                uVar17 = bVar5 & 0x1f;
              }
              uVar17 = (uint)(bVar4 & 0x3f) | uVar17 << 6;
              if (uVar17 != 0x5c) goto LAB_140a78c34;
LAB_140a78c4d:
              puVar33 = puVar30 + -0x1430420af;
              if ((undefined *)0x31 < puVar33) {
                pdb_142dc8070(&UNK_1430420b0,0x31,puVar33,0x31,&UNK_1430425b0);
                goto LAB_140a78eb7;
              }
              lVar19 = 0x31 - (longlong)puVar33;
              puVar33 = puVar30 + 1;
              goto LAB_140a78c70;
            }
            puVar30 = puVar30 + -1;
            if (uVar17 == 0x5c) goto LAB_140a78c4d;
LAB_140a78c34:
            if (uVar17 == 0x2f) goto LAB_140a78c4d;
          } while (puVar30 != &UNK_1430420b0);
          lVar19 = 0x31;
LAB_140a78c70:
          plVar23 = (longlong *)pdb_140e97000();
          if (((char)plVar23[0xd] != '\x01') &&
             (plVar23 = (longlong *)pdb_142d8ec20(plVar23,0), plVar23 == (longlong *)0x0))
          goto LAB_140a78e63;
          if (*plVar23 != 0) goto LAB_140a78e33;
          *plVar23 = -1;
          uStack_58 = plVar23;
          uStack_60 = pdb_140e94f10(plVar23 + 1,puVar26,pbVar29,puVar33,lVar19,1,0);
          *uStack_58 = *uStack_58 + 1;
          lStack_68 = 1;
          pbVar35 = uStack_50;
        }
        puVar21 = (undefined8 *)(param_4 + 0x20);
        puVar31 = (undefined8 *)(param_4 + 0x28);
        if ((char)uVar34 == '\0') {
          puVar31 = (undefined8 *)(param_4 + 0x10);
          puVar21 = (undefined8 *)(param_4 + 8);
        }
        uStack_270 = *puVar31;
        uStack_278 = *puVar21;
        uStack_268 = *(undefined8 *)(param_4 + 0x50);
        uStack_260 = *(undefined8 *)(param_4 + 0x58);
        uVar34 = param_4 + 0x98;
        lStack_258 = param_4 + 0x30;
        pbStack_250 = pbVar28;
        pbStack_248 = pbVar35;
        pdb_140a84210(uVar34,&uStack_278);
        if (-1 < *(longlong *)(param_4 + 0x60)) {
          pbVar29 = (byte *)(param_4 + 0x60);
          pub_142e32760(&uStack_278,uVar34,0x200);
          plVar23 = (longlong *)pdb_1409c5460(pbVar29,&uStack_278);
          do {
            pbVar28 = (byte *)&uStack_278;
            *(undefined1 *)(param_4 + 0x29a) = 1;
            if (lStack_68 == 0) {
              return plVar23;
            }
            plVar23 = (longlong *)pdb_140e97000();
            if ((char)plVar23[0xd] != '\x01') goto LAB_140a78e3f;
            do {
              if (*plVar23 == 0) {
                *plVar23 = -1;
                uStack_50 = (byte *)plVar23;
                pdb_140e95370(plVar23 + 1,uStack_60);
                *(longlong *)uStack_50 = *(longlong *)uStack_50 + 1;
                return (longlong *)uStack_50;
              }
LAB_140a78e33:
              plVar23 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a78e3f:
              plVar23 = (longlong *)pdb_142d8ec20(plVar23,0);
            } while (plVar23 != (longlong *)0x0);
LAB_140a78e63:
            pdb_142dc7890(&UNK_143326860);
LAB_140a78e70:
            pdb_142dbd1a0(pbVar28);
LAB_140a78d80:
            pdb_140e9a150(pbVar28);
            uStack_50 = pbVar28;
            pub_142e32760(&uStack_278,uVar34,0x200);
            pdb_1409c5460(pbVar29 + 0x18);
            pbVar29 = uStack_50;
            pdb_140e9a350();
            plVar23 = (longlong *)0x1;
            LOCK();
            bVar4 = *pbVar29;
            if (bVar4 == 1) {
              *pbVar29 = 0;
            }
            else {
              plVar23 = (longlong *)(ulonglong)bVar4;
            }
            UNLOCK();
            if (bVar4 != 1) {
              plVar23 = (longlong *)pdb_142dbcef0(pbVar29);
            }
          } while( true );
        }
        pbVar29 = *(byte **)(param_4 + 0x68);
        pbVar28 = pbVar29 + 0x10;
        LOCK();
        bVar36 = pbVar29[0x10] == 0;
        if (bVar36) {
          pbVar29[0x10] = 1;
        }
        UNLOCK();
        if (!bVar36) goto LAB_140a78e70;
        goto LAB_140a78d80;
      }
    }
                    /* WARNING: Subroutine does not return */
    uStack_b0 = 0x140c0df50;
    pdb_142dc8150(&UNK_1430683f8);
  }
  lVar22 = *(longlong *)(lVar19 + 0x38);
  if ((lVar22 == 0) || (*(longlong *)(lVar19 + 0x30) + lVar22 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
    uStack_b0 = 0x140c0d3ba;
    pdb_142dc8150(&UNK_143064978);
  }
  plVar23 = (longlong *)(*(longlong *)(lVar19 + 0x30) + lVar22 * 0xc);
  fVar37 = *param_2 - *(float *)((longlong)plVar23 + -0xc);
  fVar38 = param_2[2] - *(float *)((longlong)plVar23 + -4);
  if (SQRT(fVar38 * fVar38 +
           (param_2[1] - *(float *)(plVar23 + -1)) * (param_2[1] - *(float *)(plVar23 + -1)) +
           fVar37 * fVar37) <= _DAT_142e37870) {
    return plVar23;
  }
  uStack_b0 = 0x140c0cedf;
  pdb_140bd6640(lVar19);
  *(undefined8 *)(lVar19 + 0x58) = 0;
  lVar22 = *(longlong *)(lVar19 + 0x18);
  uVar34 = *(ulonglong *)(lVar19 + 0x20);
  if (*(ulonglong *)(lVar19 + 0x48) < uVar34) {
    uStack_88 = 0xc;
    uStack_b0 = 0x140c0d3d9;
    pdb_142d7f1b0(lVar19 + 0x48,0,uVar34,4);
    lVar20 = *(longlong *)(lVar19 + 0x58);
    lVar24 = *(longlong *)(lVar19 + 0x50);
    if (uVar34 == 1) goto LAB_140c0cf16;
LAB_140c0d3ee:
    lVar2 = lVar24 + lVar20 * 0xc;
    lVar32 = 0xc;
    lVar27 = 0;
    do {
      *(undefined4 *)(lVar2 + -4 + lVar32) = *(undefined4 *)(lVar22 + -4 + lVar32);
      *(undefined8 *)(lVar2 + -0xc + lVar32) = *(undefined8 *)(lVar22 + -0xc + lVar32);
      *(undefined8 *)(lVar2 + lVar32) = *(undefined8 *)(lVar22 + lVar32);
      *(undefined4 *)(lVar2 + 8 + lVar32) = *(undefined4 *)(lVar22 + 8 + lVar32);
      lVar32 = lVar32 + 0x18;
      lVar27 = lVar27 + -2;
    } while (-lVar27 != (uVar34 & 0xfffffffffffffffe));
    lVar20 = lVar20 - lVar27;
    if ((uVar34 & 1) == 0) goto LAB_140c0d46e;
    lVar27 = -lVar27;
  }
  else {
    lVar20 = 0;
    if (uVar34 == 0) goto LAB_140c0d46e;
    lVar24 = *(longlong *)(lVar19 + 0x50);
    if (uVar34 != 1) goto LAB_140c0d3ee;
LAB_140c0cf16:
    lVar27 = 0;
  }
  *(undefined4 *)(lVar24 + 8 + lVar20 * 0xc) = *(undefined4 *)(lVar22 + 8 + lVar27 * 0xc);
  *(undefined8 *)(lVar24 + lVar20 * 0xc) = *(undefined8 *)(lVar22 + lVar27 * 0xc);
  lVar20 = lVar20 + 1;
LAB_140c0d46e:
  *(longlong *)(lVar19 + 0x58) = lVar20;
  uStack_b0 = 0x140c0d47f;
  pdb_140bd6350(*(undefined8 *)(lVar19 + 0x30),*(undefined8 *)(lVar19 + 0x38),lVar19 + 0x48);
  uStack_b0 = 0x140c0d495;
  pdb_1419a60d0(*(undefined8 *)(lVar19 + 0x50),*(undefined8 *)(lVar19 + 0x58),10,0);
  uStack_b0 = 0x140c0d4ac;
  pub_142e32780(lVar19 + 0x270,0,0x200);
  uStack_b0 = 0x140c0d4c9;
  pdb_140a83c80(lVar19 + 0x270,*(longlong *)(lVar19 + 0x50),
                *(longlong *)(lVar19 + 0x50) + *(longlong *)(lVar19 + 0x58) * 0xc,
                *(undefined4 *)(lVar19 + 0x60));
  uVar34 = *(ulonglong *)(lVar19 + 0x278);
  uVar25 = *(ulonglong *)(lVar19 + 0x280);
  uVar18 = *(ulonglong *)(lVar19 + 0x288);
  *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar19 + 0x270);
  *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar34;
  *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
  *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x298);
  uVar25 = *(ulonglong *)(lVar19 + 0x2a0);
  uVar18 = *(ulonglong *)(lVar19 + 0x2a8);
  *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(lVar19 + 0x290) | *(ulonglong *)(param_4 + 0xb8);
  *(ulonglong *)(param_4 + 0xc0) = uVar34 | *(ulonglong *)(param_4 + 0xc0);
  *(ulonglong *)(param_4 + 200) = uVar25 | *(ulonglong *)(param_4 + 200);
  *(ulonglong *)(param_4 + 0xd0) = uVar18 | *(ulonglong *)(param_4 + 0xd0);
  uVar34 = *(ulonglong *)(lVar19 + 0x2b8);
  uVar25 = *(ulonglong *)(lVar19 + 0x2c0);
  uVar18 = *(ulonglong *)(lVar19 + 0x2c8);
  *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar19 + 0x2b0);
  *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar34;
  *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
  *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x2d8);
  uVar25 = *(ulonglong *)(lVar19 + 0x2e0);
  uVar18 = *(ulonglong *)(lVar19 + 0x2e8);
  *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar19 + 0x2d0);
  *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar34;
  *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
  *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x2f8);
  uVar25 = *(ulonglong *)(lVar19 + 0x300);
  uVar18 = *(ulonglong *)(lVar19 + 0x308);
  *(ulonglong *)(param_4 + 0x118) = *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar19 + 0x2f0)
  ;
  *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar34;
  *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
  *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x318);
  uVar25 = *(ulonglong *)(lVar19 + 800);
  uVar18 = *(ulonglong *)(lVar19 + 0x328);
  *(ulonglong *)(param_4 + 0x138) = *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar19 + 0x310)
  ;
  *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar34;
  *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
  *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x338);
  uVar25 = *(ulonglong *)(lVar19 + 0x340);
  uVar18 = *(ulonglong *)(lVar19 + 0x348);
  *(ulonglong *)(param_4 + 0x158) = *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar19 + 0x330)
  ;
  *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar34;
  *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
  *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x358);
  uVar25 = *(ulonglong *)(lVar19 + 0x360);
  uVar18 = *(ulonglong *)(lVar19 + 0x368);
  *(ulonglong *)(param_4 + 0x178) = *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar19 + 0x350)
  ;
  *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar34;
  *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
  *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x378);
  uVar25 = *(ulonglong *)(lVar19 + 0x380);
  uVar18 = *(ulonglong *)(lVar19 + 0x388);
  *(ulonglong *)(param_4 + 0x198) = *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar19 + 0x370)
  ;
  *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar34;
  *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
  *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x398);
  uVar25 = *(ulonglong *)(lVar19 + 0x3a0);
  uVar18 = *(ulonglong *)(lVar19 + 0x3a8);
  *(ulonglong *)(param_4 + 0x1b8) = *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar19 + 0x390)
  ;
  *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar34;
  *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
  *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x3b8);
  uVar25 = *(ulonglong *)(lVar19 + 0x3c0);
  uVar18 = *(ulonglong *)(lVar19 + 0x3c8);
  *(ulonglong *)(param_4 + 0x1d8) = *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar19 + 0x3b0)
  ;
  *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar34;
  *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
  *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x3d8);
  uVar25 = *(ulonglong *)(lVar19 + 0x3e0);
  uVar18 = *(ulonglong *)(lVar19 + 1000);
  *(ulonglong *)(param_4 + 0x1f8) = *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar19 + 0x3d0)
  ;
  *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar34;
  *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
  *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x3f8);
  uVar25 = *(ulonglong *)(lVar19 + 0x400);
  uVar18 = *(ulonglong *)(lVar19 + 0x408);
  *(ulonglong *)(param_4 + 0x218) = *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar19 + 0x3f0)
  ;
  *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar34;
  *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
  *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x418);
  uVar25 = *(ulonglong *)(lVar19 + 0x420);
  uVar18 = *(ulonglong *)(lVar19 + 0x428);
  *(ulonglong *)(param_4 + 0x238) = *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar19 + 0x410)
  ;
  *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar34;
  *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
  *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x438);
  uVar25 = *(ulonglong *)(lVar19 + 0x440);
  uVar18 = *(ulonglong *)(lVar19 + 0x448);
  *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar19 + 0x430);
  *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar34;
  *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
  *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x458);
  uVar25 = *(ulonglong *)(lVar19 + 0x460);
  uVar18 = *(ulonglong *)(lVar19 + 0x468);
  *(ulonglong *)(param_4 + 0x278) = *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar19 + 0x450)
  ;
  *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar34;
  *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
  *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x78);
  uVar25 = *(ulonglong *)(lVar19 + 0x80);
  uVar18 = *(ulonglong *)(lVar19 + 0x88);
  *(ulonglong *)(param_4 + 0x98) = *(ulonglong *)(param_4 + 0x98) | *(ulonglong *)(lVar19 + 0x70);
  *(ulonglong *)(param_4 + 0xa0) = *(ulonglong *)(param_4 + 0xa0) | uVar34;
  *(ulonglong *)(param_4 + 0xa8) = *(ulonglong *)(param_4 + 0xa8) | uVar25;
  *(ulonglong *)(param_4 + 0xb0) = *(ulonglong *)(param_4 + 0xb0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x98);
  uVar25 = *(ulonglong *)(lVar19 + 0xa0);
  uVar18 = *(ulonglong *)(lVar19 + 0xa8);
  *(ulonglong *)(param_4 + 0xb8) = *(ulonglong *)(param_4 + 0xb8) | *(ulonglong *)(lVar19 + 0x90);
  *(ulonglong *)(param_4 + 0xc0) = *(ulonglong *)(param_4 + 0xc0) | uVar34;
  *(ulonglong *)(param_4 + 200) = *(ulonglong *)(param_4 + 200) | uVar25;
  *(ulonglong *)(param_4 + 0xd0) = *(ulonglong *)(param_4 + 0xd0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0xb8);
  uVar25 = *(ulonglong *)(lVar19 + 0xc0);
  uVar18 = *(ulonglong *)(lVar19 + 200);
  *(ulonglong *)(param_4 + 0xd8) = *(ulonglong *)(param_4 + 0xd8) | *(ulonglong *)(lVar19 + 0xb0);
  *(ulonglong *)(param_4 + 0xe0) = *(ulonglong *)(param_4 + 0xe0) | uVar34;
  *(ulonglong *)(param_4 + 0xe8) = *(ulonglong *)(param_4 + 0xe8) | uVar25;
  *(ulonglong *)(param_4 + 0xf0) = *(ulonglong *)(param_4 + 0xf0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0xd8);
  uVar25 = *(ulonglong *)(lVar19 + 0xe0);
  uVar18 = *(ulonglong *)(lVar19 + 0xe8);
  *(ulonglong *)(param_4 + 0xf8) = *(ulonglong *)(param_4 + 0xf8) | *(ulonglong *)(lVar19 + 0xd0);
  *(ulonglong *)(param_4 + 0x100) = *(ulonglong *)(param_4 + 0x100) | uVar34;
  *(ulonglong *)(param_4 + 0x108) = *(ulonglong *)(param_4 + 0x108) | uVar25;
  *(ulonglong *)(param_4 + 0x110) = *(ulonglong *)(param_4 + 0x110) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0xf8);
  uVar25 = *(ulonglong *)(lVar19 + 0x100);
  uVar18 = *(ulonglong *)(lVar19 + 0x108);
  *(ulonglong *)(param_4 + 0x118) = *(ulonglong *)(param_4 + 0x118) | *(ulonglong *)(lVar19 + 0xf0);
  *(ulonglong *)(param_4 + 0x120) = *(ulonglong *)(param_4 + 0x120) | uVar34;
  *(ulonglong *)(param_4 + 0x128) = *(ulonglong *)(param_4 + 0x128) | uVar25;
  *(ulonglong *)(param_4 + 0x130) = *(ulonglong *)(param_4 + 0x130) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x118);
  uVar25 = *(ulonglong *)(lVar19 + 0x120);
  uVar18 = *(ulonglong *)(lVar19 + 0x128);
  *(ulonglong *)(param_4 + 0x138) = *(ulonglong *)(param_4 + 0x138) | *(ulonglong *)(lVar19 + 0x110)
  ;
  *(ulonglong *)(param_4 + 0x140) = *(ulonglong *)(param_4 + 0x140) | uVar34;
  *(ulonglong *)(param_4 + 0x148) = *(ulonglong *)(param_4 + 0x148) | uVar25;
  *(ulonglong *)(param_4 + 0x150) = *(ulonglong *)(param_4 + 0x150) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x138);
  uVar25 = *(ulonglong *)(lVar19 + 0x140);
  uVar18 = *(ulonglong *)(lVar19 + 0x148);
  *(ulonglong *)(param_4 + 0x158) = *(ulonglong *)(param_4 + 0x158) | *(ulonglong *)(lVar19 + 0x130)
  ;
  *(ulonglong *)(param_4 + 0x160) = *(ulonglong *)(param_4 + 0x160) | uVar34;
  *(ulonglong *)(param_4 + 0x168) = *(ulonglong *)(param_4 + 0x168) | uVar25;
  *(ulonglong *)(param_4 + 0x170) = *(ulonglong *)(param_4 + 0x170) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x158);
  uVar25 = *(ulonglong *)(lVar19 + 0x160);
  uVar18 = *(ulonglong *)(lVar19 + 0x168);
  *(ulonglong *)(param_4 + 0x178) = *(ulonglong *)(param_4 + 0x178) | *(ulonglong *)(lVar19 + 0x150)
  ;
  *(ulonglong *)(param_4 + 0x180) = *(ulonglong *)(param_4 + 0x180) | uVar34;
  *(ulonglong *)(param_4 + 0x188) = *(ulonglong *)(param_4 + 0x188) | uVar25;
  *(ulonglong *)(param_4 + 400) = *(ulonglong *)(param_4 + 400) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x178);
  uVar25 = *(ulonglong *)(lVar19 + 0x180);
  uVar18 = *(ulonglong *)(lVar19 + 0x188);
  *(ulonglong *)(param_4 + 0x198) = *(ulonglong *)(param_4 + 0x198) | *(ulonglong *)(lVar19 + 0x170)
  ;
  *(ulonglong *)(param_4 + 0x1a0) = *(ulonglong *)(param_4 + 0x1a0) | uVar34;
  *(ulonglong *)(param_4 + 0x1a8) = *(ulonglong *)(param_4 + 0x1a8) | uVar25;
  *(ulonglong *)(param_4 + 0x1b0) = *(ulonglong *)(param_4 + 0x1b0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x198);
  uVar25 = *(ulonglong *)(lVar19 + 0x1a0);
  uVar18 = *(ulonglong *)(lVar19 + 0x1a8);
  *(ulonglong *)(param_4 + 0x1b8) = *(ulonglong *)(param_4 + 0x1b8) | *(ulonglong *)(lVar19 + 400);
  *(ulonglong *)(param_4 + 0x1c0) = *(ulonglong *)(param_4 + 0x1c0) | uVar34;
  *(ulonglong *)(param_4 + 0x1c8) = *(ulonglong *)(param_4 + 0x1c8) | uVar25;
  *(ulonglong *)(param_4 + 0x1d0) = *(ulonglong *)(param_4 + 0x1d0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x1b8);
  uVar25 = *(ulonglong *)(lVar19 + 0x1c0);
  uVar18 = *(ulonglong *)(lVar19 + 0x1c8);
  *(ulonglong *)(param_4 + 0x1d8) = *(ulonglong *)(param_4 + 0x1d8) | *(ulonglong *)(lVar19 + 0x1b0)
  ;
  *(ulonglong *)(param_4 + 0x1e0) = *(ulonglong *)(param_4 + 0x1e0) | uVar34;
  *(ulonglong *)(param_4 + 0x1e8) = *(ulonglong *)(param_4 + 0x1e8) | uVar25;
  *(ulonglong *)(param_4 + 0x1f0) = *(ulonglong *)(param_4 + 0x1f0) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x1d8);
  uVar25 = *(ulonglong *)(lVar19 + 0x1e0);
  uVar18 = *(ulonglong *)(lVar19 + 0x1e8);
  *(ulonglong *)(param_4 + 0x1f8) = *(ulonglong *)(param_4 + 0x1f8) | *(ulonglong *)(lVar19 + 0x1d0)
  ;
  *(ulonglong *)(param_4 + 0x200) = *(ulonglong *)(param_4 + 0x200) | uVar34;
  *(ulonglong *)(param_4 + 0x208) = *(ulonglong *)(param_4 + 0x208) | uVar25;
  *(ulonglong *)(param_4 + 0x210) = *(ulonglong *)(param_4 + 0x210) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x1f8);
  uVar25 = *(ulonglong *)(lVar19 + 0x200);
  uVar18 = *(ulonglong *)(lVar19 + 0x208);
  *(ulonglong *)(param_4 + 0x218) = *(ulonglong *)(param_4 + 0x218) | *(ulonglong *)(lVar19 + 0x1f0)
  ;
  *(ulonglong *)(param_4 + 0x220) = *(ulonglong *)(param_4 + 0x220) | uVar34;
  *(ulonglong *)(param_4 + 0x228) = *(ulonglong *)(param_4 + 0x228) | uVar25;
  *(ulonglong *)(param_4 + 0x230) = *(ulonglong *)(param_4 + 0x230) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x218);
  uVar25 = *(ulonglong *)(lVar19 + 0x220);
  uVar18 = *(ulonglong *)(lVar19 + 0x228);
  *(ulonglong *)(param_4 + 0x238) = *(ulonglong *)(param_4 + 0x238) | *(ulonglong *)(lVar19 + 0x210)
  ;
  *(ulonglong *)(param_4 + 0x240) = *(ulonglong *)(param_4 + 0x240) | uVar34;
  *(ulonglong *)(param_4 + 0x248) = *(ulonglong *)(param_4 + 0x248) | uVar25;
  *(ulonglong *)(param_4 + 0x250) = *(ulonglong *)(param_4 + 0x250) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 0x238);
  uVar25 = *(ulonglong *)(lVar19 + 0x240);
  uVar18 = *(ulonglong *)(lVar19 + 0x248);
  *(ulonglong *)(param_4 + 600) = *(ulonglong *)(param_4 + 600) | *(ulonglong *)(lVar19 + 0x230);
  *(ulonglong *)(param_4 + 0x260) = *(ulonglong *)(param_4 + 0x260) | uVar34;
  *(ulonglong *)(param_4 + 0x268) = *(ulonglong *)(param_4 + 0x268) | uVar25;
  *(ulonglong *)(param_4 + 0x270) = *(ulonglong *)(param_4 + 0x270) | uVar18;
  uVar34 = *(ulonglong *)(lVar19 + 600);
  uVar25 = *(ulonglong *)(lVar19 + 0x260);
  uVar18 = *(ulonglong *)(lVar19 + 0x268);
  *(ulonglong *)(param_4 + 0x278) = *(ulonglong *)(param_4 + 0x278) | *(ulonglong *)(lVar19 + 0x250)
  ;
  *(ulonglong *)(param_4 + 0x280) = *(ulonglong *)(param_4 + 0x280) | uVar34;
  *(ulonglong *)(param_4 + 0x288) = *(ulonglong *)(param_4 + 0x288) | uVar25;
  *(ulonglong *)(param_4 + 0x290) = *(ulonglong *)(param_4 + 0x290) | uVar18;
  uVar7 = *(undefined8 *)(lVar19 + 0x270);
  uVar13 = *(undefined8 *)(lVar19 + 0x278);
  uVar14 = *(undefined8 *)(lVar19 + 0x280);
  uVar15 = *(undefined8 *)(lVar19 + 0x288);
  *(undefined8 *)(lVar19 + 0x270) = *(undefined8 *)(lVar19 + 0x70);
  *(undefined8 *)(lVar19 + 0x278) = *(undefined8 *)(lVar19 + 0x78);
  *(undefined8 *)(lVar19 + 0x280) = *(undefined8 *)(lVar19 + 0x80);
  *(undefined8 *)(lVar19 + 0x288) = *(undefined8 *)(lVar19 + 0x88);
  *(undefined8 *)(lVar19 + 0x70) = uVar7;
  *(undefined8 *)(lVar19 + 0x78) = uVar13;
  *(undefined8 *)(lVar19 + 0x80) = uVar14;
  *(undefined8 *)(lVar19 + 0x88) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x290);
  uVar13 = *(undefined8 *)(lVar19 + 0x298);
  uVar14 = *(undefined8 *)(lVar19 + 0x2a0);
  uVar15 = *(undefined8 *)(lVar19 + 0x2a8);
  *(undefined8 *)(lVar19 + 0x290) = *(undefined8 *)(lVar19 + 0x90);
  *(undefined8 *)(lVar19 + 0x298) = *(undefined8 *)(lVar19 + 0x98);
  *(undefined8 *)(lVar19 + 0x2a0) = *(undefined8 *)(lVar19 + 0xa0);
  *(undefined8 *)(lVar19 + 0x2a8) = *(undefined8 *)(lVar19 + 0xa8);
  *(undefined8 *)(lVar19 + 0x90) = uVar7;
  *(undefined8 *)(lVar19 + 0x98) = uVar13;
  *(undefined8 *)(lVar19 + 0xa0) = uVar14;
  *(undefined8 *)(lVar19 + 0xa8) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x2b0);
  uVar13 = *(undefined8 *)(lVar19 + 0x2b8);
  uVar14 = *(undefined8 *)(lVar19 + 0x2c0);
  uVar15 = *(undefined8 *)(lVar19 + 0x2c8);
  *(undefined8 *)(lVar19 + 0x2b0) = *(undefined8 *)(lVar19 + 0xb0);
  *(undefined8 *)(lVar19 + 0x2b8) = *(undefined8 *)(lVar19 + 0xb8);
  *(undefined8 *)(lVar19 + 0x2c0) = *(undefined8 *)(lVar19 + 0xc0);
  *(undefined8 *)(lVar19 + 0x2c8) = *(undefined8 *)(lVar19 + 200);
  *(undefined8 *)(lVar19 + 0xb0) = uVar7;
  *(undefined8 *)(lVar19 + 0xb8) = uVar13;
  *(undefined8 *)(lVar19 + 0xc0) = uVar14;
  *(undefined8 *)(lVar19 + 200) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x2d0);
  uVar13 = *(undefined8 *)(lVar19 + 0x2d8);
  uVar14 = *(undefined8 *)(lVar19 + 0x2e0);
  uVar15 = *(undefined8 *)(lVar19 + 0x2e8);
  *(undefined8 *)(lVar19 + 0x2d0) = *(undefined8 *)(lVar19 + 0xd0);
  *(undefined8 *)(lVar19 + 0x2d8) = *(undefined8 *)(lVar19 + 0xd8);
  *(undefined8 *)(lVar19 + 0x2e0) = *(undefined8 *)(lVar19 + 0xe0);
  *(undefined8 *)(lVar19 + 0x2e8) = *(undefined8 *)(lVar19 + 0xe8);
  *(undefined8 *)(lVar19 + 0xd0) = uVar7;
  *(undefined8 *)(lVar19 + 0xd8) = uVar13;
  *(undefined8 *)(lVar19 + 0xe0) = uVar14;
  *(undefined8 *)(lVar19 + 0xe8) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x2f0);
  uVar13 = *(undefined8 *)(lVar19 + 0x2f8);
  uVar14 = *(undefined8 *)(lVar19 + 0x300);
  uVar15 = *(undefined8 *)(lVar19 + 0x308);
  *(undefined8 *)(lVar19 + 0x2f0) = *(undefined8 *)(lVar19 + 0xf0);
  *(undefined8 *)(lVar19 + 0x2f8) = *(undefined8 *)(lVar19 + 0xf8);
  *(undefined8 *)(lVar19 + 0x300) = *(undefined8 *)(lVar19 + 0x100);
  *(undefined8 *)(lVar19 + 0x308) = *(undefined8 *)(lVar19 + 0x108);
  *(undefined8 *)(lVar19 + 0xf0) = uVar7;
  *(undefined8 *)(lVar19 + 0xf8) = uVar13;
  *(undefined8 *)(lVar19 + 0x100) = uVar14;
  *(undefined8 *)(lVar19 + 0x108) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x310);
  uVar13 = *(undefined8 *)(lVar19 + 0x318);
  uVar14 = *(undefined8 *)(lVar19 + 800);
  uVar15 = *(undefined8 *)(lVar19 + 0x328);
  *(undefined8 *)(lVar19 + 0x310) = *(undefined8 *)(lVar19 + 0x110);
  *(undefined8 *)(lVar19 + 0x318) = *(undefined8 *)(lVar19 + 0x118);
  *(undefined8 *)(lVar19 + 800) = *(undefined8 *)(lVar19 + 0x120);
  *(undefined8 *)(lVar19 + 0x328) = *(undefined8 *)(lVar19 + 0x128);
  *(undefined8 *)(lVar19 + 0x110) = uVar7;
  *(undefined8 *)(lVar19 + 0x118) = uVar13;
  *(undefined8 *)(lVar19 + 0x120) = uVar14;
  *(undefined8 *)(lVar19 + 0x128) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x330);
  uVar13 = *(undefined8 *)(lVar19 + 0x338);
  uVar14 = *(undefined8 *)(lVar19 + 0x340);
  uVar15 = *(undefined8 *)(lVar19 + 0x348);
  *(undefined8 *)(lVar19 + 0x330) = *(undefined8 *)(lVar19 + 0x130);
  *(undefined8 *)(lVar19 + 0x338) = *(undefined8 *)(lVar19 + 0x138);
  *(undefined8 *)(lVar19 + 0x340) = *(undefined8 *)(lVar19 + 0x140);
  *(undefined8 *)(lVar19 + 0x348) = *(undefined8 *)(lVar19 + 0x148);
  *(undefined8 *)(lVar19 + 0x130) = uVar7;
  *(undefined8 *)(lVar19 + 0x138) = uVar13;
  *(undefined8 *)(lVar19 + 0x140) = uVar14;
  *(undefined8 *)(lVar19 + 0x148) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x350);
  uVar13 = *(undefined8 *)(lVar19 + 0x358);
  uVar14 = *(undefined8 *)(lVar19 + 0x360);
  uVar15 = *(undefined8 *)(lVar19 + 0x368);
  *(undefined8 *)(lVar19 + 0x350) = *(undefined8 *)(lVar19 + 0x150);
  *(undefined8 *)(lVar19 + 0x358) = *(undefined8 *)(lVar19 + 0x158);
  *(undefined8 *)(lVar19 + 0x360) = *(undefined8 *)(lVar19 + 0x160);
  *(undefined8 *)(lVar19 + 0x368) = *(undefined8 *)(lVar19 + 0x168);
  *(undefined8 *)(lVar19 + 0x150) = uVar7;
  *(undefined8 *)(lVar19 + 0x158) = uVar13;
  *(undefined8 *)(lVar19 + 0x160) = uVar14;
  *(undefined8 *)(lVar19 + 0x168) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x370);
  uVar13 = *(undefined8 *)(lVar19 + 0x378);
  uVar14 = *(undefined8 *)(lVar19 + 0x380);
  uVar15 = *(undefined8 *)(lVar19 + 0x388);
  *(undefined8 *)(lVar19 + 0x370) = *(undefined8 *)(lVar19 + 0x170);
  *(undefined8 *)(lVar19 + 0x378) = *(undefined8 *)(lVar19 + 0x178);
  *(undefined8 *)(lVar19 + 0x380) = *(undefined8 *)(lVar19 + 0x180);
  *(undefined8 *)(lVar19 + 0x388) = *(undefined8 *)(lVar19 + 0x188);
  *(undefined8 *)(lVar19 + 0x170) = uVar7;
  *(undefined8 *)(lVar19 + 0x178) = uVar13;
  *(undefined8 *)(lVar19 + 0x180) = uVar14;
  *(undefined8 *)(lVar19 + 0x188) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x390);
  uVar13 = *(undefined8 *)(lVar19 + 0x398);
  uVar14 = *(undefined8 *)(lVar19 + 0x3a0);
  uVar15 = *(undefined8 *)(lVar19 + 0x3a8);
  *(undefined8 *)(lVar19 + 0x390) = *(undefined8 *)(lVar19 + 400);
  *(undefined8 *)(lVar19 + 0x398) = *(undefined8 *)(lVar19 + 0x198);
  *(undefined8 *)(lVar19 + 0x3a0) = *(undefined8 *)(lVar19 + 0x1a0);
  *(undefined8 *)(lVar19 + 0x3a8) = *(undefined8 *)(lVar19 + 0x1a8);
  *(undefined8 *)(lVar19 + 400) = uVar7;
  *(undefined8 *)(lVar19 + 0x198) = uVar13;
  *(undefined8 *)(lVar19 + 0x1a0) = uVar14;
  *(undefined8 *)(lVar19 + 0x1a8) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x3b0);
  uVar13 = *(undefined8 *)(lVar19 + 0x3b8);
  uVar14 = *(undefined8 *)(lVar19 + 0x3c0);
  uVar15 = *(undefined8 *)(lVar19 + 0x3c8);
  *(undefined8 *)(lVar19 + 0x3b0) = *(undefined8 *)(lVar19 + 0x1b0);
  *(undefined8 *)(lVar19 + 0x3b8) = *(undefined8 *)(lVar19 + 0x1b8);
  *(undefined8 *)(lVar19 + 0x3c0) = *(undefined8 *)(lVar19 + 0x1c0);
  *(undefined8 *)(lVar19 + 0x3c8) = *(undefined8 *)(lVar19 + 0x1c8);
  *(undefined8 *)(lVar19 + 0x1b0) = uVar7;
  *(undefined8 *)(lVar19 + 0x1b8) = uVar13;
  *(undefined8 *)(lVar19 + 0x1c0) = uVar14;
  *(undefined8 *)(lVar19 + 0x1c8) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x3d0);
  uVar13 = *(undefined8 *)(lVar19 + 0x3d8);
  uVar14 = *(undefined8 *)(lVar19 + 0x3e0);
  uVar15 = *(undefined8 *)(lVar19 + 1000);
  *(undefined8 *)(lVar19 + 0x3d0) = *(undefined8 *)(lVar19 + 0x1d0);
  *(undefined8 *)(lVar19 + 0x3d8) = *(undefined8 *)(lVar19 + 0x1d8);
  *(undefined8 *)(lVar19 + 0x3e0) = *(undefined8 *)(lVar19 + 0x1e0);
  *(undefined8 *)(lVar19 + 1000) = *(undefined8 *)(lVar19 + 0x1e8);
  *(undefined8 *)(lVar19 + 0x1d0) = uVar7;
  *(undefined8 *)(lVar19 + 0x1d8) = uVar13;
  *(undefined8 *)(lVar19 + 0x1e0) = uVar14;
  *(undefined8 *)(lVar19 + 0x1e8) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x3f0);
  uVar13 = *(undefined8 *)(lVar19 + 0x3f8);
  uVar14 = *(undefined8 *)(lVar19 + 0x400);
  uVar15 = *(undefined8 *)(lVar19 + 0x408);
  *(undefined8 *)(lVar19 + 0x3f0) = *(undefined8 *)(lVar19 + 0x1f0);
  *(undefined8 *)(lVar19 + 0x3f8) = *(undefined8 *)(lVar19 + 0x1f8);
  *(undefined8 *)(lVar19 + 0x400) = *(undefined8 *)(lVar19 + 0x200);
  *(undefined8 *)(lVar19 + 0x408) = *(undefined8 *)(lVar19 + 0x208);
  *(undefined8 *)(lVar19 + 0x1f0) = uVar7;
  *(undefined8 *)(lVar19 + 0x1f8) = uVar13;
  *(undefined8 *)(lVar19 + 0x200) = uVar14;
  *(undefined8 *)(lVar19 + 0x208) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x410);
  uVar13 = *(undefined8 *)(lVar19 + 0x418);
  uVar14 = *(undefined8 *)(lVar19 + 0x420);
  uVar15 = *(undefined8 *)(lVar19 + 0x428);
  *(undefined8 *)(lVar19 + 0x410) = *(undefined8 *)(lVar19 + 0x210);
  *(undefined8 *)(lVar19 + 0x418) = *(undefined8 *)(lVar19 + 0x218);
  *(undefined8 *)(lVar19 + 0x420) = *(undefined8 *)(lVar19 + 0x220);
  *(undefined8 *)(lVar19 + 0x428) = *(undefined8 *)(lVar19 + 0x228);
  *(undefined8 *)(lVar19 + 0x210) = uVar7;
  *(undefined8 *)(lVar19 + 0x218) = uVar13;
  *(undefined8 *)(lVar19 + 0x220) = uVar14;
  *(undefined8 *)(lVar19 + 0x228) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x430);
  uVar13 = *(undefined8 *)(lVar19 + 0x438);
  uVar14 = *(undefined8 *)(lVar19 + 0x440);
  uVar15 = *(undefined8 *)(lVar19 + 0x448);
  *(undefined8 *)(lVar19 + 0x430) = *(undefined8 *)(lVar19 + 0x230);
  *(undefined8 *)(lVar19 + 0x438) = *(undefined8 *)(lVar19 + 0x238);
  *(undefined8 *)(lVar19 + 0x440) = *(undefined8 *)(lVar19 + 0x240);
  *(undefined8 *)(lVar19 + 0x448) = *(undefined8 *)(lVar19 + 0x248);
  *(undefined8 *)(lVar19 + 0x230) = uVar7;
  *(undefined8 *)(lVar19 + 0x238) = uVar13;
  *(undefined8 *)(lVar19 + 0x240) = uVar14;
  *(undefined8 *)(lVar19 + 0x248) = uVar15;
  uVar7 = *(undefined8 *)(lVar19 + 0x450);
  uVar13 = *(undefined8 *)(lVar19 + 0x458);
  uVar3 = *(undefined4 *)(lVar19 + 0x460);
  uVar12 = *(undefined4 *)(lVar19 + 0x468);
  *(undefined8 *)(lVar19 + 0x450) = *(undefined8 *)(lVar19 + 0x250);
  *(undefined8 *)(lVar19 + 0x458) = *(undefined8 *)(lVar19 + 600);
  *(undefined8 *)(lVar19 + 0x460) = *(undefined8 *)(lVar19 + 0x260);
  *(undefined8 *)(lVar19 + 0x468) = *(undefined8 *)(lVar19 + 0x268);
  *(undefined8 *)(lVar19 + 0x250) = uVar7;
  *(undefined8 *)(lVar19 + 600) = uVar13;
  *(undefined4 *)(lVar19 + 0x260) = uVar3;
  *(undefined4 *)(lVar19 + 0x264) = *(undefined4 *)(lVar19 + 0x464);
  *(undefined4 *)(lVar19 + 0x268) = uVar12;
  *(undefined4 *)(lVar19 + 0x26c) = *(undefined4 *)(lVar19 + 0x46c);
  uStack_b0 = 0x140c0de48;
  pdb_140a79940(param_4);
  uStack_78 = *(undefined4 *)(lVar19 + 0x68);
  uStack_70 = *(undefined4 *)(lVar19 + 0x6c);
  uStack_80 = CONCAT31(uStack_80._1_3_,*(undefined1 *)(lVar19 + 100));
  uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(lVar19 + 0x60));
  uStack_b0 = 0x140c0de87;
  pdb_140a79030(param_4,1,*(longlong *)(lVar19 + 0x50),
                *(longlong *)(lVar19 + 0x50) + *(longlong *)(lVar19 + 0x58) * 0xc);
  uStack_b0 = 0x140c0de97;
  puVar21 = (undefined8 *)pdb_140bf45b0(param_3[0xc],&UNK_14331c878);
  if (puVar21 != (undefined8 *)0x0) {
    uStack_b0 = 0x140c0deaa;
    lVar22 = (**(code **)(puVar21[1] + 0x18))(*puVar21);
    if (lVar22 != 0) {
      uStack_b0 = 0x140c0dec5;
      plVar23 = (longlong *)
                pdb_140a78ae0(param_4,1,*(undefined8 *)(lVar22 + 8),*(undefined8 *)(lVar22 + 0x10));
      if (*(char *)(lVar19 + 100) == '\0') {
        uVar3 = *(undefined4 *)(lVar19 + 0x60);
        *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
        lVar19 = *param_5;
        lVar22 = *(longlong *)(lVar19 + 0x30);
        uVar7 = *(undefined8 *)(lVar19 + 0x40);
        if (lVar22 == *(longlong *)(lVar19 + 0x20)) {
          uStack_b0 = 0x140c0def7;
          pdb_142d7e6e0(lVar19 + 0x20);
        }
        lVar24 = *(longlong *)(lVar19 + 0x28);
        lVar20 = lVar22 * 0x20;
        *(undefined8 *)(lVar24 + lVar20) = uVar7;
        *(undefined8 *)(lVar24 + 8 + lVar20) = *(undefined8 *)param_2;
        plVar23 = (longlong *)(ulonglong)(uint)param_2[2];
        *(float *)(lVar24 + 0x10 + lVar20) = param_2[2];
        *(undefined4 *)(lVar24 + 0x14 + lVar20) = uVar3;
        *(undefined1 *)(lVar24 + 0x18 + lVar20) = 0;
        *(longlong *)(lVar19 + 0x30) = lVar22 + 1;
        *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
      }
      return plVar23;
    }
  }
                    /* WARNING: Subroutine does not return */
  uStack_b0 = 0x140c0df5c;
  pdb_142dc8150(&UNK_1430683e0);
}

