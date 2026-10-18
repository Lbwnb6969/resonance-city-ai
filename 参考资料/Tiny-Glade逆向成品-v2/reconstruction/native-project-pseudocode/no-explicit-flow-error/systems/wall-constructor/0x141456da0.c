// VA 0x141456da0, PDB extent 15312 bytes
// system_wall_constructor::plaster_systems::generate_plaster_mesh_and_entities<core::iter::adapters::map::Map<core::iter::adapters::filter::Filter<core::slice::iter::Iter<tuple$<utils::geometry::aabb::Aabb2,country_core::resources::walls::wall_holes::HoleType,country_core::resources::walls::wall_holes::HoleOrigin> >,country_core::resources::walls::wall_holes::impl$1::holes_no_duplicates::closure_env$0>,country_core::resources::walls::wall_holes::impl$1::holes_no_duplicates::closure_env$1> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/plaster_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::plaster_systems::generate_plaster_mesh_and_entities<core::iter::adapters::map::Map<core::iter::adapters::filter::Filter<core::slice::iter::Iter<tuple$<utils::geometry::aabb::Aabb2,country_core::resources::walls::wall_holes::HoleType,country_core::resources::walls::wall_holes::HoleOrigin>
   >,country_core::resources::walls::wall_holes::impl$1::holes_no_duplicates::closure_env$0>,country_core::resources::walls::wall_holes::impl$1::holes_no_duplicates::closure_env$1>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/plaster_systems.rs
   Extent: 15312 */

