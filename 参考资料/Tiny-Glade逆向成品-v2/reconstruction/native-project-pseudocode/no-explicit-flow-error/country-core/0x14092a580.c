// VA 0x14092a580, PDB extent 6735 bytes
// country_core::systems::ui_clutter::decoclutter_show_pins::decoclutter_show_pins
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/decoclutter_show_pins.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_clutter::decoclutter_show_pins::decoclutter_show_pins
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/decoclutter_show_pins.rs
   Extent: 6735 */

void pdb_14092a580(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  float fVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  float fVar14;
  char cVar15;
  char cVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined *puVar19;
  longlong *plVar20;
  ulonglong *puVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint *puVar30;
  undefined1 (*pauVar31) [16];
  ulonglong uVar32;
  char *pcVar33;
  longlong lVar34;
  undefined8 *puVar35;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  char *pcVar38;
  char *pcVar39;
  ushort uVar40;
  undefined4 uVar41;
  char *pcVar42;
  undefined *puVar43;
  char *pcVar44;
  longlong lVar45;
  char *pcVar46;
  undefined *puVar47;
  bool bVar48;
  byte bVar49;
  float fVar50;
  float fVar51;
  float fVar53;
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  char cVar61;
  undefined1 unaff_XMM7_Bc;
  char cVar62;
  undefined1 unaff_XMM7_Bd;
  char cVar63;
  undefined1 unaff_XMM7_Be;
  char cVar64;
  undefined1 unaff_XMM7_Bf;
  char cVar65;
  undefined1 unaff_XMM7_Bg;
  char cVar66;
  undefined1 unaff_XMM7_Bh;
  char cVar67;
  undefined1 unaff_XMM7_Bi;
  char cVar68;
  undefined1 unaff_XMM7_Bj;
  char cVar69;
  undefined1 unaff_XMM7_Bk;
  char cVar70;
  undefined1 unaff_XMM7_Bl;
  char cVar71;
  undefined1 unaff_XMM7_Bm;
  char cVar72;
  undefined1 unaff_XMM7_Bn;
  char cVar73;
  undefined1 unaff_XMM7_Bo;
  char cVar74;
  undefined1 unaff_XMM7_Bp;
  char cVar75;
  ulonglong uStack_2b4;
  undefined4 uStack_2ac;
  char *pcStack_298;
  longlong *plStack_290;
  undefined8 uStack_288;
  longlong lStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  undefined1 (*pauStack_250) [16];
  longlong lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulonglong uStack_220;
  char *pcStack_218;
  ulonglong uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  ulonglong uStack_1e0;
  byte *pbStack_1d8;
  ulonglong uStack_1d0;
  undefined4 *puStack_1c8;
  uint *puStack_1c0;
  ulonglong uStack_1b8;
  char *pcStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_178;
  byte *pbStack_170;
  ulonglong uStack_168;
  longlong lStack_160;
  longlong *plStack_158;
  ulonglong uStack_150;
  undefined4 uStack_148;
  float fStack_144;
  undefined8 uStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  char *pcStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined1 (*pauStack_108) [16];
  char *pcStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    lStack_280 = 0;
  }
  else {
    puVar47 = &UNK_143022128;
    lVar45 = 0x4f;
    uVar32 = 0x4f;
    lVar17 = pdb_140930400(&UNK_143022128);
    if (lVar17 == 1) {
      if (0x4f < uVar32) {
LAB_14092bbad:
        pdb_142dc8070(&UNK_143022128,0x4f,0);
LAB_14092bbcd:
        pdb_142dc8070(&UNK_143022128,0x4f);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar47 = &UNK_143022128;
      uVar18 = pdb_140930400(&UNK_143022128);
      if ((uVar18 & 1) != 0) {
        if (0x4f < uVar32 + 2) goto LAB_14092bbcd;
        lVar45 = 0x4d - uVar32;
        puVar47 = &UNK_14302212a + uVar32;
      }
    }
    puVar19 = &UNK_143021b8f;
    puVar43 = &UNK_143021b4c;
    do {
      pbVar1 = puVar19 + -1;
      uVar25 = (uint)(char)*pbVar1;
      if ((int)uVar25 < 0) {
        bVar49 = puVar19[-2];
        if ((char)bVar49 < -0x40) {
          bVar6 = puVar19[-3];
          if ((char)bVar6 < -0x40) {
            pbVar2 = puVar19 + -4;
            puVar19 = puVar19 + -4;
            uVar25 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar19 = puVar19 + -3;
            uVar25 = bVar6 & 0xf;
          }
          uVar25 = bVar49 & 0x3f | uVar25 << 6;
        }
        else {
          puVar19 = puVar19 + -2;
          uVar25 = bVar49 & 0x1f;
        }
        uVar25 = (uint)(*pbVar1 & 0x3f) | uVar25 << 6;
        if (uVar25 != 0x5c) goto LAB_14092a6f9;
LAB_14092a716:
        if (puVar19 + -0x143021b4b < (undefined *)0x44) {
          lVar17 = 0x42 - (longlong)(puVar19 + -0x143021b4c);
          puVar43 = puVar19 + 1;
          goto LAB_14092a73a;
        }
        pdb_142dc8070(&UNK_143021b4c,0x43,puVar19 + -0x143021b4b,0x43,&UNK_143022218);
        goto LAB_14092bbad;
      }
      puVar19 = puVar19 + -1;
      if (uVar25 == 0x5c) goto LAB_14092a716;
LAB_14092a6f9:
      if (uVar25 == 0x2f) goto LAB_14092a716;
    } while (puVar19 != &UNK_143021b4c);
    lVar17 = 0x43;
LAB_14092a73a:
    plVar20 = (longlong *)pdb_140e97000();
    if ((char)plVar20[0xd] != '\x01') {
      plVar20 = (longlong *)pdb_142d8ec20(plVar20,0);
      if (plVar20 == (longlong *)0x0) goto LAB_14092bb12;
    }
    if (*plVar20 != 0) goto LAB_14092babf;
    *plVar20 = -1;
    plStack_f8 = plVar20;
    uStack_278 = pdb_140e94f10(plVar20 + 1,puVar47,lVar45,puVar43,lVar17,1,0);
    *plStack_f8 = *plStack_f8 + 1;
    lStack_280 = 1;
  }
  uStack_178 = 0;
  pbStack_170 = (byte *)0x4;
  uStack_168 = 0;
  uStack_1e0 = 0;
  pbStack_1d8 = (byte *)0x4;
  uStack_1d0 = 0;
  lVar17 = param_1[1];
  uVar32 = *(ulonglong *)*param_1;
  pcVar44 = (char *)0x0;
  pcVar39 = (char *)(uVar32 - *(ulonglong *)(lVar17 + 0x18));
  if (uVar32 < *(ulonglong *)(lVar17 + 0x18)) {
    pcVar39 = pcVar44;
  }
  lVar45 = (longlong)pcVar39 * 0x40 + *(longlong *)(lVar17 + 8);
  pcVar8 = *(char **)(lVar17 + 0x10);
  pcVar9 = *(char **)(lVar17 + 0x30);
  pcVar38 = pcVar8 + -(longlong)pcVar39;
  if (pcVar8 < pcVar39) {
    pcVar38 = pcVar44;
  }
  if (pcVar8 < pcVar39) {
    lVar45 = 8;
  }
  pcVar42 = (char *)(lVar45 + -0x40 + (longlong)pcVar38 * 0x40);
  if (pcVar8 <= pcVar39) {
    pcVar42 = pcVar44;
  }
  pcVar33 = (char *)(uVar32 - *(ulonglong *)(lVar17 + 0x38));
  if (uVar32 < *(ulonglong *)(lVar17 + 0x38)) {
    pcVar33 = pcVar44;
  }
  lVar45 = (longlong)pcVar33 * 0x40 + *(longlong *)(lVar17 + 0x28);
  pcVar46 = pcVar9 + -(longlong)pcVar33;
  if (pcVar9 < pcVar33) {
    pcVar46 = pcVar44;
  }
  lStack_270 = 8;
  if (pcVar9 < pcVar33) {
    lVar45 = 8;
  }
  pcStack_100 = (char *)(lVar45 + -0x40 + (longlong)pcVar46 * 0x40);
  if (pcVar9 <= pcVar33) {
    pcStack_100 = pcVar42;
  }
  pcVar38 = pcVar46 + (longlong)pcVar38;
  if (pcVar39 < pcVar8 || pcVar33 < pcVar9) {
    pcVar38 = pcVar44;
  }
  *(ulonglong *)*param_1 = *(longlong *)(lVar17 + 0x40) - (longlong)pcVar38;
  uVar13 = _DAT_142e36f60;
  fVar14 = _DAT_142e36f28;
  if (pcVar39 < pcVar8 || pcVar33 < pcVar9) {
    param_4 = (undefined8 *)*param_4;
    pauStack_108 = (undefined1 (*) [16])*param_4;
    auVar52 = *pauStack_108;
    puVar28 = param_4 + 0x12;
    if (param_4[0x12] == 0) {
      puVar28 = (undefined8 *)0x0;
    }
    puVar22 = param_4 + 0x24;
    if (param_4[0x24] == 0) {
      puVar22 = (undefined8 *)0x0;
    }
    uStack_1b8 = (ulonglong)
                 ~(uint)(ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar52[0xf] >> 7) << 0xf);
    plStack_f8 = (longlong *)*param_5;
    plStack_138 = (longlong *)*param_2;
    plStack_128 = (longlong *)*param_7;
    pcStack_120 = pcStack_100 + 4;
    pcStack_1b0 = pcStack_100 + 0x1c;
    uStack_288 = *param_10;
    lStack_118 = *param_11;
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    cVar15 = (char)iVar7;
    cVar61 = (char)((uint)iVar7 >> 8);
    cVar62 = (char)((uint)iVar7 >> 0x10);
    cVar63 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    cVar64 = (char)iVar7;
    cVar65 = (char)((uint)iVar7 >> 8);
    cVar66 = (char)((uint)iVar7 >> 0x10);
    cVar67 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    cVar68 = (char)iVar7;
    cVar69 = (char)((uint)iVar7 >> 8);
    cVar70 = (char)((uint)iVar7 >> 0x10);
    cVar71 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    cVar72 = (char)iVar7;
    cVar73 = (char)((uint)iVar7 >> 8);
    cVar74 = (char)((uint)iVar7 >> 0x10);
    cVar75 = (char)((uint)iVar7 >> 0x18);
    pcStack_298 = pcStack_100 + 0x14;
    plStack_130 = plStack_f8 + 4;
    plStack_158 = plStack_138 + 0x14;
    puStack_1c0 = (uint *)(plStack_138 + 1);
    plStack_290 = plStack_128 + 4;
    lVar17 = param_4[3];
    pauVar36 = pauStack_108 + 1;
LAB_14092b120:
    if (pauStack_108 != (undefined1 (*) [16])0x0) {
      uVar25 = (uint)uStack_1b8;
      if (lVar17 != 0) {
        if ((short)uStack_1b8 == 0) {
          do {
            auVar52 = *pauVar36;
            pauStack_108 = pauStack_108 + -0x98;
            pauVar36 = pauVar36 + 1;
            uVar25 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar25 == 0);
        }
        uVar37 = 0;
        for (uVar11 = uVar25; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar37 = uVar37 + 1;
        }
        lStack_258 = lVar17 + -1;
        puVar29 = (undefined8 *)((longlong)pauStack_108 + (ulonglong)uVar37 * -0x98 + -0x90);
        lStack_268 = *(longlong *)((longlong)pauStack_108 + (ulonglong)uVar37 * -0x98 + -0x98);
        lStack_110 = CONCAT71((int7)((ulonglong)lStack_268 >> 8),1);
        lStack_248 = 1;
        uStack_1b8 = (ulonglong)(uVar25 - 1 & uVar25);
        pauStack_250 = pauVar36;
        puStack_240 = puVar28;
        puStack_238 = puVar22;
        goto LAB_14092b214;
      }
      lVar17 = 0;
    }
    puVar35 = (undefined8 *)0x0;
    if (puVar28 != (undefined8 *)0x0) {
      puStack_240 = (undefined8 *)0x0;
      lStack_248 = 1;
      pauStack_108 = (undefined1 (*) [16])0x0;
      puVar29 = puVar28;
      lStack_258 = lVar17;
      pauStack_250 = pauVar36;
      puStack_238 = puVar22;
      goto LAB_14092b209;
    }
    pauVar31 = (undefined1 (*) [16])0x0;
    if (puVar22 != (undefined8 *)0x0) {
      do {
        lStack_248 = 2;
        puStack_238 = (undefined8 *)0x0;
        puVar29 = puVar22;
        lStack_258 = lVar17;
        pauStack_250 = pauVar36;
        puStack_240 = puVar35;
        pauStack_108 = pauVar31;
LAB_14092b209:
        lStack_110 = 0;
LAB_14092b214:
        pauVar31 = (undefined1 (*) [16])puVar29[6];
        auVar52 = *pauVar31;
        pauVar36 = pauVar31 + 1;
        uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar52[0xf] >> 7) << 0xf);
        lVar17 = puVar29[9];
LAB_14092b380:
        while (lVar17 != 0) {
          if ((short)uVar25 == 0) {
            do {
              auVar52 = *pauVar36;
              pauVar31 = pauVar31 + -0x68;
              pauVar36 = pauVar36 + 1;
              uVar25 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar25 == 0);
          }
          uVar37 = 0;
          for (uVar11 = uVar25; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar37 = uVar37 + 1;
          }
          uVar25 = uVar25 - 1 & uVar25;
          lVar45 = (ulonglong)uVar37 * -0x68;
          lVar17 = lVar17 + -1;
          if (*(int *)((longlong)pauVar31 + lVar45 + -0x60) == 6) {
            uVar41 = *(undefined4 *)((longlong)pauVar31 + lVar45 + -0x68);
            uVar32 = *(ulonglong *)((longlong)pauVar31 + lVar45 + -0x58);
            puStack_1c8 = (undefined4 *)CONCAT44(puStack_1c8._4_4_,uVar41);
            uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar41);
            lStack_260 = lVar17;
            if (plStack_f8[3] != 0) {
              uVar18 = pdb_1400aede0(plStack_130,&uStack_1a8);
              bVar49 = (byte)(uVar18 >> 0x39);
              auVar52 = ZEXT216(CONCAT11(bVar49,bVar49));
              auVar52 = pshuflw(auVar52,auVar52,0);
              lVar17 = 0;
              while( true ) {
                uVar18 = uVar18 & plStack_f8[1];
                auVar60 = *(undefined1 (*) [16])(*plStack_f8 + uVar18);
                auVar59[0] = -(auVar60[0] == auVar52[0]);
                auVar59[1] = -(auVar60[1] == auVar52[1]);
                auVar59[2] = -(auVar60[2] == auVar52[2]);
                auVar59[3] = -(auVar60[3] == auVar52[3]);
                auVar59[4] = -(auVar60[4] == auVar52[4]);
                auVar59[5] = -(auVar60[5] == auVar52[5]);
                auVar59[6] = -(auVar60[6] == auVar52[6]);
                auVar59[7] = -(auVar60[7] == auVar52[7]);
                auVar59[8] = -(auVar60[8] == auVar52[0]);
                auVar59[9] = -(auVar60[9] == auVar52[1]);
                auVar59[10] = -(auVar60[10] == auVar52[2]);
                auVar59[0xb] = -(auVar60[0xb] == auVar52[3]);
                auVar59[0xc] = -(auVar60[0xc] == auVar52[4]);
                auVar59[0xd] = -(auVar60[0xd] == auVar52[5]);
                auVar59[0xe] = -(auVar60[0xe] == auVar52[6]);
                auVar59[0xf] = -(auVar60[0xf] == auVar52[7]);
                uVar40 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar59[0xf] >> 7) << 0xf;
                uVar37 = (uint)uVar40;
                while (uVar40 != 0) {
                  uVar11 = 0;
                  for (uVar12 = uVar37; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                    uVar11 = uVar11 + 1;
                  }
                  lVar26 = *plStack_f8 + (uVar11 + uVar18 & plStack_f8[1]) * -0x40;
                  if ((int)uStack_1a8 == *(int *)(lVar26 + -0x40)) {
                    uVar18 = *(ulonglong *)(lVar26 + -0x20);
                    fVar4 = *(float *)(lVar26 + -0x18);
                    uStack_230 = (ulonglong *)uVar32;
                    if (plStack_138[0x13] == 0) goto LAB_14092b586;
                    uVar24 = pdb_1417c5550(plStack_158,&uStack_230);
                    lVar17 = plStack_138[0x10];
                    bVar49 = (byte)(uVar24 >> 0x39);
                    auVar52 = ZEXT216(CONCAT11(bVar49,bVar49));
                    auVar52 = pshuflw(auVar52,auVar52,0);
                    lVar26 = 0;
                    goto LAB_14092b51d;
                  }
                  uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
                  uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
                }
                auVar55[0] = -(auVar60[0] == cVar15);
                auVar55[1] = -(auVar60[1] == cVar61);
                auVar55[2] = -(auVar60[2] == cVar62);
                auVar55[3] = -(auVar60[3] == cVar63);
                auVar55[4] = -(auVar60[4] == cVar64);
                auVar55[5] = -(auVar60[5] == cVar65);
                auVar55[6] = -(auVar60[6] == cVar66);
                auVar55[7] = -(auVar60[7] == cVar67);
                auVar55[8] = -(auVar60[8] == cVar68);
                auVar55[9] = -(auVar60[9] == cVar69);
                auVar55[10] = -(auVar60[10] == cVar70);
                auVar55[0xb] = -(auVar60[0xb] == cVar71);
                auVar55[0xc] = -(auVar60[0xc] == cVar72);
                auVar55[0xd] = -(auVar60[0xd] == cVar73);
                auVar55[0xe] = -(auVar60[0xe] == cVar74);
                auVar55[0xf] = -(auVar60[0xf] == cVar75);
                if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar55 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x5f,0) & 1) != 0) || (SUB161(auVar55 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
                uVar18 = uVar18 + lVar17 + 0x10;
                lVar17 = lVar17 + 0x10;
              }
            }
            uStack_230 = &uStack_1a8;
            uStack_228 = pdb_140c478b0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14306d998,&uStack_230,&UNK_143021b90);
          }
        }
        puVar22 = puStack_238;
        puVar28 = puStack_240;
        lVar17 = lStack_258;
        pauVar36 = pauStack_250;
        if (lStack_248 != 2) goto LAB_14092b120;
        pauVar31 = pauStack_108;
        puVar35 = puStack_240;
        if (puStack_238 == (undefined8 *)0x0) break;
      } while( true );
    }
  }
  fVar53 = _DAT_142f95160;
  fVar51 = _DAT_142f60fec;
  fVar4 = _DAT_142e37988;
  fVar14 = _DAT_142e36f28;
  uStack_150 = 0;
  uStack_148 = 4;
  fStack_144 = 0.0;
  pcStack_1b0 = (char *)*param_6;
  plStack_128 = (longlong *)param_6[1];
  puVar30 = *(uint **)(pcStack_1b0 + 0xf8);
  puStack_1c0 = puVar30 + *(longlong *)(pcStack_1b0 + 0x100);
  lStack_260 = CONCAT71(lStack_260._1_7_,pcStack_1b0[0x108]);
  plStack_138 = (longlong *)*param_8;
  uStack_1b8 = param_9[3];
  pcStack_120 = (char *)param_9[2];
  uVar13 = *param_9;
  uVar32 = param_9[1];
  pcStack_100 = (char *)0x0;
  lStack_110 = 8;
  plStack_130 = (longlong *)0x0;
  lStack_160 = CONCAT44(lStack_160._4_4_,*(undefined4 *)((longlong)param_6 + 0x14));
  plVar20 = (longlong *)0x0;
  uVar41 = *(undefined4 *)((longlong)param_6 + 0x14);
  uVar18 = 0;
