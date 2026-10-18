// VA 0x140910ec0, PDB extent 4070 bytes
// country_core::systems::prefab::hot_reload_prefabs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::prefab::hot_reload_prefabs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
   Extent: 4070 */

void pdb_140910ec0(undefined8 *param_1,ulonglong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char cVar4;
  ulonglong *puVar5;
  undefined1 (*pauVar6) [16];
  code *pcVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined1 *puVar24;
  ushort uVar25;
  int iVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  ulonglong *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint *puVar36;
  longlong lVar37;
  longlong *plVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  uint uVar44;
  undefined8 *puVar45;
  undefined1 (*pauVar46) [16];
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  uint uVar51;
  bool bVar52;
  byte bVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_248;
  undefined4 *puStack_240;
  undefined8 uStack_238;
  undefined4 *puStack_230;
  undefined8 uStack_228;
  ulonglong uStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined1 (*pauStack_208) [16];
  longlong lStack_200;
  undefined4 *puStack_1f8;
  undefined8 *puStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined1 (*pauStack_1d8) [16];
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  ulonglong *puStack_1b0;
  undefined1 (*pauStack_1a8) [16];
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  ulonglong *puStack_180;
  undefined1 (**ppauStack_170) [16];
  ulonglong uStack_168;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong *plStack_150;
  ulonglong *puStack_148;
  undefined8 *puStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  uint *puStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined4 uStack_ec;
  undefined1 (*pauStack_e8) [16];
  ulonglong *puStack_e0;
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 (***pppauStack_c8) [16];
  code *pcStack_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  char cStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar33 = param_2;
  puStack_1f0 = param_4;
  plVar27 = (longlong *)pdb_140f3bda0();
  if ((char)plVar27[2] == '\x01') {
    lStack_188 = *plVar27;
    puVar33 = (ulonglong *)plVar27[1];
  }
  else {
    lStack_188 = pdb_140f4fd10();
    *plVar27 = lStack_188;
    plVar27[1] = (longlong)puVar33;
    *(undefined1 *)(plVar27 + 2) = 1;
  }
  *plVar27 = lStack_188 + 1;
  lVar40 = _UNK_14301f4b8;
  uVar34 = _DAT_14301f4b0;
  uVar35 = _UNK_14301f4a8;
  pauVar49 = _DAT_14301f4a0;
  uStack_198 = _DAT_14301f4b0;
  lStack_190 = _UNK_14301f4b8;
  pauStack_1a8 = _DAT_14301f4a0;
  uStack_1a0 = _UNK_14301f4a8;
  puStack_180 = puVar33;
  plVar27 = (longlong *)pdb_140f3bda0();
  plStack_150 = param_3;
  puStack_148 = param_2;
  puStack_140 = param_1;
  if ((char)plVar27[2] == '\x01') {
    lStack_1b8 = *plVar27;
    puVar33 = (ulonglong *)plVar27[1];
  }
  else {
    lStack_1b8 = pdb_140f4fd10();
    *plVar27 = lStack_1b8;
    plVar27[1] = (longlong)puVar33;
    *(undefined1 *)(plVar27 + 2) = 1;
  }
  *plVar27 = lStack_1b8 + 1;
  uStack_1c8 = uVar34;
  lStack_1c0 = lVar40;
  pauStack_1d8 = pauVar49;
  uStack_1d0 = uVar35;
  puVar5 = (ulonglong *)*param_8;
  lVar40 = param_8[1];
  uVar35 = *puVar5;
  uVar31 = 0;
  uVar34 = uVar35 - *(ulonglong *)(lVar40 + 0x18);
  if (uVar35 < *(ulonglong *)(lVar40 + 0x18)) {
    uVar34 = uVar31;
  }
  uVar41 = uVar35 - *(ulonglong *)(lVar40 + 0x38);
  if (uVar35 < *(ulonglong *)(lVar40 + 0x38)) {
    uVar41 = uVar31;
  }
  puVar47 = (undefined8 *)(uVar34 * 0x38 + *(longlong *)(lVar40 + 8));
  uVar35 = *(ulonglong *)(lVar40 + 0x10) - uVar34;
  if (*(ulonglong *)(lVar40 + 0x10) < uVar34) {
    puVar47 = (undefined8 *)0x8;
    uVar35 = uVar31;
  }
  puVar28 = (undefined8 *)(uVar41 * 0x38 + *(longlong *)(lVar40 + 0x28));
  uVar34 = *(ulonglong *)(lVar40 + 0x30) - uVar41;
  if (*(ulonglong *)(lVar40 + 0x30) < uVar41) {
    puVar28 = (undefined8 *)0x8;
    uVar34 = uVar31;
  }
  *puVar5 = (*(longlong *)(lVar40 + 0x40) - uVar34) - uVar35;
  pauStack_e8 = (undefined1 (*) [16])(puVar28 + uVar34 * 7);
  puVar48 = puVar47;
  puStack_1b0 = puVar33;
  do {
    while ((puVar48 != (undefined8 *)0x0 && (puVar48 != puVar47 + uVar35 * 7))) {
      puVar45 = puVar48 + 7;
      *puVar5 = *puVar5 + 1;
      if (lStack_190 == 0) goto LAB_140911106;
LAB_140911030:
      pauVar49 = (undefined1 (*) [16])*puVar48;
      lVar40 = puVar48[1];
      auVar54 = *pauVar49;
      lVar39 = puVar48[3];
      uVar34 = lVar39 + 1U >> 1;
      if (uStack_198 < uVar34) {
        pdb_142d93660(&pauStack_1a8,uVar34,&lStack_188,1);
      }
      pppauStack_c8 = (undefined1 (***) [16])(*pauVar49 + lVar40 + 1);
      ppauStack_170 = &pauStack_1a8;
      uStack_128 = &ppauStack_170;
      pauStack_d0 = pauVar49 + 1;
      pcStack_c0 = (code *)CONCAT62(pcStack_c0._2_6_,
                                    ~((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar54[0xf] >> 7) << 0xf));
      pauStack_d8 = pauVar49;
      pdb_140ca8670(&pauStack_d8,lVar39,&uStack_128);
      puVar48 = puVar45;
    }
    if ((puVar28 == (undefined8 *)0x0) || ((undefined1 (*) [16])puVar28 == pauStack_e8)) break;
    puVar1 = puVar28 + 7;
    puVar45 = (undefined8 *)0x0;
    *puVar5 = *puVar5 + 1;
    puVar48 = puVar28;
    puVar28 = puVar1;
    if (lStack_190 != 0) goto LAB_140911030;
LAB_140911106:
    pdb_140ca2c10(&pauStack_1a8);
    lStack_188 = puVar48[4];
    puStack_180 = (ulonglong *)puVar48[5];
    puVar48 = puVar45;
  } while( true );
  puVar33 = (ulonglong *)*param_9;
  lVar40 = param_9[1];
  uVar35 = *puVar33;
  uVar31 = 0;
  uVar34 = uVar35 - *(ulonglong *)(lVar40 + 0x18);
  if (uVar35 < *(ulonglong *)(lVar40 + 0x18)) {
    uVar34 = uVar31;
  }
  uVar41 = uVar35 - *(ulonglong *)(lVar40 + 0x38);
  if (uVar35 < *(ulonglong *)(lVar40 + 0x38)) {
    uVar41 = uVar31;
  }
  pauVar49 = (undefined1 (*) [16])(uVar34 * 0x38 + *(longlong *)(lVar40 + 8));
  uVar35 = *(ulonglong *)(lVar40 + 0x10);
  uVar43 = uVar35 - uVar34;
  if (uVar35 < uVar34) {
    uVar43 = uVar31;
  }
  if (uVar35 < uVar34) {
    pauVar49 = (undefined1 (*) [16])0x8;
  }
  pauVar29 = (undefined1 (*) [16])(uVar41 * 0x38 + *(longlong *)(lVar40 + 0x28));
  uVar35 = *(ulonglong *)(lVar40 + 0x30) - uVar41;
  if (*(ulonglong *)(lVar40 + 0x30) < uVar41) {
    pauVar29 = (undefined1 (*) [16])0x8;
    uVar35 = uVar31;
  }
  *puVar33 = (*(longlong *)(lVar40 + 0x40) - uVar35) - uVar43;
  pauStack_e8 = (undefined1 (*) [16])(uVar35 * 0x38 + (longlong)pauVar29);
  pauVar50 = pauVar49;
  do {
    while ((pauVar50 != (undefined1 (*) [16])0x0 &&
           (pauVar50 != (undefined1 (*) [16])(uVar43 * 0x38 + (longlong)pauVar49)))) {
      pauVar46 = (undefined1 (*) [16])(pauVar50[3] + 8);
      *puVar33 = *puVar33 + 1;
      if (lStack_1c0 == 0) goto LAB_140911296;
LAB_1409111c0:
      pauVar6 = *(undefined1 (**) [16])*pauVar50;
      lVar40 = *(longlong *)(*pauVar50 + 8);
      auVar54 = *pauVar6;
      lVar39 = *(longlong *)(pauVar50[1] + 8);
      uVar35 = lVar39 + 1U >> 1;
      if (uStack_1c8 < uVar35) {
        pdb_142d952b0(&pauStack_1d8,uVar35,&lStack_1b8);
      }
      pppauStack_c8 = (undefined1 (***) [16])(*pauVar6 + lVar40 + 1);
      ppauStack_170 = &pauStack_1d8;
      uStack_128 = &ppauStack_170;
      pauStack_d0 = pauVar6 + 1;
      pcStack_c0 = (code *)CONCAT62(pcStack_c0._2_6_,
                                    ~((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar54[0xf] >> 7) << 0xf));
      pauStack_d8 = pauVar6;
      pdb_140ca7f30(&pauStack_d8,lVar39,&uStack_128);
      pauVar50 = pauVar46;
    }
    if ((pauVar29 == (undefined1 (*) [16])0x0) || (pauVar29 == pauStack_e8)) break;
    pauVar6 = pauVar29 + 3;
    pauVar46 = (undefined1 (*) [16])0x0;
    *puVar33 = *puVar33 + 1;
    pauVar50 = pauVar29;
    pauVar29 = (undefined1 (*) [16])(*pauVar6 + 8);
    if (lStack_1c0 != 0) goto LAB_1409111c0;
LAB_140911296:
    pdb_140ca3270(&pauStack_1d8,pauVar50);
    lStack_1b8 = *(longlong *)pauVar50[2];
    puStack_1b0 = *(ulonglong **)(pauVar50[2] + 8);
    pauVar50 = pauVar46;
  } while( true );
  lStack_f8 = *param_7;
  lStack_130 = param_7[1];
  uStack_15c = *(undefined4 *)((longlong)param_7 + 0x14);
  puStack_b0 = *(uint **)(lStack_f8 + 0xf8);
  puStack_110 = puStack_b0 + *(longlong *)(lStack_f8 + 0x100);
  uStack_ec = *(undefined4 *)((longlong)param_5 + 0x1c);
  puStack_e0 = (ulonglong *)*param_5;
  puStack_1f8 = (undefined4 *)param_5[2];
  uStack_228 = *puStack_140;
  uStack_220 = *puStack_148;
  plStack_150 = (longlong *)*plStack_150;
  puStack_148 = (ulonglong *)param_10[3];
  pauVar49 = (undefined1 (*) [16])*param_10;
  puVar24 = (undefined1 *)param_10[1];
  puStack_140 = (undefined8 *)param_10[2];
  cStack_91 = *(char *)(lStack_f8 + 0x108);
  uStack_158 = *(undefined4 *)((longlong)puStack_1f0 + 0x1c);
  uStack_248 = *puStack_1f0;
  puStack_240 = (undefined4 *)puStack_1f0[2];
  uStack_154 = *(undefined4 *)((longlong)param_6 + 0x1c);
  uStack_238 = *param_6;
  puStack_230 = (undefined4 *)param_6[2];
  lStack_1e8 = 8;
  lStack_100 = 0;
  lStack_1e0 = 8;
  lStack_a0 = 0;
  lStack_108 = 0;
  uStack_a8 = 0;
LAB_140911400:
  do {
    if (cStack_91 == '\0') {
      if ((int)uStack_a8 == (int)lStack_108) {
        if (puStack_b0 == puStack_110) {
LAB_140911c01:
          if (uStack_1d0 != 0) {
            uVar35 = uStack_1d0 + 0x10 & 0xfffffffffffffff0;
            uVar34 = uStack_1d0 + uVar35 + 0x11;
            if (uVar34 != 0) {
              pub_1406abac0((byte *)((longlong)pauStack_1d8 - uVar35),uVar34,0x10);
            }
          }
          uVar35 = uStack_1a0;
          if (uStack_1a0 != 0) {
            if (lStack_190 != 0) {
              auVar54 = *pauStack_1a8;
              pauVar49 = pauStack_1a8 + 1;
              uVar51 = ~(uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar54[0xf] >> 7) << 0xf);
              pauVar29 = pauStack_1a8;
              lVar40 = lStack_190;
              do {
                if ((short)uVar51 == 0) {
                  do {
                    auVar54 = *pauVar49;
                    pauVar29 = pauVar29 + -0x10;
                    pauVar49 = pauVar49 + 1;
                    uVar51 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar54[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar51 == 0);
                }
                iVar26 = 0;
                for (uVar44 = uVar51; (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x80000000) {
                  iVar26 = iVar26 + 1;
                }
                plVar27 = *(longlong **)
                           ((longlong)pauVar29 + (-0x10 - (ulonglong)(uint)(iVar26 << 4)));
                LOCK();
                *plVar27 = *plVar27 + -1;
                UNLOCK();
                if (*plVar27 == 0) {
                  pdb_1406ed6a0((longlong)pauVar29 + (-0x10 - (ulonglong)(uint)(iVar26 << 4)));
                }
                uVar51 = uVar51 - 1 & uVar51;
                lVar40 = lVar40 + -1;
              } while (lVar40 != 0);
            }
            lVar40 = uVar35 * 0x10 + 0x10;
            uVar35 = uVar35 + lVar40 + 0x11;
            if (uVar35 != 0) {
              pub_1406abac0((byte *)((longlong)pauStack_1a8 - lVar40),uVar35,0x10);
            }
          }
          return;
        }
        puVar36 = puStack_b0;
        while( true ) {
          lVar40 = *(longlong *)
                    (*(longlong *)(lStack_130 + 0x100) + 0x58 + (ulonglong)*puVar36 * 0xa0);
          if (lVar40 != 0) break;
          puVar36 = puVar36 + 1;
          if (puVar36 == puStack_110) goto LAB_140911c01;
        }
        lVar30 = *(longlong *)(lStack_130 + 0x100) + (ulonglong)*puVar36 * 0xa0;
        uVar35 = (ulonglong)*(uint *)(lVar30 + 0x94);
        lVar39 = *(longlong *)(lStack_130 + 0x1a0);
        lVar42 = *(longlong *)(lVar39 + 0x18 + uVar35 * 0x48);
        lVar37 = *(longlong *)(lVar39 + 0x38 + uVar35 * 0x48);
        if ((*(ulonglong *)(lStack_f8 + 0x118) < *(ulonglong *)(lVar39 + 0x40 + uVar35 * 0x48)) &&
           (uVar35 = *(ulonglong *)(lVar37 + *(ulonglong *)(lStack_f8 + 0x118) * 8), uVar35 != 0)) {
          lStack_a0 = *(longlong *)(lVar42 + 0x10 + ~uVar35 * 0x30);
        }
        else {
          lStack_a0 = 0;
        }
        lVar39 = ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_f8 + 0x110) * 8) * 0x30;
        lStack_100 = *(longlong *)(lVar42 + 0x10 + lVar39);
        lStack_138 = *(longlong *)(lVar42 + 0x28 + lVar39);
        puStack_b0 = puVar36 + 1;
        lStack_1e8 = *(longlong *)(lVar30 + 0x50);
        uStack_a8 = 0;
        uVar35 = 0;
        lStack_108 = lVar40;
      }
      else {
        uVar35 = uStack_a8 & 0xffffffff;
      }
      puVar47 = (undefined8 *)(lStack_1e8 + uVar35 * 0x10);
      uVar35 = (ulonglong)~*(uint *)(lStack_1e8 + 8 + uVar35 * 0x10);
    }
    else {
      bVar52 = (int)uStack_a8 == (int)lStack_108;
      if (bVar52) {
        if (puStack_b0 == puStack_110) goto LAB_140911c01;
        puVar36 = puStack_b0;
        while( true ) {
          lVar40 = *(longlong *)
                    (*(longlong *)(lStack_130 + 0x1a0) + 0x10 + (ulonglong)*puVar36 * 0x48);
          if (lVar40 != 0) break;
          puVar36 = puVar36 + 1;
          if (puVar36 == puStack_110) goto LAB_140911c01;
        }
        lVar39 = *(longlong *)(lStack_130 + 0x1a0) + (ulonglong)*puVar36 * 0x48;
        lVar42 = *(longlong *)(lVar39 + 0x18);
        if ((*(ulonglong *)(lStack_f8 + 0x118) < *(ulonglong *)(lVar39 + 0x40)) &&
           (uVar35 = *(ulonglong *)
                      (*(longlong *)(lVar39 + 0x38) + *(ulonglong *)(lStack_f8 + 0x118) * 8),
           uVar35 != 0)) {
          lStack_a0 = *(longlong *)(lVar42 + 0x10 + ~uVar35 * 0x30);
        }
        else {
          lStack_a0 = 0;
        }
        lVar37 = ~*(ulonglong *)
                   (*(longlong *)(lVar39 + 0x38) + *(longlong *)(lStack_f8 + 0x110) * 8) * 0x30;
        lStack_100 = *(longlong *)(lVar42 + 0x10 + lVar37);
        lStack_138 = *(longlong *)(lVar42 + 0x28 + lVar37);
        puStack_b0 = puVar36 + 1;
        lStack_1e0 = *(longlong *)(lVar39 + 8);
        uStack_a8 = 0;
        lStack_108 = lVar40;
      }
      uVar35 = uStack_a8 & 0xffffffff;
      puVar47 = (undefined8 *)(lStack_1e0 + uVar35 * 8);
    }
    plVar27 = (longlong *)(uVar35 * 0x58 + lStack_100);
    puVar2 = (undefined4 *)(lStack_138 + uVar35 * 4);
    puVar28 = (undefined8 *)(uVar35 * 0x30 + lStack_a0);
    pauStack_e8 = (undefined1 (*) [16])*puVar47;
    if ((int)pauStack_e8 == 0) goto LAB_140911c01;
    uStack_a8 = (ulonglong)((int)uStack_a8 + 1);
    uVar35 = uStack_218;
    lVar40 = lStack_200;
    if (lStack_190 != 0) {
      uVar31 = pdb_1417c49b0(&lStack_188,plVar27 + 9);
      puVar33 = puStack_e0;
      bVar53 = (byte)(uVar31 >> 0x39);
      auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
      auVar54 = pshuflw(auVar54,auVar54,0);
      lVar39 = plVar27[9];
      lVar42 = plVar27[10];
      lVar37 = 0;
      uVar34 = uStack_1a0;
      pauVar29 = pauStack_1a8;
      while( true ) {
        pcVar3 = *pauVar29 + (uVar31 & uVar34);
        cVar4 = *pcVar3;
        cVar9 = pcVar3[1];
        cVar10 = pcVar3[2];
        cVar11 = pcVar3[3];
        cVar12 = pcVar3[4];
        cVar13 = pcVar3[5];
        cVar14 = pcVar3[6];
        cVar15 = pcVar3[7];
        cVar16 = pcVar3[8];
        cVar17 = pcVar3[9];
        cVar18 = pcVar3[10];
        cVar19 = pcVar3[0xb];
        cVar20 = pcVar3[0xc];
        cVar21 = pcVar3[0xd];
        cVar22 = pcVar3[0xe];
        cVar23 = pcVar3[0xf];
        auVar55[0] = -(cVar4 == auVar54[0]);
        auVar55[1] = -(cVar9 == auVar54[1]);
        auVar55[2] = -(cVar10 == auVar54[2]);
        auVar55[3] = -(cVar11 == auVar54[3]);
        auVar55[4] = -(cVar12 == auVar54[4]);
        auVar55[5] = -(cVar13 == auVar54[5]);
        auVar55[6] = -(cVar14 == auVar54[6]);
        auVar55[7] = -(cVar15 == auVar54[7]);
        auVar55[8] = -(cVar16 == auVar54[0]);
        auVar55[9] = -(cVar17 == auVar54[1]);
        auVar55[10] = -(cVar18 == auVar54[2]);
        auVar55[0xb] = -(cVar19 == auVar54[3]);
        auVar55[0xc] = -(cVar20 == auVar54[4]);
        auVar55[0xd] = -(cVar21 == auVar54[5]);
        auVar55[0xe] = -(cVar22 == auVar54[6]);
        auVar55[0xf] = -(cVar23 == auVar54[7]);
        uVar25 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf
        ;
        uVar51 = (uint)uVar25;
        uVar31 = uVar31 & uVar34;
        uVar35 = uStack_218;
        lVar40 = lStack_200;
        while (lStack_200 = lVar37, uStack_218 = uVar31, uVar25 != 0) {
          uVar44 = 0;
          for (uVar8 = uVar51; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar44 = uVar44 + 1;
          }
          uVar35 = uVar44 + uStack_218 & uVar34;
          uStack_210 = uVar34;
          pauStack_208 = pauVar29;
          if ((lVar42 == *(longlong *)(pauVar29[-1 - uVar35] + 8)) &&
             (iVar26 = pub_142e32750(lVar39 + 0x10,*(longlong *)pauVar29[-1 - uVar35] + 0x10,lVar42)
             , iVar26 == 0)) goto LAB_1409118b0;
          uVar25 = (ushort)(uVar51 - 1) & (ushort)uVar51;
          uVar51 = CONCAT22((short)(uVar51 - 1 >> 0x10),uVar25);
          uVar31 = uStack_218;
          uVar34 = uStack_210;
          pauVar29 = pauStack_208;
          lVar37 = lStack_200;
          uVar35 = uStack_218;
          lVar40 = lStack_200;
        }
        auVar58[0] = -(cVar4 == -1);
        auVar58[1] = -(cVar9 == -1);
        auVar58[2] = -(cVar10 == -1);
        auVar58[3] = -(cVar11 == -1);
        auVar58[4] = -(cVar12 == -1);
        auVar58[5] = -(cVar13 == -1);
        auVar58[6] = -(cVar14 == -1);
        auVar58[7] = -(cVar15 == -1);
        auVar58[8] = -(cVar16 == -1);
        auVar58[9] = -(cVar17 == -1);
        auVar58[10] = -(cVar18 == -1);
        auVar58[0xb] = -(cVar19 == -1);
        auVar58[0xc] = -(cVar20 == -1);
        auVar58[0xd] = -(cVar21 == -1);
        auVar58[0xe] = -(cVar22 == -1);
        auVar58[0xf] = -(cVar23 == -1);
        if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x1f,0) & 1) != 0) || (SUB161(auVar58 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
        uVar31 = uStack_218 + lStack_200 + 0x10;
        lVar37 = lStack_200 + 0x10;
        uStack_218 = uVar35;
        lStack_200 = lVar40;
      }
    }
    lStack_200 = lVar40;
    uStack_218 = uVar35;
    lVar39 = plVar27[1];
    lVar40 = lVar39 + plVar27[2] * 0xc;
    for (; lVar39 != lVar40; lVar39 = lVar39 + 0xc) {
      cVar4 = *(char *)(lVar39 + 8);
      pauStack_d8 = (undefined1 (*) [16])CONCAT71(pauStack_d8._1_7_,cVar4);
      if (lStack_1c0 != 0) {
        uVar35 = pdb_1417c4b30(&lStack_1b8,&pauStack_d8);
        bVar53 = (byte)(uVar35 >> 0x39);
        auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
        auVar54 = pshuflw(auVar54,auVar54,0);
        lVar42 = 0;
        while( true ) {
          uVar35 = uVar35 & uStack_1d0;
          pcVar3 = *pauStack_1d8 + uVar35;
          auVar57[0] = -(*pcVar3 == auVar54[0]);
          auVar57[1] = -(pcVar3[1] == auVar54[1]);
          auVar57[2] = -(pcVar3[2] == auVar54[2]);
          auVar57[3] = -(pcVar3[3] == auVar54[3]);
          auVar57[4] = -(pcVar3[4] == auVar54[4]);
          auVar57[5] = -(pcVar3[5] == auVar54[5]);
          auVar57[6] = -(pcVar3[6] == auVar54[6]);
          auVar57[7] = -(pcVar3[7] == auVar54[7]);
          auVar57[8] = -(pcVar3[8] == auVar54[0]);
          auVar57[9] = -(pcVar3[9] == auVar54[1]);
          auVar57[10] = -(pcVar3[10] == auVar54[2]);
          auVar57[0xb] = -(pcVar3[0xb] == auVar54[3]);
          auVar57[0xc] = -(pcVar3[0xc] == auVar54[4]);
          auVar57[0xd] = -(pcVar3[0xd] == auVar54[5]);
          auVar57[0xe] = -(pcVar3[0xe] == auVar54[6]);
          auVar57[0xf] = -(pcVar3[0xf] == auVar54[7]);
          uVar25 = (ushort)(SUB161(auVar57 >> 7,0) & 1) |
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
          uVar51 = (uint)uVar25;
          while (uVar25 != 0) {
            uVar44 = 0;
            for (uVar8 = uVar51; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar44 = uVar44 + 1;
            }
            puVar33 = puStack_e0;
            if (cVar4 == (*pauStack_1d8)[~(uVar44 + uVar35 & uStack_1d0)]) goto LAB_1409118b0;
            uVar25 = (ushort)(uVar51 - 1) & (ushort)uVar51;
            uVar51 = CONCAT22((short)(uVar51 - 1 >> 0x10),uVar25);
          }
          auVar56[0] = -(*pcVar3 == -1);
          auVar56[1] = -(pcVar3[1] == -1);
          auVar56[2] = -(pcVar3[2] == -1);
          auVar56[3] = -(pcVar3[3] == -1);
          auVar56[4] = -(pcVar3[4] == -1);
          auVar56[5] = -(pcVar3[5] == -1);
          auVar56[6] = -(pcVar3[6] == -1);
          auVar56[7] = -(pcVar3[7] == -1);
          auVar56[8] = -(pcVar3[8] == -1);
          auVar56[9] = -(pcVar3[9] == -1);
          auVar56[10] = -(pcVar3[10] == -1);
          auVar56[0xb] = -(pcVar3[0xb] == -1);
          auVar56[0xc] = -(pcVar3[0xc] == -1);
          auVar56[0xd] = -(pcVar3[0xd] == -1);
          auVar56[0xe] = -(pcVar3[0xe] == -1);
          auVar56[0xf] = -(pcVar3[0xf] == -1);
          if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x2f,0) & 1) != 0) || (SUB161(auVar56 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') break;
          uVar35 = uVar35 + lVar42 + 0x10;
          lVar42 = lVar42 + 0x10;
        }
      }
    }
  } while( true );
