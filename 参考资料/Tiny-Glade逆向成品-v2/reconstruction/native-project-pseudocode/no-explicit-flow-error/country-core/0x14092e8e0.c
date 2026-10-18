// VA 0x14092e8e0, PDB extent 619 bytes
// country_core::resources::walls::inner_walls::InnerWalls::_try_update_state<country_core::resources::walls::inner_walls::impl$1::update_wall_state_curve::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_walls::InnerWalls::_try_update_state<country_core::resources::walls::inner_walls::impl$1::update_wall_state_curve::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 619 */

void pdb_14092e8e0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  byte bVar18;
  undefined1 auVar19 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  longlong **pplStack_60;
  longlong *plStack_58;
  code *pcStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lStack_48 = param_2;
  plStack_40 = param_3;
  if (param_1[3] != 0) {
    uVar12 = pdb_1400af0a0(param_1 + 4,&lStack_48);
    lVar13 = *param_1;
    bVar18 = (byte)(uVar12 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar14 = 0;
    iVar4 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar12 = uVar12 & param_1[1];
      auVar1 = *(undefined1 (*) [16])(lVar13 + uVar12);
      auVar21[0] = -(auVar1[0] == auVar19[0]);
      auVar21[1] = -(auVar1[1] == auVar19[1]);
      auVar21[2] = -(auVar1[2] == auVar19[2]);
      auVar21[3] = -(auVar1[3] == auVar19[3]);
      auVar21[4] = -(auVar1[4] == auVar19[4]);
      auVar21[5] = -(auVar1[5] == auVar19[5]);
      auVar21[6] = -(auVar1[6] == auVar19[6]);
      auVar21[7] = -(auVar1[7] == auVar19[7]);
      auVar21[8] = -(auVar1[8] == auVar19[0]);
      auVar21[9] = -(auVar1[9] == auVar19[1]);
      auVar21[10] = -(auVar1[10] == auVar19[2]);
      auVar21[0xb] = -(auVar1[0xb] == auVar19[3]);
      auVar21[0xc] = -(auVar1[0xc] == auVar19[4]);
      auVar21[0xd] = -(auVar1[0xd] == auVar19[5]);
      auVar21[0xe] = -(auVar1[0xe] == auVar19[6]);
      auVar21[0xf] = -(auVar1[0xf] == auVar19[7]);
      uVar16 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar15; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar17 = (uVar2 + uVar12 & param_1[1]) * -0x78;
        if (lStack_48 == *(longlong *)(lVar13 + -0x78 + lVar17)) {
          pdb_1403b05d0(param_1 + 0xc,param_2);
          lVar13 = lVar13 + lVar17;
          lVar14 = *(longlong *)(lVar13 + -0x70);
          if (lVar14 != 0) {
            pub_1406abac0(*(byte **)(lVar13 + -0x68),lVar14 << 3,4);
          }
          if (*(longlong *)(lVar13 + -0x58) != 0) {
            pub_1406abac0(*(byte **)(lVar13 + -0x50),*(longlong *)(lVar13 + -0x58) << 2,4);
          }
          *(longlong *)(lVar13 + -0x40) = plStack_40[6];
          lVar14 = *plStack_40;
          lVar17 = plStack_40[1];
          lVar8 = plStack_40[2];
          lVar9 = plStack_40[3];
          lVar10 = plStack_40[5];
          *(longlong *)(lVar13 + -0x50) = plStack_40[4];
          *(longlong *)(lVar13 + -0x48) = lVar10;
          *(longlong *)(lVar13 + -0x60) = lVar8;
          *(longlong *)(lVar13 + -0x58) = lVar9;
          *(longlong *)(lVar13 + -0x70) = lVar14;
          *(longlong *)(lVar13 + -0x68) = lVar17;
          return;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar20[0] = -(auVar1[0] == (char)iVar4);
      auVar20[1] = -(auVar1[1] == (char)((uint)iVar4 >> 8));
      auVar20[2] = -(auVar1[2] == (char)((uint)iVar4 >> 0x10));
      auVar20[3] = -(auVar1[3] == (char)((uint)iVar4 >> 0x18));
      auVar20[4] = -(auVar1[4] == (char)iVar5);
      auVar20[5] = -(auVar1[5] == (char)((uint)iVar5 >> 8));
      auVar20[6] = -(auVar1[6] == (char)((uint)iVar5 >> 0x10));
      auVar20[7] = -(auVar1[7] == (char)((uint)iVar5 >> 0x18));
      auVar20[8] = -(auVar1[8] == (char)iVar6);
      auVar20[9] = -(auVar1[9] == (char)((uint)iVar6 >> 8));
      auVar20[10] = -(auVar1[10] == (char)((uint)iVar6 >> 0x10));
      auVar20[0xb] = -(auVar1[0xb] == (char)((uint)iVar6 >> 0x18));
      auVar20[0xc] = -(auVar1[0xc] == (char)iVar7);
      auVar20[0xd] = -(auVar1[0xd] == (char)((uint)iVar7 >> 8));
      auVar20[0xe] = -(auVar1[0xe] == (char)((uint)iVar7 >> 0x10));
      auVar20[0xf] = -(auVar1[0xf] == (char)((uint)iVar7 >> 0x18));
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar12 = uVar12 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  if (1 < *_DAT_143ca8e90) {
    plStack_58 = &lStack_48;
    pcStack_50 = pdb_140c04ef0;
    uStack_b8 = 0;
    puStack_b0 = &UNK_143021dde;
    uStack_a8 = 0x2b;
    uStack_a0 = 0;
    puStack_98 = &UNK_143021da7;
    uStack_90 = 0x36;
    uStack_88 = 2;
    puStack_80 = &UNK_143021dde;
    uStack_78 = 0x2b;
    uStack_70 = 0xfd00000001;
    puStack_68 = &UNK_143021d78;
    pplStack_60 = &plStack_58;
    pdb_140f332f0(&uStack_31,&uStack_b8);
  }
  plVar11 = plStack_40;
  if (*plStack_40 != 0) {
    pub_1406abac0((byte *)plStack_40[1],*plStack_40 << 3,4);
  }
  lVar13 = plVar11[3];
  if (lVar13 != 0) {
    pub_1406abac0((byte *)plVar11[4],lVar13 << 2,4);
  }
  return;
}

