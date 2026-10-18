// VA 0x1411743c0, PDB extent 1487 bytes
// toolbar::mei::widgets::impl$53::pill_button<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$53::pill_button<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 1487 */

longlong *
pdb_1411743c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 unaff_RBX;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 unaff_R14;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lStack_58 = param_3;
  lStack_50 = param_4;
  uStack_a8 = pdb_140bbbcb0(&lStack_58);
  uStack_a0 = _DAT_14329c310;
  auStack_98._0_8_ = _UNK_14329c318;
  uStack_a0 = pdb_1400affa0(&uStack_a8);
  uStack_a8 = *(undefined8 *)(param_2 + 8);
  uVar5 = pdb_1400b0130(&uStack_a8);
  pdb_14072caa0(&lStack_58,param_2,uVar5);
  lVar11 = lStack_58;
  if (*(longlong *)(lStack_58 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lStack_58 + 0x1d0,&lStack_50);
    param_2 = *(longlong *)(lVar11 + 0x1b0);
    bVar16 = (byte)(uVar6 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar10 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar11 + 0x1b8);
      auVar25 = *(undefined1 (*) [16])(param_2 + uVar6);
      auVar22[0] = -(auVar25[0] == auVar17[0]);
      auVar22[1] = -(auVar25[1] == auVar17[1]);
      auVar22[2] = -(auVar25[2] == auVar17[2]);
      auVar22[3] = -(auVar25[3] == auVar17[3]);
      auVar22[4] = -(auVar25[4] == auVar17[4]);
      auVar22[5] = -(auVar25[5] == auVar17[5]);
      auVar22[6] = -(auVar25[6] == auVar17[6]);
      auVar22[7] = -(auVar25[7] == auVar17[7]);
      auVar22[8] = -(auVar25[8] == auVar17[0]);
      auVar22[9] = -(auVar25[9] == auVar17[1]);
      auVar22[10] = -(auVar25[10] == auVar17[2]);
      auVar22[0xb] = -(auVar25[0xb] == auVar17[3]);
      auVar22[0xc] = -(auVar25[0xc] == auVar17[4]);
      auVar22[0xd] = -(auVar25[0xd] == auVar17[5]);
      auVar22[0xe] = -(auVar25[0xe] == auVar17[6]);
      auVar22[0xf] = -(auVar25[0xf] == auVar17[7]);
      uVar13 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (unaff_RBX = param_6, unaff_R14 = param_5, uVar13 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar14 = (uVar3 + uVar6 & *(ulonglong *)(lVar11 + 0x1b8)) * -0xd8;
        if (lStack_50 == *(longlong *)(param_2 + -0xd8 + lVar14)) {
          param_2 = param_2 + lVar14;
          if (*(longlong *)(param_2 + -0x38) == 0) goto LAB_141174528;
          puVar8 = *(undefined **)(param_2 + -0x30);
          goto LAB_1411745ee;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar18[0] = -(auVar25[0] == -1);
      auVar18[1] = -(auVar25[1] == -1);
      auVar18[2] = -(auVar25[2] == -1);
      auVar18[3] = -(auVar25[3] == -1);
      auVar18[4] = -(auVar25[4] == -1);
      auVar18[5] = -(auVar25[5] == -1);
      auVar18[6] = -(auVar25[6] == -1);
      auVar18[7] = -(auVar25[7] == -1);
      auVar18[8] = -(auVar25[8] == -1);
      auVar18[9] = -(auVar25[9] == -1);
      auVar18[10] = -(auVar25[10] == -1);
      auVar18[0xb] = -(auVar25[0xb] == -1);
      auVar18[0xc] = -(auVar25[0xc] == -1);
      auVar18[0xd] = -(auVar25[0xd] == -1);
      auVar18[0xe] = -(auVar25[0xe] == -1);
      auVar18[0xf] = -(auVar25[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar6 = uVar6 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_141174528:
  plStack_b0 = *(longlong **)(lVar11 + 0x270);
  LOCK();
  lVar11 = *plStack_b0;
  *plStack_b0 = *plStack_b0 + 1;
  UNLOCK();
  if (*plStack_b0 == 0 || SCARRY8(lVar11,1) != *plStack_b0 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_a8 = 0;
  uStack_a0 = 4;
  auStack_98 = (undefined1  [16])0x0;
  uStack_88 = 4;
  uStack_80 = 0;
  uStack_78 = 1;
  uStack_70 = 0;
  uStack_64 = CONCAT31(uStack_64._1_3_,0x2a);
  uStack_68 = 0x3f800000;
  LOCK();
  *plStack_b0 = *plStack_b0 + -1;
  UNLOCK();
  if (*plStack_b0 == 0) {
    pdb_140cb5640(&plStack_b0);
  }
  pdb_14007ee60();
  lVar10 = 8;
  pbVar7 = pub_1406abab0(0x48,8);
  if (pbVar7 != (byte *)0x0) {
    *(ulonglong *)(pbVar7 + 0x40) = CONCAT44(uStack_64,uStack_68);
    *(undefined8 *)(pbVar7 + 0x30) = uStack_78;
    *(undefined8 *)(pbVar7 + 0x38) = uStack_70;
    *(undefined8 *)(pbVar7 + 0x20) = uStack_88;
    *(undefined8 *)(pbVar7 + 0x28) = uStack_80;
    *(undefined8 *)(pbVar7 + 0x10) = auStack_98._0_8_;
    *(undefined8 *)(pbVar7 + 0x18) = auStack_98._8_8_;
    *(longlong *)pbVar7 = uStack_a8;
    *(longlong *)(pbVar7 + 8) = uStack_a0;
    *(byte **)(param_2 + -0x38) = pbVar7;
    puVar8 = &UNK_14329c570;
    *(undefined **)(param_2 + -0x30) = &UNK_14329c570;
LAB_1411745ee:
    lVar14 = (**(code **)(puVar8 + 0x28))();
    (**(code **)(lVar10 + 0x18))(&uStack_a8,lVar14);
    lVar11 = lStack_58;
    auVar17[0] = -((char)uStack_a8 == DAT_142f3b300);
    auVar17[1] = -(uStack_a8._1_1_ == UNK_142f3b301);
    auVar17[2] = -(uStack_a8._2_1_ == UNK_142f3b302);
    auVar17[3] = -(uStack_a8._3_1_ == UNK_142f3b303);
    auVar17[4] = -(uStack_a8._4_1_ == UNK_142f3b304);
    auVar17[5] = -(uStack_a8._5_1_ == UNK_142f3b305);
    auVar17[6] = -(uStack_a8._6_1_ == UNK_142f3b306);
    auVar17[7] = -(uStack_a8._7_1_ == UNK_142f3b307);
    auVar17[8] = -((char)uStack_a0 == UNK_142f3b308);
    auVar17[9] = -(uStack_a0._1_1_ == UNK_142f3b309);
    auVar17[10] = -(uStack_a0._2_1_ == UNK_142f3b30a);
    auVar17[0xb] = -(uStack_a0._3_1_ == UNK_142f3b30b);
    auVar17[0xc] = -(uStack_a0._4_1_ == UNK_142f3b30c);
    auVar17[0xd] = -(uStack_a0._5_1_ == UNK_142f3b30d);
    auVar17[0xe] = -(uStack_a0._6_1_ == UNK_142f3b30e);
    auVar17[0xf] = -(uStack_a0._7_1_ == UNK_142f3b30f);
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined8 *)(lVar14 + 0x30) = unaff_R14;
      *(undefined8 *)(lVar14 + 0x38) = unaff_RBX;
      auStack_98._0_8_ = uStack_48;
      uStack_a8 = lStack_58;
      uStack_a0 = lStack_50;
      if (*(longlong *)(lStack_58 + 0x1c8) != 0) {
        uVar9 = pdb_1400af0a0(lStack_58 + 0x1d0,&uStack_a0);
        lVar14 = uStack_a8;
        lVar10 = *(longlong *)(lVar11 + 0x1b0);
        uVar6 = *(ulonglong *)(lVar11 + 0x1b8);
        bVar16 = (byte)(uVar9 >> 0x39);
        auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
        auVar17 = pshuflw(auVar17,auVar17,0);
        lVar11 = 0;
        while( true ) {
          uVar9 = uVar9 & uVar6;
          auVar25 = *(undefined1 (*) [16])(lVar10 + uVar9);
          auVar23[0] = -(auVar25[0] == auVar17[0]);
          auVar23[1] = -(auVar25[1] == auVar17[1]);
          auVar23[2] = -(auVar25[2] == auVar17[2]);
          auVar23[3] = -(auVar25[3] == auVar17[3]);
          auVar23[4] = -(auVar25[4] == auVar17[4]);
          auVar23[5] = -(auVar25[5] == auVar17[5]);
          auVar23[6] = -(auVar25[6] == auVar17[6]);
          auVar23[7] = -(auVar25[7] == auVar17[7]);
          auVar23[8] = -(auVar25[8] == auVar17[0]);
          auVar23[9] = -(auVar25[9] == auVar17[1]);
          auVar23[10] = -(auVar25[10] == auVar17[2]);
          auVar23[0xb] = -(auVar25[0xb] == auVar17[3]);
          auVar23[0xc] = -(auVar25[0xc] == auVar17[4]);
          auVar23[0xd] = -(auVar25[0xd] == auVar17[5]);
          auVar23[0xe] = -(auVar25[0xe] == auVar17[6]);
          auVar23[0xf] = -(auVar25[0xf] == auVar17[7]);
          uVar13 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar23[0xf] >> 7) << 0xf;
          uVar12 = (uint)uVar13;
          while (uVar13 != 0) {
            uVar3 = 0;
            for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            lVar15 = (uVar3 + uVar9 & uVar6) * -0xd8;
            if (uStack_a0 == *(longlong *)(lVar10 + -0xd8 + lVar15)) {
              pbVar7 = (byte *)(lVar10 + lVar15 + -5);
              *pbVar7 = *pbVar7 | 0x20;
              uStack_48 = auStack_98._0_8_;
              lStack_58 = uStack_a8;
              lStack_50 = uStack_a0;
              if (*(longlong *)(uStack_a8 + 0x1c8) != 0) {
                uVar9 = pdb_1400af0a0(uStack_a8 + 0x1d0,&lStack_50);
                lVar10 = lStack_58;
                lVar11 = *(longlong *)(lVar14 + 0x1b0);
                uVar6 = *(ulonglong *)(lVar14 + 0x1b8);
                bVar16 = (byte)(uVar9 >> 0x39);
                auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
                auVar17 = pshuflw(auVar17,auVar17,0);
                lVar14 = 0;
                while( true ) {
                  uVar9 = uVar9 & uVar6;
                  auVar25 = *(undefined1 (*) [16])(lVar11 + uVar9);
                  auVar24[0] = -(auVar25[0] == auVar17[0]);
                  auVar24[1] = -(auVar25[1] == auVar17[1]);
                  auVar24[2] = -(auVar25[2] == auVar17[2]);
                  auVar24[3] = -(auVar25[3] == auVar17[3]);
                  auVar24[4] = -(auVar25[4] == auVar17[4]);
                  auVar24[5] = -(auVar25[5] == auVar17[5]);
                  auVar24[6] = -(auVar25[6] == auVar17[6]);
                  auVar24[7] = -(auVar25[7] == auVar17[7]);
                  auVar24[8] = -(auVar25[8] == auVar17[0]);
                  auVar24[9] = -(auVar25[9] == auVar17[1]);
                  auVar24[10] = -(auVar25[10] == auVar17[2]);
                  auVar24[0xb] = -(auVar25[0xb] == auVar17[3]);
                  auVar24[0xc] = -(auVar25[0xc] == auVar17[4]);
                  auVar24[0xd] = -(auVar25[0xd] == auVar17[5]);
                  auVar24[0xe] = -(auVar25[0xe] == auVar17[6]);
                  auVar24[0xf] = -(auVar25[0xf] == auVar17[7]);
                  uVar13 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                  uVar12 = (uint)uVar13;
                  while (uVar13 != 0) {
                    uVar3 = 0;
                    for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                      uVar3 = uVar3 + 1;
                    }
                    lVar15 = (uVar3 + uVar9 & uVar6) * -0xd8;
                    if (lStack_50 == *(longlong *)(lVar11 + -0xd8 + lVar15)) {
                      lVar11 = lVar11 + lVar15;
                      *(undefined1 (*) [16])(lVar11 + -0x9c) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(lVar11 + -0xa8) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(lVar11 + -0xb8) = (undefined1  [16])0x0;
                      *(undefined8 *)(lVar11 + -0x8c) = 0x42a00000;
                      *(undefined4 *)(lVar11 + -0x84) = 0x42700000;
                      *(undefined8 *)(lVar11 + -0x80) = 0;
                      *(undefined8 *)(lVar11 + -0x7a) = 0;
                      *(undefined2 *)(lVar11 + -0x72) = 0x102;
                      auStack_98._0_8_ = uStack_48;
                      uStack_a8 = lStack_58;
                      uStack_a0 = lStack_50;
                      if (*(longlong *)(lStack_58 + 0x1c8) != 0) {
                        uVar9 = pdb_1400af0a0(lStack_58 + 0x1d0,&uStack_a0);
                        lVar11 = *(longlong *)(lVar10 + 0x1b0);
                        uVar6 = *(ulonglong *)(lVar10 + 0x1b8);
                        bVar16 = (byte)(uVar9 >> 0x39);
                        auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
                        auVar17 = pshuflw(auVar17,auVar17,0);
                        lVar10 = 0;
                        while( true ) {
                          uVar9 = uVar9 & uVar6;
                          pcVar1 = (char *)(lVar11 + uVar9);
                          auVar25[0] = -(*pcVar1 == auVar17[0]);
                          auVar25[1] = -(pcVar1[1] == auVar17[1]);
                          auVar25[2] = -(pcVar1[2] == auVar17[2]);
                          auVar25[3] = -(pcVar1[3] == auVar17[3]);
                          auVar25[4] = -(pcVar1[4] == auVar17[4]);
                          auVar25[5] = -(pcVar1[5] == auVar17[5]);
                          auVar25[6] = -(pcVar1[6] == auVar17[6]);
                          auVar25[7] = -(pcVar1[7] == auVar17[7]);
                          auVar25[8] = -(pcVar1[8] == auVar17[0]);
                          auVar25[9] = -(pcVar1[9] == auVar17[1]);
                          auVar25[10] = -(pcVar1[10] == auVar17[2]);
                          auVar25[0xb] = -(pcVar1[0xb] == auVar17[3]);
                          auVar25[0xc] = -(pcVar1[0xc] == auVar17[4]);
                          auVar25[0xd] = -(pcVar1[0xd] == auVar17[5]);
                          auVar25[0xe] = -(pcVar1[0xe] == auVar17[6]);
                          auVar25[0xf] = -(pcVar1[0xf] == auVar17[7]);
                          uVar13 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                          uVar12 = (uint)uVar13;
                          while (uVar13 != 0) {
                            uVar3 = 0;
                            for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000)
                            {
                              uVar3 = uVar3 + 1;
                            }
                            lVar14 = (uVar3 + uVar9 & uVar6) * -0xd8;
                            if (uStack_a0 == *(longlong *)(lVar11 + -0xd8 + lVar14)) {
                              *(undefined2 *)(lVar11 + lVar14 + -8) = 0x200;
                              param_1[2] = auStack_98._0_8_;
                              *param_1 = uStack_a8;
                              param_1[1] = uStack_a0;
                              return param_1;
                            }
                            uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
                            uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
                          }
                          auVar21[0] = -(*pcVar1 == -1);
                          auVar21[1] = -(pcVar1[1] == -1);
                          auVar21[2] = -(pcVar1[2] == -1);
                          auVar21[3] = -(pcVar1[3] == -1);
                          auVar21[4] = -(pcVar1[4] == -1);
                          auVar21[5] = -(pcVar1[5] == -1);
                          auVar21[6] = -(pcVar1[6] == -1);
                          auVar21[7] = -(pcVar1[7] == -1);
                          auVar21[8] = -(pcVar1[8] == -1);
                          auVar21[9] = -(pcVar1[9] == -1);
                          auVar21[10] = -(pcVar1[10] == -1);
                          auVar21[0xb] = -(pcVar1[0xb] == -1);
                          auVar21[0xc] = -(pcVar1[0xc] == -1);
                          auVar21[0xd] = -(pcVar1[0xd] == -1);
                          auVar21[0xe] = -(pcVar1[0xe] == -1);
                          auVar21[0xf] = -(pcVar1[0xf] == -1);
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
                          uVar9 = uVar9 + lVar10 + 0x10;
                          lVar10 = lVar10 + 0x10;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      pdb_142dc8150(&UNK_142fa6b48);
                    }
                    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
                    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
                  }
                  auVar20[0] = -(auVar25[0] == -1);
                  auVar20[1] = -(auVar25[1] == -1);
                  auVar20[2] = -(auVar25[2] == -1);
                  auVar20[3] = -(auVar25[3] == -1);
                  auVar20[4] = -(auVar25[4] == -1);
                  auVar20[5] = -(auVar25[5] == -1);
                  auVar20[6] = -(auVar25[6] == -1);
                  auVar20[7] = -(auVar25[7] == -1);
                  auVar20[8] = -(auVar25[8] == -1);
                  auVar20[9] = -(auVar25[9] == -1);
                  auVar20[10] = -(auVar25[10] == -1);
                  auVar20[0xb] = -(auVar25[0xb] == -1);
                  auVar20[0xc] = -(auVar25[0xc] == -1);
                  auVar20[0xd] = -(auVar25[0xd] == -1);
                  auVar20[0xe] = -(auVar25[0xe] == -1);
                  auVar20[0xf] = -(auVar25[0xf] == -1);
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
                         (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0
                      ) || auVar20[0xf] < '\0') break;
                  uVar9 = uVar9 + lVar14 + 0x10;
                  lVar14 = lVar14 + 0x10;
                }
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_142fa6b30);
            }
            uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
            uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
          }
          auVar19[0] = -(auVar25[0] == -1);
          auVar19[1] = -(auVar25[1] == -1);
          auVar19[2] = -(auVar25[2] == -1);
          auVar19[3] = -(auVar25[3] == -1);
          auVar19[4] = -(auVar25[4] == -1);
          auVar19[5] = -(auVar25[5] == -1);
          auVar19[6] = -(auVar25[6] == -1);
          auVar19[7] = -(auVar25[7] == -1);
          auVar19[8] = -(auVar25[8] == -1);
          auVar19[9] = -(auVar25[9] == -1);
          auVar19[10] = -(auVar25[10] == -1);
          auVar19[0xb] = -(auVar25[0xb] == -1);
          auVar19[0xc] = -(auVar25[0xc] == -1);
          auVar19[0xd] = -(auVar25[0xd] == -1);
          auVar19[0xe] = -(auVar25[0xe] == -1);
          auVar19[0xf] = -(auVar25[0xf] == -1);
          if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x2f,0) & 1) != 0) || (SUB161(auVar19 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
          uVar9 = uVar9 + lVar11 + 0x10;
          lVar11 = lVar11 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa6b60);
    }
    pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

