// VA 0x141192ed0, PDB extent 588 bytes
// toolbar::menu::report_bug::ui::closure$6
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::report_bug::ui::closure$6
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 588 */

void pdb_141192ed0(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong in_R11;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  uVar9 = 6;
  uVar4 = pdb_140dc6290(&UNK_14329f169,6);
  pdb_1407339e0(&lStack_50,param_2,uVar4,uVar9);
  lVar5 = pdb_14116dd60(&lStack_50);
  lVar10 = lStack_50;
  *(undefined1 *)(lVar5 + 0x25d) = 0x14;
  lStack_38 = lStack_50;
  lStack_30 = lStack_48;
  uStack_28 = uStack_40;
  if (*(longlong *)(lStack_50 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lStack_50 + 0x1d0,&lStack_30);
    lVar5 = *(longlong *)(lVar10 + 0x1b0);
    uVar7 = *(ulonglong *)(lVar10 + 0x1b8);
    bVar13 = (byte)(uVar6 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar10 = 0;
    while( true ) {
      uVar6 = uVar6 & uVar7;
      auVar18 = *(undefined1 (*) [16])(lVar5 + uVar6);
      auVar17[0] = -(auVar18[0] == auVar14[0]);
      auVar17[1] = -(auVar18[1] == auVar14[1]);
      auVar17[2] = -(auVar18[2] == auVar14[2]);
      auVar17[3] = -(auVar18[3] == auVar14[3]);
      auVar17[4] = -(auVar18[4] == auVar14[4]);
      auVar17[5] = -(auVar18[5] == auVar14[5]);
      auVar17[6] = -(auVar18[6] == auVar14[6]);
      auVar17[7] = -(auVar18[7] == auVar14[7]);
      auVar17[8] = -(auVar18[8] == auVar14[0]);
      auVar17[9] = -(auVar18[9] == auVar14[1]);
      auVar17[10] = -(auVar18[10] == auVar14[2]);
      auVar17[0xb] = -(auVar18[0xb] == auVar14[3]);
      auVar17[0xc] = -(auVar18[0xc] == auVar14[4]);
      auVar17[0xd] = -(auVar18[0xd] == auVar14[5]);
      auVar17[0xe] = -(auVar18[0xe] == auVar14[6]);
      auVar17[0xf] = -(auVar18[0xf] == auVar14[7]);
      uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        in_R11 = (uVar2 + uVar6 & uVar7) * -0xd8;
        if (lStack_30 == *(longlong *)(lVar5 + -0xd8 + in_R11)) {
          if ((*(byte *)(lVar5 + in_R11 + -6) & 0x30) != 0) {
            *(undefined1 *)*param_1 = 1;
          }
          if (1000 < *(ulonglong *)param_1[1]) {
            return;
          }
          uVar9 = 0xd;
          uVar4 = pdb_140dc6290(&UNK_14329f16f,0xd);
          pdb_1407339e0(&lStack_50,param_2,uVar4,uVar9);
          if (*(longlong *)(lStack_50 + 0x1c8) == 0) goto LAB_1411930ec;
          uVar7 = pdb_1400af0a0(lStack_50 + 0x1d0,&lStack_48);
          puVar8 = *(undefined **)(lStack_50 + 0x1b0);
          bVar13 = (byte)(uVar7 >> 0x39);
          auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
          auVar14 = pshuflw(auVar14,auVar14,0);
          lVar10 = 0;
          goto LAB_14119308b;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
        in_R11 = (ulonglong)uVar11;
      }
      auVar15[0] = -(auVar18[0] == -1);
      auVar15[1] = -(auVar18[1] == -1);
      auVar15[2] = -(auVar18[2] == -1);
      auVar15[3] = -(auVar18[3] == -1);
      auVar15[4] = -(auVar18[4] == -1);
      auVar15[5] = -(auVar18[5] == -1);
      auVar15[6] = -(auVar18[6] == -1);
      auVar15[7] = -(auVar18[7] == -1);
      auVar15[8] = -(auVar18[8] == -1);
      auVar15[9] = -(auVar18[9] == -1);
      auVar15[10] = -(auVar18[10] == -1);
      auVar15[0xb] = -(auVar18[0xb] == -1);
      auVar15[0xc] = -(auVar18[0xc] == -1);
      auVar15[0xd] = -(auVar18[0xd] == -1);
      auVar15[0xe] = -(auVar18[0xe] == -1);
      auVar15[0xf] = -(auVar18[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar6 = uVar6 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1411930ec:
  puVar8 = &UNK_142fa60f8;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_141193104:
  if ((puVar8[in_R11 - 6] & 0x30) != 0) {
    *(undefined1 *)param_1[2] = 1;
  }
  return;
LAB_14119308b:
  uVar7 = uVar7 & *(ulonglong *)(lStack_50 + 0x1b8);
  pcVar1 = puVar8 + uVar7;
  auVar18[0] = -(*pcVar1 == auVar14[0]);
  auVar18[1] = -(pcVar1[1] == auVar14[1]);
  auVar18[2] = -(pcVar1[2] == auVar14[2]);
  auVar18[3] = -(pcVar1[3] == auVar14[3]);
  auVar18[4] = -(pcVar1[4] == auVar14[4]);
  auVar18[5] = -(pcVar1[5] == auVar14[5]);
  auVar18[6] = -(pcVar1[6] == auVar14[6]);
  auVar18[7] = -(pcVar1[7] == auVar14[7]);
  auVar18[8] = -(pcVar1[8] == auVar14[0]);
  auVar18[9] = -(pcVar1[9] == auVar14[1]);
  auVar18[10] = -(pcVar1[10] == auVar14[2]);
  auVar18[0xb] = -(pcVar1[0xb] == auVar14[3]);
  auVar18[0xc] = -(pcVar1[0xc] == auVar14[4]);
  auVar18[0xd] = -(pcVar1[0xd] == auVar14[5]);
  auVar18[0xe] = -(pcVar1[0xe] == auVar14[6]);
  auVar18[0xf] = -(pcVar1[0xf] == auVar14[7]);
  uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar12;
  while (uVar12 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    in_R11 = (uVar2 + uVar7 & *(ulonglong *)(lStack_50 + 0x1b8)) * -0xd8;
    if (lStack_48 == *(longlong *)(puVar8 + (in_R11 - 0xd8))) goto LAB_141193104;
    uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
    in_R11 = (ulonglong)uVar11;
  }
  auVar16[0] = -(*pcVar1 == -1);
  auVar16[1] = -(pcVar1[1] == -1);
  auVar16[2] = -(pcVar1[2] == -1);
  auVar16[3] = -(pcVar1[3] == -1);
  auVar16[4] = -(pcVar1[4] == -1);
  auVar16[5] = -(pcVar1[5] == -1);
  auVar16[6] = -(pcVar1[6] == -1);
  auVar16[7] = -(pcVar1[7] == -1);
  auVar16[8] = -(pcVar1[8] == -1);
  auVar16[9] = -(pcVar1[9] == -1);
  auVar16[10] = -(pcVar1[10] == -1);
  auVar16[0xb] = -(pcVar1[0xb] == -1);
  auVar16[0xc] = -(pcVar1[0xc] == -1);
  auVar16[0xd] = -(pcVar1[0xd] == -1);
  auVar16[0xe] = -(pcVar1[0xe] == -1);
  auVar16[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') goto LAB_1411930ec;
  uVar7 = uVar7 + lVar10 + 0x10;
  lVar10 = lVar10 + 0x10;
  goto LAB_14119308b;
}

