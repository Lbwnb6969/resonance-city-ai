// VA 0x1428ead00, PDB extent 9779 bytes
// system_clutter::autoclutter::manage_autoclutter_entities::manage_autoclutter_entities
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/manage_autoclutter_entities.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::manage_autoclutter_entities::manage_autoclutter_entities
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/manage_autoclutter_entities.rs
   Extent: 9779 */

void pdb_1428ead00(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint *puVar24;
  ulonglong *puVar25;
  longlong lVar26;
  int iVar27;
  undefined *puVar28;
  longlong lVar29;
  int iVar30;
  longlong *plVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  ushort uVar34;
  float *pfVar35;
  ulonglong uVar36;
  undefined *puVar37;
  undefined *puVar38;
  uint *puVar39;
  char *pcVar40;
  longlong lVar41;
  byte *pbVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  longlong lStack_328;
  undefined1 (*pauStack_320) [16];
  ulonglong uStack_318;
  undefined1 (*pauStack_300) [16];
  ulonglong uStack_2f8;
  longlong lStack_2e8;
  undefined1 auStack_2e0 [16];
  longlong *plStack_2d0;
  longlong *plStack_2c8;
  longlong *plStack_2c0;
  ulonglong uStack_2b8;
  longlong lStack_2b0;
  undefined4 *puStack_2a8;
  longlong *plStack_2a0;
  undefined1 (*pauStack_298) [16];
  uint *puStack_290;
  uint7 uStack_288;
  undefined1 uStack_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  undefined8 uStack_250;
  ulonglong uStack_248;
  ulonglong uStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  ulonglong uStack_1ef;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 (*pauStack_1c8) [16];
  float *pfStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  byte *pbStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  undefined4 uStack_184;
  ulonglong uStack_180;
  ulonglong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte *pbStack_150;
  ulonglong uStack_148;
  byte *pbStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  undefined1 (*pauStack_120) [16];
  longlong lStack_118;
  undefined8 uStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar21 = param_2;
  plStack_2c0 = param_3;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_260 = 0;
  }
  else {
    lVar41 = 0x55;
    lVar19 = pdb_1428ed5f0(0x55);
    puVar37 = &UNK_1435b29e8;
    if (lVar19 == 1) {
      if ((longlong *)0x55 < plVar21) {
LAB_1428ecc27:
        pdb_142dc8070(&UNK_1435b29e8,0x55,0);
LAB_1428ecc47:
        pdb_142dc8070(&UNK_1435b29e8,0x55);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar20 = pdb_1428ed5f0(plVar21);
      if ((uVar20 & 1) != 0) {
        if (0x55 < (longlong)plVar21 + 2U) goto LAB_1428ecc47;
        lVar41 = 0x53 - (longlong)plVar21;
        puVar37 = &UNK_1435b29ea + (longlong)plVar21;
      }
    }
    puVar28 = &UNK_1435b290b;
    puVar38 = &UNK_1435b28c6;
    do {
      bVar43 = puVar28[-1];
      uVar18 = (uint)(char)bVar43;
      if ((char)bVar43 < '\0') {
        bVar3 = puVar28[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar28[-3];
          if ((char)bVar4 < -0x40) {
            pbVar42 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar18 = bVar4 & 0x3f | (*pbVar42 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar18 = bVar4 & 0xf;
          }
          uVar18 = bVar3 & 0x3f | uVar18 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar18 = bVar3 & 0x1f;
        }
        uVar18 = (uint)(bVar43 & 0x3f) | uVar18 << 6;
        if (uVar18 != 0x5c) goto LAB_1428eae74;
LAB_1428eae8c:
        puVar38 = puVar28 + -0x1435b28c5;
        if ((undefined *)0x45 < puVar38) {
          pdb_142dc8070(&UNK_1435b28c6,0x45,puVar38,0x45,&UNK_1435b2aa0);
          goto LAB_1428ecc27;
        }
        lVar19 = 0x45 - (longlong)puVar38;
        puVar38 = puVar28 + 1;
        goto LAB_1428eaeae;
      }
      puVar28 = puVar28 + -1;
      if (uVar18 == 0x5c) goto LAB_1428eae8c;
LAB_1428eae74:
      if (uVar18 == 0x2f) goto LAB_1428eae8c;
    } while (puVar28 != &UNK_1435b28c6);
    lVar19 = 0x45;
LAB_1428eaeae:
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] != '\x01') &&
       (plVar21 = (longlong *)pdb_142e16b00(plVar21,0), plVar21 == (longlong *)0x0))
    goto LAB_1428ecbf6;
    if (*plVar21 != 0) goto LAB_1428ecbc2;
    *plVar21 = -1;
    plStack_108 = plVar21;
    uStack_250 = pdb_140e94f10(plVar21 + 1,puVar37,lVar41,puVar38,lVar19,1,0);
    *plStack_108 = *plStack_108 + 1;
    lStack_260 = 1;
  }
  lVar19 = *(longlong *)(*param_1 + 0x50);
  lStack_258 = lStack_260;
  pdb_142b461c0(&pauStack_300,lVar19,*(longlong *)(*param_1 + 0x58) * 0x68 + lVar19);
  fVar15 = _DAT_142e3b1d8;
  fVar56 = _DAT_142e377f0;
  fVar49 = _DAT_142e36f50;
  fVar14 = _DAT_142e36f28;
  lStack_118 = *param_2;
  uVar20 = param_2[1];
  uStack_184 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_2b8 = uVar20 + 0x198;
  lStack_2b0 = uVar20 + 0xf8;
  puVar39 = *(uint **)(lStack_118 + 0xf8);
  pbStack_150 = (byte *)CONCAT71(pbStack_150._1_7_,*(undefined1 *)(lStack_118 + 0x108));
  plStack_2d0 = (longlong *)param_4[1];
  plStack_2c8 = (longlong *)param_4[2];
  plStack_100 = plStack_2d0;
  if (plStack_2d0 == (longlong *)0x0) {
    plStack_100 = plStack_2c8;
  }
  lStack_130 = 0;
  pbStack_140 = (byte *)0x8;
  uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
  lStack_190 = 0;
  uStack_180 = 8;
  lStack_128 = 0;
  lVar19 = 0;
  plStack_108 = (longlong *)0x0;
  puVar24 = puVar39 + *(longlong *)(lStack_118 + 0x100);
  uVar18 = _DAT_142e37820;
  plStack_2a0 = param_4;
