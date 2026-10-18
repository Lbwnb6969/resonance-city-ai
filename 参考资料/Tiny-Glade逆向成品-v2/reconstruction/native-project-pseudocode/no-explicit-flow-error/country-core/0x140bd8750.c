// VA 0x140bd8750, PDB extent 10189 bytes
// country_core::systems::steam::workshop_clutter::workshop_clutter_hot_install
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_clutter::workshop_clutter_hot_install
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
   Extent: 10189 */

void pdb_140bd8750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11,undefined8 *param_12,
                  longlong *param_13)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  char cVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  longlong *plVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined *arg1;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ushort uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulonglong uStack_360;
  byte *pbStack_358;
  longlong lStack_348;
  longlong lStack_340;
  longlong *plStack_338;
  undefined8 *puStack_330;
  undefined1 (*pauStack_328) [16];
  undefined1 (*pauStack_320) [16];
  undefined1 (*pauStack_318) [16];
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined1 (*pauStack_300) [16];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  longlong lStack_2e0;
  longlong alStack_2c8 [10];
  longlong lStack_278;
  undefined4 *puStack_270;
  undefined4 *puStack_268;
  undefined4 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 (*pauStack_238) [16];
  undefined8 uStack_230;
  longlong lStack_228;
  undefined8 *puStack_220;
  longlong lStack_210;
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  undefined *puStack_1f0;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  code *pcStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 auStack_1a8 [16];
  undefined *puStack_198;
  undefined1 (*pauStack_190) [16];
  undefined4 *puStack_180;
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  ushort uStack_160;
  undefined6 uStack_15e;
  undefined *puStack_158;
  undefined1 (*pauStack_150) [16];
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined *puStack_128;
  undefined1 (**ppauStack_120) [16];
  undefined1 (*pauStack_c0) [16];
  longlong lStack_b8;
  undefined1 (*pauStack_b0) [16];
  undefined4 uStack_a4;
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  longlong *plStack_90;
  undefined1 (*pauStack_88) [16];
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c == '\0') {
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puStack_180 = (undefined4 *)param_2[2];
    *puStack_180 = uStack_a4;
    plVar29 = (longlong *)*param_2;
    pauVar21 = (undefined1 (*) [16])*plVar29;
    pauStack_238 = (undefined1 (*) [16])plVar29[3];
    pauStack_248 = (undefined1 (*) [16])plVar29[1];
    pauStack_240 = (undefined1 (*) [16])plVar29[2];
    *plVar29 = -0x8000000000000000;
    puStack_258 = param_4;
    plStack_90 = plVar29;
    if (!SBORROW8(0,(longlong)pauVar21)) {
      pauStack_328 = (undefined1 (*) [16])*param_3;
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      pauStack_320 = (undefined1 (*) [16])*param_4;
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      pauStack_318 = (undefined1 (*) [16])*param_5;
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      puStack_310 = (undefined8 *)*param_6;
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      puStack_308 = (undefined *)*param_7;
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      pauStack_300 = (undefined1 (*) [16])*param_8;
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      uStack_2f8 = *param_9;
      *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
      uStack_2f0 = *param_10;
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      uStack_2e8 = *param_12;
      *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
      lStack_2e0 = *param_13;
      uStack_71 = 1;
      pauStack_1b8 = pauVar21;
      pauStack_1b0 = pauStack_248;
      auStack_1a8._0_8_ = pauStack_240;
      auStack_1a8._8_8_ = pauStack_238;
      cVar11 = pdb_141b05c30(&pauStack_1b8,&UNK_143064fba,8,&pauStack_328);
      if (cVar11 != '\0') {
        if (cVar11 == '\x01') {
          pauVar14 = pauStack_1b0 + auStack_1a8._0_8_ * 9;
          pauVar21 = pauStack_1b0;
          while (pauVar13 = pauVar21, pauVar13 != pauVar14) {
            pauVar21 = pauVar13 + 9;
            if ((*pauVar13)[0] != '\0') {
              uStack_71 = 1;
              pdb_140bd8210(plStack_90,*(undefined8 *)((longlong)*pauVar13 + 8));
            }
          }
          *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
          lVar2 = *param_11;
          lVar24 = *(longlong *)(lVar2 + 0x30);
          uVar18 = *(undefined8 *)(lVar2 + 0x40);
          if (lVar24 == *(longlong *)(lVar2 + 0x20)) {
            uStack_71 = 1;
            pdb_142d7e8a0(lVar2 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar24 * 8) = uVar18;
          *(longlong *)(lVar2 + 0x30) = lVar24 + 1;
          *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
        }
        else {
          pauVar14 = pauStack_1b0 + auStack_1a8._0_8_ * 9;
          pauStack_88 = (undefined1 (*) [16])(plStack_90 + 7);
          plVar29 = plStack_90 + 0xb;
          pauVar21 = pauStack_1b0;
          while (pauVar13 = pauVar21, pauVar13 != pauVar14) {
            pauVar21 = pauVar13 + 9;
            if ((*pauVar13)[0] != '\0') {
              lVar2 = *(longlong *)((longlong)*pauVar13 + 8);
              *puStack_180 = uStack_a4;
              lStack_340 = lVar2;
              uVar18 = pdb_1400af0a0(plVar29,&lStack_340);
              uStack_71 = 1;
              pdb_140ca9bd0(&pauStack_178,pauStack_88,uVar18,&lStack_340);
              if ((!SBORROW8(0,(longlong)pauStack_170)) &&
                 (pauStack_170 != (undefined1 (*) [16])0x0)) {
                pub_1406abac0((byte *)pauStack_168,(longlong)pauStack_170 << 3,8);
              }
              pauStack_178 = (undefined1 (*) [16])0x8000000000000002;
              uStack_71 = 1;
              pdb_140bd80b0(plStack_90,lVar2,&pauStack_178);
              uStack_71 = 1;
              pdb_140d92210(&pauStack_178,lVar2);
              if ((int)pauStack_178 != 2) {
                uStack_71 = 1;
                pdb_1404b3c90(&pauStack_178);
              }
            }
          }
        }
        pdb_14099abd0(&pauStack_1b8);
        return;
      }
      pauStack_168 = (undefined1 (*) [16])auStack_1a8._0_8_;
      uStack_160 = (ushort)auStack_1a8._8_8_;
      uStack_15e = SUB86(auStack_1a8._8_8_,2);
      pauStack_178 = pauStack_1b8;
      pauStack_170 = pauStack_1b0;
      *puStack_180 = uStack_a4;
      if (!SBORROW8(0,*plStack_90)) {
        pdb_14099abd0(plStack_90);
      }
      plStack_90[2] = (longlong)pauStack_168;
      plStack_90[3] = CONCAT62(uStack_15e,uStack_160);
      *plStack_90 = (longlong)pauStack_178;
      plStack_90[1] = (longlong)pauStack_170;
      return;
    }
    LOCK();
    cVar11 = *(char *)(plVar29[5] + 0x10);
    *(char *)(plVar29[5] + 0x10) = '\0';
    UNLOCK();
    puStack_250 = param_3;
    if (cVar11 != '\0') {
      pauVar21 = (undefined1 (*) [16])*param_1;
      puStack_330 = param_1;
      pauVar13 = (undefined1 (*) [16])pub_142e32030();
      pauVar14 = *(undefined1 (**) [16])*pauVar21;
      LOCK();
      lVar2 = *(longlong *)*pauVar14;
      *(longlong *)*pauVar14 = *(longlong *)*pauVar14 + 1;
      UNLOCK();
      pauStack_88 = pauVar21;
      if (*(longlong *)*pauVar14 == 0 || SCARRY8(lVar2,1) != *(longlong *)*pauVar14 < 0)
      goto LAB_140bda483;
      pauStack_1b8 = pauVar14;
      pauStack_1b0 = pauVar13;
      uVar12 = pub_142e32050(pauVar13);
      uVar16 = (ulonglong)uVar12;
      pauVar21 = (undefined1 (*) [16])(uVar16 * 8);
      pauStack_b0 = pauVar21;
      if (uVar12 == 0) {
        pauVar14 = (undefined1 (*) [16])0x8;
      }
      else {
        pdb_14007ee60();
        pauVar14 = (undefined1 (*) [16])pub_1406abae0((ulonglong)pauVar21,8);
        if (pauVar14 == (undefined1 (*) [16])0x0) {
          pdb_142dc7e2a(8,pauVar21);
          goto LAB_140bda483;
        }
      }
      pauStack_a0 = (undefined1 (*) [16])CONCAT44(pauStack_a0._4_4_,uVar12);
      pauStack_98 = pauVar14;
      pub_142e32060(pauVar13,pauVar14,uVar12);
      uStack_79 = 0;
      puVar15 = (undefined8 *)pdb_140f3bda0();
      if (*(char *)(puVar15 + 2) == '\x01') {
        puStack_158 = (undefined *)*puVar15;
        pauVar14 = (undefined1 (*) [16])puVar15[1];
      }
      else {
        uStack_79 = 0;
        puStack_158 = (undefined *)pdb_140f4fd10();
        *puVar15 = puStack_158;
        puVar15[1] = pauVar14;
        *(undefined1 *)(puVar15 + 2) = 1;
      }
      puStack_310 = (undefined8 *)((longlong)*pauStack_98 + uVar16 * 8);
      *puVar15 = puStack_158 + 1;
      pauStack_168 = _DAT_143064e50;
      uStack_160 = (ushort)_UNK_143064e58;
      uStack_15e = (undefined6)((ulonglong)_UNK_143064e58 >> 0x10);
      pauStack_178 = _DAT_143064e40;
      pauStack_170 = _UNK_143064e48;
      pauStack_328 = pauStack_98;
      pauStack_320 = pauStack_98;
      pauStack_318 = (undefined1 (*) [16])uVar16;
      pauStack_150 = pauVar14;
      pdb_1417a61d0(&pauStack_178,&pauStack_328);
      puStack_310 = (undefined8 *)CONCAT62(uStack_15e,uStack_160);
      pauStack_328 = pauStack_178;
      pauStack_320 = pauStack_170;
      pauStack_318 = pauStack_168;
      puStack_308 = puStack_158;
      pauStack_300 = pauStack_150;
      LOCK();
      *(longlong *)*pauStack_1b8 = *(longlong *)*pauStack_1b8 + -1;
      UNLOCK();
      if (*(longlong *)*pauStack_1b8 == 0) {
        pdb_140cb1c10(&pauStack_1b8);
      }
      auVar33 = *pauStack_328;
      pauVar21 = pauStack_328 + 1;
      uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
      plStack_338 = plStack_90 + 7;
      pauStack_a0 = (undefined1 (*) [16])(plStack_90 + 0xb);
      pauVar14 = pauStack_328;
      puVar15 = puStack_310;
LAB_140bd8da0:
      plVar29 = plStack_90;
      if (puVar15 != (undefined8 *)0x0) {
        if ((short)uVar12 == 0) {
          do {
            auVar33 = *pauVar21;
            pauVar14 = pauVar14 + -8;
            pauVar21 = pauVar21 + 1;
            uVar12 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar12 == 0);
        }
        iVar7 = 0;
        for (uVar25 = uVar12; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        uVar12 = uVar12 - 1 & uVar12;
        puVar15 = (undefined8 *)((longlong)puVar15 + -1);
        lVar2 = *(longlong *)((longlong)pauVar14 + (-8 - (ulonglong)(uint)(iVar7 << 3)));
        lStack_278 = lVar2;
        if (plStack_90[10] != 0) {
          uVar16 = pdb_1400af0a0(pauStack_a0,&lStack_278);
          bVar32 = (byte)(uVar16 >> 0x39);
          auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
          auVar33 = pshuflw(auVar33,auVar33,0);
          lVar24 = 0;
          while( true ) {
            uVar16 = uVar16 & plVar29[8];
            pcVar1 = (char *)(plVar29[7] + uVar16);
            auVar37[0] = -(*pcVar1 == auVar33[0]);
            auVar37[1] = -(pcVar1[1] == auVar33[1]);
            auVar37[2] = -(pcVar1[2] == auVar33[2]);
            auVar37[3] = -(pcVar1[3] == auVar33[3]);
            auVar37[4] = -(pcVar1[4] == auVar33[4]);
            auVar37[5] = -(pcVar1[5] == auVar33[5]);
            auVar37[6] = -(pcVar1[6] == auVar33[6]);
            auVar37[7] = -(pcVar1[7] == auVar33[7]);
            auVar37[8] = -(pcVar1[8] == auVar33[0]);
            auVar37[9] = -(pcVar1[9] == auVar33[1]);
            auVar37[10] = -(pcVar1[10] == auVar33[2]);
            auVar37[0xb] = -(pcVar1[0xb] == auVar33[3]);
            auVar37[0xc] = -(pcVar1[0xc] == auVar33[4]);
            auVar37[0xd] = -(pcVar1[0xd] == auVar33[5]);
            auVar37[0xe] = -(pcVar1[0xe] == auVar33[6]);
            auVar37[0xf] = -(pcVar1[0xf] == auVar33[7]);
            uVar27 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar37[0xf] >> 7) << 0xf;
            uVar25 = (uint)uVar27;
            while (uVar27 != 0) {
              uVar6 = 0;
              for (uVar8 = uVar25; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (lVar2 == *(longlong *)(plVar29[7] + -0x28 + (uVar6 + uVar16 & plVar29[8]) * -0x28)
                 ) goto LAB_140bd8da0;
              uVar27 = (ushort)(uVar25 - 1) & (ushort)uVar25;
              uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar27);
            }
            auVar34[0] = -(*pcVar1 == -1);
            auVar34[1] = -(pcVar1[1] == -1);
            auVar34[2] = -(pcVar1[2] == -1);
            auVar34[3] = -(pcVar1[3] == -1);
            auVar34[4] = -(pcVar1[4] == -1);
            auVar34[5] = -(pcVar1[5] == -1);
            auVar34[6] = -(pcVar1[6] == -1);
            auVar34[7] = -(pcVar1[7] == -1);
            auVar34[8] = -(pcVar1[8] == -1);
            auVar34[9] = -(pcVar1[9] == -1);
            auVar34[10] = -(pcVar1[10] == -1);
            auVar34[0xb] = -(pcVar1[0xb] == -1);
            auVar34[0xc] = -(pcVar1[0xc] == -1);
            auVar34[0xd] = -(pcVar1[0xd] == -1);
            auVar34[0xe] = -(pcVar1[0xe] == -1);
            auVar34[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
            uVar16 = lVar24 + uVar16 + 0x10;
            lVar24 = lVar24 + 0x10;
          }
        }
        pdb_140bd8210(plVar29,lVar2);
        pauVar17 = (undefined1 (*) [16])pub_142e32030();
        pauVar13 = *(undefined1 (**) [16])*pauStack_88;
        LOCK();
        lVar24 = *(longlong *)*pauVar13;
        *(longlong *)*pauVar13 = *(longlong *)*pauVar13 + 1;
        UNLOCK();
        if (*(longlong *)*pauVar13 == 0 || SCARRY8(lVar24,1) != *(longlong *)*pauVar13 < 0)
        goto LAB_140bda483;
        pauStack_178 = pauVar13;
        pauStack_170 = pauVar17;
        uVar16 = pub_142e32070(pauVar17,lVar2);
        if ((uVar16 & 4) == 0) {
          LOCK();
          *(longlong *)*pauStack_178 = *(longlong *)*pauStack_178 + -1;
          UNLOCK();
          if (*(longlong *)*pauStack_178 == 0) {
            pdb_140cb1c10(&pauStack_178);
          }
          pauVar17 = (undefined1 (*) [16])pub_142e32030();
          pauVar13 = *(undefined1 (**) [16])*pauStack_88;
          LOCK();
          lVar24 = *(longlong *)*pauVar13;
          *(longlong *)*pauVar13 = *(longlong *)*pauVar13 + 1;
          UNLOCK();
          if (*(longlong *)*pauVar13 == 0 || SCARRY8(lVar24,1) != *(longlong *)*pauVar13 < 0)
          goto LAB_140bda483;
          pauStack_178 = pauVar13;
          pauStack_170 = pauVar17;
          cVar11 = pub_142e32040(pauVar17,lVar2,1);
          if (cVar11 == '\0') {
            LOCK();
            *(longlong *)*pauStack_178 = *(longlong *)*pauStack_178 + -1;
            UNLOCK();
            if (*(longlong *)*pauStack_178 == 0) {
              pdb_140cb1c10(&pauStack_178);
            }
            if (1 < *_DAT_143ca8e90) {
              pauStack_1b8 = (undefined1 (*) [16])&lStack_278;
              pauStack_1b0 = (undefined1 (*) [16])pdb_140c91ab0;
              pauStack_178 = (undefined1 (*) [16])0x0;
              pauStack_170 = (undefined1 (*) [16])&UNK_143064ff0;
              pauStack_168 = (undefined1 (*) [16])0x2e;
              uStack_160 = 0;
              uStack_15e = 0;
              puStack_158 = &UNK_143064f80;
              pauStack_150 = (undefined1 (*) [16])0x39;
              uStack_148 = 2;
              puStack_140 = &UNK_143064ff0;
              uStack_138 = 0x2e;
              lStack_130 = 0x13600000001;
              puStack_128 = &UNK_14306510d;
              ppauStack_120 = &pauStack_1b8;
              pdb_140f332f0(&uStack_72,&pauStack_178);
            }
          }
          else {
            LOCK();
            *(longlong *)*pauStack_178 = *(longlong *)*pauStack_178 + -1;
            UNLOCK();
            if (*(longlong *)*pauStack_178 == 0) {
              pdb_140cb1c10(&pauStack_178);
            }
          }
        }
        else {
          LOCK();
          *(longlong *)*pauStack_178 = *(longlong *)*pauStack_178 + -1;
          UNLOCK();
          if (*(longlong *)*pauStack_178 == 0) {
            pdb_140cb1c10(&pauStack_178);
          }
          lVar24 = plStack_90[4];
          pauVar13 = (undefined1 (*) [16])(lVar24 + 0x10);
          LOCK();
          bVar30 = *(char *)(lVar24 + 0x10) == '\0';
          if (bVar30) {
            *(char *)(lVar24 + 0x10) = '\x01';
          }
          UNLOCK();
          if (!bVar30) {
            pdb_142dbd1a0(pauVar13);
          }
          pdb_140e9a150(pauVar13);
          lVar3 = *(longlong *)(lVar24 + 0x28);
          pauStack_98 = pauVar13;
          if (lVar3 == *(longlong *)(lVar24 + 0x18)) {
            pdb_142d7e8a0(lVar24 + 0x18);
          }
          pauVar13 = pauStack_98;
          *(longlong *)(*(longlong *)(lVar24 + 0x20) + lVar3 * 8) = lVar2;
          *(longlong *)(lVar24 + 0x28) = lVar3 + 1;
          pdb_140e9a350();
          LOCK();
          bVar30 = (*pauVar13)[0] == '\x01';
          if (bVar30) {
            (*pauVar13)[0] = 0;
          }
          UNLOCK();
          if (!bVar30) {
            pdb_142dbcef0(pauVar13,0);
          }
        }
        goto LAB_140bd8da0;
      }
      pauStack_178 = (undefined1 (*) [16])plStack_90[7];
      pauStack_168 = (undefined1 (*) [16])((longlong)*pauStack_178 + plStack_90[8] + 1);
      auVar33 = *pauStack_178;
      uStack_160 = ~((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
      puStack_158 = (undefined *)plStack_90[10];
      pauStack_170 = pauStack_178 + 1;
      pauStack_150 = (undefined1 (*) [16])&pauStack_328;
      pdb_141602330(&pauStack_248,&pauStack_178);
      pauStack_b0 = (undefined1 (*) [16])((longlong)*pauStack_240 + pauStack_238 * 8);
      uStack_1e0 = *(undefined4 *)((longlong)param_8 + 0x1c);
      pauStack_c0 = (undefined1 (*) [16])*param_8;
      puStack_268 = (undefined4 *)param_8[2];
      uStack_1dc = *(undefined4 *)((longlong)param_7 + 0x1c);
      puStack_1f0 = (undefined *)*param_7;
      puStack_260 = (undefined4 *)param_7[2];
      uStack_1e4 = *(undefined4 *)((longlong)param_13 + 0x1c);
      lStack_b8 = *param_13;
      puStack_270 = (undefined4 *)param_13[2];
      bVar30 = false;
      pauVar21 = pauStack_240;
      while (pauVar21 != pauStack_b0) {
        lVar2 = *(longlong *)*pauVar21;
        *puStack_180 = uStack_a4;
        lStack_210 = lVar2;
        uVar18 = pdb_1400af0a0(pauStack_a0,&lStack_210);
        pdb_140ca9bd0(&pauStack_178,plStack_338,uVar18,&lStack_210);
        pauStack_98 = pauStack_170;
        if (SBORROW8(0,(longlong)pauStack_170)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430650c8);
        }
        pauStack_88 = pauStack_168;
        pauVar14 = (undefined1 (*) [16])CONCAT62(uStack_15e,uStack_160);
        pdb_140d92210(&pauStack_178,lVar2);
        if ((int)pauStack_178 != 2) {
          pdb_1404b3c90(&pauStack_178);
        }
        *puStack_268 = uStack_1e0;
        *puStack_260 = uStack_1dc;
        *puStack_270 = uStack_1e4;
        pdb_141b05a50(pauStack_88,pauVar14,pauStack_c0,puStack_1f0,lStack_b8);
        lVar24 = plStack_90[4];
        pcVar1 = (char *)(lVar24 + 0x10);
        LOCK();
        bVar31 = *(char *)(lVar24 + 0x10) == '\0';
        if (bVar31) {
          *(char *)(lVar24 + 0x10) = '\x01';
        }
        UNLOCK();
        if (!bVar31) {
          pdb_142dbd1a0(pcVar1);
        }
        pdb_140e9a150(pcVar1);
        uVar16 = *(ulonglong *)(lVar24 + 0x28);
        if (uVar16 != 0) {
          lVar3 = *(longlong *)(lVar24 + 0x20);
          uVar26 = 0;
LAB_140bd9300:
          if (*(longlong *)(lVar3 + uVar26 * 8) != lStack_210) goto code_r0x000140bd930a;
          uVar23 = uVar26 + 1;
          uVar28 = uVar26;
          if (uVar23 < uVar16) {
            if (((int)uVar16 + (int)uVar26 & 1U) == 0) {
              lVar4 = *(longlong *)(lVar3 + 8 + uVar26 * 8);
              if (lVar4 != lStack_210) {
                *(longlong *)(lVar3 + uVar26 * 8) = lVar4;
                uVar28 = uVar26 + 1;
              }
              uVar23 = uVar26 + 2;
            }
            if (uVar16 - 2 != uVar26) {
              do {
                lVar4 = *(longlong *)(lVar3 + uVar23 * 8);
                if (lVar4 != lStack_210) {
                  *(longlong *)(lVar3 + uVar28 * 8) = lVar4;
                  uVar28 = uVar28 + 1;
                }
                lVar4 = *(longlong *)(lVar3 + 8 + uVar23 * 8);
                if (lVar4 != lStack_210) {
                  *(longlong *)(lVar3 + uVar28 * 8) = lVar4;
                  uVar28 = uVar28 + 1;
                }
                uVar23 = uVar23 + 2;
              } while (uVar16 != uVar23);
            }
          }
          *(ulonglong *)(lVar24 + 0x28) = uVar28;
        }
LAB_140bd9312:
        pdb_140e9a350();
        LOCK();
        cVar11 = *pcVar1;
        if (cVar11 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar11 != '\x01') {
          pdb_142dbcef0(pcVar1,0);
        }
        pdb_140bd8210(plStack_90,lVar2);
        if (2 < *_DAT_143ca8e90) {
          pauStack_1b8 = (undefined1 (*) [16])&lStack_210;
          pauStack_1b0 = (undefined1 (*) [16])pdb_140c91ab0;
          auStack_1a8._8_8_ = pdb_140f72a40;
          auStack_1a8._0_8_ = &pauStack_1d8;
          pauStack_178 = (undefined1 (*) [16])0x0;
          pauStack_170 = (undefined1 (*) [16])&UNK_143064ff0;
          pauStack_168 = (undefined1 (*) [16])0x2e;
          uStack_160 = 0;
          uStack_15e = 0;
          puStack_158 = &UNK_143064f80;
          pauStack_150 = (undefined1 (*) [16])0x39;
          uStack_148 = 3;
          puStack_140 = &UNK_143064ff0;
          uStack_138 = 0x2e;
          lStack_130 = 0x15500000001;
          puStack_128 = &UNK_1430650e0;
          ppauStack_120 = &pauStack_1b8;
          pauStack_1d8 = pauVar14;
          pdb_140f332f0(&uStack_72,&pauStack_178);
        }
        pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 8);
        bVar30 = (bool)(bVar30 | pauVar14 != (undefined1 (*) [16])0x0);
        if (pauStack_98 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_88,(longlong)pauStack_98 << 3,8);
        }
      }
      if (bVar30) {
        pauStack_178 = (undefined1 (*) [16])*puStack_250;
        *(undefined4 *)puStack_258[2] = *(undefined4 *)((longlong)puStack_258 + 0x1c);
        pauStack_170 = (undefined1 (*) [16])*puStack_258;
        *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
        pauStack_168 = (undefined1 (*) [16])*param_5;
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        uVar18 = *param_6;
        *puStack_260 = uStack_1dc;
        *puStack_268 = uStack_1e0;
        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
        uStack_148 = *param_9;
        *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
        puStack_140 = (undefined *)*param_10;
        *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
        uStack_138 = *param_12;
        *puStack_270 = uStack_1e4;
        uStack_160 = (ushort)uVar18;
        uStack_15e = (undefined6)((ulonglong)uVar18 >> 0x10);
        puStack_158 = puStack_1f0;
        pauStack_150 = pauStack_c0;
        lStack_130 = lStack_b8;
        pdb_141b054e0(&pauStack_178,CONCAT71((int7)((ulonglong)pauStack_168 >> 8),1));
        *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
        lVar2 = *param_11;
        lVar24 = *(longlong *)(lVar2 + 0x30);
        uVar18 = *(undefined8 *)(lVar2 + 0x40);
        if (lVar24 == *(longlong *)(lVar2 + 0x20)) {
          pdb_142d7e8a0(lVar2 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar24 * 8) = uVar18;
        *(longlong *)(lVar2 + 0x30) = lVar24 + 1;
        *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
      }
      if (pauStack_248 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_240,(longlong)pauStack_248 << 3,8);
      }
      plVar29 = plStack_90;
      param_1 = puStack_330;
      param_5 = (undefined8 *)0x0;
      if (pauStack_320 != (undefined1 (*) [16])0x0) {
        uVar16 = (longlong)pauStack_320 * 8 + 0x17U & 0xfffffffffffffff0;
        param_5 = (undefined8 *)((longlong)pauStack_320[1] + uVar16 + 1);
        if (param_5 != (undefined8 *)0x0) {
          pub_1406abac0((byte *)((longlong)pauStack_328 - uVar16),(ulonglong)param_5,0x10);
        }
      }
    }
    lVar2 = plVar29[4];
    pcVar1 = (char *)(lVar2 + 0x10);
    LOCK();
    bVar30 = *(char *)(lVar2 + 0x10) == '\0';
    if (bVar30) {
      *(char *)(lVar2 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar30) {
      pdb_142dbd1a0(pcVar1);
    }
    pdb_140e9a150(pcVar1);
    lStack_b8 = *(longlong *)(lVar2 + 0x18);
    pauStack_88 = *(undefined1 (**) [16])(lVar2 + 0x20);
    pauVar21 = *(undefined1 (**) [16])(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    uStack_73 = 1;
    pdb_140e9a350();
    LOCK();
    cVar11 = *pcVar1;
    if (cVar11 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar11 != '\x01') {
      uStack_73 = 1;
      param_5 = (undefined8 *)0x0;
      pdb_142dbcef0(pcVar1);
    }
    if (pauVar21 != (undefined1 (*) [16])0x0) {
      uStack_73 = 1;
      plVar19 = (longlong *)pdb_140f3bda0();
      if ((char)plVar19[2] == '\x01') {
        lStack_228 = *plVar19;
        param_5 = (undefined8 *)plVar19[1];
      }
      else {
        uStack_73 = 1;
        lStack_228 = pdb_140f4fd10();
        *plVar19 = lStack_228;
        plVar19[1] = (longlong)param_5;
        *(undefined1 *)(plVar19 + 2) = 1;
      }
      *plVar19 = lStack_228 + 1;
      uVar18 = _UNK_143064e58;
      pauVar10 = _DAT_143064e50;
      pauVar9 = _UNK_143064e48;
      pauVar17 = _DAT_143064e40;
      pauStack_238 = _DAT_143064e50;
      uStack_230 = _UNK_143064e58;
      pauStack_248 = _DAT_143064e40;
      pauStack_240 = _UNK_143064e48;
      pauVar14 = (undefined1 (*) [16])((longlong)pauVar21 * 8);
      pauVar13 = (undefined1 (*) [16])0x0;
      puStack_220 = param_5;
      do {
        pauVar14 = (undefined1 (*) [16])((longlong)pauVar14[-1] + 8);
        uStack_76 = 1;
        cVar11 = pdb_1403b05d0(&pauStack_248,*(undefined8 *)((longlong)*pauStack_88 + pauVar13 * 8))
        ;
        pauVar20 = (undefined1 (*) [16])((longlong)*pauVar13 + 1);
        if (cVar11 != '\0') {
          pauVar22 = pauVar13;
          if (pauVar20 < pauVar21) {
            do {
              pauStack_b0 = pauVar20;
              pauStack_a0 = pauVar14;
              pauStack_98 = pauVar13;
              cVar11 = pdb_1403b05d0(&pauStack_248,
                                     *(undefined8 *)((longlong)*pauStack_88 + pauVar20 * 8));
              pauVar13 = pauStack_98;
              if (cVar11 == '\0') {
                *(undefined8 *)((longlong)*pauStack_88 + pauStack_98 * 8) =
                     *(undefined8 *)((longlong)*pauStack_88 + pauStack_b0 * 8);
                pauVar13 = (undefined1 (*) [16])((longlong)*pauStack_98 + 1);
              }
              pauVar20 = (undefined1 (*) [16])((longlong)*pauStack_b0 + 1);
              pauVar14 = (undefined1 (*) [16])((longlong)pauStack_a0[-1] + 8);
              pauVar22 = pauVar13;
            } while (pauVar21 != pauVar20);
          }
          break;
        }
        pauVar22 = pauVar21;
        pauVar13 = pauVar20;
      } while (pauVar20 != pauVar21);
      pauVar21 = (undefined1 (*) [16])*param_1;
      pauVar13 = (undefined1 (*) [16])pub_142e32030();
      pauVar14 = *(undefined1 (**) [16])*pauVar21;
      LOCK();
      lVar2 = *(longlong *)*pauVar14;
      *(longlong *)*pauVar14 = *(longlong *)*pauVar14 + 1;
      UNLOCK();
      pauStack_98 = pauVar21;
      if (*(longlong *)*pauVar14 == 0 || SCARRY8(lVar2,1) != *(longlong *)*pauVar14 < 0) {
LAB_140bda483:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pauStack_1d8 = pauVar14;
      pauStack_1d0 = pauVar13;
      uVar12 = pub_142e32050(pauVar13);
      pauVar14 = (undefined1 (*) [16])(ulonglong)uVar12;
      pauVar21 = (undefined1 (*) [16])((longlong)pauVar14 * 8);
      pauStack_c0 = pauVar21;
      if (uVar12 == 0) {
        pauVar20 = (undefined1 (*) [16])0x8;
      }
      else {
        pdb_14007ee60();
        pauVar20 = (undefined1 (*) [16])pub_1406abae0((ulonglong)pauVar21,8);
        if (pauVar20 == (undefined1 (*) [16])0x0) {
          pdb_142dc7e2a(8,pauVar21);
          goto LAB_140bda483;
        }
      }
      pauStack_b0 = (undefined1 (*) [16])CONCAT44(pauStack_b0._4_4_,uVar12);
      pauStack_a0 = pauVar20;
      pub_142e32060(pauVar13,pauVar20,uVar12);
      uStack_7a = 0;
      puVar15 = (undefined8 *)pdb_140f3bda0();
      if (*(char *)(puVar15 + 2) == '\x01') {
        puStack_158 = (undefined *)*puVar15;
        pauVar20 = (undefined1 (*) [16])puVar15[1];
      }
      else {
        uStack_7a = 0;
        puStack_158 = (undefined *)pdb_140f4fd10();
        *puVar15 = puStack_158;
        puVar15[1] = pauVar20;
        *(undefined1 *)(puVar15 + 2) = 1;
      }
      puStack_310 = (undefined8 *)((longlong)*pauStack_a0 + pauVar14 * 8);
      *puVar15 = puStack_158 + 1;
      pauStack_168 = pauVar10;
      uStack_160 = (ushort)uVar18;
      uStack_15e = (undefined6)((ulonglong)uVar18 >> 0x10);
      pauStack_178 = pauVar17;
      pauStack_170 = pauVar9;
      pauStack_328 = pauStack_a0;
      pauStack_320 = pauStack_a0;
      pauStack_318 = pauVar14;
      pauStack_150 = pauVar20;
      pdb_1417a61d0(&pauStack_178,&pauStack_328);
      auStack_1a8._8_2_ = uStack_160;
      auStack_1a8._0_8_ = pauStack_168;
      auStack_1a8._10_6_ = uStack_15e;
      pauStack_1b8 = pauStack_178;
      pauStack_1b0 = pauStack_170;
      puStack_198 = puStack_158;
      pauStack_190 = pauStack_150;
      LOCK();
      *(longlong *)*pauStack_1d8 = *(longlong *)*pauStack_1d8 + -1;
      UNLOCK();
      if (*(longlong *)*pauStack_1d8 == 0) {
        uStack_77 = 1;
        pdb_140cb1c10(&pauStack_1d8);
      }
      pauStack_208 = (undefined1 (*) [16])0x0;
      pauStack_200 = (undefined1 (*) [16])0x8;
      pauStack_1f8 = (undefined1 (*) [16])0x0;
      puVar15 = (undefined8 *)*pauStack_88;
      pauStack_b0 = (undefined1 (*) [16])(plVar29 + 0xb);
      pauVar21 = pauStack_88;
LAB_140bd99e0:
      while (pauVar21 != (undefined1 (*) [16])(puVar15 + (longlong)pauVar22)) {
        lVar2 = *(longlong *)*pauVar21;
        pauVar21 = (undefined1 (*) [16])((longlong)*pauVar21 + 8);
        lStack_348 = lVar2;
        if (auStack_1a8._8_8_ != 0) {
          uVar16 = pdb_1400af0a0(&puStack_198,(undefined1 (*) [16])&lStack_348);
          bVar32 = (byte)(uVar16 >> 0x39);
          auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
          auVar33 = pshuflw(auVar33,auVar33,0);
          lVar24 = 0;
          while( true ) {
            uVar16 = uVar16 & (ulonglong)pauStack_1b0;
            auVar37 = *(undefined1 (*) [16])((longlong)*pauStack_1b8 + uVar16);
            auVar38[0] = -(auVar37[0] == auVar33[0]);
            auVar38[1] = -(auVar37[1] == auVar33[1]);
            auVar38[2] = -(auVar37[2] == auVar33[2]);
            auVar38[3] = -(auVar37[3] == auVar33[3]);
            auVar38[4] = -(auVar37[4] == auVar33[4]);
            auVar38[5] = -(auVar37[5] == auVar33[5]);
            auVar38[6] = -(auVar37[6] == auVar33[6]);
            auVar38[7] = -(auVar37[7] == auVar33[7]);
            auVar38[8] = -(auVar37[8] == auVar33[0]);
            auVar38[9] = -(auVar37[9] == auVar33[1]);
            auVar38[10] = -(auVar37[10] == auVar33[2]);
            auVar38[0xb] = -(auVar37[0xb] == auVar33[3]);
            auVar38[0xc] = -(auVar37[0xc] == auVar33[4]);
            auVar38[0xd] = -(auVar37[0xd] == auVar33[5]);
            auVar38[0xe] = -(auVar37[0xe] == auVar33[6]);
            auVar38[0xf] = -(auVar37[0xf] == auVar33[7]);
            uVar27 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar38[0xf] >> 7) << 0xf;
            uVar12 = (uint)uVar27;
            while (uVar27 != 0) {
              uVar25 = 0;
              for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
              if (lVar2 == *(longlong *)
                            ((longlong)pauStack_1b8 +
                            (uVar25 + uVar16 & (ulonglong)pauStack_1b0) * -8 + -8)) {
                if (plVar29[10] == 0) goto LAB_140bd9c20;
                uVar16 = pdb_1400af0a0(pauStack_b0,(undefined1 (*) [16])&lStack_348);
                bVar32 = (byte)(uVar16 >> 0x39);
                auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
                auVar33 = pshuflw(auVar33,auVar33,0);
                lVar24 = 0;
                goto LAB_140bd9bb2;
              }
              uVar27 = (ushort)(uVar12 - 1) & (ushort)uVar12;
              uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar27);
            }
            auVar35[0] = -(auVar37[0] == -1);
            auVar35[1] = -(auVar37[1] == -1);
            auVar35[2] = -(auVar37[2] == -1);
            auVar35[3] = -(auVar37[3] == -1);
            auVar35[4] = -(auVar37[4] == -1);
            auVar35[5] = -(auVar37[5] == -1);
            auVar35[6] = -(auVar37[6] == -1);
            auVar35[7] = -(auVar37[7] == -1);
            auVar35[8] = -(auVar37[8] == -1);
            auVar35[9] = -(auVar37[9] == -1);
            auVar35[10] = -(auVar37[10] == -1);
            auVar35[0xb] = -(auVar37[0xb] == -1);
            auVar35[0xc] = -(auVar37[0xc] == -1);
            auVar35[0xd] = -(auVar37[0xd] == -1);
            auVar35[0xe] = -(auVar37[0xe] == -1);
            auVar35[0xf] = -(auVar37[0xf] == -1);
            if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar35 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
            uVar16 = uVar16 + lVar24 + 0x10;
            lVar24 = lVar24 + 0x10;
          }
        }
        if (2 < *_DAT_143ca8e90) {
          pauStack_320 = (undefined1 (*) [16])pdb_140c91ab0;
          pauStack_178 = (undefined1 (*) [16])0x0;
          pauStack_170 = (undefined1 (*) [16])&UNK_143064ff0;
          pauStack_168 = (undefined1 (*) [16])0x2e;
          uStack_160 = 0;
          uStack_15e = 0;
          puStack_158 = &UNK_143064f80;
          pauStack_150 = (undefined1 (*) [16])0x39;
          uStack_148 = 3;
          puStack_140 = &UNK_143064ff0;
          uStack_138 = 0x2e;
          lStack_130 = 0x18600000001;
          puStack_128 = &UNK_14306501e;
          pauStack_328 = (undefined1 (*) [16])&lStack_348;
          ppauStack_120 = &pauStack_328;
          pdb_140f332f0(&uStack_72,&pauStack_178);
        }
      }
      if (lStack_b8 != 0) {
        pub_1406abac0((byte *)pauStack_88,lStack_b8 * 8,8);
      }
      puVar15 = puStack_250;
      if (pauStack_1f8 == (undefined1 (*) [16])0x0) {
        uStack_77 = 0;
        pdb_140967580(&pauStack_208);
      }
      else {
        if (2 < *_DAT_143ca8e90) {
          pauStack_1d8 = pauStack_1f8;
          pauStack_328 = (undefined1 (*) [16])&pauStack_1d8;
          pauStack_320 = (undefined1 (*) [16])pdb_140f72a40;
          pauStack_178 = (undefined1 (*) [16])0x0;
          pauStack_170 = (undefined1 (*) [16])&UNK_143064ff0;
          pauStack_168 = (undefined1 (*) [16])0x2e;
          uStack_160 = 0;
          uStack_15e = 0;
          puStack_158 = &UNK_143064f80;
          pauStack_150 = (undefined1 (*) [16])0x39;
          uStack_148 = 3;
          puStack_140 = &UNK_143064ff0;
          uStack_138 = 0x2e;
          lStack_130 = 0x1ba00000001;
          puStack_128 = &UNK_143064fc2;
          uStack_78 = 1;
          ppauStack_120 = &pauStack_328;
          pdb_140f332f0(&uStack_72,&pauStack_178);
        }
        pauStack_318 = pauStack_1f8;
        pauStack_328 = pauStack_208;
        pauStack_320 = pauStack_200;
        plVar19 = *(longlong **)*puVar15;
        LOCK();
        lVar2 = *plVar19;
        *plVar19 = *plVar19 + 1;
        UNLOCK();
        if (*plVar19 == 0 || SCARRY8(lVar2,1) != *plVar19 < 0) goto LAB_140bda483;
        uStack_78 = 0;
        pdb_141b06360(&pauStack_178,&pauStack_328);
        puStack_310 = (undefined8 *)CONCAT62(uStack_15e,uStack_160);
        pauStack_328 = pauStack_178;
        pauStack_320 = pauStack_170;
        pauStack_318 = pauStack_168;
        *puStack_180 = uStack_a4;
        if (!SBORROW8(0,*plVar29)) {
          pdb_14099abd0(plStack_90);
        }
        plStack_90[2] = (longlong)pauStack_318;
        plStack_90[3] = (longlong)puStack_310;
        *plStack_90 = (longlong)pauStack_328;
        plStack_90[1] = (longlong)pauStack_320;
      }
      if (pauStack_1b0 != (undefined1 (*) [16])0x0) {
        uVar16 = (longlong)pauStack_1b0 * 8 + 0x17U & 0xfffffffffffffff0;
        arg1 = (undefined *)((longlong)pauStack_1b0[1] + uVar16 + 1);
        if (arg1 != (undefined *)0x0) {
          pub_1406abac0((byte *)((longlong)pauStack_1b8 - uVar16),(ulonglong)arg1,0x10);
        }
      }
      if (pauStack_240 == (undefined1 (*) [16])0x0) {
        return;
      }
      uVar16 = (longlong)pauStack_240 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar26 = (longlong)pauStack_240[1] + uVar16 + 1;
      if (uVar26 == 0) {
        return;
      }
      uVar23 = 0x10;
      pauVar21 = (undefined1 (*) [16])((longlong)pauStack_248 - uVar16);
      goto LAB_140bda317;
    }
    if (lStack_b8 != 0) {
      uVar26 = lStack_b8 << 3;
      uVar23 = 8;
      pauVar21 = pauStack_88;
LAB_140bda317:
      pub_1406abac0((byte *)pauVar21,uVar26,uVar23);
    }
  }
  return;
code_r0x000140bd930a:
  uVar26 = uVar26 + 1;
  if (uVar16 == uVar26) goto LAB_140bd9312;
  goto LAB_140bd9300;
LAB_140bd9bb2:
  uVar16 = uVar16 & plVar29[8];
  auVar37 = *(undefined1 (*) [16])(plVar29[7] + uVar16);
  auVar39[0] = -(auVar37[0] == auVar33[0]);
  auVar39[1] = -(auVar37[1] == auVar33[1]);
  auVar39[2] = -(auVar37[2] == auVar33[2]);
  auVar39[3] = -(auVar37[3] == auVar33[3]);
  auVar39[4] = -(auVar37[4] == auVar33[4]);
  auVar39[5] = -(auVar37[5] == auVar33[5]);
  auVar39[6] = -(auVar37[6] == auVar33[6]);
  auVar39[7] = -(auVar37[7] == auVar33[7]);
  auVar39[8] = -(auVar37[8] == auVar33[0]);
  auVar39[9] = -(auVar37[9] == auVar33[1]);
  auVar39[10] = -(auVar37[10] == auVar33[2]);
  auVar39[0xb] = -(auVar37[0xb] == auVar33[3]);
  auVar39[0xc] = -(auVar37[0xc] == auVar33[4]);
  auVar39[0xd] = -(auVar37[0xd] == auVar33[5]);
  auVar39[0xe] = -(auVar37[0xe] == auVar33[6]);
  auVar39[0xf] = -(auVar37[0xf] == auVar33[7]);
  uVar27 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
  uVar12 = (uint)uVar27;
  while (uVar27 != 0) {
    uVar25 = 0;
    for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar25 = uVar25 + 1;
    }
    if (lVar2 == *(longlong *)(plVar29[7] + -0x28 + (uVar25 + uVar16 & plVar29[8]) * -0x28)) {
      if (2 < *_DAT_143ca8e90) {
        pauStack_320 = (undefined1 (*) [16])pdb_140c91ab0;
        pauStack_178 = (undefined1 (*) [16])0x0;
        pauStack_170 = (undefined1 (*) [16])&UNK_143064ff0;
        pauStack_168 = (undefined1 (*) [16])0x2e;
        uStack_160 = 0;
        uStack_15e = 0;
        puStack_158 = &UNK_143064f80;
        pauStack_150 = (undefined1 (*) [16])0x39;
        uStack_148 = 3;
        puStack_140 = &UNK_143064ff0;
        uStack_138 = 0x2e;
        lStack_130 = 0x18c00000001;
        puStack_128 = &UNK_143065082;
        pauStack_328 = (undefined1 (*) [16])&lStack_348;
        ppauStack_120 = &pauStack_328;
        pdb_140f332f0(&uStack_72,&pauStack_178);
      }
      pauStack_178 = (undefined1 (*) [16])0x8000000000000004;
      pdb_140bd80b0(plVar29,lVar2,&pauStack_178);
      goto LAB_140bd99e0;
    }
    uVar27 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar27);
  }
  auVar36[0] = -(auVar37[0] == -1);
  auVar36[1] = -(auVar37[1] == -1);
  auVar36[2] = -(auVar37[2] == -1);
  auVar36[3] = -(auVar37[3] == -1);
  auVar36[4] = -(auVar37[4] == -1);
  auVar36[5] = -(auVar37[5] == -1);
  auVar36[6] = -(auVar37[6] == -1);
  auVar36[7] = -(auVar37[7] == -1);
  auVar36[8] = -(auVar37[8] == -1);
  auVar36[9] = -(auVar37[9] == -1);
  auVar36[10] = -(auVar37[10] == -1);
  auVar36[0xb] = -(auVar37[0xb] == -1);
  auVar36[0xc] = -(auVar37[0xc] == -1);
  auVar36[0xd] = -(auVar37[0xd] == -1);
  auVar36[0xe] = -(auVar37[0xe] == -1);
  auVar36[0xf] = -(auVar37[0xf] == -1);
  if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x37,0) & 1) != 0) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') goto LAB_140bd9c20;
  uVar16 = uVar16 + lVar24 + 0x10;
  lVar24 = lVar24 + 0x10;
  goto LAB_140bd9bb2;
