// VA 0x141175bc0, PDB extent 3849 bytes
// toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableBool>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableBool>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 3849 */

ulonglong pdb_141175bc0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       float param_5,longlong *param_6)

{
  char *pcVar1;
  int iVar2;
  ulonglong *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined *puVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 unaff_R12D;
  longlong *plVar21;
  undefined1 uVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float unaff_XMM6_Da;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  byte *pbStack_108;
  ulonglong uStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  undefined8 uStack_e8;
  longlong *plStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  plStack_88 = (longlong *)pdb_140bbbcb0(&uStack_a8);
  uStack_80 = (longlong *)_DAT_14329c2c0;
  uStack_78 = _UNK_14329c2c8;
  uStack_80 = (longlong *)pdb_1400affa0(&plStack_88);
  plStack_88 = *(longlong **)(param_1 + 8);
  uVar8 = pdb_1400b0130(&plStack_88);
  pdb_14072caa0(&plStack_88,param_1,uVar8);
  plVar21 = plStack_88;
  if (plStack_88[0x39] != 0) {
    unaff_XMM6_Da = param_5 * _DAT_142e382c0;
    uVar9 = pdb_1400af0a0(plStack_88 + 0x3a,&uStack_80);
    param_1 = plVar21[0x36];
    bVar23 = (byte)(uVar9 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar14 = 0;
    while( true ) {
      uVar9 = uVar9 & plVar21[0x37];
      pcVar1 = (char *)(param_1 + uVar9);
      auVar35[0] = -(*pcVar1 == auVar24[0]);
      auVar35[1] = -(pcVar1[1] == auVar24[1]);
      auVar35[2] = -(pcVar1[2] == auVar24[2]);
      auVar35[3] = -(pcVar1[3] == auVar24[3]);
      auVar35[4] = -(pcVar1[4] == auVar24[4]);
      auVar35[5] = -(pcVar1[5] == auVar24[5]);
      auVar35[6] = -(pcVar1[6] == auVar24[6]);
      auVar35[7] = -(pcVar1[7] == auVar24[7]);
      auVar35[8] = -(pcVar1[8] == auVar24[0]);
      auVar35[9] = -(pcVar1[9] == auVar24[1]);
      auVar35[10] = -(pcVar1[10] == auVar24[2]);
      auVar35[0xb] = -(pcVar1[0xb] == auVar24[3]);
      auVar35[0xc] = -(pcVar1[0xc] == auVar24[4]);
      auVar35[0xd] = -(pcVar1[0xd] == auVar24[5]);
      auVar35[0xe] = -(pcVar1[0xe] == auVar24[6]);
      auVar35[0xf] = -(pcVar1[0xf] == auVar24[7]);
      uVar17 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar18 = (uVar5 + uVar9 & plVar21[0x37]) * -0xd8;
        if (uStack_80 == *(longlong **)(param_1 + -0xd8 + lVar18)) {
          param_1 = param_1 + lVar18;
          pbVar10 = *(byte **)(param_1 + -0x38);
          if (pbVar10 == (byte *)0x0) goto LAB_141175d35;
          puVar11 = *(undefined **)(param_1 + -0x30);
          goto LAB_141175d8e;
        }
        uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
      }
      auVar25[0] = -(*pcVar1 == -1);
      auVar25[1] = -(pcVar1[1] == -1);
      auVar25[2] = -(pcVar1[2] == -1);
      auVar25[3] = -(pcVar1[3] == -1);
      auVar25[4] = -(pcVar1[4] == -1);
      auVar25[5] = -(pcVar1[5] == -1);
      auVar25[6] = -(pcVar1[6] == -1);
      auVar25[7] = -(pcVar1[7] == -1);
      auVar25[8] = -(pcVar1[8] == -1);
      auVar25[9] = -(pcVar1[9] == -1);
      auVar25[10] = -(pcVar1[10] == -1);
      auVar25[0xb] = -(pcVar1[0xb] == -1);
      auVar25[0xc] = -(pcVar1[0xc] == -1);
      auVar25[0xd] = -(pcVar1[0xd] == -1);
      auVar25[0xe] = -(pcVar1[0xe] == -1);
      auVar25[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar9 = uVar9 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_141175d35:
  plVar21 = (longlong *)plVar21[0x4e];
  LOCK();
  lVar14 = *plVar21;
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  if (*plVar21 != 0 && SCARRY8(lVar14,1) == *plVar21 < 0) {
    LOCK();
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    uStack_a8 = plVar21;
    if (*plVar21 == 0) {
      pdb_140cb5640(&uStack_a8);
    }
    pdb_14007ee60();
    lVar14 = 4;
    pbVar10 = pub_1406abab0(4,4);
    if (pbVar10 != (byte *)0x0) {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      *(byte **)(param_1 + -0x38) = pbVar10;
      puVar11 = &UNK_14329c8a8;
      *(undefined **)(param_1 + -0x30) = &UNK_14329c8a8;
LAB_141175d8e:
      uVar8 = (**(code **)(puVar11 + 0x28))(pbVar10);
      (**(code **)(lVar14 + 0x18))(&uStack_a8,uVar8);
      plVar21 = plStack_88;
      auVar24[0] = -((char)uStack_a8 == DAT_142f3b320);
      auVar24[1] = -(uStack_a8._1_1_ == UNK_142f3b321);
      auVar24[2] = -(uStack_a8._2_1_ == UNK_142f3b322);
      auVar24[3] = -(uStack_a8._3_1_ == UNK_142f3b323);
      auVar24[4] = -(uStack_a8._4_1_ == UNK_142f3b324);
      auVar24[5] = -(uStack_a8._5_1_ == UNK_142f3b325);
      auVar24[6] = -(uStack_a8._6_1_ == UNK_142f3b326);
      auVar24[7] = -(uStack_a8._7_1_ == UNK_142f3b327);
      auVar24[8] = -((char)uStack_a0 == UNK_142f3b328);
      auVar24[9] = -(uStack_a0._1_1_ == UNK_142f3b329);
      auVar24[10] = -(uStack_a0._2_1_ == UNK_142f3b32a);
      auVar24[0xb] = -(uStack_a0._3_1_ == UNK_142f3b32b);
      auVar24[0xc] = -(uStack_a0._4_1_ == UNK_142f3b32c);
      auVar24[0xd] = -(uStack_a0._5_1_ == UNK_142f3b32d);
      auVar24[0xe] = -(uStack_a0._6_1_ == UNK_142f3b32e);
      auVar24[0xf] = -(uStack_a0._7_1_ == UNK_142f3b32f);
      if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                  (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
        uStack_98 = uStack_78;
        uStack_a8 = plStack_88;
        uStack_a0 = uStack_80;
        if (plStack_88[0x39] != 0) {
          uVar12 = pdb_1400af0a0(plStack_88 + 0x3a,&uStack_a0);
          plVar7 = uStack_a8;
          lVar14 = plVar21[0x36];
          uVar9 = plVar21[0x37];
          bVar23 = (byte)(uVar12 >> 0x39);
          auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
          auVar24 = pshuflw(auVar24,auVar24,0);
          lVar18 = 0;
          while( true ) {
            uVar12 = uVar12 & uVar9;
            auVar35 = *(undefined1 (*) [16])(lVar14 + uVar12);
            auVar36[0] = -(auVar35[0] == auVar24[0]);
            auVar36[1] = -(auVar35[1] == auVar24[1]);
            auVar36[2] = -(auVar35[2] == auVar24[2]);
            auVar36[3] = -(auVar35[3] == auVar24[3]);
            auVar36[4] = -(auVar35[4] == auVar24[4]);
            auVar36[5] = -(auVar35[5] == auVar24[5]);
            auVar36[6] = -(auVar35[6] == auVar24[6]);
            auVar36[7] = -(auVar35[7] == auVar24[7]);
            auVar36[8] = -(auVar35[8] == auVar24[0]);
            auVar36[9] = -(auVar35[9] == auVar24[1]);
            auVar36[10] = -(auVar35[10] == auVar24[2]);
            auVar36[0xb] = -(auVar35[0xb] == auVar24[3]);
            auVar36[0xc] = -(auVar35[0xc] == auVar24[4]);
            auVar36[0xd] = -(auVar35[0xd] == auVar24[5]);
            auVar36[0xe] = -(auVar35[0xe] == auVar24[6]);
            auVar36[0xf] = -(auVar35[0xf] == auVar24[7]);
            uVar17 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar36[0xf] >> 7) << 0xf;
            uVar16 = (uint)uVar17;
            while (uVar17 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              lVar19 = (uVar5 + uVar12 & uVar9) * -0xd8;
              if (uStack_a0 == *(longlong **)(lVar14 + -0xd8 + lVar19)) {
                pbVar10 = (byte *)(lVar14 + lVar19 + -5);
                *pbVar10 = *pbVar10 | 0x20;
                uStack_78 = uStack_98;
                plStack_88 = uStack_a8;
                uStack_80 = uStack_a0;
                if (uStack_a8[0x39] == 0) goto LAB_1411762e6;
                uVar12 = pdb_1400af0a0(uStack_a8 + 0x3a,&uStack_80);
                lVar14 = plVar7[0x36];
                uVar9 = plVar7[0x37];
                bVar23 = (byte)(uVar12 >> 0x39);
                auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
                auVar24 = pshuflw(auVar24,auVar24,0);
                lVar18 = 0;
                goto LAB_141175efd;
              }
              uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
              uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
            }
            auVar26[0] = -(auVar35[0] == -1);
            auVar26[1] = -(auVar35[1] == -1);
            auVar26[2] = -(auVar35[2] == -1);
            auVar26[3] = -(auVar35[3] == -1);
            auVar26[4] = -(auVar35[4] == -1);
            auVar26[5] = -(auVar35[5] == -1);
            auVar26[6] = -(auVar35[6] == -1);
            auVar26[7] = -(auVar35[7] == -1);
            auVar26[8] = -(auVar35[8] == -1);
            auVar26[9] = -(auVar35[9] == -1);
            auVar26[10] = -(auVar35[10] == -1);
            auVar26[0xb] = -(auVar35[0xb] == -1);
            auVar26[0xc] = -(auVar35[0xc] == -1);
            auVar26[0xd] = -(auVar35[0xd] == -1);
            auVar26[0xe] = -(auVar35[0xe] == -1);
            auVar26[0xf] = -(auVar35[0xf] == -1);
            if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar26 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
            uVar12 = uVar12 + lVar18 + 0x10;
            lVar18 = lVar18 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142fa6b60);
      }
      pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,4);
  }
LAB_141176a14:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
LAB_141175efd:
  uVar12 = uVar12 & uVar9;
  auVar35 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar37[0] = -(auVar35[0] == auVar24[0]);
  auVar37[1] = -(auVar35[1] == auVar24[1]);
  auVar37[2] = -(auVar35[2] == auVar24[2]);
  auVar37[3] = -(auVar35[3] == auVar24[3]);
  auVar37[4] = -(auVar35[4] == auVar24[4]);
  auVar37[5] = -(auVar35[5] == auVar24[5]);
  auVar37[6] = -(auVar35[6] == auVar24[6]);
  auVar37[7] = -(auVar35[7] == auVar24[7]);
  auVar37[8] = -(auVar35[8] == auVar24[0]);
  auVar37[9] = -(auVar35[9] == auVar24[1]);
  auVar37[10] = -(auVar35[10] == auVar24[2]);
  auVar37[0xb] = -(auVar35[0xb] == auVar24[3]);
  auVar37[0xc] = -(auVar35[0xc] == auVar24[4]);
  auVar37[0xd] = -(auVar35[0xd] == auVar24[5]);
  auVar37[0xe] = -(auVar35[0xe] == auVar24[6]);
  auVar37[0xf] = -(auVar35[0xf] == auVar24[7]);
  uVar17 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar20 = (uVar5 + uVar12 & uVar9) * -0xd8;
    if (uStack_80 == *(longlong **)(lVar14 + -0xd8 + uVar20)) {
      lVar14 = lVar14 + uVar20;
      *(undefined1 (*) [16])(lVar14 + -0x88) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0x98) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xb8) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar14 + -0x79) = 0;
      *(undefined1 *)(lVar14 + -0x71) = 3;
      uStack_c8 = uStack_78;
      plStack_d8 = plStack_88;
      plStack_d0 = uStack_80;
      piVar13 = (int *)pdb_141172910(&plStack_d8);
      plVar21 = plStack_d8;
      if (plStack_d8[0x39] == 0) goto LAB_14117652c;
      iVar2 = *piVar13;
      uVar9 = pdb_1400af0a0(plStack_d8 + 0x3a,&plStack_d0);
      lVar14 = plVar21[0x36];
      bVar23 = (byte)(uVar9 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
      auVar24 = pshuflw(auVar24,auVar24,0);
      lVar18 = 0;
      goto LAB_141176008;
    }
    uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
  }
  auVar27[0] = -(auVar35[0] == -1);
  auVar27[1] = -(auVar35[1] == -1);
  auVar27[2] = -(auVar35[2] == -1);
  auVar27[3] = -(auVar35[3] == -1);
  auVar27[4] = -(auVar35[4] == -1);
  auVar27[5] = -(auVar35[5] == -1);
  auVar27[6] = -(auVar35[6] == -1);
  auVar27[7] = -(auVar35[7] == -1);
  auVar27[8] = -(auVar35[8] == -1);
  auVar27[9] = -(auVar35[9] == -1);
  auVar27[10] = -(auVar35[10] == -1);
  auVar27[0xb] = -(auVar35[0xb] == -1);
  auVar27[0xc] = -(auVar35[0xc] == -1);
  auVar27[0xd] = -(auVar35[0xd] == -1);
  auVar27[0xe] = -(auVar35[0xe] == -1);
  auVar27[0xf] = -(auVar35[0xf] == -1);
  if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') goto LAB_1411762e6;
  uVar12 = uVar12 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_141175efd;
LAB_141176008:
  uVar9 = uVar9 & plVar21[0x37];
  auVar35 = *(undefined1 (*) [16])(lVar14 + uVar9);
  auVar38[0] = -(auVar35[0] == auVar24[0]);
  auVar38[1] = -(auVar35[1] == auVar24[1]);
  auVar38[2] = -(auVar35[2] == auVar24[2]);
  auVar38[3] = -(auVar35[3] == auVar24[3]);
  auVar38[4] = -(auVar35[4] == auVar24[4]);
  auVar38[5] = -(auVar35[5] == auVar24[5]);
  auVar38[6] = -(auVar35[6] == auVar24[6]);
  auVar38[7] = -(auVar35[7] == auVar24[7]);
  auVar38[8] = -(auVar35[8] == auVar24[0]);
  auVar38[9] = -(auVar35[9] == auVar24[1]);
  auVar38[10] = -(auVar35[10] == auVar24[2]);
  auVar38[0xb] = -(auVar35[0xb] == auVar24[3]);
  auVar38[0xc] = -(auVar35[0xc] == auVar24[4]);
  auVar38[0xd] = -(auVar35[0xd] == auVar24[5]);
  auVar38[0xe] = -(auVar35[0xe] == auVar24[6]);
  auVar38[0xf] = -(auVar35[0xf] == auVar24[7]);
  uVar17 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar19 = (uVar5 + uVar9 & plVar21[0x37]) * -0xd8;
    if (plStack_d0 == *(longlong **)(lVar14 + -0xd8 + lVar19)) {
      unaff_R12D = 0xffffffb0;
      if ((*(byte *)(lVar14 + lVar19 + -6) & 1) != 0) {
        puVar3 = (ulonglong *)*param_4;
        lVar14 = param_4[1];
        uVar9 = param_4[2];
        puVar3[2] = 0;
        if (*puVar3 < uVar9) {
          pdb_142d7f1b0(puVar3,0,uVar9,1,1);
          uVar12 = puVar3[2];
LAB_1411760ab:
          pub_142e32760(uVar12 + puVar3[1],lVar14,uVar9);
          uVar12 = puVar3[2];
        }
        else {
          uVar12 = 0;
          if (uVar9 != 0) goto LAB_1411760ab;
        }
        puVar3[2] = uVar12 + uVar9;
        unaff_R12D = 0xffffffff;
      }
      plVar21 = plStack_d0;
      plStack_f8 = param_2;
      plStack_f0 = param_3;
      plStack_88 = (longlong *)pdb_140bbbcb0(&plStack_f8);
      unaff_XMM7_Dd = _UNK_14329c26c;
      unaff_XMM7_Dc = _UNK_14329c268;
      unaff_XMM7_Db = _UNK_14329c264;
      unaff_XMM7_Da = _DAT_14329c260;
      uStack_80 = (longlong *)CONCAT44(_UNK_14329c264,_DAT_14329c260);
      uStack_78 = CONCAT44(_UNK_14329c26c,_UNK_14329c268);
      uStack_80 = (longlong *)pdb_1400affa0(&plStack_88);
      plStack_88 = plVar21;
      uVar8 = pdb_1400b0130(&plStack_88);
      pdb_14072caa0(&plStack_88,&plStack_d8,uVar8);
      uVar8 = pdb_14116ee90(&plStack_88,0);
      pdb_14119b6b0(uVar8,param_2,param_3);
      uStack_98 = uStack_78;
      uStack_a8 = plStack_88;
      uStack_a0 = uStack_80;
      uVar8 = pdb_14116e180(&uStack_a8);
      pdb_14119b2b0(uVar8);
      uStack_78 = uStack_98;
      plStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      uVar8 = pdb_14116e180(&plStack_88);
      pdb_140cb5a70(uVar8,1);
      uStack_98 = uStack_78;
      uStack_a8 = plStack_88;
      uStack_a0 = uStack_80;
      uVar8 = pdb_14116e180(&uStack_a8);
      pdb_140cb5df0(uVar8);
      uStack_78 = uStack_98;
      plStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      uVar8 = pdb_14116e180(&plStack_88);
      pdb_140cb5c70(uVar8,700);
      uStack_98 = uStack_78;
      uStack_a8 = plStack_88;
      uStack_a0 = uStack_80;
      lVar14 = pdb_14116e180(&uStack_a8);
      plVar21 = plStack_d0;
      *(undefined4 *)(lVar14 + 600) = unaff_R12D;
      plStack_88 = (longlong *)0x0;
      uStack_80 = (longlong *)_DAT_14329c330;
      uStack_78 = _UNK_14329c338;
      uStack_80 = (longlong *)pdb_1400affa0(&plStack_88);
      plStack_88 = plVar21;
      uVar8 = pdb_1400b0130(&plStack_88);
      pdb_14072caa0(&plStack_88,&plStack_d8,uVar8);
      plVar21 = plStack_88;
      if (plStack_88[0x39] == 0) goto LAB_1411762e6;
      uVar9 = pdb_1400af0a0(plStack_88 + 0x3a,&uStack_80);
      lVar14 = plVar21[0x36];
      bVar23 = (byte)(uVar9 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
      auVar24 = pshuflw(auVar24,auVar24,0);
      lVar18 = 0;
      goto LAB_141176285;
    }
    uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
  }
  auVar28[0] = -(auVar35[0] == -1);
  auVar28[1] = -(auVar35[1] == -1);
  auVar28[2] = -(auVar35[2] == -1);
  auVar28[3] = -(auVar35[3] == -1);
  auVar28[4] = -(auVar35[4] == -1);
  auVar28[5] = -(auVar35[5] == -1);
  auVar28[6] = -(auVar35[6] == -1);
  auVar28[7] = -(auVar35[7] == -1);
  auVar28[8] = -(auVar35[8] == -1);
  auVar28[9] = -(auVar35[9] == -1);
  auVar28[10] = -(auVar35[10] == -1);
  auVar28[0xb] = -(auVar35[0xb] == -1);
  auVar28[0xc] = -(auVar35[0xc] == -1);
  auVar28[0xd] = -(auVar35[0xd] == -1);
  auVar28[0xe] = -(auVar35[0xe] == -1);
  auVar28[0xf] = -(auVar35[0xf] == -1);
  if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') goto LAB_14117652c;
  uVar9 = uVar9 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_141176008;
LAB_141176285:
  uVar9 = uVar9 & plVar21[0x37];
  auVar35 = *(undefined1 (*) [16])(lVar14 + uVar9);
  auVar39[0] = -(auVar35[0] == auVar24[0]);
  auVar39[1] = -(auVar35[1] == auVar24[1]);
  auVar39[2] = -(auVar35[2] == auVar24[2]);
  auVar39[3] = -(auVar35[3] == auVar24[3]);
  auVar39[4] = -(auVar35[4] == auVar24[4]);
  auVar39[5] = -(auVar35[5] == auVar24[5]);
  auVar39[6] = -(auVar35[6] == auVar24[6]);
  auVar39[7] = -(auVar35[7] == auVar24[7]);
  auVar39[8] = -(auVar35[8] == auVar24[0]);
  auVar39[9] = -(auVar35[9] == auVar24[1]);
  auVar39[10] = -(auVar35[10] == auVar24[2]);
  auVar39[0xb] = -(auVar35[0xb] == auVar24[3]);
  auVar39[0xc] = -(auVar35[0xc] == auVar24[4]);
  auVar39[0xd] = -(auVar35[0xd] == auVar24[5]);
  auVar39[0xe] = -(auVar35[0xe] == auVar24[6]);
  auVar39[0xf] = -(auVar35[0xf] == auVar24[7]);
  uVar17 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar19 = (uVar5 + uVar9 & plVar21[0x37]) * -0xd8;
    if (uStack_80 == *(longlong **)(lVar14 + -0xd8 + lVar19)) {
      lVar14 = lVar14 + lVar19;
      *(undefined1 (*) [16])(lVar14 + -0x88) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0x98) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar14 + -0xb8) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar14 + -0x79) = 0;
      *(undefined1 *)(lVar14 + -0x71) = 4;
      uStack_e8 = uStack_78;
      plStack_f8 = plStack_88;
      plStack_f0 = uStack_80;
      param_3 = (longlong *)CONCAT71((int7)((ulonglong)plVar21 >> 8),1);
      if ((0 < iVar2) || (param_3 = (longlong *)0x0, iVar2 < 0)) {
        *(char *)param_6 = (char)param_3;
        param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      }
      pdb_140733f40(&plStack_88,&plStack_f8,&UNK_14329ddd0,5);
      uVar8 = pdb_14116dd60(&plStack_88);
      pdb_14119b2b0(uVar8);
      plVar21 = plStack_88;
      uStack_98 = uStack_78;
      uStack_a8 = plStack_88;
      uStack_a0 = uStack_80;
      if (plStack_88[0x39] == 0) goto LAB_141176556;
      uVar12 = pdb_1400af0a0(plStack_88 + 0x3a,&uStack_a0);
      plVar7 = uStack_a8;
      lVar14 = plVar21[0x36];
      uVar9 = plVar21[0x37];
      bVar23 = (byte)(uVar12 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
      auVar24 = pshuflw(auVar24,auVar24,0);
      lVar18 = 0;
      goto LAB_1411763f6;
    }
    uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
  }
  auVar29[0] = -(auVar35[0] == -1);
  auVar29[1] = -(auVar35[1] == -1);
  auVar29[2] = -(auVar35[2] == -1);
  auVar29[3] = -(auVar35[3] == -1);
  auVar29[4] = -(auVar35[4] == -1);
  auVar29[5] = -(auVar35[5] == -1);
  auVar29[6] = -(auVar35[6] == -1);
  auVar29[7] = -(auVar35[7] == -1);
  auVar29[8] = -(auVar35[8] == -1);
  auVar29[9] = -(auVar35[9] == -1);
  auVar29[10] = -(auVar35[10] == -1);
  auVar29[0xb] = -(auVar35[0xb] == -1);
  auVar29[0xc] = -(auVar35[0xc] == -1);
  auVar29[0xd] = -(auVar35[0xd] == -1);
  auVar29[0xe] = -(auVar35[0xe] == -1);
  auVar29[0xf] = -(auVar35[0xf] == -1);
  if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