void pdb_141456da0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char cVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  byte *pbVar27;
  longlong lVar28;
  undefined4 *puVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  uint uVar33;
  byte *pbVar34;
  ulonglong uVar35;
  int *piVar36;
  float *pfVar37;
  undefined *puVar38;
  ulonglong uVar39;
  longlong lVar40;
  ushort *puVar41;
  undefined *puVar42;
  float *pfVar43;
  byte *pbVar44;
  longlong lVar45;
  undefined8 uVar46;
  byte *pbVar47;
  byte *pbVar48;
  bool bVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  undefined4 extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  undefined4 uVar53;
  undefined1 in_XMM1 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  uint uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined4 uStack_458;
  undefined4 uStack_454;
  byte *pbStack_450;
  longlong alStack_448 [4];
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 auStack_418 [16];
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulonglong uStack_3f8;
  undefined8 uStack_3e8;
  float fStack_3e0;
  float *pfStack_3d8;
  ulonglong uStack_3d0;
  ulonglong uStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  byte *pbStack_3b0;
  undefined8 *puStack_3a8;
  longlong lStack_3a0;
  byte *pbStack_398;
  undefined8 uStack_390;
  longlong lStack_388;
  byte *pbStack_380;
  ulonglong uStack_378;
  longlong lStack_370;
  ulonglong *puStack_368;
  longlong lStack_360;
  undefined8 uStack_358;
  byte *pbStack_350;
  longlong lStack_348;
  undefined8 uStack_340;
  uint uStack_338;
  undefined4 uStack_334;
  byte *pbStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined3 uStack_318;
  undefined4 uStack_315;
  uint uStack_311;
  undefined4 uStack_30d;
  undefined1 uStack_309;
  undefined7 uStack_308;
  undefined8 uStack_301;
  undefined1 uStack_2f9;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulonglong uStack_2c8;
  ulonglong uStack_2c0;
  ulonglong uStack_2b8;
  longlong lStack_2a4;
  undefined4 uStack_29c;
  byte *pbStack_298;
  longlong lStack_290;
  undefined8 uStack_288;
  uint uStack_27c;
  undefined8 uStack_278;
  ulonglong uStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  ulonglong uStack_258;
  ulonglong uStack_250;
  undefined1 auStack_248 [16];
  byte *pbStack_230;
  ulonglong uStack_228;
  float *pfStack_220;
  float *pfStack_218;
  undefined8 uStack_210;
  float *pfStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined4 uStack_1a4;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  ulonglong uStack_190;
  float *pfStack_188;
  byte *pbStack_180;
  float *pfStack_178;
  byte *pbStack_170;
  float *pfStack_168;
  byte *pbStack_160;
  float fStack_154;
  undefined4 uStack_150;
  float fStack_14c;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  uint uStack_120;
  float fStack_11c;
  byte *pbStack_118;
  float *pfStack_110;
  undefined1 uStack_101;
  byte *pbStack_100;
  undefined1 uStack_f5;
  byte bStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pfStack_188 = (float *)0x0;
  pbStack_180 = (byte *)0x8;
  pfStack_178 = (float *)0x0;
  uStack_1c0 = 0;
  pbStack_1b8 = (byte *)0x8;
  pbStack_1b0 = (byte *)0x0;
  uStack_f2 = 1;
  uStack_f3 = 1;
  lStack_370 = pdb_140a92040(*param_2);
  uStack_390 = *param_6;
  uStack_f2 = 1;
  uStack_f3 = 1;
  uVar26 = pdb_140b54b40(*param_3);
  if ((uVar26 & 0xffffffff) == 0) {
LAB_141456f5b:
    lVar40 = 0;
  }
  else {
    lVar40 = param_4[1];
    uVar35 = uVar26 & 0xffffffff ^ 0xffffffff;
    if (((*(ulonglong *)(lVar40 + 0x10) <= uVar35) ||
        (piVar36 = (int *)(uVar35 * 0x18 + *(longlong *)(lVar40 + 8)),
        piVar36[4] != (int)(uVar26 >> 0x20))) || (*piVar36 == 0)) goto LAB_141456f5b;
    lVar45 = *param_4;
    uVar26 = *(ulonglong *)(piVar36 + 2);
    if ((*(ulonglong *)(lVar45 + 0x38) <= (uVar26 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lVar45 + 0x28) + (uVar26 >> 6 & 0x3ffffff) * 8) >>
         (uVar26 & 0x3f) & 1) == 0)) goto LAB_141456f5b;
    if (*(ulonglong *)(lVar45 + 0x110) <
        *(ulonglong *)(*(longlong *)(lVar40 + 0x1a0) + 0x40 + (uVar26 >> 0x20) * 0x48)) {
      lVar40 = *(longlong *)(lVar40 + 0x1a0) + (uVar26 >> 0x20) * 0x48;
      uVar26 = *(ulonglong *)(*(longlong *)(lVar40 + 0x38) + *(ulonglong *)(lVar45 + 0x110) * 8);
      if (uVar26 == 0) goto LAB_141459153;
      lVar40 = *(longlong *)(*(longlong *)(lVar40 + 0x18) + 0x10 + ~uVar26 * 0x30);
    }
    else {
LAB_141459153:
      lVar40 = 0;
    }
    lVar40 = (ulonglong)(uint)~piVar36[1] * 0x58 + lVar40;
  }
  pfStack_178 = (float *)0x0;
  pfStack_110 = (float *)pbStack_1b0;
  pbStack_1b0 = (byte *)0x0;
  pbStack_100 = (byte *)0x0;
  pbStack_118 = pbStack_1b8;
  pbVar27 = pbStack_1b8;
  puStack_3a8 = param_1;
  while (pfStack_110 != (float *)pbStack_100) {
    pbStack_100 = pbStack_100 + 1;
    pdb_1413fffc0(pbVar27);
    pbVar27 = pbVar27 + 8;
  }
  uStack_120 = *(uint *)(param_7 + 600);
  fVar67 = *(float *)(param_7 + 0x30);
  if (param_8 == 0) {
    pfStack_220 = (float *)0x4;
    pbStack_380 = (byte *)0x0;
    lVar45 = 0;
  }
  else {
    uVar26 = (ulonglong)(param_9 - param_8) >> 2;
    uVar35 = uVar26 * -0x6666666666666660;
    if (0x7ffffffffffffffc < uVar35 || 0x9fffffffffffffec < (ulonglong)(param_9 - param_8)) {
      uVar46 = 0;
LAB_141457040:
      uStack_f2 = 1;
      uStack_f3 = 1;
      pdb_142dc7e2a(uVar46,uVar35);
      goto LAB_141459527;
    }
    if (uVar35 == 0) {
      pbVar27 = (byte *)0x4;
      uStack_328 = (float *)0x0;
    }
    else {
      pdb_14007ee60();
      uVar46 = 4;
      pbVar27 = pub_1406abab0(uVar35,4);
      if (pbVar27 == (byte *)0x0) goto LAB_141457040;
      uStack_328 = (float *)(uVar26 * -0x6666666666666666);
    }
    uStack_320 = SUB84(pbVar27,0);
    uStack_31c = (undefined4)((ulonglong)pbVar27 >> 0x20);
    uStack_318 = 0;
    uStack_315 = 0;
    uStack_311 = uStack_311 & 0xffffff00;
    pbVar44 = (byte *)0x0;
    while (lVar45 = param_8, fVar68 = _DAT_142e36f34, fVar64 = _DAT_142e36f28, lVar45 != param_9) {
      param_8 = lVar45 + 0x14;
      if (*(char *)(lVar45 + 0x11) == '\0') {
        uVar50 = pdb_140deec20(lVar45);
        uVar53 = in_XMM1._0_4_;
        uVar51 = pdb_140deecc0();
        auVar54 = in_XMM1;
        if ((float *)pbVar44 == uStack_328) {
          pdb_142d7f1b0(&uStack_328,pbVar44,1,4,0x10);
          pbVar27 = (byte *)CONCAT44(uStack_31c,uStack_320);
        }
        lVar28 = (longlong)pbVar44 * 0x10;
        *(undefined4 *)(pbVar27 + lVar28) = uVar50;
        *(undefined4 *)(pbVar27 + lVar28 + 4) = uVar53;
        *(undefined4 *)(pbVar27 + lVar28 + 8) = uVar51;
        *(int *)(pbVar27 + lVar28 + 0xc) = in_XMM1._0_4_;
        pbVar44 = pbVar44 + 1;
        uStack_318 = SUB83(pbVar44,0);
        uStack_315 = (undefined4)((ulonglong)pbVar44 >> 0x18);
        uStack_311._0_1_ = (undefined1)((ulonglong)pbVar44 >> 0x38);
        in_XMM1 = auVar54;
      }
    }
    pbVar27 = pbVar44;
    if (uStack_120 != 2) {
      lVar45 = CONCAT44(uStack_31c,uStack_320);
      if (pbVar44 == (byte *)0x0) {
        pbVar27 = (byte *)0x0;
      }
      else {
        puVar29 = (undefined4 *)(lVar45 + 0xc);
        pbVar48 = (byte *)0x0;
        do {
          fVar69 = (float)puVar29[-3];
          uVar46 = *(undefined8 *)(puVar29 + -2);
          uVar50 = *puVar29;
          if (fVar69 + (float)puVar29[-1] + fVar64 <= fVar67) {
            if ((fVar69 - (float)puVar29[-1]) + fVar68 < 0.0) {
              if (uStack_328 <= pbVar27) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14330a818,0x2e,&UNK_14330a848);
              }
              fVar69 = fVar69 + fVar67;
              goto LAB_1414571d5;
            }
          }
          else {
            if (uStack_328 <= pbVar27) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_14330a818,0x2e,&UNK_14330a848);
            }
            fVar69 = fVar69 - fVar67;
LAB_1414571d5:
            lVar28 = (longlong)pbVar27 * 0x10;
            *(float *)(lVar45 + lVar28) = fVar69;
            *(undefined8 *)(lVar45 + 4 + lVar28) = uVar46;
            *(undefined4 *)(lVar45 + 0xc + lVar28) = uVar50;
            pbVar27 = pbVar27 + 1;
          }
          pbVar48 = pbVar48 + 1;
          puVar29 = puVar29 + 4;
        } while (pbVar44 != pbVar48);
      }
    }
    pfStack_220 = (float *)CONCAT44(uStack_31c,uStack_320);
    lVar45 = (longlong)pbVar27 << 4;
    pbStack_380 = (byte *)uStack_328;
  }
  lStack_3c0 = *(longlong *)(param_7 + 0xf8);
  uVar26 = *(ulonglong *)(param_7 + 0x100);
  lStack_3b8 = *(longlong *)(param_7 + 0x90);
  uStack_3d0 = *(ulonglong *)(param_7 + 0x98);
  lStack_3a0 = *(longlong *)(param_7 + 0xe0);
  uStack_3c8 = *(ulonglong *)(param_7 + 0xe8);
  if (lVar40 == 0) {
    bStack_f4 = 1;
    uStack_1a4 = 0;
  }
  else {
    uStack_1a4 = pdb_140b77b50(lVar40);
    bStack_f4 = pdb_140b771d0(lVar40);
    bStack_f4 = bStack_f4 ^ 1;
  }
  pdb_140810910(&uStack_458,param_7,lVar40);
  pbVar27 = (byte *)CONCAT44(uStack_454,uStack_458);
  pbVar44 = (byte *)&uStack_458;
  if (4 < uStack_3f8) {
    pbVar44 = pbVar27;
  }
  uStack_228 = uStack_3f8;
  pbVar48 = (byte *)uStack_3f8;
  if (4 < uStack_3f8) {
    pbVar48 = pbStack_450;
  }
  if (pbVar48 == (byte *)0x0) {
    uStack_1a0 = 0;
    pbStack_198 = (byte *)0x4;
    uStack_190 = 0;
    uStack_278 = 0;
    uStack_f5 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14330a5f8);
  }
  uStack_378 = uVar26;
  lStack_388 = lVar45;
  if (pbVar48 < 4) {
    uVar26 = 0;
    lVar40 = 0;
LAB_1414573e8:
    lVar45 = 0;
    do {
      lVar40 = lVar40 + (ulonglong)*(ushort *)(pbVar44 + lVar45 + uVar26 * 0x18 + 0x12) *
                        (ulonglong)*(ushort *)(pbVar44 + lVar45 + uVar26 * 0x18 + 0x10);
      lVar45 = lVar45 + 0x18;
    } while ((ulonglong)(((uint)pbVar48 & 3) << 3) * 3 != lVar45);
  }
  else {
    puVar41 = (ushort *)(pbVar44 + 0x5a);
    uVar26 = 0;
    lVar40 = 0;
    do {
      lVar40 = (ulonglong)*puVar41 * (ulonglong)puVar41[-1] +
               (ulonglong)puVar41[-0xc] * (ulonglong)puVar41[-0xd] +
               (ulonglong)puVar41[-0x18] * (ulonglong)puVar41[-0x19] +
               (ulonglong)puVar41[-0x24] * (ulonglong)puVar41[-0x25] + lVar40;
      uVar26 = uVar26 + 4;
      puVar41 = puVar41 + 0x30;
    } while (((ulonglong)pbVar48 & 0xfffffffffffffffc) != uVar26);
    if (((ulonglong)pbVar48 & 3) != 0) goto LAB_1414573e8;
  }
  uVar26 = lVar40 << (1 < uStack_120);
  puVar41 = (ushort *)(pbVar27 + 0x10);
  uStack_1a0 = 0;
  pbStack_198 = (byte *)0x4;
  uStack_190 = 0;
  pbVar34 = pbVar27;
  if (uStack_3f8 < 5) {
    puVar41 = (ushort *)alStack_448;
    pbVar34 = (byte *)&uStack_458;
  }
  pbVar47 = (byte *)((ulonglong)*(ushort *)(pbVar34 + 0x12) * (ulonglong)*puVar41);
  if (pbVar34 + 0x18 != pbVar44 + (longlong)pbVar48 * 0x18) {
    uVar35 = (longlong)(pbVar44 + (longlong)pbVar48 * 0x18) - (longlong)(pbVar34 + 0x18);
    if (uVar35 == 0x18) {
      uVar39 = 0;
      pbVar44 = pbVar47;
    }
    else {
      uVar35 = (uVar35 >> 3) * -0x5555555555555555;
      puVar41 = (ushort *)(pbVar34 + 0x42);
      uVar39 = 0;
      do {
        pbVar44 = (byte *)((ulonglong)puVar41[-0xc] * (ulonglong)puVar41[-0xd]);
        if ((byte *)((ulonglong)puVar41[-0xc] * (ulonglong)puVar41[-0xd]) < pbVar47) {
          pbVar44 = pbVar47;
        }
        pbVar47 = (byte *)((ulonglong)*puVar41 * (ulonglong)puVar41[-1]);
        if ((byte *)((ulonglong)*puVar41 * (ulonglong)puVar41[-1]) < pbVar44) {
          pbVar47 = pbVar44;
        }
        uVar39 = uVar39 + 2;
        puVar41 = puVar41 + 0x18;
      } while ((uVar35 & 0xffffffffffffffe) != uVar39);
      pbVar44 = pbVar47;
      if ((uVar35 & 1) == 0) goto LAB_141457519;
    }
    pbVar47 = (byte *)((ulonglong)*(ushort *)(pbVar34 + uVar39 * 0x18 + 0x2a) *
                      (ulonglong)*(ushort *)(pbVar34 + uVar39 * 0x18 + 0x28));
    if ((byte *)((ulonglong)*(ushort *)(pbVar34 + uVar39 * 0x18 + 0x2a) *
                (ulonglong)*(ushort *)(pbVar34 + uVar39 * 0x18 + 0x28)) < pbVar44) {
      pbVar47 = pbVar44;
    }
  }
