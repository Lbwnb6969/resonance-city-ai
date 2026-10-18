// VA 0x140733c60, PDB extent 729 bytes
// toolbar::mei::widgets::impl$27::settings_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::settings_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 729 */

longlong * pdb_140733c60(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3;
  uStack_30 = param_4;
  lStack_78 = pdb_140bbbcb0(&uStack_38);
  lStack_70 = _DAT_14329c2e0;
  lStack_68 = _UNK_14329c2e8;
  lStack_70 = pdb_1400affa0(&lStack_78);
  lStack_78 = *(longlong *)(param_2 + 8);
  uVar6 = pdb_1400b0130(&lStack_78);
  pdb_14072caa0(&lStack_78,param_2,uVar6);
  uVar6 = pdb_14116f320(&lStack_78,0);
  pdb_14119b6b0(uVar6,param_3,param_4);
  lVar8 = lStack_78;
  lStack_48 = lStack_68;
  lStack_58 = lStack_78;
  lStack_50 = lStack_70;
  if (*(longlong *)(lStack_78 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_78 + 0x1d0,&lStack_50);
    lVar13 = lStack_58;
    lVar9 = *(longlong *)(lVar8 + 0x1b0);
    uVar3 = *(ulonglong *)(lVar8 + 0x1b8);
    bVar14 = (byte)(uVar7 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & uVar3;
      auVar2 = *(undefined1 (*) [16])(lVar9 + uVar7);
      auVar18[0] = -(auVar2[0] == auVar15[0]);
      auVar18[1] = -(auVar2[1] == auVar15[1]);
      auVar18[2] = -(auVar2[2] == auVar15[2]);
      auVar18[3] = -(auVar2[3] == auVar15[3]);
      auVar18[4] = -(auVar2[4] == auVar15[4]);
      auVar18[5] = -(auVar2[5] == auVar15[5]);
      auVar18[6] = -(auVar2[6] == auVar15[6]);
      auVar18[7] = -(auVar2[7] == auVar15[7]);
      auVar18[8] = -(auVar2[8] == auVar15[0]);
      auVar18[9] = -(auVar2[9] == auVar15[1]);
      auVar18[10] = -(auVar2[10] == auVar15[2]);
      auVar18[0xb] = -(auVar2[0xb] == auVar15[3]);
      auVar18[0xc] = -(auVar2[0xc] == auVar15[4]);
      auVar18[0xd] = -(auVar2[0xd] == auVar15[5]);
      auVar18[0xe] = -(auVar2[0xe] == auVar15[6]);
      auVar18[0xf] = -(auVar2[0xf] == auVar15[7]);
      uVar11 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar12 = (uVar4 + uVar7 & uVar3) * -0xd8;
        if (lStack_50 == *(longlong *)(lVar9 + -0xd8 + lVar12)) {
          pbVar1 = (byte *)(lVar9 + lVar12 + -5);
          *pbVar1 = *pbVar1 | 0x20;
          lStack_68 = lStack_48;
          lStack_78 = lStack_58;
          lStack_70 = lStack_50;
          if (*(longlong *)(lStack_58 + 0x1c8) != 0) {
            uVar7 = pdb_1400af0a0(lStack_58 + 0x1d0,&lStack_70);
            lVar8 = *(longlong *)(lVar13 + 0x1b0);
            uVar3 = *(ulonglong *)(lVar13 + 0x1b8);
            bVar14 = (byte)(uVar7 >> 0x39);
            auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
            auVar15 = pshuflw(auVar15,auVar15,0);
            lVar9 = 0;
            while( true ) {
              uVar7 = uVar7 & uVar3;
              auVar2 = *(undefined1 (*) [16])(lVar8 + uVar7);
              auVar19[0] = -(auVar2[0] == auVar15[0]);
              auVar19[1] = -(auVar2[1] == auVar15[1]);
              auVar19[2] = -(auVar2[2] == auVar15[2]);
              auVar19[3] = -(auVar2[3] == auVar15[3]);
              auVar19[4] = -(auVar2[4] == auVar15[4]);
              auVar19[5] = -(auVar2[5] == auVar15[5]);
              auVar19[6] = -(auVar2[6] == auVar15[6]);
              auVar19[7] = -(auVar2[7] == auVar15[7]);
              auVar19[8] = -(auVar2[8] == auVar15[0]);
              auVar19[9] = -(auVar2[9] == auVar15[1]);
              auVar19[10] = -(auVar2[10] == auVar15[2]);
              auVar19[0xb] = -(auVar2[0xb] == auVar15[3]);
              auVar19[0xc] = -(auVar2[0xc] == auVar15[4]);
              auVar19[0xd] = -(auVar2[0xd] == auVar15[5]);
              auVar19[0xe] = -(auVar2[0xe] == auVar15[6]);
              auVar19[0xf] = -(auVar2[0xf] == auVar15[7]);
              uVar11 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar19[0xf] >> 7) << 0xf;
              uVar10 = (uint)uVar11;
              while (uVar11 != 0) {
                uVar4 = 0;
                for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                lVar13 = (uVar4 + uVar7 & uVar3) * -0xd8;
                if (lStack_70 == *(longlong *)(lVar8 + -0xd8 + lVar13)) {
                  *(undefined2 *)(lVar8 + lVar13 + -8) = 0x200;
                  lStack_48 = lStack_68;
                  lStack_58 = lStack_78;
                  lStack_50 = lStack_70;
                  uVar6 = pdb_14116dd60(&lStack_58);
                  pdb_14119b2b0(uVar6,_DAT_142f3e558);
                  lStack_68 = lStack_48;
                  lStack_78 = lStack_58;
                  lStack_70 = lStack_50;
                  uVar6 = pdb_14116dd60(&lStack_78);
                  pdb_140cb5c70(uVar6,700);
                  param_1[2] = lStack_68;
                  *param_1 = lStack_78;
                  param_1[1] = lStack_70;
                  return param_1;
                }
                uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
                uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
              }
              auVar17[0] = -(auVar2[0] == -1);
              auVar17[1] = -(auVar2[1] == -1);
              auVar17[2] = -(auVar2[2] == -1);
              auVar17[3] = -(auVar2[3] == -1);
              auVar17[4] = -(auVar2[4] == -1);
              auVar17[5] = -(auVar2[5] == -1);
              auVar17[6] = -(auVar2[6] == -1);
              auVar17[7] = -(auVar2[7] == -1);
              auVar17[8] = -(auVar2[8] == -1);
              auVar17[9] = -(auVar2[9] == -1);
              auVar17[10] = -(auVar2[10] == -1);
              auVar17[0xb] = -(auVar2[0xb] == -1);
              auVar17[0xc] = -(auVar2[0xc] == -1);
              auVar17[0xd] = -(auVar2[0xd] == -1);
              auVar17[0xe] = -(auVar2[0xe] == -1);
              auVar17[0xf] = -(auVar2[0xf] == -1);
              if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
              uVar7 = uVar7 + lVar9 + 0x10;
              lVar9 = lVar9 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b48);
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar16[0] = -(auVar2[0] == -1);
      auVar16[1] = -(auVar2[1] == -1);
      auVar16[2] = -(auVar2[2] == -1);
      auVar16[3] = -(auVar2[3] == -1);
      auVar16[4] = -(auVar2[4] == -1);
      auVar16[5] = -(auVar2[5] == -1);
      auVar16[6] = -(auVar2[6] == -1);
      auVar16[7] = -(auVar2[7] == -1);
      auVar16[8] = -(auVar2[8] == -1);
      auVar16[9] = -(auVar2[9] == -1);
      auVar16[10] = -(auVar2[10] == -1);
      auVar16[0xb] = -(auVar2[0xb] == -1);
      auVar16[0xc] = -(auVar2[0xc] == -1);
      auVar16[0xd] = -(auVar2[0xd] == -1);
      auVar16[0xe] = -(auVar2[0xe] == -1);
      auVar16[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b60);
}

