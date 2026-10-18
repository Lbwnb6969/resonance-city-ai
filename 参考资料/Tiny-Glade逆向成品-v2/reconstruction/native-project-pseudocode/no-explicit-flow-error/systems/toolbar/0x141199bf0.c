// VA 0x141199bf0, PDB extent 794 bytes
// toolbar::menu::load::ui::closure$10
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::load::ui::closure$10
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
   Extent: 794 */

void pdb_141199bf0(undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  undefined *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  longlong lVar18;
  byte bVar19;
  undefined1 auVar20 [16];
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined *puStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  plVar2 = (longlong *)*param_1;
  if (*plVar2 == 0) {
LAB_141199d92:
    uVar14 = 6;
    uVar11 = pdb_140dc6290(&UNK_14329f169,6);
    pdb_1407339e0(&puStack_58,param_2,uVar11,uVar14);
    lVar13 = pdb_14116dd60(&puStack_58);
    *(undefined4 *)(lVar13 + 600) = 0x7b5a51a0;
    puStack_38 = puStack_58;
    lStack_30 = lStack_50;
    uStack_28 = uStack_48;
    lVar13 = pdb_14116dd60(&puStack_38);
    puVar3 = puStack_38;
    *(undefined1 *)(lVar13 + 0x25d) = 0x14;
    puStack_58 = puStack_38;
    lStack_50 = lStack_30;
    uStack_48 = uStack_28;
    if (*(longlong *)(puStack_38 + 0x1c8) != 0) {
      uVar12 = pdb_1400af0a0(puStack_38 + 0x1d0,&lStack_50);
      lVar13 = *(longlong *)(puVar3 + 0x1b0);
      uVar4 = *(ulonglong *)(puVar3 + 0x1b8);
      bVar19 = (byte)(uVar12 >> 0x39);
      auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
      auVar20 = pshuflw(auVar20,auVar20,0);
      lVar15 = 0;
      iVar7 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                     CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
      iVar8 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                     CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
      iVar9 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                     CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
      iVar10 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                      CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
      while( true ) {
        uVar12 = uVar12 & uVar4;
        pcVar1 = (char *)(lVar13 + uVar12);
        auVar24[0] = -(*pcVar1 == auVar20[0]);
        auVar24[1] = -(pcVar1[1] == auVar20[1]);
        auVar24[2] = -(pcVar1[2] == auVar20[2]);
        auVar24[3] = -(pcVar1[3] == auVar20[3]);
        auVar24[4] = -(pcVar1[4] == auVar20[4]);
        auVar24[5] = -(pcVar1[5] == auVar20[5]);
        auVar24[6] = -(pcVar1[6] == auVar20[6]);
        auVar24[7] = -(pcVar1[7] == auVar20[7]);
        auVar24[8] = -(pcVar1[8] == auVar20[0]);
        auVar24[9] = -(pcVar1[9] == auVar20[1]);
        auVar24[10] = -(pcVar1[10] == auVar20[2]);
        auVar24[0xb] = -(pcVar1[0xb] == auVar20[3]);
        auVar24[0xc] = -(pcVar1[0xc] == auVar20[4]);
        auVar24[0xd] = -(pcVar1[0xd] == auVar20[5]);
        auVar24[0xe] = -(pcVar1[0xe] == auVar20[6]);
        auVar24[0xf] = -(pcVar1[0xf] == auVar20[7]);
        uVar17 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar18 = (uVar5 + uVar12 & uVar4) * -0xd8;
          if (lStack_50 == *(longlong *)(lVar13 + -0xd8 + lVar18)) {
            if ((*(byte *)(lVar13 + lVar18 + -6) & 0x30) != 0) {
              *(undefined1 *)param_1[2] = 1;
            }
            return;
          }
          uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
        }
        auVar22[0] = -(*pcVar1 == (char)iVar7);
        auVar22[1] = -(pcVar1[1] == (char)((uint)iVar7 >> 8));
        auVar22[2] = -(pcVar1[2] == (char)((uint)iVar7 >> 0x10));
        auVar22[3] = -(pcVar1[3] == (char)((uint)iVar7 >> 0x18));
        auVar22[4] = -(pcVar1[4] == (char)iVar8);
        auVar22[5] = -(pcVar1[5] == (char)((uint)iVar8 >> 8));
        auVar22[6] = -(pcVar1[6] == (char)((uint)iVar8 >> 0x10));
        auVar22[7] = -(pcVar1[7] == (char)((uint)iVar8 >> 0x18));
        auVar22[8] = -(pcVar1[8] == (char)iVar9);
        auVar22[9] = -(pcVar1[9] == (char)((uint)iVar9 >> 8));
        auVar22[10] = -(pcVar1[10] == (char)((uint)iVar9 >> 0x10));
        auVar22[0xb] = -(pcVar1[0xb] == (char)((uint)iVar9 >> 0x18));
        auVar22[0xc] = -(pcVar1[0xc] == (char)iVar10);
        auVar22[0xd] = -(pcVar1[0xd] == (char)((uint)iVar10 >> 8));
        auVar22[0xe] = -(pcVar1[0xe] == (char)((uint)iVar10 >> 0x10));
        auVar22[0xf] = -(pcVar1[0xf] == (char)((uint)iVar10 >> 0x18));
        if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x1f,0) & 1) != 0) || (SUB161(auVar22 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
        uVar12 = uVar12 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
    }
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  }
  else {
    puVar3 = *(undefined **)(param_2 + 8);
    puStack_38 = &UNK_14329f82d;
    lStack_30 = 10;
    puStack_58 = (undefined *)pdb_140bbbcb0(&puStack_38);
    lStack_50 = _DAT_14329c330;
    uStack_48 = _UNK_14329c338;
    lStack_50 = pdb_1400affa0(&puStack_58);
    puStack_58 = puVar3;
    uVar11 = pdb_1400b0130(&puStack_58);
    pdb_14072caa0(&puStack_58,param_2,uVar11);
    puVar3 = puStack_58;
    if (*(longlong *)(puStack_58 + 0x1c8) != 0) {
      uVar12 = pdb_1400af0a0(puStack_58 + 0x1d0,&lStack_50);
      lVar13 = *(longlong *)(puVar3 + 0x1b0);
      uVar4 = *(ulonglong *)(puVar3 + 0x1b8);
      bVar19 = (byte)(uVar12 >> 0x39);
      auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
      auVar20 = pshuflw(auVar20,auVar20,0);
      lVar15 = 0;
      iVar7 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                     CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
      iVar8 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                     CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
      iVar9 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                     CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
      iVar10 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                      CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
      while( true ) {
        uVar12 = uVar12 & uVar4;
        auVar24 = *(undefined1 (*) [16])(lVar13 + uVar12);
        auVar23[0] = -(auVar24[0] == auVar20[0]);
        auVar23[1] = -(auVar24[1] == auVar20[1]);
        auVar23[2] = -(auVar24[2] == auVar20[2]);
        auVar23[3] = -(auVar24[3] == auVar20[3]);
        auVar23[4] = -(auVar24[4] == auVar20[4]);
        auVar23[5] = -(auVar24[5] == auVar20[5]);
        auVar23[6] = -(auVar24[6] == auVar20[6]);
        auVar23[7] = -(auVar24[7] == auVar20[7]);
        auVar23[8] = -(auVar24[8] == auVar20[0]);
        auVar23[9] = -(auVar24[9] == auVar20[1]);
        auVar23[10] = -(auVar24[10] == auVar20[2]);
        auVar23[0xb] = -(auVar24[0xb] == auVar20[3]);
        auVar23[0xc] = -(auVar24[0xc] == auVar20[4]);
        auVar23[0xd] = -(auVar24[0xd] == auVar20[5]);
        auVar23[0xe] = -(auVar24[0xe] == auVar20[6]);
        auVar23[0xf] = -(auVar24[0xf] == auVar20[7]);
        uVar17 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
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
        uVar16 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar18 = (uVar5 + uVar12 & uVar4) * -0xd8;
          if (lStack_50 == *(longlong *)(lVar13 + -0xd8 + lVar18)) {
            lVar13 = lVar13 + lVar18;
            *(undefined1 (*) [16])(lVar13 + -0xa8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(lVar13 + -0xb8) = (undefined1  [16])0x0;
            in_XMM1_Bp = UNK_14329e29f;
            in_XMM1_Bo = UNK_14329e29e;
            in_XMM1_Bn = UNK_14329e29d;
            in_XMM1_Bm = UNK_14329e29c;
            in_XMM1_Bl = UNK_14329e29b;
            in_XMM1_Bk = UNK_14329e29a;
            in_XMM1_Bj = UNK_14329e299;
            in_XMM1_Bi = UNK_14329e298;
            in_XMM1_Bh = UNK_14329e297;
            in_XMM1_Bg = UNK_14329e296;
            in_XMM1_Bf = UNK_14329e295;
            in_XMM1_Be = UNK_14329e294;
            in_XMM1_Bd = UNK_14329e293;
            in_XMM1_Bc = UNK_14329e292;
            in_XMM1_Bb = UNK_14329e291;
            in_XMM1_Ba = DAT_14329e290;
            *(undefined1 *)(lVar13 + -0x98) = DAT_14329e290;
            *(undefined1 *)(lVar13 + -0x97) = in_XMM1_Bb;
            *(undefined1 *)(lVar13 + -0x96) = in_XMM1_Bc;
            *(undefined1 *)(lVar13 + -0x95) = in_XMM1_Bd;
            *(undefined1 *)(lVar13 + -0x94) = in_XMM1_Be;
            *(undefined1 *)(lVar13 + -0x93) = in_XMM1_Bf;
            *(undefined1 *)(lVar13 + -0x92) = in_XMM1_Bg;
            *(undefined1 *)(lVar13 + -0x91) = in_XMM1_Bh;
            *(undefined1 *)(lVar13 + -0x90) = in_XMM1_Bi;
            *(undefined1 *)(lVar13 + -0x8f) = in_XMM1_Bj;
            *(undefined1 *)(lVar13 + -0x8e) = in_XMM1_Bk;
            *(undefined1 *)(lVar13 + -0x8d) = in_XMM1_Bl;
            *(undefined1 *)(lVar13 + -0x8c) = in_XMM1_Bm;
            *(undefined1 *)(lVar13 + -0x8b) = in_XMM1_Bn;
            *(undefined1 *)(lVar13 + -0x8a) = in_XMM1_Bo;
            *(undefined1 *)(lVar13 + -0x89) = in_XMM1_Bp;
            *(undefined1 (*) [16])(lVar13 + -0x88) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar13 + -0x79) = 0;
            *(undefined1 *)(lVar13 + -0x71) = 4;
            uStack_28 = uStack_48;
            puStack_38 = puStack_58;
            lStack_30 = lStack_50;
            pdb_141171320(&puStack_58,&puStack_38,param_1[1],plVar2);
            goto LAB_141199d92;
          }
          uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
        }
        auVar21[0] = -(auVar24[0] == (char)iVar7);
        auVar21[1] = -(auVar24[1] == (char)((uint)iVar7 >> 8));
        auVar21[2] = -(auVar24[2] == (char)((uint)iVar7 >> 0x10));
        auVar21[3] = -(auVar24[3] == (char)((uint)iVar7 >> 0x18));
        auVar21[4] = -(auVar24[4] == (char)iVar8);
        auVar21[5] = -(auVar24[5] == (char)((uint)iVar8 >> 8));
        auVar21[6] = -(auVar24[6] == (char)((uint)iVar8 >> 0x10));
        auVar21[7] = -(auVar24[7] == (char)((uint)iVar8 >> 0x18));
        auVar21[8] = -(auVar24[8] == (char)iVar9);
        auVar21[9] = -(auVar24[9] == (char)((uint)iVar9 >> 8));
        auVar21[10] = -(auVar24[10] == (char)((uint)iVar9 >> 0x10));
        auVar21[0xb] = -(auVar24[0xb] == (char)((uint)iVar9 >> 0x18));
        auVar21[0xc] = -(auVar24[0xc] == (char)iVar10);
        auVar21[0xd] = -(auVar24[0xd] == (char)((uint)iVar10 >> 8));
        auVar21[0xe] = -(auVar24[0xe] == (char)((uint)iVar10 >> 0x10));
        auVar21[0xf] = -(auVar24[0xf] == (char)((uint)iVar10 >> 0x18));
        if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x1f,0) & 1) != 0) || (SUB161(auVar21 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
        uVar12 = uVar12 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
}

