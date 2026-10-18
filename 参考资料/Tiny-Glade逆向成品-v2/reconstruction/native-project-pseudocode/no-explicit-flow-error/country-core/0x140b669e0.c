// VA 0x140b669e0, PDB extent 2416 bytes
// country_core::systems::history::replay_stairs::replay_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_stairs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::history::replay_stairs::replay_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_stairs.rs
   Extent: 2416 */

void pdb_140b669e0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  float fVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  char cVar27;
  longlong lVar28;
  ulonglong *puVar29;
  uint uVar30;
  undefined1 (*pauVar31) [16];
  ushort uVar32;
  char *pcVar33;
  longlong lVar34;
  ulonglong *puVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  char cVar45;
  undefined1 unaff_XMM8_Bc;
  char cVar46;
  undefined1 unaff_XMM8_Bd;
  char cVar47;
  undefined1 unaff_XMM8_Be;
  undefined1 unaff_XMM8_Bf;
  char cVar48;
  undefined1 unaff_XMM8_Bg;
  char cVar49;
  undefined1 unaff_XMM8_Bh;
  char cVar50;
  undefined1 unaff_XMM8_Bi;
  undefined1 unaff_XMM8_Bj;
  char cVar51;
  undefined1 unaff_XMM8_Bk;
  char cVar52;
  undefined1 unaff_XMM8_Bl;
  char cVar53;
  undefined1 unaff_XMM8_Bm;
  undefined1 unaff_XMM8_Bn;
  char cVar54;
  undefined1 unaff_XMM8_Bo;
  char cVar55;
  undefined1 unaff_XMM8_Bp;
  char cVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  char cStack_178;
  undefined8 uStack_177;
  undefined6 uStack_16f;
  undefined1 uStack_169;
  undefined1 uStack_168;
  undefined2 uStack_167;
  undefined6 uStack_165;
  undefined2 uStack_15f;
  undefined4 uStack_15d;
  undefined1 uStack_159;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  longlong lStack_148;
  undefined4 *puStack_140;
  undefined4 *puStack_138;
  longlong lStack_130;
  longlong *plStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined8 uStack_f1;
  char *pcStack_e0;
  longlong lStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  ulonglong *puStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 *puStack_a8;
  char *pcStack_a0;
  ulonglong *puStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar29 = (ulonglong *)*param_1;
  fVar2 = *(float *)(puVar29 + 5);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  fVar20 = _DAT_142e37ad4;
  if (puVar29[3] == 0) {
    return;
  }
  uVar26 = puVar29[1];
  uVar23 = *puVar29;
  if (puVar29[2] < *puVar29) {
    uVar23 = 0;
  }
  lVar34 = (puVar29[2] - uVar23) * 0x40;
  lStack_148 = uVar26 + lVar34;
  uStack_c8 = 0;
  puStack_c0 = (ulonglong *)0x8;
  uStack_b8 = 0;
  pcVar6 = *(char **)(uVar26 + 8 + lVar34);
  pcStack_e0 = pcVar6 + *(longlong *)(uVar26 + 0x10 + lVar34) * 0x30;
  lStack_130 = *param_2;
  uStack_b0 = *param_6;
  uStack_d0 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lStack_d8 = *param_3;
  puStack_140 = (undefined4 *)param_3[2];
  puStack_98 = (ulonglong *)*param_5;
  uStack_cc = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar34 = *param_4;
  puStack_138 = (undefined4 *)param_4[2];
  iVar10 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  cVar45 = (char)((uint)iVar10 >> 8);
  cVar46 = (char)((uint)iVar10 >> 0x10);
  cVar47 = (char)((uint)iVar10 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  cVar48 = (char)((uint)iVar11 >> 8);
  cVar49 = (char)((uint)iVar11 >> 0x10);
  cVar50 = (char)((uint)iVar11 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  cVar51 = (char)((uint)iVar12 >> 8);
  cVar52 = (char)((uint)iVar12 >> 0x10);
  cVar53 = (char)((uint)iVar12 >> 0x18);
  iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  cVar54 = (char)((uint)iVar13 >> 8);
  cVar55 = (char)((uint)iVar13 >> 0x10);
  cVar56 = (char)((uint)iVar13 >> 0x18);
  lStack_120 = lStack_d8 + 0x20;
  plStack_128 = (longlong *)(puStack_98 + 4);
  uVar26 = 0;
  pcVar33 = pcStack_e0;
LAB_140b66b44:
  do {
    pcStack_a0 = pcVar6;
    uVar25 = uVar26;
    uVar23 = uStack_b8;
    lVar28 = lStack_148;
    if (pcStack_a0 == pcVar33) break;
    pcVar6 = pcStack_a0 + 0x30;
    uVar26 = uVar25 + 1;
    if (*pcStack_a0 == '\n') {
      if (pcStack_a0[8] == '\0') {
        if (uStack_b8 == uStack_c8) {
          pdb_142d896b0(&uStack_c8);
        }
        puStack_c0[uVar23] = uVar25;
        lVar28 = *(longlong *)(pcStack_a0 + 0x10);
        if (*(char *)(lVar28 + 0x10) == '\0') goto LAB_140b66bd2;
LAB_140b66c47:
        uStack_b8 = uVar23 + 1;
        iVar5 = *(int *)(lVar28 + 0x14);
        lVar21 = pdb_140c40010(uStack_b0,iVar5);
        bVar19 = true;
        if ((lVar21 == 0) || (1 < *(byte *)(lVar21 + 0x4f))) {
          puStack_a8 = (undefined8 *)0x0;
          cVar27 = '\0';
        }
        else {
          puStack_a8 = (undefined8 *)(lVar21 + 0x38);
          cVar27 = *(char *)(lVar21 + 0x4e);
          bVar19 = false;
        }
        cVar3 = pcStack_a0[0x1c];
        *puStack_140 = uStack_d0;
        if (cVar3 == '\0') {
          uVar22 = pdb_1400af680(lStack_120,lVar28 + 0x14);
          pdb_140cab960(&cStack_178,lStack_d8,uVar22,lVar28 + 0x14);
        }
        else {
          pdb_1403afce0(lStack_d8,*(undefined4 *)(lVar28 + 0x14),*(undefined4 *)(lVar28 + 0x18));
        }
        bVar4 = pcStack_a0[0x1c];
        uStack_118 = CONCAT44(uStack_118._4_4_,iVar5);
        if (puStack_98[3] != 0) {
          uVar23 = pdb_1400aede0(plStack_128,&uStack_118);
          bVar36 = (byte)(uVar23 >> 0x39);
          auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
          auVar37 = pshuflw(auVar37,auVar37,0);
          lVar28 = 0;
          while( true ) {
            uVar23 = uVar23 & puStack_98[1];
            pcVar33 = (char *)(*puStack_98 + uVar23);
            auVar42[0] = -(*pcVar33 == auVar37[0]);
            auVar42[1] = -(pcVar33[1] == auVar37[1]);
            auVar42[2] = -(pcVar33[2] == auVar37[2]);
            auVar42[3] = -(pcVar33[3] == auVar37[3]);
            auVar42[4] = -(pcVar33[4] == auVar37[4]);
            auVar42[5] = -(pcVar33[5] == auVar37[5]);
            auVar42[6] = -(pcVar33[6] == auVar37[6]);
            auVar42[7] = -(pcVar33[7] == auVar37[7]);
            auVar42[8] = -(pcVar33[8] == auVar37[0]);
            auVar42[9] = -(pcVar33[9] == auVar37[1]);
            auVar42[10] = -(pcVar33[10] == auVar37[2]);
            auVar42[0xb] = -(pcVar33[0xb] == auVar37[3]);
            auVar42[0xc] = -(pcVar33[0xc] == auVar37[4]);
            auVar42[0xd] = -(pcVar33[0xd] == auVar37[5]);
            auVar42[0xe] = -(pcVar33[0xe] == auVar37[6]);
            auVar42[0xf] = -(pcVar33[0xf] == auVar37[7]);
            uVar32 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
            uVar30 = (uint)uVar32;
            while (uVar32 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar30; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              lVar21 = *puStack_98 + (uVar8 + uVar23 & puStack_98[1]) * -0x40;
              if (iVar5 == *(int *)(lVar21 + -0x40)) {
                uStack_118 = *(undefined8 *)(lVar21 + -0x20);
                uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(lVar21 + -0x18));
                goto joined_r0x000140b66ffe;
              }
              uVar32 = (ushort)(uVar30 - 1) & (ushort)uVar30;
              uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar32);
            }
            auVar40[0] = -(*pcVar33 == (char)iVar10);
            auVar40[1] = -(pcVar33[1] == cVar45);
            auVar40[2] = -(pcVar33[2] == cVar46);
            auVar40[3] = -(pcVar33[3] == cVar47);
            auVar40[4] = -(pcVar33[4] == (char)iVar11);
            auVar40[5] = -(pcVar33[5] == cVar48);
            auVar40[6] = -(pcVar33[6] == cVar49);
            auVar40[7] = -(pcVar33[7] == cVar50);
            auVar40[8] = -(pcVar33[8] == (char)iVar12);
            auVar40[9] = -(pcVar33[9] == cVar51);
            auVar40[10] = -(pcVar33[10] == cVar52);
            auVar40[0xb] = -(pcVar33[0xb] == cVar53);
            auVar40[0xc] = -(pcVar33[0xc] == (char)iVar13);
            auVar40[0xd] = -(pcVar33[0xd] == cVar54);
            auVar40[0xe] = -(pcVar33[0xe] == cVar55);
            auVar40[0xf] = -(pcVar33[0xf] == cVar56);
            if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
            uVar23 = uVar23 + lVar28 + 0x10;
            lVar28 = lVar28 + 0x10;
          }
        }
        uStack_118 = 0;
        uStack_110 = uStack_110 & 0xffffffff00000000;
joined_r0x000140b66ffe:
        uVar57 = 0;
        uVar58 = 0;
        if (!bVar19) {
          uVar57 = (undefined4)*puStack_a8;
          uVar58 = (undefined4)((ulonglong)*puStack_a8 >> 0x20);
        }
        uStack_15d = (undefined4)uStack_110;
        uStack_165 = (undefined6)uStack_118;
        uStack_15f = (undefined2)((ulonglong)uStack_118 >> 0x30);
        *puStack_138 = uStack_cc;
        lVar28 = *(longlong *)(lVar34 + 0x30);
        uVar22 = *(undefined8 *)(lVar34 + 0x40);
        if (lVar28 == *(longlong *)(lVar34 + 0x20)) {
          pdb_142d7f080(lVar34 + 0x20);
        }
        lVar21 = *(longlong *)(lVar34 + 0x28);
        lVar24 = lVar28 * 0x38;
        *(undefined8 *)(lVar21 + lVar24) = uVar22;
        *(byte *)(lVar21 + 8 + lVar24) = (bVar4 ^ 0x1b) + cVar27 * '\x02';
        auVar16._1_8_ = uStack_177;
        auVar16[0] = cStack_178;
        auVar16._9_6_ = uStack_16f;
        auVar16[0xf] = uStack_169;
        auVar18[1] = uStack_168;
        auVar18[0] = uStack_169;
        auVar18._2_2_ = uStack_167;
        auVar18._4_6_ = uStack_165;
        auVar18._10_2_ = uStack_15f;
        auVar18._12_4_ = uStack_15d;
        *(undefined1 (*) [16])(lVar21 + 9 + lVar24) = auVar16;
        *(undefined1 (*) [16])(lVar21 + 0x18 + lVar24) = auVar18;
        *(ulonglong *)(lVar21 + 0x28 + lVar24) = CONCAT44(uVar57,uVar58);
        *(undefined1 *)(lVar21 + 0x30 + lVar24) = 1;
        *(longlong *)(lVar34 + 0x30) = lVar28 + 1;
      }
      else {
        fVar14 = *(float *)(pcStack_a0 + 0xc) / fVar2;
        if (*(float *)(pcStack_a0 + 0xc) / fVar2 <= fVar20) {
          fVar14 = fVar20;
        }
        if (*(float *)(pcStack_a0 + 0x18) <= fVar14) {
          *(float *)(pcStack_a0 + 0x18) =
               *(float *)(pcStack_a0 + 0x18) + *(float *)(lStack_130 + 0x28);
          goto LAB_140b66b44;
        }
        if (uStack_b8 == uStack_c8) {
          pdb_142d896b0(&uStack_c8);
        }
        puStack_c0[uVar23] = uVar25;
        *(float *)(pcStack_a0 + 0x18) =
             *(float *)(pcStack_a0 + 0x18) + *(float *)(lStack_130 + 0x28);
        lVar28 = *(longlong *)(pcStack_a0 + 0x10);
        if (*(char *)(lVar28 + 0x10) != '\0') goto LAB_140b66c47;
LAB_140b66bd2:
        uStack_b8 = uVar23 + 1;
        iVar5 = *(int *)(lVar28 + 0x14);
        lVar21 = pdb_140c40010(uStack_b0,iVar5);
        bVar19 = true;
        if ((lVar21 == 0) || (1 < *(byte *)(lVar21 + 0x4f))) {
          puStack_a8 = (undefined8 *)0x0;
          cVar27 = '\0';
        }
        else {
          puStack_a8 = (undefined8 *)(lVar21 + 0x38);
          cVar27 = *(char *)(lVar21 + 0x4e);
          bVar19 = false;
        }
        cVar3 = pcStack_a0[0x1c];
        *puStack_140 = uStack_d0;
        if (cVar3 == '\0') {
          pdb_1403afce0(lStack_d8,*(undefined4 *)(lVar28 + 0x14),*(undefined4 *)(lVar28 + 0x18));
        }
        else {
          uVar22 = pdb_1400af680(lStack_120,lVar28 + 0x14);
          pdb_140cab960(&cStack_178,lStack_d8,uVar22,lVar28 + 0x14);
        }
        bVar4 = pcStack_a0[0x1c];
        uStack_118 = CONCAT44(uStack_118._4_4_,iVar5);
        if (puStack_98[3] != 0) {
          uVar23 = pdb_1400aede0(plStack_128,&uStack_118);
          bVar36 = (byte)(uVar23 >> 0x39);
          auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
          auVar37 = pshuflw(auVar37,auVar37,0);
          lVar28 = 0;
          while( true ) {
            uVar23 = uVar23 & puStack_98[1];
            pcVar33 = (char *)(*puStack_98 + uVar23);
            auVar41[0] = -(*pcVar33 == auVar37[0]);
            auVar41[1] = -(pcVar33[1] == auVar37[1]);
            auVar41[2] = -(pcVar33[2] == auVar37[2]);
            auVar41[3] = -(pcVar33[3] == auVar37[3]);
            auVar41[4] = -(pcVar33[4] == auVar37[4]);
            auVar41[5] = -(pcVar33[5] == auVar37[5]);
            auVar41[6] = -(pcVar33[6] == auVar37[6]);
            auVar41[7] = -(pcVar33[7] == auVar37[7]);
            auVar41[8] = -(pcVar33[8] == auVar37[0]);
            auVar41[9] = -(pcVar33[9] == auVar37[1]);
            auVar41[10] = -(pcVar33[10] == auVar37[2]);
            auVar41[0xb] = -(pcVar33[0xb] == auVar37[3]);
            auVar41[0xc] = -(pcVar33[0xc] == auVar37[4]);
            auVar41[0xd] = -(pcVar33[0xd] == auVar37[5]);
            auVar41[0xe] = -(pcVar33[0xe] == auVar37[6]);
            auVar41[0xf] = -(pcVar33[0xf] == auVar37[7]);
            uVar32 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar41[0xf] >> 7) << 0xf;
            uVar30 = (uint)uVar32;
            while (uVar32 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar30; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              lVar21 = *puStack_98 + (uVar8 + uVar23 & puStack_98[1]) * -0x40;
              if (iVar5 == *(int *)(lVar21 + -0x40)) {
                uStack_118 = *(undefined8 *)(lVar21 + -0x20);
                uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(lVar21 + -0x18));
                goto joined_r0x000140b66e23;
              }
              uVar32 = (ushort)(uVar30 - 1) & (ushort)uVar30;
              uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar32);
            }
            auVar39[0] = -(*pcVar33 == (char)iVar10);
            auVar39[1] = -(pcVar33[1] == cVar45);
            auVar39[2] = -(pcVar33[2] == cVar46);
            auVar39[3] = -(pcVar33[3] == cVar47);
            auVar39[4] = -(pcVar33[4] == (char)iVar11);
            auVar39[5] = -(pcVar33[5] == cVar48);
            auVar39[6] = -(pcVar33[6] == cVar49);
            auVar39[7] = -(pcVar33[7] == cVar50);
            auVar39[8] = -(pcVar33[8] == (char)iVar12);
            auVar39[9] = -(pcVar33[9] == cVar51);
            auVar39[10] = -(pcVar33[10] == cVar52);
            auVar39[0xb] = -(pcVar33[0xb] == cVar53);
            auVar39[0xc] = -(pcVar33[0xc] == (char)iVar13);
            auVar39[0xd] = -(pcVar33[0xd] == cVar54);
            auVar39[0xe] = -(pcVar33[0xe] == cVar55);
            auVar39[0xf] = -(pcVar33[0xf] == cVar56);
            if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') break;
            uVar23 = uVar23 + lVar28 + 0x10;
            lVar28 = lVar28 + 0x10;
          }
        }
        uStack_118 = 0;
        uStack_110 = uStack_110 & 0xffffffff00000000;
