// VA 0x141c24750, PDB extent 3673 bytes
// country_core::systems::history::replay_wall::replay_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::history::replay_wall::replay_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
   Extent: 3673 */

void pdb_141c24750(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong *puVar26;
  char *pcVar27;
  longlong lVar28;
  uint uVar29;
  ushort uVar30;
  undefined1 (*pauVar31) [16];
  ulonglong uVar32;
  uint uVar33;
  byte bVar34;
  char *pcVar35;
  undefined1 (*pauVar36) [16];
  ulonglong *puVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  char cVar46;
  undefined1 unaff_XMM7_Bc;
  char cVar47;
  undefined1 unaff_XMM7_Bd;
  char cVar48;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  char cVar49;
  undefined1 unaff_XMM7_Bg;
  char cVar50;
  undefined1 unaff_XMM7_Bh;
  char cVar51;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  char cVar52;
  undefined1 unaff_XMM7_Bk;
  char cVar53;
  undefined1 unaff_XMM7_Bl;
  char cVar54;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  char cVar55;
  undefined1 unaff_XMM7_Bo;
  char cVar56;
  undefined1 unaff_XMM7_Bp;
  char cVar57;
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  ulonglong uStack_168;
  char *pcStack_160;
  ulonglong uStack_158;
  char *pcStack_150;
  undefined1 (*pauStack_148) [16];
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined1 (*pauStack_118) [16];
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong *puStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  char cStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  longlong lStack_c0;
  ulonglong *puStack_b8;
  undefined4 uStack_ac;
  ulonglong uStack_a8;
  char *pcStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar26 = (ulonglong *)*param_1;
  fVar2 = *(float *)(puVar26 + 5);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  if (puVar26[3] != 0) {
    uVar21 = *puVar26;
    if (puVar26[2] < *puVar26) {
      uVar21 = 0;
    }
    uVar20 = puVar26[1];
    lVar22 = (puVar26[2] - uVar21) * 0x40;
    lStack_98 = uVar20 + lVar22;
    uStack_108 = 0;
    puStack_100 = (ulonglong *)0x8;
    uStack_f8 = 0;
    pcVar35 = *(char **)(uVar20 + 8 + lVar22);
    pcStack_150 = pcVar35 + *(longlong *)(uVar20 + 0x10 + lVar22) * 0x30;
    uStack_f0 = *param_2;
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar6 = *param_3;
    puVar7 = (undefined4 *)param_3[2];
    iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                    CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    cVar46 = (char)((uint)iVar12 >> 8);
    cVar47 = (char)((uint)iVar12 >> 0x10);
    cVar48 = (char)((uint)iVar12 >> 0x18);
    iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                    CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    cVar49 = (char)((uint)iVar13 >> 8);
    cVar50 = (char)((uint)iVar13 >> 0x10);
    cVar51 = (char)((uint)iVar13 >> 0x18);
    iVar14 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    cVar52 = (char)((uint)iVar14 >> 8);
    cVar53 = (char)((uint)iVar14 >> 0x10);
    cVar54 = (char)((uint)iVar14 >> 0x18);
    iVar15 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    cVar55 = (char)((uint)iVar15 >> 8);
    cVar56 = (char)((uint)iVar15 >> 0x10);
    cVar57 = (char)((uint)iVar15 >> 0x18);
    pcVar27 = pcStack_150;
    uVar21 = 0;
    puStack_b8 = (ulonglong *)param_4;
LAB_141c2483c:
    while (pcStack_a0 = pcVar35, uVar20 = uVar21, pcStack_a0 != pcVar27) {
      pcVar35 = pcStack_a0 + 0x30;
      uVar21 = uVar20 + 1;
      uStack_168 = uVar20;
      if (*pcStack_a0 == '\x04') {
        plVar18 = (longlong *)pdb_140f3bda0();
        if ((char)plVar18[2] == '\x01') {
          lVar22 = *plVar18;
          param_2 = (longlong *)plVar18[1];
        }
        else {
          lVar22 = pdb_140f4fd10();
          *plVar18 = lVar22;
          plVar18[1] = (longlong)param_2;
          *(undefined1 *)(plVar18 + 2) = 1;
        }
        *plVar18 = lVar22 + 1;
        uVar17 = _UNK_14339e098;
        uVar16 = _DAT_14339e090;
        uVar21 = _UNK_14339e088;
        pauVar31 = _DAT_14339e080;
        uStack_138 = _DAT_14339e090;
        uStack_130 = (undefined7)_UNK_14339e098;
        uStack_129 = (undefined1)((ulonglong)_UNK_14339e098 >> 0x38);
        pauStack_148 = _DAT_14339e080;
        uStack_140 = _UNK_14339e088;
        uStack_128 = (undefined7)lVar22;
        uStack_121 = (undefined1)((ulonglong)lVar22 >> 0x38);
        uStack_120 = SUB87(param_2,0);
        uStack_119 = (undefined1)((ulonglong)param_2 >> 0x38);
        pcStack_160 = pcVar35;
        uStack_158 = uVar20 + 1;
LAB_141c248c7:
        uVar20 = uStack_f8;
        if (*(longlong *)(pcStack_a0 + 0x20) == 0) {
          if (uStack_f8 == uStack_108) {
            pdb_142d896b0(&uStack_108);
          }
          puStack_100[uVar20] = uStack_168;
          uStack_f8 = uVar20 + 1;
        }
        else {
          lVar22 = *(longlong *)(pcStack_a0 + 0x10);
          uVar20 = 0;
          if (*(ulonglong *)(pcStack_a0 + 8) <= *(ulonglong *)(pcStack_a0 + 0x18)) {
            uVar20 = *(ulonglong *)(pcStack_a0 + 8);
          }
          lVar19 = *(ulonglong *)(pcStack_a0 + 0x18) - uVar20;
          lVar28 = lVar22 + lVar19 * 0x18;
          lVar24 = *(longlong *)(lVar22 + 8 + lVar19 * 0x18);
          lVar19 = lVar24 + *(longlong *)(lVar22 + 0x10 + lVar19 * 0x18) * 0x18;
          bVar34 = 1;
          for (; lVar24 != lVar19; lVar24 = lVar24 + 0x18) {
            fVar3 = *(float *)(uStack_f0 + 0x28);
            *puVar7 = uVar5;
            pdb_140c1c8b0(lVar24,fVar3 * fVar2,uVar6,puStack_b8,param_5,param_8,param_9,param_10,
                          param_11,param_6,param_11,param_7);
            bVar34 = bVar34 & *(byte *)(lVar24 + 0x15);
          }
          if (bVar34 != 0) {
            lVar19 = *(longlong *)(lVar28 + 8);
            lVar28 = lVar19 + *(longlong *)(lVar28 + 0x10) * 0x18;
            for (; lVar19 != lVar28; lVar19 = lVar19 + 0x18) {
              lVar22 = *(longlong *)(*(longlong *)(lVar19 + 8) + 0x10);
              lVar22 = *(longlong *)
                        (*(longlong *)(lVar19 + 8) + 0x10 +
                        *(longlong *)
                         (&UNK_14339e2f8 + (lVar22 >> 0x3f & lVar22 + 0x8000000000000001U) * 8));
              pdb_1403b05d0(&pauStack_148);
            }
            plVar18 = (longlong *)pdb_140f3bda0();
            if ((char)plVar18[2] == '\x01') {
              lVar28 = *plVar18;
              lVar22 = plVar18[1];
            }
            else {
              lVar28 = pdb_140f4fd10();
              *plVar18 = lVar28;
              plVar18[1] = lVar22;
              *(undefined1 *)(plVar18 + 2) = 1;
            }
            *plVar18 = lVar28 + 1;
            uStack_d8 = (undefined1)uVar16;
            uStack_d7 = (undefined7)((ulonglong)uVar16 >> 8);
            uStack_d0 = (undefined1)uVar17;
            uStack_cf = (undefined7)((ulonglong)uVar17 >> 8);
            cStack_e8 = (char)pauVar31;
            uStack_e7 = (undefined7)((ulonglong)pauVar31 >> 8);
            uStack_e0 = (undefined1)uVar21;
            uStack_df = (undefined7)(uVar21 >> 8);
            uStack_c8 = (undefined1)lVar28;
            uStack_c7 = (undefined7)((ulonglong)lVar28 >> 8);
            uStack_ac = (undefined4)CONCAT71(uStack_c7,1);
            lStack_c0 = lVar22;
            if (1 < *(ulonglong *)(pcStack_a0 + 0x20)) {
              uVar20 = 0;
              if (*(ulonglong *)(pcStack_a0 + 8) <= *(longlong *)(pcStack_a0 + 0x18) + 1U) {
                uVar20 = *(ulonglong *)(pcStack_a0 + 8);
              }
              lVar22 = (*(longlong *)(pcStack_a0 + 0x18) + 1U) - uVar20;
              lVar28 = *(longlong *)(*(longlong *)(pcStack_a0 + 0x10) + 8 + lVar22 * 0x18);
              lVar22 = lVar28 + *(longlong *)
                                 (*(longlong *)(pcStack_a0 + 0x10) + 0x10 + lVar22 * 0x18) * 0x18;
              for (; lVar28 != lVar22; lVar28 = lVar28 + 0x18) {
                lVar19 = *(longlong *)(*(longlong *)(lVar28 + 8) + 0x10);
                pdb_1403b05d0(&cStack_e8,
                              *(undefined8 *)
                               (*(longlong *)(lVar28 + 8) + 0x10 +
                               *(longlong *)
                                (&UNK_14339e2f8 +
                                (lVar19 >> 0x3f & lVar19 + 0x8000000000000001U) * 8)));
              }
              uVar32 = CONCAT71(uStack_cf,uStack_d0);
              uVar20 = CONCAT17(uStack_129,uStack_130);
              if (uVar32 < uVar20) {
                if (uVar32 != 0) {
                  pauVar25 = (undefined1 (*) [16])CONCAT71(uStack_e7,cStack_e8);
                  auVar38 = *pauVar25;
                  uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                                          (ushort)(byte)(auVar38[0xf] >> 7) << 0xf);
                  pauVar36 = pauVar25 + 1;
                  pauStack_118 = pauStack_148;
                  uStack_110 = uStack_140;
                  do {
                    if ((short)uVar33 == 0) {
                      do {
                        auVar38 = *pauVar36;
                        pauVar25 = pauVar25 + -8;
                        pauVar36 = pauVar36 + 1;
                        uVar33 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                                         (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) ^ 0xffff;
                      } while (uVar33 == 0);
                    }
                    iVar9 = 0;
                    for (uVar29 = uVar33; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
                      iVar9 = iVar9 + 1;
                    }
                    uStack_a8 = uVar32;
                    uVar20 = pdb_1400af0a0(&uStack_128);
                    uVar33 = uVar33 - 1 & uVar33;
                    uVar32 = uStack_a8 - 1;
                    bVar34 = (byte)(uVar20 >> 0x39);
                    auVar38 = ZEXT216(CONCAT11(bVar34,bVar34));
                    auVar38 = pshuflw(auVar38,auVar38,0);
                    uVar23 = 0;
                    while( true ) {
                      uVar20 = uVar20 & uStack_110;
                      auVar4 = *(undefined1 (*) [16])(*pauStack_118 + uVar20);
                      auVar42[0] = -(auVar4[0] == auVar38[0]);
                      auVar42[1] = -(auVar4[1] == auVar38[1]);
                      auVar42[2] = -(auVar4[2] == auVar38[2]);
                      auVar42[3] = -(auVar4[3] == auVar38[3]);
                      auVar42[4] = -(auVar4[4] == auVar38[4]);
                      auVar42[5] = -(auVar4[5] == auVar38[5]);
                      auVar42[6] = -(auVar4[6] == auVar38[6]);
                      auVar42[7] = -(auVar4[7] == auVar38[7]);
                      auVar42[8] = -(auVar4[8] == auVar38[0]);
                      auVar42[9] = -(auVar4[9] == auVar38[1]);
                      auVar42[10] = -(auVar4[10] == auVar38[2]);
                      auVar42[0xb] = -(auVar4[0xb] == auVar38[3]);
                      auVar42[0xc] = -(auVar4[0xc] == auVar38[4]);
                      auVar42[0xd] = -(auVar4[0xd] == auVar38[5]);
                      auVar42[0xe] = -(auVar4[0xe] == auVar38[6]);
                      auVar42[0xf] = -(auVar4[0xf] == auVar38[7]);
                      uVar30 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar42[0xf] >> 7) << 0xf;
                      uVar29 = (uint)uVar30;
                      while (uVar30 != 0) {
                        uVar10 = 0;
                        for (uVar11 = uVar29; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000)
                        {
                          uVar10 = uVar10 + 1;
                        }
                        uStack_a8 = uVar23;
                        if (*(longlong *)((longlong)pauVar25 + (-8 - (ulonglong)(uint)(iVar9 << 3)))
                            == *(longlong *)
                                ((longlong)pauStack_118 + (uVar10 + uVar20 & uStack_110) * -8 + -8))
                        goto LAB_141c24db0;
                        uVar30 = (ushort)(uVar29 - 1) & (ushort)uVar29;
                        uVar29 = CONCAT22((short)(uVar29 - 1 >> 0x10),uVar30);
                      }
                      auVar40[0] = -(auVar4[0] == (char)iVar12);
                      auVar40[1] = -(auVar4[1] == cVar46);
                      auVar40[2] = -(auVar4[2] == cVar47);
                      auVar40[3] = -(auVar4[3] == cVar48);
                      auVar40[4] = -(auVar4[4] == (char)iVar13);
                      auVar40[5] = -(auVar4[5] == cVar49);
                      auVar40[6] = -(auVar4[6] == cVar50);
                      auVar40[7] = -(auVar4[7] == cVar51);
                      auVar40[8] = -(auVar4[8] == (char)iVar14);
                      auVar40[9] = -(auVar4[9] == cVar52);
                      auVar40[10] = -(auVar4[10] == cVar53);
                      auVar40[0xb] = -(auVar4[0xb] == cVar54);
                      auVar40[0xc] = -(auVar4[0xc] == (char)iVar15);
                      auVar40[0xd] = -(auVar4[0xd] == cVar55);
                      auVar40[0xe] = -(auVar4[0xe] == cVar56);
                      auVar40[0xf] = -(auVar4[0xf] == cVar57);
                      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 ||
                                       (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                                     (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                                    (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                                   (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                                  (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                                (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
                               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
                              (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
                             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
                            (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
                           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
                          (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
                      uVar20 = uVar20 + uVar23 + 0x10;
                      uVar23 = uVar23 + 0x10;
                    }
                  } while (uVar32 != 0);
                }
              }
              else if (uVar20 != 0) {
                auVar38 = *pauStack_148;
                uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                                        (ushort)(byte)(auVar38[0xf] >> 7) << 0xf);
                pauVar36 = pauStack_148 + 1;
                pauStack_118 = (undefined1 (*) [16])CONCAT71(uStack_e7,cStack_e8);
                uStack_110 = CONCAT71(uStack_df,uStack_e0);
                pauVar25 = pauStack_148;
                do {
                  if ((short)uVar33 == 0) {
                    do {
                      auVar38 = *pauVar36;
                      pauVar25 = pauVar25 + -8;
                      pauVar36 = pauVar36 + 1;
                      uVar33 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                                       (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) ^ 0xffff;
                    } while (uVar33 == 0);
                  }
                  iVar9 = 0;
                  for (uVar29 = uVar33; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
                    iVar9 = iVar9 + 1;
                  }
                  puVar26 = (ulonglong *)((longlong)pauVar25 + (-8 - (ulonglong)(uint)(iVar9 << 3)))
                  ;
                  uStack_a8 = uVar20;
                  uVar32 = pdb_1400af0a0(&uStack_c8,puVar26);
                  uVar33 = uVar33 - 1 & uVar33;
                  uVar20 = uStack_a8 - 1;
                  bVar34 = (byte)(uVar32 >> 0x39);
                  auVar38 = ZEXT216(CONCAT11(bVar34,bVar34));
                  auVar38 = pshuflw(auVar38,auVar38,0);
                  uStack_a8 = *puVar26;
                  lVar22 = 0;
                  while( true ) {
                    uVar32 = uVar32 & uStack_110;
                    auVar4 = *(undefined1 (*) [16])(*pauStack_118 + uVar32);
                    auVar43[0] = -(auVar4[0] == auVar38[0]);
                    auVar43[1] = -(auVar4[1] == auVar38[1]);
                    auVar43[2] = -(auVar4[2] == auVar38[2]);
                    auVar43[3] = -(auVar4[3] == auVar38[3]);
                    auVar43[4] = -(auVar4[4] == auVar38[4]);
                    auVar43[5] = -(auVar4[5] == auVar38[5]);
                    auVar43[6] = -(auVar4[6] == auVar38[6]);
                    auVar43[7] = -(auVar4[7] == auVar38[7]);
                    auVar43[8] = -(auVar4[8] == auVar38[0]);
                    auVar43[9] = -(auVar4[9] == auVar38[1]);
                    auVar43[10] = -(auVar4[10] == auVar38[2]);
                    auVar43[0xb] = -(auVar4[0xb] == auVar38[3]);
                    auVar43[0xc] = -(auVar4[0xc] == auVar38[4]);
                    auVar43[0xd] = -(auVar4[0xd] == auVar38[5]);
                    auVar43[0xe] = -(auVar4[0xe] == auVar38[6]);
                    auVar43[0xf] = -(auVar4[0xf] == auVar38[7]);
                    uVar30 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar43[0xf] >> 7) << 0xf;
                    uVar29 = (uint)uVar30;
                    while (uVar30 != 0) {
                      uVar10 = 0;
                      for (uVar11 = uVar29; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                        uVar10 = uVar10 + 1;
                      }
                      if (uStack_a8 ==
                          *(ulonglong *)
                           ((longlong)pauStack_118 + (uVar10 + uVar32 & uStack_110) * -8 + -8))
                      goto LAB_141c24db0;
                      uVar30 = (ushort)(uVar29 - 1) & (ushort)uVar29;
                      uVar29 = CONCAT22((short)(uVar29 - 1 >> 0x10),uVar30);
                    }
                    auVar41[0] = -(auVar4[0] == (char)iVar12);
                    auVar41[1] = -(auVar4[1] == cVar46);
                    auVar41[2] = -(auVar4[2] == cVar47);
                    auVar41[3] = -(auVar4[3] == cVar48);
                    auVar41[4] = -(auVar4[4] == (char)iVar13);
                    auVar41[5] = -(auVar4[5] == cVar49);
                    auVar41[6] = -(auVar4[6] == cVar50);
                    auVar41[7] = -(auVar4[7] == cVar51);
                    auVar41[8] = -(auVar4[8] == (char)iVar14);
                    auVar41[9] = -(auVar4[9] == cVar52);
                    auVar41[10] = -(auVar4[10] == cVar53);
                    auVar41[0xb] = -(auVar4[0xb] == cVar54);
                    auVar41[0xc] = -(auVar4[0xc] == (char)iVar15);
                    auVar41[0xd] = -(auVar4[0xd] == cVar55);
                    auVar41[0xe] = -(auVar4[0xe] == cVar56);
                    auVar41[0xf] = -(auVar4[0xf] == cVar57);
                    if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar41 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar41 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar41 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar41 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') break;
                    uVar32 = uVar32 + lVar22 + 0x10;
                    lVar22 = lVar22 + 0x10;
                  }
                } while (uVar20 != 0);
              }
            }
            goto LAB_141c24dc1;
          }
        }
        goto LAB_141c24ef0;
      }
    }
    uVar21 = uStack_f8 >> 1;
    if (uVar21 != 0) {
      if (uStack_f8 < 8) {
        uVar20 = 0;
      }
      else {
        uVar20 = uVar21 & 0xfffffffffffffffc;
        pauVar31 = (undefined1 (*) [16])(puStack_100 + 2);
        lVar22 = 0;
        do {
          auVar38 = pauVar31[-1];
          auVar4 = *pauVar31;
          auVar43 = *(undefined1 (*) [16])(puStack_100 + uStack_f8 + lVar22 + -4);
          auVar41 = *(undefined1 (*) [16])(puStack_100 + uStack_f8 + lVar22 + -2);
          auVar45._0_8_ = auVar41._8_8_;
          auVar45._8_4_ = auVar41._0_4_;
          auVar45._12_4_ = auVar41._4_4_;
          auVar44._0_8_ = auVar43._8_8_;
          auVar44._8_4_ = auVar43._0_4_;
          auVar44._12_4_ = auVar43._4_4_;
          pauVar31[-1] = auVar45;
          *pauVar31 = auVar44;
          auVar39._0_8_ = auVar38._8_8_;
          auVar39._8_4_ = auVar38._0_4_;
          auVar39._12_4_ = auVar38._4_4_;
          auVar38._0_8_ = auVar4._8_8_;
          auVar38._8_4_ = auVar4._0_4_;
          auVar38._12_4_ = auVar4._4_4_;
          *(undefined1 (*) [16])(puStack_100 + uStack_f8 + lVar22 + -2) = auVar39;
          *(undefined1 (*) [16])(puStack_100 + uStack_f8 + lVar22 + -4) = auVar38;
          lVar22 = lVar22 + -4;
          pauVar31 = pauVar31 + 2;
        } while (-lVar22 != (uVar21 & 0xfffffffffffffffc));
        if (uVar21 == uVar20) goto joined_r0x000141c24f80;
      }
      puVar26 = puStack_100 + uVar20;
      lVar22 = -uVar20;
      do {
        uVar20 = *puVar26;
        *puVar26 = puStack_100[uStack_f8 + lVar22 + -1];
        puStack_100[uStack_f8 + lVar22 + -1] = uVar20;
        lVar22 = lVar22 + -1;
        puVar26 = puVar26 + 1;
      } while (-lVar22 != uVar21);
    }
joined_r0x000141c24f80:
    uStack_f0 = uStack_108;
    puStack_b8 = puStack_100;
    if (uStack_f8 != 0) {
      puVar37 = puStack_100 + uStack_f8;
      lVar22 = lStack_98;
      puVar26 = puStack_100;
      do {
        uVar21 = *puVar26;
        uVar20 = *(ulonglong *)(lVar22 + 0x10);
        if (uVar20 <= uVar21) {
LAB_141c25362:
          pdb_142dc7ef8(uVar21,uVar20,&UNK_14339dfd0);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar28 = *(longlong *)(lVar22 + 8);
        lVar19 = uVar21 * 0x30;
        cVar46 = *(char *)(lVar28 + lVar19);
        puVar1 = (undefined8 *)(lVar28 + 1 + lVar19);
        pauStack_148 = (undefined1 (*) [16])*puVar1;
        uStack_140 = puVar1[1];
        puVar1 = (undefined8 *)(lVar28 + 0x11 + lVar19);
        uStack_138 = *puVar1;
        uVar16 = puVar1[1];
        puVar1 = (undefined8 *)(lVar28 + 0x20 + lVar19);
        uVar6 = puVar1[1];
        uStack_128 = (undefined7)((ulonglong)*puVar1 >> 8);
        uStack_121 = (undefined1)uVar6;
        uStack_120 = (undefined7)((ulonglong)uVar6 >> 8);
        uStack_130 = (undefined7)uVar16;
        uStack_129 = (undefined1)((ulonglong)uVar16 >> 0x38);
        pub_142e32770(lVar28 + lVar19,lVar19 + lVar28 + 0x30,(~uVar21 + uVar20) * 0x30);
        lVar28 = lStack_98;
        uVar20 = uVar20 - 1;
        *(ulonglong *)(lVar22 + 0x10) = uVar20;
        if (cVar46 == '\f') goto LAB_141c25362;
        lStack_c0 = CONCAT71(uStack_120,uStack_121);
        uStack_c7 = uStack_128;
        uStack_d7 = (undefined7)uStack_138;
        uStack_d0 = (undefined1)((ulonglong)uStack_138 >> 0x38);
        uStack_cf = uStack_130;
        uStack_c8 = uStack_129;
        uStack_e7 = SUB87(pauStack_148,0);
        uStack_e0 = (undefined1)((ulonglong)pauStack_148 >> 0x38);
        uStack_df = (undefined7)uStack_140;
        uStack_d8 = (undefined1)(uStack_140 >> 0x38);
        cStack_e8 = cVar46;
        switch(cVar46) {
        case '\0':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7b830(&uStack_d8);
          }
          break;
        case '\x01':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7b830(&uStack_d8);
          }
          break;
        case '\x02':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7b830(&uStack_d8);
          }
          break;
        case '\x03':
          plVar18 = (longlong *)CONCAT71(uStack_df,uStack_e0);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7a720(&uStack_e0);
          }
          break;
        case '\x04':
          pdb_14099a2e0(&uStack_e0);
          lVar28 = lStack_98;
          break;
        case '\x05':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7a0f0(&uStack_d8);
          }
          break;
        case '\x06':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7a030(&uStack_d8);
          }
          break;
        case '\a':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7a030(&uStack_d8);
          }
          break;
        case '\b':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7b150(&uStack_d8);
          }
          break;
        case '\t':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140315620(&uStack_d8);
          }
          break;
        case '\n':
          plVar18 = (longlong *)CONCAT71(uStack_d7,uStack_d8);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140740180(&uStack_d8);
          }
          break;
        default:
          plVar18 = (longlong *)CONCAT71(uStack_df,uStack_e0);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            pdb_140c7bc60(&uStack_e0);
          }
        }
        puVar26 = puVar26 + 1;
        lVar22 = lVar28;
      } while (puVar26 != puVar37);
    }
    if (uStack_f0 != 0) {
      pub_1406abac0((byte *)puStack_b8,uStack_f0 << 3,8);
    }
  }
  return;
