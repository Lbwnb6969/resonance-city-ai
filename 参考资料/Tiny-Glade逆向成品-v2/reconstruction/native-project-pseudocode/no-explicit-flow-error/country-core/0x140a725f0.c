// VA 0x140a725f0, PDB extent 6803 bytes
// country_core::systems::ivy::ivy_leaf_spawner::ivy_leaf_spawner
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_leaf_spawner.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::ivy_leaf_spawner::ivy_leaf_spawner
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_leaf_spawner.rs
   Extent: 6803 */

void pdb_140a725f0(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4,
                  undefined8 *param_5,longlong *param_6,ulonglong *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  char cVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined *puVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  longlong *plVar29;
  byte bVar30;
  uint uVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  ulonglong uVar35;
  ushort uVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong *puVar40;
  ulonglong uVar41;
  ulonglong *puVar42;
  ulonglong *puVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  undefined1 auVar52 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar58;
  undefined1 auVar57 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulonglong uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  ulonglong **ppuStack_238;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined8 uStack_210;
  float fStack_208;
  ulonglong *puStack_200;
  undefined4 *puStack_1f8;
  undefined8 *puStack_1f0;
  ulonglong *puStack_1e8;
  undefined8 uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong *puStack_1c0;
  ulonglong *puStack_1b8;
  undefined4 *puStack_1b0;
  longlong lStack_1a8;
  ulonglong *puStack_1a0;
  code *pcStack_198;
  ulonglong uStack_190;
  undefined8 *puStack_188;
  ulonglong uStack_180;
  longlong lStack_178;
  ulonglong *puStack_170;
  float fStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined8 *puStack_158;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  float fStack_138;
  ulonglong uStack_130;
  ulonglong *puStack_128;
  undefined1 uStack_119;
  ulonglong *puStack_118;
  undefined4 *puStack_110;
  ulonglong *puStack_108;
  undefined4 uStack_fc;
  ulonglong *puStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar23 = pdb_140e94b40();
  if (cVar23 == '\0') {
    lStack_178 = 0;
    if (*(char *)(*param_7 + 0x20) != '\0') goto LAB_140a72877;
    return;
  }
  puVar40 = (ulonglong *)&UNK_1430419c2;
  puVar42 = (ulonglong *)0x3e;
  uVar33 = 0x3e;
  lVar24 = pdb_140a76ad0(&UNK_1430419c2);
  if (lVar24 == 1) {
    if (0x3e < uVar33) {
LAB_140a73c6c:
      pdb_142dc8070(&UNK_1430419c2,0x3e,0);
LAB_140a73c8c:
      pdb_142dc8070(&UNK_1430419c2,0x3e);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar40 = (ulonglong *)&UNK_1430419c2;
    uVar25 = pdb_140a76ad0(&UNK_1430419c2);
    if ((uVar25 & 1) != 0) {
      if (0x3e < uVar33 + 2) goto LAB_140a73c8c;
      puVar42 = (ulonglong *)(0x3c - uVar33);
      puVar40 = (ulonglong *)(&UNK_1430419c4 + uVar33);
    }
  }
  puVar26 = &UNK_1430413bc;
  puVar43 = (ulonglong *)&UNK_143041385;
  do {
    pbVar1 = puVar26 + -1;
    uVar31 = (uint)(char)*pbVar1;
    puStack_108 = param_4;
    puStack_f8 = puVar42;
    if ((int)uVar31 < 0) {
      bVar30 = puVar26[-2];
      if ((char)bVar30 < -0x40) {
        bVar5 = puVar26[-3];
        if ((char)bVar5 < -0x40) {
          pbVar2 = puVar26 + -4;
          puVar26 = puVar26 + -4;
          uVar31 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar26 = puVar26 + -3;
          uVar31 = bVar5 & 0xf;
        }
        uVar31 = bVar30 & 0x3f | uVar31 << 6;
      }
      else {
        puVar26 = puVar26 + -2;
        uVar31 = bVar30 & 0x1f;
      }
      uVar31 = (uint)(*pbVar1 & 0x3f) | uVar31 << 6;
      if (uVar31 != 0x5c) goto LAB_140a72789;
LAB_140a727c2:
      if ((undefined *)0x37 < puVar26 + -0x143041384) {
        pdb_142dc8070(&UNK_143041385,0x37,puVar26 + -0x143041384,0x37,&UNK_143041a68);
        goto LAB_140a73c6c;
      }
      puVar42 = (ulonglong *)(0x36 - (longlong)(puVar26 + -0x143041385));
      puVar43 = (ulonglong *)(puVar26 + 1);
      goto LAB_140a727ec;
    }
    puVar26 = puVar26 + -1;
    if (uVar31 == 0x5c) goto LAB_140a727c2;
LAB_140a72789:
    if (uVar31 == 0x2f) goto LAB_140a727c2;
  } while (puVar26 != &UNK_143041385);
  puVar42 = (ulonglong *)0x37;
LAB_140a727ec:
  puVar27 = (ulonglong *)pdb_140e97000();
  if ((char)puVar27[0xd] != '\x01') goto LAB_140a73be1;
LAB_140a727fb:
  puVar32 = puStack_f8;
  puVar34 = param_1;
  if (*puVar27 == 0) {
    *puVar27 = 0xffffffffffffffff;
    puStack_f8 = puVar27;
    puVar42 = (ulonglong *)pdb_140e94f10(puVar27 + 1,puVar40,puVar32,puVar43,puVar42,1,0);
    puVar34 = puStack_108;
    *puStack_f8 = *puStack_f8 + 1;
    lStack_178 = 1;
    param_4 = puStack_108;
    puStack_170 = puVar42;
    if (*(char *)(*param_7 + 0x20) != '\0') {
LAB_140a72877:
      puStack_1c0 = (ulonglong *)*param_1;
      uVar33 = param_1[1];
      uVar25 = *puStack_1c0;
      uVar35 = 0;
      uVar28 = uVar25 - *(ulonglong *)(uVar33 + 0x18);
      if (uVar25 < *(ulonglong *)(uVar33 + 0x18)) {
        uVar28 = uVar35;
      }
      uVar38 = uVar25 - *(ulonglong *)(uVar33 + 0x38);
      if (uVar25 < *(ulonglong *)(uVar33 + 0x38)) {
        uVar38 = uVar35;
      }
      puVar27 = (ulonglong *)(uVar28 * 0x20 + *(longlong *)(uVar33 + 8));
      uVar25 = *(ulonglong *)(uVar33 + 0x10) - uVar28;
      if (*(ulonglong *)(uVar33 + 0x10) < uVar28) {
        puVar27 = (ulonglong *)0x8;
        uVar25 = uVar35;
      }
      puVar32 = (ulonglong *)(uVar38 * 0x20 + *(longlong *)(uVar33 + 0x28));
      uVar28 = *(ulonglong *)(uVar33 + 0x30) - uVar38;
      if (*(ulonglong *)(uVar33 + 0x30) < uVar38) {
        puVar32 = (ulonglong *)0x8;
        uVar28 = uVar35;
      }
      *puStack_1c0 = (*(longlong *)(uVar33 + 0x40) - uVar28) - uVar25;
      dVar22 = _DAT_143040ef8;
      dVar21 = _DAT_143040ef0;
      param_7 = puVar27 + uVar25 * 4;
      puStack_1b8 = puVar32 + uVar28 * 4;
      uStack_160 = *(uint *)((longlong)param_2 + 0x1c);
      puStack_158 = (undefined8 *)*param_2;
      puStack_1f8 = (undefined4 *)param_2[2];
      uStack_1e0 = *param_5;
      uStack_fc = *(undefined4 *)((longlong)param_4 + 0x1c);
      puStack_118 = (ulonglong *)*param_4;
      puStack_110 = (undefined4 *)param_4[2];
      puVar34 = (ulonglong *)(ulonglong)uStack_160;
      puStack_188 = (undefined8 *)*param_3;
      puStack_1b0 = (undefined4 *)param_3[2];
      uStack_15c = *(undefined4 *)((longlong)param_3 + 0x1c);
      lStack_1a8 = *param_6;
      puStack_1f0 = puStack_158 + 4;
      puVar40 = _DAT_143ca8e90;
      puVar43 = puStack_1b8;
      puVar42 = puStack_1c0;
      fVar54 = _DAT_143040ee0;
      fVar56 = _DAT_143040ee4;
      fVar45 = _DAT_142e36f34;
      fVar64 = _DAT_143040ee8;
      fVar58 = _DAT_142f684a8;
      fVar46 = _DAT_142e3798c;
      puStack_200 = param_7;
LAB_140a72a9e:
      do {
        param_3 = (undefined8 *)0x7fefffffffffffff;
        if ((puVar27 == (ulonglong *)0x0) || (puVar27 == puStack_200)) {
          if ((puVar32 == (ulonglong *)0x0) || (puVar32 == puVar43)) goto LAB_140a73af1;
          puStack_f8 = puVar32 + 4;
          puStack_108 = (ulonglong *)0x0;
          puStack_128 = puVar32;
        }
        else {
          puStack_108 = puVar27 + 4;
          puStack_128 = puVar27;
          puStack_f8 = puVar32;
        }
        *puVar42 = *puVar42 + 1;
        pauStack_270 = (undefined1 (*) [16])*puStack_188;
        puStack_260 = *pauStack_270 + puStack_188[1] + 1;
        auVar52 = *pauStack_270;
        uStack_250 = puStack_188[3];
        uStack_290 = 0;
        uStack_280 = 0;
        pauStack_268 = pauStack_270 + 1;
        puStack_258 = (undefined *)
                      CONCAT62(puStack_258._2_6_,
                               ~((ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar52[0xf] >> 7) << 0xf));
        pdb_1415ee280(&puStack_1a0,&uStack_290);
        if (uStack_190 < 10000) {
          if (puStack_1a0 != (ulonglong *)0x0) {
            pub_1406abac0((byte *)pcStack_198,(longlong)puStack_1a0 << 3,8);
          }
          *puStack_1f8 = (int)puVar34;
          auVar52._8_8_ = 0;
          auVar52._0_8_ = puStack_158[6];
          uVar33 = SUB168(auVar52 * ZEXT816(0x4385df649fccf645),0);
          uVar25 = puStack_158[7] * 0x4385df649fccf645 +
                   SUB168(auVar52 * ZEXT816(0x4385df649fccf645),8) +
                   puStack_158[6] * 0x2360ed051fc65da4;
          puStack_158[6] = uVar33;
          puStack_158[7] = uVar25;
          uVar33 = uVar25 ^ uVar33;
          bVar30 = (byte)(uVar25 >> 0x3a);
          puVar27 = puStack_108;
          puVar32 = puStack_f8;
          if (fVar46 <= (float)(((uint)(uVar33 >> bVar30) | (uint)(uVar33 << 0x40 - bVar30)) >> 9 |
                               0x3f800000) + fVar45) {
            uStack_290 = puStack_128[3];
            uStack_180 = uStack_290;
            if (puStack_158[3] != 0) {
              uVar33 = pdb_1400af0a0(puStack_1f0,&uStack_290);
              param_7 = (ulonglong *)*puStack_158;
              bVar30 = (byte)(uVar33 >> 0x39);
              auVar52 = ZEXT216(CONCAT11(bVar30,bVar30));
              auVar52 = pshuflw(auVar52,auVar52,0);
              lVar24 = 0;
              do {
                uVar33 = uVar33 & puStack_158[1];
                auVar4 = *(undefined1 (*) [16])((longlong)param_7 + uVar33);
                auVar57[0] = -(auVar4[0] == auVar52[0]);
                auVar57[1] = -(auVar4[1] == auVar52[1]);
                auVar57[2] = -(auVar4[2] == auVar52[2]);
                auVar57[3] = -(auVar4[3] == auVar52[3]);
                auVar57[4] = -(auVar4[4] == auVar52[4]);
                auVar57[5] = -(auVar4[5] == auVar52[5]);
                auVar57[6] = -(auVar4[6] == auVar52[6]);
                auVar57[7] = -(auVar4[7] == auVar52[7]);
                auVar57[8] = -(auVar4[8] == auVar52[0]);
                auVar57[9] = -(auVar4[9] == auVar52[1]);
                auVar57[10] = -(auVar4[10] == auVar52[2]);
                auVar57[0xb] = -(auVar4[0xb] == auVar52[3]);
                auVar57[0xc] = -(auVar4[0xc] == auVar52[4]);
                auVar57[0xd] = -(auVar4[0xd] == auVar52[5]);
                auVar57[0xe] = -(auVar4[0xe] == auVar52[6]);
                auVar57[0xf] = -(auVar4[0xf] == auVar52[7]);
                uVar36 = (ushort)(SUB161(auVar57 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar57[0xf] >> 7) << 0xf;
                uVar31 = (uint)uVar36;
                while (uVar36 != 0) {
                  uVar19 = 0;
                  for (uVar20 = uVar31; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
                    uVar19 = uVar19 + 1;
                  }
                  uVar25 = uVar19 + uVar33 & puStack_158[1];
                  if (uStack_180 == param_7[uVar25 * -0x13 + -0x13]) {
                    puVar27 = param_7 + uVar25 * -0x13;
                    uVar33 = puVar27[-0xf];
                    if (uVar33 == 0) {
                      lVar24 = 0;
                      uVar25 = 0;
LAB_140a72d80:
                      lVar37 = 0;
                    }
                    else {
                      uVar25 = puVar27[-0x12];
                      uVar28 = 0;
                      if (uVar25 <= puVar27[-0x10]) {
                        uVar28 = uVar25;
                      }
                      lVar24 = puVar27[-0x10] - uVar28;
                      lVar37 = uVar33 - (uVar25 - lVar24);
                      if (uVar33 < uVar25 - lVar24 || lVar37 == 0) {
                        uVar25 = lVar24 + uVar33;
                        goto LAB_140a72d80;
                      }
                    }
                    uVar28 = puVar27[-0x11];
                    lVar39 = uVar25 * 0x28 + lVar24 * -0x28;
                    puVar32 = (ulonglong *)(uVar28 + lVar24 * 0x28 + -0x28);
                    goto LAB_140a72dc0;
                  }
                  uVar36 = (ushort)(uVar31 - 1) & (ushort)uVar31;
                  uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar36);
                }
                auVar55[0] = -(auVar4[0] == -1);
                auVar55[1] = -(auVar4[1] == -1);
                auVar55[2] = -(auVar4[2] == -1);
                auVar55[3] = -(auVar4[3] == -1);
                auVar55[4] = -(auVar4[4] == -1);
                auVar55[5] = -(auVar4[5] == -1);
                auVar55[6] = -(auVar4[6] == -1);
                auVar55[7] = -(auVar4[7] == -1);
                auVar55[8] = -(auVar4[8] == -1);
                auVar55[9] = -(auVar4[9] == -1);
                auVar55[10] = -(auVar4[10] == -1);
                auVar55[0xb] = -(auVar4[0xb] == -1);
                auVar55[0xc] = -(auVar4[0xc] == -1);
                auVar55[0xd] = -(auVar4[0xd] == -1);
                auVar55[0xe] = -(auVar4[0xe] == -1);
                auVar55[0xf] = -(auVar4[0xf] == -1);
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
                uVar33 = uVar33 + lVar24 + 0x10;
                lVar24 = lVar24 + 0x10;
              } while( true );
            }
            puVar27 = puStack_108;
            puVar32 = puStack_f8;
            if (1 < *puVar40) {
              puStack_1a0 = puStack_128 + 3;
              pcStack_198 = pdb_140f72a40;
              uStack_290 = 0;
              puStack_288 = &UNK_143041441;
              uStack_280 = 0x2c;
              uStack_278 = 0;
              pauStack_270 = (undefined1 (*) [16])&UNK_14304134d;
              pauStack_268 = (undefined1 (*) [16])0x37;
              puStack_260 = (undefined *)0x2;
              puStack_258 = &UNK_143041441;
              uStack_250 = 0x2c;
              uStack_248 = 0x7000000001;
              puStack_240 = &UNK_1430413f0;
              ppuStack_238 = &puStack_1a0;
              pdb_140f332f0(&uStack_119);
              puVar27 = puStack_108;
              puVar32 = puStack_f8;
            }
          }
        }
        else {
          puVar27 = puStack_108;
          puVar32 = puStack_f8;
          if (puStack_1a0 != (ulonglong *)0x0) {
            pub_1406abac0((byte *)pcStack_198,(longlong)puStack_1a0 << 3,8);
            puVar27 = puStack_108;
            puVar32 = puStack_f8;
          }
        }
      } while( true );
    }
    plVar29 = (longlong *)pdb_140e97000();
    if (((char)plVar29[0xd] == '\x01') ||
       (plVar29 = (longlong *)pdb_142d8ec20(plVar29,0), plVar29 != (longlong *)0x0)) {
      param_7 = param_1;
      if (*plVar29 == 0) {
        *plVar29 = -1;
        puStack_f8 = (ulonglong *)plVar29;
        pdb_140e95370(plVar29 + 1,puVar42);
        goto LAB_140a73b69;
      }
      goto LAB_140a73bd5;
    }
    goto LAB_140a73c1e;
  }
  goto LAB_140a73bd5;
LAB_140a73af1:
  if (lStack_178 == 0) {
    return;
  }
  plVar29 = (longlong *)pdb_140e97000();
  if (((char)plVar29[0xd] != '\x01') &&
     (plVar29 = (longlong *)pdb_142d8ec20(plVar29,0), plVar29 == (longlong *)0x0))
  goto LAB_140a73c1e;
  if (*plVar29 == 0) {
    *plVar29 = -1;
    puStack_f8 = (ulonglong *)plVar29;
    pdb_140e95370(plVar29 + 1,puStack_170);
LAB_140a73b69:
    *puStack_f8 = *puStack_f8 + 1;
    return;
  }
LAB_140a73bd5:
  puVar27 = (ulonglong *)pdb_142dc8090(&UNK_143326a50);
  param_1 = puVar34;
LAB_140a73be1:
  puVar27 = (ulonglong *)pdb_142d8ec20(puVar27,0);
  if (puVar27 == (ulonglong *)0x0) {
LAB_140a73c1e:
    pdb_142dc7890(&UNK_143326860);
LAB_140a73c2b:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430413c0);
  }
  goto LAB_140a727fb;
  while( true ) {
    param_2 = puVar32 + 5;
    lVar39 = lVar39 + -0x28;
    puVar3 = puVar32 + 5;
    puVar32 = param_2;
    if (*puVar3 == puStack_128[1]) break;
LAB_140a72dc0:
    if (lVar39 == 0) {
      lVar37 = lVar37 * 0x28;
      puVar32 = (ulonglong *)(uVar28 - 0x28);
      goto LAB_140a72df0;
    }
  }
  goto LAB_140a72e0a;
  while( true ) {
    param_2 = puVar32 + 5;
    lVar37 = lVar37 + -0x28;
    puVar3 = puVar32 + 5;
    puVar32 = param_2;
    if (*puVar3 == puStack_128[1]) break;
LAB_140a72df0:
    if (lVar37 == 0) goto LAB_140a73c2b;
  }
LAB_140a72e0a:
  if (uVar33 == 0) {
    lVar24 = 0;
    uVar25 = 0;
  }
  else {
    uVar25 = puVar27[-0x12];
    uVar35 = 0;
    if (uVar25 <= puVar27[-0x10]) {
      uVar35 = uVar25;
    }
    lVar24 = puVar27[-0x10] - uVar35;
    lVar37 = uVar33 - (uVar25 - lVar24);
    if (uVar25 - lVar24 <= uVar33 && lVar37 != 0) goto LAB_140a72e50;
    uVar25 = uVar33 + lVar24;
  }
  lVar37 = 0;
LAB_140a72e50:
  lVar39 = uVar25 * 0x28 + lVar24 * -0x28;
  puVar32 = (ulonglong *)(uVar28 + lVar24 * 0x28 + -0x28);
  while (puStack_1e8 = puVar27, lVar39 != 0) {
    param_7 = puVar32 + 5;
    lVar39 = lVar39 + -0x28;
    puVar3 = puVar32 + 5;
    puVar32 = param_7;
    if (*puVar3 == puStack_128[2]) goto LAB_140a72eba;
  }
  lVar37 = lVar37 * 0x28;
  puVar27 = (ulonglong *)(uVar28 - 0x28);
  do {
    if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430413d8);
    }
    param_7 = puVar27 + 5;
    lVar37 = lVar37 + -0x28;
    puVar32 = puVar27 + 5;
    puVar27 = param_7;
  } while (*puVar32 != puStack_128[2]);