joined_r0x000140b66e23:
        uVar57 = 0;
        uVar58 = 0;
        if (!bVar19) {
          uVar57 = (undefined4)*puStack_a8;
          uVar58 = (undefined4)((ulonglong)*puStack_a8 >> 0x20);
        }
        uStack_15d = (undefined4)uStack_110;
        uStack_165 = (undefined6)uStack_118;
        uStack_15f = (undefined2)((ulonglong)uStack_118 >> 0x30);
        *puStack_138 = uStack_cc;
        lVar28 = *(longlong *)(lVar34 + 0x30);
        uVar22 = *(undefined8 *)(lVar34 + 0x40);
        if (lVar28 == *(longlong *)(lVar34 + 0x20)) {
          pdb_142d7f080(lVar34 + 0x20);
        }
        lVar21 = *(longlong *)(lVar34 + 0x28);
        lVar24 = lVar28 * 0x38;
        *(undefined8 *)(lVar21 + lVar24) = uVar22;
        *(byte *)(lVar21 + 8 + lVar24) = (cVar27 * '\x02' | bVar4) + 0x1a;
        auVar15._1_8_ = uStack_177;
        auVar15[0] = cStack_178;
        auVar15._9_6_ = uStack_16f;
        auVar15[0xf] = uStack_169;
        auVar17[1] = uStack_168;
        auVar17[0] = uStack_169;
        auVar17._2_2_ = uStack_167;
        auVar17._4_6_ = uStack_165;
        auVar17._10_2_ = uStack_15f;
        auVar17._12_4_ = uStack_15d;
        *(undefined1 (*) [16])(lVar21 + 9 + lVar24) = auVar15;
        *(undefined1 (*) [16])(lVar21 + 0x18 + lVar24) = auVar17;
        *(ulonglong *)(lVar21 + 0x28 + lVar24) = CONCAT44(uVar57,uVar58);
        *(undefined1 *)(lVar21 + 0x30 + lVar24) = 1;
        *(longlong *)(lVar34 + 0x30) = lVar28 + 1;
      }
      *(longlong *)(lVar34 + 0x40) = *(longlong *)(lVar34 + 0x40) + 1;
      pcVar33 = pcStack_e0;
    }
  } while( true );
  uVar26 = uStack_b8 >> 1;
  if (uVar26 != 0) {
    if (uStack_b8 < 8) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar26 & 0xfffffffffffffffc;
      pauVar31 = (undefined1 (*) [16])(puStack_c0 + 2);
      lVar34 = 0;
      do {
        auVar37 = pauVar31[-1];
        auVar42 = *pauVar31;
        auVar38 = *(undefined1 (*) [16])(puStack_c0 + uStack_b8 + lVar34 + -4);
        auVar43 = *(undefined1 (*) [16])(puStack_c0 + uStack_b8 + lVar34 + -2);
        auVar44._0_8_ = auVar43._8_8_;
        auVar44._8_4_ = auVar43._0_4_;
        auVar44._12_4_ = auVar43._4_4_;
        auVar43._0_8_ = auVar38._8_8_;
        auVar43._8_4_ = auVar38._0_4_;
        auVar43._12_4_ = auVar38._4_4_;
        pauVar31[-1] = auVar44;
        *pauVar31 = auVar43;
        auVar38._0_8_ = auVar37._8_8_;
        auVar38._8_4_ = auVar37._0_4_;
        auVar38._12_4_ = auVar37._4_4_;
        auVar37._0_8_ = auVar42._8_8_;
        auVar37._8_4_ = auVar42._0_4_;
        auVar37._12_4_ = auVar42._4_4_;
        *(undefined1 (*) [16])(puStack_c0 + uStack_b8 + lVar34 + -2) = auVar38;
        *(undefined1 (*) [16])(puStack_c0 + uStack_b8 + lVar34 + -4) = auVar37;
        lVar34 = lVar34 + -4;
        pauVar31 = pauVar31 + 2;
      } while (-lVar34 != (uVar26 & 0xfffffffffffffffc));
      if (uVar26 == uVar23) goto joined_r0x000140b6703c;
    }
    puVar29 = puStack_c0 + uVar23;
    lVar34 = -uVar23;
    do {
      uVar23 = *puVar29;
      *puVar29 = puStack_c0[uStack_b8 + lVar34 + -1];
      puStack_c0[uStack_b8 + lVar34 + -1] = uVar23;
      lVar34 = lVar34 + -1;
      puVar29 = puVar29 + 1;
    } while (-lVar34 != uVar26);
  }
