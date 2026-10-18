// VA 0x140c3e520, PDB extent 1764 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::restore_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::restore_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 1764 */

void pdb_140c3e520(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ushort uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  uint *puVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM9_Ba;
  undefined1 unaff_XMM9_Bb;
  undefined1 unaff_XMM9_Bc;
  undefined1 unaff_XMM9_Bd;
  undefined1 unaff_XMM9_Be;
  undefined1 unaff_XMM9_Bf;
  undefined1 unaff_XMM9_Bg;
  undefined1 unaff_XMM9_Bh;
  undefined1 unaff_XMM9_Bi;
  undefined1 unaff_XMM9_Bj;
  undefined1 unaff_XMM9_Bk;
  undefined1 unaff_XMM9_Bl;
  undefined1 unaff_XMM9_Bm;
  undefined1 unaff_XMM9_Bn;
  undefined1 unaff_XMM9_Bo;
  undefined1 unaff_XMM9_Bp;
  uint uStack_200;
  uint uStack_1fc;
  longlong *plStack_1f8;
  undefined8 uStack_1f0;
  longlong *plStack_1e8;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  longlong lStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_188;
  ulonglong uStack_180;
  longlong lStack_178;
  undefined8 *puStack_170;
  uint *puStack_168;
  longlong lStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  longlong lStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_f8 [184];
  
  auVar11 = _DAT_142e378b0;
  auVar10 = _DAT_142e378a0;
  if (*(char *)(param_1 + 0x1b0) != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306ce48);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306ccf8,0x25,&UNK_14306cd20);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306cd38,0x23,&UNK_14306cd60);
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306cd78,0x22,&UNK_14306cda0);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306cdb8,0x24,&UNK_14306cde0);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306cdf8,0x35,&UNK_14306ce30);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    puVar25 = *(undefined8 **)(param_2 + 8);
    puStack_170 = puVar25 + *(longlong *)(param_2 + 0x10) * 5;
    uVar26 = (ulonglong)*param_3;
    iVar6 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                             CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                   CONCAT13(unaff_XMM9_Bd,
                            CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
    iVar7 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                             CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                   CONCAT13(unaff_XMM9_Bh,
                            CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                             CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                   CONCAT13(unaff_XMM9_Bl,
                            CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                             CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                   CONCAT13(unaff_XMM9_Bp,
                            CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
    lStack_178 = param_1;
    do {
      plVar2 = (longlong *)*puVar25;
      uVar3 = puVar25[1];
      plVar18 = plVar2;
      lVar12 = pdb_140c3f210(lStack_178,plVar2,uVar3);
      plStack_1f8 = plVar2;
      uStack_1f0 = uVar3;
      plStack_1e8 = plVar18;
      if (puVar25[4] != 0) {
        puVar27 = (uint *)puVar25[3];
        puStack_168 = puVar27 + puVar25[4] * 0x1c;
        lStack_160 = lVar12 + 0x30;
LAB_140c3e686:
        do {
          uVar1 = *puVar27;
          uVar16 = (ulonglong)uVar1;
          uVar14 = uVar26 & 0xffffffff;
          uVar26 = uVar16 + 1;
          if (uVar16 + 1 <= uVar14) {
            uVar26 = uVar14;
          }
          *param_3 = (uint)uVar26;
          pdb_140901a00(auStack_f8,puVar27 + 2);
          auStack_138 = *(undefined1 (*) [16])(lVar12 + 0x20);
          auVar29._0_8_ = auStack_138._0_8_;
          auVar29._8_4_ = auStack_138._0_4_;
          auVar29._12_4_ = auStack_138._4_4_;
          auStack_158 = auVar29 ^ auVar10;
          auVar30._0_8_ = auStack_138._8_8_;
          auVar30._8_4_ = auStack_138._8_4_;
          auVar30._12_4_ = auStack_138._12_4_;
          auStack_148 = auVar30 ^ auVar11;
          lStack_128 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
          auStack_1d8._0_4_ = uVar1;
          uStack_1fc = uVar1;
          pdb_1400b0640(auStack_158,auStack_1d8,4);
          uVar23 = lStack_128 << 0x38 | uStack_120;
          uVar14 = auStack_148._8_8_ ^ uVar23;
          uVar19 = auStack_158._0_8_ + auStack_148._0_8_;
          uVar17 = (auStack_148._0_8_ << 0xd | (ulonglong)auStack_148._0_8_ >> 0x33) ^ uVar19;
          uVar15 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ auStack_158._8_8_ + uVar14;
          uVar21 = auStack_158._8_8_ + uVar14 + uVar17;
          uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar15;
          uVar17 = (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar21;
          uVar14 = (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar19;
          uVar19 = (uVar19 ^ uVar23) + uVar17;
          uVar21 = ((uVar21 << 0x20 | uVar21 >> 0x20) ^ 0xff) + uVar14;
          uVar15 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar19;
          uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar21;
          uVar21 = uVar21 + uVar15;
          uVar17 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar14;
          uVar15 = (uVar15 << 0x11 | uVar15 >> 0x2f) ^ uVar21;
          uVar14 = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar17;
          uVar17 = uVar17 + uVar15;
          uVar19 = (uVar21 << 0x20 | uVar21 >> 0x20) + uVar14;
          uVar15 = (uVar15 << 0xd | uVar15 >> 0x33) ^ uVar17;
          uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar19;
          uVar19 = uVar19 + uVar15;
          uVar17 = (uVar17 << 0x20 | uVar17 >> 0x20) + uVar14;
          uVar15 = (uVar15 << 0x11 | uVar15 >> 0x2f) ^ uVar19;
          uVar14 = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar17;
          uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar14;
          uVar15 = (uVar15 << 0xd | uVar15 >> 0x33) ^ uVar17 + uVar15;
          uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar19;
          uVar19 = uVar19 + uVar15;
          pdb_140ca8930(lVar12,(uVar19 << 0x20 | uVar19 >> 0x20) ^ (uVar15 << 0x11 | uVar15 >> 0x2f)
                               ^ (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar19,&uStack_1fc);
          pdb_1403b0de0(lVar12 + 0x60,uVar1);
          pdb_141407a20(auStack_158,lStack_160,uVar1,auStack_f8);
          plVar18 = plStack_1e8;
          uVar3 = uStack_1f0;
          plVar2 = plStack_1f8;
          uStack_200 = uVar1;
          if (auStack_158._0_4_ != 8) {
            if (plStack_1e8[3] != 0) {
              auStack_1b8 = *(undefined1 (*) [16])(plStack_1e8 + 4);
              auVar31._0_8_ = auStack_1b8._0_8_;
              auVar31._8_4_ = auStack_1b8._0_4_;
              auVar31._12_4_ = auStack_1b8._4_4_;
              auStack_1d8 = auVar31 ^ auVar10;
              auVar32._0_8_ = auStack_1b8._8_8_;
              auVar32._8_4_ = auStack_1b8._8_4_;
              auVar32._12_4_ = auStack_1b8._12_4_;
              auStack_1c8 = auVar32 ^ auVar11;
              lStack_1a8 = 0;
              uStack_1a0 = 0;
              uStack_198 = 0;
              lStack_188 = CONCAT44(lStack_188._4_4_,uVar1);
              pdb_1400b0640(auStack_1d8,&lStack_188,4);
              uVar21 = lStack_1a8 << 0x38 | uStack_1a0;
              uVar14 = auStack_1c8._8_8_ ^ uVar21;
              uVar19 = auStack_1d8._0_8_ + auStack_1c8._0_8_;
              uVar15 = (auStack_1c8._0_8_ << 0xd | (ulonglong)auStack_1c8._0_8_ >> 0x33) ^ uVar19;
              uVar16 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ auStack_1d8._8_8_ + uVar14;
              uVar17 = auStack_1d8._8_8_ + uVar14 + uVar15;
              uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar16;
              uVar15 = (uVar15 << 0x11 | uVar15 >> 0x2f) ^ uVar17;
              uVar14 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar19;
              uVar19 = (uVar19 ^ uVar21) + uVar15;
              uVar17 = ((uVar17 << 0x20 | uVar17 >> 0x20) ^ 0xff) + uVar14;
              uVar16 = (uVar15 << 0xd | uVar15 >> 0x33) ^ uVar19;
              uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar17;
              uVar17 = uVar17 + uVar16;
              uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar14;
              uVar16 = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ uVar17;
              uVar14 = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar19;
              uVar19 = uVar19 + uVar16;
              uVar15 = (uVar17 << 0x20 | uVar17 >> 0x20) + uVar14;
              uVar16 = (uVar16 << 0xd | uVar16 >> 0x33) ^ uVar19;
              uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar15;
              uVar15 = uVar15 + uVar16;
              uVar17 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar14;
              uVar16 = (uVar16 << 0x11 | uVar16 >> 0x2f) ^ uVar15;
              uVar14 = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar17;
              uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) + uVar14;
              uVar16 = (uVar16 << 0xd | uVar16 >> 0x33) ^ uVar17 + uVar16;
              uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar15;
              uVar15 = uVar15 + uVar16;
              uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) ^ (uVar16 << 0x11 | uVar16 >> 0x2f) ^
                       (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar15;
              lVar13 = *plVar18;
              uVar14 = plVar18[1];
              bVar28 = (byte)(uVar15 >> 0x39);
              auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
              auVar29 = pshuflw(auVar29,auVar29,0);
              lVar20 = 0;
              while( true ) {
                uVar15 = uVar15 & uVar14;
                auVar30 = *(undefined1 (*) [16])(lVar13 + uVar15);
                auVar34[0] = -(auVar30[0] == auVar29[0]);
                auVar34[1] = -(auVar30[1] == auVar29[1]);
                auVar34[2] = -(auVar30[2] == auVar29[2]);
                auVar34[3] = -(auVar30[3] == auVar29[3]);
                auVar34[4] = -(auVar30[4] == auVar29[4]);
                auVar34[5] = -(auVar30[5] == auVar29[5]);
                auVar34[6] = -(auVar30[6] == auVar29[6]);
                auVar34[7] = -(auVar30[7] == auVar29[7]);
                auVar34[8] = -(auVar30[8] == auVar29[0]);
                auVar34[9] = -(auVar30[9] == auVar29[1]);
                auVar34[10] = -(auVar30[10] == auVar29[2]);
                auVar34[0xb] = -(auVar30[0xb] == auVar29[3]);
                auVar34[0xc] = -(auVar30[0xc] == auVar29[4]);
                auVar34[0xd] = -(auVar30[0xd] == auVar29[5]);
                auVar34[0xe] = -(auVar30[0xe] == auVar29[6]);
                auVar34[0xf] = -(auVar30[0xf] == auVar29[7]);
                uVar24 = (ushort)(SUB161(auVar34 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar34[0xf] >> 7) << 0xf;
                uVar22 = (uint)uVar24;
                while (uVar24 != 0) {
                  uVar4 = 0;
                  for (uVar5 = uVar22; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                    uVar4 = uVar4 + 1;
                  }
                  uVar16 = uVar4 + uVar15 & uVar14;
                  if (uVar1 == *(uint *)(lVar13 + -0x18 + uVar16 * -0x18)) {
                    lVar13 = lVar13 + uVar16 * -0x18;
                    *(longlong **)(lVar13 + -0x10) = plVar2;
                    *(undefined8 *)(lVar13 + -8) = uVar3;
                    puVar27 = puVar27 + 0x1c;
                    if (puVar27 != puStack_168) goto LAB_140c3e686;
                    goto LAB_140c3ea70;
                  }
                  uVar24 = (ushort)(uVar22 - 1) & (ushort)uVar22;
                  uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar24);
                }
                auVar33[0] = -(auVar30[0] == (char)iVar6);
                auVar33[1] = -(auVar30[1] == (char)((uint)iVar6 >> 8));
                auVar33[2] = -(auVar30[2] == (char)((uint)iVar6 >> 0x10));
                auVar33[3] = -(auVar30[3] == (char)((uint)iVar6 >> 0x18));
                auVar33[4] = -(auVar30[4] == (char)iVar7);
                auVar33[5] = -(auVar30[5] == (char)((uint)iVar7 >> 8));
                auVar33[6] = -(auVar30[6] == (char)((uint)iVar7 >> 0x10));
                auVar33[7] = -(auVar30[7] == (char)((uint)iVar7 >> 0x18));
                auVar33[8] = -(auVar30[8] == (char)iVar8);
                auVar33[9] = -(auVar30[9] == (char)((uint)iVar8 >> 8));
                auVar33[10] = -(auVar30[10] == (char)((uint)iVar8 >> 0x10));
                auVar33[0xb] = -(auVar30[0xb] == (char)((uint)iVar8 >> 0x18));
                auVar33[0xc] = -(auVar30[0xc] == (char)iVar9);
                auVar33[0xd] = -(auVar30[0xd] == (char)((uint)iVar9 >> 8));
                auVar33[0xe] = -(auVar30[0xe] == (char)((uint)iVar9 >> 0x10));
                auVar33[0xf] = -(auVar30[0xf] == (char)((uint)iVar9 >> 0x18));
                if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar33 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
                uVar15 = uVar15 + lVar20 + 0x10;
                lVar20 = lVar20 + 0x10;
              }
            }
            auStack_1d8._8_8_ = pdb_140c447f0;
            auStack_1d8._0_8_ = &uStack_200;
            auStack_1c8._8_8_ = pdb_140c34b70;
            auStack_1c8._0_8_ = &plStack_1f8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14306d3de,auStack_1d8,&UNK_14306d400);
          }
          lVar13 = pdb_1417b43a0(plStack_1e8,uVar16,plStack_1f8,uStack_1f0);
          if (lVar13 != 3) {
            auStack_1d8._8_8_ = pdb_140c447f0;
            auStack_1d8._0_8_ = &uStack_200;
            auStack_1c8._8_8_ = pdb_140c34b70;
            auStack_1c8._0_8_ = &lStack_188;
            auStack_1b8._8_8_ = pdb_140c34b70;
            auStack_1b8._0_8_ = &plStack_1f8;
            lStack_188 = lVar13;
            uStack_180 = uVar16;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14306d398,auStack_1d8,&UNK_1430763d8);
          }
          puVar27 = puVar27 + 0x1c;
        } while (puVar27 != puStack_168);
      }
LAB_140c3ea70:
      puVar25 = puVar25 + 5;
    } while (puVar25 != puStack_170);
  }
  return;
}