LAB_14092a99e:
  pbVar2 = pbStack_170;
  pbVar1 = pbStack_1d8;
  uStack_140 = uVar18;
  if ((char)lStack_260 == '\0') {
    if ((int)plVar20 == (int)pcVar44) {
      if (puVar30 == puStack_1c0) goto LAB_14092ad51;
      while( true ) {
        pcVar44 = *(char **)(plStack_128[0x20] + 0x58 + (ulonglong)*puVar30 * 0xa0);
        if (pcVar44 != (char *)0x0) break;
        puVar30 = puVar30 + 1;
        if (puVar30 == puStack_1c0) goto LAB_14092ad51;
      }
      lVar26 = plStack_128[0x20] + (ulonglong)*puVar30 * 0xa0;
      uVar24 = (ulonglong)*(uint *)(lVar26 + 0x94);
      lVar17 = *(longlong *)(plStack_128[0x34] + 0x18 + uVar24 * 0x48);
      lVar45 = *(longlong *)(plStack_128[0x34] + 0x38 + uVar24 * 0x48);
      lVar34 = ~*(ulonglong *)(lVar45 + *(longlong *)(pcStack_1b0 + 0x110) * 8) * 0x30;
      pcStack_100 = *(char **)(lVar17 + 0x10 + lVar34);
      plStack_158 = *(longlong **)(lVar17 + 0x28 + lVar34);
      lVar45 = ~*(ulonglong *)(lVar45 + *(longlong *)(pcStack_1b0 + 0x118) * 8) * 0x30;
      plStack_130 = *(longlong **)(lVar17 + 0x10 + lVar45);
      lStack_118 = *(longlong *)(lVar17 + 0x28 + lVar45);
      lStack_270 = *(longlong *)(lVar26 + 0x50);
      puVar30 = puVar30 + 1;
      plVar20 = (longlong *)0x0;
      uVar24 = 0;
    }
    else {
      uVar24 = (ulonglong)plVar20 & 0xffffffff;
    }
    puVar21 = (ulonglong *)(lStack_270 + uVar24 * 0x10);
    uVar24 = (ulonglong)~*(uint *)(lStack_270 + 8 + uVar24 * 0x10);
  }
  else {
    if ((int)plVar20 == (int)pcVar44) {
      if (puVar30 == puStack_1c0) goto LAB_14092ad51;
      while( true ) {
        pcVar44 = *(char **)(plStack_128[0x34] + 0x10 + (ulonglong)*puVar30 * 0x48);
        if (pcVar44 != (char *)0x0) break;
        puVar30 = puVar30 + 1;
        if (puVar30 == puStack_1c0) goto LAB_14092ad51;
      }
      lVar17 = plStack_128[0x34] + (ulonglong)*puVar30 * 0x48;
      lStack_110 = *(longlong *)(lVar17 + 8);
      lVar45 = *(longlong *)(lVar17 + 0x18);
      lVar26 = ~*(ulonglong *)
                 (*(longlong *)(lVar17 + 0x38) + *(longlong *)(pcStack_1b0 + 0x110) * 8) * 0x30;
      pcStack_100 = *(char **)(lVar45 + 0x10 + lVar26);
      plStack_158 = *(longlong **)(lVar45 + 0x28 + lVar26);
      lVar17 = ~*(ulonglong *)
                 (*(longlong *)(lVar17 + 0x38) + *(longlong *)(pcStack_1b0 + 0x118) * 8) * 0x30;
      plStack_130 = *(longlong **)(lVar45 + 0x10 + lVar17);
      lStack_118 = *(longlong *)(lVar45 + 0x28 + lVar17);
      puVar30 = puVar30 + 1;
      plVar20 = (longlong *)0x0;
    }
    uVar24 = (ulonglong)plVar20 & 0xffffffff;
    puVar21 = (ulonglong *)(lStack_110 + uVar24 * 8);
  }
  piVar3 = (int *)(pcStack_100 + uVar24 * 0x18);
  puVar23 = (undefined4 *)((longlong)plStack_158 + uVar24 * 4);
  pauStack_108 = (undefined1 (*) [16])((longlong)plStack_130 + uVar24 * 0x14);
  puStack_1c8 = (undefined4 *)(lStack_118 + uVar24 * 4);
  uVar24 = *puVar21;
  if ((int)uVar24 == 0) goto LAB_14092ad51;
  fVar50 = *(float *)(plStack_138 + 5);
  *puVar23 = uVar41;
  piVar3[4] = (int)(fVar50 + (float)piVar3[4]);
  iVar7 = *piVar3;
  plStack_f8 = plVar20;
  if (uVar18 == uStack_150) {
    pdb_142d8d710(&uStack_150);
  }
  plStack_f8 = (longlong *)(ulonglong)((int)plStack_f8 + 1);
  *(int *)(CONCAT44(fStack_144,uStack_148) + uVar18 * 4) = iVar7;
  uStack_140 = uVar18 + 1;
  lVar17 = 0;
  do {
    fVar50 = fVar4;
    if (uStack_168 << 2 == lVar17) {
      fVar57 = (float)piVar3[4];
      *puVar23 = (undefined4)lStack_160;
      *(bool *)(piVar3 + 5) = fVar53 < fVar57;
      if (fVar53 < fVar57) {
        fVar50 = fVar51;
      }
      goto LAB_14092ac99;
    }
    pbVar1 = pbStack_170 + lVar17;
    lVar17 = lVar17 + 4;
  } while (*(int *)pbVar1 != *piVar3);
  *puVar23 = (undefined4)lStack_160;
  *(char *)(piVar3 + 5) = '\0';