LAB_1428eb02e:
  do {
    plVar21 = plStack_100;
    if ((char)pbStack_150 == '\0') {
      if ((int)plStack_108 == (int)lVar19) {
        do {
          if (puVar39 == puVar24) goto LAB_1428eba1a;
          uVar32 = *puVar39;
          puVar39 = puVar39 + 1;
          lVar19 = *(longlong *)(*(longlong *)(uVar20 + 0x100) + 0x58 + (ulonglong)uVar32 * 0xa0);
        } while (lVar19 == 0);
        lVar22 = *(longlong *)(uVar20 + 0x100) + (ulonglong)uVar32 * 0xa0;
        lVar41 = *(longlong *)(uVar20 + 0x1a0) + (ulonglong)*(uint *)(lVar22 + 0x94) * 0x48;
        if ((*(ulonglong *)(lStack_118 + 0x110) <
             *(ulonglong *)
              (*(longlong *)(uVar20 + 0x1a0) + 0x40 + (ulonglong)*(uint *)(lVar22 + 0x94) * 0x48))
           && (uVar23 = *(ulonglong *)
                         (*(longlong *)(lVar41 + 0x38) + *(ulonglong *)(lStack_118 + 0x110) * 8),
              uVar23 != 0)) {
          lStack_130 = *(longlong *)(*(longlong *)(lVar41 + 0x18) + 0x10 + ~uVar23 * 0x30);
          uVar23 = *(ulonglong *)(lStack_118 + 0x118);
          if (uVar23 < *(ulonglong *)(lVar22 + 0x88)) goto LAB_1428eb24e;
LAB_1428eb1a2:
          lVar29 = *(longlong *)(lVar41 + 0x18);
LAB_1428eb297:
          lVar41 = *(longlong *)(lVar41 + 0x38);
          uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
        }
        else {
          lStack_130 = 0;
          uVar23 = *(ulonglong *)(lStack_118 + 0x118);
          if (*(ulonglong *)(lVar22 + 0x88) <= uVar23) goto LAB_1428eb1a2;
LAB_1428eb24e:
          lVar29 = *(longlong *)(lVar41 + 0x18);
          if (*(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar23 * 8) == 0) goto LAB_1428eb297;
          lVar41 = *(longlong *)(lVar41 + 0x38);
          lVar26 = ~*(ulonglong *)(lVar41 + uVar23 * 8) * 0x30;
          lStack_190 = *(longlong *)(lVar29 + 0x10 + lVar26);
          lStack_1b8 = *(longlong *)(lVar29 + 0x28 + lVar26);
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)CONCAT71((int7)((ulonglong)lStack_1b8 >> 8),1)
                               );
        }
        lVar41 = ~*(ulonglong *)(lVar41 + *(longlong *)(lStack_118 + 0x120) * 8) * 0x30;
        lStack_128 = *(longlong *)(lVar29 + 0x10 + lVar41);
        uStack_148 = *(ulonglong *)(lVar29 + 0x28 + lVar41);
        pbStack_140 = *(byte **)(lVar22 + 0x50);
        uVar23 = 0;
        plVar31 = (longlong *)0;
      }
      else {
        uVar23 = (ulonglong)plStack_108 & 0xffffffff;
        plVar31 = plStack_108;
      }
      iVar30 = (int)plVar31;
      uVar36 = (ulonglong)~*(uint *)((longlong)pbStack_140 + 8 + uVar23 * 0x10);
      if ((char)uStack_110 == '\x01') {
        pfVar35 = (float *)(uVar36 * 0x20 + lStack_190);
        pauVar33 = (undefined1 (*) [16])(lStack_1b8 + uVar36 * 4);
      }
      else {
        pfVar35 = (float *)0x0;
        pauVar33 = pauStack_120;
      }
      lVar41 = *(longlong *)((longlong)pbStack_140 + uVar23 * 0x10);
      plVar31 = (longlong *)(lStack_130 + uVar36 * 0x18);
      puVar25 = (ulonglong *)(uVar36 * 0x30 + lStack_128);
      puVar1 = (undefined4 *)(uStack_148 + uVar36 * 4);
      iVar27 = (int)lVar41;
      pauVar12 = pauVar33;
    }
    else {
      plVar31 = plStack_108;
      if ((int)plStack_108 == (int)lVar19) {
        do {
          if (puVar39 == puVar24) goto LAB_1428eba1a;
          uVar32 = *puVar39;
          puVar39 = puVar39 + 1;
          lVar19 = *(longlong *)(*(longlong *)(uVar20 + 0x1a0) + 0x10 + (ulonglong)uVar32 * 0x48);
        } while (lVar19 == 0);
        lVar41 = *(longlong *)(uVar20 + 0x1a0) + (ulonglong)uVar32 * 0x48;
        if ((*(ulonglong *)(lStack_118 + 0x110) < *(ulonglong *)(lVar41 + 0x40)) &&
           (uVar23 = *(ulonglong *)
                      (*(longlong *)(lVar41 + 0x38) + *(ulonglong *)(lStack_118 + 0x110) * 8),
           uVar23 != 0)) {
          lStack_130 = *(longlong *)(*(longlong *)(lVar41 + 0x18) + 0x10 + ~uVar23 * 0x30);
        }
        else {
          lStack_130 = 0;
        }
        if (*(ulonglong *)(lStack_118 + 0x118) < *(ulonglong *)(lVar41 + 0x40)) {
          uVar23 = *(ulonglong *)
                    (*(longlong *)(lVar41 + 0x38) + *(ulonglong *)(lStack_118 + 0x118) * 8);
          lVar22 = *(longlong *)(lVar41 + 0x18);
          if (uVar23 == 0) goto LAB_1428eb35a;
          lVar29 = ~uVar23 * 0x30;
          lStack_190 = *(longlong *)(lVar22 + 0x10 + lVar29);
          lStack_1b8 = *(longlong *)(lVar22 + 0x28 + lVar29);
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)CONCAT71((int7)((ulonglong)lStack_1b8 >> 8),1)
                               );
        }
        else {
          lVar22 = *(longlong *)(lVar41 + 0x18);
LAB_1428eb35a:
          uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
        }
        lVar29 = ~*(ulonglong *)
                   (*(longlong *)(lVar41 + 0x38) + *(longlong *)(lStack_118 + 0x120) * 8) * 0x30;
        lStack_128 = *(longlong *)(lVar22 + 0x10 + lVar29);
        uStack_148 = *(ulonglong *)(lVar22 + 0x28 + lVar29);
        uStack_180 = *(longlong *)(lVar41 + 8);
        plVar31 = (longlong *)0x0;
      }
      iVar30 = (int)plVar31;
      uVar23 = (ulonglong)plVar31 & 0xffffffff;
      if ((char)uStack_110 == '\x01') {
        pfVar35 = (float *)(uVar23 * 0x20 + lStack_190);
        pauStack_1c8 = (undefined1 (*) [16])(lStack_1b8 + uVar23 * 4);
      }
      else {
        pfVar35 = (float *)0x0;
      }
      lVar41 = *(longlong *)(uStack_180 + uVar23 * 8);
      plVar31 = (longlong *)(lStack_130 + uVar23 * 0x18);
      puVar25 = (ulonglong *)(uVar23 * 0x30 + lStack_128);
      puVar1 = (undefined4 *)(uStack_148 + uVar23 * 4);
      iVar27 = (int)lVar41;
      pauVar33 = pauStack_1c8;
      pauVar12 = pauStack_120;
    }
    if (iVar27 == 0) goto LAB_1428eba1a;
    plStack_108 = (longlong *)(ulonglong)(iVar30 + 1);
    lStack_138 = lVar41;
    pauStack_120 = pauVar12;
    if (*(char *)((longlong)plVar31 + 0x15) == '\0') {
      if (lStack_2e8 != 0) {
        uVar23 = pdb_14216e010(auStack_2e0,plVar31);
        bVar43 = (byte)(uVar23 >> 0x39);
        auVar44 = ZEXT216(CONCAT11(bVar43,bVar43));
        auVar44 = pshuflw(auVar44,auVar44,0);
        lVar41 = 0;
        while( true ) {
          uVar23 = uVar23 & uStack_2f8;
          pcVar40 = *pauStack_300 + uVar23;
          auVar51[0] = -(*pcVar40 == auVar44[0]);
          auVar51[1] = -(pcVar40[1] == auVar44[1]);
          auVar51[2] = -(pcVar40[2] == auVar44[2]);
          auVar51[3] = -(pcVar40[3] == auVar44[3]);
          auVar51[4] = -(pcVar40[4] == auVar44[4]);
          auVar51[5] = -(pcVar40[5] == auVar44[5]);
          auVar51[6] = -(pcVar40[6] == auVar44[6]);
          auVar51[7] = -(pcVar40[7] == auVar44[7]);
          auVar51[8] = -(pcVar40[8] == auVar44[0]);
          auVar51[9] = -(pcVar40[9] == auVar44[1]);
          auVar51[10] = -(pcVar40[10] == auVar44[2]);
          auVar51[0xb] = -(pcVar40[0xb] == auVar44[3]);
          auVar51[0xc] = -(pcVar40[0xc] == auVar44[4]);
          auVar51[0xd] = -(pcVar40[0xd] == auVar44[5]);
          auVar51[0xe] = -(pcVar40[0xe] == auVar44[6]);
          auVar51[0xf] = -(pcVar40[0xf] == auVar44[7]);
          uVar34 = (ushort)(SUB161(auVar51 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar51[0xf] >> 7) << 0xf;
          uVar32 = (uint)uVar34;
          if (uVar34 != 0) {
            do {
              uVar10 = 0;
              for (uVar11 = uVar32; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar10 = uVar10 + 1;
              }
              uVar36 = uVar10 + uVar23 & uStack_2f8;
              if (*plVar31 == *(longlong *)pauStack_300[-1 - uVar36]) {
                lVar41 = *(longlong *)(pauStack_300[-1 - uVar36] + 8);
                fVar55 = *(float *)(lVar41 + 0x4c) - *(float *)((longlong)puVar25 + 0x14);
                fVar59 = *(float *)(lVar41 + 0x48) - *(float *)(puVar25 + 2);
                fVar45 = *(float *)(lVar41 + 0x50) - *(float *)(puVar25 + 3);
                if (SQRT(fVar45 * fVar45 + fVar55 * fVar55 + fVar59 * fVar59) <= fVar15)
                goto LAB_1428eb02e;
                goto LAB_1428eb858;
              }
              uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
              uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
            } while (uVar34 != 0);
          }
          auVar47[0] = -(*pcVar40 == -1);
          auVar47[1] = -(pcVar40[1] == -1);
          auVar47[2] = -(pcVar40[2] == -1);
          auVar47[3] = -(pcVar40[3] == -1);
          auVar47[4] = -(pcVar40[4] == -1);
          auVar47[5] = -(pcVar40[5] == -1);
          auVar47[6] = -(pcVar40[6] == -1);
          auVar47[7] = -(pcVar40[7] == -1);
          auVar47[8] = -(pcVar40[8] == -1);
          auVar47[9] = -(pcVar40[9] == -1);
          auVar47[10] = -(pcVar40[10] == -1);
          auVar47[0xb] = -(pcVar40[0xb] == -1);
          auVar47[0xc] = -(pcVar40[0xc] == -1);
          auVar47[0xd] = -(pcVar40[0xd] == -1);
          auVar47[0xe] = -(pcVar40[0xe] == -1);
          auVar47[0xf] = -(pcVar40[0xf] == -1);
          if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x2f,0) & 1) != 0) || (SUB161(auVar47 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
          uVar23 = uVar23 + lVar41 + 0x10;
          lVar41 = lVar41 + 0x10;
        }
      }
LAB_1428eb858:
      plVar21 = plStack_100;
      lVar41 = plStack_100[2];
      if ((ulonglong)(*plStack_100 - lVar41) < 0x18) {
        pdb_142d7f1b0(plStack_100,lVar41,0x18,1,1);
      }
    }
    else {
      puStack_2a8 = puVar1;
      pauStack_298 = pauVar33;
      pfStack_1c0 = pfVar35;
      if (lStack_2e8 != 0) {
        uVar23 = pdb_14216e010(auStack_2e0,plVar31);
        uVar6 = uStack_184;
        puVar1 = puStack_2a8;
        pauVar33 = pauStack_300;
        bVar43 = (byte)(uVar23 >> 0x39);
        auVar44 = ZEXT216(CONCAT11(bVar43,bVar43));
        auVar44 = pshuflw(auVar44,auVar44,0);
        lVar41 = 0;
        while( true ) {
          uVar23 = uVar23 & uStack_2f8;
          auVar51 = *(undefined1 (*) [16])(*pauStack_300 + uVar23);
          auVar50[0] = -(auVar51[0] == auVar44[0]);
          auVar50[1] = -(auVar51[1] == auVar44[1]);
          auVar50[2] = -(auVar51[2] == auVar44[2]);
          auVar50[3] = -(auVar51[3] == auVar44[3]);
          auVar50[4] = -(auVar51[4] == auVar44[4]);
          auVar50[5] = -(auVar51[5] == auVar44[5]);
          auVar50[6] = -(auVar51[6] == auVar44[6]);
          auVar50[7] = -(auVar51[7] == auVar44[7]);
          auVar50[8] = -(auVar51[8] == auVar44[0]);
          auVar50[9] = -(auVar51[9] == auVar44[1]);
          auVar50[10] = -(auVar51[10] == auVar44[2]);
          auVar50[0xb] = -(auVar51[0xb] == auVar44[3]);
          auVar50[0xc] = -(auVar51[0xc] == auVar44[4]);
          auVar50[0xd] = -(auVar51[0xd] == auVar44[5]);
          auVar50[0xe] = -(auVar51[0xe] == auVar44[6]);
          auVar50[0xf] = -(auVar51[0xf] == auVar44[7]);
          uVar34 = (ushort)(SUB161(auVar50 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar50[0xf] >> 7) << 0xf;
          uVar32 = (uint)uVar34;
          if (uVar34 != 0) {
            do {
              uVar10 = 0;
              for (uVar11 = uVar32; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar10 = uVar10 + 1;
              }
              uVar36 = uVar10 + uVar23 & uStack_2f8;
              if (*plVar31 == *(longlong *)pauStack_300[-1 - uVar36]) {
                uVar5 = *(undefined4 *)(*(longlong *)(pauStack_300[-1 - uVar36] + 8) + 0x50);
                uStack_240 = CONCAT44(uStack_240._4_4_,uVar5);
                uStack_248 = *(ulonglong *)(*(longlong *)(pauStack_300[-1 - uVar36] + 8) + 0x48);
                *puStack_2a8 = uStack_184;
                *(undefined4 *)(puVar25 + 3) = uVar5;
                puVar25[2] = uStack_248;
                puStack_290 = puVar24;
                pdb_1428ed340(&uStack_248,*(longlong *)(pauStack_300[-1 - uVar36] + 8) + 0x54);
                plVar21 = plStack_100;
                puVar24 = puStack_290;
                *puVar1 = uVar6;
                *puVar25 = uStack_248;
                puVar25[1] = uStack_240;
                if (pfStack_1c0 == (float *)0x0) goto LAB_1428eb02e;
                lVar41 = *(longlong *)(pauVar33[-1 - uVar36] + 8);
                fVar55 = *(float *)(lVar41 + 0x5c);
                fVar57 = (float)*(undefined8 *)(lVar41 + 0x54);
                fVar58 = (float)((ulonglong)*(undefined8 *)(lVar41 + 0x54) >> 0x20);
                fVar53 = fVar58 * fVar56;
                fVar45 = fVar57 * 0.0 + fVar55 * fVar56;
                fVar59 = (float)((uint)fVar57 ^ uVar18) - fVar53;
                fVar53 = fVar53 + fVar55;
                fVar48 = fVar14 / SQRT(fVar59 * fVar59 + fVar45 * fVar45 + fVar53 * fVar53);
                fVar53 = fVar53 * fVar48;
                fVar45 = fVar45 * fVar48;
                fVar48 = fVar48 * fVar59;
                fVar60 = fVar58 * fVar48 - fVar55 * fVar45;
                fVar52 = fVar55 * fVar53 - fVar57 * fVar48;
                fVar59 = fVar57 * fVar45 - fVar58 * fVar53;
                fVar61 = fVar14 / SQRT(fVar59 * fVar59 + fVar52 * fVar52 + fVar60 * fVar60);
                fVar60 = fVar60 * fVar61;
                fVar59 = fVar61 * fVar59;
                if (fVar55 <= 0.0) {
                  fVar53 = fVar52 * fVar61 - fVar53;
                  if (fVar53 <= 0.0) {
                    fVar53 = (fVar14 - fVar55) - fVar53;
                    fVar54 = fVar49 / SQRT(fVar53);
                    fVar55 = fVar53 * fVar54;
                    fVar52 = (fVar45 + fVar60) * fVar54;
                    fVar61 = (fVar48 + fVar57) * fVar54;
                    fVar54 = (fVar59 - fVar58) * fVar54;
                  }
                  else {
                    fVar53 = fVar53 + (fVar14 - fVar55);
                    fVar54 = fVar49 / SQRT(fVar53);
                    fVar55 = (fVar45 + fVar60) * fVar54;
                    fVar52 = fVar53 * fVar54;
                    fVar61 = (fVar59 + fVar58) * fVar54;
                    fVar54 = (fVar57 - fVar48) * fVar54;
                  }
                }
                else {
                  fVar53 = fVar53 + fVar52 * fVar61;
                  if (fVar53 <= 0.0) {
                    fVar53 = (fVar55 + fVar14) - fVar53;
                    fVar54 = fVar49 / SQRT(fVar53);
                    fVar55 = fVar54 * (fVar57 + fVar48);
                    fVar52 = fVar54 * (fVar58 + fVar59);
                    fVar61 = fVar53 * fVar54;
                    fVar54 = fVar54 * (fVar45 - fVar60);
                  }
                  else {
                    fVar53 = fVar53 + fVar55 + fVar14;
                    fVar54 = fVar49 / SQRT(fVar53);
                    fVar55 = fVar54 * (fVar59 - fVar58);
                    fVar52 = fVar54 * (fVar57 - fVar48);
                    fVar61 = fVar54 * (fVar45 - fVar60);
                    fVar54 = fVar54 * fVar53;
                  }
                }
                *(undefined4 *)*pauStack_298 = uStack_184;
                *pfStack_1c0 = fVar55;
                pfStack_1c0[1] = fVar52;
                pfStack_1c0[2] = fVar61;
                pfStack_1c0[3] = fVar54;
                uVar18 = _DAT_142e37820;
                if (1 < *(byte *)(lVar41 + 0x30)) goto LAB_1428eb02e;
                uVar6 = *(undefined4 *)(lVar41 + 0x34);
                lVar41 = plStack_100[2];
                if ((ulonglong)(*plStack_100 - lVar41) < 0x18) {
                  pdb_142d7f1b0(plStack_100,lVar41,0x18,1,1);
                }
                lVar22 = plVar21[1];
                *(code **)(lVar22 + lVar41) = pdb_1428d97b0;
                *(longlong *)(lVar22 + 8 + lVar41) = lStack_138;
                *(undefined4 *)(lVar22 + 0x10 + lVar41) = uVar6;
                *(undefined1 *)(lVar22 + 0x14 + lVar41) = 0;
                goto LAB_1428eb894;
              }
              uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
              uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
              plVar21 = plStack_100;
            } while (uVar34 != 0);
          }
          auVar46[0] = -(auVar51[0] == -1);
          auVar46[1] = -(auVar51[1] == -1);
          auVar46[2] = -(auVar51[2] == -1);
          auVar46[3] = -(auVar51[3] == -1);
          auVar46[4] = -(auVar51[4] == -1);
          auVar46[5] = -(auVar51[5] == -1);
          auVar46[6] = -(auVar51[6] == -1);
          auVar46[7] = -(auVar51[7] == -1);
          auVar46[8] = -(auVar51[8] == -1);
          auVar46[9] = -(auVar51[9] == -1);
          auVar46[10] = -(auVar51[10] == -1);
          auVar46[0xb] = -(auVar51[0xb] == -1);
          auVar46[0xc] = -(auVar51[0xc] == -1);
          auVar46[0xd] = -(auVar51[0xd] == -1);
          auVar46[0xe] = -(auVar51[0xe] == -1);
          auVar46[0xf] = -(auVar51[0xf] == -1);
          if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x2f,0) & 1) != 0) || (SUB161(auVar46 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
          uVar23 = uVar23 + lVar41 + 0x10;
          lVar41 = lVar41 + 0x10;
        }
      }
      lVar41 = plVar21[2];
      if ((ulonglong)(*plVar21 - lVar41) < 0x18) {
        pdb_142d7f1b0(plVar21,lVar41,0x18,1,1);
      }
    }
    lVar22 = plVar21[1];
    *(code **)(lVar22 + lVar41) = pdb_1428d9330;
    *(longlong *)(lVar22 + 8 + lVar41) = lStack_138;
    *(undefined1 *)(lVar22 + 0x10 + lVar41) = 0;