LAB_141457519:
  uVar35 = (longlong)pbVar47 << 5;
  pbStack_160 = (byte *)0x4;
  fStack_14c = fVar67;
  if (pbVar47 == (byte *)0x0) {
    pbVar44 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar44 = pub_1406abab0(uVar35,4);
    if (pbVar44 == (byte *)0x0) {
      uStack_278 = 0;
      uStack_f5 = 1;
      pdb_142dc7e2a(4,uVar35);
LAB_141459527:
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
    pbVar27 = (byte *)CONCAT44(uStack_454,uStack_458);
  }
  uVar19 = _UNK_142e377ec;
  uVar18 = _UNK_142e377e8;
  uVar17 = _UNK_142e377e4;
  uVar15 = _DAT_142e377e0;
  uStack_27c = (uint)(1 < uStack_120);
  uStack_2d8 = uStack_408;
  uStack_2d0 = uStack_400;
  auStack_2e8 = auStack_418;
  uStack_2f8 = uStack_428;
  uStack_2f0 = uStack_420;
  uStack_308 = (undefined7)alStack_448[2];
  uStack_301 = alStack_448._23_8_;
  uStack_2f9 = alStack_448[3]._7_1_;
  uStack_2b8 = uStack_3f8;
  if (4 < uStack_3f8) {
    uStack_2b8 = (ulonglong)pbStack_450;
  }
  uStack_228 = uStack_3f8;
  uStack_2c8 = 0;
  if (4 < uStack_3f8) {
    pbStack_450 = (byte *)0;
    uStack_2c8 = uStack_3f8;
  }
  uStack_318 = (undefined3)alStack_448[0];
  uStack_315 = (undefined4)((ulonglong)alStack_448[0] >> 0x18);
  uStack_311._0_1_ = (undefined1)((ulonglong)alStack_448[0] >> 0x38);
  uStack_311._1_3_ = (undefined3)alStack_448[1];
  uStack_30d = (undefined4)((ulonglong)alStack_448[1] >> 0x18);
  uStack_309 = (undefined1)((ulonglong)alStack_448[1] >> 0x38);
  uStack_328 = (float *)pbVar27;
  uStack_320 = SUB84(pbStack_450,0);
  uStack_31c = (undefined4)((ulonglong)pbStack_450 >> 0x20);
  uStack_2c0 = 0;
  puStack_368 = (ulonglong *)(param_7 + 0x25c);
  pfStack_3d8 = (float *)((longlong)pfStack_220 + lStack_388);
  pfStack_110 = (float *)pbVar44;
  pbStack_3b0 = pbVar44 + 8;
  lStack_360 = -0x14330a610;
  pbStack_170 = pbVar47;
  uStack_258 = uStack_2b8;
  uVar39 = 0;
LAB_14145766d:
  pfVar43 = pfStack_110;
  pbVar44 = pbStack_170;
  pfVar37 = pfStack_220;
  pbVar27 = pbStack_380;
  if (uVar39 != uStack_258) {
    uStack_250 = uVar39 + 1;
    uStack_2c0 = uVar39 + 1;
    pbVar48 = (byte *)&uStack_328;
    if (4 < uStack_228) {
      pbVar48 = (byte *)uStack_328;
    }
    bVar4 = pbVar48[uVar39 * 0x18 + 0x14];
    if (bVar4 != 2) {
      uStack_270 = uVar35;
      pfVar37 = (float *)(pbVar48 + uVar39 * 0x18);
      fVar67 = pfVar37[3];
      if (bStack_f4 == 0) {
        fVar67 = pfVar37[3] + _DAT_142e3c604 + _DAT_142e3c608;
      }
      uStack_140 = CONCAT44(uStack_140._4_4_,*(undefined4 *)(pbVar48 + uVar39 * 0x18 + 8));
      uVar8 = *(ushort *)(pbVar48 + uVar39 * 0x18 + 0x10);
      uVar9 = *(ushort *)(pbVar48 + uVar39 * 0x18 + 0x12);
      fVar64 = *pfVar37;
      pfStack_168 = (float *)CONCAT44(pfStack_168._4_4_,pfVar37[1]);
      cVar20 = pdb_140e94b40();
      if (cVar20 == '\0') {
        pbStack_350 = (byte *)0x0;
      }
      else {
        puVar38 = &UNK_14330a646;
        do {
          bVar5 = puVar38[-1];
          uVar22 = (uint)(char)bVar5;
          if ((char)bVar5 < '\0') {
            bVar7 = puVar38[-2];
            if ((char)bVar7 < -0x40) {
              bVar6 = puVar38[-3];
              if ((char)bVar6 < -0x40) {
                pbVar27 = puVar38 + -4;
                puVar38 = puVar38 + -4;
                uVar22 = bVar6 & 0x3f | (*pbVar27 & 7) << 6;
              }
              else {
                puVar38 = puVar38 + -3;
                uVar22 = bVar6 & 0xf;
              }
              uVar22 = bVar7 & 0x3f | uVar22 << 6;
            }
            else {
              puVar38 = puVar38 + -2;
              uVar22 = bVar7 & 0x1f;
            }
            uVar22 = (uint)(bVar5 & 0x3f) | uVar22 << 6;
            if (uVar22 != 0x5c) goto LAB_141457792;
LAB_1414577d0:
            puVar42 = puVar38 + lStack_360 + 1;
            lVar40 = 0x36 - (longlong)puVar42;
            if (puVar42 < (undefined *)0x37) {
              puVar38 = puVar38 + 1;
              goto LAB_1414577ef;
            }
            pdb_142dc8070(&UNK_14330a610,0x36,puVar42,0x36,&UNK_14330a8d8);
            goto LAB_141459527;
          }
          puVar38 = puVar38 + -1;
          if (uVar22 == 0x5c) goto LAB_1414577d0;
LAB_141457792:
          if (uVar22 == 0x2f) goto LAB_1414577d0;
        } while (puVar38 != &UNK_14330a610);
        lVar40 = 0x36;
        puVar38 = &UNK_14330a610;
LAB_1414577ef:
        pbVar27 = (byte *)pdb_140e97000();
        if ((pbVar27[0x68] != 1) &&
           (pbVar27 = (byte *)pdb_142dd9610(pbVar27,0), pbVar27 == (byte *)0x0)) {
          pdb_142dc7890(&UNK_143307940);
          goto LAB_141459527;
        }
        if (*(longlong *)pbVar27 != 0) {
          pdb_142dc8090(&UNK_1433079b0);
          goto LAB_141459527;
        }
        pbVar27[0] = 0xff;
        pbVar27[1] = 0xff;
        pbVar27[2] = 0xff;
        pbVar27[3] = 0xff;
        pbVar27[4] = 0xff;
        pbVar27[5] = 0xff;
        pbVar27[6] = 0xff;
        pbVar27[7] = 0xff;
        pbStack_100 = pbVar27;
        lStack_348 = pdb_140e94f10(pbVar27 + 8,&UNK_14330a646,0xf,puVar38,lVar40,1,0);
        *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
        pbStack_350 = (byte *)0x1;
      }
      uVar39 = uStack_378;
      pbVar27 = (byte *)(ulonglong)uVar8;
      uVar35 = (ulonglong)uVar9;
      pbStack_130 = (byte *)(uVar35 * (longlong)pbVar27);
      if (pbStack_170 < pbStack_130) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14330a655,0x36,&UNK_14330a690);
      }
      bVar49 = uStack_120 < 2;
      auStack_248 = ZEXT416(~-(uint)(0.0 < *(float *)(param_7 + 0x284)) & _DAT_142e36f50);
      uStack_138 = CONCAT44(uStack_138._4_4_,(float)uVar8 + _DAT_142e36f34);
      pbStack_118 = (byte *)CONCAT44(pbStack_118._4_4_,(float)uVar9 + _DAT_142e36f34);
      pbStack_268 = (byte *)CONCAT44(pbStack_268._4_4_,fVar64);
      pbVar44 = (byte *)0x0;
      uStack_148 = uVar35;
      pbStack_100 = pbVar27;
      if (pbVar27 != (byte *)0x0) {
        do {
          fVar64 = (((float)(longlong)pbVar44 / (float)uStack_138) * pfStack_168._0_4_ +
                   (_DAT_142e36f28 - (float)(longlong)pbVar44 / (float)uStack_138) * fVar64) *
                   fStack_14c;
          auVar54 = ZEXT416(*(uint *)(param_7 + 0x284));
          uVar46 = pdb_14007ee60(fVar64);
          pbVar27 = *(byte **)(param_7 + 0x98);
          if (pbVar27 == (byte *)0x1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143308560);
          }
          if (pbVar27 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
          }
          pfStack_218 = *(float **)(param_7 + 0x90);
          pfStack_208 = (float *)pdb_140ade410;
          uStack_200 = 0;
          uStack_1f8 = (byte *)0x0;
          uStack_210 = (code *)pbVar27;
          pdb_14141df70(&pfStack_218);
          uVar35 = (ulonglong)uStack_1f8 & 0xffffffff;
          if (uStack_3d0 <= uVar35) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar35,uStack_3d0,&UNK_14330a7b8);
          }
          uVar1 = uVar35 + 1;
          if (uStack_3d0 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar1,uStack_3d0,&UNK_14330a7b8);
          }
          if (uVar39 <= uVar35) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar35,uVar39,&UNK_14330a7d0);
          }
          if (uVar39 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar1,uVar39,&UNK_14330a7d0);
          }
          fVar68 = *(float *)(lStack_3b8 + 4 + uVar35 * 0xc);
          fVar69 = *(float *)(lStack_3b8 + 4 + uVar1 * 0xc);
          fVar66 = *(float *)(lStack_3c0 + uVar35 * 4);
          fVar52 = *(float *)(lStack_3c0 + 4 + uVar35 * 4);
          pbStack_128 = (byte *)CONCAT44(pbStack_128._4_4_,_DAT_143009de0);
          if (!bVar49 || (bVar4 & 1) != 0) {
            if (uStack_3c8 <= uVar35) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar35,uStack_3c8,&UNK_14330a7e8);
            }
            if (uStack_3c8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar1,uStack_3c8,&UNK_14330a7e8);
            }
            fVar61 = *(float *)(lStack_3a0 + uVar35 * 4);
            pbStack_128 = (byte *)CONCAT44(pbStack_128._4_4_,
                                           (*(float *)(lStack_3a0 + 4 + uVar35 * 4) - fVar61) *
                                           uStack_1f8._4_4_ + fVar61);
          }
          fStack_11c = uStack_1f8._4_4_;
          if (*(uint *)(param_7 + 600) < 2) {
            auVar55._8_4_ = extraout_XMM0_Dc;
            auVar55._0_8_ = uVar46;
            auVar55._12_4_ = extraout_XMM0_Dd;
            auVar56._4_12_ = auVar55._4_12_;
            auVar56._0_4_ = (float)uVar46 / *(float *)(param_7 + 0x30);
            fStack_154 = auVar56._0_4_;
            if ((auVar56._0_4_ < 0.0) || (_DAT_142e36f28 < auVar56._0_4_)) {
              pfStack_218 = &fStack_154;
              uStack_210 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&pfStack_218,&UNK_14330a800);
            }
            if (*(uint *)(param_7 + 600) == 1) {
              pfStack_208 = (float *)puStack_368[2];
              pfStack_218 = (float *)*puStack_368;
              uStack_210 = (code *)puStack_368[1];
              fStack_154 = (float)pdb_140df17e0(&pfStack_218);
              uStack_150 = auVar56._0_4_;
              pdb_140df4520(&lStack_2a4,&fStack_154);
            }
            else {
              pfStack_218 = (float *)*puStack_368;
              uStack_210 = (code *)puStack_368[1];
              fStack_154 = (float)pdb_140def5e0(&pfStack_218);
              uStack_150 = auVar56._0_4_;
              pdb_140df4520(&lStack_2a4,&fStack_154);
            }
          }
          else {
            if (*(ulonglong *)(param_7 + 0x98) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar1,*(ulonglong *)(param_7 + 0x98),&UNK_1433067d0);
            }
            lVar40 = *(longlong *)(param_7 + 0x90);
            fVar61 = *(float *)(lVar40 + 8 + uVar1 * 0xc) - *(float *)(lVar40 + 8 + uVar35 * 0xc);
            uVar2 = *(undefined8 *)(lVar40 + uVar1 * 0xc);
            uVar3 = *(undefined8 *)(lVar40 + uVar35 * 0xc);
            fVar62 = (float)uVar2 - (float)uVar3;
            fVar63 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20);
            fVar63 = _DAT_142e36f28 / SQRT(fVar61 * fVar61 + fVar63 * fVar63 + fVar62 * fVar62);
            fVar62 = fVar62 * fVar63;
            fVar63 = fVar63 * fVar61;
            fVar61 = _DAT_142e36f28 / SQRT(fVar62 * fVar62 + fVar63 * fVar63);
            pfStack_218 = (float *)CONCAT44(fVar61 * fVar62,
                                            fVar61 * (float)((uint)fVar63 ^ _DAT_142e37820));
            pdb_140df4520(&lStack_2a4,&pfStack_218);
          }
          pfVar37 = pfStack_110;
          pbStack_260 = pbVar44 + 1;
          fVar68 = (fVar69 - fVar68) * fStack_11c + fVar68;
          fVar66 = (fVar52 - fVar66) * fStack_11c + fVar66;
          uVar22 = -(uint)(0.0 < fVar66);
          uVar65 = ~uVar22 & _DAT_142f6e3d8;
          fVar61 = pbStack_128._0_4_ + _DAT_14300b368;
          fVar52 = fStack_14c - fVar64;
          fVar69 = fVar52;
          if (fVar64 <= fVar52) {
            fVar69 = fVar64;
          }
          fVar64 = (float)(~-(uint)NAN(fVar64) & (uint)fVar69 | -(uint)NAN(fVar64) & (uint)fVar52);
          fVar69 = fVar68 - (float)auStack_248._0_4_;
          for (uVar35 = 0; uVar35 < uStack_148; uVar35 = uVar35 + 1) {
            auVar55 = auVar54;
            uVar50 = pdb_140dea250((float)uVar46,uStack_148,
                                   ((float)(longlong)uVar35 / pbStack_118._0_4_) * fVar67);
            fVar62 = auVar55._0_4_;
            fVar52 = fVar62 - (float)(uVar65 | (uint)(fVar68 + fVar66) & uVar22);
            if ((char)uStack_1a4 != '\0') {
              fVar58 = ((float)uStack_140 - fVar62) + _DAT_142e37ae0;
              fVar63 = fVar58;
              if (fVar52 <= fVar58) {
                fVar63 = fVar52;
              }
              fVar52 = (float)(~-(uint)NAN(fVar52) & (uint)fVar63 |
                              -(uint)NAN(fVar52) & (uint)fVar58);
            }
            if (bVar49 && (bVar4 & 1) == 0) {
              bVar21 = false;
            }
            else {
              fVar58 = fVar61 - fVar62;
              fVar63 = fVar58;
              if (fVar52 <= fVar58) {
                fVar63 = fVar52;
              }
              fVar52 = (float)(~-(uint)NAN(fVar52) & (uint)fVar63 |
                              -(uint)NAN(fVar52) & (uint)fVar58);
              if (uStack_120 == 2) {
                fVar63 = fVar64;
                if (fVar52 <= fVar64) {
                  fVar63 = fVar52;
                }
                fVar52 = (float)(~-(uint)NAN(fVar52) & (uint)fVar63 |
                                -(uint)NAN(fVar52) & (uint)fVar64);
              }
              bVar21 = pbStack_128._0_4_ < fVar62;
            }
            lVar40 = uVar35 * (longlong)pbStack_100 * 0x20;
            *(undefined4 *)((longlong)pfVar37 + lVar40 + (longlong)pbVar44 * 0x20) = uVar50;
            *(float *)((longlong)pfVar37 + lVar40 + (longlong)pbVar44 * 0x20 + 4) = fVar62;
            pbVar27 = (byte *)((longlong)pfVar37 + lVar40 + (longlong)pbVar44 * 0x20 + 8);
            pbVar27[0] = 0;
            pbVar27[1] = 0;
            pbVar27[2] = 0x80;
            pbVar27[3] = 0x3f;
            *(float *)((longlong)pfVar37 + lVar40 + (longlong)pbVar44 * 0x20 + 0xc) = fVar52;
            *(longlong *)((longlong)pfVar37 + lVar40 + (longlong)pbVar44 * 0x20 + 0x10) = lStack_2a4
            ;
            *(undefined4 *)((longlong)pfVar37 + lVar40 + (longlong)pbVar44 * 0x20 + 0x18) =
                 uStack_29c;
            *(char *)((longlong)pfVar37 + lVar40 + (longlong)pbVar44 * 0x20 + 0x1c) =
                 fVar62 < fVar69 | bVar21;
          }
          pbVar44 = pbStack_260;
          fVar64 = pbStack_268._0_4_;
        } while (pbStack_260 < pbStack_100);
      }
      pbVar27 = pbStack_100;
      if (lStack_388 != 0) {
        fStack_11c = *(float *)(param_7 + 0x284);
        auStack_248._0_4_ = fStack_14c * fVar64;
        fVar68 = fVar67 / pbStack_118._0_4_;
        pbStack_118 = (byte *)CONCAT44(pbStack_118._4_4_,
                                       pbStack_118._0_4_ / ((fVar67 + fStack_11c) - fStack_11c));
        fVar67 = ((pfStack_168._0_4_ - fVar64) * fStack_14c) / (float)uStack_138;
        uStack_138 = CONCAT44(uStack_138._4_4_,
                              (float)uStack_138 /
                              (fStack_14c * pfStack_168._0_4_ - fStack_14c * fVar64));
        uVar35 = (ulonglong)(uint)((int)pbStack_100 << 5);
        pfVar37 = pfStack_220;
        do {
          fVar64 = *pfVar37;
          fVar69 = pfVar37[1];
          fVar66 = pfVar37[2];
          fVar52 = pfVar37[3];
          uStack_140 = CONCAT44(uStack_140._4_4_,fVar64);
          pbStack_128 = (byte *)CONCAT44(pbStack_128._4_4_,fVar69);
          fVar63 = fVar64 + fVar66 + _DAT_142e36f28;
          fVar62 = fVar69 + fVar52 + _DAT_142e36f28;
          fVar61 = (((fVar69 - fVar52) + _DAT_142e36f34) - fStack_11c) * pbStack_118._0_4_;
          pfStack_168 = pfVar37;
          fVar69 = (float)pub_142e329c0((((fVar64 - fVar66) + _DAT_142e36f34) -
                                        (float)auStack_248._0_4_) * (float)uStack_138);
          fVar61 = (float)pub_142e329c0(fVar61);
          fVar64 = _DAT_142e382cc;
          uVar22 = (uint)fVar69;
          if (_DAT_142e382cc < fVar69) {
            uVar22 = 0x7fffffff;
          }
          if (NAN(fVar69)) {
            uVar22 = 0;
          }
          uVar65 = (int)fVar61;
          if (_DAT_142e382cc < fVar61) {
            uVar65 = 0x7fffffff;
          }
          if (NAN(fVar61)) {
            uVar65 = 0;
          }
          fVar61 = (fVar62 - fStack_11c) * pbStack_118._0_4_;
          fVar69 = (float)pub_142e329c0((fVar63 - (float)auStack_248._0_4_) * (float)uStack_138);
          fVar61 = (float)pub_142e329c0(fVar61);
          uVar23 = (uint)fVar69;
          if (fVar64 < fVar69) {
            uVar23 = 0x7fffffff;
          }
          if (NAN(fVar69)) {
            uVar23 = 0;
          }
          uVar33 = (int)fVar61;
          if (fVar64 < fVar61) {
            uVar33 = 0x7fffffff;
          }
          if (NAN(fVar61)) {
            uVar33 = 0;
          }
          if ((int)uVar22 < 1) {
            uVar22 = 0;
          }
          if ((int)(uint)pbVar27 < (int)uVar23) {
            uVar23 = (uint)pbVar27;
          }
          if ((int)uVar65 < 1) {
            uVar65 = 0;
          }
          pbVar44 = (byte *)(ulonglong)uVar33;
          if ((int)uStack_148 < (int)uVar33) {
            pbVar44 = (byte *)(uStack_148 & 0xffffffff);
          }
          if (((int)uVar22 < (int)uVar23) && ((int)uVar65 < (int)pbVar44)) {
            pbStack_128 = (byte *)(ulonglong)uVar65;
            uVar39 = (ulonglong)uVar22;
            uStack_140 = (ulonglong)uVar23;
            pfVar37 = (float *)(pbStack_3b0 + uVar35 * (longlong)pbStack_128 + uVar39 * 0x20);
            do {
              uVar46 = pub_142e32a50(fVar67,(float)uVar39);
              fVar64 = (float)((uint)uVar46 & uVar15) - fVar66;
              auVar54._4_4_ = (uint)((ulonglong)uVar46 >> 0x20) & uVar17;
              auVar54._0_4_ = fVar64;
              auVar54._8_4_ = extraout_XMM0_Dc_00 & uVar18;
              auVar54._12_4_ = extraout_XMM0_Dd_00 & uVar19;
              if (fVar64 <= 0.0) {
                auVar13._12_4_ = 0;
                auVar13._0_12_ = auVar54._4_12_;
                auVar54 = auVar13 << 0x20;
              }
              pfVar43 = pfVar37;
              pbVar27 = pbStack_128;
              do {
                uVar46 = pub_142e32a50(fVar68,(float)(int)pbVar27);
                fVar69 = (float)((uint)uVar46 & uVar15) - fVar52;
                auVar57._4_4_ = (uint)((ulonglong)uVar46 >> 0x20) & uVar17;
                auVar57._0_4_ = fVar69;
                auVar57._8_4_ = extraout_XMM0_Dc_01 & uVar18;
                auVar57._12_4_ = extraout_XMM0_Dd_01 & uVar19;
                if (fVar69 <= 0.0) {
                  auVar14._12_4_ = 0;
                  auVar14._0_12_ = auVar57._4_12_;
                  auVar57 = auVar14 << 0x20;
                }
                fVar61 = fVar69;
                if (fVar69 <= fVar64) {
                  fVar61 = fVar64;
                }
                fVar69 = (float)(~-(uint)NAN(fVar64) & (uint)fVar61 |
                                -(uint)NAN(fVar64) & (uint)fVar69);
                if (0.0 <= fVar69) {
                  fVar69 = 0.0;
                }
                fVar69 = fVar69 + SQRT(auVar57._0_4_ * auVar57._0_4_ + auVar54._0_4_ * auVar54._0_4_
                                      );
                pbVar27 = pbVar27 + 1;
                fVar61 = *pfVar43;
                fVar62 = fVar69;
                if (fVar61 <= fVar69) {
                  fVar62 = fVar61;
                }
                *pfVar43 = (float)(~-(uint)NAN(fVar61) & (uint)fVar62 |
                                  -(uint)NAN(fVar61) & (uint)fVar69);
                pfVar43 = (float *)((longlong)pfVar43 + uVar35);
              } while (pbVar44 != pbVar27);
              uVar39 = uVar39 + 1;
              pfVar37 = pfVar37 + 8;
              pbVar27 = pbStack_100;
            } while (uVar39 != uStack_140);
          }
          pfVar37 = pfStack_168 + 4;
        } while (pfVar37 != pfStack_3d8);
      }
      fVar67 = _DAT_142e37830;
      if (pbStack_350 != (byte *)0x0) {
        pbVar44 = (byte *)pdb_140e97000();
        if ((pbVar44[0x68] != 1) &&
           (pbVar44 = (byte *)pdb_142dd9610(pbVar44,0), pbVar44 == (byte *)0x0)) {
          pdb_142dc7890(&UNK_143307940);
          goto LAB_141459527;
        }
        if (*(longlong *)pbVar44 != 0) {
          pdb_142dc8090(&UNK_1433079b0);
          goto LAB_141459527;
        }
        pbVar44[0] = 0xff;
        pbVar44[1] = 0xff;
        pbVar44[2] = 0xff;
        pbVar44[3] = 0xff;
        pbVar44[4] = 0xff;
        pbVar44[5] = 0xff;
        pbVar44[6] = 0xff;
        pbVar44[7] = 0xff;
        pbStack_118 = pbVar44;
        pdb_140e95370();
        *(longlong *)pbStack_118 = *(longlong *)pbStack_118 + 1;
      }
      cVar20 = pdb_140e94b40();
      if (cVar20 != '\0') {
        puVar38 = &UNK_14330a646;
        do {
          bVar4 = puVar38[-1];
          uVar22 = (uint)(char)bVar4;
          if ((char)bVar4 < '\0') {
            bVar5 = puVar38[-2];
            if ((char)bVar5 < -0x40) {
              bVar7 = puVar38[-3];
              if ((char)bVar7 < -0x40) {
                pbVar44 = puVar38 + -4;
                puVar38 = puVar38 + -4;
                uVar22 = bVar7 & 0x3f | (*pbVar44 & 7) << 6;
              }
              else {
                puVar38 = puVar38 + -3;
                uVar22 = bVar7 & 0xf;
              }
              uVar22 = bVar5 & 0x3f | uVar22 << 6;
            }
            else {
              puVar38 = puVar38 + -2;
              uVar22 = bVar5 & 0x1f;
            }
            uVar22 = (uint)(bVar4 & 0x3f) | uVar22 << 6;
            if (uVar22 != 0x5c) goto LAB_141458294;
LAB_1414582b3:
            puVar42 = puVar38 + lStack_360 + 1;
            lVar40 = 0x36 - (longlong)puVar42;
            if (puVar42 < (undefined *)0x37) {
              puVar38 = puVar38 + 1;
              goto LAB_1414582d2;
            }
            pdb_142dc8070(&UNK_14330a610,0x36,puVar42,0x36,&UNK_14330a8d8);
            goto LAB_141459527;
          }
          puVar38 = puVar38 + -1;
          if (uVar22 == 0x5c) goto LAB_1414582b3;
LAB_141458294:
          if (uVar22 == 0x2f) goto LAB_1414582b3;
        } while (puVar38 != &UNK_14330a610);
        lVar40 = 0x36;
        puVar38 = &UNK_14330a610;
LAB_1414582d2:
        plVar30 = (longlong *)pdb_140e97000();
        if (((char)plVar30[0xd] != '\x01') &&
           (plVar30 = (longlong *)pdb_142dd9610(plVar30,0), plVar30 == (longlong *)0x0)) {
          pdb_142dc7890(&UNK_143307940);
          goto LAB_141459527;
        }
        if (*plVar30 != 0) {
          pdb_142dc8090(&UNK_1433079b0);
          goto LAB_141459527;
        }
        *plVar30 = -1;
        pbStack_118 = (byte *)plVar30;
        uStack_358 = pdb_140e94f10(plVar30 + 1,&UNK_14330a6a8,0xe,puVar38,lVar40,1,0);
        *(longlong *)pbStack_118 = *(longlong *)pbStack_118 + 1;
      }
      fStack_11c = (float)CONCAT31(fStack_11c._1_3_,cVar20);
      lStack_348 = 2;
      uStack_340 = 0x3f80000000000001;
      uStack_338 = uStack_27c;
      uStack_334 = 0xbf800000;
      pbStack_330 = (byte *)0x0;
      uStack_138 = uStack_148 - 1;
      pbStack_118 = pbVar27 + -1;
      pbVar27 = (byte *)((longlong)pfStack_110 + (longlong)pbStack_130 * 0x20);
      pbVar44 = (byte *)0x0;
      pbVar48 = (byte *)0x0;
