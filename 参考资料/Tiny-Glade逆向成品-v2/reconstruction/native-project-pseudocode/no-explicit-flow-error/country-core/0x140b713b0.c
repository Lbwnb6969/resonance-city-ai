// VA 0x140b713b0, PDB extent 3269 bytes
// country_core::systems::ui::signifiers::animation::signifier_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::animation::signifier_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/animation.rs
   Extent: 3269 */

void pdb_140b713b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined *puVar25;
  longlong lVar26;
  ushort uVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined *puVar30;
  uint *puVar31;
  byte bVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined8 in_stack_fffffffffffffe08;
  undefined4 uVar38;
  longlong lStack_1e0;
  undefined4 uStack_1d8;
  uint *puStack_1c0;
  uint *puStack_1b8;
  longlong lStack_1a0;
  longlong lStack_190;
  byte bStack_188;
  longlong lStack_180;
  byte bStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_158;
  undefined4 uStack_14c;
  longlong lStack_148;
  byte bStack_138;
  uint uStack_130;
  uint uStack_12c;
  byte bStack_128;
  longlong lStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  longlong *plStack_e8;
  uint *puStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  undefined4 *puStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined4 uStack_ac;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  byte bStack_81;
  uint uStack_80;
  uint uStack_7c;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  cVar14 = pdb_140e94b40();
  if (cVar14 == '\0') {
    lStack_f8 = 0;
    goto LAB_140b71591;
  }
  puVar25 = &UNK_14305ba58;
  lVar24 = 0x45;
  uVar23 = 0x45;
  lVar15 = pdb_140b73fd0(&UNK_14305ba58);
  if (lVar15 != 1) {
LAB_140b7145d:
    puVar17 = &UNK_14305b840;
    puVar30 = &UNK_14305b806;
    do {
      pbVar1 = puVar17 + -1;
      uVar22 = (uint)(char)*pbVar1;
      if ((int)uVar22 < 0) {
        bVar32 = puVar17[-2];
        if ((char)bVar32 < -0x40) {
          bVar4 = puVar17[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar17 + -4;
            puVar17 = puVar17 + -4;
            uVar22 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar17 = puVar17 + -3;
            uVar22 = bVar4 & 0xf;
          }
          uVar22 = bVar32 & 0x3f | uVar22 << 6;
        }
        else {
          puVar17 = puVar17 + -2;
          uVar22 = bVar32 & 0x1f;
        }
        uVar22 = (uint)(*pbVar1 & 0x3f) | uVar22 << 6;
        if (uVar22 != 0x5c) goto LAB_140b714e9;
LAB_140b71506:
        if ((undefined *)0x3a < puVar17 + -0x14305b805) goto LAB_140b71ee5;
        lVar15 = 0x39 - (longlong)(puVar17 + -0x14305b806);
        puVar30 = puVar17 + 1;
        goto LAB_140b7152a;
      }
      puVar17 = puVar17 + -1;
      if (uVar22 == 0x5c) goto LAB_140b71506;
LAB_140b714e9:
      if (uVar22 == 0x2f) goto LAB_140b71506;
    } while (puVar17 != &UNK_14305b806);
    lVar15 = 0x3a;
LAB_140b7152a:
    plVar18 = (longlong *)pdb_140e97000();
    if (((char)plVar18[0xd] == '\x01') ||
       (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 != (longlong *)0x0)) {
      if (*plVar18 != 0) goto LAB_140b71ea9;
      *plVar18 = -1;
      plStack_78 = plVar18;
      uStack_f0 = pdb_140e94f10(plVar18 + 1,puVar25,lVar24,puVar30,lVar15,1,0);
      uVar38 = (undefined4)((ulonglong)lVar15 >> 0x20);
      *plStack_78 = *plStack_78 + 1;
      lStack_f8 = 1;
LAB_140b71591:
      plStack_78 = (longlong *)*param_1;
      lVar15 = param_1[1];
      pdb_141523b00(&puStack_1c0,lVar15,plStack_78,(int)param_1[2],
                    CONCAT44(uVar38,*(undefined4 *)((longlong)param_1 + 0x14)));
      fVar13 = _DAT_142e36f28;
      puStack_e0 = puStack_1b8;
      lStack_d8 = lStack_1a0;
      lStack_a8 = lStack_190;
      uStack_80 = (uint)bStack_188;
      lStack_a0 = lStack_180;
      uStack_7c = (uint)bStack_178;
      lStack_90 = lStack_170;
      lStack_c0 = lStack_168;
      lStack_b8 = lStack_158;
      uStack_ac = uStack_14c;
      plStack_e8 = (longlong *)*param_3;
      lStack_110 = *param_2;
      iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                               CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                     CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
      iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                               CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                     CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
      iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                      CONCAT13(unaff_XMM7_Bl,
                               CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
      iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                      CONCAT13(unaff_XMM7_Bp,
                               CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
      bStack_81 = bStack_128;
      lStack_98 = lStack_148;
      uVar23 = (ulonglong)uStack_130;
      uVar16 = (ulonglong)uStack_12c;
      plStack_100 = plStack_e8 + 4;
      puVar31 = puStack_1c0;
LAB_140b71678:
      do {
        fVar33 = fVar13;
        if ((bStack_81 & 1) == 0) {
          if ((int)uVar16 == (int)uVar23) {
            do {
              if (puVar31 == puStack_e0) goto LAB_140b71e43;
              uVar22 = *puVar31;
              puVar31 = puVar31 + 1;
              uVar23 = *(ulonglong *)
                        (*(longlong *)(lVar15 + 0x100) + 0x58 + (ulonglong)uVar22 * 0xa0);
            } while (uVar23 == 0);
            lVar19 = *(longlong *)(lVar15 + 0x100) + (ulonglong)uVar22 * 0xa0;
            uVar16 = (ulonglong)*(uint *)(lVar19 + 0x94);
            lVar20 = *(longlong *)(lVar15 + 0x1a0);
            lVar24 = lVar20 + uVar16 * 0x48;
            lVar21 = *(longlong *)(lVar20 + 0x38 + uVar16 * 0x48);
            uVar16 = *(ulonglong *)(lVar20 + 0x40 + uVar16 * 0x48);
            if (*(ulonglong *)((longlong)plStack_78 + 0x110) < uVar16) {
              uVar28 = *(ulonglong *)(lVar21 + *(ulonglong *)((longlong)plStack_78 + 0x110) * 8);
              lVar24 = *(longlong *)(lVar24 + 0x18);
              if (uVar28 == 0) goto LAB_140b719c1;
              lStack_90 = *(longlong *)(lVar24 + 0x10 + ~uVar28 * 0x30);
            }
            else {
              lVar24 = *(longlong *)(lVar24 + 0x18);
LAB_140b719c1:
              lStack_90 = 0;
            }
            uVar28 = *(ulonglong *)((longlong)plStack_78 + 0x120);
            uVar5 = *(ulonglong *)(lVar19 + 0x88);
            if ((uVar28 < uVar5) && (*(longlong *)(*(longlong *)(lVar19 + 0x80) + uVar28 * 8) != 0))
            {
              uStack_80 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar19 + 0x80) >> 8),1);
              if ((uVar16 <= uVar28) || (uVar28 = *(ulonglong *)(lVar21 + uVar28 * 8), uVar28 == 0))
              {
                lStack_a8 = 0;
                uVar28 = *(ulonglong *)((longlong)plStack_78 + 0x128);
                goto joined_r0x000140b71a56;
              }
              lStack_a8 = *(longlong *)(lVar24 + 0x10 + ~uVar28 * 0x30);
              uVar28 = *(ulonglong *)((longlong)plStack_78 + 0x128);
              if (uVar28 < uVar5) goto LAB_140b71a78;
LAB_140b71acd:
              uStack_7c = 0;
              uVar28 = *(ulonglong *)((longlong)plStack_78 + 0x130);
joined_r0x000140b71b08:
              if (uVar5 <= uVar28) goto LAB_140b71b64;
LAB_140b71b0a:
              if (((*(longlong *)(*(longlong *)(lVar19 + 0x80) + uVar28 * 8) == 0) ||
                  (uVar5 <= *(ulonglong *)((longlong)plStack_78 + 0x138))) ||
                 (*(longlong *)
                   (*(longlong *)(lVar19 + 0x80) + *(ulonglong *)((longlong)plStack_78 + 0x138) * 8)
                  == 0)) goto LAB_140b71b64;
              bStack_138 = 1;
              if ((uVar28 < uVar16) && (uVar16 = *(ulonglong *)(lVar21 + uVar28 * 8), uVar16 != 0))
              {
                lStack_98 = *(longlong *)(lVar24 + 0x10 + ~uVar16 * 0x30);
              }
              else {
                lStack_98 = 0;
              }
            }
            else {
              uStack_80 = 0;
              uVar28 = *(ulonglong *)((longlong)plStack_78 + 0x128);
joined_r0x000140b71a56:
              if (uVar5 <= uVar28) goto LAB_140b71acd;
LAB_140b71a78:
              if (*(longlong *)(*(longlong *)(lVar19 + 0x80) + uVar28 * 8) == 0) goto LAB_140b71acd;
              uStack_7c = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar19 + 0x80) >> 8),1);
              if ((uVar16 <= uVar28) || (uVar28 = *(ulonglong *)(lVar21 + uVar28 * 8), uVar28 == 0))
              {
                lStack_a0 = 0;
                uVar28 = *(ulonglong *)((longlong)plStack_78 + 0x130);
                goto joined_r0x000140b71b08;
              }
              lStack_a0 = *(longlong *)(lVar24 + 0x10 + ~uVar28 * 0x30);
              uVar28 = *(ulonglong *)((longlong)plStack_78 + 0x130);
              if (uVar28 < uVar5) goto LAB_140b71b0a;
LAB_140b71b64:
              bStack_138 = 0;
            }
            uStack_d0 = 0;
            lVar20 = ~*(ulonglong *)(lVar21 + *(longlong *)((longlong)plStack_78 + 0x118) * 8) *
                     0x30;
            lStack_c0 = *(longlong *)(lVar24 + 0x10 + lVar20);
            lStack_b8 = *(longlong *)(lVar24 + 0x28 + lVar20);
            lStack_d8 = *(longlong *)(lVar19 + 0x50);
            uVar16 = uStack_d0;
          }
          uStack_d0 = uVar16;
          uVar16 = (ulonglong)~*(uint *)(lStack_d8 + 8 + uStack_d0 * 0x10);
          lVar21 = lStack_90 + uVar16 * 0x1c;
          lVar20 = uVar16 * 0x30 + lStack_c0;
          puStack_c8 = (undefined4 *)(lStack_b8 + uVar16 * 4);
          lVar24 = uVar16 * 0x10 + lStack_a8;
          if ((uStack_80 & 1) == 0) {
            lVar24 = 0;
          }
          lVar19 = 0;
          if ((uStack_7c & 1) != 0) {
            lVar19 = lStack_a0;
          }
          if ((bStack_138 & 1) != 0) goto LAB_140b71c35;
