// VA 0x140c261e0, PDB extent 324 bytes
// country_core::resources::clutter_registry::ClutterRegistry::get_or_placeholder
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::ClutterRegistry::get_or_placeholder
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 324 */

longlong * pdb_140c261e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ushort uVar18;
  longlong lVar19;
  byte bVar20;
  undefined1 auVar21 [16];
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  longlong lStack_20;
  
  lStack_20 = param_3;
  if (param_2[0x13] != 0) {
    uVar13 = pdb_1417c5550(param_2 + 0x14,&lStack_20);
    lVar15 = param_2[0x10];
    bVar20 = (byte)(uVar13 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar16 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar13 = uVar13 & param_2[0x11];
      pcVar1 = (char *)(lVar15 + uVar13);
      auVar23[0] = -(*pcVar1 == auVar21[0]);
      auVar23[1] = -(pcVar1[1] == auVar21[1]);
      auVar23[2] = -(pcVar1[2] == auVar21[2]);
      auVar23[3] = -(pcVar1[3] == auVar21[3]);
      auVar23[4] = -(pcVar1[4] == auVar21[4]);
      auVar23[5] = -(pcVar1[5] == auVar21[5]);
      auVar23[6] = -(pcVar1[6] == auVar21[6]);
      auVar23[7] = -(pcVar1[7] == auVar21[7]);
      auVar23[8] = -(pcVar1[8] == auVar21[0]);
      auVar23[9] = -(pcVar1[9] == auVar21[1]);
      auVar23[10] = -(pcVar1[10] == auVar21[2]);
      auVar23[0xb] = -(pcVar1[0xb] == auVar21[3]);
      auVar23[0xc] = -(pcVar1[0xc] == auVar21[4]);
      auVar23[0xd] = -(pcVar1[0xd] == auVar21[5]);
      auVar23[0xe] = -(pcVar1[0xe] == auVar21[6]);
      auVar23[0xf] = -(pcVar1[0xf] == auVar21[7]);
      uVar18 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar17 = (uint)uVar18;
      while (uVar18 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar19 = (uVar3 + uVar13 & param_2[0x11]) * -0x70;
        if (param_3 == *(longlong *)(lVar15 + -0x70 + lVar19)) {
          lVar15 = lVar15 + lVar19;
          lVar16 = *(longlong *)(lVar15 + -0x68);
          if (lVar16 == 3) goto LAB_140c262b8;
          param_2 = (longlong *)(lVar15 + -0x60);
          goto LAB_140c262c8;
        }
        uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
      }
      auVar22[0] = -(*pcVar1 == (char)iVar5);
      auVar22[1] = -(pcVar1[1] == (char)((uint)iVar5 >> 8));
      auVar22[2] = -(pcVar1[2] == (char)((uint)iVar5 >> 0x10));
      auVar22[3] = -(pcVar1[3] == (char)((uint)iVar5 >> 0x18));
      auVar22[4] = -(pcVar1[4] == (char)iVar6);
      auVar22[5] = -(pcVar1[5] == (char)((uint)iVar6 >> 8));
      auVar22[6] = -(pcVar1[6] == (char)((uint)iVar6 >> 0x10));
      auVar22[7] = -(pcVar1[7] == (char)((uint)iVar6 >> 0x18));
      auVar22[8] = -(pcVar1[8] == (char)iVar7);
      auVar22[9] = -(pcVar1[9] == (char)((uint)iVar7 >> 8));
      auVar22[10] = -(pcVar1[10] == (char)((uint)iVar7 >> 0x10));
      auVar22[0xb] = -(pcVar1[0xb] == (char)((uint)iVar7 >> 0x18));
      auVar22[0xc] = -(pcVar1[0xc] == (char)iVar8);
      auVar22[0xd] = -(pcVar1[0xd] == (char)((uint)iVar8 >> 8));
      auVar22[0xe] = -(pcVar1[0xe] == (char)((uint)iVar8 >> 0x10));
      auVar22[0xf] = -(pcVar1[0xf] == (char)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar13 = uVar13 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
LAB_140c262b8:
  lVar16 = *param_2;
  if (lVar16 == 3) {
    pdb_142dc8110(&UNK_14306aed6,0x32,&UNK_14306af08);
    pcVar2 = (code *)swi(3);
    plVar14 = (longlong *)(*pcVar2)();
    return plVar14;
  }
  param_2 = param_2 + 1;
LAB_140c262c8:
  *param_1 = lVar16;
  lVar15 = param_2[1];
  lVar16 = param_2[2];
  lVar19 = param_2[3];
  lVar9 = param_2[4];
  lVar10 = param_2[5];
  lVar11 = param_2[6];
  lVar12 = param_2[7];
  param_1[1] = *param_2;
  param_1[2] = lVar15;
  param_1[3] = lVar16;
  param_1[4] = lVar19;
  param_1[5] = lVar9;
  param_1[6] = lVar10;
  param_1[7] = lVar11;
  param_1[8] = lVar12;
  lVar15 = param_2[9];
  param_1[9] = param_2[8];
  param_1[10] = lVar15;
  lVar15 = param_2[0xb];
  param_1[0xb] = param_2[10];
  param_1[0xc] = lVar15;
  return param_1;
}