LAB_1411762e6:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar9 = uVar9 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_141176285;
LAB_1411763f6:
  uVar12 = uVar12 & uVar9;
  auVar35 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar40[0] = -(auVar35[0] == auVar24[0]);
  auVar40[1] = -(auVar35[1] == auVar24[1]);
  auVar40[2] = -(auVar35[2] == auVar24[2]);
  auVar40[3] = -(auVar35[3] == auVar24[3]);
  auVar40[4] = -(auVar35[4] == auVar24[4]);
  auVar40[5] = -(auVar35[5] == auVar24[5]);
  auVar40[6] = -(auVar35[6] == auVar24[6]);
  auVar40[7] = -(auVar35[7] == auVar24[7]);
  auVar40[8] = -(auVar35[8] == auVar24[0]);
  auVar40[9] = -(auVar35[9] == auVar24[1]);
  auVar40[10] = -(auVar35[10] == auVar24[2]);
  auVar40[0xb] = -(auVar35[0xb] == auVar24[3]);
  auVar40[0xc] = -(auVar35[0xc] == auVar24[4]);
  auVar40[0xd] = -(auVar35[0xd] == auVar24[5]);
  auVar40[0xe] = -(auVar35[0xe] == auVar24[6]);
  auVar40[0xf] = -(auVar35[0xf] == auVar24[7]);
  uVar17 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar20 = (uVar5 + uVar12 & uVar9) * -0xd8;
    if (uStack_a0 == *(longlong **)(lVar14 + -0xd8 + uVar20)) {
      *(undefined2 *)(lVar14 + uVar20 + -8) = 0x500;
      plStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      uStack_78 = uStack_98;
      plVar21 = param_6;
      if (uStack_a8[0x39] == 0) goto LAB_14117652c;
      uVar12 = pdb_1400af0a0(uStack_a8 + 0x3a,&uStack_80);
      puVar11 = (undefined *)plVar7[0x36];
      uVar9 = plVar7[0x37];
      bVar23 = (byte)(uVar12 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
      auVar24 = pshuflw(auVar24,auVar24,0);
      lVar14 = 0;
      goto LAB_1411764cb;
    }
    uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
  }
  auVar30[0] = -(auVar35[0] == -1);
  auVar30[1] = -(auVar35[1] == -1);
  auVar30[2] = -(auVar35[2] == -1);
  auVar30[3] = -(auVar35[3] == -1);
  auVar30[4] = -(auVar35[4] == -1);
  auVar30[5] = -(auVar35[5] == -1);
  auVar30[6] = -(auVar35[6] == -1);
  auVar30[7] = -(auVar35[7] == -1);
  auVar30[8] = -(auVar35[8] == -1);
  auVar30[9] = -(auVar35[9] == -1);
  auVar30[10] = -(auVar35[10] == -1);
  auVar30[0xb] = -(auVar35[0xb] == -1);
  auVar30[0xc] = -(auVar35[0xc] == -1);
  auVar30[0xd] = -(auVar35[0xd] == -1);
  auVar30[0xe] = -(auVar35[0xe] == -1);
  auVar30[0xf] = -(auVar35[0xf] == -1);
  if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') {
