// VA 0x1411720c0, PDB extent 604 bytes
// toolbar::mei::core::NodeContext::with<toolbar::menu::report_bug::ui::closure$14::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::with<toolbar::menu::report_bug::ui::closure$14::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 604 */

undefined8 *
pdb_1411720c0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong in_R11;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_40;
  longlong alStack_38 [2];
  
  puVar2 = (ulonglong *)*param_4;
  uVar10 = 6;
  uVar6 = pdb_140dc6290(&UNK_14329cd90,6);
  pdb_1407339e0(&lStack_40,param_2,uVar6,uVar10);
  lVar11 = lStack_40;
  if (*(longlong *)(lStack_40 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_40 + 0x1d0,alStack_38);
    lVar3 = *(longlong *)(lVar11 + 0x1b0);
    uVar8 = *(ulonglong *)(lVar11 + 0x1b8);
    bVar14 = (byte)(uVar7 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & uVar8;
      auVar19 = *(undefined1 (*) [16])(lVar3 + uVar7);
      auVar18[0] = -(auVar19[0] == auVar15[0]);
      auVar18[1] = -(auVar19[1] == auVar15[1]);
      auVar18[2] = -(auVar19[2] == auVar15[2]);
      auVar18[3] = -(auVar19[3] == auVar15[3]);
      auVar18[4] = -(auVar19[4] == auVar15[4]);
      auVar18[5] = -(auVar19[5] == auVar15[5]);
      auVar18[6] = -(auVar19[6] == auVar15[6]);
      auVar18[7] = -(auVar19[7] == auVar15[7]);
      auVar18[8] = -(auVar19[8] == auVar15[0]);
      auVar18[9] = -(auVar19[9] == auVar15[1]);
      auVar18[10] = -(auVar19[10] == auVar15[2]);
      auVar18[0xb] = -(auVar19[0xb] == auVar15[3]);
      auVar18[0xc] = -(auVar19[0xc] == auVar15[4]);
      auVar18[0xd] = -(auVar19[0xd] == auVar15[5]);
      auVar18[0xe] = -(auVar19[0xe] == auVar15[6]);
      auVar18[0xf] = -(auVar19[0xf] == auVar15[7]);
      uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        in_R11 = (uVar4 + uVar7 & uVar8) * -0xd8;
        if (alStack_38[0] == *(longlong *)(lVar3 + -0xd8 + in_R11)) {
          if ((*(byte *)(lVar3 + in_R11 + -6) & 0x30) != 0) {
            *param_3 = 1;
          }
          uVar10 = 9;
          uVar6 = pdb_140dc6290(&UNK_14329cd96,9);
          pdb_1407339e0(&lStack_40,param_2,uVar6,uVar10);
          if (*(longlong *)(lStack_40 + 0x1c8) == 0) goto LAB_1411722ab;
          uVar8 = pdb_1400af0a0(lStack_40 + 0x1d0,alStack_38);
          puVar9 = *(undefined **)(lStack_40 + 0x1b0);
          bVar14 = (byte)(uVar8 >> 0x39);
          auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
          auVar15 = pshuflw(auVar15,auVar15,0);
          lVar11 = 0;
          goto LAB_141172247;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
        in_R11 = (ulonglong)uVar12;
      }
      auVar16[0] = -(auVar19[0] == -1);
      auVar16[1] = -(auVar19[1] == -1);
      auVar16[2] = -(auVar19[2] == -1);
      auVar16[3] = -(auVar19[3] == -1);
      auVar16[4] = -(auVar19[4] == -1);
      auVar16[5] = -(auVar19[5] == -1);
      auVar16[6] = -(auVar19[6] == -1);
      auVar16[7] = -(auVar19[7] == -1);
      auVar16[8] = -(auVar19[8] == -1);
      auVar16[9] = -(auVar19[9] == -1);
      auVar16[10] = -(auVar19[10] == -1);
      auVar16[0xb] = -(auVar19[0xb] == -1);
      auVar16[0xc] = -(auVar19[0xc] == -1);
      auVar16[0xd] = -(auVar19[0xd] == -1);
      auVar16[0xe] = -(auVar19[0xe] == -1);
      auVar16[0xf] = -(auVar19[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar7 = uVar7 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_1411722ab:
  puVar9 = &UNK_142fa60f8;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1411722c3:
  if ((puVar9[in_R11 - 6] & 0x30) != 0) {
    uVar8 = *puVar2;
    if ((-0x7ffffffffffffffe < (longlong)uVar8) && (uVar8 != 0)) {
      pub_1406abac0((byte *)puVar2[1],uVar8,1);
    }
    *puVar2 = 0x8000000000000000;
  }
  param_1[2] = param_2[2];
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  return param_1;
LAB_141172247:
  uVar8 = uVar8 & *(ulonglong *)(lStack_40 + 0x1b8);
  pcVar1 = puVar9 + uVar8;
  auVar19[0] = -(*pcVar1 == auVar15[0]);
  auVar19[1] = -(pcVar1[1] == auVar15[1]);
  auVar19[2] = -(pcVar1[2] == auVar15[2]);
  auVar19[3] = -(pcVar1[3] == auVar15[3]);
  auVar19[4] = -(pcVar1[4] == auVar15[4]);
  auVar19[5] = -(pcVar1[5] == auVar15[5]);
  auVar19[6] = -(pcVar1[6] == auVar15[6]);
  auVar19[7] = -(pcVar1[7] == auVar15[7]);
  auVar19[8] = -(pcVar1[8] == auVar15[0]);
  auVar19[9] = -(pcVar1[9] == auVar15[1]);
  auVar19[10] = -(pcVar1[10] == auVar15[2]);
  auVar19[0xb] = -(pcVar1[0xb] == auVar15[3]);
  auVar19[0xc] = -(pcVar1[0xc] == auVar15[4]);
  auVar19[0xd] = -(pcVar1[0xd] == auVar15[5]);
  auVar19[0xe] = -(pcVar1[0xe] == auVar15[6]);
  auVar19[0xf] = -(pcVar1[0xf] == auVar15[7]);
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
    uVar4 = 0;
    for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    in_R11 = (uVar4 + uVar8 & *(ulonglong *)(lStack_40 + 0x1b8)) * -0xd8;
    if (alStack_38[0] == *(longlong *)(puVar9 + (in_R11 - 0xd8))) goto LAB_1411722c3;
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
    in_R11 = (ulonglong)uVar12;
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
                  (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') goto LAB_1411722ab;
  uVar8 = uVar8 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_141172247;
}

