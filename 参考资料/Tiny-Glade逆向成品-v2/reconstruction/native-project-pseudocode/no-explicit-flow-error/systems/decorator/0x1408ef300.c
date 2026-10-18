// VA 0x1408ef300, PDB extent 850 bytes
// system_decorator::audio::op_stairs_audio::op_stairs_audio::closure$9
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_stairs_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::audio::op_stairs_audio::op_stairs_audio::closure$9
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_stairs_audio.rs
   Extent: 850 */

undefined8 pdb_1408ef300(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  plVar6 = (longlong *)*param_1;
  lVar8 = param_1[1];
  iVar4 = pdb_1409016e0(lVar8);
  iStack_38 = iVar4;
  if (plVar6[3] == 0) {
    pcVar13 = (char *)0x0;
  }
  else {
    uVar5 = pdb_1400aede0(plVar6 + 4,&iStack_38);
    bVar14 = (byte)(uVar5 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar7 = 0;
    while( true ) {
      uVar5 = uVar5 & plVar6[1];
      pcVar13 = (char *)(*plVar6 + uVar5);
      auVar20[0] = -(*pcVar13 == auVar15[0]);
      auVar20[1] = -(pcVar13[1] == auVar15[1]);
      auVar20[2] = -(pcVar13[2] == auVar15[2]);
      auVar20[3] = -(pcVar13[3] == auVar15[3]);
      auVar20[4] = -(pcVar13[4] == auVar15[4]);
      auVar20[5] = -(pcVar13[5] == auVar15[5]);
      auVar20[6] = -(pcVar13[6] == auVar15[6]);
      auVar20[7] = -(pcVar13[7] == auVar15[7]);
      auVar20[8] = -(pcVar13[8] == auVar15[0]);
      auVar20[9] = -(pcVar13[9] == auVar15[1]);
      auVar20[10] = -(pcVar13[10] == auVar15[2]);
      auVar20[0xb] = -(pcVar13[0xb] == auVar15[3]);
      auVar20[0xc] = -(pcVar13[0xc] == auVar15[4]);
      auVar20[0xd] = -(pcVar13[0xd] == auVar15[5]);
      auVar20[0xe] = -(pcVar13[0xe] == auVar15[6]);
      auVar20[0xf] = -(pcVar13[0xf] == auVar15[7]);
      uVar10 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar11 = *plVar6 + (uVar2 + uVar5 & plVar6[1]) * -8;
        if (iVar4 == *(int *)(lVar11 + -8)) goto LAB_1408ef3d3;
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar16[0] = -(*pcVar13 == -1);
      auVar16[1] = -(pcVar13[1] == -1);
      auVar16[2] = -(pcVar13[2] == -1);
      auVar16[3] = -(pcVar13[3] == -1);
      auVar16[4] = -(pcVar13[4] == -1);
      auVar16[5] = -(pcVar13[5] == -1);
      auVar16[6] = -(pcVar13[6] == -1);
      auVar16[7] = -(pcVar13[7] == -1);
      auVar16[8] = -(pcVar13[8] == -1);
      auVar16[9] = -(pcVar13[9] == -1);
      auVar16[10] = -(pcVar13[10] == -1);
      auVar16[0xb] = -(pcVar13[0xb] == -1);
      auVar16[0xc] = -(pcVar13[0xc] == -1);
      auVar16[0xd] = -(pcVar13[0xd] == -1);
      auVar16[0xe] = -(pcVar13[0xe] == -1);
      auVar16[0xf] = -(pcVar13[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar5 = uVar5 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
    lVar11 = 0;
LAB_1408ef3d3:
    pcVar13 = (char *)(lVar11 + -4);
    if (lVar11 == 0) {
      pcVar13 = (char *)0x0;
    }
  }
  plVar6 = (longlong *)param_1[2];
  iVar4 = pdb_1409016e0(lVar8);
  if (plVar6[3] == 0) {
    return 0;
  }
  iStack_34 = iVar4;
  uVar5 = pdb_1400aede0(plVar6 + 4,&iStack_34);
  lVar7 = *plVar6;
  bVar14 = (byte)(uVar5 >> 0x39);
  auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar15 = pshuflw(auVar15,auVar15,0);
  lVar11 = 0;
  do {
    uVar5 = uVar5 & plVar6[1];
    auVar20 = *(undefined1 (*) [16])(lVar7 + uVar5);
    auVar21[0] = -(auVar20[0] == auVar15[0]);
    auVar21[1] = -(auVar20[1] == auVar15[1]);
    auVar21[2] = -(auVar20[2] == auVar15[2]);
    auVar21[3] = -(auVar20[3] == auVar15[3]);
    auVar21[4] = -(auVar20[4] == auVar15[4]);
    auVar21[5] = -(auVar20[5] == auVar15[5]);
    auVar21[6] = -(auVar20[6] == auVar15[6]);
    auVar21[7] = -(auVar20[7] == auVar15[7]);
    auVar21[8] = -(auVar20[8] == auVar15[0]);
    auVar21[9] = -(auVar20[9] == auVar15[1]);
    auVar21[10] = -(auVar20[10] == auVar15[2]);
    auVar21[0xb] = -(auVar20[0xb] == auVar15[3]);
    auVar21[0xc] = -(auVar20[0xc] == auVar15[4]);
    auVar21[0xd] = -(auVar20[0xd] == auVar15[5]);
    auVar21[0xe] = -(auVar20[0xe] == auVar15[6]);
    auVar21[0xf] = -(auVar20[0xf] == auVar15[7]);
    uVar10 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
    uVar9 = (uint)uVar10;
    while (uVar10 != 0) {
      uVar2 = 0;
      for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      uVar12 = uVar2 + uVar5 & plVar6[1];
      if (iVar4 == *(int *)(lVar7 + uVar12 * -8 + -8)) {
        if (pcVar13 == (char *)0x0) {
          return 0;
        }
        if (*pcVar13 != '\x01') {
          return 0;
        }
        if (*(char *)(lVar7 + -4 + uVar12 * -8) != '\x01') {
          return 0;
        }
        plVar6 = (longlong *)param_1[3];
        iVar4 = pdb_1409016e0(lVar8);
        iStack_30 = iVar4;
        if (plVar6[3] == 0) {
          plVar6 = (longlong *)0x0;
          goto LAB_1408ef583;
        }
        uVar5 = pdb_1400aede0(plVar6 + 4,&iStack_30);
        bVar14 = (byte)(uVar5 >> 0x39);
        auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
        auVar15 = pshuflw(auVar15,auVar15,0);
        lVar7 = 0;
        goto LAB_1408ef514;
      }
      uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
      uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
    }
    auVar17[0] = -(auVar20[0] == -1);
    auVar17[1] = -(auVar20[1] == -1);
    auVar17[2] = -(auVar20[2] == -1);
    auVar17[3] = -(auVar20[3] == -1);
    auVar17[4] = -(auVar20[4] == -1);
    auVar17[5] = -(auVar20[5] == -1);
    auVar17[6] = -(auVar20[6] == -1);
    auVar17[7] = -(auVar20[7] == -1);
    auVar17[8] = -(auVar20[8] == -1);
    auVar17[9] = -(auVar20[9] == -1);
    auVar17[10] = -(auVar20[10] == -1);
    auVar17[0xb] = -(auVar20[0xb] == -1);
    auVar17[0xc] = -(auVar20[0xc] == -1);
    auVar17[0xd] = -(auVar20[0xd] == -1);
    auVar17[0xe] = -(auVar20[0xe] == -1);
    auVar17[0xf] = -(auVar20[0xf] == -1);
    if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') {
      return 0;
    }
    uVar5 = uVar5 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  } while( true );
LAB_1408ef514:
  uVar5 = uVar5 & plVar6[1];
  pcVar13 = (char *)(*plVar6 + uVar5);
  auVar22[0] = -(*pcVar13 == auVar15[0]);
  auVar22[1] = -(pcVar13[1] == auVar15[1]);
  auVar22[2] = -(pcVar13[2] == auVar15[2]);
  auVar22[3] = -(pcVar13[3] == auVar15[3]);
  auVar22[4] = -(pcVar13[4] == auVar15[4]);
  auVar22[5] = -(pcVar13[5] == auVar15[5]);
  auVar22[6] = -(pcVar13[6] == auVar15[6]);
  auVar22[7] = -(pcVar13[7] == auVar15[7]);
  auVar22[8] = -(pcVar13[8] == auVar15[0]);
  auVar22[9] = -(pcVar13[9] == auVar15[1]);
  auVar22[10] = -(pcVar13[10] == auVar15[2]);
  auVar22[0xb] = -(pcVar13[0xb] == auVar15[3]);
  auVar22[0xc] = -(pcVar13[0xc] == auVar15[4]);
  auVar22[0xd] = -(pcVar13[0xd] == auVar15[5]);
  auVar22[0xe] = -(pcVar13[0xe] == auVar15[6]);
  auVar22[0xf] = -(pcVar13[0xf] == auVar15[7]);
  uVar10 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
  uVar9 = (uint)uVar10;
  while (uVar10 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar11 = *plVar6 + (uVar2 + uVar5 & plVar6[1]) * -0x10;
    if (iVar4 == *(int *)(lVar11 + -0x10)) goto LAB_1408ef578;
    uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
    uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
  }
  auVar18[0] = -(*pcVar13 == -1);
  auVar18[1] = -(pcVar13[1] == -1);
  auVar18[2] = -(pcVar13[2] == -1);
  auVar18[3] = -(pcVar13[3] == -1);
  auVar18[4] = -(pcVar13[4] == -1);
  auVar18[5] = -(pcVar13[5] == -1);
  auVar18[6] = -(pcVar13[6] == -1);
  auVar18[7] = -(pcVar13[7] == -1);
  auVar18[8] = -(pcVar13[8] == -1);
  auVar18[9] = -(pcVar13[9] == -1);
  auVar18[10] = -(pcVar13[10] == -1);
  auVar18[0xb] = -(pcVar13[0xb] == -1);
  auVar18[0xc] = -(pcVar13[0xc] == -1);
  auVar18[0xd] = -(pcVar13[0xd] == -1);
  auVar18[0xe] = -(pcVar13[0xe] == -1);
  auVar18[0xf] = -(pcVar13[0xf] == -1);
  if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') {
    lVar11 = 0;
LAB_1408ef578:
    plVar6 = (longlong *)(lVar11 + -8);
    if (lVar11 == 0) {
      plVar6 = (longlong *)0x0;
    }
LAB_1408ef583:
    plVar1 = (longlong *)param_1[4];
    iVar4 = pdb_1409016e0(lVar8);
    if (plVar1[3] != 0) {
      iStack_2c = iVar4;
      uVar5 = pdb_1400aede0(plVar1 + 4,&iStack_2c);
      bVar14 = (byte)(uVar5 >> 0x39);
      auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
      auVar15 = pshuflw(auVar15,auVar15,0);
      lVar8 = 0;
      while( true ) {
        uVar5 = uVar5 & plVar1[1];
        pcVar13 = (char *)(*plVar1 + uVar5);
        auVar23[0] = -(*pcVar13 == auVar15[0]);
        auVar23[1] = -(pcVar13[1] == auVar15[1]);
        auVar23[2] = -(pcVar13[2] == auVar15[2]);
        auVar23[3] = -(pcVar13[3] == auVar15[3]);
        auVar23[4] = -(pcVar13[4] == auVar15[4]);
        auVar23[5] = -(pcVar13[5] == auVar15[5]);
        auVar23[6] = -(pcVar13[6] == auVar15[6]);
        auVar23[7] = -(pcVar13[7] == auVar15[7]);
        auVar23[8] = -(pcVar13[8] == auVar15[0]);
        auVar23[9] = -(pcVar13[9] == auVar15[1]);
        auVar23[10] = -(pcVar13[10] == auVar15[2]);
        auVar23[0xb] = -(pcVar13[0xb] == auVar15[3]);
        auVar23[0xc] = -(pcVar13[0xc] == auVar15[4]);
        auVar23[0xd] = -(pcVar13[0xd] == auVar15[5]);
        auVar23[0xe] = -(pcVar13[0xe] == auVar15[6]);
        auVar23[0xf] = -(pcVar13[0xf] == auVar15[7]);
        uVar10 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf
        ;
        uVar9 = (uint)uVar10;
        while (uVar10 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar7 = *plVar1 + (uVar2 + uVar5 & plVar1[1]) * -0x10;
          if (iVar4 == *(int *)(lVar7 + -0x10)) {
            if (plVar6 == (longlong *)0x0) {
              return 0;
            }
            lVar8 = *(longlong *)(lVar7 + -8);
            return CONCAT71((int7)((ulonglong)lVar8 >> 8),lVar8 != *plVar6);
          }
          uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
        }
        auVar19[0] = -(*pcVar13 == -1);
        auVar19[1] = -(pcVar13[1] == -1);
        auVar19[2] = -(pcVar13[2] == -1);
        auVar19[3] = -(pcVar13[3] == -1);
        auVar19[4] = -(pcVar13[4] == -1);
        auVar19[5] = -(pcVar13[5] == -1);
        auVar19[6] = -(pcVar13[6] == -1);
        auVar19[7] = -(pcVar13[7] == -1);
        auVar19[8] = -(pcVar13[8] == -1);
        auVar19[9] = -(pcVar13[9] == -1);
        auVar19[10] = -(pcVar13[10] == -1);
        auVar19[0xb] = -(pcVar13[0xb] == -1);
        auVar19[0xc] = -(pcVar13[0xc] == -1);
        auVar19[0xd] = -(pcVar13[0xd] == -1);
        auVar19[0xe] = -(pcVar13[0xe] == -1);
        auVar19[0xf] = -(pcVar13[0xf] == -1);
        if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x1f,0) & 1) != 0) || (SUB161(auVar19 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
        uVar5 = uVar5 + lVar8 + 0x10;
        lVar8 = lVar8 + 0x10;
      }
    }
    return 0;
  }
  uVar5 = uVar5 + lVar7 + 0x10;
  lVar7 = lVar7 + 0x10;
  goto LAB_1408ef514;
}