LAB_1414583bf:
      while( true ) {
        pbVar34 = pbVar44;
        lVar40 = 0;
        do {
          lVar45 = lVar40;
          if (pbVar44 + lVar45 == (byte *)0x2) {
            uVar39 = uStack_250;
            uVar35 = uStack_270;
            if (fStack_11c._0_1_ == '\0') goto LAB_14145766d;
            pbVar27 = (byte *)pdb_140e97000(pbVar34);
            if ((pbVar27[0x68] != 1) &&
               (pbVar27 = (byte *)pdb_142dd9610(pbVar27,0), pbVar27 == (byte *)0x0)) {
              pdb_142dc7890(&UNK_143307940);
              goto LAB_141459527;
            }
            if (*(longlong *)pbVar27 == 0) {
              pbVar27[0] = 0xff;
              pbVar27[1] = 0xff;
              pbVar27[2] = 0xff;
              pbVar27[3] = 0xff;
              pbVar27[4] = 0xff;
              pbVar27[5] = 0xff;
              pbVar27[6] = 0xff;
              pbVar27[7] = 0xff;
              pbStack_100 = pbVar27;
              pdb_140e95370(pbVar27 + 8,uStack_358);
              *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
              uVar39 = uStack_250;
              uVar35 = uStack_270;
              goto LAB_14145766d;
            }
            pdb_142dc8090(&UNK_1433079b0);
            goto LAB_141459527;
          }
          pbVar34 = pbVar34 + 1;
          fVar64 = *(float *)((longlong)&uStack_340 + lVar45 * 8 + (longlong)pbVar44 * 8 + 4);
          lVar40 = lVar45 + 1;
          pbStack_330 = pbVar48 + lVar45 + 1;
        } while (*(char *)(&uStack_340 + (longlong)(pbVar44 + lVar45)) == '\0');
        pbStack_350 = pbVar44 + lVar40;
        uStack_190 = 0;
        pbStack_268 = pbStack_350;
        if (uStack_1a0 < uVar26) {
          pdb_142d7f1b0(&uStack_1a0,0,uVar26,4,0x30);
          pbStack_160 = pbStack_198;
        }
        pbVar44 = pbStack_160;
        uVar35 = uStack_1a0;
        pbStack_260 = pbVar48 + lVar40;
        pbStack_128 = pbVar48 + lVar45;
        pfVar37 = pfStack_110;
        while (pfVar37 != (float *)pbVar27) {
          pdb_140dea260(&uStack_3e8,pfVar37,param_7);
          if (uVar35 <= uStack_190) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14330a818,0x2e,&UNK_14330a848);
          }
          fVar68 = *(float *)((longlong)pfVar37 + 8);
          fVar69 = *(float *)((longlong)pfVar37 + 0xc);
          fVar66 = *(float *)((longlong)pfVar37 + 0x18);
          fVar61 = (float)*(longlong *)((longlong)pfVar37 + 0x10);
          fVar62 = (float)((ulonglong)*(longlong *)((longlong)pfVar37 + 0x10) >> 0x20);
          lVar40 = *(longlong *)pfVar37;
          pfVar37 = (float *)((longlong)pfVar37 + 0x20);
          fVar52 = 0.0;
          if (0.0 <= fVar69) {
            fVar52 = fVar69;
          }
          fVar63 = _DAT_142e36f28;
          if (fVar52 <= _DAT_142e36f28) {
            fVar63 = fVar52;
          }
          fVar63 = _DAT_142e36f28 - (_DAT_142e3788c - (fVar63 + fVar63)) * fVar63 * fVar63;
          fVar58 = _DAT_142e36f28 - fVar63;
          fVar52 = fVar69;
          if (fVar68 <= fVar69) {
            fVar52 = fVar68;
          }
          fVar60 = fVar66 * _DAT_14330a58c;
          lVar45 = uStack_190 * 0x30;
          *(ulonglong *)(pbVar44 + lVar45) =
               CONCAT44(fVar62 * _UNK_14330a594 * fVar64 + (float)((ulonglong)uStack_3e8 >> 0x20),
                        fVar61 * _DAT_14330a590 * fVar64 + (float)uStack_3e8);
          *(float *)(pbVar44 + lVar45 + 8) = fVar60 * fVar64 + fStack_3e0;
          *(uint *)(pbVar44 + lVar45 + 0xc) =
               ~-(uint)NAN(fVar68) & (uint)fVar52 | -(uint)NAN(fVar68) & (uint)fVar69;
          auVar59._0_4_ = fVar61 * fVar64 * _DAT_14330a5a0;
          auVar59._4_4_ = fVar62 * fVar64 * _UNK_14330a5a4;
          auVar59._8_4_ = fVar66 * fVar64 * _UNK_14330a5a8;
          auVar59._12_4_ = fVar58 + fVar63 * _UNK_14330a5ac;
          *(undefined1 (*) [16])(pbVar44 + lVar45 + 0x10) = auVar59;
          *(longlong *)(pbVar44 + lVar45 + 0x20) = lVar40;
          pbVar48 = pbVar44 + lVar45 + 0x28;
          pbVar48[0] = 0;
          pbVar48[1] = 0;
          pbVar48[2] = 0;
          pbVar48[3] = 0;
          pbVar48[4] = 0;
          pbVar48[5] = 0;
          pbVar48[6] = 0;
          pbVar48[7] = 0;
          uStack_190 = uStack_190 + 1;
        }
        auStack_248._0_8_ = uStack_190;
        lVar40 = uStack_190 * 0x30;
        uVar46 = pdb_140e1cff0(lVar40,0x210);
        pbVar48 = pbStack_198;
        pdb_141472d90(&pfStack_218,lStack_370,&UNK_14330a6b6,0xc,uVar46,pbStack_198,lVar40);
        pbVar44 = (byte *)uStack_210;
        pbStack_160 = pbVar48;
        if (pfStack_218 == (float *)0xb) break;
        pfVar37 = (float *)0x0;
        if ((float *)0x7 < pfStack_218) {
          pfVar37 = pfStack_218 + -2;
        }
        if (pfVar37 == (float *)0x0) goto LAB_141458956;
        pbVar34 = (byte *)uStack_210;
        pfVar43 = pfStack_208;
        if (pfVar37 != (float *)0x1) goto joined_r0x00014145898f;
        pdb_1404b83f0(&uStack_210);
        pbVar44 = pbStack_268;
        pbVar48 = pbStack_260;
      }
      pbStack_230 = (byte *)uStack_210;
      pcVar12 = *(code **)(lStack_370 + 0x520);
      uVar46 = *(undefined8 *)(lStack_370 + 0x658);
      uStack_f1 = 1;
      pbStack_398 = pbVar27;
      puVar31 = (undefined8 *)pdb_140e17330(&pbStack_230);
      uStack_288 = *puVar31;
      pbStack_298 = (byte *)CONCAT44(pbStack_298._4_4_,0x3b9e8321);
      lStack_290 = 0;
      uStack_148 = (*pcVar12)(uVar46);
      pbVar27 = pbStack_1b0;
      pbStack_298 = pbVar44;
      if (pbStack_1b0 == (byte *)uStack_1c0) {
        pdb_142db0920(&uStack_1c0);
      }
      *(byte **)(pbStack_1b8 + (longlong)pbVar27 * 8) = pbVar44;
      pbStack_1b0 = (byte *)((longlong)pbVar27 + 1);
      pfStack_168 = pfStack_178;
      uVar35 = 0;
      while (pbVar27 = pbStack_398, uVar35 < uStack_138) {
        lVar40 = uVar35 * (longlong)pbStack_100;
        uStack_140 = uVar35 + 1;
        lVar45 = (uVar35 + 1) * (longlong)pbStack_100;
        pbVar27 = (byte *)0x0;
        bVar49 = true;
        while (bVar21 = bVar49, pfVar37 = pfStack_178, pbVar27 < pbStack_118) {
          pbVar44 = pbVar27 + lVar40;
          if (pbStack_130 <= pbVar44) {
            uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pbVar44,pbStack_130,&UNK_14330a740);
          }
          pbVar48 = pbVar27 + 1;
          pbVar34 = pbVar27 + lVar45;
          if (*(byte *)((longlong)pfStack_110 + (longlong)pbVar44 * 0x20 + 0x1c) != 1)
          goto LAB_141458810;
          pbVar47 = pbVar27 + lVar40 + 1;
          if (pbStack_130 <= pbVar47) {
            uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pbVar47,pbStack_130,&UNK_14330a758);
          }
          if (*(byte *)((longlong)pfStack_110 + (longlong)pbVar47 * 0x20 + 0x1c) != 1)
          goto LAB_141458810;
          if (pbStack_130 <= pbVar34) {
            uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pbVar34,pbStack_130,&UNK_14330a770);
          }
          if (*(byte *)((longlong)pfStack_110 + (longlong)pbVar34 * 0x20 + 0x1c) != 1)
          goto LAB_141458810;
          pbVar47 = pbVar27 + lVar45 + 1;
          if (pbStack_130 <= pbVar47) {
            uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pbVar47,pbStack_130,&UNK_14330a788);
          }
          pbVar27 = pbVar48;
          bVar49 = true;
          if (*(byte *)((longlong)pfStack_110 + (longlong)pbVar47 * 0x20 + 0x1c) == 0) {
LAB_141458810:
            if (bVar21) {
              iVar10 = (int)pbVar44 - (int)pbVar34;
              if (pbStack_128 == (byte *)0x0) {
                iVar10 = (int)pbVar34 - (int)pbVar44;
                pbVar34 = pbVar44;
              }
              if (pfStack_178 == pfStack_188) {
                uStack_f1 = 0;
                pdb_142d7e6e0(&pfStack_188);
              }
              lVar28 = (longlong)pfVar37 * 0x20;
              pbVar27 = pbStack_180 + lVar28;
              pbVar27[0] = 0;
              pbVar27[1] = 0;
              pbVar27[2] = 0;
              pbVar27[3] = 0;
              pbVar27[4] = 0;
              pbVar27[5] = 0;
              pbVar27[6] = 0;
              pbVar27[7] = 0;
              pbVar27[8] = 0;
              pbVar27[9] = 0;
              pbVar27[10] = 0;
              pbVar27[0xb] = 0;
              pbVar27[0xc] = 0;
              pbVar27[0xd] = 0;
              pbVar27[0xe] = 0;
              pbVar27[0xf] = 0;
              *(ulonglong *)(pbStack_180 + lVar28 + 0x10) = (longlong)pbVar34 * 0x30 + uStack_148;
              pbVar27 = pbStack_180 + lVar28 + 0x18;
              pbVar27[0] = 0;
              pbVar27[1] = 0;
              pbVar27[2] = 0;
              pbVar27[3] = 0;
              *(int *)(pbStack_180 + lVar28 + 0x1c) = iVar10;
              pfStack_178 = (float *)((longlong)pfVar37 + 1);
            }
            if ((pfStack_178 == (float *)0x0) ||
               (lVar28 = (longlong)pfStack_178 * 0x20, pbStack_180 + lVar28 == (byte *)0x20)) {
              uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14330a7a0);
            }
            iVar10 = *(int *)(pbStack_180 + lVar28 + -8);
            *(uint *)(pbStack_180 + lVar28 + -8) = iVar10 + 1U;
            pbVar27 = pbVar48;
            bVar49 = 0x1f < iVar10 + 1U;
          }
        }
        uVar35 = uStack_140;
      }
      if (pfStack_168 <= pfStack_178) goto code_r0x00014145890e;
      uStack_f1 = 0;
      pdb_142dc8420(pfStack_168,pfStack_178,pfStack_178,&UNK_14330a6c8);
      goto LAB_141459527;
    }
  }
  pbVar48 = (byte *)&uStack_328;
  if (4 < uStack_2c8) {
    pbVar48 = (byte *)uStack_328;
  }
  pbVar48 = pbVar48 + uStack_2c0 * 0x18 + 0x14;
  do {
    if ((uStack_2c0 + 1) - uStack_258 == 1) break;
    uStack_2c0 = uStack_2c0 + 1;
    bVar4 = *pbVar48;
    pbVar48 = pbVar48 + 0x18;
  } while (bVar4 != 2);
  if (4 < uStack_2c8) {
    pub_1406abac0((byte *)uStack_328,uStack_2c8 * 0x18,4);
  }
  if (pbVar44 != (byte *)0x0) {
    pub_1406abac0((byte *)pfVar43,uVar35,4);
  }
  if (uStack_1a0 != 0) {
    pub_1406abac0(pbStack_160,uStack_1a0 * 0x30,4);
  }
  if (pbVar27 != (byte *)0x0) {
    pub_1406abac0((byte *)pfVar37,(longlong)pbVar27 << 4,4);
  }
  pdb_14007ee60();
  pbStack_100 = pub_1406abab0(8,8);
  if (pbStack_100 != (byte *)0x0) {
    alStack_448[0] = (longlong)pbStack_1b0;
    uStack_458 = (undefined4)uStack_1c0;
    uStack_454 = uStack_1c0._4_4_;
    pbStack_450 = pbStack_1b8;
    pdb_1414163d0(&uStack_328,param_5,&uStack_458,&UNK_14330a860);
    *(float **)pbStack_100 = uStack_328;
    uVar2 = _UNK_142e4e658;
    uVar46 = _DAT_142e4e650;
    pfStack_218 = (float *)0x1;
    uStack_210 = (code *)pbStack_100;
    pfStack_208 = (float *)0x1;
    pfStack_110 = pfStack_188;
    pbStack_100 = pbStack_180;
    if (pfStack_178 != (float *)0x0) {
      plVar30 = (longlong *)param_5[1];
      if (plVar30 == (longlong *)0x0) {
        plVar30 = (longlong *)param_5[2];
      }
      lVar45 = (longlong)pfStack_178 << 5;
      uVar3 = *param_5;
      lVar40 = 0;
      do {
        pbVar27 = pbStack_100 + lVar40;
        uVar50 = *(undefined4 *)pbVar27;
        uVar51 = *(undefined4 *)(pbVar27 + 4);
        uVar15 = *(uint *)(pbVar27 + 8);
        uVar53 = *(undefined4 *)(pbVar27 + 0xc);
        uVar32 = *(undefined8 *)(pbStack_100 + lVar40 + 0x10);
        uVar16 = *(undefined8 *)(pbStack_100 + lVar40 + 0x10 + 8);
        uVar25 = pdb_1409012c0(0);
        pdb_1408fd550(&pbStack_350,uVar25);
        pbStack_298 = pbStack_350;
        lStack_290 = lStack_348;
        pdb_14007ee60();
        pbStack_450 = pbStack_298;
        alStack_448[0] = lStack_290;
        uStack_309 = (undefined1)uVar32;
        uStack_308 = (undefined7)((ulonglong)uVar32 >> 8);
        uStack_31c._3_1_ = (undefined1)uVar50;
        uStack_318 = (undefined3)((uint)uVar50 >> 8);
        uStack_315 = uVar51;
        uStack_311 = uVar15;
        uStack_30d = uVar53;
        uStack_301 = uVar16;
        uVar32 = pdb_140ed5970(uVar3);
        lVar28 = plVar30[2];
        if ((ulonglong)(*plVar30 - lVar28) < 0x98) {
          pdb_142d7f1b0(plVar30,lVar28,0x98,1,1);
        }
        pfVar37 = pfStack_208;
        lVar11 = plVar30[1];
        *(code **)(lVar11 + lVar28) = pdb_141414420;
        puVar31 = (undefined8 *)(lVar11 + 8 + lVar28);
        *puVar31 = uVar46;
        puVar31[1] = uVar2;
        *(undefined8 *)(lVar11 + 0x18 + lVar28) = 0;
        *(undefined4 *)(lVar11 + 0x20 + lVar28) = 0;
        *(undefined8 *)(lVar11 + 0x24 + lVar28) = 0x3f8000003f800000;
        *(undefined4 *)(lVar11 + 0x2c + lVar28) = 0x3f800000;
        puVar31 = (undefined8 *)(lVar11 + 0x30 + lVar28);
        *puVar31 = CONCAT44(uStack_454,uStack_458);
        puVar31[1] = pbStack_450;
        *(longlong *)(lVar11 + 0x40 + lVar28) = alStack_448[0];
        *(undefined1 *)(lVar11 + 0x48 + lVar28) = 0x10;
        puVar29 = (undefined4 *)(lVar11 + 0x49 + lVar28);
        *puVar29 = (undefined4)uStack_328;
        puVar29[1] = uStack_328._4_4_;
        puVar29[2] = uStack_320;
        puVar29[3] = uStack_31c;
        puVar31 = (undefined8 *)(lVar11 + 0x59 + lVar28);
        *puVar31 = CONCAT17((undefined1)uStack_311,CONCAT43(uStack_315,uStack_318));
        puVar31[1] = CONCAT17(uStack_309,CONCAT43(uStack_30d,uStack_311._1_3_));
        puVar31 = (undefined8 *)(lVar11 + 0x68 + lVar28);
        *puVar31 = CONCAT71(uStack_308,uStack_309);
        puVar31[1] = uStack_301;
        *(undefined8 *)(lVar11 + 0x78 + lVar28) = uStack_390;
        *(undefined8 *)(lVar11 + 0x88 + lVar28) = uVar32;
        plVar30[2] = lVar28 + 0x98;
        if (pfStack_208 == pfStack_218) {
          pdb_142db0920();
        }
        *(undefined8 *)(uStack_210 + (longlong)pfVar37 * 8) = uVar32;
        pfStack_208 = (float *)((longlong)pfVar37 + 1);
        lVar40 = lVar40 + 0x20;
      } while (lVar45 != lVar40);
    }
    if (pfStack_110 != (float *)0x0) {
      pub_1406abac0(pbStack_100,(longlong)pfStack_110 << 5,8);
    }
    *(undefined4 *)puStack_3a8[2] = *(undefined4 *)((longlong)puStack_3a8 + 0x1c);
    uStack_318 = SUB83(pfStack_208,0);
    uStack_315 = (undefined4)((ulonglong)pfStack_208 >> 0x18);
    uStack_311._0_1_ = (undefined1)((ulonglong)pfStack_208 >> 0x38);
    uStack_328 = pfStack_218;
    uStack_320 = (undefined4)uStack_210;
    uStack_31c = uStack_210._4_4_;
    uStack_101 = 0;
    pdb_1414070f0(&uStack_458,*puStack_3a8,uStack_390,&uStack_328);
    lVar40 = CONCAT44(uStack_454,uStack_458);
    if ((!SBORROW8(0,lVar40)) && (lVar40 != 0)) {
      pub_1406abac0(pbStack_450,lVar40 << 3,8);
    }
    return;
  }
  uStack_f2 = 1;
  uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