LAB_1428eb894:
    plVar21[2] = lVar41 + 0x18;
  } while( true );
LAB_1428ebec0:
  do {
    if ((int)uVar23 == (int)lVar22) {
      do {
        if (puVar24 == puVar39) goto LAB_1428ebf70;
        uVar32 = *puVar24;
        puVar24 = puVar24 + 1;
        lVar22 = *(longlong *)(*(longlong *)(lStack_118 + 0x100) + 0x58 + (ulonglong)uVar32 * 0xa0);
      } while (lVar22 == 0);
      lVar41 = *(longlong *)(lStack_118 + 0x100) + (ulonglong)uVar32 * 0xa0;
      uVar23 = (ulonglong)*(uint *)(lVar41 + 0x94);
      if (*(ulonglong *)(lStack_128 + 0x110) <
          *(ulonglong *)(*(longlong *)(lStack_118 + 0x1a0) + 0x40 + uVar23 * 0x48)) {
        lVar29 = *(longlong *)(lStack_118 + 0x1a0) + uVar23 * 0x48;
        uVar23 = *(ulonglong *)
                  (*(longlong *)(lVar29 + 0x38) + *(ulonglong *)(lStack_128 + 0x110) * 8);
        if (uVar23 == 0) goto LAB_1428ebe52;
        lVar29 = *(longlong *)(*(longlong *)(lVar29 + 0x18) + 0x10 + ~uVar23 * 0x30);
      }
      else {
LAB_1428ebe52:
        lVar29 = 0;
      }
      lVar41 = *(longlong *)(lVar41 + 0x50);
      uVar23 = 0;
    }
    lVar26 = (ulonglong)~*(uint *)(lVar41 + 8 + uVar23 * 0x10) * 0x30;
    uVar23 = (ulonglong)((int)uVar23 + 1);
    fVar49 = *(float *)(lVar29 + 0x14 + lVar26) - *(float *)(pbStack_150 + 0x4c);
    fVar56 = *(float *)(lVar29 + 0x10 + lVar26) - *(float *)(pbStack_150 + 0x48);
    fVar55 = *(float *)(lVar29 + 0x18 + lVar26) - *(float *)(pbStack_150 + 0x50);
  } while (*(float *)(*(longlong *)(pbStack_150 + 0x38) + 0x60) + fVar14 <=
           SQRT(fVar55 * fVar55 + fVar49 * fVar49 + fVar56 * fVar56));
  goto LAB_1428ebbd8;
