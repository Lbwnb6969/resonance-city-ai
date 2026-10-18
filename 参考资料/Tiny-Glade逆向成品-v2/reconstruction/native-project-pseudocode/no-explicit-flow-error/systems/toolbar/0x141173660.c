// VA 0x141173660, PDB extent 848 bytes
// toolbar::mei::widgets::impl$27::tab_switcher<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::tab_switcher<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 848 */

longlong * pdb_141173660(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

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
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  uStack_48 = param_3;
  uStack_40 = param_4;
  lStack_30 = pdb_140bbbcb0(&uStack_48);
  lStack_28 = _DAT_14329c270;
  lStack_20 = _UNK_14329c278;
  lStack_28 = pdb_1400affa0(&lStack_30);
  lStack_30 = *(longlong *)(param_2 + 8);
  uVar6 = pdb_1400b0130(&lStack_30);
  pdb_14072caa0(&lStack_30,param_2,uVar6);
  lVar12 = lStack_30;
  if (*(longlong *)(lStack_30 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_30 + 0x1d0,&lStack_28);
    param_2 = *(longlong *)(lVar12 + 0x1b0);
    bVar16 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar12 + 0x1b8);
      pcVar1 = (char *)(param_2 + uVar7);
      auVar20[0] = -(*pcVar1 == auVar17[0]);
      auVar20[1] = -(pcVar1[1] == auVar17[1]);
      auVar20[2] = -(pcVar1[2] == auVar17[2]);
      auVar20[3] = -(pcVar1[3] == auVar17[3]);
      auVar20[4] = -(pcVar1[4] == auVar17[4]);
      auVar20[5] = -(pcVar1[5] == auVar17[5]);
      auVar20[6] = -(pcVar1[6] == auVar17[6]);
      auVar20[7] = -(pcVar1[7] == auVar17[7]);
      auVar20[8] = -(pcVar1[8] == auVar17[0]);
      auVar20[9] = -(pcVar1[9] == auVar17[1]);
      auVar20[10] = -(pcVar1[10] == auVar17[2]);
      auVar20[0xb] = -(pcVar1[0xb] == auVar17[3]);
      auVar20[0xc] = -(pcVar1[0xc] == auVar17[4]);
      auVar20[0xd] = -(pcVar1[0xd] == auVar17[5]);
      auVar20[0xe] = -(pcVar1[0xe] == auVar17[6]);
      auVar20[0xf] = -(pcVar1[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar15 = (uVar4 + uVar7 & *(ulonglong *)(lVar12 + 0x1b8)) * -0xd8;
        if (lStack_28 == *(longlong *)(param_2 + -0xd8 + lVar15)) {
          param_2 = param_2 + lVar15;
          pbVar8 = *(byte **)(param_2 + -0x38);
          if (pbVar8 == (byte *)0x0) goto LAB_1411737b5;
          puVar9 = *(undefined **)(param_2 + -0x30);
          goto LAB_141173810;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_1411737b5:
  plVar2 = *(longlong **)(lVar12 + 0x270);
  LOCK();
  lVar12 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar12,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  uStack_48 = plVar2;
  if (*plVar2 == 0) {
    pdb_140cb5640(&uStack_48);
  }
  pdb_14007ee60();
  lVar11 = 4;
  pbVar8 = pub_1406abab0(4,4);
  if (pbVar8 != (byte *)0x0) {
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    *(byte **)(param_2 + -0x38) = pbVar8;
    puVar9 = &UNK_14329cbc8;
    *(undefined **)(param_2 + -0x30) = &UNK_14329cbc8;
LAB_141173810:
    uVar6 = (**(code **)(puVar9 + 0x28))(pbVar8);
    (**(code **)(lVar11 + 0x18))(&uStack_48,uVar6);
    lVar12 = lStack_30;
    auVar17[0] = -((char)uStack_48 == DAT_142f3b2e0);
    auVar17[1] = -(uStack_48._1_1_ == UNK_142f3b2e1);
    auVar17[2] = -(uStack_48._2_1_ == UNK_142f3b2e2);
    auVar17[3] = -(uStack_48._3_1_ == UNK_142f3b2e3);
    auVar17[4] = -(uStack_48._4_1_ == UNK_142f3b2e4);
    auVar17[5] = -(uStack_48._5_1_ == UNK_142f3b2e5);
    auVar17[6] = -(uStack_48._6_1_ == UNK_142f3b2e6);
    auVar17[7] = -(uStack_48._7_1_ == UNK_142f3b2e7);
    auVar17[8] = -((char)uStack_40 == UNK_142f3b2e8);
    auVar17[9] = -(uStack_40._1_1_ == UNK_142f3b2e9);
    auVar17[10] = -(uStack_40._2_1_ == UNK_142f3b2ea);
    auVar17[0xb] = -(uStack_40._3_1_ == UNK_142f3b2eb);
    auVar17[0xc] = -(uStack_40._4_1_ == UNK_142f3b2ec);
    auVar17[0xd] = -(uStack_40._5_1_ == UNK_142f3b2ed);
    auVar17[0xe] = -(uStack_40._6_1_ == UNK_142f3b2ee);
    auVar17[0xf] = -(uStack_40._7_1_ == UNK_142f3b2ef);
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
      lStack_38 = lStack_20;
      uStack_48 = (longlong *)lStack_30;
      uStack_40 = lStack_28;
      if (*(longlong *)(lStack_30 + 0x1c8) != 0) {
        uVar10 = pdb_1400af0a0(lStack_30 + 0x1d0,&uStack_40);
        lVar11 = *(longlong *)(lVar12 + 0x1b0);
        uVar7 = *(ulonglong *)(lVar12 + 0x1b8);
        bVar16 = (byte)(uVar10 >> 0x39);
        auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
        auVar17 = pshuflw(auVar17,auVar17,0);
        lVar12 = 0;
        while( true ) {
          uVar10 = uVar10 & uVar7;
          pcVar1 = (char *)(lVar11 + uVar10);
          auVar21[0] = -(*pcVar1 == auVar17[0]);
          auVar21[1] = -(pcVar1[1] == auVar17[1]);
          auVar21[2] = -(pcVar1[2] == auVar17[2]);
          auVar21[3] = -(pcVar1[3] == auVar17[3]);
          auVar21[4] = -(pcVar1[4] == auVar17[4]);
          auVar21[5] = -(pcVar1[5] == auVar17[5]);
          auVar21[6] = -(pcVar1[6] == auVar17[6]);
          auVar21[7] = -(pcVar1[7] == auVar17[7]);
          auVar21[8] = -(pcVar1[8] == auVar17[0]);
          auVar21[9] = -(pcVar1[9] == auVar17[1]);
          auVar21[10] = -(pcVar1[10] == auVar17[2]);
          auVar21[0xb] = -(pcVar1[0xb] == auVar17[3]);
          auVar21[0xc] = -(pcVar1[0xc] == auVar17[4]);
          auVar21[0xd] = -(pcVar1[0xd] == auVar17[5]);
          auVar21[0xe] = -(pcVar1[0xe] == auVar17[6]);
          auVar21[0xf] = -(pcVar1[0xf] == auVar17[7]);
          uVar14 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar21[0xf] >> 7) << 0xf;
          uVar13 = (uint)uVar14;
          while (uVar14 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar15 = (uVar4 + uVar10 & uVar7) * -0xd8;
            if (uStack_40 == *(longlong *)(lVar11 + -0xd8 + lVar15)) {
              lVar11 = lVar11 + lVar15;
              *(undefined1 (*) [16])(lVar11 + -0x98) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar11 + -0xa8) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar11 + -0xb8) = (undefined1  [16])0x0;
              *(undefined8 *)(lVar11 + -0x88) = 0;
              *(undefined4 *)(lVar11 + -0x80) = 0x3f800000;
              *(undefined8 *)(lVar11 + -0x7c) = 0;
              *(undefined4 *)(lVar11 + -0x75) = 0;
              *(undefined1 *)(lVar11 + -0x71) = 4;
              param_1[2] = lStack_38;
              *param_1 = (longlong)uStack_48;
              param_1[1] = uStack_40;
              return param_1;
            }
            uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
          }
          auVar19[0] = -(*pcVar1 == -1);
          auVar19[1] = -(pcVar1[1] == -1);
          auVar19[2] = -(pcVar1[2] == -1);
          auVar19[3] = -(pcVar1[3] == -1);
          auVar19[4] = -(pcVar1[4] == -1);
          auVar19[5] = -(pcVar1[5] == -1);
          auVar19[6] = -(pcVar1[6] == -1);
          auVar19[7] = -(pcVar1[7] == -1);
          auVar19[8] = -(pcVar1[8] == -1);
          auVar19[9] = -(pcVar1[9] == -1);
          auVar19[10] = -(pcVar1[10] == -1);
          auVar19[0xb] = -(pcVar1[0xb] == -1);
          auVar19[0xc] = -(pcVar1[0xc] == -1);
          auVar19[0xd] = -(pcVar1[0xd] == -1);
          auVar19[0xe] = -(pcVar1[0xe] == -1);
          auVar19[0xf] = -(pcVar1[0xf] == -1);
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
          uVar10 = uVar10 + lVar12 + 0x10;
          lVar12 = lVar12 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa6b30);
    }
    pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,4);
}

