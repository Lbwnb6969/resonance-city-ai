// VA 0x141174e40, PDB extent 832 bytes
// toolbar::menu::credits::impl$3::scroll<u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::credits::impl$3::scroll<u64>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
   Extent: 832 */

longlong * pdb_141174e40(longlong *param_1,longlong param_2,longlong param_3)

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
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  
  lStack_48 = _DAT_14329c320;
  lStack_40 = _UNK_14329c328;
  lStack_50 = param_3;
  lStack_48 = pdb_1400affa0(&lStack_50);
  lStack_50 = *(longlong *)(param_2 + 8);
  uVar5 = pdb_1400b0130(&lStack_50);
  pdb_14072caa0(&lStack_50,param_2,uVar5);
  lVar11 = lStack_50;
  if (*(longlong *)(lStack_50 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lStack_50 + 0x1d0,&lStack_48);
    param_2 = *(longlong *)(lVar11 + 0x1b0);
    bVar15 = (byte)(uVar6 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar10 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar11 + 0x1b8);
      pcVar1 = (char *)(param_2 + uVar6);
      auVar19[0] = -(*pcVar1 == auVar16[0]);
      auVar19[1] = -(pcVar1[1] == auVar16[1]);
      auVar19[2] = -(pcVar1[2] == auVar16[2]);
      auVar19[3] = -(pcVar1[3] == auVar16[3]);
      auVar19[4] = -(pcVar1[4] == auVar16[4]);
      auVar19[5] = -(pcVar1[5] == auVar16[5]);
      auVar19[6] = -(pcVar1[6] == auVar16[6]);
      auVar19[7] = -(pcVar1[7] == auVar16[7]);
      auVar19[8] = -(pcVar1[8] == auVar16[0]);
      auVar19[9] = -(pcVar1[9] == auVar16[1]);
      auVar19[10] = -(pcVar1[10] == auVar16[2]);
      auVar19[0xb] = -(pcVar1[0xb] == auVar16[3]);
      auVar19[0xc] = -(pcVar1[0xc] == auVar16[4]);
      auVar19[0xd] = -(pcVar1[0xd] == auVar16[5]);
      auVar19[0xe] = -(pcVar1[0xe] == auVar16[6]);
      auVar19[0xf] = -(pcVar1[0xf] == auVar16[7]);
      uVar13 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar14 = (uVar3 + uVar6 & *(ulonglong *)(lVar11 + 0x1b8)) * -0xd8;
        if (lStack_48 == *(longlong *)(param_2 + -0xd8 + lVar14)) {
          param_2 = param_2 + lVar14;
          pbVar7 = *(byte **)(param_2 + -0x38);
          if (pbVar7 == (byte *)0x0) goto LAB_141174f78;
          puVar8 = *(undefined **)(param_2 + -0x30);
          goto LAB_141174feb;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar17[0] = -(*pcVar1 == -1);
      auVar17[1] = -(pcVar1[1] == -1);
      auVar17[2] = -(pcVar1[2] == -1);
      auVar17[3] = -(pcVar1[3] == -1);
      auVar17[4] = -(pcVar1[4] == -1);
      auVar17[5] = -(pcVar1[5] == -1);
      auVar17[6] = -(pcVar1[6] == -1);
      auVar17[7] = -(pcVar1[7] == -1);
      auVar17[8] = -(pcVar1[8] == -1);
      auVar17[9] = -(pcVar1[9] == -1);
      auVar17[10] = -(pcVar1[10] == -1);
      auVar17[0xb] = -(pcVar1[0xb] == -1);
      auVar17[0xc] = -(pcVar1[0xc] == -1);
      auVar17[0xd] = -(pcVar1[0xd] == -1);
      auVar17[0xe] = -(pcVar1[0xe] == -1);
      auVar17[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar6 = uVar6 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_141174f78:
  uStack_38 = *(longlong **)(lVar11 + 0x270);
  LOCK();
  lVar11 = *uStack_38;
  *uStack_38 = *uStack_38 + 1;
  UNLOCK();
  if (*uStack_38 == 0 || SCARRY8(lVar11,1) != *uStack_38 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  LOCK();
  *uStack_38 = *uStack_38 + -1;
  UNLOCK();
  if (*uStack_38 == 0) {
    pdb_140cb5640(&uStack_38);
  }
  pdb_14007ee60();
  lVar10 = 4;
  pbVar7 = pub_1406abab0(0x20,4);
  if (pbVar7 != (byte *)0x0) {
    pbVar7[0] = 0;
    uVar5 = _UNK_14329bca8;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    *(undefined8 *)(pbVar7 + 8) = _DAT_14329bca0;
    *(undefined8 *)(pbVar7 + 0x10) = uVar5;
    *(undefined8 *)(pbVar7 + 0x18) = _DAT_14329bcb0;
    *(byte **)(param_2 + -0x38) = pbVar7;
    puVar8 = &UNK_14329c9e8;
    *(undefined **)(param_2 + -0x30) = &UNK_14329c9e8;
LAB_141174feb:
    uVar5 = (**(code **)(puVar8 + 0x28))(pbVar7);
    (**(code **)(lVar10 + 0x18))(&uStack_38,uVar5);
    lVar11 = lStack_50;
    auVar16[0] = -((char)uStack_38 == DAT_14329bc60);
    auVar16[1] = -(uStack_38._1_1_ == UNK_14329bc61);
    auVar16[2] = -(uStack_38._2_1_ == UNK_14329bc62);
    auVar16[3] = -(uStack_38._3_1_ == UNK_14329bc63);
    auVar16[4] = -(uStack_38._4_1_ == UNK_14329bc64);
    auVar16[5] = -(uStack_38._5_1_ == UNK_14329bc65);
    auVar16[6] = -(uStack_38._6_1_ == UNK_14329bc66);
    auVar16[7] = -(uStack_38._7_1_ == UNK_14329bc67);
    auVar16[8] = -((char)uStack_30 == UNK_14329bc68);
    auVar16[9] = -(uStack_30._1_1_ == UNK_14329bc69);
    auVar16[10] = -(uStack_30._2_1_ == UNK_14329bc6a);
    auVar16[0xb] = -(uStack_30._3_1_ == UNK_14329bc6b);
    auVar16[0xc] = -(uStack_30._4_1_ == UNK_14329bc6c);
    auVar16[0xd] = -(uStack_30._5_1_ == UNK_14329bc6d);
    auVar16[0xe] = -(uStack_30._6_1_ == UNK_14329bc6e);
    auVar16[0xf] = -(uStack_30._7_1_ == UNK_14329bc6f);
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf
                ) == 0xffff) {
      lStack_28 = lStack_40;
      uStack_38 = (longlong *)lStack_50;
      uStack_30 = lStack_48;
      if (*(longlong *)(lStack_50 + 0x1c8) != 0) {
        uVar9 = pdb_1400af0a0(lStack_50 + 0x1d0,&uStack_30);
        lVar10 = *(longlong *)(lVar11 + 0x1b0);
        uVar6 = *(ulonglong *)(lVar11 + 0x1b8);
        bVar15 = (byte)(uVar9 >> 0x39);
        auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
        auVar16 = pshuflw(auVar16,auVar16,0);
        lVar11 = 0;
        while( true ) {
          uVar9 = uVar9 & uVar6;
          pcVar1 = (char *)(lVar10 + uVar9);
          auVar20[0] = -(*pcVar1 == auVar16[0]);
          auVar20[1] = -(pcVar1[1] == auVar16[1]);
          auVar20[2] = -(pcVar1[2] == auVar16[2]);
          auVar20[3] = -(pcVar1[3] == auVar16[3]);
          auVar20[4] = -(pcVar1[4] == auVar16[4]);
          auVar20[5] = -(pcVar1[5] == auVar16[5]);
          auVar20[6] = -(pcVar1[6] == auVar16[6]);
          auVar20[7] = -(pcVar1[7] == auVar16[7]);
          auVar20[8] = -(pcVar1[8] == auVar16[0]);
          auVar20[9] = -(pcVar1[9] == auVar16[1]);
          auVar20[10] = -(pcVar1[10] == auVar16[2]);
          auVar20[0xb] = -(pcVar1[0xb] == auVar16[3]);
          auVar20[0xc] = -(pcVar1[0xc] == auVar16[4]);
          auVar20[0xd] = -(pcVar1[0xd] == auVar16[5]);
          auVar20[0xe] = -(pcVar1[0xe] == auVar16[6]);
          auVar20[0xf] = -(pcVar1[0xf] == auVar16[7]);
          uVar13 = (ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar20[0xf] >> 7) << 0xf;
          uVar12 = (uint)uVar13;
          while (uVar13 != 0) {
            uVar3 = 0;
            for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            lVar14 = (uVar3 + uVar9 & uVar6) * -0xd8;
            if (uStack_30 == *(longlong *)(lVar10 + -0xd8 + lVar14)) {
              lVar10 = lVar10 + lVar14;
              *(undefined1 (*) [16])(lVar10 + -0x98) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar10 + -0xa8) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar10 + -0xb8) = (undefined1  [16])0x0;
              *(undefined8 *)(lVar10 + -0x88) = 0;
              *(undefined4 *)(lVar10 + -0x80) = 0x3f800000;
              *(undefined8 *)(lVar10 + -0x7c) = 0;
              *(undefined4 *)(lVar10 + -0x75) = 0;
              *(undefined1 *)(lVar10 + -0x71) = 4;
              param_1[2] = lStack_28;
              *param_1 = (longlong)uStack_38;
              param_1[1] = uStack_30;
              return param_1;
            }
            uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
            uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
          if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar18 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x2f,0) & 1) != 0) || (SUB161(auVar18 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
          uVar9 = uVar9 + lVar11 + 0x10;
          lVar11 = lVar11 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa6b30);
    }
    pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x20);
}

