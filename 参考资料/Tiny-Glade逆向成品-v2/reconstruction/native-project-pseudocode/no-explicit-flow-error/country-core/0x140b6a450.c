// VA 0x140b6a450, PDB extent 1379 bytes
// country_core::systems::history::replay_auto_clutter::replay_auto_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_auto_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_auto_clutter::replay_auto_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_auto_clutter.rs
   Extent: 1379 */

void pdb_140b6a450(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  char cVar5;
  char *pcVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  char *pcVar18;
  undefined1 (*pauVar19) [16];
  ulonglong *puVar20;
  ulonglong *puVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char cStack_138;
  undefined8 uStack_137;
  undefined8 uStack_12f;
  undefined8 uStack_127;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined8 uStack_e1;
  longlong lStack_d8;
  undefined4 *puStack_d0;
  longlong lStack_c8;
  undefined4 uStack_bc;
  char *pcStack_b8;
  char *pcStack_b0;
  ulonglong uStack_a8;
  ulonglong *puStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong *puStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puVar20 = (ulonglong *)*param_1;
  fVar2 = *(float *)(puVar20 + 5);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  fVar12 = _DAT_142e37ad4;
  if (puVar20[3] == 0) {
    return;
  }
  uVar13 = puVar20[1];
  uVar16 = *puVar20;
  if (puVar20[2] < *puVar20) {
    uVar16 = 0;
  }
  lVar14 = (puVar20[2] - uVar16) * 0x40;
  lStack_d8 = uVar13 + lVar14;
  uStack_a8 = 0;
  puStack_a0 = (ulonglong *)0x8;
  uStack_98 = 0;
  pcVar6 = *(char **)(uVar13 + 8 + lVar14);
  pcStack_b8 = pcVar6 + *(longlong *)(uVar13 + 0x10 + lVar14) * 0x30;
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0x1c);
  puStack_88 = (ulonglong *)*param_3;
  puStack_d0 = (undefined4 *)param_3[2];
  lStack_c8 = *param_2;
  pcVar18 = pcStack_b8;
  uStack_90 = 0;
  while (pcStack_b0 = pcVar6, uVar13 = uStack_90, lVar14 = lStack_d8, pcStack_b0 != pcVar18) {
    pcVar6 = pcStack_b0 + 0x30;
    uStack_90 = uVar13 + 1;
    if (*pcStack_b0 == '\t') {
      if ((*(float *)(pcStack_b0 + 0x18) == 0.0) && (!NAN(*(float *)(pcStack_b0 + 0x18)))) {
        lVar14 = *(longlong *)(pcStack_b0 + 0x10);
        cVar5 = pcStack_b0[0x1c];
        *puStack_d0 = uStack_bc;
        if (cVar5 == '\0') {
          pdb_1403b05d0(puStack_88);
        }
        else {
          lVar22 = puStack_88[3];
          if (lVar22 != 0) {
            pauVar23 = (undefined1 (*) [16])*puStack_88;
            auVar25 = *pauVar23;
            uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
            pauVar19 = pauVar23 + 1;
            do {
              if ((short)uVar17 == 0) {
                do {
                  auVar25 = *pauVar19;
                  pauVar23 = pauVar23 + -8;
                  pauVar19 = pauVar19 + 1;
                  uVar17 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar17 == 0);
              }
              iVar8 = 0;
              for (uVar9 = uVar17; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                iVar8 = iVar8 + 1;
              }
              if (*(longlong *)((longlong)pauVar23 + (-8 - (ulonglong)(uint)(iVar8 << 3))) ==
                  *(longlong *)(lVar14 + 0x10)) {
                pdb_140cacca0(puStack_88);
              }
              uVar17 = uVar17 - 1 & uVar17;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
        }
      }
      uVar16 = uStack_98;
      if (pcStack_b0[8] == '\0') {
        if (uStack_98 == uStack_a8) {
          pdb_142d896b0(&uStack_a8);
        }
        puStack_a0[uVar16] = uVar13;
        uStack_98 = uVar16 + 1;
        pcVar18 = pcStack_b8;
      }
      else {
        fVar3 = *(float *)(pcStack_b0 + 0x18);
        fVar10 = *(float *)(pcStack_b0 + 0xc) / fVar2;
        if (*(float *)(pcStack_b0 + 0xc) / fVar2 <= fVar12) {
          fVar10 = fVar12;
        }
        if (fVar10 < fVar3) {
          if (uStack_98 == uStack_a8) {
            pdb_142d896b0(&uStack_a8);
          }
          puStack_a0[uVar16] = uVar13;
          uStack_98 = uVar16 + 1;
          fVar3 = *(float *)(pcStack_b0 + 0x18);
        }
        *(float *)(pcStack_b0 + 0x18) = fVar3 + *(float *)(lStack_c8 + 0x28);
        pcVar18 = pcStack_b8;
      }
    }
  }
  uVar13 = uStack_98 >> 1;
  if (uVar13 != 0) {
    if (uStack_98 < 8) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar13 & 0xfffffffffffffffc;
      pauVar19 = (undefined1 (*) [16])(puStack_a0 + 2);
      lVar22 = 0;
      do {
        auVar25 = pauVar19[-1];
        auVar4 = *pauVar19;
        auVar24 = *(undefined1 (*) [16])(puStack_a0 + uStack_98 + lVar22 + -4);
        auVar26 = *(undefined1 (*) [16])(puStack_a0 + uStack_98 + lVar22 + -2);
        auVar27._0_8_ = auVar26._8_8_;
        auVar27._8_4_ = auVar26._0_4_;
        auVar27._12_4_ = auVar26._4_4_;
        auVar26._0_8_ = auVar24._8_8_;
        auVar26._8_4_ = auVar24._0_4_;
        auVar26._12_4_ = auVar24._4_4_;
        pauVar19[-1] = auVar27;
        *pauVar19 = auVar26;
        auVar24._0_8_ = auVar25._8_8_;
        auVar24._8_4_ = auVar25._0_4_;
        auVar24._12_4_ = auVar25._4_4_;
        auVar25._0_8_ = auVar4._8_8_;
        auVar25._8_4_ = auVar4._0_4_;
        auVar25._12_4_ = auVar4._4_4_;
        *(undefined1 (*) [16])(puStack_a0 + uStack_98 + lVar22 + -2) = auVar24;
        *(undefined1 (*) [16])(puStack_a0 + uStack_98 + lVar22 + -4) = auVar25;
        lVar22 = lVar22 + -4;
        pauVar19 = pauVar19 + 2;
      } while (-lVar22 != (uVar13 & 0xfffffffffffffffc));
      if (uVar13 == uVar16) goto joined_r0x000140b6a6d8;
    }
    puVar20 = puStack_a0 + uVar16;
    lVar22 = -uVar16;
    do {
      uVar16 = *puVar20;
      *puVar20 = puStack_a0[uStack_98 + lVar22 + -1];
      puStack_a0[uStack_98 + lVar22 + -1] = uVar16;
      lVar22 = lVar22 + -1;
      puVar20 = puVar20 + 1;
    } while (-lVar22 != uVar13);
  }
joined_r0x000140b6a6d8:
  uStack_90 = uStack_a8;
  puStack_88 = puStack_a0;
  if (uStack_98 != 0) {
    puVar20 = puStack_a0 + uStack_98;
    puVar21 = puStack_a0;
    do {
      uVar13 = *puVar21;
      uVar16 = *(ulonglong *)(lVar14 + 0x10);
      if (uVar16 <= uVar13) {
LAB_140b6a8b0:
        pdb_142dc7ef8(uVar13,uVar16,&UNK_14305ac50);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar22 = *(longlong *)(lVar14 + 8);
      lVar15 = uVar13 * 0x30;
      cVar5 = *(char *)(lVar22 + lVar15);
      puVar1 = (undefined8 *)(lVar22 + 0x20 + lVar15);
      uStack_e1 = puVar1[1];
      uStack_e8 = (undefined7)((ulonglong)*puVar1 >> 8);
      puVar1 = (undefined8 *)(lVar22 + 0x11 + lVar15);
      uStack_f8 = *puVar1;
      uVar11 = puVar1[1];
      uStack_f0 = (undefined7)uVar11;
      uStack_e9 = (undefined1)((ulonglong)uVar11 >> 0x38);
      puVar1 = (undefined8 *)(lVar22 + 1 + lVar15);
      uStack_108 = *puVar1;
      uStack_100 = puVar1[1];
      pub_142e32770(lVar22 + lVar15,lVar15 + lVar22 + 0x30,(~uVar13 + uVar16) * 0x30);
      uVar16 = uVar16 - 1;
      *(ulonglong *)(lVar14 + 0x10) = uVar16;
      if (cVar5 == '\f') goto LAB_140b6a8b0;
      uStack_117 = uStack_e8;
      uStack_110 = uStack_e1;
      uStack_127 = uStack_f8;
      uStack_11f = uStack_f0;
      uStack_118 = uStack_e9;
      uStack_137 = uStack_108;
      uStack_12f = uStack_100;
      cStack_138 = cVar5;
      pdb_140b6b0e0(&cStack_138);
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar20);
  }
  if (uStack_90 != 0) {
    pub_1406abac0((byte *)puStack_88,uStack_90 << 3,8);
  }
  return;
}