LAB_140a72eba:
  fVar44 = (float)pdb_1414a2190(uStack_1e0,
                                *(float *)(param_2 + 1) + *(float *)(param_2 + 1) + fVar54,
                                *(float *)((longlong)param_2 + 0xc) +
                                *(float *)((longlong)param_2 + 0xc) + fVar56,
                                *(float *)(param_2 + 2) + *(float *)(param_2 + 2) + fVar64);
  puVar27 = puStack_108;
  puVar32 = puStack_f8;
  if (fVar58 < fVar44) {
    fVar65 = (*(float *)((longlong)param_7 + 0x14) + *(float *)((longlong)param_2 + 0x14)) *
             _DAT_142e36f50;
    fVar56 = ((float)param_2[3] + (float)param_7[3]) * _DAT_142e36f60;
    fVar58 = ((float)(param_2[3] >> 0x20) + (float)(param_7[3] >> 0x20)) * _UNK_142e36f64;
    fVar54 = _DAT_142e36f28 / SQRT(fVar58 * fVar58 + fVar65 * fVar65 + fVar56 * fVar56);
    fVar65 = fVar65 * fVar54;
    fVar56 = fVar54 * fVar56;
    fVar58 = fVar54 * fVar58;
    *puStack_110 = uStack_fc;
    fStack_14c = fVar65;
    fStack_148 = fVar56;
    fStack_144 = fVar58;
    fVar45 = (float)pdb_141b1e5a0(puStack_118);
    fVar45 = fVar45 * _DAT_142e3c608;
    fVar54 = fVar54 * _DAT_142e3c608;
    fVar60 = *(float *)(param_7 + 2) - *(float *)(param_2 + 2);
    fVar64 = (float)param_2[1];
    fVar44 = (float)param_7[1] - fVar64;
    fVar46 = (float)(param_2[1] >> 0x20);
    fVar63 = (float)(param_7[1] >> 0x20) - fVar46;
    fStack_208 = _DAT_142e36f28 / SQRT(fVar63 * fVar63 + fVar44 * fVar44 + fVar60 * fVar60);
    fVar44 = fStack_208 * fVar44;
    fVar63 = fStack_208 * fVar63;
    fStack_208 = fStack_208 * fVar60;
    uStack_210 = CONCAT44(fVar63,fVar44);
    fStack_218 = fVar54 * fStack_208 +
                 (fVar56 * fVar44 - fVar63 * fVar65) * fVar45 + *(float *)(param_2 + 2);
    fStack_220 = fVar54 * fVar44 + fVar45 * (fVar58 * fVar63 - fStack_208 * fVar56) + fVar64;
    fStack_21c = fVar54 * fVar63 + fVar45 * (fVar65 * fStack_208 - fVar44 * fVar58) + fVar46;
    uStack_140 = CONCAT44(fStack_148,fStack_14c);
    fStack_138 = fStack_144;
    *puStack_110 = uStack_fc;
    uVar33 = puStack_118[1];
    uVar25 = *puStack_118;
    do {
      uVar38 = uVar25;
      uVar35 = uVar33;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar38;
      uVar25 = SUB168(auVar4 * ZEXT816(0x4385df649fccf645),0);
      uVar33 = uVar35 * 0x4385df649fccf645 +
               SUB168(auVar4 * ZEXT816(0x4385df649fccf645),8) + uVar38 * 0x2360ed051fc65da4;
      uVar28 = uVar25 ^ uVar33;
      bVar30 = (byte)(uVar33 >> 0x3a);
      dVar47 = (double)pub_142e32a80((double)((uVar28 >> bVar30 | uVar28 << 0x40 - bVar30) >> 0xc |
                                             0x3ff0000000000000) + dVar21);
    } while (0x7fefffffffffffff < (ulonglong)ABS(SQRT(dVar47 * dVar22)));
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar38;
    uStack_1d0 = SUB168(auVar7 * ZEXT816(0x529ed9eb20e0ae99),0);
    uStack_1d8 = uVar35 * 0x529ed9eb20e0ae99 +
                 SUB168(auVar7 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar38 * 0x17bce35bdf69743c;
    *puStack_118 = uStack_1d0;
    puStack_118[1] = uStack_1d8;
    fVar45 = (float)uStack_140;
    *puStack_110 = uStack_fc;
    uVar33 = puStack_118[1];
    uVar25 = *puStack_118;
    do {
      uVar38 = uVar25;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar38;
      uVar25 = SUB168(auVar8 * ZEXT816(0x4385df649fccf645),0);
      uVar35 = uVar33 * 0x4385df649fccf645 +
               SUB168(auVar8 * ZEXT816(0x4385df649fccf645),8) + uVar38 * 0x2360ed051fc65da4;
      uVar28 = uVar25 ^ uVar35;
      bVar30 = (byte)(uVar35 >> 0x3a);
      uStack_130 = uVar33;
      dVar48 = (double)pub_142e32a80((double)((uVar28 >> bVar30 | uVar28 << 0x40 - bVar30) >> 0xc |
                                             0x3ff0000000000000) + dVar21);
      uVar33 = uVar35;
    } while (0x7fefffffffffffff < (ulonglong)ABS(SQRT(dVar48 * dVar22)));
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar38;
    uStack_1c8 = SUB168(auVar9 * ZEXT816(0x529ed9eb20e0ae99),0);
    uStack_130 = uStack_130 * 0x529ed9eb20e0ae99 +
                 SUB168(auVar9 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar38 * 0x17bce35bdf69743c;
    *puStack_118 = uStack_1c8;
    puStack_118[1] = uStack_130;
    fStack_164 = fStack_138;
    *puStack_110 = uStack_fc;
    uVar33 = *puStack_118;
    uVar25 = puStack_118[1];
    do {
      uVar38 = uVar25;
      uVar35 = uVar33;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar35;
      uVar33 = SUB168(auVar10 * ZEXT816(0x4385df649fccf645),0);
      uVar25 = uVar38 * 0x4385df649fccf645 +
               SUB168(auVar10 * ZEXT816(0x4385df649fccf645),8) + uVar35 * 0x2360ed051fc65da4;
      uVar28 = uVar33 ^ uVar25;
      bVar30 = (byte)(uVar25 >> 0x3a);
      dVar49 = (double)pub_142e32a80((double)((uVar28 >> bVar30 | uVar28 << 0x40 - bVar30) >> 0xc |
                                             0x3ff0000000000000) + dVar21);
      dVar51 = _DAT_143040f00;
    } while (0x7fefffffffffffff < (ulonglong)ABS(SQRT(dVar49 * dVar22)));
    bVar30 = (byte)(uStack_1d8 >> 0x3a);
    dVar50 = (double)pub_142e32b20(((double)(((uStack_1d0 ^ uStack_1d8) >> bVar30 |
                                             (uStack_1d0 ^ uStack_1d8) << 0x40 - bVar30) >> 0xc |
                                            0x3ff0000000000000) + dVar21) * _DAT_143040f00);
    bVar30 = (byte)(uStack_130 >> 0x3a);
    dVar51 = (double)pub_142e32b20(((double)(((uStack_1c8 ^ uStack_130) >> bVar30 |
                                             (uStack_1c8 ^ uStack_130) << 0x40 - bVar30) >> 0xc |
                                            0x3ff0000000000000) + dVar21) * dVar51);
    puVar40 = puStack_118;
    fVar64 = _DAT_142e36f28;
    fVar46 = (float)(dVar51 * SQRT(dVar48 * dVar22));
    fVar54 = 0.0;
    if (0.0 <= fVar46) {
      fVar54 = fVar46;
    }
    fVar46 = _DAT_142e36f28;
    if (fVar54 <= _DAT_142e36f28) {
      fVar46 = fVar54;
    }
    fVar54 = (fVar46 - (_DAT_142e36f28 - fVar46)) * _DAT_142e36f50 + fStack_164;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar35;
    uVar33 = SUB168(auVar11 * ZEXT816(0x529ed9eb20e0ae99),0);
    uVar25 = uVar38 * 0x529ed9eb20e0ae99 +
             uVar35 * 0x17bce35bdf69743c + SUB168(auVar11 * ZEXT816(0x529ed9eb20e0ae99),8);
    *puStack_118 = uVar33;
    puStack_118[1] = uVar25;
    uVar33 = uVar33 ^ uVar25;
    bVar30 = (byte)(uVar25 >> 0x3a);
    dVar48 = (double)pub_142e32b20(((double)((uVar33 >> bVar30 | uVar33 << 0x40 - bVar30) >> 0xc |
                                            0x3ff0000000000000) + dVar21) * _DAT_143040f00);
    auVar53._0_4_ = (float)(SQRT(dVar47 * dVar22) * dVar50);
    auVar53._4_4_ = (float)(SQRT(dVar49 * dVar22) * dVar48);
    auVar53._8_8_ = 0;
    auVar52 = maxps(ZEXT816(0),auVar53);
    auVar52 = minps(_DAT_142e37950,auVar52);
    fVar45 = fVar45 + (auVar52._0_4_ - ((float)DAT_142e37950 - auVar52._0_4_)) * _DAT_142e36f60;
    uStack_140._4_4_ =
         uStack_140._4_4_ + (auVar52._4_4_ - (DAT_142e37950._4_4_ - auVar52._4_4_)) * _UNK_142e36f64
    ;
    fVar64 = fVar64 / SQRT(uStack_140._4_4_ * uStack_140._4_4_ + fVar45 * fVar45 + fVar54 * fVar54);
    uStack_140 = CONCAT44(fVar64 * uStack_140._4_4_,fVar64 * fVar45);
    fStack_138 = fVar64 * fVar54;
    *puStack_110 = uStack_fc;
    uVar33 = puVar40[1];
    uVar25 = *puVar40;
    do {
      uVar38 = uVar25;
      uVar35 = uVar33;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar38;
      uVar25 = SUB168(auVar12 * ZEXT816(0x4385df649fccf645),0);
      uVar33 = uVar35 * 0x4385df649fccf645 +
               SUB168(auVar12 * ZEXT816(0x4385df649fccf645),8) + uVar38 * 0x2360ed051fc65da4;
      uVar28 = uVar25 ^ uVar33;
      bVar30 = (byte)(uVar33 >> 0x3a);
      dVar47 = (double)pub_142e32a80((double)((uVar28 >> bVar30 | uVar28 << 0x40 - bVar30) >> 0xc |
                                             0x3ff0000000000000) + dVar21);
    } while (0x7fefffffffffffff < (ulonglong)ABS(SQRT(dVar47 * dVar22)));
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar38;
    uStack_130 = SUB168(auVar13 * ZEXT816(0x529ed9eb20e0ae99),0);
    uVar28 = uVar35 * 0x529ed9eb20e0ae99 +
             SUB168(auVar13 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar38 * 0x17bce35bdf69743c;
    *puStack_118 = uStack_130;
    puStack_118[1] = uVar28;
    *puStack_110 = uStack_fc;
    fVar45 = _DAT_142e36f34;
    uVar33 = *puStack_118;
    uVar25 = puStack_118[1];
    do {
      uVar41 = uVar25;
      uVar38 = uVar33;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar38;
      uVar33 = SUB168(auVar14 * ZEXT816(0x4385df649fccf645),0);
      uVar25 = uVar41 * 0x4385df649fccf645 +
               SUB168(auVar14 * ZEXT816(0x4385df649fccf645),8) + uVar38 * 0x2360ed051fc65da4;
      uVar35 = uVar33 ^ uVar25;
      bVar30 = (byte)(uVar25 >> 0x3a);
      dVar47 = (double)pub_142e32a80((double)((uVar35 >> bVar30 | uVar35 << 0x40 - bVar30) >> 0xc |
                                             0x3ff0000000000000) + dVar21);
    } while (0x7fefffffffffffff < (ulonglong)ABS(SQRT(dVar47 * dVar22)));
    bVar30 = (byte)(uVar28 >> 0x3a);
    pub_142e32b20(((double)(((uStack_130 ^ uVar28) >> bVar30 |
                            (uStack_130 ^ uVar28) << 0x40 - bVar30) >> 0xc | 0x3ff0000000000000) +
                  dVar21) * _DAT_143040f00);
    fVar54 = _DAT_142e36f28;
    fVar64 = (float)pub_142e32b30();
    fVar46 = (float)pub_142e329e0();
    puVar40 = puStack_118;
    fVar60 = fVar46 * fVar46;
    fVar59 = fVar64 * fVar64 + 0.0;
    fVar44 = fVar58 * 0.0 + fVar56 * fVar64 + fVar65 * 0.0;
    fVar44 = fVar44 + fVar44;
    fVar46 = fVar46 + fVar46;
    fVar61 = fVar46 * (fVar64 * fVar58 - fVar56 * 0.0) +
             fVar44 * 0.0 + (fVar60 - (fVar59 + 0.0)) * fVar65;
    fVar62 = fVar46 * (fVar56 * 0.0 - fVar65 * fVar64) +
             fVar44 * 0.0 + (fVar60 - (fVar59 + 0.0)) * fVar58;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar38;
    uVar33 = SUB168(auVar15 * ZEXT816(0x529ed9eb20e0ae99),0);
    uVar25 = uVar41 * 0x529ed9eb20e0ae99 +
             SUB168(auVar15 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar38 * 0x17bce35bdf69743c;
    *puStack_118 = uVar33;
    puStack_118[1] = uVar25;
    uVar33 = uVar25 ^ uVar33;
    bVar30 = (byte)(uVar25 >> 0x3a);
    dVar48 = (double)pub_142e32b20(((double)((uVar33 >> bVar30 | uVar33 << 0x40 - bVar30) >> 0xc |
                                            0x3ff0000000000000) + dVar21) * _DAT_143040f00);
    fVar63 = (float)((uint)(float)(dVar48 * SQRT(dVar47 * dVar22)) & _DAT_142e377e0) /
             _DAT_142e37838;
    fStack_148 = fVar54;
    if (fVar63 <= fVar54) {
      fStack_148 = fVar63;
    }
    fStack_148 = (fVar46 * (fVar65 * 0.0 - fVar58 * 0.0) +
                 fVar44 * fVar64 + (fVar60 - (fVar59 + 0.0)) * fVar56) - fStack_148;
    fVar54 = fVar54 / SQRT(fVar62 * fVar62 + fStack_148 * fStack_148 + fVar61 * fVar61);
    fStack_14c = fVar61 * fVar54;
    fStack_148 = fStack_148 * fVar54;
    fStack_144 = fVar54 * fVar62;
    *puStack_110 = uStack_fc;
    param_7 = (ulonglong *)*puVar40;
    uVar33 = puVar40[1];
    do {
      uVar25 = uVar33;
      puVar40 = param_7;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = puVar40;
      param_7 = SUB168(auVar16 * ZEXT816(0x4385df649fccf645),0);
      uVar33 = uVar25 * 0x4385df649fccf645 +
               SUB168(auVar16 * ZEXT816(0x4385df649fccf645),8) +
               (longlong)puVar40 * 0x2360ed051fc65da4;
      bVar30 = (byte)(uVar33 >> 0x3a);
      dVar47 = (double)pub_142e32a80((double)((((ulonglong)param_7 ^ uVar33) >> bVar30 |
                                              ((ulonglong)param_7 ^ uVar33) << 0x40 - bVar30) >> 0xc
                                             | 0x3ff0000000000000) + dVar21);
      param_2 = puStack_118;
    } while (0x7fefffffffffffff < (ulonglong)ABS(SQRT(dVar47 * dVar22)));
    auVar17._8_8_ = 0;
    auVar17._0_8_ = puVar40;
    uVar33 = SUB168(auVar17 * ZEXT816(0x529ed9eb20e0ae99),0);
    uVar25 = uVar25 * 0x529ed9eb20e0ae99 +
             SUB168(auVar17 * ZEXT816(0x529ed9eb20e0ae99),8) +
             (longlong)puVar40 * 0x17bce35bdf69743c;
    *puStack_118 = uVar33;
    puStack_118[1] = uVar25;
    uVar33 = uVar25 ^ uVar33;
    bVar30 = (byte)(uVar25 >> 0x3a);
    dVar48 = (double)pub_142e32b20(((double)((uVar33 >> bVar30 | uVar33 << 0x40 - bVar30) >> 0xc |
                                            0x3ff0000000000000) + dVar21) * _DAT_143040f00);
    fVar56 = (float)((uint)(float)(dVar48 * SQRT(dVar47 * dVar22)) & _DAT_142e377e0) /
             _DAT_142e3788c;
    fVar54 = _DAT_142e36f28;
    if (fVar56 <= _DAT_142e36f28) {
      fVar54 = fVar56;
    }
    fVar56 = (_DAT_142e36f28 - fVar54) * _DAT_142e3c670;
    fVar54 = fVar54 * _DAT_142e37990;
    *puStack_1b0 = uStack_15c;
    uVar33 = puStack_128[1];
    uVar25 = puStack_128[2];
    *puStack_110 = uStack_fc;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *param_2;
    uVar28 = SUB168(auVar18 * ZEXT816(0x4385df649fccf645),0);
    uVar35 = param_2[1] * 0x4385df649fccf645 +
             SUB168(auVar18 * ZEXT816(0x4385df649fccf645),8) + *param_2 * 0x2360ed051fc65da4;
    *param_2 = uVar28;
    param_2[1] = uVar35;
    uVar28 = uVar35 ^ uVar28;
    bVar30 = (byte)(uVar35 >> 0x3a);
    pdb_140a5e970(puStack_188,&fStack_220,&fStack_14c,&uStack_140,&uStack_210,uStack_180,uVar33,
                  uVar25,fVar54 + fVar56,
                  ((float)(((uint)(uVar28 >> bVar30) | (uint)(uVar28 << 0x40 - bVar30)) >> 9 |
                          0x3f800000) + fVar45) * _DAT_142e37988 + 0.0,
                  *(undefined4 *)(lStack_1a8 + 0x2c),puStack_1e8[-6]);
    puVar34 = (ulonglong *)(ulonglong)uStack_160;
    puVar27 = puStack_108;
    puVar32 = puStack_f8;
    puVar40 = _DAT_143ca8e90;
    puVar43 = puStack_1b8;
    puVar42 = puStack_1c0;
    fVar54 = _DAT_143040ee0;
    fVar56 = _DAT_143040ee4;
    fVar64 = _DAT_143040ee8;
    fVar58 = _DAT_142f684a8;
    fVar46 = _DAT_142e3798c;
  }
  goto LAB_140a72a9e;
}