LAB_1428ebf70:
  if (uStack_1a0 == uStack_1b0) {
    pdb_142d7e980(&uStack_1b0);
  }
  lVar41 = uVar20 * 0x10;
  *(longlong *)(pbStack_1a8 + lVar41) = lVar19;
  *(byte **)(pbStack_1a8 + lVar41 + 8) = pbStack_150;
  uStack_1a0 = uVar20 + 1;
  goto LAB_1428ebbd8;
LAB_1428eba1a:
  uStack_1b0 = 0;
  pbStack_1a8 = (byte *)0x8;
  uStack_1a0 = 0;
  uStack_f1 = 1;
  uStack_198 = pdb_140dedfe0(*(undefined4 *)(*plStack_2c0 + 0x2c));
  lStack_228 = *(longlong *)(lStack_118 + 0xf8);
  lStack_220 = lStack_228 + *(longlong *)(lStack_118 + 0x100) * 4;
  uStack_1d0 = *(undefined1 *)(lStack_118 + 0x108);
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_281 = 0;
  uStack_280 = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  uStack_240 = uStack_2b8;
  lStack_238 = lStack_2b0;
  lStack_230 = lStack_118;
  uStack_218 = 8;
  uStack_210 = 0;
  uStack_208 = 8;
  uStack_1ef = (ulonglong)uStack_288;
  uStack_1e7 = 0;
  uStack_1e0 = 0;
  uStack_1df = 0;
  uStack_1d8 = 0;
  uStack_f1 = 1;
  uStack_248 = uVar20;
  pdb_1421a8e20(&lStack_328,&uStack_248);
  lStack_138 = lStack_2e8;
  auVar44 = *pauStack_300;
  pauVar33 = pauStack_300 + 1;
  uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar44[0xf] >> 7) << 0xf);
  lStack_128 = *param_5;
  lStack_118 = param_5[1];
  pauStack_120 = pauStack_320;
  plStack_108 = (longlong *)(uStack_318 & 0xffffffffffffff8);
  uStack_110 = (ulonglong)(((uint)uStack_318 & 7) << 3);
  pauStack_1c8 = pauStack_300;
