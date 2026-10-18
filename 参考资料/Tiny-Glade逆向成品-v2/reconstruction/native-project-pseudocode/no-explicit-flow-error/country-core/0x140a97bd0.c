// VA 0x140a97bd0, PDB extent 4119 bytes
// country_core::systems::audio::forest_audio::forest_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/forest_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::forest_audio::forest_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/forest_audio.rs
   Extent: 4119 */

void pdb_140a97bd0(uint *param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  undefined1 (*pauVar13) [16];
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar23;
  uint *unaff_R12;
  uint *unaff_R13;
  byte *pbVar24;
  undefined *unaff_R15;
  undefined8 *puVar25;
  bool bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char unaff_XMM8_Ba;
  char unaff_XMM8_Bb;
  char unaff_XMM8_Bc;
  char unaff_XMM8_Bd;
  char unaff_XMM8_Be;
  char unaff_XMM8_Bf;
  char unaff_XMM8_Bg;
  char unaff_XMM8_Bh;
  char unaff_XMM8_Bi;
  char unaff_XMM8_Bj;
  char unaff_XMM8_Bk;
  char unaff_XMM8_Bl;
  char unaff_XMM8_Bm;
  char unaff_XMM8_Bn;
  char unaff_XMM8_Bo;
  char unaff_XMM8_Bp;
  longlong lStack_168;
  byte *pbStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  uint *puStack_f0;
  ushort uStack_e8;
  undefined6 uStack_e6;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  uint *puStack_a8;
  undefined1 (*pauStack_a0) [16];
  char cStack_95;
  uint uStack_94;
  undefined1 (*pauStack_90) [16];
  char cStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  cStack_81 = pdb_140e94b40();
  if (cStack_81 == '\0') {
    uStack_150 = 0;
    goto LAB_140a97dc2;
  }
  unaff_R15 = &UNK_1430461db;
  puVar20 = (uint *)0x3f;
  uVar18 = 0x3f;
  lVar10 = pdb_140a9c350(&UNK_1430461db);
  if (lVar10 == 1) {
    if (0x3f < uVar18) {
      pdb_142dc8070(&UNK_1430461db,0x3f,0,uVar18,&UNK_1430462e0);
LAB_140a988cc:
      pdb_142dc8070(&UNK_1430461db,0x3f);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    unaff_R15 = &UNK_1430461db;
    uVar11 = pdb_140a9c350(&UNK_1430461db);
    if ((uVar11 & 1) != 0) {
      if (0x3f < uVar18 + 2) goto LAB_140a988cc;
      puVar20 = (uint *)(0x3d - uVar18);
      unaff_R15 = &UNK_1430461dd + uVar18;
    }
  }
  puVar12 = &UNK_143045d73;
  unaff_R12 = (uint *)&UNK_143045d3e;
  do {
    pbVar1 = puVar12 + -1;
    uVar16 = (uint)(char)*pbVar1;
    if ((int)uVar16 < 0) {
      bVar27 = puVar12[-2];
      if ((char)bVar27 < -0x40) {
        bVar3 = puVar12[-3];
        if ((char)bVar3 < -0x40) {
          pbVar24 = puVar12 + -4;
          puVar12 = puVar12 + -4;
          uVar16 = bVar3 & 0x3f | (*pbVar24 & 7) << 6;
        }
        else {
          puVar12 = puVar12 + -3;
          uVar16 = bVar3 & 0xf;
        }
        uVar16 = bVar27 & 0x3f | uVar16 << 6;
      }
      else {
        puVar12 = puVar12 + -2;
        uVar16 = bVar27 & 0x1f;
      }
      uVar16 = (uint)(*pbVar1 & 0x3f) | uVar16 << 6;
      if (uVar16 != 0x5c) goto LAB_140a97d19;
LAB_140a97d36:
      if ((undefined *)0x35 < puVar12 + -0x143045d3d) {
        pdb_142dc8070(&UNK_143045d3e,0x35,puVar12 + -0x143045d3d,0x35,&UNK_1430462c0);
LAB_140a98846:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(unaff_R15);
      }
      unaff_R13 = (uint *)(0x34 - (longlong)(puVar12 + -0x143045d3e));
      unaff_R12 = (uint *)(puVar12 + 1);
      goto LAB_140a97d5a;
    }
    puVar12 = puVar12 + -1;
    if (uVar16 == 0x5c) goto LAB_140a97d36;
LAB_140a97d19:
    if (uVar16 == 0x2f) goto LAB_140a97d36;
  } while (puVar12 != &UNK_143045d3e);
  unaff_R13 = (uint *)0x35;
LAB_140a97d5a:
  pauVar13 = (undefined1 (*) [16])pdb_140e97000();
  if (pauVar13[6][8] != '\x01') goto LAB_140a987c6;
LAB_140a97d69:
  if (*(longlong *)*pauVar13 != 0) goto LAB_140a987ba;
  *(undefined8 *)*pauVar13 = 0xffffffffffffffff;
  pauStack_90 = pauVar13;
  uStack_148 = pdb_140e94f10(*pauVar13 + 8,unaff_R15,puVar20,unaff_R12,unaff_R13,1,0);
  *(longlong *)*pauStack_90 = *(longlong *)*pauStack_90 + 1;
  uStack_150 = 1;
  uStack_108 = uStack_148;
LAB_140a97dc2:
  fVar8 = _DAT_142e36f28;
  uVar18 = **(ulonglong **)*param_3;
  lVar10 = 4;
  if (1 < uVar18) {
    lVar10 = uVar18 - 2;
  }
  if ((lVar10 == 0) || ((lVar10 == 9 && ((char)(*(ulonglong **)*param_3)[1] == '\0')))) {
    uStack_d8 = 0;
    pbStack_d0 = (byte *)0x8;
    uStack_c8 = 0;
    lStack_c0 = *param_2;
    pauStack_90 = (undefined1 (*) [16])param_2[1];
    puVar17 = *(uint **)(lStack_c0 + 0xf8);
    unaff_R13 = puVar17 + *(longlong *)(lStack_c0 + 0x100);
    cStack_95 = *(char *)(lStack_c0 + 0x108);
    uStack_94 = param_1[7];
    puVar20 = *(uint **)param_1;
    puStack_a8 = *(uint **)(param_1 + 4);
    lVar10 = 0;
    lStack_110 = 8;
    iVar7 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                             CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                   CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
    unaff_XMM8_Ba = (char)iVar7;
    unaff_XMM8_Bb = (char)((uint)iVar7 >> 8);
    unaff_XMM8_Bc = (char)((uint)iVar7 >> 0x10);
    unaff_XMM8_Bd = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                             CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                   CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
    unaff_XMM8_Be = (char)iVar7;
    unaff_XMM8_Bf = (char)((uint)iVar7 >> 8);
    unaff_XMM8_Bg = (char)((uint)iVar7 >> 0x10);
    unaff_XMM8_Bh = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                             CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                   CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
    unaff_XMM8_Bi = (char)iVar7;
    unaff_XMM8_Bj = (char)((uint)iVar7 >> 8);
    unaff_XMM8_Bk = (char)((uint)iVar7 >> 0x10);
    unaff_XMM8_Bl = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                             CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                   CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
    unaff_XMM8_Bm = (char)iVar7;
    unaff_XMM8_Bn = (char)((uint)iVar7 >> 8);
    unaff_XMM8_Bo = (char)((uint)iVar7 >> 0x10);
    unaff_XMM8_Bp = (char)((uint)iVar7 >> 0x18);
    lStack_b8 = 0;
    lStack_b0 = 0;
    pauStack_a0 = (undefined1 (*) [16])((ulonglong)pauStack_a0 & 0xffffffff00000000);
LAB_140a97ebd:
    do {
      uVar18 = uStack_c8;
      if (cStack_95 == '\0') {
        if ((uint)pauStack_a0 == (uint)lVar10) {
          do {
            if (puVar17 == unaff_R13) goto LAB_140a983f0;
            uVar16 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar10 = *(longlong *)(*(longlong *)pauStack_90[0x10] + 0x58 + (ulonglong)uVar16 * 0xa0)
            ;
          } while (lVar10 == 0);
          lVar23 = *(longlong *)pauStack_90[0x10] + (ulonglong)uVar16 * 0xa0;
          uVar11 = (ulonglong)*(uint *)(lVar23 + 0x94);
          lVar21 = *(longlong *)pauStack_90[0x1a] + uVar11 * 0x48;
          uVar11 = *(ulonglong *)(*(longlong *)pauStack_90[0x1a] + 0x40 + uVar11 * 0x48);
          if ((*(ulonglong *)(lStack_c0 + 0x110) < uVar11) &&
             (uVar19 = *(ulonglong *)
                        (*(longlong *)(lVar21 + 0x38) + *(ulonglong *)(lStack_c0 + 0x110) * 8),
             uVar19 != 0)) {
            lStack_b8 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar19 * 0x30);
            uVar19 = *(ulonglong *)(lStack_c0 + 0x118);
            if (uVar11 <= uVar19) goto LAB_140a980b0;
LAB_140a98075:
            uVar11 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + uVar19 * 8);
            if (uVar11 == 0) goto LAB_140a980b0;
            lStack_b0 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar11 * 0x30);
          }
          else {
            lStack_b8 = 0;
            uVar19 = *(ulonglong *)(lStack_c0 + 0x118);
            if (uVar19 < uVar11) goto LAB_140a98075;
LAB_140a980b0:
            lStack_b0 = 0;
          }
          lStack_110 = *(longlong *)(lVar23 + 0x50);
          pauStack_a0._0_4_ = 0;
        }
        uVar16 = ~*(uint *)(lStack_110 + 8 + (ulonglong)(uint)pauStack_a0 * 0x10);
      }
      else {
        uVar16 = (uint)pauStack_a0;
        if ((uint)pauStack_a0 == (uint)lVar10) {
          do {
            if (puVar17 == unaff_R13) goto LAB_140a983f0;
            uVar16 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar10 = *(longlong *)(*(longlong *)pauStack_90[0x1a] + 0x10 + (ulonglong)uVar16 * 0x48)
            ;
          } while (lVar10 == 0);
          lVar21 = *(longlong *)pauStack_90[0x1a] + (ulonglong)uVar16 * 0x48;
          uVar11 = *(ulonglong *)(lVar21 + 0x40);
          if ((*(ulonglong *)(lStack_c0 + 0x110) < uVar11) &&
             (uVar19 = *(ulonglong *)
                        (*(longlong *)(lVar21 + 0x38) + *(ulonglong *)(lStack_c0 + 0x110) * 8),
             uVar19 != 0)) {
            lStack_b8 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar19 * 0x30);
            uVar19 = *(ulonglong *)(lStack_c0 + 0x118);
            if (uVar11 <= uVar19) goto LAB_140a9809c;
LAB_140a98036:
            uVar11 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + uVar19 * 8);
            if (uVar11 == 0) goto LAB_140a9809c;
            lStack_b0 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar11 * 0x30);
          }
          else {
            lStack_b8 = 0;
            uVar19 = *(ulonglong *)(lStack_c0 + 0x118);
            if (uVar19 < uVar11) goto LAB_140a98036;
LAB_140a9809c:
            lStack_b0 = 0;
          }
          uVar16 = 0;
          pauStack_a0._0_4_ = uVar16;
        }
      }
      plVar15 = (longlong *)(lStack_b8 + (ulonglong)uVar16 * 0x18);
      puVar25 = (undefined8 *)((ulonglong)uVar16 * 0x30 + lStack_b0);
      lStack_118 = *plVar15;
      if (uStack_c8 == uStack_d8) {
        pdb_142d896b0(&uStack_d8);
      }
      pauStack_a0 = (undefined1 (*) [16])CONCAT44(pauStack_a0._4_4_,(uint)pauStack_a0 + 1);
      *(longlong *)(pbStack_d0 + uVar18 * 8) = lStack_118;
      uStack_c8 = uVar18 + 1;
      uStack_120 = *(undefined4 *)(puVar25 + 1);
      uStack_128 = *puVar25;
      if ((*(float *)((longlong)plVar15 + 0xc) <= 0.0) ||
         (fVar8 <= *(float *)((longlong)plVar15 + 0xc))) {
        *puStack_a8 = uStack_94;
        uVar14 = pdb_1400af0a0(puVar20 + 0x16,plVar15);
        pdb_140caba90(&pauStack_100,puVar20 + 0xe,uVar14);
        puVar9 = puStack_f0;
        if ((int)pauStack_100 == 1) {
          *puStack_a8 = uStack_94;
          uVar18 = *(ulonglong *)(puVar20 + 6);
          uVar11 = *(ulonglong *)(puVar20 + 0xc);
          if (uVar11 == uVar18) {
            pdb_1407412b0(puVar20 + 6);
            uVar18 = *(ulonglong *)(puVar20 + 6);
            uVar11 = *(ulonglong *)(puVar20 + 0xc);
          }
          *(ulonglong *)(puVar20 + 0xc) = uVar11 + 1;
          uVar19 = 0;
          if (uVar18 <= uVar11 + *(longlong *)(puVar20 + 10)) {
            uVar19 = uVar18;
          }
          *(uint **)(*(longlong *)(puVar20 + 8) +
                    ((uVar11 + *(longlong *)(puVar20 + 10)) - uVar19) * 8) = puVar9;
        }
      }
      else {
        if (*(longlong *)(puVar20 + 0x14) != 0) {
          uVar18 = pdb_1400af0a0(puVar20 + 0x16,plVar15);
          bVar27 = (byte)(uVar18 >> 0x39);
          auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
          auVar28 = pshuflw(auVar28,auVar28,0);
          lVar21 = 0;
          while( true ) {
            uVar18 = uVar18 & *(ulonglong *)(puVar20 + 0x10);
            auVar2 = *(undefined1 (*) [16])(*(longlong *)(puVar20 + 0xe) + uVar18);
            auVar30[0] = -(auVar2[0] == auVar28[0]);
            auVar30[1] = -(auVar2[1] == auVar28[1]);
            auVar30[2] = -(auVar2[2] == auVar28[2]);
            auVar30[3] = -(auVar2[3] == auVar28[3]);
            auVar30[4] = -(auVar2[4] == auVar28[4]);
            auVar30[5] = -(auVar2[5] == auVar28[5]);
            auVar30[6] = -(auVar2[6] == auVar28[6]);
            auVar30[7] = -(auVar2[7] == auVar28[7]);
            auVar30[8] = -(auVar2[8] == auVar28[0]);
            auVar30[9] = -(auVar2[9] == auVar28[1]);
            auVar30[10] = -(auVar2[10] == auVar28[2]);
            auVar30[0xb] = -(auVar2[0xb] == auVar28[3]);
            auVar30[0xc] = -(auVar2[0xc] == auVar28[4]);
            auVar30[0xd] = -(auVar2[0xd] == auVar28[5]);
            auVar30[0xe] = -(auVar2[0xe] == auVar28[6]);
            auVar30[0xf] = -(auVar2[0xf] == auVar28[7]);
            uVar22 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar30[0xf] >> 7) << 0xf;
            uVar16 = (uint)uVar22;
            if (uVar22 != 0) {
              do {
                uVar5 = 0;
                for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                lVar23 = *(longlong *)(puVar20 + 0xe) +
                         (uVar5 + uVar18 & *(ulonglong *)(puVar20 + 0x10)) * -0x10;
                if (*plVar15 == *(longlong *)(lVar23 + -0x10)) {
                  unaff_R15 = *(undefined **)(lVar23 + -8);
                  *puStack_a8 = uStack_94;
                  if (*(undefined **)(puVar20 + 4) <= unaff_R15) goto LAB_140a98846;
                  lVar21 = (longlong)unaff_R15 * 0x38;
                  pdb_140a87e10(*(longlong *)(puVar20 + 2) + lVar21);
                  if (*(undefined **)(puVar20 + 4) <= unaff_R15) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(unaff_R15,*(undefined **)(puVar20 + 4),&UNK_143045da8);
                  }
                  lVar23 = *(longlong *)(puVar20 + 2);
                  uVar18 = *(ulonglong *)(lVar23 + 0x10 + lVar21);
                  uVar11 = *(ulonglong *)(lVar23 + 0x28 + lVar21);
                  if (uVar18 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar11,uVar18,&UNK_143043a80);
                  }
                  pdb_140a8e190(uVar11 * 0x30 + *(longlong *)(lVar23 + lVar21 + 8),&uStack_128);
                  goto LAB_140a97ebd;
                }
                uVar22 = (ushort)(uVar16 - 1) & (ushort)uVar16;
                uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar22);
              } while (uVar22 != 0);
            }
            auVar29[0] = -(auVar2[0] == unaff_XMM8_Ba);
            auVar29[1] = -(auVar2[1] == unaff_XMM8_Bb);
            auVar29[2] = -(auVar2[2] == unaff_XMM8_Bc);
            auVar29[3] = -(auVar2[3] == unaff_XMM8_Bd);
            auVar29[4] = -(auVar2[4] == unaff_XMM8_Be);
            auVar29[5] = -(auVar2[5] == unaff_XMM8_Bf);
            auVar29[6] = -(auVar2[6] == unaff_XMM8_Bg);
            auVar29[7] = -(auVar2[7] == unaff_XMM8_Bh);
            auVar29[8] = -(auVar2[8] == unaff_XMM8_Bi);
            auVar29[9] = -(auVar2[9] == unaff_XMM8_Bj);
            auVar29[10] = -(auVar2[10] == unaff_XMM8_Bk);
            auVar29[0xb] = -(auVar2[0xb] == unaff_XMM8_Bl);
            auVar29[0xc] = -(auVar2[0xc] == unaff_XMM8_Bm);
            auVar29[0xd] = -(auVar2[0xd] == unaff_XMM8_Bn);
            auVar29[0xe] = -(auVar2[0xe] == unaff_XMM8_Bo);
            auVar29[0xf] = -(auVar2[0xf] == unaff_XMM8_Bp);
            if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
            uVar18 = uVar18 + lVar21 + 0x10;
            lVar21 = lVar21 + 0x10;
          }
        }
        *puStack_a8 = uStack_94;
        if (*(longlong *)(puVar20 + 0xc) != 0) {
          lVar21 = *(longlong *)(puVar20 + 10);
          uVar18 = 0;
          if (*(ulonglong *)(puVar20 + 6) <= lVar21 + 1U) {
            uVar18 = *(ulonglong *)(puVar20 + 6);
          }
          *(ulonglong *)(puVar20 + 10) = (lVar21 - uVar18) + 1;
          *(longlong *)(puVar20 + 0xc) = *(longlong *)(puVar20 + 0xc) + -1;
          uVar18 = *(ulonglong *)(*(longlong *)(puVar20 + 8) + lVar21 * 8);
          *puStack_a8 = uStack_94;
          pdb_1417b66a0(puVar20 + 0xe,lStack_118,uVar18);
          *puStack_a8 = uStack_94;
          if (*(ulonglong *)(puVar20 + 4) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar18,*(ulonglong *)(puVar20 + 4),&UNK_143045dc0);
          }
          lVar21 = uVar18 * 0x38;
          pdb_140a87e10(*(longlong *)(puVar20 + 2) + lVar21);
          if (*(ulonglong *)(puVar20 + 4) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar18,*(ulonglong *)(puVar20 + 4),&UNK_143045dd8);
          }
          lVar23 = *(longlong *)(puVar20 + 2);
          uVar18 = *(ulonglong *)(lVar23 + 0x10 + lVar21);
          uVar11 = *(ulonglong *)(lVar23 + 0x28 + lVar21);
          if (uVar18 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar11,uVar18,&UNK_143043a80);
          }
          pdb_140a8e190(uVar11 * 0x30 + *(longlong *)(lVar23 + lVar21 + 8),&uStack_128);
        }
      }
    } while( true );
  }
  **(uint **)(param_1 + 4) = param_1[7];
  puVar17 = *(uint **)(*(longlong *)param_1 + 8);
  puVar20 = puVar17 + *(longlong *)(*(longlong *)param_1 + 0x10) * 0xe;
  while (puVar17 != puVar20) {
    pdb_140a87f70();
    puVar17 = puVar17 + 0xe;
    param_1 = puVar17;
  }
  if (cStack_81 == '\0') {
    return;
  }
  plVar15 = (longlong *)pdb_140e97000();
  if (((char)plVar15[0xd] == '\x01') ||
     (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 != (longlong *)0x0)) {
    if (*plVar15 != 0) goto LAB_140a987ba;
    *plVar15 = -1;
    pauStack_90 = (undefined1 (*) [16])plVar15;
    pdb_140e95370(plVar15 + 1,uStack_108);
    goto LAB_140a98786;
  }
  goto LAB_140a98803;
