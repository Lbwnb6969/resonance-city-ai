// VA 0x140b0d740, PDB extent 799 bytes
// country_core::startup::load_mesh_into_library_replacing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_mesh_into_library_replacing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod.rs
   Extent: 799 */

void pdb_140b0d740(undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  undefined8 uVar17;
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
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_40 = param_1;
  if (param_1[10] != 0) {
    uVar10 = pdb_1400af950(param_1 + 0xb,&DAT_143045cc8,0xc);
    pauVar11 = (undefined1 (*) [16])param_1[7];
    bVar18 = (byte)(uVar10 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar13 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar9 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar10 = uVar10 & param_1[8];
      pcVar1 = *pauVar11 + uVar10;
      auVar21[0] = -(*pcVar1 == auVar19[0]);
      auVar21[1] = -(pcVar1[1] == auVar19[1]);
      auVar21[2] = -(pcVar1[2] == auVar19[2]);
      auVar21[3] = -(pcVar1[3] == auVar19[3]);
      auVar21[4] = -(pcVar1[4] == auVar19[4]);
      auVar21[5] = -(pcVar1[5] == auVar19[5]);
      auVar21[6] = -(pcVar1[6] == auVar19[6]);
      auVar21[7] = -(pcVar1[7] == auVar19[7]);
      auVar21[8] = -(pcVar1[8] == auVar19[0]);
      auVar21[9] = -(pcVar1[9] == auVar19[1]);
      auVar21[10] = -(pcVar1[10] == auVar19[2]);
      auVar21[0xb] = -(pcVar1[0xb] == auVar19[3]);
      auVar21[0xc] = -(pcVar1[0xc] == auVar19[4]);
      auVar21[0xd] = -(pcVar1[0xd] == auVar19[5]);
      auVar21[0xe] = -(pcVar1[0xe] == auVar19[6]);
      auVar21[0xf] = -(pcVar1[0xf] == auVar19[7]);
      uVar15 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar16 = (uVar4 + uVar10 & param_1[8]) * -0x38;
        if ((*(longlong *)((longlong)pauVar11 + lVar16 + -0x28) == 0xc) &&
           (plVar2 = *(longlong **)((longlong)pauVar11 + lVar16 + -0x30),
           _DAT_143045cd0 == (int)plVar2[1] && _DAT_143045cc8 == *plVar2)) goto LAB_140b0d8df;
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar20[0] = -(*pcVar1 == (char)iVar6);
      auVar20[1] = -(pcVar1[1] == (char)((uint)iVar6 >> 8));
      auVar20[2] = -(pcVar1[2] == (char)((uint)iVar6 >> 0x10));
      auVar20[3] = -(pcVar1[3] == (char)((uint)iVar6 >> 0x18));
      auVar20[4] = -(pcVar1[4] == (char)iVar7);
      auVar20[5] = -(pcVar1[5] == (char)((uint)iVar7 >> 8));
      auVar20[6] = -(pcVar1[6] == (char)((uint)iVar7 >> 0x10));
      auVar20[7] = -(pcVar1[7] == (char)((uint)iVar7 >> 0x18));
      auVar20[8] = -(pcVar1[8] == (char)iVar8);
      auVar20[9] = -(pcVar1[9] == (char)((uint)iVar8 >> 8));
      auVar20[10] = -(pcVar1[10] == (char)((uint)iVar8 >> 0x10));
      auVar20[0xb] = -(pcVar1[0xb] == (char)((uint)iVar8 >> 0x18));
      auVar20[0xc] = -(pcVar1[0xc] == (char)iVar9);
      auVar20[0xd] = -(pcVar1[0xd] == (char)((uint)iVar9 >> 8));
      auVar20[0xe] = -(pcVar1[0xe] == (char)((uint)iVar9 >> 0x10));
      auVar20[0xf] = -(pcVar1[0xf] == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
    uStack_170 = _DAT_142e37950;
    uStack_168 = 0x3f800000;
    auVar19 = *pauVar11;
    uVar15 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar19[0xf] >> 7) << 0xf;
    pauVar12 = pauVar11;
    while (uVar14 = uVar15 ^ 0xffff, uVar14 == 0) {
      pauVar12 = pauVar12 + 1;
      auVar19 = *pauVar12;
      pauVar11 = pauVar11 + -0x38;
      uVar15 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar19[0xf] >> 7) << 0xf;
    }
    uVar4 = 0;
    for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    pdb_1415e43a0(&uStack_d8,&uStack_170,
                  *(undefined8 *)((longlong)pauVar11 + (ulonglong)uVar4 * -0x38 + -8));
    pdb_140c93200(puStack_40,&DAT_143045cc8,0xc,&uStack_d8);
    param_1 = puStack_40;
  }
LAB_140b0d8df:
  pdb_140a45de0(param_4,param_1);
  uStack_68 = puStack_40[0xe];
  uStack_60 = puStack_40[0xf];
  uStack_78 = puStack_40[0xc];
  uStack_70 = puStack_40[0xd];
  uStack_88 = puStack_40[10];
  uStack_80 = puStack_40[0xb];
  uStack_98 = puStack_40[8];
  uStack_90 = puStack_40[9];
  uStack_d8 = *puStack_40;
  uStack_d0 = puStack_40[1];
  uStack_c8 = *(undefined1 *)(puStack_40 + 2);
  uStack_c7 = *(undefined1 *)((longlong)puStack_40 + 0x11);
  uStack_c6 = *(undefined1 *)((longlong)puStack_40 + 0x12);
  uStack_c5 = *(undefined1 *)((longlong)puStack_40 + 0x13);
  uStack_c4 = *(undefined1 *)((longlong)puStack_40 + 0x14);
  uStack_c3 = *(undefined1 *)((longlong)puStack_40 + 0x15);
  uStack_c2 = *(undefined1 *)((longlong)puStack_40 + 0x16);
  uStack_c1 = *(undefined1 *)((longlong)puStack_40 + 0x17);
  uStack_c0 = *(undefined1 *)(puStack_40 + 3);
  uStack_bf = *(undefined1 *)((longlong)puStack_40 + 0x19);
  uStack_be = *(undefined1 *)((longlong)puStack_40 + 0x1a);
  uStack_bd = *(undefined1 *)((longlong)puStack_40 + 0x1b);
  uStack_bc = *(undefined1 *)((longlong)puStack_40 + 0x1c);
  uStack_bb = *(undefined1 *)((longlong)puStack_40 + 0x1d);
  uStack_ba = *(undefined1 *)((longlong)puStack_40 + 0x1e);
  uStack_b9 = *(undefined1 *)((longlong)puStack_40 + 0x1f);
  uStack_b8 = puStack_40[4];
  uStack_b0 = puStack_40[5];
  uStack_a8 = puStack_40[6];
  uStack_a0 = puStack_40[7];
  uStack_58 = 0x8000000000000000;
  if ((longlong)param_3 < 0) {
    uVar17 = 0;
LAB_140b0d956:
    pdb_142dc7e2a(uVar17,param_3);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_3 == 0) {
    pbStack_50 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar17 = 1;
    pbStack_50 = pub_1406abab0(param_3,1);
    if (pbStack_50 == (byte *)0x0) goto LAB_140b0d956;
    pub_142e32760(pbStack_50,param_2,param_3);
  }
  uStack_58 = param_3;
  uStack_48 = param_3;
  pub_142e32760(&uStack_170,&uStack_d8,0x98);
  pdb_140a2b4c0(param_5,&uStack_170);
  return;
}

