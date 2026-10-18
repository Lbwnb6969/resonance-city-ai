// VA 0x14092eb50, PDB extent 445 bytes
// country_core::resources::walls::inner_walls::InnerWalls::_try_update_state<country_core::resources::walls::inner_walls::impl$1::update_wall_state_enclosure::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_walls::InnerWalls::_try_update_state<country_core::resources::walls::inner_walls::impl$1::update_wall_state_enclosure::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 445 */

void pdb_14092eb50(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 uStack_99;
  longlong lStack_98;
  longlong *plStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  longlong **pplStack_28;
  
  lStack_98 = param_2;
  if (param_1[3] != 0) {
    uVar11 = pdb_1400af0a0(param_1 + 4,&lStack_98);
    lVar16 = *param_1;
    bVar17 = (byte)(uVar11 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar12 = 0;
    iVar4 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar11 = uVar11 & param_1[1];
      auVar1 = *(undefined1 (*) [16])(lVar16 + uVar11);
      auVar20[0] = -(auVar1[0] == auVar18[0]);
      auVar20[1] = -(auVar1[1] == auVar18[1]);
      auVar20[2] = -(auVar1[2] == auVar18[2]);
      auVar20[3] = -(auVar1[3] == auVar18[3]);
      auVar20[4] = -(auVar1[4] == auVar18[4]);
      auVar20[5] = -(auVar1[5] == auVar18[5]);
      auVar20[6] = -(auVar1[6] == auVar18[6]);
      auVar20[7] = -(auVar1[7] == auVar18[7]);
      auVar20[8] = -(auVar1[8] == auVar18[0]);
      auVar20[9] = -(auVar1[9] == auVar18[1]);
      auVar20[10] = -(auVar1[10] == auVar18[2]);
      auVar20[0xb] = -(auVar1[0xb] == auVar18[3]);
      auVar20[0xc] = -(auVar1[0xc] == auVar18[4]);
      auVar20[0xd] = -(auVar1[0xd] == auVar18[5]);
      auVar20[0xe] = -(auVar1[0xe] == auVar18[6]);
      auVar20[0xf] = -(auVar1[0xf] == auVar18[7]);
      uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar13; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar15 = (uVar2 + uVar11 & param_1[1]) * -0x78;
        if (lStack_98 == *(longlong *)(lVar16 + -0x78 + lVar15)) {
          lVar16 = lVar16 + lVar15;
          pdb_1403b05d0(param_1 + 0xc,param_2);
          uVar8 = param_3[1];
          uVar9 = *(undefined8 *)((longlong)param_3 + 0xc);
          uVar10 = *(undefined8 *)((longlong)param_3 + 0x14);
          *(undefined8 *)(lVar16 + -0x38) = *param_3;
          *(undefined8 *)(lVar16 + -0x30) = uVar8;
          *(undefined8 *)(lVar16 + -0x2c) = uVar9;
          *(undefined8 *)(lVar16 + -0x24) = uVar10;
          return;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar19[0] = -(auVar1[0] == (char)iVar4);
      auVar19[1] = -(auVar1[1] == (char)((uint)iVar4 >> 8));
      auVar19[2] = -(auVar1[2] == (char)((uint)iVar4 >> 0x10));
      auVar19[3] = -(auVar1[3] == (char)((uint)iVar4 >> 0x18));
      auVar19[4] = -(auVar1[4] == (char)iVar5);
      auVar19[5] = -(auVar1[5] == (char)((uint)iVar5 >> 8));
      auVar19[6] = -(auVar1[6] == (char)((uint)iVar5 >> 0x10));
      auVar19[7] = -(auVar1[7] == (char)((uint)iVar5 >> 0x18));
      auVar19[8] = -(auVar1[8] == (char)iVar6);
      auVar19[9] = -(auVar1[9] == (char)((uint)iVar6 >> 8));
      auVar19[10] = -(auVar1[10] == (char)((uint)iVar6 >> 0x10));
      auVar19[0xb] = -(auVar1[0xb] == (char)((uint)iVar6 >> 0x18));
      auVar19[0xc] = -(auVar1[0xc] == (char)iVar7);
      auVar19[0xd] = -(auVar1[0xd] == (char)((uint)iVar7 >> 8));
      auVar19[0xe] = -(auVar1[0xe] == (char)((uint)iVar7 >> 0x10));
      auVar19[0xf] = -(auVar1[0xf] == (char)((uint)iVar7 >> 0x18));
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  if (1 < *_DAT_143ca8e90) {
    plStack_90 = &lStack_98;
    pcStack_88 = pdb_140c04ef0;
    uStack_80 = 0;
    puStack_78 = &UNK_143021dde;
    uStack_70 = 0x2b;
    uStack_68 = 0;
    puStack_60 = &UNK_143021da7;
    uStack_58 = 0x36;
    uStack_50 = 2;
    puStack_48 = &UNK_143021dde;
    uStack_40 = 0x2b;
    uStack_38 = 0xfd00000001;
    puStack_30 = &UNK_143021d78;
    pplStack_28 = &plStack_90;
    pdb_140f332f0(&uStack_99,&uStack_80);
  }
  return;
}

