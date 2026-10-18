// VA 0x140944410, PDB extent 4545 bytes
// country_core::systems::steam::impl$4::add_steam_integration
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::steam::impl$4::add_steam_integration
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 4545 */

byte * pdb_140944410(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 uVar16;
  longlong *plVar17;
  byte **ppbVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ushort uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte *apbStack_400 [19];
  byte *pbStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  longlong lStack_348;
  byte **ppbStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  byte *pbStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  byte **ppbStack_2d0;
  byte *pbStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  longlong lStack_2a8;
  longlong lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  byte *pbStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  longlong lStack_238;
  byte **ppbStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1b0;
  undefined *puStack_1a8;
  byte **ppbStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  byte **ppbStack_188;
  byte *pbStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  byte **ppbStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  byte **ppbStack_130;
  byte **ppbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_70 = param_3;
  pbStack_60 = param_2;
  pdb_14007ee60();
  pbVar13 = pub_1406abab0(0x30,8);
  if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  *(undefined1 (*) [16])(pbVar13 + 0x10) = (undefined1  [16])0x0;
  pbVar13[0] = 1;
  pbVar13[1] = 0;
  pbVar13[2] = 0;
  pbVar13[3] = 0;
  pbVar13[4] = 0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0;
  pbVar13[8] = 1;
  pbVar13[9] = 0;
  pbVar13[10] = 0;
  pbVar13[0xb] = 0;
  pbVar13[0xc] = 0;
  pbVar13[0xd] = 0;
  pbVar13[0xe] = 0;
  pbVar13[0xf] = 0;
  pbVar13[0x20] = 8;
  pbVar13[0x21] = 0;
  pbVar13[0x22] = 0;
  pbVar13[0x23] = 0;
  pbVar13[0x24] = 0;
  pbVar13[0x25] = 0;
  pbVar13[0x26] = 0;
  pbVar13[0x27] = 0;
  pbVar13[0x28] = 0;
  puVar11 = _DAT_143ca8e90;
  pbVar13[0x29] = 0;
  pbVar13[0x2a] = 0;
  pbVar13[0x2b] = 0;
  pbVar13[0x2c] = 0;
  pbVar13[0x2d] = 0;
  pbVar13[0x2e] = 0;
  pbVar13[0x2f] = 0;
  pbStack_78 = pbVar13;
  if (3 < *_DAT_143ca8e90) {
    pbStack_1c8 = (byte *)0x0;
    pbStack_1c0 = &UNK_143023956;
    uStack_1b8 = 0x1c;
    pbStack_1b0 = (byte *)0x0;
    puStack_1a8 = &UNK_143023929;
    ppbStack_1a0 = (byte **)0x2c;
    uStack_198 = 4;
    puStack_190 = &UNK_143023956;
    ppbStack_188 = (byte **)0x1c;
    pbStack_180 = (byte *)0x9d00000001;
    puStack_178 = &UNK_143023910;
    uStack_170 = 0x33;
    uStack_53 = 1;
    pdb_140f332f0(&uStack_58,&pbStack_1c8);
  }
  LOCK();
  lVar19 = *(longlong *)pbVar13;
  *(longlong *)pbVar13 = *(longlong *)pbVar13 + 1;
  UNLOCK();
  if (*(longlong *)pbVar13 != 0 && SCARRY8(lVar19,1) == *(longlong *)pbVar13 < 0) {
    apbStack_400[0] = pbVar13;
    pbStack_68 = pbVar13;
    pbVar13 = (byte *)pub_142e31f00();
    LOCK();
    lVar19 = *(longlong *)pbStack_60;
    *(longlong *)pbStack_60 = *(longlong *)pbStack_60 + 1;
    UNLOCK();
    if (*(longlong *)pbStack_60 != 0 && SCARRY8(lVar19,1) == *(longlong *)pbStack_60 < 0) {
      pbStack_1c8 = pbStack_60;
      pbStack_1c0 = pbVar13;
      pub_142e31ff0(pbVar13,1);
      LOCK();
      *(longlong *)pbStack_1c8 = *(longlong *)pbStack_1c8 + -1;
      UNLOCK();
      if (*(longlong *)pbStack_1c8 == 0) {
        uStack_56 = 1;
        pdb_140cb1c10(&pbStack_1c8);
      }
      uStack_56 = 0;
      pbVar13 = (byte *)pdb_140a62ee0(&pbStack_60,pbStack_68);
      if (pbVar13 != (byte *)0xffffffffffffffff) {
        LOCK();
        pbVar14 = pbVar13 + 8;
        *(longlong *)pbVar14 = *(longlong *)pbVar14 + -1;
        UNLOCK();
        if (*(longlong *)pbVar14 == 0) {
          pub_1406abac0(pbVar13,0xe8,8);
        }
      }
      if (3 < *puVar11) {
        pbStack_1c8 = (byte *)0x0;
        pbStack_1c0 = &UNK_143023956;
        uStack_1b8 = 0x1c;
        pbStack_1b0 = (byte *)0x0;
        puStack_1a8 = &UNK_143023929;
        ppbStack_1a0 = (byte **)0x2c;
        uStack_198 = 4;
        puStack_190 = &UNK_143023956;
        ppbStack_188 = (byte **)0x1c;
        pbStack_180 = (byte *)0xaa00000001;
        puStack_178 = &UNK_143023972;
        uStack_170 = 0x3f;
        uStack_53 = 1;
        pdb_140f332f0(&uStack_58,&pbStack_1c8);
      }
      pdb_14007ee60();
      pbVar13 = pub_1406abab0(0x30,8);
      if (pbVar13 == (byte *)0x0) {
        uStack_53 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar13[0] = 1;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13[4] = 0;
      pbVar13[5] = 0;
      pbVar13[6] = 0;
      pbVar13[7] = 0;
      pbVar13[8] = 1;
      pbVar13[9] = 0;
      pbVar13[10] = 0;
      pbVar13[0xb] = 0;
      pbVar13[0xc] = 0;
      pbVar13[0xd] = 0;
      pbVar13[0xe] = 0;
      pbVar13[0xf] = 0;
      pbVar13[0x10] = 0;
      pbVar13[0x18] = 0;
      pbVar13[0x19] = 0;
      pbVar13[0x1a] = 0;
      pbVar13[0x1b] = 0;
      pbVar13[0x1c] = 0;
      pbVar13[0x1d] = 0;
      pbVar13[0x1e] = 0;
      pbVar13[0x1f] = 0;
      pbVar13[0x20] = 8;
      pbVar13[0x21] = 0;
      pbVar13[0x22] = 0;
      pbVar13[0x23] = 0;
      pbVar13[0x24] = 0;
      pbVar13[0x25] = 0;
      pbVar13[0x26] = 0;
      pbVar13[0x27] = 0;
      pbVar13[0x28] = 0;
      pbVar13[0x29] = 0;
      pbVar13[0x2a] = 0;
      pbVar13[0x2b] = 0;
      pbVar13[0x2c] = 0;
      pbVar13[0x2d] = 0;
      pbVar13[0x2e] = 0;
      pbVar13[0x2f] = 0;
      uStack_55 = 1;
      pbStack_258 = pbVar13;
      pbVar14 = (byte *)pdb_140c7d280();
      pbStack_2c8 = pbVar14;
      pbVar15 = (byte *)pub_142e31f10();
      LOCK();
      lVar19 = *(longlong *)pbStack_60;
      *(longlong *)pbStack_60 = *(longlong *)pbStack_60 + 1;
      UNLOCK();
      if (*(longlong *)pbStack_60 != 0 && SCARRY8(lVar19,1) == *(longlong *)pbStack_60 < 0) {
        pbStack_1c8 = pbStack_60;
        pbStack_1c0 = pbVar15;
        uVar12 = pub_142e32000(pbVar15);
        LOCK();
        *(longlong *)pbStack_1c8 = *(longlong *)pbStack_1c8 + -1;
        UNLOCK();
        if (*(longlong *)pbStack_1c8 == 0) {
          uStack_54 = 1;
          pdb_140cb1c10(&pbStack_1c8);
        }
        LOCK();
        lVar19 = *(longlong *)pbVar13;
        *(longlong *)pbVar13 = *(longlong *)pbVar13 + 1;
        UNLOCK();
        if (*(longlong *)pbVar13 != 0 && SCARRY8(lVar19,1) == *(longlong *)pbVar13 < 0) {
          LOCK();
          lVar19 = *(longlong *)pbVar14;
          *(longlong *)pbVar14 = *(longlong *)pbVar14 + 1;
          UNLOCK();
          if (*(longlong *)pbVar14 != 0 && SCARRY8(lVar19,1) == *(longlong *)pbVar14 < 0) {
            uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar12);
            uStack_54 = 1;
            pbStack_1c8 = pbVar14;
            pbStack_1c0 = pbVar13;
            pbVar15 = (byte *)pdb_140a635b0(&pbStack_60,&pbStack_1c8);
            if (pbVar15 != (byte *)0xffffffffffffffff) {
              LOCK();
              pbVar1 = pbVar15 + 8;
              *(longlong *)pbVar1 = *(longlong *)pbVar1 + -1;
              UNLOCK();
              if (*(longlong *)pbVar1 == 0) {
                pub_1406abac0(pbVar15,0xe8,8);
              }
            }
            pdb_14007ee60();
            pbVar15 = pub_1406abab0(0x18,8);
            if (pbVar15 == (byte *)0x0) {
              uStack_54 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x18);
            }
            pbVar15[0] = 1;
            pbVar15[1] = 0;
            pbVar15[2] = 0;
            pbVar15[3] = 0;
            pbVar15[4] = 0;
            pbVar15[5] = 0;
            pbVar15[6] = 0;
            pbVar15[7] = 0;
            pbVar15[8] = 1;
            pbVar15[9] = 0;
            pbVar15[10] = 0;
            pbVar15[0xb] = 0;
            pbVar15[0xc] = 0;
            pbVar15[0xd] = 0;
            pbVar15[0xe] = 0;
            pbVar15[0xf] = 0;
            pbVar15[0x10] = 0;
            LOCK();
            lVar19 = *(longlong *)pbVar15;
            *(longlong *)pbVar15 = *(longlong *)pbVar15 + 1;
            UNLOCK();
            pbStack_1c8 = pbVar15;
            if (*(longlong *)pbVar15 != 0 && SCARRY8(lVar19,1) == *(longlong *)pbVar15 < 0) {
              uStack_57 = 1;
              pbStack_68 = pbVar15;
              pbVar15 = (byte *)pdb_140a63230(&pbStack_60,pbVar15,uVar12);
              if (pbVar15 != (byte *)0xffffffffffffffff) {
                LOCK();
                pbVar1 = pbVar15 + 8;
                *(longlong *)pbVar1 = *(longlong *)pbVar1 + -1;
                UNLOCK();
                if (*(longlong *)pbVar1 == 0) {
                  pub_1406abac0(pbVar15,0xe8,8);
                }
              }
              uStack_57 = 0;
              pdb_140bd8320(apbStack_400,pbVar13,pbStack_68,pbVar14);
              LOCK();
              lVar19 = *(longlong *)pbStack_60;
              *(longlong *)pbStack_60 = *(longlong *)pbStack_60 + 1;
              UNLOCK();
              if (*(longlong *)pbStack_60 != 0 && SCARRY8(lVar19,1) == *(longlong *)pbStack_60 < 0)
              {
                uStack_51 = 1;
                uStack_52 = 1;
                uVar16 = pdb_1418fc980(param_1);
                uStack_51 = 1;
                uStack_52 = 0;
                uVar16 = pdb_1418f2840(uVar16,pbStack_78);
                pub_142e32760(&pbStack_1c8,apbStack_400);
                uStack_51 = 0;
                uStack_52 = 0;
                uVar16 = pdb_1418f86e0(uVar16,&pbStack_1c8);
                pbStack_e8 = (byte *)0x8000000000000000;
                pbStack_1c8 = (byte *)0x4;
                uStack_51 = 0;
                uStack_52 = 0;
                ppbVar18 = &pbStack_1c8;
                uVar16 = pdb_1418f6040(uVar16);
                pbStack_1e0 = (byte *)0x0;
                uStack_1d8 = 8;
                uStack_1d0 = 0;
                plVar17 = (longlong *)pdb_140f3bda0();
                if ((char)plVar17[2] == '\x01') {
                  lStack_2d8 = *plVar17;
                  ppbVar18 = (byte **)plVar17[1];
                }
                else {
                  lStack_2d8 = pdb_140f4fd10();
                  *plVar17 = lStack_2d8;
                  plVar17[1] = (longlong)ppbVar18;
                  *(undefined1 *)(plVar17 + 2) = 1;
                }
                *plVar17 = lStack_2d8 + 1;
                uVar10 = _UNK_143023cb8;
                uVar9 = _DAT_143023cb0;
                uVar8 = _UNK_143023ca8;
                pbVar13 = _DAT_143023ca0;
                uStack_2e8 = _DAT_143023cb0;
                uStack_2e0 = _UNK_143023cb8;
                pbStack_2f8 = _DAT_143023ca0;
                uStack_2f0 = _UNK_143023ca8;
                ppbStack_2d0 = ppbVar18;
                plVar17 = (longlong *)pdb_140f3bda0();
                if ((char)plVar17[2] == '\x01') {
                  lStack_348 = *plVar17;
                  ppbVar18 = (byte **)plVar17[1];
                }
                else {
                  lStack_348 = pdb_140f4fd10();
                  *plVar17 = lStack_348;
                  plVar17[1] = (longlong)ppbVar18;
                  *(undefined1 *)(plVar17 + 2) = 1;
                }
                *plVar17 = lStack_348 + 1;
                uStack_358 = uVar9;
                uStack_350 = uVar10;
                pbStack_368 = pbVar13;
                uStack_360 = uVar8;
                ppbStack_340 = ppbVar18;
                plVar17 = (longlong *)pdb_140f3bda0();
                if ((char)plVar17[2] == '\x01') {
                  lStack_238 = *plVar17;
                  ppbVar18 = (byte **)plVar17[1];
                }
                else {
                  lStack_238 = pdb_140f4fd10();
                  *plVar17 = lStack_238;
                  plVar17[1] = (longlong)ppbVar18;
                  *(undefined1 *)(plVar17 + 2) = 1;
                }
                *plVar17 = lStack_238 + 1;
                uStack_248 = uVar9;
                uStack_240 = uVar10;
                pbStack_258 = pbVar13;
                uStack_250 = uVar8;
                ppbStack_230 = ppbVar18;
                pdb_14007ee60();
                lVar19 = 8;
                pbStack_1e8 = pub_1406abab0(0x48,8);
                if (pbStack_1e8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc7e11(8,0x48);
                }
                pbStack_1e8[0] = 1;
                pbStack_1e8[1] = 0;
                pbStack_1e8[2] = 0;
                pbStack_1e8[3] = 0;
                pbStack_1e8[4] = 0;
                pbStack_1e8[5] = 0;
                pbStack_1e8[6] = 0;
                pbStack_1e8[7] = 0;
                pbStack_1e8[8] = 1;
                pbStack_1e8[9] = 0;
                pbStack_1e8[10] = 0;
                pbStack_1e8[0xb] = 0;
                pbStack_1e8[0xc] = 0;
                pbStack_1e8[0xd] = 0;
                pbStack_1e8[0xe] = 0;
                pbStack_1e8[0xf] = 0;
                pbStack_1e8[0x10] = 0;
                pbStack_1e8[0x18] = 1;
                pbStack_1e8[0x19] = 0;
                pbStack_1e8[0x1a] = 0;
                pbStack_1e8[0x1b] = 0;
                pbStack_1e8[0x1c] = 0;
                pbStack_1e8[0x1d] = 0;
                pbStack_1e8[0x1e] = 0;
                pbStack_1e8[0x1f] = 0x80;
                pbStack_68 = pbStack_1e8;
                plVar17 = (longlong *)pdb_140f3bda0();
                if ((char)plVar17[2] == '\x01') {
                  lStack_2a8 = *plVar17;
                  lVar19 = plVar17[1];
                }
                else {
                  lStack_2a8 = pdb_140f4fd10();
                  *plVar17 = lStack_2a8;
                  plVar17[1] = lVar19;
                  *(undefined1 *)(plVar17 + 2) = 1;
                }
                *plVar17 = lStack_2a8 + 1;
                uStack_2b8 = uVar9;
                uStack_2b0 = uVar10;
                pbStack_2c8 = pbVar13;
                uStack_2c0 = uVar8;
                lStack_2a0 = lVar19;
                plVar17 = (longlong *)pdb_140f3bda0();
                if ((char)plVar17[2] == '\x01') {
                  lStack_c8 = *plVar17;
                  lVar19 = plVar17[1];
                }
                else {
                  lStack_c8 = pdb_140f4fd10();
                  *plVar17 = lStack_c8;
                  plVar17[1] = lVar19;
                  *(undefined1 *)(plVar17 + 2) = 1;
                }
                *plVar17 = lStack_c8 + 1;
                uStack_1b8 = uStack_1d0;
                pbStack_1c8 = pbStack_1e0;
                pbStack_1c0 = (byte *)uStack_1d8;
                pbStack_1b0 = pbStack_2f8;
                puStack_1a8 = (undefined *)uStack_2f0;
                ppbStack_1a0 = (byte **)uStack_2e8;
                uStack_198 = uStack_2e0;
                puStack_190 = (undefined *)lStack_2d8;
                ppbStack_188 = ppbStack_2d0;
                pbStack_180 = pbStack_368;
                puStack_178 = (undefined *)uStack_360;
                uStack_170 = uStack_358;
                uStack_168 = uStack_350;
                lStack_160 = lStack_348;
                ppbStack_158 = ppbStack_340;
                pbStack_150 = pbStack_258;
                uStack_148 = uStack_250;
                uStack_140 = uStack_248;
                lStack_138 = uStack_240;
                ppbStack_130 = (byte **)lStack_238;
                ppbStack_128 = ppbStack_230;
                pbStack_120 = pbStack_68;
                uStack_b8 = uStack_b8 & 0xffffffffffff0000;
                pbStack_118 = pbStack_2c8;
                uStack_110 = uStack_2c0;
                uStack_108 = uStack_2b8;
                uStack_100 = uStack_2b0;
                lStack_f8 = lStack_2a8;
                lStack_f0 = lStack_2a0;
                pbStack_e8 = pbVar13;
                uStack_e0 = uVar8;
                uStack_d8 = uVar9;
                uStack_d0 = uVar10;
                uStack_51 = 0;
                uStack_52 = 0;
                lStack_c0 = lVar19;
                lVar19 = pdb_14190b980(uVar16,&pbStack_1c8);
                if (*(longlong *)(lVar19 + 0x88) != 0) {
                  lVar4 = *(longlong *)(lVar19 + 0x70);
                  uVar20 = 0xb49a0622b05d9ad4;
                  lVar21 = 0;
                  while( true ) {
                    uVar20 = uVar20 & *(ulonglong *)(lVar19 + 0x78);
                    pcVar2 = (char *)(lVar4 + uVar20);
                    auVar26[0] = -(*pcVar2 == DAT_142e34990);
                    auVar26[1] = -(pcVar2[1] == DAT_142e34990._1_1_);
                    auVar26[2] = -(pcVar2[2] == DAT_142e34990._2_1_);
                    auVar26[3] = -(pcVar2[3] == DAT_142e34990._3_1_);
                    auVar26[4] = -(pcVar2[4] == DAT_142e34990._4_1_);
                    auVar26[5] = -(pcVar2[5] == DAT_142e34990._5_1_);
                    auVar26[6] = -(pcVar2[6] == DAT_142e34990._6_1_);
                    auVar26[7] = -(pcVar2[7] == DAT_142e34990._7_1_);
                    auVar26[8] = -(pcVar2[8] == DAT_142e34990._8_1_);
                    auVar26[9] = -(pcVar2[9] == DAT_142e34990._9_1_);
                    auVar26[10] = -(pcVar2[10] == DAT_142e34990._10_1_);
                    auVar26[0xb] = -(pcVar2[0xb] == DAT_142e34990._11_1_);
                    auVar26[0xc] = -(pcVar2[0xc] == DAT_142e34990._12_1_);
                    auVar26[0xd] = -(pcVar2[0xd] == DAT_142e34990._13_1_);
                    auVar26[0xe] = -(pcVar2[0xe] == DAT_142e34990._14_1_);
                    auVar26[0xf] = -(pcVar2[0xf] == DAT_142e34990._15_1_);
                    uVar23 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar26[0xf] >> 7) << 0xf;
                    uVar22 = (uint)uVar23;
                    while (uVar23 != 0) {
                      uVar6 = 0;
                      for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                        uVar6 = uVar6 + 1;
                      }
                      uVar24 = uVar6 + uVar20 & *(ulonglong *)(lVar19 + 0x78);
                      pcVar3 = (char *)(lVar4 + -0x18 + uVar24 * -0x18);
                      auVar27[0] = -(*pcVar3 == DAT_142fa7120);
                      auVar27[1] = -(pcVar3[1] == UNK_142fa7121);
                      auVar27[2] = -(pcVar3[2] == UNK_142fa7122);
                      auVar27[3] = -(pcVar3[3] == UNK_142fa7123);
                      auVar27[4] = -(pcVar3[4] == UNK_142fa7124);
                      auVar27[5] = -(pcVar3[5] == UNK_142fa7125);
                      auVar27[6] = -(pcVar3[6] == UNK_142fa7126);
                      auVar27[7] = -(pcVar3[7] == UNK_142fa7127);
                      auVar27[8] = -(pcVar3[8] == UNK_142fa7128);
                      auVar27[9] = -(pcVar3[9] == UNK_142fa7129);
                      auVar27[10] = -(pcVar3[10] == UNK_142fa712a);
                      auVar27[0xb] = -(pcVar3[0xb] == UNK_142fa712b);
                      auVar27[0xc] = -(pcVar3[0xc] == UNK_142fa712c);
                      auVar27[0xd] = -(pcVar3[0xd] == UNK_142fa712d);
                      auVar27[0xe] = -(pcVar3[0xe] == UNK_142fa712e);
                      auVar27[0xf] = -(pcVar3[0xf] == UNK_142fa712f);
                      if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
                        uVar20 = *(ulonglong *)(lVar4 + uVar24 * -0x18 + -8);
                        if (((*(ulonglong *)(lVar19 + 0x210) <= uVar20) ||
                            (uVar20 = *(ulonglong *)(*(longlong *)(lVar19 + 0x208) + uVar20 * 8),
                            uVar20 == 0)) ||
                           (*(longlong *)(*(longlong *)(lVar19 + 0x1d8) + 0x20 + ~uVar20 * 0x40) ==
                            0)) goto LAB_140944ca2;
                        goto LAB_140944cb9;
                      }
                      uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                      uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
                    }
                    auVar25[0] = -(*pcVar2 == -1);
                    auVar25[1] = -(pcVar2[1] == -1);
                    auVar25[2] = -(pcVar2[2] == -1);
                    auVar25[3] = -(pcVar2[3] == -1);
                    auVar25[4] = -(pcVar2[4] == -1);
                    auVar25[5] = -(pcVar2[5] == -1);
                    auVar25[6] = -(pcVar2[6] == -1);
                    auVar25[7] = -(pcVar2[7] == -1);
                    auVar25[8] = -(pcVar2[8] == -1);
                    auVar25[9] = -(pcVar2[9] == -1);
                    auVar25[10] = -(pcVar2[10] == -1);
                    auVar25[0xb] = -(pcVar2[0xb] == -1);
                    auVar25[0xc] = -(pcVar2[0xc] == -1);
                    auVar25[0xd] = -(pcVar2[0xd] == -1);
                    auVar25[0xe] = -(pcVar2[0xe] == -1);
                    auVar25[0xf] = -(pcVar2[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar25 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
                    uVar20 = uVar20 + lVar21 + 0x10;
                    lVar21 = lVar21 + 0x10;
                  }
                }
LAB_140944ca2:
                uStack_51 = 0;
                uStack_52 = 0;
                pdb_1418d7200(lVar19);
LAB_140944cb9:
                uStack_51 = 0;
                uStack_52 = 0;
                pdb_140c96b10(lVar19);
                uStack_51 = 0;
                uStack_52 = 0;
                pdb_141a33230(&pbStack_368,4,&UNK_143023998);
                pdb_14007ee60();
                pbVar13 = pub_1406abab0(0x80,8);
                if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc7e11(8,0x80);
                }
                pbVar13[0] = 0;
                pbVar13[1] = 0;
                pbVar13[2] = 0;
                pbVar13[3] = 0;
                pbVar13[4] = 0;
                pbVar13[5] = 0;
                pbVar13[6] = 0;
                pbVar13[7] = 0;
                pbVar13[0x78] = 0;
                pbVar13[0x79] = 0;
                pbVar13[0x7a] = 0;
                pbVar13[0x7b] = 0;
                pbVar13[0x7c] = 0;
                pdb_140ed3cd0(&pbStack_1c8,pbVar13,&UNK_143365920);
                pdb_1417e3000(&pbStack_258,&pbStack_1c8);
                pdb_14007ee60();
                pbVar13 = pub_1406abab0(0x50,8);
                if (pbVar13 != (byte *)0x0) {
                  pbVar13[0] = 0;
                  pbVar13[1] = 0;
                  pbVar13[2] = 0;
                  pbVar13[3] = 0;
                  pbVar13[4] = 0;
                  pbVar13[5] = 0;
                  pbVar13[6] = 0;
                  pbVar13[7] = 0;
                  pbVar13[0x48] = 0;
                  pbVar13[0x49] = 0;
                  pbVar13[0x4a] = 0;
                  pbVar13[0x4b] = 0;
                  pbVar13[0x4c] = 0;
                  pdb_140ed3cd0(&pbStack_1c8,pbVar13,&UNK_143367450);
                  pdb_1417e3960(&pbStack_2c8,&pbStack_1c8);
                  pbStack_1c8 = pbStack_368;
                  pbStack_1c0 = (byte *)uStack_360;
                  uStack_1b8 = uStack_358;
                  pbStack_1b0 = (byte *)uStack_350;
                  puStack_1a8 = (undefined *)lStack_348;
                  ppbStack_1a0 = ppbStack_340;
                  uStack_198 = uStack_338;
                  puStack_190 = (undefined *)uStack_330;
                  ppbStack_188 = (byte **)uStack_328;
                  pbStack_180 = (byte *)uStack_320;
                  puStack_178 = (undefined *)uStack_318;
                  uStack_170 = uStack_310;
                  uStack_168 = uStack_308;
                  lStack_160 = uStack_300;
                  ppbStack_158 = (byte **)pbStack_258;
                  pbStack_150 = (byte *)uStack_250;
                  uStack_148 = uStack_248;
                  uStack_140 = uStack_240;
                  lStack_138 = lStack_238;
                  ppbStack_130 = ppbStack_230;
                  ppbStack_128 = (byte **)uStack_228;
                  pbStack_120 = (byte *)uStack_220;
                  pbStack_118 = (byte *)uStack_218;
                  uStack_110 = uStack_210;
                  uStack_108 = uStack_208;
                  uStack_100 = uStack_200;
                  lStack_f8 = uStack_1f8;
                  lStack_f0 = uStack_1f0;
                  uStack_88 = uStack_268;
                  uStack_80 = uStack_260;
                  uStack_98 = uStack_278;
                  uStack_90 = uStack_270;
                  uStack_a8 = uStack_288;
                  uStack_a0 = uStack_280;
                  uStack_b8 = uStack_298;
                  uStack_b0 = uStack_290;
                  lStack_c8 = lStack_2a8;
                  lStack_c0 = lStack_2a0;
                  uStack_d8 = uStack_2b8;
                  uStack_d0 = uStack_2b0;
                  pbStack_e8 = pbStack_2c8;
                  uStack_e0 = uStack_2c0;
                  uStack_51 = 0;
                  uStack_52 = 0;
                  pdb_140c95870(lVar19,&pbStack_1c8);
                  return pbStack_60;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,0x50);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