LAB_14092ac99:
  fVar57 = *(float *)(plStack_138 + 5);
  *puVar23 = (undefined4)lStack_160;
  fVar50 = fVar57 / fVar50 + (float)piVar3[1];
  piVar3[1] = (int)fVar50;
  if ((0.0 < fVar50) || ((char)piVar3[5] == '\0')) {
    fVar57 = 0.0;
    if (0.0 <= fVar50) {
      fVar57 = fVar50;
    }
    fVar50 = fVar14;
    if (fVar57 <= fVar14) {
      fVar50 = fVar57;
    }
    *puVar23 = (undefined4)lStack_160;
    piVar3[1] = (int)fVar50;
    fVar50 = (float)pdb_140dedcd0(&UNK_143021bd8);
    uVar5 = *(undefined8 *)(piVar3 + 2);
    *puStack_1c8 = (undefined4)lStack_160;
    *(ulonglong *)*pauStack_108 =
         CONCAT44(fVar50 * (float)((ulonglong)uVar5 >> 0x20),fVar50 * (float)uVar5);
    plVar20 = plStack_f8;
    uVar41 = (undefined4)lStack_160;
    uVar18 = uStack_140;
  }
  else {
    pcStack_218 = pcStack_120;
    uStack_210 = uStack_1b8;
    uStack_230 = (ulonglong *)uVar24;
    uStack_228 = (code *)uVar13;
    uStack_220 = uVar32;
    pdb_140f04aa0(&uStack_230,&UNK_143021be0);
    plVar20 = plStack_f8;
    uVar41 = (undefined4)lStack_160;
    uVar18 = uStack_140;
  }
  goto LAB_14092a99e;
