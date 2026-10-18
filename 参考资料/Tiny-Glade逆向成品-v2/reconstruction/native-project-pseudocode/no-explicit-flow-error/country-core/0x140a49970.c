// VA 0x140a49970, PDB extent 742 bytes
// country_core::systems::wall::finish_wall::finish_wall::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/finish_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::wall::finish_wall::finish_wall::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/finish_wall.rs
   Extent: 742 */

void pdb_140a49970(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong alStack_70 [6];
  
  pcVar7 = *(char **)*param_1;
  if (*pcVar7 != '\x02') {
    return;
  }
  plVar8 = *(longlong **)param_1[1];
  lVar9 = *(longlong *)(pcVar7 + 0x10);
  alStack_70[0] = lVar9;
  if (plVar8[3] != 0) {
    uVar15 = pdb_1400af0a0(plVar8 + 4,alStack_70);
    lVar16 = *plVar8;
    bVar22 = (byte)(uVar15 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar18 = 0;
    while( true ) {
      uVar15 = uVar15 & plVar8[1];
      auVar2 = *(undefined1 (*) [16])(lVar16 + uVar15);
      auVar25[0] = -(auVar2[0] == auVar23[0]);
      auVar25[1] = -(auVar2[1] == auVar23[1]);
      auVar25[2] = -(auVar2[2] == auVar23[2]);
      auVar25[3] = -(auVar2[3] == auVar23[3]);
      auVar25[4] = -(auVar2[4] == auVar23[4]);
      auVar25[5] = -(auVar2[5] == auVar23[5]);
      auVar25[6] = -(auVar2[6] == auVar23[6]);
      auVar25[7] = -(auVar2[7] == auVar23[7]);
      auVar25[8] = -(auVar2[8] == auVar23[0]);
      auVar25[9] = -(auVar2[9] == auVar23[1]);
      auVar25[10] = -(auVar2[10] == auVar23[2]);
      auVar25[0xb] = -(auVar2[0xb] == auVar23[3]);
      auVar25[0xc] = -(auVar2[0xc] == auVar23[4]);
      auVar25[0xd] = -(auVar2[0xd] == auVar23[5]);
      auVar25[0xe] = -(auVar2[0xe] == auVar23[6]);
      auVar25[0xf] = -(auVar2[0xf] == auVar23[7]);
      uVar20 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar13 = 0;
        for (uVar14 = uVar19; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        lVar21 = (uVar13 + uVar15 & plVar8[1]) * -0x78;
        if (lVar9 == *(longlong *)(lVar16 + -0x78 + lVar21)) {
          lVar16 = lVar16 + lVar21;
          if (*(char *)(param_2 + 0xa4) != *(char *)(lVar16 + -6)) {
            return;
          }
          cVar3 = *(char *)(param_2 + 0xa5);
          if (cVar3 != *(char *)(lVar16 + -7)) {
            return;
          }
          lVar16 = *(longlong *)(param_2 + 0x80);
          if (lVar16 == *(longlong *)(pcVar7 + 0x10)) {
            plVar8 = (longlong *)param_1[4];
            lVar16 = plVar8[2];
            if (lVar16 == *plVar8) {
              pdb_142d7e8a0(plVar8);
            }
            *(longlong *)(plVar8[1] + lVar16 * 8) = lVar9;
            plVar8[2] = lVar16 + 1;
            plVar8 = (longlong *)param_1[3];
            cVar3 = pcVar7[0x18];
            *(undefined4 *)plVar8[2] = *(undefined4 *)((longlong)plVar8 + 0x1c);
            lVar16 = *plVar8;
            lVar18 = *(longlong *)(lVar16 + 0x30);
            uVar10 = *(undefined8 *)(lVar16 + 0x40);
            if (lVar18 == *(longlong *)(lVar16 + 0x20)) {
              pdb_142d7e830(lVar16 + 0x20);
            }
            lVar21 = *(longlong *)(lVar16 + 0x28);
            *(undefined8 *)(lVar21 + lVar18 * 0x18) = uVar10;
            *(longlong *)(lVar21 + 8 + lVar18 * 0x18) = lVar9;
            *(char *)(lVar21 + 0x10 + lVar18 * 0x18) = cVar3;
            *(longlong *)(lVar16 + 0x30) = lVar18 + 1;
            *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
            return;
          }
          plVar8 = (longlong *)param_1[2];
          uVar4 = *(undefined1 *)(param_2 + 0xa7);
          uVar10 = *(undefined8 *)(param_2 + 0x98);
          uVar6 = *(undefined4 *)(param_2 + 0xa0);
          cVar5 = pcVar7[0x18];
          uVar1 = *(undefined4 *)(param_2 + 0x94);
          *(undefined4 *)plVar8[2] = *(undefined4 *)((longlong)plVar8 + 0x1c);
          lVar18 = *plVar8;
          lVar21 = *(longlong *)(lVar18 + 0x30);
          uVar11 = *(undefined8 *)(lVar18 + 0x40);
          if (lVar21 == *(longlong *)(lVar18 + 0x20)) {
            pdb_142d7e7c0(lVar18 + 0x20);
          }
          lVar12 = *(longlong *)(lVar18 + 0x28);
          lVar17 = lVar21 * 0x30;
          *(undefined8 *)(lVar12 + lVar17) = uVar11;
          *(longlong *)(lVar12 + 8 + lVar17) = lVar16;
          *(longlong *)(lVar12 + 0x10 + lVar17) = lVar9;
          *(undefined4 *)(lVar12 + 0x18 + lVar17) = uVar1;
          *(undefined8 *)(lVar12 + 0x1c + lVar17) = uVar10;
          *(undefined4 *)(lVar12 + 0x24 + lVar17) = uVar6;
          *(char *)(lVar12 + 0x28 + lVar17) = cVar3;
          *(undefined1 *)(lVar12 + 0x29 + lVar17) = uVar4;
          *(char *)(lVar12 + 0x2a + lVar17) = cVar5;
          *(longlong *)(lVar18 + 0x30) = lVar21 + 1;
          *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
          plVar8 = (longlong *)param_1[3];
          *(undefined4 *)plVar8[2] = *(undefined4 *)((longlong)plVar8 + 0x1c);
          lVar18 = *plVar8;
          lVar21 = *(longlong *)(lVar18 + 0x30);
          uVar10 = *(undefined8 *)(lVar18 + 0x40);
          if (lVar21 == *(longlong *)(lVar18 + 0x20)) {
            pdb_142d7e830(lVar18 + 0x20);
          }
          lVar12 = *(longlong *)(lVar18 + 0x28);
          *(undefined8 *)(lVar12 + lVar21 * 0x18) = uVar10;
          *(longlong *)(lVar12 + 8 + lVar21 * 0x18) = lVar16;
          *(undefined1 *)(lVar12 + 0x10 + lVar21 * 0x18) = uVar4;
          *(longlong *)(lVar18 + 0x30) = lVar21 + 1;
          *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
          *(undefined4 *)plVar8[2] = *(undefined4 *)((longlong)plVar8 + 0x1c);
          lVar16 = *plVar8;
          lVar18 = *(longlong *)(lVar16 + 0x30);
          uVar10 = *(undefined8 *)(lVar16 + 0x40);
          if (lVar18 == *(longlong *)(lVar16 + 0x20)) {
            pdb_142d7e830(lVar16 + 0x20);
          }
          lVar21 = *(longlong *)(lVar16 + 0x28);
          *(undefined8 *)(lVar21 + lVar18 * 0x18) = uVar10;
          *(longlong *)(lVar21 + 8 + lVar18 * 0x18) = lVar9;
          *(char *)(lVar21 + 0x10 + lVar18 * 0x18) = cVar5;
          *(longlong *)(lVar16 + 0x30) = lVar18 + 1;
          *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
          return;
        }
        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
      }
      auVar24[0] = -(auVar2[0] == -1);
      auVar24[1] = -(auVar2[1] == -1);
      auVar24[2] = -(auVar2[2] == -1);
      auVar24[3] = -(auVar2[3] == -1);
      auVar24[4] = -(auVar2[4] == -1);
      auVar24[5] = -(auVar2[5] == -1);
      auVar24[6] = -(auVar2[6] == -1);
      auVar24[7] = -(auVar2[7] == -1);
      auVar24[8] = -(auVar2[8] == -1);
      auVar24[9] = -(auVar2[9] == -1);
      auVar24[10] = -(auVar2[10] == -1);
      auVar24[0xb] = -(auVar2[0xb] == -1);
      auVar24[0xc] = -(auVar2[0xc] == -1);
      auVar24[0xd] = -(auVar2[0xd] == -1);
      auVar24[0xe] = -(auVar2[0xe] == -1);
      auVar24[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar15 = uVar15 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14303cc00);
}