code_r0x00014145890e:
  if (pfStack_168 != pfStack_178) {
    pbVar44 = pbStack_180 + (longlong)pfStack_168 * 0x20;
    do {
      pbVar48 = pbVar44 + 0x20;
      uVar22 = *(uint *)(pbVar44 + 0x18);
      fVar68 = 0.0;
      fVar69 = 0.0;
      fVar64 = 0.0;
      fVar66 = 0.0;
      uVar65 = 0;
      do {
        uVar23 = uVar65 + (uVar65 < uVar22);
        iVar10 = (int)((*(longlong *)(pbVar44 + 0x10) - uStack_148) / 0x30);
        iVar24 = uVar65 + iVar10;
        uVar35 = (ulonglong)iVar24;
        if ((ulonglong)auStack_248._0_8_ <= uVar35) {
          uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar35,auStack_248._0_8_,&UNK_14330a710);
        }
        uVar39 = (ulonglong)(iVar24 + *(int *)(pbVar44 + 0x1c));
        if ((ulonglong)auStack_248._0_8_ <= uVar39) {
          uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar39,auStack_248._0_8_,&UNK_14330a728);
        }
        fVar68 = (float)*(undefined8 *)(pbStack_160 + uVar39 * 0x30) +
                 fVar68 + (float)*(undefined8 *)(pbStack_160 + uVar35 * 0x30);
        fVar69 = (float)((ulonglong)*(undefined8 *)(pbStack_160 + uVar39 * 0x30) >> 0x20) +
                 fVar69 + (float)((ulonglong)*(undefined8 *)(pbStack_160 + uVar35 * 0x30) >> 0x20);
        fVar66 = fVar66 + *(float *)(pbStack_160 + uVar35 * 0x30 + 8) +
                 *(float *)(pbStack_160 + uVar39 * 0x30 + 8);
        fVar64 = fVar64 + fVar67;
      } while ((uVar65 < uVar22) && (uVar65 = uVar23, uVar23 <= uVar22));
      fVar64 = _DAT_142e36f28 / fVar64;
      fVar68 = fVar64 * fVar68;
      fVar69 = fVar64 * fVar69;
      fVar64 = fVar64 * fVar66;
      fVar66 = 0.0;
      uVar65 = 0;
      do {
        uVar23 = uVar65 + (uVar65 < uVar22);
        iVar24 = uVar65 + iVar10;
        uVar35 = (ulonglong)iVar24;
        if ((ulonglong)auStack_248._0_8_ <= uVar35) {
          uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar35,auStack_248._0_8_,&UNK_14330a6e0);
        }
        uVar39 = (ulonglong)(iVar24 + *(int *)(pbVar44 + 0x1c));
        if ((ulonglong)auStack_248._0_8_ <= uVar39) {
          uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar39,auStack_248._0_8_,&UNK_14330a6f8);
        }
        fVar52 = fVar69 - (float)*(undefined8 *)(pbStack_160 + uVar35 * 0x30 + 4);
        fVar61 = fVar64 - (float)((ulonglong)*(undefined8 *)(pbStack_160 + uVar35 * 0x30 + 4) >>
                                 0x20);
        fVar61 = fVar61 * fVar61 +
                 (fVar68 - *(float *)(pbStack_160 + uVar35 * 0x30)) *
                 (fVar68 - *(float *)(pbStack_160 + uVar35 * 0x30)) + fVar52 * fVar52;
        fVar52 = fVar61;
        if (fVar61 <= fVar66) {
          fVar52 = fVar66;
        }
        fVar52 = (float)(~-(uint)NAN(fVar66) & (uint)fVar52 | -(uint)NAN(fVar66) & (uint)fVar61);
        fVar66 = fVar68 - (float)*(undefined8 *)(pbStack_160 + uVar39 * 0x30);
        fVar61 = fVar69 - (float)((ulonglong)*(undefined8 *)(pbStack_160 + uVar39 * 0x30) >> 0x20);
        fVar61 = (fVar64 - *(float *)(pbStack_160 + uVar39 * 0x30 + 8)) *
                 (fVar64 - *(float *)(pbStack_160 + uVar39 * 0x30 + 8)) +
                 fVar61 * fVar61 + fVar66 * fVar66;
        fVar66 = fVar61;
        if (fVar61 <= fVar52) {
          fVar66 = fVar52;
        }
        fVar66 = (float)(~-(uint)NAN(fVar52) & (uint)fVar66 | -(uint)NAN(fVar52) & (uint)fVar61);
      } while ((uVar65 < uVar22) && (uVar65 = uVar23, uVar23 <= uVar22));
      *(ulonglong *)pbVar44 = CONCAT44(fVar69,fVar68);
      *(float *)(pbVar44 + 8) = fVar64;
      *(float *)(pbVar44 + 0xc) = SQRT(fVar66);
      pbVar44 = pbVar48;
    } while (pbVar48 != pbStack_180 + (longlong)pfStack_178 * 0x20);
  }
  pbVar44 = pbStack_268;
  pbVar48 = pbStack_260;
  if (pfStack_218 != (float *)0xb) {
    pfVar37 = (float *)0x0;
    if ((float *)0x7 < pfStack_218) {
      pfVar37 = pfStack_218 + -2;
    }
    if (pfVar37 == (float *)0x0) {
LAB_141458956:
      pbVar34 = uStack_1f8;
      pfVar43 = (float *)pcStack_1f0;
      if (((pfStack_218 < (float *)0x6) && ((0x32UL >> ((ulonglong)pfStack_218 & 0x3f) & 1) != 0))
         && (uStack_210 != (code *)0x0)) {
        pub_1406abac0((byte *)pfStack_208,(ulonglong)uStack_210,1);
        pbVar34 = uStack_1f8;
        pfVar43 = (float *)pcStack_1f0;
      }
    }
    else {
      pbVar34 = (byte *)uStack_210;
      pfVar43 = pfStack_208;
      if (pfVar37 == (float *)0x1) {
        pdb_1404b83f0(&uStack_210);
        pbVar44 = pbStack_268;
        pbVar48 = pbStack_260;
        goto LAB_1414583bf;
      }
    }
joined_r0x00014145898f:
    pbVar44 = pbStack_268;
    pbVar48 = pbStack_260;
    if (pbVar34 != (byte *)0x0) {
      pub_1406abac0((byte *)pfVar43,(ulonglong)pbVar34,1);
      pbVar44 = pbStack_268;
      pbVar48 = pbStack_260;
    }
  }
  goto LAB_1414583bf;
}