LAB_140a983f0:
  pauStack_100 = *(undefined1 (**) [16])(puVar20 + 0xe);
  puStack_f0 = (uint *)(*pauStack_100 + *(longlong *)(puVar20 + 0x10) + 1);
  auVar28 = *pauStack_100;
  uStack_e8 = ~((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar28[0xf] >> 7) << 0xf);
  uStack_e0 = *(undefined8 *)(puVar20 + 0x14);
  pauStack_f8 = pauStack_100 + 1;
  pdb_1415fb150(&lStack_168,&pauStack_100);
  pauStack_a0 = (undefined1 (*) [16])lStack_168;
  pauStack_90 = (undefined1 (*) [16])pbStack_160;
  if (lStack_158 != 0) {
    pbVar1 = pbStack_160 + lStack_158 * 8;
    pbVar24 = pbStack_160;
    do {
      lStack_130 = *(longlong *)pbVar24;
      pbVar24 = pbVar24 + 8;
      uVar11 = uStack_c8 & 0xffffffffffffff8;
      uVar18 = 0;
      while (uVar11 != uVar18) {
        if (((((*(longlong *)(pbStack_d0 + uVar18 * 8) == lStack_130) ||
              (*(longlong *)(pbStack_d0 + uVar18 * 8 + 8) == lStack_130)) ||
             (*(longlong *)(pbStack_d0 + uVar18 * 8 + 0x10) == lStack_130)) ||
            ((*(longlong *)(pbStack_d0 + uVar18 * 8 + 0x18) == lStack_130 ||
             (*(longlong *)(pbStack_d0 + uVar18 * 8 + 0x20) == lStack_130)))) ||
           ((*(longlong *)(pbStack_d0 + uVar18 * 8 + 0x28) == lStack_130 ||
            ((*(longlong *)(pbStack_d0 + uVar18 * 8 + 0x30) == lStack_130 ||
             (lVar10 = uVar18 * 8, uVar18 = uVar18 + 8,
             *(longlong *)(pbStack_d0 + lVar10 + 0x38) == lStack_130)))))) goto LAB_140a984a0;
      }
      uVar16 = (uint)uStack_c8 & 7;
      if (((uStack_c8 & 7) == 0) ||
         ((*(longlong *)(pbStack_d0 + uVar11 * 8) != lStack_130 &&
          ((uVar16 == 1 ||
           ((*(longlong *)(pbStack_d0 + uVar11 * 8 + 8) != lStack_130 &&
            ((uVar16 == 2 ||
             ((*(longlong *)(pbStack_d0 + uVar11 * 8 + 0x10) != lStack_130 &&
              ((uVar16 == 3 ||
               ((*(longlong *)(pbStack_d0 + uVar11 * 8 + 0x18) != lStack_130 &&
                ((uVar16 == 4 ||
                 ((*(longlong *)(pbStack_d0 + uVar11 * 8 + 0x20) != lStack_130 &&
                  ((uVar16 == 5 ||
                   ((*(longlong *)(pbStack_d0 + uVar11 * 8 + 0x28) != lStack_130 &&
                    ((uVar16 == 6 ||
                     ((*(longlong *)(pbStack_d0 + uVar11 * 8 + 0x30) != lStack_130 && (uVar16 == 7))
                     )))))))))))))))))))))))))) {
        *puStack_a8 = uStack_94;
        uVar14 = pdb_1400af0a0(puVar20 + 0x16,&lStack_130);
        pdb_140caba90(&pauStack_100,puVar20 + 0xe,uVar14);
        puVar17 = puStack_f0;
        if ((int)pauStack_100 == 1) {
          *puStack_a8 = uStack_94;
          uVar18 = *(ulonglong *)(puVar20 + 6);
          uVar11 = *(ulonglong *)(puVar20 + 0xc);
          if (uVar11 == uVar18) {
            pdb_1407412b0(puVar20 + 6);
            uVar18 = *(ulonglong *)(puVar20 + 6);
            uVar11 = *(ulonglong *)(puVar20 + 0xc);
          }
          *(ulonglong *)(puVar20 + 0xc) = uVar11 + 1;
          uVar19 = 0;
          if (uVar18 <= uVar11 + *(longlong *)(puVar20 + 10)) {
            uVar19 = uVar18;
          }
          *(uint **)(*(longlong *)(puVar20 + 8) +
                    ((uVar11 + *(longlong *)(puVar20 + 10)) - uVar19) * 8) = puVar17;
          unaff_R13 = puVar17;
        }
      }
LAB_140a984a0:
    } while (pbVar24 != pbVar1);
  }
  if (pauStack_a0 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_90,(longlong)pauStack_a0 << 3,8);
  }
  pdb_140929d00(&pauStack_100,puVar20 + 6);
  uVar16 = uStack_94;
  unaff_R12 = puStack_a8;
  pauStack_90 = pauStack_100;
  pauStack_a0 = pauStack_f8;
  lVar10 = CONCAT62(uStack_e6,uStack_e8);
  param_3 = (undefined1 (*) [16])0x0;
  unaff_R15 = (undefined *)(ulonglong)uStack_94;
  param_1 = puStack_f0;
  while (bVar26 = lVar10 != 0, lVar10 = lVar10 + -1, bVar26) {
    uVar18 = *(ulonglong *)(*pauStack_a0 + (longlong)param_1 * 8);
    *unaff_R12 = uVar16;
    if (*(ulonglong *)(puVar20 + 4) <= uVar18) goto LAB_140a98810;
    pauVar13 = pauStack_90;
    if ((undefined1 (*) [16])((longlong)param_1 + 1) < pauStack_90) {
      pauVar13 = param_3;
    }
    param_1 = (uint *)(((longlong)param_1 + 1) - (longlong)pauVar13);
    pdb_140a87f70(uVar18 * 0x38 + *(longlong *)(puVar20 + 2));
  }
  if (pauStack_90 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_a0,(longlong)pauStack_90 << 3,8);
  }
  if (uStack_d8 != 0) {
    pub_1406abac0(pbStack_d0,uStack_d8 << 3,8);
  }
  if (cStack_81 != '\0') {
    plVar15 = (longlong *)pdb_140e97000();
    if (((char)plVar15[0xd] != '\x01') &&
       (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 == (longlong *)0x0))
    goto LAB_140a98803;
    param_2 = (longlong *)0xffffffffffffffff;
    if (*plVar15 != 0) {
LAB_140a987ba:
      pauVar13 = (undefined1 (*) [16])pdb_142dc8090(&UNK_143326a50);
LAB_140a987c6:
      pauVar13 = (undefined1 (*) [16])pdb_142d8ec20(pauVar13,0);
      if (pauVar13 == (undefined1 (*) [16])0x0) {
LAB_140a98803:
        pdb_142dc7890(&UNK_143326860);
LAB_140a98810:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2();
      }
      goto LAB_140a97d69;
    }
    *plVar15 = -1;
    pauStack_90 = (undefined1 (*) [16])plVar15;
    pdb_140e95370(plVar15 + 1,uStack_108);
LAB_140a98786:
    *(longlong *)pauStack_90 = *(longlong *)pauStack_90 + 1;
  }
  return;
}