LAB_14092b51d:
  uVar24 = uVar24 & plStack_138[0x11];
  pcVar39 = (char *)(lVar17 + uVar24);
  auVar60[0] = -(*pcVar39 == auVar52[0]);
  auVar60[1] = -(pcVar39[1] == auVar52[1]);
  auVar60[2] = -(pcVar39[2] == auVar52[2]);
  auVar60[3] = -(pcVar39[3] == auVar52[3]);
  auVar60[4] = -(pcVar39[4] == auVar52[4]);
  auVar60[5] = -(pcVar39[5] == auVar52[5]);
  auVar60[6] = -(pcVar39[6] == auVar52[6]);
  auVar60[7] = -(pcVar39[7] == auVar52[7]);
  auVar60[8] = -(pcVar39[8] == auVar52[0]);
  auVar60[9] = -(pcVar39[9] == auVar52[1]);
  auVar60[10] = -(pcVar39[10] == auVar52[2]);
  auVar60[0xb] = -(pcVar39[0xb] == auVar52[3]);
  auVar60[0xc] = -(pcVar39[0xc] == auVar52[4]);
  auVar60[0xd] = -(pcVar39[0xd] == auVar52[5]);
  auVar60[0xe] = -(pcVar39[0xe] == auVar52[6]);
  auVar60[0xf] = -(pcVar39[0xf] == auVar52[7]);
  uVar40 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
  uVar37 = (uint)uVar40;
  while (uVar40 != 0) {
    uVar11 = 0;
    for (uVar12 = uVar37; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    lVar34 = (uVar11 + uVar24 & plStack_138[0x11]) * -0x70;
    if (uVar32 == *(ulonglong *)(lVar17 + -0x70 + lVar34)) {
      lVar17 = lVar17 + lVar34;
      if (*(longlong *)(lVar17 + -0x68) == 3) goto LAB_14092b586;
      puVar30 = (uint *)(lVar17 + -0x60);
      goto LAB_14092b59e;
    }
    uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
    uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
  }
  auVar56[0] = -(*pcVar39 == cVar15);
  auVar56[1] = -(pcVar39[1] == cVar61);
  auVar56[2] = -(pcVar39[2] == cVar62);
  auVar56[3] = -(pcVar39[3] == cVar63);
  auVar56[4] = -(pcVar39[4] == cVar64);
  auVar56[5] = -(pcVar39[5] == cVar65);
  auVar56[6] = -(pcVar39[6] == cVar66);
  auVar56[7] = -(pcVar39[7] == cVar67);
  auVar56[8] = -(pcVar39[8] == cVar68);
  auVar56[9] = -(pcVar39[9] == cVar69);
  auVar56[10] = -(pcVar39[10] == cVar70);
  auVar56[0xb] = -(pcVar39[0xb] == cVar71);
  auVar56[0xc] = -(pcVar39[0xc] == cVar72);
  auVar56[0xd] = -(pcVar39[0xd] == cVar73);
  auVar56[0xe] = -(pcVar39[0xe] == cVar74);
  auVar56[0xf] = -(pcVar39[0xf] == cVar75);
  if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') goto LAB_14092b586;
  uVar24 = uVar24 + lVar26 + 0x10;
  lVar26 = lVar26 + 0x10;
  goto LAB_14092b51d;
LAB_14092b586:
  puVar30 = puStack_1c0;
  if (*plStack_138 == 3) goto LAB_14092bacc;
LAB_14092b59e:
  lVar17 = *(longlong *)(puVar30 + 6);
  uStack_1a8 = *(ulonglong *)(lVar17 + 0x40);
  uStack_1a0 = *(undefined8 *)(lVar17 + 0x48);
  uStack_198 = *(undefined8 *)(lVar17 + 0x50);
  uStack_190 = *(ulonglong *)(lVar17 + 0x58);
  uStack_230 = (ulonglong *)uVar13;
  uStack_228._0_4_ = 0.5;
  pdb_140df4110(&uStack_1a8,&uStack_230);
  pdb_140df3f70(&uStack_1a8);
  uStack_228 = (code *)CONCAT44(uStack_228._4_4_,fVar4);
  uStack_230 = (ulonglong *)uVar18;
  pdb_140df43c0(&uStack_1a8,&uStack_230);
  lVar17 = lStack_260;
  if (*pcStack_100 == '\0') {
    if (*(char *)((longlong)pauVar31 + lVar45 + -0x2e) == '\x02') {
      if ((char)lStack_110 == '\0') goto LAB_14092bb1f;
      if ((*(longlong *)(pcStack_100 + 0x20) == 1) &&
         (lStack_268 == *(longlong *)(pcStack_100 + 0x28))) goto LAB_14092b380;
    }
    uStack_230 = (ulonglong *)uStack_190;
    cVar16 = pdb_1419ba130(&uStack_230,pcStack_298);
    lVar17 = lStack_260;
    if (cVar16 == '\0') goto LAB_14092b380;
    if (pcStack_100[1] == '\x01') {
      cVar16 = pdb_140def450(pcStack_120);
      if ((cVar16 != '\0') ||
         (fVar51 = (float)*(undefined8 *)(pcStack_100 + 4) - (float)uStack_1a0,
         fVar53 = (float)((ulonglong)*(undefined8 *)(pcStack_100 + 4) >> 0x20) -
                  (float)((ulonglong)uStack_1a0 >> 0x20),
         SQRT(fVar53 * fVar53 + fVar51 * fVar51) < *(float *)(pcStack_100 + 0xc)))
      goto LAB_14092b886;
      cVar16 = pdb_140df1e90(&uStack_1a8,pcStack_120);
    }
    else {
      cVar16 = pdb_140df1e90(&uStack_1a8,pcStack_120);
    }
  }
  else {
    if (*pcStack_100 != '\x01') {
      uVar32 = *(ulonglong *)(pcStack_100 + 8);
      uStack_230 = (ulonglong *)uVar32;
      if (plStack_128[3] != 0) {
        uVar24 = pdb_1400af0a0(plStack_290,&uStack_230);
        lVar45 = *plStack_128;
        bVar49 = (byte)(uVar24 >> 0x39);
        auVar52 = ZEXT216(CONCAT11(bVar49,bVar49));
        auVar52 = pshuflw(auVar52,auVar52,0);
        lVar26 = 0;
        while( true ) {
          uVar24 = uVar24 & plStack_128[1];
          auVar60 = *(undefined1 (*) [16])(lVar45 + uVar24);
          auVar58[0] = -(auVar60[0] == auVar52[0]);
          auVar58[1] = -(auVar60[1] == auVar52[1]);
          auVar58[2] = -(auVar60[2] == auVar52[2]);
          auVar58[3] = -(auVar60[3] == auVar52[3]);
          auVar58[4] = -(auVar60[4] == auVar52[4]);
          auVar58[5] = -(auVar60[5] == auVar52[5]);
          auVar58[6] = -(auVar60[6] == auVar52[6]);
          auVar58[7] = -(auVar60[7] == auVar52[7]);
          auVar58[8] = -(auVar60[8] == auVar52[0]);
          auVar58[9] = -(auVar60[9] == auVar52[1]);
          auVar58[10] = -(auVar60[10] == auVar52[2]);
          auVar58[0xb] = -(auVar60[0xb] == auVar52[3]);
          auVar58[0xc] = -(auVar60[0xc] == auVar52[4]);
          auVar58[0xd] = -(auVar60[0xd] == auVar52[5]);
          auVar58[0xe] = -(auVar60[0xe] == auVar52[6]);
          auVar58[0xf] = -(auVar60[0xf] == auVar52[7]);
          uVar40 = (ushort)(SUB161(auVar58 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar58[0xf] >> 7) << 0xf;
          uVar37 = (uint)uVar40;
          while (uVar40 != 0) {
            uVar11 = 0;
            for (uVar12 = uVar37; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            lVar17 = (uVar11 + uVar24 & plStack_128[1]) * -0x2b0;
            if (uVar32 == *(ulonglong *)(lVar45 + -0x2b0 + lVar17)) {
              lVar45 = lVar45 + lVar17;
              if ((*(ulonglong *)(lVar45 + -0x298) < 2) || (*(float *)(lVar45 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143021ba8);
              }
              lVar26 = *(longlong *)(lVar45 + -0x268);
              lStack_160 = lVar26 + *(longlong *)(lVar45 + -0x260) * 0xc;
              goto LAB_14092b2e0;
            }
            uVar40 = (ushort)(uVar37 - 1) & (ushort)uVar37;
            uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar40);
          }
          auVar54[0] = -(auVar60[0] == cVar15);
          auVar54[1] = -(auVar60[1] == cVar61);
          auVar54[2] = -(auVar60[2] == cVar62);
          auVar54[3] = -(auVar60[3] == cVar63);
          auVar54[4] = -(auVar60[4] == cVar64);
          auVar54[5] = -(auVar60[5] == cVar65);
          auVar54[6] = -(auVar60[6] == cVar66);
          auVar54[7] = -(auVar60[7] == cVar67);
          auVar54[8] = -(auVar60[8] == cVar68);
          auVar54[9] = -(auVar60[9] == cVar69);
          auVar54[10] = -(auVar60[10] == cVar70);
          auVar54[0xb] = -(auVar60[0xb] == cVar71);
          auVar54[0xc] = -(auVar60[0xc] == cVar72);
          auVar54[0xd] = -(auVar60[0xd] == cVar73);
          auVar54[0xe] = -(auVar60[0xe] == cVar74);
          auVar54[0xf] = -(auVar60[0xf] == cVar75);
          lVar17 = lStack_260;
          if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar54 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x2f,0) & 1) != 0) || (SUB161(auVar54 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
          uVar24 = uVar24 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
      }
      goto LAB_14092b380;
    }
    if (*(char *)((longlong)pauVar31 + lVar45 + -0x2e) == '\x02') {
      if ((char)lStack_110 == '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306d090,0x23,&UNK_14306d0a8);
      }
      if ((*(longlong *)(pcStack_100 + 0x28) == 1) &&
         (lStack_268 == *(longlong *)(pcStack_100 + 0x30))) goto LAB_14092b380;
    }
    uStack_230 = (ulonglong *)uStack_190;
    cVar16 = pdb_1419ba130(&uStack_230,pcStack_1b0);
    lVar17 = lStack_260;
    if (cVar16 == '\0') goto LAB_14092b380;
    cVar16 = pdb_140df0290(pcStack_120,&uStack_1a8);
  }
  lVar17 = lStack_260;
  if (cVar16 == '\0') goto LAB_14092b380;
LAB_14092b886:
  pdb_140e08f50(&uStack_2b4,lStack_118);
  pdb_140e08f50(&uStack_230,lStack_118);
  fVar51 = fVar4 - (float)uStack_228;
  fStack_144 = (float)uVar18 - SUB84(uStack_230,0);
  uStack_140._0_4_ = (float)(uVar18 >> 0x20) - (float)((ulonglong)uStack_230 >> 0x20);
  uStack_140._4_4_ =
       fVar14 / SQRT((float)uStack_140 * (float)uStack_140 + fStack_144 * fStack_144 +
                     fVar51 * fVar51);
  fStack_144 = uStack_140._4_4_ * fStack_144;
  uStack_140._0_4_ = uStack_140._4_4_ * (float)uStack_140;
  uStack_140._4_4_ = uStack_140._4_4_ * fVar51;
  uStack_150 = uStack_2b4;
  uStack_148 = uStack_2ac;
  pdb_140e08f50(&uStack_230,lStack_118);
  pdb_1409f9030(&uStack_230,uStack_288,&uStack_150);
  uVar32 = uStack_168;
  bVar48 = (char)uStack_230 == '\x11';
  lVar17 = lStack_260;
  if (bVar48) {
    fVar51 = (float)uStack_198;
    fVar53 = uStack_198._4_4_;
    if (uStack_168 == uStack_178) {
      pdb_142d8d710(&uStack_178);
    }
    uVar24 = uStack_1d0;
    *(undefined4 *)(pbStack_170 + uVar32 * 4) = puStack_1c8._0_4_;
    uStack_168 = uVar32 + 1;
    if (uStack_1d0 == uStack_1e0) {
      pdb_142d7ef30(&uStack_1e0);
    }
    fVar50 = fVar53;
    if (fVar51 <= fVar53) {
      fVar50 = fVar51;
    }
    fVar51 = (float)(~-(uint)NAN(fVar51) & (uint)fVar50 | -(uint)NAN(fVar51) & (uint)fVar53) *
             _DAT_142e36f50;
    if (_DAT_142e36f50 <= fVar51) {
      fVar51 = _DAT_142e36f50;
    }
    lVar17 = uVar24 * 0x10;
    *(float *)(pbStack_1d8 + lVar17) = fVar51;
    *(ulonglong *)(pbStack_1d8 + lVar17 + 4) = uVar18;
    *(float *)(pbStack_1d8 + lVar17 + 0xc) = fVar4;
    uStack_1d0 = uVar24 + 1;
    lVar17 = lStack_260;
  }
  goto LAB_14092b380;
  while( true ) {
    uStack_150 = uStack_190;
    if (*(char *)(lVar45 + -0xb) == '\x01') {
      uVar41 = 0;
      puVar23 = (undefined4 *)(lVar45 + -0x19c);
      if (*(char *)(lVar45 + -0x1a0) == '\0') {
        pdb_142d8e040();
        goto LAB_14092bb88;
      }
    }
    else {
      uVar41 = *(undefined4 *)(lVar26 + 4);
      puVar23 = (undefined4 *)(lVar45 + -0x20);
    }
    uStack_230 = (ulonglong *)CONCAT44(*puVar23,uVar41);
    cVar16 = pdb_1419ba130(&uStack_150,&uStack_230);
    lVar26 = lVar26 + 0xc;
    if ((cVar16 != '\0') && (cVar16 = pdb_140df1700(&uStack_1a8), cVar16 != '\0')) break;
LAB_14092b2e0:
    lVar17 = lStack_260;
    if (lVar26 == lStack_160) goto LAB_14092b380;
  }
  goto LAB_14092b886;
LAB_14092ad51:
  uVar32 = uStack_168;
  if (uStack_1d0 < uStack_168) {
    uVar32 = uStack_1d0;
  }
  uVar18 = 0;
LAB_14092ad80:
  if (uVar18 < uVar32) {
    uVar24 = uVar18 + 1;
    pbVar27 = pbVar1 + uVar18 * 0x10;
    uVar25 = *(uint *)(pbVar2 + uVar18 * 4);
    lVar17 = 0;
    do {
      uVar18 = uVar24;
      if (uStack_140 << 2 == lVar17) {
        uVar41 = *(undefined4 *)pbVar27;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,*(undefined4 *)(pbVar27 + 0xc));
        uStack_1a8 = *(ulonglong *)(pbVar27 + 4);
        pdb_14007ee60();
        pbVar27 = pub_1406abab0(0xf,1);
        if (pbVar27 == (byte *)0x0) {
          pdb_142dc7e2a(1,0xf);
          goto LAB_14092bb88;
        }
        pbVar27[7] = 100;
        pbVar27[8] = 0x2f;
        pbVar27[9] = 0x6c;
        pbVar27[10] = 0x6f;
        pbVar27[0xb] = 99;
        pbVar27[0xc] = 0x6b;
        pbVar27[0xd] = 0x65;
        pbVar27[0xe] = 100;
        pbVar27[0] = 0x6d;
        pbVar27[1] = 0x65;
        pbVar27[2] = 0x6e;
        pbVar27[3] = 0x75;
        pbVar27[4] = 0x2f;
        pbVar27[5] = 0x74;
        pbVar27[6] = 0x6f;
        pbVar27[7] = 100;
        uStack_230 = (ulonglong *)(ulonglong)uVar25;
        uStack_228 = (code *)CONCAT44(uVar41,uVar41);
        uStack_220 = uStack_220 & 0xffffff0000000000;
        pcStack_218 = (char *)0x0;
        uStack_208 = (undefined4)uStack_1a0;
        uStack_210 = uStack_1a8;
        uStack_200 = 0xf;
        uStack_1f0 = 0xf;
        uStack_1e8 = 0;
        pbStack_1f8 = pbVar27;
        pdb_14161e4e0(&uStack_1a8,param_9,&uStack_230,&UNK_143021bc0);
        break;
      }
      puVar30 = (uint *)(CONCAT44(fStack_144,uStack_148) + lVar17);
      lVar17 = lVar17 + 4;
    } while (*puVar30 != uVar25);
    goto LAB_14092ad80;
  }
  if (uStack_150 != 0) {
    pub_1406abac0((byte *)CONCAT44(fStack_144,uStack_148),uStack_150 << 2,4);
  }
  if (uStack_1e0 != 0) {
    pub_1406abac0(pbStack_1d8,uStack_1e0 << 4,4);
  }
  if (uStack_178 != 0) {
    pub_1406abac0(pbStack_170,uStack_178 << 2,4);
  }
  if (lStack_280 != 0) {
    plVar20 = (longlong *)pdb_140e97000();
    if ((char)plVar20[0xd] != '\x01') {
      plVar20 = (longlong *)pdb_142d8ec20(plVar20,0);
      if (plVar20 == (longlong *)0x0) {
LAB_14092bb12:
        pdb_142dc7890(&UNK_143326860);
LAB_14092bb1f:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306d090,0x23,&UNK_14306d0a8);
      }
    }
    if (*plVar20 != 0) {
LAB_14092babf:
      pdb_142dc8090(&UNK_143326a50);
LAB_14092bacc:
      pdb_142dc8110(&UNK_14306aed6,0x32,&UNK_14306af08);
LAB_14092bb88:
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    *plVar20 = -1;
    plStack_f8 = plVar20;
    pdb_140e95370(plVar20 + 1,uStack_278);
    *plStack_f8 = *plStack_f8 + 1;
  }
  return;
}