joined_r0x000140b6703c:
  uStack_b0 = uStack_c8;
  puStack_98 = puStack_c0;
  if (uStack_b8 != 0) {
    puVar35 = puStack_c0 + uStack_b8;
    puVar29 = puStack_c0;
    do {
      uVar26 = *puVar29;
      uVar23 = *(ulonglong *)(lVar28 + 0x10);
      if (uVar23 <= uVar26) {
LAB_140b67238:
        pdb_142dc7ef8(uVar26,uVar23,&UNK_14305a960);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar34 = *(longlong *)(lVar28 + 8);
      lVar21 = uVar26 * 0x30;
      cVar45 = *(char *)(lVar34 + lVar21);
      puVar1 = (undefined8 *)(lVar34 + 0x20 + lVar21);
      uStack_f1 = puVar1[1];
      uStack_f8 = (undefined7)((ulonglong)*puVar1 >> 8);
      puVar1 = (undefined8 *)(lVar34 + 0x11 + lVar21);
      uStack_108 = *puVar1;
      uVar22 = puVar1[1];
      uStack_100 = (undefined7)uVar22;
      uStack_f9 = (undefined1)((ulonglong)uVar22 >> 0x38);
      puVar1 = (undefined8 *)(lVar34 + 1 + lVar21);
      uStack_118 = *puVar1;
      uStack_110 = puVar1[1];
      pub_142e32770(lVar34 + lVar21,lVar21 + lVar34 + 0x30,(~uVar26 + uVar23) * 0x30);
      uVar23 = uVar23 - 1;
      *(ulonglong *)(lVar28 + 0x10) = uVar23;
      if (cVar45 == '\f') goto LAB_140b67238;
      uStack_157 = uStack_f8;
      uStack_150 = uStack_f1;
      uStack_167 = (undefined2)uStack_108;
      uStack_165 = (undefined6)((ulonglong)uStack_108 >> 0x10);
      uStack_15f = (undefined2)uStack_100;
      uStack_15d = (undefined4)((uint7)uStack_100 >> 0x10);
      uStack_159 = (undefined1)((uint7)uStack_100 >> 0x30);
      uStack_158 = uStack_f9;
      uStack_177 = uStack_118;
      uStack_16f = (undefined6)uStack_110;
      uStack_169 = (undefined1)(uStack_110 >> 0x30);
      uStack_168 = (undefined1)(uStack_110 >> 0x38);
      cStack_178 = cVar45;
      pdb_140b673e0(&cStack_178);
      puVar29 = puVar29 + 1;
    } while (puVar29 != puVar35);
  }
  if (uStack_b0 != 0) {
    pub_1406abac0((byte *)puStack_98,uStack_b0 << 3,8);
  }
  return;
}