LAB_1409118b0:
  *puVar2 = uStack_15c;
  *puStack_240 = uStack_158;
  *puStack_230 = uStack_154;
  *puStack_1f8 = uStack_ec;
  pdb_140911eb0(plVar27,uStack_248,uStack_238,puVar33);
  plVar38 = plVar27 + 9;
  lVar40 = pdb_14091cf50(uStack_228);
  uVar32 = pdb_1418bded0(plVar27 + 9);
  uVar35 = uStack_220;
  pdb_140912250(&pauStack_d8,uStack_220,uVar32,plVar38,puVar28,puStack_1f0);
  if (*plVar27 != 0) {
    uVar35 = *plVar27 * 0xc;
    pub_1406abac0((byte *)plVar27[1],uVar35,4);
  }
  plVar27[2] = (longlong)pppauStack_c8;
  *plVar27 = (longlong)pauStack_d8;
  plVar27[1] = (longlong)pauStack_d0;
  lVar39 = *(longlong *)(lVar40 + 8);
  lVar40 = *(longlong *)(lVar40 + 0x10) * 0x98 + lVar39;
  for (; lVar39 != lVar40; lVar39 = lVar39 + 0x98) {
    ppauStack_170 = (undefined1 (**) [16])pdb_1418bded0(plVar27 + 9);
    uStack_168 = uVar35;
    if (!SBORROW8(0,*(longlong *)(lVar39 + 0x18))) {
      if ((*(longlong *)(lVar39 + 0x28) != 4) || (**(int **)(lVar39 + 0x20) != 0x65657254)) {
        pauStack_d8 = (undefined1 (*) [16])(lVar39 + 0x18);
        pauStack_d0 = (undefined1 (*) [16])pdb_140094770;
        pppauStack_c8 = &ppauStack_170;
        pcStack_c0 = pdb_1418c1610;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14301f420,&pauStack_d8,&UNK_14301f450);
      }
      uStack_120 = *(undefined4 *)((longlong)puVar28 + 0xc);
      uStack_128 = (undefined1 (***) [16])CONCAT44(uStack_120,uStack_120);
      pdb_140def100(&pauStack_d8,(undefined8 *)(lVar39 + 0x30),&uStack_128);
      uStack_250 = *(undefined4 *)(puVar28 + 1);
      uStack_258 = *puVar28;
      pdb_140deecf0(&uStack_128,&pauStack_d8,&uStack_258);
      pppauStack_c8 = *(undefined1 (****) [16])(lVar39 + 0x40);
      pauStack_d8 = *(undefined1 (**) [16])(lVar39 + 0x30);
      pauStack_d0 = *(undefined1 (**) [16])(lVar39 + 0x38);
      *puStack_1f8 = uStack_ec;
      uVar35 = puStack_e0[2];
      uVar51 = (uint)puStack_e0[3];
      if (uVar51 < uVar35) {
        uVar35 = puStack_e0[1];
        lVar42 = (ulonglong)uVar51 * 0x1c;
        uVar44 = *(uint *)(uVar35 + 0x18 + lVar42) | 1;
        *(undefined4 *)(puStack_e0 + 3) = *(undefined4 *)(uVar35 + lVar42);
        *(undefined8 *)(uVar35 + 0x10 + lVar42) = uStack_118;
        *(longlong *)(uVar35 + lVar42) = (longlong)uStack_128;
        ((longlong *)(uVar35 + lVar42))[1] = CONCAT44(uStack_11c,uStack_120);
        *(uint *)(uVar35 + 0x18 + lVar42) = uVar44;
        *(int *)((longlong)puStack_e0 + 0x1c) = *(int *)((longlong)puStack_e0 + 0x1c) + 1;
        lVar42 = plVar27[8];
        if (lVar42 == plVar27[6]) {
LAB_140911b3f:
          pdb_142d7ede0(plVar27 + 6);
        }
      }
      else {
        if (0xfffffffe < uVar35) {
          pdb_142dc664f(&UNK_143076da8,0xf,&UNK_143076e10);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if (uVar35 == *puStack_e0) {
          pdb_142d8dbe0(puStack_e0);
        }
        uVar34 = puStack_e0[1];
        lVar42 = uVar35 * 0x1c;
        *(undefined8 *)(uVar34 + 0x10 + lVar42) = uStack_118;
        *(longlong *)(uVar34 + lVar42) = (longlong)uStack_128;
        ((longlong *)(uVar34 + lVar42))[1] = CONCAT44(uStack_11c,uStack_120);
        *(undefined4 *)(uVar34 + 0x18 + lVar42) = 1;
        puStack_e0[2] = uVar35 + 1;
        uVar51 = (uint)uVar35;
        *(uint *)(puStack_e0 + 3) = uVar51 + 1;
        uVar44 = 1;
        *(int *)((longlong)puStack_e0 + 0x1c) = *(int *)((longlong)puStack_e0 + 0x1c) + 1;
        lVar42 = plVar27[8];
        if (lVar42 == plVar27[6]) goto LAB_140911b3f;
      }
      lVar37 = plVar27[7];
      *(undefined1 (****) [16])(lVar37 + 0x10 + lVar42 * 0x28) = pppauStack_c8;
      puVar47 = (undefined8 *)(lVar37 + lVar42 * 0x28);
      *puVar47 = pauStack_d8;
      puVar47[1] = pauStack_d0;
      *(undefined8 *)(lVar37 + 0x18 + lVar42 * 0x28) = 0;
      *(uint *)(lVar37 + 0x20 + lVar42 * 0x28) = uVar44;
      *(uint *)(lVar37 + 0x24 + lVar42 * 0x28) = uVar51;
      plVar27[8] = lVar42 + 1;
    }
    pauStack_d8 = pauStack_e8;
    pcStack_c0 = (code *)puStack_140;
    uStack_b8 = puStack_148;
    uVar35 = (ulonglong)*(byte *)((longlong)plStack_150 + 0x98);
    pauStack_d0 = pauVar49;
    pppauStack_c8 = (undefined1 (***) [16])puVar24;
    pdb_1409109b0(lVar39,uVar35,param_6,puVar28,plVar27 + 3,&pauStack_d8);
  }
  goto LAB_140911400;
}