LAB_141c24db0:
  uStack_ac = 0;
LAB_141c24dc1:
  if (*(longlong *)(pcStack_a0 + 0x20) != 0) {
    lVar22 = *(longlong *)(pcStack_a0 + 0x18);
    uVar20 = *(ulonglong *)(pcStack_a0 + 8);
    if (lVar22 + 1U < uVar20) {
      uVar20 = 0;
    }
    *(ulonglong *)(pcStack_a0 + 0x18) = (lVar22 - uVar20) + 1;
    *(longlong *)(pcStack_a0 + 0x20) = *(longlong *)(pcStack_a0 + 0x20) + -1;
    auStack_188 = *(undefined1 (*) [16])(*(longlong *)(pcStack_a0 + 0x10) + lVar22 * 0x18);
    uStack_178 = *(undefined8 *)(*(longlong *)(pcStack_a0 + 0x10) + 0x10 + lVar22 * 0x18);
    if (!SBORROW8(0,auStack_188._0_8_)) {
      pdb_14049bb00(auStack_188);
    }
  }
  if ((char)uStack_ac != '\0') {
    lVar22 = CONCAT71(uStack_df,uStack_e0);
    if (lVar22 != 0) {
      uVar20 = lVar22 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar32 = lVar22 + uVar20 + 0x11;
      if (uVar32 != 0) {
        pub_1406abac0((byte *)(CONCAT71(uStack_e7,cStack_e8) - uVar20),uVar32,0x10);
      }
    }
    goto LAB_141c248c7;
  }
  lVar22 = CONCAT71(uStack_df,uStack_e0);
  if (lVar22 != 0) {
    uVar21 = lVar22 * 8 + 0x17U & 0xfffffffffffffff0;
    uVar20 = lVar22 + uVar21 + 0x11;
    if (uVar20 != 0) {
      pub_1406abac0((byte *)(CONCAT71(uStack_e7,cStack_e8) - uVar21),uVar20,0x10);
    }
  }
LAB_141c24ef0:
  param_2 = (longlong *)0x0;
  pcVar27 = pcStack_150;
  uVar21 = uStack_158;
  pcVar35 = pcStack_160;
  if (uStack_140 != 0) {
    uVar20 = uStack_140 * 8 + 0x17 & 0xfffffffffffffff0;
    param_2 = (longlong *)(uStack_140 + uVar20 + 0x11);
    if (param_2 != (longlong *)0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_148 - uVar20),(ulonglong)param_2,0x10);
      pcVar27 = pcStack_150;
      uVar21 = uStack_158;
      pcVar35 = pcStack_160;
    }
  }
  goto LAB_141c2483c;
}

