// VA 0x140ab5050, PDB extent 777 bytes
// country_core::startup::swap_replacement_mods::reload_assets_for_changed_paths
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::swap_replacement_mods::reload_assets_for_changed_paths
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 777 */

void pdb_140ab5050(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  bool bVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  char *pcStack_f0;
  code *pcStack_e8;
  undefined1 (*pauStack_c0) [16];
  longlong lStack_b8;
  longlong lStack_a8;
  undefined8 uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  char acStack_62 [34];
  
  acStack_62[2] = -2;
  acStack_62[3] = -1;
  acStack_62[4] = -1;
  acStack_62[5] = -1;
  acStack_62[6] = -1;
  acStack_62[7] = -1;
  acStack_62[8] = -1;
  acStack_62[9] = -1;
  uStack_90 = param_1;
  pdb_140b1e840(&pauStack_c0,param_2,param_4,param_3);
  acStack_62[1] = 1;
  pdb_140c5a060(&pcStack_f0,param_2,param_5,param_4,param_3);
  acStack_62[1] = 1;
  pdb_14177b6a0(&pauStack_c0,&pcStack_f0);
  auVar21 = *pauStack_c0;
  lStack_88 = lStack_b8;
  if (lStack_b8 == 0) {
    uStack_70 = 0;
  }
  else {
    uVar9 = lStack_b8 + 0x10U & 0xfffffffffffffff0;
    uStack_80 = lStack_b8 + uVar9 + 0x11;
    pbStack_78 = (byte *)((longlong)pauStack_c0 - uVar9);
    uStack_70 = 0x10;
  }
  pauVar18 = pauStack_c0 + 1;
  uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar21[0xf] >> 7) << 0xf);
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  lVar11 = lStack_a8;
  pauVar17 = pauStack_c0;
LAB_140ab51c4:
  bVar19 = lVar11 == 0;
  lVar11 = lVar11 + -1;
  if (bVar19) {
    if ((lStack_88 != 0) && (uStack_80 != 0)) {
      pub_1406abac0(pbStack_78,uStack_80,uStack_70);
    }
    return;
  }
  if ((short)uVar12 == 0) {
    do {
      auVar21 = *pauVar18;
      pauVar17 = pauVar17 + -1;
      pauVar18 = pauVar18 + 1;
      uVar12 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                        (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) ^ 0xffff;
    } while (uVar12 == 0);
  }
  uVar14 = 0;
  for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
    uVar14 = uVar14 + 1;
  }
  cVar2 = (*pauVar17)[~(ulonglong)uVar14];
  acStack_62[0] = cVar2;
  if (param_4[3] != 0) {
    uVar9 = pdb_1417c4b30(param_4 + 4,acStack_62);
    uVar12 = uVar12 - 1 & uVar12;
    lVar10 = *param_4;
    bVar20 = (byte)(uVar9 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar13 = 0;
    while( true ) {
      uVar9 = uVar9 & param_4[1];
      auVar1 = *(undefined1 (*) [16])(lVar10 + uVar9);
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
      uVar15 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar4 = 0;
        for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar16 = (uVar4 + uVar9 & param_4[1]) * -0xf0;
        if (acStack_62[0] == *(char *)(lVar10 + -0xf0 + lVar16)) {
          lVar10 = lVar10 + lVar16;
          pdb_1409d3790(param_6,uStack_90,cVar2,*(undefined8 *)(lVar10 + -0x50),
                        *(undefined8 *)(lVar10 + -0x48));
          goto LAB_140ab51c4;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar22[0] = -(auVar1[0] == (char)iVar5);
      auVar22[1] = -(auVar1[1] == (char)((uint)iVar5 >> 8));
      auVar22[2] = -(auVar1[2] == (char)((uint)iVar5 >> 0x10));
      auVar22[3] = -(auVar1[3] == (char)((uint)iVar5 >> 0x18));
      auVar22[4] = -(auVar1[4] == (char)iVar6);
      auVar22[5] = -(auVar1[5] == (char)((uint)iVar6 >> 8));
      auVar22[6] = -(auVar1[6] == (char)((uint)iVar6 >> 0x10));
      auVar22[7] = -(auVar1[7] == (char)((uint)iVar6 >> 0x18));
      auVar22[8] = -(auVar1[8] == (char)iVar7);
      auVar22[9] = -(auVar1[9] == (char)((uint)iVar7 >> 8));
      auVar22[10] = -(auVar1[10] == (char)((uint)iVar7 >> 0x10));
      auVar22[0xb] = -(auVar1[0xb] == (char)((uint)iVar7 >> 0x18));
      auVar22[0xc] = -(auVar1[0xc] == (char)iVar8);
      auVar22[0xd] = -(auVar1[0xd] == (char)((uint)iVar8 >> 8));
      auVar22[0xe] = -(auVar1[0xe] == (char)((uint)iVar8 >> 0x10));
      auVar22[0xf] = -(auVar1[0xf] == (char)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar9 = uVar9 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  pcStack_e8 = pdb_140a593a0;
  pcStack_f0 = acStack_62;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14303dd85,&pcStack_f0,&UNK_14303dde0);
}

