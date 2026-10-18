// VA 0x141193120, PDB extent 793 bytes
// toolbar::menu::report_bug::ui::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::ui::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 793 */

void pdb_141193120(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  longlong lVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  longlong alStack_48 [2];
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uVar14 = 0x10;
  uVar10 = pdb_140dc6290(&UNK_14329f199);
  plVar3 = (longlong *)**(undefined8 **)*param_1;
  LOCK();
  lVar13 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar13,1) != *plVar3 < 0) {
LAB_141193437:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  pdb_141175180(&uStack_68,param_2,&UNK_14329e808,4,uVar10,uVar14,plVar3);
  uVar12 = uStack_68;
  if (*(longlong *)(uStack_68 + 0x1c8) != 0) {
    uVar11 = pdb_1400af0a0(uStack_68 + 0x1d0,&uStack_60);
    lVar13 = *(longlong *)(uVar12 + 0x1b0);
    uVar12 = *(ulonglong *)(uVar12 + 0x1b8);
    bVar19 = (byte)(uVar11 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar15 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar12;
      pcVar2 = (char *)(lVar13 + uVar11);
      auVar23[0] = -(*pcVar2 == auVar20[0]);
      auVar23[1] = -(pcVar2[1] == auVar20[1]);
      auVar23[2] = -(pcVar2[2] == auVar20[2]);
      auVar23[3] = -(pcVar2[3] == auVar20[3]);
      auVar23[4] = -(pcVar2[4] == auVar20[4]);
      auVar23[5] = -(pcVar2[5] == auVar20[5]);
      auVar23[6] = -(pcVar2[6] == auVar20[6]);
      auVar23[7] = -(pcVar2[7] == auVar20[7]);
      auVar23[8] = -(pcVar2[8] == auVar20[0]);
      auVar23[9] = -(pcVar2[9] == auVar20[1]);
      auVar23[10] = -(pcVar2[10] == auVar20[2]);
      auVar23[0xb] = -(pcVar2[0xb] == auVar20[3]);
      auVar23[0xc] = -(pcVar2[0xc] == auVar20[4]);
      auVar23[0xd] = -(pcVar2[0xd] == auVar20[5]);
      auVar23[0xe] = -(pcVar2[0xe] == auVar20[6]);
      auVar23[0xf] = -(pcVar2[0xf] == auVar20[7]);
      uVar17 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar18 = (uVar7 + uVar11 & uVar12) * -0xd8;
        if (uStack_60 == *(ulonglong *)(lVar13 + -0xd8 + lVar18)) {
          pbVar1 = (byte *)(lVar13 + lVar18 + -5);
          *pbVar1 = *pbVar1 | 0x40;
          uStack_28 = uStack_58;
          uStack_38 = uStack_68;
          uStack_30 = uStack_60;
          pdb_1422fcea0(&lStack_50,&uStack_38,_DAT_142e65300,_DAT_1430348dc);
          if (*(longlong *)(lStack_50 + 0x1c8) != 0) {
            uVar12 = pdb_1400af0a0(lStack_50 + 0x1d0,alStack_48);
            lVar13 = *(longlong *)(lStack_50 + 0x1b0);
            bVar19 = (byte)(uVar12 >> 0x39);
            auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
            auVar20 = pshuflw(auVar20,auVar20,0);
            lVar15 = 0;
            while( true ) {
              uVar12 = uVar12 & *(ulonglong *)(lStack_50 + 0x1b8);
              auVar23 = *(undefined1 (*) [16])(lVar13 + uVar12);
              auVar24[0] = -(auVar23[0] == auVar20[0]);
              auVar24[1] = -(auVar23[1] == auVar20[1]);
              auVar24[2] = -(auVar23[2] == auVar20[2]);
              auVar24[3] = -(auVar23[3] == auVar20[3]);
              auVar24[4] = -(auVar23[4] == auVar20[4]);
              auVar24[5] = -(auVar23[5] == auVar20[5]);
              auVar24[6] = -(auVar23[6] == auVar20[6]);
              auVar24[7] = -(auVar23[7] == auVar20[7]);
              auVar24[8] = -(auVar23[8] == auVar20[0]);
              auVar24[9] = -(auVar23[9] == auVar20[1]);
              auVar24[10] = -(auVar23[10] == auVar20[2]);
              auVar24[0xb] = -(auVar23[0xb] == auVar20[3]);
              auVar24[0xc] = -(auVar23[0xc] == auVar20[4]);
              auVar24[0xd] = -(auVar23[0xd] == auVar20[5]);
              auVar24[0xe] = -(auVar23[0xe] == auVar20[6]);
              auVar24[0xf] = -(auVar23[0xf] == auVar20[7]);
              uVar17 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
              uVar16 = (uint)uVar17;
              while (uVar17 != 0) {
                uVar7 = 0;
                for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                lVar18 = (uVar7 + uVar12 & *(ulonglong *)(lStack_50 + 0x1b8)) * -0xd8;
                if (alStack_48[0] == *(longlong *)(lVar13 + -0xd8 + lVar18)) {
                  if ((*(byte *)(lVar13 + lVar18 + -6) & 0x40) != 0) {
                    *(undefined1 *)param_1[1] = 1;
                  }
                  if ((*(char *)param_1[2] != '\0') &&
                     (plVar3 = (longlong *)param_1[3], *plVar3 != 0)) {
                    lVar13 = pdb_141172650(&lStack_50);
                    if ((*(int *)(lVar13 + 0x268) != 0) &&
                       ((cVar9 = pdb_140a3dbb0(*plVar3), cVar9 == '\0' &&
                        (puVar4 = (undefined8 *)param_1[4], *(char *)*puVar4 == '\0')))) {
                      pdb_140a3dac0(*plVar3);
                      *(undefined1 *)*puVar4 = 1;
                    }
                    cVar9 = pdb_140a3dbb0(*plVar3);
                    if (cVar9 == '\0') {
                      lVar13 = pdb_14116dec0(&lStack_50);
                      *(undefined4 *)(lVar13 + 0x268) = 0;
                      **(undefined1 **)param_1[4] = 0;
                    }
                  }
                  uVar10 = pdb_141172650(&lStack_50);
                  pdb_140cb6310(&uStack_68,uVar10);
                  puVar5 = (ulonglong *)param_1[5];
                  if (*puVar5 != 0) {
                    pub_1406abac0((byte *)puVar5[1],*puVar5,1);
                  }
                  puVar5[2] = uStack_58;
                  *puVar5 = uStack_68;
                  puVar5[1] = uStack_60;
                  return;
                }
                uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
                uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
              }
              auVar22[0] = -(auVar23[0] == -1);
              auVar22[1] = -(auVar23[1] == -1);
              auVar22[2] = -(auVar23[2] == -1);
              auVar22[3] = -(auVar23[3] == -1);
              auVar22[4] = -(auVar23[4] == -1);
              auVar22[5] = -(auVar23[5] == -1);
              auVar22[6] = -(auVar23[6] == -1);
              auVar22[7] = -(auVar23[7] == -1);
              auVar22[8] = -(auVar23[8] == -1);
              auVar22[9] = -(auVar23[9] == -1);
              auVar22[10] = -(auVar23[10] == -1);
              auVar22[0xb] = -(auVar23[0xb] == -1);
              auVar22[0xc] = -(auVar23[0xc] == -1);
              auVar22[0xd] = -(auVar23[0xd] == -1);
              auVar22[0xe] = -(auVar23[0xe] == -1);
              auVar22[0xf] = -(auVar23[0xf] == -1);
              if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
              uVar12 = uVar12 + lVar15 + 0x10;
              lVar15 = lVar15 + 0x10;
            }
          }
          pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
          goto LAB_141193437;
        }
        uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
      }
      auVar21[0] = -(*pcVar2 == -1);
      auVar21[1] = -(pcVar2[1] == -1);
      auVar21[2] = -(pcVar2[2] == -1);
      auVar21[3] = -(pcVar2[3] == -1);
      auVar21[4] = -(pcVar2[4] == -1);
      auVar21[5] = -(pcVar2[5] == -1);
      auVar21[6] = -(pcVar2[6] == -1);
      auVar21[7] = -(pcVar2[7] == -1);
      auVar21[8] = -(pcVar2[8] == -1);
      auVar21[9] = -(pcVar2[9] == -1);
      auVar21[10] = -(pcVar2[10] == -1);
      auVar21[0xb] = -(pcVar2[0xb] == -1);
      auVar21[0xc] = -(pcVar2[0xc] == -1);
      auVar21[0xd] = -(pcVar2[0xd] == -1);
      auVar21[0xe] = -(pcVar2[0xe] == -1);
      auVar21[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar11 = uVar11 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

