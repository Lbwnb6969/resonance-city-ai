// VA 0x1411739b0, PDB extent 1046 bytes
// toolbar::mei::widgets::impl$27::scrolling_list<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::scrolling_list<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 1046 */

undefined8 *
pdb_1411739b0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,undefined8 param_6,float param_7)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong unaff_RBX;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  undefined8 unaff_R14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float unaff_XMM6_Da;
  float fVar21;
  char cStack_98;
  char cStack_97;
  char cStack_96;
  char cStack_95;
  char cStack_94;
  char cStack_93;
  char cStack_92;
  char cStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char cStack_8b;
  char cStack_8a;
  char cStack_89;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined4 uStack_75;
  longlong lStack_68;
  longlong alStack_60 [2];
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = param_3;
  uStack_40 = param_4;
  uVar5 = pdb_140bbbcb0(&uStack_48);
  cStack_98 = (char)uVar5;
  cStack_97 = (char)((ulonglong)uVar5 >> 8);
  cStack_96 = (char)((ulonglong)uVar5 >> 0x10);
  cStack_95 = (char)((ulonglong)uVar5 >> 0x18);
  cStack_94 = (char)((ulonglong)uVar5 >> 0x20);
  cStack_93 = (char)((ulonglong)uVar5 >> 0x28);
  cStack_92 = (char)((ulonglong)uVar5 >> 0x30);
  cStack_91 = (char)((ulonglong)uVar5 >> 0x38);
  cStack_90 = (char)_DAT_14329c280;
  cStack_8f = (char)((ulonglong)_DAT_14329c280 >> 8);
  cStack_8e = (char)((ulonglong)_DAT_14329c280 >> 0x10);
  cStack_8d = (char)((ulonglong)_DAT_14329c280 >> 0x18);
  cStack_8c = (char)((ulonglong)_DAT_14329c280 >> 0x20);
  cStack_8b = (char)((ulonglong)_DAT_14329c280 >> 0x28);
  cStack_8a = (char)((ulonglong)_DAT_14329c280 >> 0x30);
  cStack_89 = (char)((ulonglong)_DAT_14329c280 >> 0x38);
  uStack_88 = (undefined4)_UNK_14329c288;
  uStack_84 = (undefined4)((ulonglong)_UNK_14329c288 >> 0x20);
  uVar6 = pdb_1400affa0(&cStack_98);
  uVar5 = *(undefined8 *)(param_2 + 8);
  cStack_98 = (char)uVar5;
  cStack_97 = (char)((ulonglong)uVar5 >> 8);
  cStack_96 = (char)((ulonglong)uVar5 >> 0x10);
  cStack_95 = (char)((ulonglong)uVar5 >> 0x18);
  cStack_94 = (char)((ulonglong)uVar5 >> 0x20);
  cStack_93 = (char)((ulonglong)uVar5 >> 0x28);
  cStack_92 = (char)((ulonglong)uVar5 >> 0x30);
  cStack_91 = (char)((ulonglong)uVar5 >> 0x38);
  cStack_90 = (char)uVar6;
  cStack_8f = (char)((ulonglong)uVar6 >> 8);
  cStack_8e = (char)((ulonglong)uVar6 >> 0x10);
  cStack_8d = (char)((ulonglong)uVar6 >> 0x18);
  cStack_8c = (char)((ulonglong)uVar6 >> 0x20);
  cStack_8b = (char)((ulonglong)uVar6 >> 0x28);
  cStack_8a = (char)((ulonglong)uVar6 >> 0x30);
  cStack_89 = (char)((ulonglong)uVar6 >> 0x38);
  uVar5 = pdb_1400b0130(&cStack_98);
  pdb_14072caa0(&lStack_68,param_2,uVar5);
  lVar10 = lStack_68;
  if (*(longlong *)(lStack_68 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_68 + 0x1d0,alStack_60);
    param_2 = *(longlong *)(lVar10 + 0x1b0);
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar10 + 0x1b8);
      pcVar1 = (char *)(param_2 + uVar7);
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
      while (unaff_RBX = param_5, unaff_R14 = param_6, unaff_XMM6_Da = param_7, uVar13 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar14 = (uVar3 + uVar7 & *(ulonglong *)(lVar10 + 0x1b8)) * -0xd8;
        if (alStack_60[0] == *(longlong *)(param_2 + -0xd8 + lVar14)) {
          param_2 = param_2 + lVar14;
          if (*(longlong *)(param_2 + -0x38) == 0) goto LAB_141173b28;
          puVar9 = *(undefined **)(param_2 + -0x30);
          goto LAB_141173bc2;
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
      uVar7 = uVar7 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_141173b28:
  plStack_50 = *(longlong **)(lVar10 + 0x270);
  LOCK();
  lVar10 = *plStack_50;
  *plStack_50 = *plStack_50 + 1;
  UNLOCK();
  if (*plStack_50 == 0 || SCARRY8(lVar10,1) != *plStack_50 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cStack_94 = '\0';
  cStack_93 = '\0';
  cStack_92 = '\0';
  cStack_91 = '\0';
  cStack_90 = '\0';
  cStack_8f = '\0';
  cStack_8e = '\0';
  cStack_8d = '\0';
  cStack_8c = '\0';
  cStack_8b = '\0';
  cStack_8a = '\0';
  cStack_89 = '\0';
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_75 = 0;
  LOCK();
  *plStack_50 = *plStack_50 + -1;
  UNLOCK();
  if (*plStack_50 == 0) {
    pdb_140cb5640(&plStack_50);
  }
  pdb_14007ee60();
  lVar11 = 8;
  pbVar8 = pub_1406abab0(0x40,8);
  if (pbVar8 != (byte *)0x0) {
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    pbVar8[0x10] = 0;
    pbVar8[0x11] = 0;
    pbVar8[0x12] = 0;
    pbVar8[0x13] = 0;
    *(ulonglong *)(pbVar8 + 0x14) =
         CONCAT17(cStack_91,
                  CONCAT16(cStack_92,
                           CONCAT15(cStack_93,
                                    CONCAT14(cStack_94,
                                             CONCAT13(cStack_95,
                                                      CONCAT12(cStack_96,
                                                               CONCAT11(cStack_97,cStack_98)))))));
    *(ulonglong *)(pbVar8 + 0x1c) =
         CONCAT17(cStack_89,
                  CONCAT16(cStack_8a,
                           CONCAT15(cStack_8b,
                                    CONCAT14(cStack_8c,
                                             CONCAT13(cStack_8d,
                                                      CONCAT12(cStack_8e,
                                                               CONCAT11(cStack_8f,cStack_90)))))));
    *(ulonglong *)(pbVar8 + 0x24) = CONCAT44(uStack_84,uStack_88);
    *(ulonglong *)(pbVar8 + 0x2c) = CONCAT17((undefined1)uStack_79,uStack_80);
    *(ulonglong *)(pbVar8 + 0x33) = CONCAT44(uStack_75,uStack_79);
    *(byte **)(param_2 + -0x38) = pbVar8;
    puVar9 = &UNK_14329ca88;
    *(undefined **)(param_2 + -0x30) = &UNK_14329ca88;
LAB_141173bc2:
    lVar10 = (**(code **)(puVar9 + 0x28))();
    (**(code **)(lVar11 + 0x18))(&cStack_98,lVar10);
    auVar16[0] = -(cStack_98 == DAT_14329bc50);
    auVar16[1] = -(cStack_97 == UNK_14329bc51);
    auVar16[2] = -(cStack_96 == UNK_14329bc52);
    auVar16[3] = -(cStack_95 == UNK_14329bc53);
    auVar16[4] = -(cStack_94 == UNK_14329bc54);
    auVar16[5] = -(cStack_93 == UNK_14329bc55);
    auVar16[6] = -(cStack_92 == UNK_14329bc56);
    auVar16[7] = -(cStack_91 == UNK_14329bc57);
    auVar16[8] = -(cStack_90 == UNK_14329bc58);
    auVar16[9] = -(cStack_8f == UNK_14329bc59);
    auVar16[10] = -(cStack_8e == UNK_14329bc5a);
    auVar16[0xb] = -(cStack_8d == UNK_14329bc5b);
    auVar16[0xc] = -(cStack_8c == UNK_14329bc5c);
    auVar16[0xd] = -(cStack_8b == UNK_14329bc5d);
    auVar16[0xe] = -(cStack_8a == UNK_14329bc5e);
    auVar16[0xf] = -(cStack_89 == UNK_14329bc5f);
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
      *(ulonglong *)(lVar10 + 0x18) = unaff_RBX;
      *(undefined8 *)(lVar10 + 0x20) = unaff_R14;
      *(float *)(lVar10 + 0x28) = unaff_XMM6_Da;
      uStack_88 = (undefined4)alStack_60[1];
      uStack_84 = (undefined4)((ulonglong)alStack_60[1] >> 0x20);
      cStack_98 = (char)lStack_68;
      cStack_97 = (char)((ulonglong)lStack_68 >> 8);
      cStack_96 = (char)((ulonglong)lStack_68 >> 0x10);
      cStack_95 = (char)((ulonglong)lStack_68 >> 0x18);
      cStack_94 = (char)((ulonglong)lStack_68 >> 0x20);
      cStack_93 = (char)((ulonglong)lStack_68 >> 0x28);
      cStack_92 = (char)((ulonglong)lStack_68 >> 0x30);
      cStack_91 = (char)((ulonglong)lStack_68 >> 0x38);
      cStack_90 = (char)alStack_60[0];
      cStack_8f = (char)((ulonglong)alStack_60[0] >> 8);
      cStack_8e = (char)((ulonglong)alStack_60[0] >> 0x10);
      cStack_8d = (char)((ulonglong)alStack_60[0] >> 0x18);
      cStack_8c = (char)((ulonglong)alStack_60[0] >> 0x20);
      cStack_8b = (char)((ulonglong)alStack_60[0] >> 0x28);
      cStack_8a = (char)((ulonglong)alStack_60[0] >> 0x30);
      cStack_89 = (char)((ulonglong)alStack_60[0] >> 0x38);
      if (*(longlong *)(lStack_68 + 0x1c8) != 0) {
        uVar7 = pdb_1400af0a0(lStack_68 + 0x1d0,&cStack_90);
        uVar5 = _DAT_14329bc90;
        lVar10 = *(longlong *)(lStack_68 + 0x1b0);
        bVar15 = (byte)(uVar7 >> 0x39);
        auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
        auVar16 = pshuflw(auVar16,auVar16,0);
        lVar11 = 0;
        while( true ) {
          uVar7 = uVar7 & *(ulonglong *)(lStack_68 + 0x1b8);
          pcVar1 = (char *)(lVar10 + uVar7);
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
            lVar14 = (uVar3 + uVar7 & *(ulonglong *)(lStack_68 + 0x1b8)) * -0xd8;
            if (CONCAT17(cStack_89,
                         CONCAT16(cStack_8a,
                                  CONCAT15(cStack_8b,
                                           CONCAT14(cStack_8c,
                                                    CONCAT13(cStack_8d,
                                                             CONCAT12(cStack_8e,
                                                                      CONCAT11(cStack_8f,cStack_90))
                                                            ))))) ==
                *(longlong *)(lVar10 + -0xd8 + lVar14)) {
              lVar10 = lVar10 + lVar14;
              fVar21 = (unaff_XMM6_Da + _DAT_142e37878) * (float)unaff_RBX + _DAT_142fa5b20;
              *(undefined8 *)(lVar10 + -0xb8) = _DAT_14329bc90;
              *(undefined8 *)(lVar10 + -0xb0) = 0;
              *(undefined8 *)(lVar10 + -0xa8) = uVar5;
              *(undefined8 *)(lVar10 + -0xa0) = 0;
              *(undefined8 *)(lVar10 + -0x98) = _DAT_1430132e0;
              *(undefined8 *)(lVar10 + -0x90) = 0;
              *(undefined4 *)(lVar10 + -0x88) = 0;
              *(float *)(lVar10 + -0x84) = fVar21;
              *(undefined8 *)(lVar10 + -0x78) = 0x10100000000;
              *(undefined8 *)(lVar10 + -0x80) = 0;
              param_1[2] = CONCAT44(uStack_84,uStack_88);
              *param_1 = CONCAT17(cStack_91,
                                  CONCAT16(cStack_92,
                                           CONCAT15(cStack_93,
                                                    CONCAT14(cStack_94,
                                                             CONCAT13(cStack_95,
                                                                      CONCAT12(cStack_96,
                                                                               CONCAT11(cStack_97,
                                                                                        cStack_98)))
                                                            ))));
              param_1[1] = CONCAT17(cStack_89,
                                    CONCAT16(cStack_8a,
                                             CONCAT15(cStack_8b,
                                                      CONCAT14(cStack_8c,
                                                               CONCAT13(cStack_8d,
                                                                        CONCAT12(cStack_8e,
                                                                                 CONCAT11(cStack_8f,
                                                                                          cStack_90)
                                                                                ))))));
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
          uVar7 = uVar7 + lVar11 + 0x10;
          lVar11 = lVar11 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa6b30);
    }
    pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x40);
}