LAB_140bd9c20:
  pauVar13 = (undefined1 (*) [16])pub_142e32030();
  pauVar14 = *(undefined1 (**) [16])*pauStack_98;
  LOCK();
  lVar24 = *(longlong *)*pauVar14;
  *(longlong *)*pauVar14 = *(longlong *)*pauVar14 + 1;
  UNLOCK();
  if (*(longlong *)*pauVar14 == 0 || SCARRY8(lVar24,1) != *(longlong *)*pauVar14 < 0)
  goto LAB_140bda483;
  pauStack_328 = pauVar14;
  pauStack_320 = pauVar13;
  pdb_141a56080(&pauStack_178,&pauStack_328,lVar2);
  pauVar14 = pauStack_168;
  pauStack_a0 = pauStack_178;
  if (SBORROW8(0,(longlong)pauStack_178)) {
    LOCK();
    *(longlong *)*pauStack_328 = *(longlong *)*pauStack_328 + -1;
    UNLOCK();
    if (*(longlong *)*pauStack_328 == 0) {
      pdb_140cb1c10(&pauStack_328);
    }
    goto LAB_140bd99e0;
  }
  pauStack_c0 = pauStack_170;
  LOCK();
  *(longlong *)*pauStack_328 = *(longlong *)*pauStack_328 + -1;
  UNLOCK();
  if (*(longlong *)*pauStack_328 == 0) {
    uStack_74 = 1;
    pdb_140cb1c10(&pauStack_328);
  }
  pauStack_328 = pauStack_a0;
  pauStack_320 = pauStack_c0;
  pauStack_318 = pauVar14;
  puStack_310 = (undefined8 *)CONCAT71(puStack_310._1_7_,1);
  *puStack_180 = uStack_a4;
  uStack_74 = 0;
  pdb_1409d5f90(&pauStack_178,lVar2,&pauStack_328,plVar29,pauStack_98);
  if ((int)pauStack_178 == 2) goto LAB_140bd99e0;
  pub_142e32760(&pauStack_328,&pauStack_178,0xb0);
  if (2 < *_DAT_143ca8e90) {
    pdb_140d93010(&uStack_360,alStack_2c8);
    pauStack_1d0 = (undefined1 (*) [16])pdb_140c91ab0;
    pauStack_1c8 = (undefined1 (*) [16])&uStack_360;
    pcStack_1c0 = pdb_140001020;
    pauStack_178 = (undefined1 (*) [16])0x0;
    pauStack_170 = (undefined1 (*) [16])&UNK_143064ff0;
    pauStack_168 = (undefined1 (*) [16])0x2e;
    uStack_160 = 0;
    uStack_15e = 0;
    puStack_158 = &UNK_143064f80;
    pauStack_150 = (undefined1 (*) [16])0x39;
    uStack_148 = 3;
    puStack_140 = &UNK_143064ff0;
    uStack_138 = 0x2e;
    lStack_130 = 0x1a300000001;
    puStack_128 = &UNK_143065064;
    ppauStack_120 = &pauStack_1d8;
    pauStack_1d8 = (undefined1 (*) [16])&lStack_348;
    pdb_140f332f0(&uStack_72,&pauStack_178);
    if (uStack_360 != 0) {
      pub_1406abac0(pbStack_358,uStack_360,1);
    }
  }
  pdb_141b065b0(&pauStack_178,&pauStack_328);
  if (SBORROW8(0,(longlong)pauStack_178)) {
    if (!SBORROW8(0,alStack_2c8[0])) {
      pauStack_178 = (undefined1 (*) [16])0x8000000000000002;
      pdb_140bd80b0(plVar29,lVar2,&pauStack_178);
    }
LAB_140bda0ac:
    uStack_74 = 0;
    pdb_1404b3c90(&pauStack_328);
    goto LAB_140bd99e0;
  }
  pauStack_1c8 = pauStack_168;
  pauStack_1d8 = pauStack_178;
  pauStack_1d0 = pauStack_170;
  if (pauStack_168 == (undefined1 (*) [16])0x0) {
    pdb_140967580(&pauStack_1d8);
    goto LAB_140bda0ac;
  }
  *puStack_180 = uStack_a4;
  uStack_75 = 1;
  pdb_141a275c0(plVar29,lVar2,pauStack_170,pauStack_170 + (longlong)pauStack_168 * 9);
  pauStack_178 = (undefined1 (*) [16])0x8000000000000003;
  uStack_75 = 1;
  pdb_140bd80b0(plVar29,lVar2,&pauStack_178);
  pauVar13 = pauStack_1c8;
  pauVar14 = pauStack_1d0;
  puStack_1f0 = (undefined *)((longlong)pauStack_1c8 * 0x90);
  pauStack_178 = pauStack_1d0;
  pauStack_168 = pauStack_1d8;
  pauStack_170 = pauStack_1d0;
  uStack_160 = (ushort)(pauStack_1d0 + (longlong)pauStack_1c8 * 9);
  uStack_15e = (undefined6)((ulonglong)(pauStack_1d0 + (longlong)pauStack_1c8 * 9) >> 0x10);
  if ((undefined1 (*) [16])((longlong)pauStack_208 - (longlong)pauStack_1f8) < pauStack_1c8) {
    pdb_142d7f1b0(&pauStack_208,pauStack_1f8,pauStack_1c8,8,0x90);
  }
  else {
    pauVar17 = pauStack_1f8;
    if (pauStack_1c8 == (undefined1 (*) [16])0x0) goto LAB_140bda061;
  }
  pauVar17 = pauStack_1f8;
  pub_142e32760(pauStack_200 + (longlong)pauStack_1f8 * 9,pauVar14,puStack_1f0);
LAB_140bda061:
  pauStack_1f8 = (undefined1 (*) [16])((longlong)*pauVar13 + (longlong)*pauVar17);
  uStack_160 = (ushort)pauVar14;
  uStack_15e = (undefined6)((ulonglong)pauVar14 >> 0x10);
  uStack_75 = 0;
  pdb_14096ec80(&pauStack_178);
  plVar29 = plStack_90;
  uStack_74 = 0;
  pdb_1404b3c90(&pauStack_328);
  goto LAB_140bd99e0;
}

