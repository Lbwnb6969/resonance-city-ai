// VA 0x141199f10, PDB extent 873 bytes
// toolbar::menu::mods::ui::closure$5
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::mods::ui::closure$5
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods.rs
   Extent: 873 */

void pdb_141199f10(longlong *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulonglong uStack_108;
  byte *pbStack_100;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar13 = 9;
  uVar10 = pdb_140dc6290(&UNK_14329f3cc,9);
  pdb_140f5f4f0(&uStack_108,uVar10,uVar13);
  pbStack_50 = pbStack_100;
  pdb_1407339e0(&lStack_48,param_2);
  lVar14 = lStack_48;
  if (*(longlong *)(lStack_48 + 0x1c8) != 0) {
    uVar11 = pdb_1400af0a0(lStack_48 + 0x1d0,&lStack_40);
    lVar12 = *(longlong *)(lVar14 + 0x1b0);
    uVar3 = *(ulonglong *)(lVar14 + 0x1b8);
    bVar18 = (byte)(uVar11 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar14 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar3;
      auVar23 = *(undefined1 (*) [16])(lVar12 + uVar11);
      auVar22[0] = -(auVar23[0] == auVar19[0]);
      auVar22[1] = -(auVar23[1] == auVar19[1]);
      auVar22[2] = -(auVar23[2] == auVar19[2]);
      auVar22[3] = -(auVar23[3] == auVar19[3]);
      auVar22[4] = -(auVar23[4] == auVar19[4]);
      auVar22[5] = -(auVar23[5] == auVar19[5]);
      auVar22[6] = -(auVar23[6] == auVar19[6]);
      auVar22[7] = -(auVar23[7] == auVar19[7]);
      auVar22[8] = -(auVar23[8] == auVar19[0]);
      auVar22[9] = -(auVar23[9] == auVar19[1]);
      auVar22[10] = -(auVar23[10] == auVar19[2]);
      auVar22[0xb] = -(auVar23[0xb] == auVar19[3]);
      auVar22[0xc] = -(auVar23[0xc] == auVar19[4]);
      auVar22[0xd] = -(auVar23[0xd] == auVar19[5]);
      auVar22[0xe] = -(auVar23[0xe] == auVar19[6]);
      auVar22[0xf] = -(auVar23[0xf] == auVar19[7]);
      uVar16 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar15; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar17 = (uVar8 + uVar11 & uVar3) * -0xd8;
        if (lStack_40 == *(longlong *)(lVar12 + -0xd8 + lVar17)) {
          pbVar1 = (byte *)(lVar12 + lVar17 + -5);
          *pbVar1 = *pbVar1 | 4;
          uStack_58 = uStack_38;
          lStack_68 = lStack_48;
          lStack_60 = lStack_40;
          lVar12 = pdb_14116dd60(&lStack_68);
          lVar14 = lStack_68;
          *(undefined1 *)(lVar12 + 0x25d) = 0x14;
          lStack_48 = lStack_68;
          lStack_40 = lStack_60;
          uStack_38 = uStack_58;
          if (*(longlong *)(lStack_68 + 0x1c8) != 0) {
            uVar11 = pdb_1400af0a0(lStack_68 + 0x1d0,&lStack_40);
            lVar12 = *(longlong *)(lVar14 + 0x1b0);
            uVar3 = *(ulonglong *)(lVar14 + 0x1b8);
            bVar18 = (byte)(uVar11 >> 0x39);
            auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
            auVar19 = pshuflw(auVar19,auVar19,0);
            lVar14 = 0;
            while( true ) {
              uVar11 = uVar11 & uVar3;
              pcVar2 = (char *)(lVar12 + uVar11);
              auVar23[0] = -(*pcVar2 == auVar19[0]);
              auVar23[1] = -(pcVar2[1] == auVar19[1]);
              auVar23[2] = -(pcVar2[2] == auVar19[2]);
              auVar23[3] = -(pcVar2[3] == auVar19[3]);
              auVar23[4] = -(pcVar2[4] == auVar19[4]);
              auVar23[5] = -(pcVar2[5] == auVar19[5]);
              auVar23[6] = -(pcVar2[6] == auVar19[6]);
              auVar23[7] = -(pcVar2[7] == auVar19[7]);
              auVar23[8] = -(pcVar2[8] == auVar19[0]);
              auVar23[9] = -(pcVar2[9] == auVar19[1]);
              auVar23[10] = -(pcVar2[10] == auVar19[2]);
              auVar23[0xb] = -(pcVar2[0xb] == auVar19[3]);
              auVar23[0xc] = -(pcVar2[0xc] == auVar19[4]);
              auVar23[0xd] = -(pcVar2[0xd] == auVar19[5]);
              auVar23[0xe] = -(pcVar2[0xe] == auVar19[6]);
              auVar23[0xf] = -(pcVar2[0xf] == auVar19[7]);
              uVar16 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
              uVar15 = (uint)uVar16;
              while (uVar16 != 0) {
                uVar8 = 0;
                for (uVar9 = uVar15; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                lVar17 = (uVar8 + uVar11 & uVar3) * -0xd8;
                if (lStack_40 == *(longlong *)(lVar12 + -0xd8 + lVar17)) {
                  bVar18 = *(byte *)(lVar12 + lVar17 + -6);
                  if (uStack_108 != 0) {
                    pub_1406abac0(pbStack_50,uStack_108,1);
                  }
                  if ((bVar18 & 0x30) != 0) {
                    puVar4 = (undefined8 *)*param_1;
                    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
                    uStack_108 = 3;
                    pdb_140a003a0(*puVar4,&uStack_108);
                  }
                  if ((**(char **)param_1[1] == '\0') &&
                     (lVar14 = *(longlong *)param_1[2], lVar14 != 0)) {
                    puVar4 = (undefined8 *)*param_1;
                    uVar10 = *(undefined8 *)param_1[3];
                    uVar13 = *(undefined8 *)(*(longlong *)param_1[4] + 8);
                    uVar5 = *(undefined8 *)(*(longlong *)param_1[4] + 0x10);
                    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
                    uVar6 = *puVar4;
                    puVar4 = (undefined8 *)param_1[5];
                    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
                    pdb_142326ff0(param_2,lVar14,uVar10,uVar13,uVar5,uVar6,*puVar4,param_1[6],
                                  param_1[7]);
                  }
                  return;
                }
                uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
                uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
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
              if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
              uVar11 = uVar11 + lVar14 + 0x10;
              lVar14 = lVar14 + 0x10;
            }
          }
          pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar20[0] = -(auVar23[0] == -1);
      auVar20[1] = -(auVar23[1] == -1);
      auVar20[2] = -(auVar23[2] == -1);
      auVar20[3] = -(auVar23[3] == -1);
      auVar20[4] = -(auVar23[4] == -1);
      auVar20[5] = -(auVar23[5] == -1);
      auVar20[6] = -(auVar23[6] == -1);
      auVar20[7] = -(auVar23[7] == -1);
      auVar20[8] = -(auVar23[8] == -1);
      auVar20[9] = -(auVar23[9] == -1);
      auVar20[10] = -(auVar23[10] == -1);
      auVar20[0xb] = -(auVar23[0xb] == -1);
      auVar20[0xc] = -(auVar23[0xc] == -1);
      auVar20[0xd] = -(auVar23[0xd] == -1);
      auVar20[0xe] = -(auVar23[0xe] == -1);
      auVar20[0xf] = -(auVar23[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

