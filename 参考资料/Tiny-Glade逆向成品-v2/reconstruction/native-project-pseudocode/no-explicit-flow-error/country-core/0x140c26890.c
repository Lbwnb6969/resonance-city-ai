// VA 0x140c26890, PDB extent 281 bytes
// country_core::resources::clutter_registry::ClutterRegistry::get
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_registry::ClutterRegistry::get
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 281 */

undefined8 * pdb_140c26890(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ushort uVar19;
  longlong lVar20;
  byte bVar21;
  undefined1 auVar22 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong lStack_20;
  
  if (*(longlong *)(param_2 + 0x98) != 0) {
    lStack_20 = param_3;
    uVar15 = pdb_1417c5550(param_2 + 0xa0,&lStack_20);
    lVar16 = *(longlong *)(param_2 + 0x80);
    bVar21 = (byte)(uVar15 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar22 = pshuflw(auVar22,auVar22,0);
    lVar17 = 0;
    iVar4 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar15 = uVar15 & *(ulonglong *)(param_2 + 0x88);
      pcVar1 = (char *)(lVar16 + uVar15);
      auVar24[0] = -(*pcVar1 == auVar22[0]);
      auVar24[1] = -(pcVar1[1] == auVar22[1]);
      auVar24[2] = -(pcVar1[2] == auVar22[2]);
      auVar24[3] = -(pcVar1[3] == auVar22[3]);
      auVar24[4] = -(pcVar1[4] == auVar22[4]);
      auVar24[5] = -(pcVar1[5] == auVar22[5]);
      auVar24[6] = -(pcVar1[6] == auVar22[6]);
      auVar24[7] = -(pcVar1[7] == auVar22[7]);
      auVar24[8] = -(pcVar1[8] == auVar22[0]);
      auVar24[9] = -(pcVar1[9] == auVar22[1]);
      auVar24[10] = -(pcVar1[10] == auVar22[2]);
      auVar24[0xb] = -(pcVar1[0xb] == auVar22[3]);
      auVar24[0xc] = -(pcVar1[0xc] == auVar22[4]);
      auVar24[0xd] = -(pcVar1[0xd] == auVar22[5]);
      auVar24[0xe] = -(pcVar1[0xe] == auVar22[6]);
      auVar24[0xf] = -(pcVar1[0xf] == auVar22[7]);
      uVar19 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar18; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar20 = (uVar2 + uVar15 & *(ulonglong *)(param_2 + 0x88)) * -0x70;
        if (param_3 == *(longlong *)(lVar16 + -0x70 + lVar20)) {
          lVar16 = lVar16 + lVar20;
          param_1[0xc] = *(undefined8 *)(lVar16 + -8);
          uVar8 = *(undefined8 *)(lVar16 + -0x10);
          param_1[10] = *(undefined8 *)(lVar16 + -0x18);
          param_1[0xb] = uVar8;
          uVar8 = *(undefined8 *)(lVar16 + -0x20);
          param_1[8] = *(undefined8 *)(lVar16 + -0x28);
          param_1[9] = uVar8;
          uVar8 = *(undefined8 *)(lVar16 + -0x68);
          uVar9 = *(undefined8 *)(lVar16 + -0x60);
          uVar10 = *(undefined8 *)(lVar16 + -0x58);
          uVar11 = *(undefined8 *)(lVar16 + -0x50);
          uVar12 = *(undefined8 *)(lVar16 + -0x48);
          uVar13 = *(undefined8 *)(lVar16 + -0x40);
          uVar14 = *(undefined8 *)(lVar16 + -0x30);
          param_1[6] = *(undefined8 *)(lVar16 + -0x38);
          param_1[7] = uVar14;
          param_1[4] = uVar12;
          param_1[5] = uVar13;
          param_1[2] = uVar10;
          param_1[3] = uVar11;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          return param_1;
        }
        uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
      }
      auVar23[0] = -(*pcVar1 == (char)iVar4);
      auVar23[1] = -(pcVar1[1] == (char)((uint)iVar4 >> 8));
      auVar23[2] = -(pcVar1[2] == (char)((uint)iVar4 >> 0x10));
      auVar23[3] = -(pcVar1[3] == (char)((uint)iVar4 >> 0x18));
      auVar23[4] = -(pcVar1[4] == (char)iVar5);
      auVar23[5] = -(pcVar1[5] == (char)((uint)iVar5 >> 8));
      auVar23[6] = -(pcVar1[6] == (char)((uint)iVar5 >> 0x10));
      auVar23[7] = -(pcVar1[7] == (char)((uint)iVar5 >> 0x18));
      auVar23[8] = -(pcVar1[8] == (char)iVar6);
      auVar23[9] = -(pcVar1[9] == (char)((uint)iVar6 >> 8));
      auVar23[10] = -(pcVar1[10] == (char)((uint)iVar6 >> 0x10));
      auVar23[0xb] = -(pcVar1[0xb] == (char)((uint)iVar6 >> 0x18));
      auVar23[0xc] = -(pcVar1[0xc] == (char)iVar7);
      auVar23[0xd] = -(pcVar1[0xd] == (char)((uint)iVar7 >> 8));
      auVar23[0xe] = -(pcVar1[0xe] == (char)((uint)iVar7 >> 0x10));
      auVar23[0xf] = -(pcVar1[0xf] == (char)((uint)iVar7 >> 0x18));
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar15 = uVar15 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
  *param_1 = 3;
  return param_1;
}