LAB_140b719aa:
          bStack_138 = 0;
          cVar14 = *(char *)(lVar21 + 8);
        }
        else {
          if ((int)uVar16 == (int)uVar23) {
            do {
              if (puVar31 == puStack_e0) goto LAB_140b71e43;
              uVar22 = *puVar31;
              puVar31 = puVar31 + 1;
              uVar23 = *(ulonglong *)
                        (*(longlong *)(lVar15 + 0x1a0) + 0x10 + (ulonglong)uVar22 * 0x48);
            } while (uVar23 == 0);
            lVar24 = *(longlong *)(lVar15 + 0x1a0) + (ulonglong)uVar22 * 0x48;
            lVar20 = *(longlong *)(lVar24 + 0x38);
            uVar28 = *(ulonglong *)(lVar24 + 0x40);
            if (*(ulonglong *)((longlong)plStack_78 + 0x110) < uVar28) {
              uVar16 = *(ulonglong *)(lVar20 + *(ulonglong *)((longlong)plStack_78 + 0x110) * 8);
              lVar24 = *(longlong *)(lVar24 + 0x18);
              if (uVar16 == 0) goto LAB_140b717f6;
              lStack_90 = *(longlong *)(lVar24 + 0x10 + ~uVar16 * 0x30);
              uVar16 = *(ulonglong *)((longlong)plStack_78 + 0x120);
              if (uVar16 < uVar28) goto LAB_140b71814;
LAB_140b71853:
              uStack_80 = 0;
              uVar16 = *(ulonglong *)((longlong)plStack_78 + 0x128);
              if (uVar28 <= uVar16) goto LAB_140b7189c;
LAB_140b71870:
              uVar16 = *(ulonglong *)(lVar20 + uVar16 * 8);
              if (uVar16 == 0) goto LAB_140b7189c;
              lStack_a0 = *(longlong *)(lVar24 + 0x10 + ~uVar16 * 0x30);
              uStack_7c = (uint)CONCAT71((int7)((ulonglong)lStack_a0 >> 8),1);
            }
            else {
              lVar24 = *(longlong *)(lVar24 + 0x18);
LAB_140b717f6:
              lStack_90 = 0;
              uVar16 = *(ulonglong *)((longlong)plStack_78 + 0x120);
              if (uVar28 <= uVar16) goto LAB_140b71853;
LAB_140b71814:
              uVar16 = *(ulonglong *)(lVar20 + uVar16 * 8);
              if (uVar16 == 0) goto LAB_140b71853;
              lStack_a8 = *(longlong *)(lVar24 + 0x10 + ~uVar16 * 0x30);
              uStack_80 = (uint)CONCAT71((int7)((ulonglong)lStack_a8 >> 8),1);
              uVar16 = *(ulonglong *)((longlong)plStack_78 + 0x128);
              if (uVar16 < uVar28) goto LAB_140b71870;
LAB_140b7189c:
              uStack_7c = 0;
            }
            uVar16 = 0;
            if (((*(ulonglong *)((longlong)plStack_78 + 0x130) < uVar28) &&
                (uVar5 = *(ulonglong *)(lVar20 + *(ulonglong *)((longlong)plStack_78 + 0x130) * 8),
                uVar5 != 0)) &&
               ((*(ulonglong *)((longlong)plStack_78 + 0x138) < uVar28 &&
                (*(longlong *)(lVar20 + *(ulonglong *)((longlong)plStack_78 + 0x138) * 8) != 0)))) {
              lStack_98 = *(longlong *)(lVar24 + 0x10 + ~uVar5 * 0x30);
              bStack_138 = 1;
            }
            else {
              bStack_138 = 0;
            }
            lVar20 = ~*(ulonglong *)(lVar20 + *(longlong *)((longlong)plStack_78 + 0x118) * 8) *
                     0x30;
            lStack_c0 = *(longlong *)(lVar24 + 0x10 + lVar20);
            lStack_b8 = *(longlong *)(lVar24 + 0x28 + lVar20);
          }
          lVar21 = lStack_90 + uVar16 * 0x1c;
          lVar20 = uVar16 * 0x30 + lStack_c0;
          puStack_c8 = (undefined4 *)(lStack_b8 + uVar16 * 4);
          lVar24 = uVar16 * 0x10 + lStack_a8;
          if ((uStack_80 & 1) == 0) {
            lVar24 = 0;
          }
          lVar19 = 0;
          if ((uStack_7c & 1) != 0) {
            lVar19 = lStack_a0;
          }
          uStack_d0 = uVar16;
          if ((bStack_138 & 1) == 0) goto LAB_140b719aa;
LAB_140b71c35:
          lStack_1e0 = *(longlong *)(lStack_98 + uVar16 * 8);
          lStack_108 = lStack_1e0;
          if (plStack_e8[3] == 0) {
LAB_140b71d15:
            bStack_138 = 1;
            cVar14 = *(char *)(lVar21 + 8);
          }
          else {
            uVar16 = pdb_1400af0a0(plStack_100,&lStack_1e0);
            bVar32 = (byte)(uVar16 >> 0x39);
            auVar34 = ZEXT216(CONCAT11(bVar32,bVar32));
            auVar34 = pshuflw(auVar34,auVar34,0);
            lVar26 = 0;
            while( true ) {
              uVar16 = uVar16 & plStack_e8[1];
              auVar3 = *(undefined1 (*) [16])(*plStack_e8 + uVar16);
              auVar37[0] = -(auVar3[0] == auVar34[0]);
              auVar37[1] = -(auVar3[1] == auVar34[1]);
              auVar37[2] = -(auVar3[2] == auVar34[2]);
              auVar37[3] = -(auVar3[3] == auVar34[3]);
              auVar37[4] = -(auVar3[4] == auVar34[4]);
              auVar37[5] = -(auVar3[5] == auVar34[5]);
              auVar37[6] = -(auVar3[6] == auVar34[6]);
              auVar37[7] = -(auVar3[7] == auVar34[7]);
              auVar37[8] = -(auVar3[8] == auVar34[0]);
              auVar37[9] = -(auVar3[9] == auVar34[1]);
              auVar37[10] = -(auVar3[10] == auVar34[2]);
              auVar37[0xb] = -(auVar3[0xb] == auVar34[3]);
              auVar37[0xc] = -(auVar3[0xc] == auVar34[4]);
              auVar37[0xd] = -(auVar3[0xd] == auVar34[5]);
              auVar37[0xe] = -(auVar3[0xe] == auVar34[6]);
              auVar37[0xf] = -(auVar3[0xf] == auVar34[7]);
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
              uVar22 = (uint)uVar27;
              while (uVar27 != 0) {
                uVar6 = 0;
                for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                lVar29 = *plStack_e8 + (uVar6 + uVar16 & plStack_e8[1]) * -0x10;
                if (lStack_108 == *(longlong *)(lVar29 + -0x10)) {
                  fVar33 = *(float *)(lVar29 + -8);
                  goto LAB_140b71d15;
                }
                uVar27 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar27);
              }
              auVar36[0] = -(auVar3[0] == (char)iVar8);
              auVar36[1] = -(auVar3[1] == (char)((uint)iVar8 >> 8));
              auVar36[2] = -(auVar3[2] == (char)((uint)iVar8 >> 0x10));
              auVar36[3] = -(auVar3[3] == (char)((uint)iVar8 >> 0x18));
              auVar36[4] = -(auVar3[4] == (char)iVar9);
              auVar36[5] = -(auVar3[5] == (char)((uint)iVar9 >> 8));
              auVar36[6] = -(auVar3[6] == (char)((uint)iVar9 >> 0x10));
              auVar36[7] = -(auVar3[7] == (char)((uint)iVar9 >> 0x18));
              auVar36[8] = -(auVar3[8] == (char)iVar10);
              auVar36[9] = -(auVar3[9] == (char)((uint)iVar10 >> 8));
              auVar36[10] = -(auVar3[10] == (char)((uint)iVar10 >> 0x10));
              auVar36[0xb] = -(auVar3[0xb] == (char)((uint)iVar10 >> 0x18));
              auVar36[0xc] = -(auVar3[0xc] == (char)iVar11);
              auVar36[0xd] = -(auVar3[0xd] == (char)((uint)iVar11 >> 8));
              auVar36[0xe] = -(auVar3[0xe] == (char)((uint)iVar11 >> 0x10));
              auVar36[0xf] = -(auVar3[0xf] == (char)((uint)iVar11 >> 0x18));
              if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
              uVar16 = uVar16 + lVar26 + 0x10;
              lVar26 = lVar26 + 0x10;
            }
            bStack_138 = 1;
            cVar14 = *(char *)(lVar21 + 8);
          }
        }
        if (cVar14 != '\x01') {
          fVar33 = fVar33 * *(float *)(lVar21 + 0xc);
          fVar35 = *(float *)(lVar21 + 0x18) * fVar33;
          fVar12 = fVar35;
          if (*(char *)(lVar21 + 9) == '\0') {
            fVar12 = fVar33;
          }
          *puStack_c8 = uStack_ac;
          *(float *)(lVar20 + 0x1c) = fVar12;
          *(float *)(lVar20 + 0x20) = fVar35;
          *(float *)(lVar20 + 0x24) = fVar12;
        }
        uVar16 = (ulonglong)((int)uStack_d0 + 1);
      } while ((((lVar24 == 0) || (lVar19 == 0)) || (*(char *)(lStack_110 + 0x18) == '\0')) ||
              (*(longlong *)(lStack_110 + 0x38) != *(longlong *)(lVar24 + 8)));
      lVar24 = *(longlong *)(lStack_110 + 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(lVar24 + 0x98)) {
      case 0:
        lVar21 = 8;
        break;
      case 1:
        if (*(ulonglong *)(lStack_110 + 0x40) < *(ulonglong *)(lVar24 + 0xb0)) {
          plVar18 = (longlong *)
                    (*(ulonglong *)(lStack_110 + 0x40) * 0xc + *(longlong *)(lVar24 + 0xa8));
          goto code_r0x000140b71e02;
        }
        goto code_r0x000140b71f4c;
      default:
        goto LAB_140b71678;
      case 6:
        lVar21 = 4;
      }
      plVar18 = (longlong *)(lVar24 + 0x98 + lVar21);
