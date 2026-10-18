// VA 0x14116b120, PDB extent 1938 bytes
// toolbar::menu::thumbnail_scroll::impl$4::thumbnail_scroll<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::menu::thumbnail_scroll::impl$4::thumbnail_scroll<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
   Extent: 1938 */

longlong *
pdb_14116b120(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_120 = param_5;
  uStack_118 = param_6;
  uStack_3a = 1;
  uStack_68 = param_4;
  uStack_e8 = pdb_140bbbcb0(&uStack_120);
  uStack_e0 = _DAT_14329c2d0;
  lStack_d8 = _UNK_14329c2d8;
  uStack_100 = param_4;
  uStack_f8 = param_3;
  uStack_e0 = pdb_1400affa0(&uStack_e8);
  uStack_e8 = *(undefined8 *)(param_2 + 8);
  uVar6 = pdb_1400b0130(&uStack_e8);
  uStack_3b = 1;
  pdb_14072caa0(&lStack_58,param_2,uVar6);
  lVar10 = lStack_58;
  uStack_110 = param_4;
  uStack_108 = param_3;
  if (*(longlong *)(lStack_58 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_58 + 0x1d0,&lStack_50);
    lVar13 = *(longlong *)(lVar10 + 0x1b0);
    bVar17 = (byte)(uVar7 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar12 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar10 + 0x1b8);
      auVar26 = *(undefined1 (*) [16])(lVar13 + uVar7);
      auVar23[0] = -(auVar26[0] == auVar18[0]);
      auVar23[1] = -(auVar26[1] == auVar18[1]);
      auVar23[2] = -(auVar26[2] == auVar18[2]);
      auVar23[3] = -(auVar26[3] == auVar18[3]);
      auVar23[4] = -(auVar26[4] == auVar18[4]);
      auVar23[5] = -(auVar26[5] == auVar18[5]);
      auVar23[6] = -(auVar26[6] == auVar18[6]);
      auVar23[7] = -(auVar26[7] == auVar18[7]);
      auVar23[8] = -(auVar26[8] == auVar18[0]);
      auVar23[9] = -(auVar26[9] == auVar18[1]);
      auVar23[10] = -(auVar26[10] == auVar18[2]);
      auVar23[0xb] = -(auVar26[0xb] == auVar18[3]);
      auVar23[0xc] = -(auVar26[0xc] == auVar18[4]);
      auVar23[0xd] = -(auVar26[0xd] == auVar18[5]);
      auVar23[0xe] = -(auVar26[0xe] == auVar18[6]);
      auVar23[0xf] = -(auVar26[0xf] == auVar18[7]);
      uVar15 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar16 = (uVar4 + uVar7 & *(ulonglong *)(lVar10 + 0x1b8)) * -0xd8;
        if (lStack_50 == *(longlong *)(lVar13 + -0xd8 + lVar16)) {
          lVar13 = lVar13 + lVar16;
          if (*(longlong *)(lVar13 + -0x38) == 0) {
            plVar2 = *(longlong **)(lVar10 + 0x270);
            LOCK();
            lVar10 = *plVar2;
            *plVar2 = *plVar2 + 1;
            UNLOCK();
            if (*plVar2 == 0 || SCARRY8(lVar10,1) != *plVar2 < 0) goto LAB_14116b728;
            uStack_39 = 1;
            pdb_1422ad300(&uStack_e8);
            pdb_14007ee60();
            lVar12 = 8;
            pbVar8 = pub_1406abab0(0x78,8);
            if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x78);
            }
            *(undefined8 *)(pbVar8 + 0x70) = uStack_78;
            *(undefined8 *)(pbVar8 + 0x60) = uStack_88;
            *(undefined8 *)(pbVar8 + 0x68) = uStack_80;
            *(undefined8 *)(pbVar8 + 0x50) = uStack_98;
            *(undefined8 *)(pbVar8 + 0x58) = uStack_90;
            *(undefined8 *)(pbVar8 + 0x40) = uStack_a8;
            *(undefined8 *)(pbVar8 + 0x48) = uStack_a0;
            *(undefined8 *)(pbVar8 + 0x30) = uStack_b8;
            *(undefined8 *)(pbVar8 + 0x38) = uStack_b0;
            *(undefined8 *)(pbVar8 + 0x20) = uStack_c8;
            *(undefined8 *)(pbVar8 + 0x28) = uStack_c0;
            *(longlong *)(pbVar8 + 0x10) = lStack_d8;
            *(undefined8 *)(pbVar8 + 0x18) = uStack_d0;
            *(longlong *)pbVar8 = uStack_e8;
            *(longlong *)(pbVar8 + 8) = uStack_e0;
            *(byte **)(lVar13 + -0x38) = pbVar8;
            puVar9 = &UNK_14329cc68;
            *(undefined **)(lVar13 + -0x30) = &UNK_14329cc68;
          }
          else {
            puVar9 = *(undefined **)(lVar13 + -0x30);
          }
          uStack_39 = 1;
          lVar10 = (**(code **)(puVar9 + 0x28))();
          uStack_39 = 1;
          (**(code **)(lVar12 + 0x18))(&uStack_e8,lVar10);
          auVar18[0] = -((char)uStack_e8 == DAT_14329bc10);
          auVar18[1] = -(uStack_e8._1_1_ == UNK_14329bc11);
          auVar18[2] = -(uStack_e8._2_1_ == UNK_14329bc12);
          auVar18[3] = -(uStack_e8._3_1_ == UNK_14329bc13);
          auVar18[4] = -(uStack_e8._4_1_ == UNK_14329bc14);
          auVar18[5] = -(uStack_e8._5_1_ == UNK_14329bc15);
          auVar18[6] = -(uStack_e8._6_1_ == UNK_14329bc16);
          auVar18[7] = -(uStack_e8._7_1_ == UNK_14329bc17);
          auVar18[8] = -((char)uStack_e0 == UNK_14329bc18);
          auVar18[9] = -(uStack_e0._1_1_ == UNK_14329bc19);
          auVar18[10] = -(uStack_e0._2_1_ == UNK_14329bc1a);
          auVar18[0xb] = -(uStack_e0._3_1_ == UNK_14329bc1b);
          auVar18[0xc] = -(uStack_e0._4_1_ == UNK_14329bc1c);
          auVar18[0xd] = -(uStack_e0._5_1_ == UNK_14329bc1d);
          auVar18[0xe] = -(uStack_e0._6_1_ == UNK_14329bc1e);
          auVar18[0xf] = -(uStack_e0._7_1_ == UNK_14329bc1f);
          if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
            *(undefined8 *)(lVar10 + 0x40) = param_3;
            plVar2 = *(longlong **)(lVar10 + 0x38);
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            uStack_60 = param_4;
            if (*plVar2 == 0) {
              lStack_f0 = lVar10 + 0x38;
              pdb_140c7a9d0();
            }
            *(undefined8 *)(lVar10 + 0x38) = uStack_60;
            *(undefined1 *)(lVar10 + 0x74) = 1;
            *(undefined4 *)(lVar10 + 0x58) = 1;
            uStack_e8 = lStack_58;
            uStack_e0 = lStack_50;
            lStack_d8 = lStack_48;
            if (*(longlong *)(lStack_58 + 0x1c8) != 0) {
              uVar7 = pdb_1400af0a0(lStack_58 + 0x1d0,&uStack_e0);
              lVar13 = uStack_e8;
              lVar10 = *(longlong *)(lStack_58 + 0x1b0);
              bVar17 = (byte)(uVar7 >> 0x39);
              auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
              auVar18 = pshuflw(auVar18,auVar18,0);
              lVar12 = 0;
              while( true ) {
                uVar7 = uVar7 & *(ulonglong *)(lStack_58 + 0x1b8);
                auVar26 = *(undefined1 (*) [16])(lVar10 + uVar7);
                auVar24[0] = -(auVar26[0] == auVar18[0]);
                auVar24[1] = -(auVar26[1] == auVar18[1]);
                auVar24[2] = -(auVar26[2] == auVar18[2]);
                auVar24[3] = -(auVar26[3] == auVar18[3]);
                auVar24[4] = -(auVar26[4] == auVar18[4]);
                auVar24[5] = -(auVar26[5] == auVar18[5]);
                auVar24[6] = -(auVar26[6] == auVar18[6]);
                auVar24[7] = -(auVar26[7] == auVar18[7]);
                auVar24[8] = -(auVar26[8] == auVar18[0]);
                auVar24[9] = -(auVar26[9] == auVar18[1]);
                auVar24[10] = -(auVar26[10] == auVar18[2]);
                auVar24[0xb] = -(auVar26[0xb] == auVar18[3]);
                auVar24[0xc] = -(auVar26[0xc] == auVar18[4]);
                auVar24[0xd] = -(auVar26[0xd] == auVar18[5]);
                auVar24[0xe] = -(auVar26[0xe] == auVar18[6]);
                auVar24[0xf] = -(auVar26[0xf] == auVar18[7]);
                uVar15 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar24[0xf] >> 7) << 0xf;
                uVar14 = (uint)uVar15;
                while (uVar15 != 0) {
                  uVar4 = 0;
                  for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                    uVar4 = uVar4 + 1;
                  }
                  lVar16 = (uVar4 + uVar7 & *(ulonglong *)(lStack_58 + 0x1b8)) * -0xd8;
                  if (uStack_e0 == *(longlong *)(lVar10 + -0xd8 + lVar16)) {
                    pbVar8 = (byte *)(lVar10 + lVar16 + -5);
                    *pbVar8 = *pbVar8 | 0x40;
                    lStack_48 = lStack_d8;
                    lStack_58 = uStack_e8;
                    lStack_50 = uStack_e0;
                    if (*(longlong *)(uStack_e8 + 0x1c8) != 0) {
                      uVar11 = pdb_1400af0a0(uStack_e8 + 0x1d0,&lStack_50);
                      lVar12 = lStack_58;
                      lVar10 = *(longlong *)(lVar13 + 0x1b0);
                      uVar7 = *(ulonglong *)(lVar13 + 0x1b8);
                      bVar17 = (byte)(uVar11 >> 0x39);
                      auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
                      auVar18 = pshuflw(auVar18,auVar18,0);
                      lVar13 = 0;
                      while( true ) {
                        uVar11 = uVar11 & uVar7;
                        auVar26 = *(undefined1 (*) [16])(lVar10 + uVar11);
                        auVar25[0] = -(auVar26[0] == auVar18[0]);
                        auVar25[1] = -(auVar26[1] == auVar18[1]);
                        auVar25[2] = -(auVar26[2] == auVar18[2]);
                        auVar25[3] = -(auVar26[3] == auVar18[3]);
                        auVar25[4] = -(auVar26[4] == auVar18[4]);
                        auVar25[5] = -(auVar26[5] == auVar18[5]);
                        auVar25[6] = -(auVar26[6] == auVar18[6]);
                        auVar25[7] = -(auVar26[7] == auVar18[7]);
                        auVar25[8] = -(auVar26[8] == auVar18[0]);
                        auVar25[9] = -(auVar26[9] == auVar18[1]);
                        auVar25[10] = -(auVar26[10] == auVar18[2]);
                        auVar25[0xb] = -(auVar26[0xb] == auVar18[3]);
                        auVar25[0xc] = -(auVar26[0xc] == auVar18[4]);
                        auVar25[0xd] = -(auVar26[0xd] == auVar18[5]);
                        auVar25[0xe] = -(auVar26[0xe] == auVar18[6]);
                        auVar25[0xf] = -(auVar26[0xf] == auVar18[7]);
                        uVar15 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                                 (ushort)(auVar25[0xf] >> 7) << 0xf;
                        uVar14 = (uint)uVar15;
                        while (uVar15 != 0) {
                          uVar4 = 0;
                          for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                            uVar4 = uVar4 + 1;
                          }
                          lVar16 = (uVar4 + uVar11 & uVar7) * -0xd8;
                          if (lStack_50 == *(longlong *)(lVar10 + -0xd8 + lVar16)) {
                            pbVar8 = (byte *)(lVar10 + lVar16 + -5);
                            *pbVar8 = *pbVar8 | 0x20;
                            lStack_d8 = lStack_48;
                            uStack_e8 = lStack_58;
                            uStack_e0 = lStack_50;
                            if (*(longlong *)(lStack_58 + 0x1c8) != 0) {
                              uVar11 = pdb_1400af0a0(lStack_58 + 0x1d0,&uStack_e0);
                              lVar10 = *(longlong *)(lVar12 + 0x1b0);
                              uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
                              bVar17 = (byte)(uVar11 >> 0x39);
                              auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
                              auVar18 = pshuflw(auVar18,auVar18,0);
                              lVar13 = 0;
                              while( true ) {
                                uVar11 = uVar11 & uVar7;
                                pcVar1 = (char *)(lVar10 + uVar11);
                                auVar26[0] = -(*pcVar1 == auVar18[0]);
                                auVar26[1] = -(pcVar1[1] == auVar18[1]);
                                auVar26[2] = -(pcVar1[2] == auVar18[2]);
                                auVar26[3] = -(pcVar1[3] == auVar18[3]);
                                auVar26[4] = -(pcVar1[4] == auVar18[4]);
                                auVar26[5] = -(pcVar1[5] == auVar18[5]);
                                auVar26[6] = -(pcVar1[6] == auVar18[6]);
                                auVar26[7] = -(pcVar1[7] == auVar18[7]);
                                auVar26[8] = -(pcVar1[8] == auVar18[0]);
                                auVar26[9] = -(pcVar1[9] == auVar18[1]);
                                auVar26[10] = -(pcVar1[10] == auVar18[2]);
                                auVar26[0xb] = -(pcVar1[0xb] == auVar18[3]);
                                auVar26[0xc] = -(pcVar1[0xc] == auVar18[4]);
                                auVar26[0xd] = -(pcVar1[0xd] == auVar18[5]);
                                auVar26[0xe] = -(pcVar1[0xe] == auVar18[6]);
                                auVar26[0xf] = -(pcVar1[0xf] == auVar18[7]);
                                uVar15 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(auVar26[0xf] >> 7) << 0xf;
                                uVar14 = (uint)uVar15;
                                while (uVar15 != 0) {
                                  uVar4 = 0;
                                  for (uVar5 = uVar14; (uVar5 & 1) == 0;
                                      uVar5 = uVar5 >> 1 | 0x80000000) {
                                    uVar4 = uVar4 + 1;
                                  }
                                  lVar12 = (uVar4 + uVar11 & uVar7) * -0xd8;
                                  if (uStack_e0 == *(longlong *)(lVar10 + -0xd8 + lVar12)) {
                                    lVar10 = lVar10 + lVar12;
                                    *(undefined1 (*) [16])(lVar10 + -0x98) = (undefined1  [16])0x0;
                                    *(undefined1 (*) [16])(lVar10 + -0xa8) = (undefined1  [16])0x0;
                                    *(undefined1 (*) [16])(lVar10 + -0xb8) = (undefined1  [16])0x0;
                                    *(undefined8 *)(lVar10 + -0x88) = 0;
                                    *(undefined4 *)(lVar10 + -0x80) = 0x3f800000;
                                    *(undefined8 *)(lVar10 + -0x7c) = 0;
                                    *(undefined4 *)(lVar10 + -0x75) = 0;
                                    *(undefined1 *)(lVar10 + -0x71) = 4;
                                    param_1[2] = lStack_d8;
                                    *param_1 = uStack_e8;
                                    param_1[1] = uStack_e0;
                                    return param_1;
                                  }
                                  uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
                                  uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
                                }
                                auVar22[0] = -(*pcVar1 == -1);
                                auVar22[1] = -(pcVar1[1] == -1);
                                auVar22[2] = -(pcVar1[2] == -1);
                                auVar22[3] = -(pcVar1[3] == -1);
                                auVar22[4] = -(pcVar1[4] == -1);
                                auVar22[5] = -(pcVar1[5] == -1);
                                auVar22[6] = -(pcVar1[6] == -1);
                                auVar22[7] = -(pcVar1[7] == -1);
                                auVar22[8] = -(pcVar1[8] == -1);
                                auVar22[9] = -(pcVar1[9] == -1);
                                auVar22[10] = -(pcVar1[10] == -1);
                                auVar22[0xb] = -(pcVar1[0xb] == -1);
                                auVar22[0xc] = -(pcVar1[0xc] == -1);
                                auVar22[0xd] = -(pcVar1[0xd] == -1);
                                auVar22[0xe] = -(pcVar1[0xe] == -1);
                                auVar22[0xf] = -(pcVar1[0xf] == -1);
                                if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 ||
                                                 (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                                                (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                                               (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                                              (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                                             (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                                            (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                                           (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                                          (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
                                         (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
                                        (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
                                       (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
                                      (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
                                     (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
                                    (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0')
                                break;
                                uVar11 = uVar11 + lVar13 + 0x10;
                                lVar13 = lVar13 + 0x10;
                              }
                            }
                            uStack_3a = 0;
                    /* WARNING: Subroutine does not return */
                            pdb_142dc8150(&UNK_142fa6b30);
                          }
                          uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
                          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
                        }
                        auVar21[0] = -(auVar26[0] == -1);
                        auVar21[1] = -(auVar26[1] == -1);
                        auVar21[2] = -(auVar26[2] == -1);
                        auVar21[3] = -(auVar26[3] == -1);
                        auVar21[4] = -(auVar26[4] == -1);
                        auVar21[5] = -(auVar26[5] == -1);
                        auVar21[6] = -(auVar26[6] == -1);
                        auVar21[7] = -(auVar26[7] == -1);
                        auVar21[8] = -(auVar26[8] == -1);
                        auVar21[9] = -(auVar26[9] == -1);
                        auVar21[10] = -(auVar26[10] == -1);
                        auVar21[0xb] = -(auVar26[0xb] == -1);
                        auVar21[0xc] = -(auVar26[0xc] == -1);
                        auVar21[0xd] = -(auVar26[0xd] == -1);
                        auVar21[0xe] = -(auVar26[0xe] == -1);
                        auVar21[0xf] = -(auVar26[0xf] == -1);
                        if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 ||
                                         (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                                        (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                                       (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                                      (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                                     (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
                                    (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                                   (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
                                  (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
                                 (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
                                (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
                               (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
                              (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
                             (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
                            (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
                        uVar11 = uVar11 + lVar13 + 0x10;
                        lVar13 = lVar13 + 0x10;
                      }
                    }
                    uStack_3a = 0;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_142fa6b60);
                  }
                  uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
                  uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
                }
                auVar20[0] = -(auVar26[0] == -1);
                auVar20[1] = -(auVar26[1] == -1);
                auVar20[2] = -(auVar26[2] == -1);
                auVar20[3] = -(auVar26[3] == -1);
                auVar20[4] = -(auVar26[4] == -1);
                auVar20[5] = -(auVar26[5] == -1);
                auVar20[6] = -(auVar26[6] == -1);
                auVar20[7] = -(auVar26[7] == -1);
                auVar20[8] = -(auVar26[8] == -1);
                auVar20[9] = -(auVar26[9] == -1);
                auVar20[10] = -(auVar26[10] == -1);
                auVar20[0xb] = -(auVar26[0xb] == -1);
                auVar20[0xc] = -(auVar26[0xc] == -1);
                auVar20[0xd] = -(auVar26[0xd] == -1);
                auVar20[0xe] = -(auVar26[0xe] == -1);
                auVar20[0xf] = -(auVar26[0xf] == -1);
                if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
                uVar7 = uVar7 + lVar12 + 0x10;
                lVar12 = lVar12 + 0x10;
              }
            }
            uStack_3a = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142fa6b48);
          }
          uStack_39 = 1;
          pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
          goto LAB_14116b728;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar19[0] = -(auVar26[0] == -1);
      auVar19[1] = -(auVar26[1] == -1);
      auVar19[2] = -(auVar26[2] == -1);
      auVar19[3] = -(auVar26[3] == -1);
      auVar19[4] = -(auVar26[4] == -1);
      auVar19[5] = -(auVar26[5] == -1);
      auVar19[6] = -(auVar26[6] == -1);
      auVar19[7] = -(auVar26[7] == -1);
      auVar19[8] = -(auVar26[8] == -1);
      auVar19[9] = -(auVar26[9] == -1);
      auVar19[10] = -(auVar26[10] == -1);
      auVar19[0xb] = -(auVar26[0xb] == -1);
      auVar19[0xc] = -(auVar26[0xc] == -1);
      auVar19[0xd] = -(auVar26[0xd] == -1);
      auVar19[0xe] = -(auVar26[0xe] == -1);
      auVar19[0xf] = -(auVar26[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar7 = uVar7 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  uStack_39 = 1;
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_14116b728:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

