// VA 0x14072cf30, PDB extent 297 bytes
// toolbar::mei::core::NodeContext::layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::NodeContext::layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 297 */

longlong * pdb_14072cf30(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  lVar2 = *param_2;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar16 = pdb_1400af0a0(lVar2 + 0x1d0,param_2 + 1);
    lVar17 = *(longlong *)(lVar2 + 0x1b0);
    bVar22 = (byte)(uVar16 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar18 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar16 = uVar16 & *(ulonglong *)(lVar2 + 0x1b8);
      pcVar1 = (char *)(lVar17 + uVar16);
      auVar25[0] = -(*pcVar1 == auVar23[0]);
      auVar25[1] = -(pcVar1[1] == auVar23[1]);
      auVar25[2] = -(pcVar1[2] == auVar23[2]);
      auVar25[3] = -(pcVar1[3] == auVar23[3]);
      auVar25[4] = -(pcVar1[4] == auVar23[4]);
      auVar25[5] = -(pcVar1[5] == auVar23[5]);
      auVar25[6] = -(pcVar1[6] == auVar23[6]);
      auVar25[7] = -(pcVar1[7] == auVar23[7]);
      auVar25[8] = -(pcVar1[8] == auVar23[0]);
      auVar25[9] = -(pcVar1[9] == auVar23[1]);
      auVar25[10] = -(pcVar1[10] == auVar23[2]);
      auVar25[0xb] = -(pcVar1[0xb] == auVar23[3]);
      auVar25[0xc] = -(pcVar1[0xc] == auVar23[4]);
      auVar25[0xd] = -(pcVar1[0xd] == auVar23[5]);
      auVar25[0xe] = -(pcVar1[0xe] == auVar23[6]);
      auVar25[0xf] = -(pcVar1[0xf] == auVar23[7]);
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
        uVar3 = 0;
        for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar21 = (uVar3 + uVar16 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (param_2[1] == *(longlong *)(lVar17 + -0xd8 + lVar21)) {
          lVar17 = lVar17 + lVar21;
          *(undefined8 *)(lVar17 + -0x78) = param_3[8];
          uVar9 = *param_3;
          uVar10 = param_3[1];
          uVar11 = param_3[2];
          uVar12 = param_3[3];
          uVar13 = param_3[4];
          uVar14 = param_3[5];
          uVar15 = param_3[7];
          *(undefined8 *)(lVar17 + -0x88) = param_3[6];
          *(undefined8 *)(lVar17 + -0x80) = uVar15;
          *(undefined8 *)(lVar17 + -0x98) = uVar13;
          *(undefined8 *)(lVar17 + -0x90) = uVar14;
          *(undefined8 *)(lVar17 + -0xa8) = uVar11;
          *(undefined8 *)(lVar17 + -0xa0) = uVar12;
          *(undefined8 *)(lVar17 + -0xb8) = uVar9;
          *(undefined8 *)(lVar17 + -0xb0) = uVar10;
          param_1[2] = param_2[2];
          lVar2 = param_2[1];
          *param_1 = *param_2;
          param_1[1] = lVar2;
          return param_1;
        }
        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
      }
      auVar24[0] = -(*pcVar1 == (char)iVar5);
      auVar24[1] = -(pcVar1[1] == (char)((uint)iVar5 >> 8));
      auVar24[2] = -(pcVar1[2] == (char)((uint)iVar5 >> 0x10));
      auVar24[3] = -(pcVar1[3] == (char)((uint)iVar5 >> 0x18));
      auVar24[4] = -(pcVar1[4] == (char)iVar6);
      auVar24[5] = -(pcVar1[5] == (char)((uint)iVar6 >> 8));
      auVar24[6] = -(pcVar1[6] == (char)((uint)iVar6 >> 0x10));
      auVar24[7] = -(pcVar1[7] == (char)((uint)iVar6 >> 0x18));
      auVar24[8] = -(pcVar1[8] == (char)iVar7);
      auVar24[9] = -(pcVar1[9] == (char)((uint)iVar7 >> 8));
      auVar24[10] = -(pcVar1[10] == (char)((uint)iVar7 >> 0x10));
      auVar24[0xb] = -(pcVar1[0xb] == (char)((uint)iVar7 >> 0x18));
      auVar24[0xc] = -(pcVar1[0xc] == (char)iVar8);
      auVar24[0xd] = -(pcVar1[0xd] == (char)((uint)iVar8 >> 8));
      auVar24[0xe] = -(pcVar1[0xe] == (char)((uint)iVar8 >> 0x10));
      auVar24[0xf] = -(pcVar1[0xf] == (char)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar16 = uVar16 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
}