LAB_1428ebbd8:
  uVar20 = uStack_1a0;
  fVar55 = _DAT_142e3c670;
  fVar56 = _DAT_142e37988;
  fVar49 = _DAT_142e3787c;
  lStack_130 = CONCAT71(lStack_130._1_7_,lStack_138 != 0);
  if (lStack_138 != 0) {
    if ((short)uVar18 == 0) {
      do {
        auVar44 = *pauVar33;
        pauStack_300 = pauStack_300 + -0x10;
        pauVar33 = pauVar33 + 1;
        uVar18 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar18 == 0);
    }
    iVar30 = 0;
    for (uVar32 = uVar18; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
      iVar30 = iVar30 + 1;
    }
    uVar18 = uVar18 - 1 & uVar18;
    lStack_138 = lStack_138 + -1;
    lVar19 = *(longlong *)((longlong)pauStack_300 + (-0x10 - (ulonglong)(uint)(iVar30 << 4)));
    pbStack_150 = *(byte **)((longlong)pauStack_300 + (-8 - (ulonglong)(uint)(iVar30 << 4)));
    plVar21 = (longlong *)0x0;
    while (plStack_108 != plVar21) {
      lVar41 = (longlong)plVar21 * 8;
      if (((((*(longlong *)(*pauStack_320 + (longlong)plVar21 * 8) == lVar19) ||
            (*(longlong *)(*pauStack_320 + (longlong)plVar21 * 8 + 8) == lVar19)) ||
           (*(longlong *)(pauStack_320[1] + (longlong)plVar21 * 8) == lVar19)) ||
          ((*(longlong *)(pauStack_320[1] + (longlong)plVar21 * 8 + 8) == lVar19 ||
           (*(longlong *)(pauStack_320[2] + (longlong)plVar21 * 8) == lVar19)))) ||
         ((*(longlong *)(pauStack_320[2] + (longlong)plVar21 * 8 + 8) == lVar19 ||
          ((*(longlong *)(pauStack_320[3] + (longlong)plVar21 * 8) == lVar19 ||
           (plVar21 = plVar21 + 1, *(longlong *)(pauStack_320[3] + lVar41 + 8) == lVar19))))))
      goto LAB_1428ebbd8;
    }
    if ((uStack_110 == 0) ||
       ((*(longlong *)(*pauStack_120 + (longlong)plStack_108 * 8) != lVar19 &&
        (((int)uStack_110 == 8 ||
         ((*(longlong *)(*pauStack_120 + (longlong)plStack_108 * 8 + 8) != lVar19 &&
          (((int)uStack_110 == 0x10 ||
           ((*(longlong *)(pauStack_120[1] + (longlong)plStack_108 * 8) != lVar19 &&
            (((int)uStack_110 == 0x18 ||
             ((*(longlong *)(pauStack_120[1] + (longlong)plStack_108 * 8 + 8) != lVar19 &&
              (((int)uStack_110 == 0x20 ||
               ((*(longlong *)(pauStack_120[2] + (longlong)plStack_108 * 8) != lVar19 &&
                (((int)uStack_110 == 0x28 ||
                 ((*(longlong *)(pauStack_120[2] + (longlong)plStack_108 * 8 + 8) != lVar19 &&
                  (((int)uStack_110 == 0x30 ||
                   ((*(longlong *)(pauStack_120[3] + (longlong)plStack_108 * 8) != lVar19 &&
                    ((int)uStack_110 == 0x38)))))))))))))))))))))))))))) {
      puVar24 = *(uint **)(lStack_128 + 0xf8);
      puVar39 = puVar24 + *(longlong *)(lStack_128 + 0x100);
      if (*(char *)(lStack_128 + 0x108) == '\0') {
        lVar22 = 0;
        lVar41 = 8;
        lVar29 = 0;
        uVar23 = 0;
        goto LAB_1428ebec0;
      }
      lVar41 = 0;
      lVar22 = 0;
      uVar32 = 0;
      do {
        if (uVar32 == (uint)lVar41) {
          do {
            if (puVar24 == puVar39) goto LAB_1428ebf70;
            uVar32 = *puVar24;
            puVar24 = puVar24 + 1;
            lVar41 = *(longlong *)
                      (*(longlong *)(lStack_118 + 0x1a0) + 0x10 + (ulonglong)uVar32 * 0x48);
          } while (lVar41 == 0);
          lVar22 = *(longlong *)(lStack_118 + 0x1a0) + (ulonglong)uVar32 * 0x48;
          if ((*(ulonglong *)(lStack_128 + 0x110) < *(ulonglong *)(lVar22 + 0x40)) &&
             (uVar23 = *(ulonglong *)
                        (*(longlong *)(lVar22 + 0x38) + *(ulonglong *)(lStack_128 + 0x110) * 8),
             uVar23 != 0)) {
            lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar23 * 0x30);
          }
          else {
            lVar22 = 0;
          }
          uVar32 = 0;
        }
        lVar29 = (ulonglong)uVar32 * 0x30;
        uVar32 = uVar32 + 1;
        fVar49 = *(float *)(lVar22 + 0x14 + lVar29) - *(float *)(pbStack_150 + 0x4c);
        fVar56 = *(float *)(lVar22 + 0x10 + lVar29) - *(float *)(pbStack_150 + 0x48);
        fVar55 = *(float *)(lVar22 + 0x18 + lVar29) - *(float *)(pbStack_150 + 0x50);
      } while (*(float *)(*(longlong *)(pbStack_150 + 0x38) + 0x60) + fVar14 <=
               SQRT(fVar55 * fVar55 + fVar49 * fVar49 + fVar56 * fVar56));
    }
    goto LAB_1428ebbd8;
  }
  uStack_180 = uStack_1b0;
  pbStack_140 = pbStack_1a8;
  uStack_148 = uStack_1a0;
  if (uStack_1a0 != 0) {
    pbStack_150 = pbStack_1a8 + uStack_1a0 * 0x10;
    lStack_118 = *plStack_2a0;
    lStack_138 = plStack_2a0[3];
    pbVar42 = pbStack_1a8;
    do {
      uVar7 = *(undefined8 *)pbVar42;
      puVar25 = *(ulonglong **)(pbVar42 + 8);
      pdb_1428ed340(&uStack_248,(longlong)puVar25 + 0x54);
      uVar23 = uStack_240;
      uVar20 = uStack_248;
      if ((byte)puVar25[6] < 3) {
        fVar59 = (float)pdb_140e02880(&uStack_198);
        fVar45 = (fVar14 - fVar59) * 0.0;
        fVar59 = fVar59 * fVar15;
      }
      else {
        if ((byte)puVar25[6] == 6) {
          fVar59 = (float)pdb_140e02880(&uStack_198);
          fVar45 = (fVar14 - fVar59) * fVar49;
        }
        else {
          if (4 < uStack_148) {
            fVar59 = (float)pdb_140e02880(&uStack_198);
            fVar45 = (fVar14 - fVar59) * fVar56;
            fVar59 = fVar59 * fVar55;
            goto LAB_1428ec230;
          }
          fVar59 = (float)pdb_140e02880(&uStack_198);
          fVar45 = (fVar14 - fVar59) * fVar15;
        }
        fVar59 = fVar59 * fVar56;
      }
LAB_1428ec230:
      pcVar40 = (char *)puVar25[7];
      cVar16 = pcVar40[0x66];
      uVar36 = puVar25[6];
      uVar13 = puVar25[0xc];
      plStack_108 = (longlong *)pdb_140ed5970(lStack_118);
      lVar19 = plStack_100[2];
      if ((ulonglong)(*plStack_100 - lVar19) < 0x28) {
        pdb_142d7f1b0(plStack_100,lVar19,0x28,1,1);
      }
      lVar41 = plStack_100[1];
      *(code **)(lVar41 + lVar19) = pdb_1428d96c0;
      *(longlong **)(lVar41 + 8 + lVar19) = plStack_108;
      *(undefined8 *)(lVar41 + 0x10 + lVar19) = uVar7;
      *(float *)(lVar41 + 0x18 + lVar19) = fVar59 + fVar45;
      *(undefined4 *)(lVar41 + 0x1c + lVar19) = 0;
      *(int *)(lVar41 + 0x20 + lVar19) = (int)uVar13;
      *(char *)(lVar41 + 0x24 + lVar19) = cVar16;
      *(bool *)(lVar41 + 0x25 + lVar19) = (byte)uVar36 < 3;
      plStack_100[2] = lVar19 + 0x28;
      uStack_288 = (uint7)plStack_108;
      uStack_281 = (undefined1)((ulonglong)plStack_108 >> 0x38);
      uStack_280 = (undefined7)lStack_118;
      uStack_279 = (undefined1)((ulonglong)lStack_118 >> 0x38);
      uStack_278 = SUB87(plStack_2d0,0);
      uStack_271 = (undefined1)((ulonglong)plStack_2d0 >> 0x38);
      uStack_270 = SUB87(plStack_2c8,0);
      uStack_269 = (undefined1)((ulonglong)plStack_2c8 >> 0x38);
      lStack_268 = lStack_138;
      cVar16 = (byte)puVar25[6] - 3;
      if ((byte)puVar25[6] < 3) {
        cVar16 = '\x01';
      }
      if (1 < (byte)(cVar16 - 1U)) {
        uStack_178 = *(ulonglong *)(pcVar40 + 0x40);
        uStack_170 = *(undefined8 *)(pcVar40 + 0x48);
        uStack_168 = *(undefined8 *)(pcVar40 + 0x50);
        uStack_160 = *(undefined8 *)(pcVar40 + 0x58);
        uVar20 = *puVar25;
        lVar19 = uVar20 - 2;
        if (uVar20 < 2) {
          lVar19 = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x0001428ec35f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1435b2af0 + *(int *)(&UNK_1435b2af0 + lVar19 * 4)))
                  (*(undefined8 *)(pcVar40 + 0x18),uVar20,
                   &UNK_1435b2af0 + *(int *)(&UNK_1435b2af0 + lVar19 * 4));
        return;
      }
      if (*pcVar40 == '\0') {
        if ((byte)puVar25[6] < 2) {
          uVar7 = *(undefined8 *)(pcVar40 + 0x38);
          uStack_240 = CONCAT44(uStack_240._4_4_,(int)puVar25[10]);
          uStack_248 = puVar25[9];
          pdb_14007ee60();
          uStack_170 = CONCAT44(uStack_170._4_4_,(undefined4)uStack_240);
          uStack_178 = uStack_248;
          lVar19 = plStack_100[2];
          if ((ulonglong)(*plStack_100 - lVar19) < 0x78) {
            pdb_142d7f1b0(plStack_100,lVar19,0x78,1,1);
          }
          lVar41 = plStack_100[1];
          *(code **)(lVar41 + lVar19) = pdb_1428d94d0;
          puVar2 = (ulonglong *)(lVar41 + 8 + lVar19);
          *puVar2 = uVar20;
          puVar2[1] = uVar23;
          *(ulonglong *)(lVar41 + 0x18 + lVar19) = uStack_178;
          *(undefined4 *)(lVar41 + 0x20 + lVar19) = (undefined4)uStack_170;
          *(undefined8 *)(lVar41 + 0x24 + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x2c + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x38 + lVar19) = 0;
          *(undefined8 *)(lVar41 + 0x40 + lVar19) = uVar7;
          *(undefined1 *)(lVar41 + 0x48 + lVar19) = 2;
        }
        else if ((byte)puVar25[6] == 5) {
          uVar7 = *(undefined8 *)(pcVar40 + 0x38);
          uStack_240 = CONCAT44(uStack_240._4_4_,(int)puVar25[10]);
          uStack_248 = puVar25[9];
          pdb_14007ee60();
          uStack_170 = CONCAT44(uStack_170._4_4_,(undefined4)uStack_240);
          uStack_178 = uStack_248;
          lVar19 = plStack_100[2];
          if ((ulonglong)(*plStack_100 - lVar19) < 0x78) {
            pdb_142d7f1b0(plStack_100,lVar19,0x78,1,1);
          }
          lVar41 = plStack_100[1];
          *(code **)(lVar41 + lVar19) = pdb_1428d9720;
          puVar2 = (ulonglong *)(lVar41 + 8 + lVar19);
          *puVar2 = uVar20;
          puVar2[1] = uVar23;
          *(ulonglong *)(lVar41 + 0x18 + lVar19) = uStack_178;
          *(undefined4 *)(lVar41 + 0x20 + lVar19) = (undefined4)uStack_170;
          *(undefined8 *)(lVar41 + 0x24 + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x2c + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x38 + lVar19) = 0;
          *(undefined8 *)(lVar41 + 0x40 + lVar19) = uVar7;
          *(undefined1 *)(lVar41 + 0x48 + lVar19) = 8;
        }
        else {
          uVar7 = *(undefined8 *)(pcVar40 + 0x38);
          uStack_240 = CONCAT44(uStack_240._4_4_,(int)puVar25[10]);
          uStack_248 = puVar25[9];
          pdb_14007ee60();
          uStack_170 = CONCAT44(uStack_170._4_4_,(undefined4)uStack_240);
          uStack_178 = uStack_248;
          lVar19 = plStack_100[2];
          if ((ulonglong)(*plStack_100 - lVar19) < 0x78) {
            pdb_142d7f1b0(plStack_100,lVar19,0x78,1,1);
          }
          lVar41 = plStack_100[1];
          *(code **)(lVar41 + lVar19) = pdb_1428d9200;
          puVar2 = (ulonglong *)(lVar41 + 8 + lVar19);
          *puVar2 = uVar20;
          puVar2[1] = uVar23;
          *(ulonglong *)(lVar41 + 0x18 + lVar19) = uStack_178;
          *(undefined4 *)(lVar41 + 0x20 + lVar19) = (undefined4)uStack_170;
          *(undefined8 *)(lVar41 + 0x24 + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x2c + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x38 + lVar19) = 0;
          *(undefined8 *)(lVar41 + 0x40 + lVar19) = uVar7;
          *(undefined1 *)(lVar41 + 0x48 + lVar19) = 0x14;
        }
        *(undefined1 *)(lVar41 + 0x58 + lVar19) = 0;
        *(longlong **)(lVar41 + 0x68 + lVar19) = plStack_108;
        lVar19 = lVar19 + 0x78;
        plStack_100[2] = lVar19;
      }
      else {
        uVar7 = *(undefined8 *)(pcVar40 + 8);
        uStack_248 = pdb_140df4400(&UNK_1435b2928,0x16);
        pcVar40 = pcVar40 + 0x38;
        cVar17 = pdb_140df4430(pcVar40,&uStack_248);
        if (cVar17 == '\0') {
          uStack_248 = pdb_140df4400(&UNK_1435b293e,0x17);
          cVar17 = pdb_140df4430(pcVar40,&uStack_248);
          if (cVar17 != '\0') goto LAB_1428ec500;
          uStack_248 = pdb_140df4400(&UNK_1435b2955,0x19);
          cVar17 = pdb_140df4430(pcVar40,&uStack_248);
          if (cVar17 != '\0') goto LAB_1428ec500;
          uStack_248 = pdb_140df4400(&UNK_1435b296e,0x18);
          cVar17 = pdb_140df4430(pcVar40,&uStack_248);
          if (cVar17 != '\0') goto LAB_1428ec500;
          uVar8 = *(undefined8 *)pcVar40;
          uStack_240 = CONCAT44(uStack_240._4_4_,(int)puVar25[10]);
          uStack_248 = puVar25[9];
          pdb_14007ee60();
          uStack_170 = CONCAT44(uStack_170._4_4_,(undefined4)uStack_240);
          uStack_178 = uStack_248;
          lVar19 = plStack_100[2];
          if ((ulonglong)(*plStack_100 - lVar19) < 0x88) {
            pdb_142d7f1b0(plStack_100,lVar19,0x88,1,1);
          }
          lVar41 = plStack_100[1];
          *(code **)(lVar41 + lVar19) = pdb_1428d9290;
          puVar2 = (ulonglong *)(lVar41 + 8 + lVar19);
          *puVar2 = uVar20;
          puVar2[1] = uVar23;
          *(ulonglong *)(lVar41 + 0x18 + lVar19) = uStack_178;
          *(undefined4 *)(lVar41 + 0x20 + lVar19) = (undefined4)uStack_170;
          *(undefined8 *)(lVar41 + 0x24 + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x2c + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x38 + lVar19) = 0;
          *(undefined8 *)(lVar41 + 0x40 + lVar19) = uVar8;
          *(undefined1 *)(lVar41 + 0x48 + lVar19) = 0x14;
        }
        else {
LAB_1428ec500:
          uVar8 = *(undefined8 *)pcVar40;
          uStack_240 = CONCAT44(uStack_240._4_4_,(int)puVar25[10]);
          uStack_248 = puVar25[9];
          pdb_14007ee60();
          uStack_170 = CONCAT44(uStack_170._4_4_,(undefined4)uStack_240);
          uStack_178 = uStack_248;
          lVar19 = plStack_100[2];
          if ((ulonglong)(*plStack_100 - lVar19) < 0x88) {
            pdb_142d7f1b0(plStack_100,lVar19,0x88,1,1);
          }
          lVar41 = plStack_100[1];
          *(code **)(lVar41 + lVar19) = pdb_1428d9290;
          puVar2 = (ulonglong *)(lVar41 + 8 + lVar19);
          *puVar2 = uVar20;
          puVar2[1] = uVar23;
          *(ulonglong *)(lVar41 + 0x18 + lVar19) = uStack_178;
          *(undefined4 *)(lVar41 + 0x20 + lVar19) = (undefined4)uStack_170;
          *(undefined8 *)(lVar41 + 0x24 + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x2c + lVar19) = 0;
          *(undefined4 *)(lVar41 + 0x38 + lVar19) = 0;
          *(undefined8 *)(lVar41 + 0x40 + lVar19) = uVar8;
          *(undefined1 *)(lVar41 + 0x48 + lVar19) = 0x15;
        }
        *(undefined8 *)(lVar41 + 0x58 + lVar19) = uVar7;
        *(undefined1 *)(lVar41 + 0x68 + lVar19) = 0;
        *(longlong **)(lVar41 + 0x78 + lVar19) = plStack_108;
        lVar19 = lVar19 + 0x88;
        plStack_100[2] = lVar19;
      }
      if ((cVar16 == '\x01') && (uVar36 = puVar25[6], (char)uVar36 != '\x02')) {
        if ((ulonglong)(*plStack_100 - lVar19) < 0x48) {
          pdb_142d7f1b0(plStack_100,lVar19,0x48,1,1);
        }
        lVar41 = plStack_100[1];
        *(code **)(lVar41 + lVar19) = pdb_1428d95f0;
        puVar2 = (ulonglong *)(lVar41 + 8 + lVar19);
        *puVar2 = uVar20;
        puVar2[1] = uVar23;
        *(char *)(lVar41 + 0x18 + lVar19) = (char)uVar36;
        *(undefined1 *)(lVar41 + 0x28 + lVar19) = 0;
        *(longlong **)(lVar41 + 0x38 + lVar19) = plStack_108;
        lVar41 = lVar19 + 0x48;
        plStack_100[2] = lVar41;
        uVar6 = *(undefined4 *)((longlong)puVar25 + 0x34);
        if ((ulonglong)(*plStack_100 - lVar41) < 0x18) {
          pdb_142d7f1b0(plStack_100,lVar41,0x18,1,1);
        }
        lVar41 = plStack_100[1];
        *(code **)(lVar41 + 0x48 + lVar19) = pdb_1428d97b0;
        *(longlong **)(lVar41 + 0x50 + lVar19) = plStack_108;
        *(undefined4 *)(lVar41 + 0x58 + lVar19) = uVar6;
        *(undefined1 *)(lVar41 + 0x5c + lVar19) = 0;
        plStack_100[2] = lVar19 + 0x60;
      }
      pbVar42 = pbVar42 + 0x10;
    } while (pbVar42 != pbStack_150);
  }
  if (uStack_180 != 0) {
    pub_1406abac0(pbStack_140,uStack_180 << 4,8);
  }
  if (lStack_328 != 0) {
    pub_1406abac0((byte *)pauStack_120,lStack_328 << 3,8);
  }
  if (uStack_2f8 != 0) {
    lVar19 = uStack_2f8 * 0x10 + 0x10;
    uVar20 = uStack_2f8 + lVar19 + 0x11;
    if (uVar20 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_1c8 - lVar19),uVar20,0x10);
    }
  }
  if (lStack_258 == 0) {
    return;
  }
  plVar21 = (longlong *)pdb_140e97000();
  if ((char)plVar21[0xd] != '\x01') goto LAB_1428ecbce;
  do {
    if (*plVar21 == 0) {
      *plVar21 = -1;
      plStack_108 = plVar21;
      pdb_140e95370(plVar21 + 1,uStack_250);
      *plStack_108 = *plStack_108 + 1;
      return;
    }
LAB_1428ecbc2:
    plVar21 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_1428ecbce:
    plVar21 = (longlong *)pdb_142e16b00(plVar21,0);
  } while (plVar21 != (longlong *)0x0);
LAB_1428ecbf6:
  pdb_142dc7890(&UNK_14328b3f8);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