LAB_141176556:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar12 = uVar12 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_1411763f6;
LAB_1411764cb:
  uVar12 = uVar12 & uVar9;
  pcVar1 = puVar11 + uVar12;
  auVar41[0] = -(*pcVar1 == auVar24[0]);
  auVar41[1] = -(pcVar1[1] == auVar24[1]);
  auVar41[2] = -(pcVar1[2] == auVar24[2]);
  auVar41[3] = -(pcVar1[3] == auVar24[3]);
  auVar41[4] = -(pcVar1[4] == auVar24[4]);
  auVar41[5] = -(pcVar1[5] == auVar24[5]);
  auVar41[6] = -(pcVar1[6] == auVar24[6]);
  auVar41[7] = -(pcVar1[7] == auVar24[7]);
  auVar41[8] = -(pcVar1[8] == auVar24[0]);
  auVar41[9] = -(pcVar1[9] == auVar24[1]);
  auVar41[10] = -(pcVar1[10] == auVar24[2]);
  auVar41[0xb] = -(pcVar1[0xb] == auVar24[3]);
  auVar41[0xc] = -(pcVar1[0xc] == auVar24[4]);
  auVar41[0xd] = -(pcVar1[0xd] == auVar24[5]);
  auVar41[0xe] = -(pcVar1[0xe] == auVar24[6]);
  auVar41[0xf] = -(pcVar1[0xf] == auVar24[7]);
  uVar17 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar20 = (uVar5 + uVar12 & uVar9) * -0xd8;
    if (uStack_80 == *(longlong **)(puVar11 + (uVar20 - 0xd8))) goto LAB_141176544;
    uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
    uVar20 = (ulonglong)uVar16;
  }
  auVar31[0] = -(*pcVar1 == -1);
  auVar31[1] = -(pcVar1[1] == -1);
  auVar31[2] = -(pcVar1[2] == -1);
  auVar31[3] = -(pcVar1[3] == -1);
  auVar31[4] = -(pcVar1[4] == -1);
  auVar31[5] = -(pcVar1[5] == -1);
  auVar31[6] = -(pcVar1[6] == -1);
  auVar31[7] = -(pcVar1[7] == -1);
  auVar31[8] = -(pcVar1[8] == -1);
  auVar31[9] = -(pcVar1[9] == -1);
  auVar31[10] = -(pcVar1[10] == -1);
  auVar31[0xb] = -(pcVar1[0xb] == -1);
  auVar31[0xc] = -(pcVar1[0xc] == -1);
  auVar31[0xd] = -(pcVar1[0xd] == -1);
  auVar31[0xe] = -(pcVar1[0xe] == -1);
  auVar31[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') goto LAB_14117652c;
  uVar12 = uVar12 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_1411764cb;
LAB_14117652c:
  puVar11 = &UNK_142fa60f8;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  param_6 = plVar21;
LAB_141176544:
  if ((puVar11[uVar20 - 6] & 0x30) == 0) {
    if ((char)*param_6 != '\0') {
      puVar11 = &UNK_142fa5bea;
      uVar9 = 0xb;
      goto LAB_141176582;
    }
  }
  else {
    *(undefined1 *)param_6 = 0;
    param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  }
  puVar11 = &UNK_142fa5be0;
  uVar9 = 10;
LAB_141176582:
  uVar8 = pdb_140dc6290(puVar11);
  uVar22 = uVar9 == 0;
  if (-1 < (longlong)uVar9) goto LAB_14117659c;
  uVar15 = 0;
  uVar22 = true;
  while( true ) {
    uVar8 = pdb_142dc7e2a(uVar15,uVar9);
LAB_14117659c:
    if ((bool)uVar22) break;
    pdb_14007ee60();
    uVar15 = 1;
    pbStack_108 = pub_1406abab0(uVar9,1);
    uVar22 = pbStack_108 == (byte *)0x0;
    if (!(bool)uVar22) {
      pub_142e32760(pbStack_108,uVar8,uVar9);
LAB_1411765d6:
      uStack_100 = uVar9;
      pbStack_b8 = pbStack_108;
      uStack_b0 = uVar9;
      plStack_88 = (longlong *)pdb_140bbbcb0(&pbStack_108);
      uStack_80 = (longlong *)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
      uStack_78 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
      uStack_80 = (longlong *)pdb_1400affa0(&plStack_88);
      plStack_88 = plStack_f0;
      uVar8 = pdb_1400b0130(&plStack_88);
      pdb_14072caa0(&plStack_88,&plStack_f8,uVar8);
      uVar8 = pdb_14116ee90(&plStack_88,0);
      pdb_14119b6b0(uVar8,pbStack_b8,uStack_b0);
      uStack_98 = uStack_78;
      uStack_a8 = plStack_88;
      uStack_a0 = uStack_80;
      uVar8 = pdb_14116e180(&uStack_a8);
      pdb_14119b2b0(uVar8);
      uStack_78 = uStack_98;
      plStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      uVar8 = pdb_14116e180(&plStack_88);
      pdb_140cb5a70(uVar8,1);
      uStack_98 = uStack_78;
      uStack_a8 = plStack_88;
      uStack_a0 = uStack_80;
      lVar14 = pdb_14116e180(&uStack_a8);
      *(undefined4 *)(lVar14 + 600) = unaff_R12D;
      uStack_78 = uStack_98;
      plStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      uVar8 = pdb_14116e180(&plStack_88);
      pdb_140cb68f0(uVar8,2);
      plVar21 = plStack_88;
      uStack_98 = uStack_78;
      uStack_a8 = plStack_88;
      uStack_a0 = uStack_80;
      if (plStack_88[0x39] != 0) {
        uVar12 = pdb_1400af0a0(plStack_88 + 0x3a,&uStack_a0);
        lVar14 = plVar21[0x36];
        uVar9 = plVar21[0x37];
        bVar23 = (byte)(uVar12 >> 0x39);
        auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
        auVar24 = pshuflw(auVar24,auVar24,0);
        lVar18 = 0;
        while( true ) {
          uVar12 = uVar12 & uVar9;
          auVar35 = *(undefined1 (*) [16])(lVar14 + uVar12);
          auVar42[0] = -(auVar35[0] == auVar24[0]);
          auVar42[1] = -(auVar35[1] == auVar24[1]);
          auVar42[2] = -(auVar35[2] == auVar24[2]);
          auVar42[3] = -(auVar35[3] == auVar24[3]);
          auVar42[4] = -(auVar35[4] == auVar24[4]);
          auVar42[5] = -(auVar35[5] == auVar24[5]);
          auVar42[6] = -(auVar35[6] == auVar24[6]);
          auVar42[7] = -(auVar35[7] == auVar24[7]);
          auVar42[8] = -(auVar35[8] == auVar24[0]);
          auVar42[9] = -(auVar35[9] == auVar24[1]);
          auVar42[10] = -(auVar35[10] == auVar24[2]);
          auVar42[0xb] = -(auVar35[0xb] == auVar24[3]);
          auVar42[0xc] = -(auVar35[0xc] == auVar24[4]);
          auVar42[0xd] = -(auVar35[0xd] == auVar24[5]);
          auVar42[0xe] = -(auVar35[0xe] == auVar24[6]);
          auVar42[0xf] = -(auVar35[0xf] == auVar24[7]);
          uVar17 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
          uVar16 = (uint)uVar17;
          while (uVar17 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            lVar19 = (uVar5 + uVar12 & uVar9) * -0xd8;
            if (uStack_a0 == *(longlong **)(lVar14 + -0xd8 + lVar19)) {
              lVar14 = lVar14 + lVar19;
              *(undefined4 *)(lVar14 + -0x90) = 0;
              *(float *)(lVar14 + -0x8c) = unaff_XMM6_Da;
              pdb_140733f40(&plStack_88,&plStack_f8,&UNK_14329ddd5,5);
              plVar21 = plStack_88;
              if (plStack_88[0x39] == 0) goto LAB_1411769ec;
              uVar12 = pdb_1400af0a0(plStack_88 + 0x3a,&uStack_80);
              lVar14 = plVar21[0x36];
              uVar9 = plVar21[0x37];
              bVar23 = (byte)(uVar12 >> 0x39);
              auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
              auVar24 = pshuflw(auVar24,auVar24,0);
              lVar18 = 0;
              goto LAB_141176834;
            }
            uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
          }
          auVar32[0] = -(auVar35[0] == -1);
          auVar32[1] = -(auVar35[1] == -1);
          auVar32[2] = -(auVar35[2] == -1);
          auVar32[3] = -(auVar35[3] == -1);
          auVar32[4] = -(auVar35[4] == -1);
          auVar32[5] = -(auVar35[5] == -1);
          auVar32[6] = -(auVar35[6] == -1);
          auVar32[7] = -(auVar35[7] == -1);
          auVar32[8] = -(auVar35[8] == -1);
          auVar32[9] = -(auVar35[9] == -1);
          auVar32[10] = -(auVar35[10] == -1);
          auVar32[0xb] = -(auVar35[0xb] == -1);
          auVar32[0xc] = -(auVar35[0xc] == -1);
          auVar32[0xd] = -(auVar35[0xd] == -1);
          auVar32[0xe] = -(auVar35[0xe] == -1);
          auVar32[0xf] = -(auVar35[0xf] == -1);
          if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar32 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x2f,0) & 1) != 0) || (SUB161(auVar32 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') break;
          uVar12 = uVar12 + lVar18 + 0x10;
          lVar18 = lVar18 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14329c430);
    }
  }
  pbStack_108 = (byte *)0x1;
  goto LAB_1411765d6;
LAB_141176834:
  uVar12 = uVar12 & uVar9;
  auVar35 = *(undefined1 (*) [16])(lVar14 + uVar12);
  auVar43[0] = -(auVar35[0] == auVar24[0]);
  auVar43[1] = -(auVar35[1] == auVar24[1]);
  auVar43[2] = -(auVar35[2] == auVar24[2]);
  auVar43[3] = -(auVar35[3] == auVar24[3]);
  auVar43[4] = -(auVar35[4] == auVar24[4]);
  auVar43[5] = -(auVar35[5] == auVar24[5]);
  auVar43[6] = -(auVar35[6] == auVar24[6]);
  auVar43[7] = -(auVar35[7] == auVar24[7]);
  auVar43[8] = -(auVar35[8] == auVar24[0]);
  auVar43[9] = -(auVar35[9] == auVar24[1]);
  auVar43[10] = -(auVar35[10] == auVar24[2]);
  auVar43[0xb] = -(auVar35[0xb] == auVar24[3]);
  auVar43[0xc] = -(auVar35[0xc] == auVar24[4]);
  auVar43[0xd] = -(auVar35[0xd] == auVar24[5]);
  auVar43[0xe] = -(auVar35[0xe] == auVar24[6]);
  auVar43[0xf] = -(auVar35[0xf] == auVar24[7]);
  uVar17 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    lVar19 = (uVar5 + uVar12 & uVar9) * -0xd8;
    if (uStack_80 == *(longlong **)(lVar14 + -0xd8 + lVar19)) {
      *(undefined2 *)(lVar14 + lVar19 + -8) = 0x500;
      uStack_98 = uStack_78;
      uStack_a8 = plStack_88;
      uStack_a0 = uStack_80;
      uVar8 = pdb_14116dd60(&uStack_a8);
      pdb_14119b2b0(uVar8);
      plVar21 = uStack_a8;
      plStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      uStack_78 = uStack_98;
      if (uStack_a8[0x39] != 0) {
        uVar12 = pdb_1400af0a0(uStack_a8 + 0x3a,&uStack_80);
        lVar14 = plVar21[0x36];
        uVar9 = plVar21[0x37];
        bVar23 = (byte)(uVar12 >> 0x39);
        auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
        auVar24 = pshuflw(auVar24,auVar24,0);
        lVar18 = 0;
        while( true ) {
          uVar12 = uVar12 & uVar9;
          pcVar1 = (char *)(lVar14 + uVar12);
          auVar44[0] = -(*pcVar1 == auVar24[0]);
          auVar44[1] = -(pcVar1[1] == auVar24[1]);
          auVar44[2] = -(pcVar1[2] == auVar24[2]);
          auVar44[3] = -(pcVar1[3] == auVar24[3]);
          auVar44[4] = -(pcVar1[4] == auVar24[4]);
          auVar44[5] = -(pcVar1[5] == auVar24[5]);
          auVar44[6] = -(pcVar1[6] == auVar24[6]);
          auVar44[7] = -(pcVar1[7] == auVar24[7]);
          auVar44[8] = -(pcVar1[8] == auVar24[0]);
          auVar44[9] = -(pcVar1[9] == auVar24[1]);
          auVar44[10] = -(pcVar1[10] == auVar24[2]);
          auVar44[0xb] = -(pcVar1[0xb] == auVar24[3]);
          auVar44[0xc] = -(pcVar1[0xc] == auVar24[4]);
          auVar44[0xd] = -(pcVar1[0xd] == auVar24[5]);
          auVar44[0xe] = -(pcVar1[0xe] == auVar24[6]);
          auVar44[0xf] = -(pcVar1[0xf] == auVar24[7]);
          uVar17 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar44[0xf] >> 7) << 0xf;
          uVar16 = (uint)uVar17;
          while (uVar17 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            lVar19 = (uVar5 + uVar12 & uVar9) * -0xd8;
            if (uStack_80 == *(longlong **)(lVar14 + -0xd8 + lVar19)) {
              if ((*(byte *)(lVar14 + lVar19 + -6) & 0x30) != 0) {
                *(undefined1 *)param_6 = 1;
                param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
              }
              if (uStack_b0 != 0) {
                pub_1406abac0(pbStack_b8,uStack_b0,1);
              }
              return (ulonglong)param_3 & 0xffffffff;
            }
            uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
          }
          auVar34[0] = -(*pcVar1 == -1);
          auVar34[1] = -(pcVar1[1] == -1);
          auVar34[2] = -(pcVar1[2] == -1);
          auVar34[3] = -(pcVar1[3] == -1);
          auVar34[4] = -(pcVar1[4] == -1);
          auVar34[5] = -(pcVar1[5] == -1);
          auVar34[6] = -(pcVar1[6] == -1);
          auVar34[7] = -(pcVar1[7] == -1);
          auVar34[8] = -(pcVar1[8] == -1);
          auVar34[9] = -(pcVar1[9] == -1);
          auVar34[10] = -(pcVar1[10] == -1);
          auVar34[0xb] = -(pcVar1[0xb] == -1);
          auVar34[0xc] = -(pcVar1[0xc] == -1);
          auVar34[0xd] = -(pcVar1[0xd] == -1);
          auVar34[0xe] = -(pcVar1[0xe] == -1);
          auVar34[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x2f,0) & 1) != 0) || (SUB161(auVar34 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
          uVar12 = uVar12 + lVar18 + 0x10;
          lVar18 = lVar18 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
      goto LAB_141176a14;
    }
    uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
  }
  auVar33[0] = -(auVar35[0] == -1);
  auVar33[1] = -(auVar35[1] == -1);
  auVar33[2] = -(auVar35[2] == -1);
  auVar33[3] = -(auVar35[3] == -1);
  auVar33[4] = -(auVar35[4] == -1);
  auVar33[5] = -(auVar35[5] == -1);
  auVar33[6] = -(auVar35[6] == -1);
  auVar33[7] = -(auVar35[7] == -1);
  auVar33[8] = -(auVar35[8] == -1);
  auVar33[9] = -(auVar35[9] == -1);
  auVar33[10] = -(auVar35[10] == -1);
  auVar33[0xb] = -(auVar35[0xb] == -1);
  auVar33[0xc] = -(auVar35[0xc] == -1);
  auVar33[0xd] = -(auVar35[0xd] == -1);
  auVar33[0xe] = -(auVar35[0xe] == -1);
  auVar33[0xf] = -(auVar35[0xf] == -1);
  if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') {
LAB_1411769ec:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar12 = uVar12 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_141176834;
}

