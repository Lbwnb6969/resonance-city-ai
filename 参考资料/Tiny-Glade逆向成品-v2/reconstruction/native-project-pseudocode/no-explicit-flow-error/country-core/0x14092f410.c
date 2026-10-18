// VA 0x14092f410, PDB extent 651 bytes
// country_core::resources::walls::inner_walls::InnerWalls::_try_update_state<country_core::resources::walls::inner_walls::impl$1::update_wall_state::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_walls::InnerWalls::_try_update_state<country_core::resources::walls::inner_walls::impl$1::update_wall_state::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 651 */

void pdb_14092f410(longlong *param_1,longlong param_2,longlong *param_3)

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
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
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
    uVar14 = pdb_1400af0a0(param_1 + 4,&lStack_48);
    lVar15 = *param_1;
    bVar20 = (byte)(uVar14 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar16 = 0;
    iVar4 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar14 = uVar14 & param_1[1];
      auVar1 = *(undefined1 (*) [16])(lVar15 + uVar14);
      auVar23[0] = -(auVar1[0] == auVar21[0]);
      auVar23[1] = -(auVar1[1] == auVar21[1]);
      auVar23[2] = -(auVar1[2] == auVar21[2]);
      auVar23[3] = -(auVar1[3] == auVar21[3]);
      auVar23[4] = -(auVar1[4] == auVar21[4]);
      auVar23[5] = -(auVar1[5] == auVar21[5]);
      auVar23[6] = -(auVar1[6] == auVar21[6]);
      auVar23[7] = -(auVar1[7] == auVar21[7]);
      auVar23[8] = -(auVar1[8] == auVar21[0]);
      auVar23[9] = -(auVar1[9] == auVar21[1]);
      auVar23[10] = -(auVar1[10] == auVar21[2]);
      auVar23[0xb] = -(auVar1[0xb] == auVar21[3]);
      auVar23[0xc] = -(auVar1[0xc] == auVar21[4]);
      auVar23[0xd] = -(auVar1[0xd] == auVar21[5]);
      auVar23[0xe] = -(auVar1[0xe] == auVar21[6]);
      auVar23[0xf] = -(auVar1[0xf] == auVar21[7]);
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
        uVar2 = 0;
        for (uVar3 = uVar17; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar19 = (uVar2 + uVar14 & param_1[1]) * -0x78;
        if (lStack_48 == *(longlong *)(lVar15 + -0x78 + lVar19)) {
          pdb_1403b05d0(param_1 + 0xc,param_2);
          lVar15 = lVar15 + lVar19;
          lVar16 = *(longlong *)(lVar15 + -0x70);
          if (lVar16 != 0) {
            pub_1406abac0(*(byte **)(lVar15 + -0x68),lVar16 << 3,4);
          }
          if (*(longlong *)(lVar15 + -0x58) != 0) {
            pub_1406abac0(*(byte **)(lVar15 + -0x50),*(longlong *)(lVar15 + -0x58) << 2,4);
          }
          lVar16 = plStack_40[0xd];
          *(longlong *)(lVar15 + -0x10) = plStack_40[0xc];
          *(longlong *)(lVar15 + -8) = lVar16;
          lVar16 = plStack_40[0xb];
          *(longlong *)(lVar15 + -0x20) = plStack_40[10];
          *(longlong *)(lVar15 + -0x18) = lVar16;
          lVar16 = plStack_40[9];
          *(longlong *)(lVar15 + -0x30) = plStack_40[8];
          *(longlong *)(lVar15 + -0x28) = lVar16;
          lVar16 = *plStack_40;
          lVar19 = plStack_40[1];
          lVar8 = plStack_40[2];
          lVar9 = plStack_40[3];
          lVar10 = plStack_40[4];
          lVar11 = plStack_40[5];
          lVar12 = plStack_40[7];
          *(longlong *)(lVar15 + -0x40) = plStack_40[6];
          *(longlong *)(lVar15 + -0x38) = lVar12;
          *(longlong *)(lVar15 + -0x50) = lVar10;
          *(longlong *)(lVar15 + -0x48) = lVar11;
          *(longlong *)(lVar15 + -0x60) = lVar8;
          *(longlong *)(lVar15 + -0x58) = lVar9;
          *(longlong *)(lVar15 + -0x70) = lVar16;
          *(longlong *)(lVar15 + -0x68) = lVar19;
          return;
        }
        uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
      }
      auVar22[0] = -(auVar1[0] == (char)iVar4);
      auVar22[1] = -(auVar1[1] == (char)((uint)iVar4 >> 8));
      auVar22[2] = -(auVar1[2] == (char)((uint)iVar4 >> 0x10));
      auVar22[3] = -(auVar1[3] == (char)((uint)iVar4 >> 0x18));
      auVar22[4] = -(auVar1[4] == (char)iVar5);
      auVar22[5] = -(auVar1[5] == (char)((uint)iVar5 >> 8));
      auVar22[6] = -(auVar1[6] == (char)((uint)iVar5 >> 0x10));
      auVar22[7] = -(auVar1[7] == (char)((uint)iVar5 >> 0x18));
      auVar22[8] = -(auVar1[8] == (char)iVar6);
      auVar22[9] = -(auVar1[9] == (char)((uint)iVar6 >> 8));
      auVar22[10] = -(auVar1[10] == (char)((uint)iVar6 >> 0x10));
      auVar22[0xb] = -(auVar1[0xb] == (char)((uint)iVar6 >> 0x18));
      auVar22[0xc] = -(auVar1[0xc] == (char)iVar7);
      auVar22[0xd] = -(auVar1[0xd] == (char)((uint)iVar7 >> 8));
      auVar22[0xe] = -(auVar1[0xe] == (char)((uint)iVar7 >> 0x10));
      auVar22[0xf] = -(auVar1[0xf] == (char)((uint)iVar7 >> 0x18));
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar14 = uVar14 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
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
  plVar13 = plStack_40;
  if (*plStack_40 != 0) {
    pub_1406abac0((byte *)plStack_40[1],*plStack_40 << 3,4);
  }
  lVar15 = plVar13[3];
  if (lVar15 != 0) {
    pub_1406abac0((byte *)plVar13[4],lVar15 << 2,4);
  }
  return;
}