code_r0x000140b71e02:
      uStack_1d8 = (undefined4)plVar18[1];
      lStack_1e0 = *plVar18;
      *puStack_c8 = uStack_ac;
      *(undefined4 *)(lVar20 + 0x18) = uStack_1d8;
      *(longlong *)(lVar20 + 0x10) = lStack_1e0;
      goto LAB_140b71678;
    }
    goto LAB_140b71ed9;
  }
  if (uVar23 < 0x46) {
    puVar25 = &UNK_14305ba58;
    uVar16 = pdb_140b73fd0(&UNK_14305ba58);
    if ((uVar16 & 1) != 0) {
      if (0x45 < uVar23 + 2) goto LAB_140b71f28;
      lVar24 = 0x43 - uVar23;
      puVar25 = &UNK_14305ba5a + uVar23;
    }
    goto LAB_140b7145d;
  }
  goto LAB_140b71f08;
LAB_140b71e43:
  if (lStack_f8 == 0) {
    return;
  }
  plVar18 = (longlong *)pdb_140e97000();
  if ((char)plVar18[0xd] != '\x01') goto LAB_140b71eb5;
  do {
    if (*plVar18 == 0) {
      *plVar18 = -1;
      plStack_78 = plVar18;
      pdb_140e95370(plVar18 + 1,uStack_f0);
      *plStack_78 = *plStack_78 + 1;
      return;
    }
LAB_140b71ea9:
    plVar18 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b71eb5:
    plVar18 = (longlong *)pdb_142d8ec20(plVar18,0);
  } while (plVar18 != (longlong *)0x0);
LAB_140b71ed9:
  pdb_142dc7890(&UNK_143326860);
LAB_140b71ee5:
  pdb_142dc8070(&UNK_14305b806,0x3a);
LAB_140b71f08:
  pdb_142dc8070(&UNK_14305ba58,0x45,0);
LAB_140b71f28:
  pdb_142dc8070(&UNK_14305ba58,0x45);
code_r0x000140b71f4c:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2();
}

