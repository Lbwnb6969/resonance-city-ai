// VA 0x1419bd050, PDB extent 1439 bytes
// country_core::startup::startup_window_cut_sdf::glade_startup_window_cut_sdf
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::startup_window_cut_sdf::glade_startup_window_cut_sdf
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
   Extent: 1439 */

void pdb_1419bd050(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  ushort uVar44;
  uint uVar45;
  undefined4 uVar46;
  byte *pbVar47;
  longlong *plVar48;
  longlong lVar49;
  ulonglong uVar50;
  undefined1 auVar51 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar52 [16];
  undefined1 auStack_2c0 [360];
  longlong lStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  ulonglong uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 *puStack_100;
  longlong lStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  cVar42 = UNK_142e34baf;
  cVar41 = UNK_142e34bae;
  cVar40 = UNK_142e34bad;
  cVar39 = UNK_142e34bac;
  cVar38 = UNK_142e34bab;
  cVar37 = UNK_142e34baa;
  cVar36 = UNK_142e34ba9;
  cVar35 = UNK_142e34ba8;
  cVar34 = UNK_142e34ba7;
  cVar33 = UNK_142e34ba6;
  cVar32 = UNK_142e34ba5;
  cVar31 = UNK_142e34ba4;
  cVar30 = UNK_142e34ba3;
  cVar29 = UNK_142e34ba2;
  cVar28 = UNK_142e34ba1;
  cVar27 = DAT_142e34ba0;
  uStack_80 = 0xfffffffffffffffe;
  lStack_88 = *param_2;
  uVar50 = 0xb72bf8a1cf8dd7b4;
  lStack_f8 = -0x48d4075e3072284c;
  if (*(longlong *)(lStack_88 + 0x60) != 0) {
    lVar2 = *(longlong *)(lStack_88 + 0x48);
    uVar3 = *(ulonglong *)(lStack_88 + 0x50);
    lVar49 = 0;
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    lStack_108 = param_3;
    while( true ) {
      uVar50 = uVar50 & uVar3;
      pcVar1 = (char *)(lVar2 + uVar50);
      cVar11 = *pcVar1;
      cVar12 = pcVar1[1];
      cVar13 = pcVar1[2];
      cVar14 = pcVar1[3];
      cVar15 = pcVar1[4];
      cVar16 = pcVar1[5];
      cVar17 = pcVar1[6];
      cVar18 = pcVar1[7];
      cVar19 = pcVar1[8];
      cVar20 = pcVar1[9];
      cVar21 = pcVar1[10];
      cVar22 = pcVar1[0xb];
      cVar23 = pcVar1[0xc];
      cVar24 = pcVar1[0xd];
      cVar25 = pcVar1[0xe];
      cVar26 = pcVar1[0xf];
      auVar51[0] = -(cVar11 == cVar27);
      auVar51[1] = -(cVar12 == cVar28);
      auVar51[2] = -(cVar13 == cVar29);
      auVar51[3] = -(cVar14 == cVar30);
      auVar51[4] = -(cVar15 == cVar31);
      auVar51[5] = -(cVar16 == cVar32);
      auVar51[6] = -(cVar17 == cVar33);
      auVar51[7] = -(cVar18 == cVar34);
      auVar51[8] = -(cVar19 == cVar35);
      auVar51[9] = -(cVar20 == cVar36);
      auVar51[10] = -(cVar21 == cVar37);
      auVar51[0xb] = -(cVar22 == cVar38);
      auVar51[0xc] = -(cVar23 == cVar39);
      auVar51[0xd] = -(cVar24 == cVar40);
      auVar51[0xe] = -(cVar25 == cVar41);
      auVar51[0xf] = -(cVar26 == cVar42);
      uVar44 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
      uVar45 = (uint)uVar44;
      param_3 = lStack_108;
      while (lStack_108 = param_3, uVar44 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar45; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        puStack_100 = param_1;
        cVar43 = pdb_140df4430(&lStack_f8,lVar2 + (uVar5 + uVar50 & uVar3) * -0x18 + -0x18);
        if (cVar43 != '\0') {
          return;
        }
        uVar44 = (ushort)(uVar45 - 1) & (ushort)uVar45;
        uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar44);
        param_1 = puStack_100;
        param_3 = lStack_108;
      }
      auVar52[0] = -(cVar11 == (char)iVar7);
      auVar52[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
      auVar52[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
      auVar52[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
      auVar52[4] = -(cVar15 == (char)iVar8);
      auVar52[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
      auVar52[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
      auVar52[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
      auVar52[8] = -(cVar19 == (char)iVar9);
      auVar52[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
      auVar52[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
      auVar52[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
      auVar52[0xc] = -(cVar23 == (char)iVar10);
      auVar52[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
      auVar52[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
      auVar52[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar52 >> 0x17,0) & 1) != 0) || (SUB161(auVar52 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar52 >> 0x27,0) & 1) != 0) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar52 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar52 >> 0x3f,0) & 1) != 0) || (SUB161(auVar52 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar52 >> 0x4f,0) & 1) != 0) || (SUB161(auVar52 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar52 >> 0x5f,0) & 1) != 0) || (SUB161(auVar52 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar52 >> 0x6f,0) & 1) != 0) || (SUB161(auVar52 >> 0x77,0) & 1) != 0) ||
          auVar52[0xf] < '\0') break;
      uVar50 = uVar50 + lVar49 + 0x10;
      lVar49 = lVar49 + 0x10;
    }
  }
  pdb_14007ee60();
  pbVar47 = pub_1406abab0(0x48000,1);
  if (pbVar47 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x48000);
  }
  else {
    uStack_a0 = 0x48000;
    uStack_90 = 0;
    pbStack_98 = pbVar47;
    pdb_14164ab40(auStack_2c0,&UNK_143360af8,&uStack_a0);
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar2 = *(longlong *)*param_1;
    uVar45 = pdb_140e1e0c0(0x80,0x80);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,3);
    lStack_f8 = (ulonglong)uVar45 << 0x20;
    pbStack_f0 = (byte *)0x10a010000010001;
    uVar46 = pdb_140e19210(0x12);
    pdb_140e1d540(&lStack_158,&lStack_f8,uVar46);
    pbStack_150 = (byte *)((ulonglong)pbStack_150 | 0x800000000);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_148);
    lStack_f8 = lStack_158;
    pbStack_f0 = pbStack_150;
    pdb_1415d5630(&lStack_158,lVar2 + 0x10,&UNK_143360b0a,0xe,&lStack_f8,1,pbStack_98,uStack_90);
    if ((int)lStack_158 != 0xb) {
      uStack_b8 = uStack_118;
      uStack_b0 = uStack_110;
      uStack_c8 = uStack_128;
      uStack_c4 = uStack_124;
      uStack_c0 = uStack_120;
      uStack_bc = uStack_11c;
      uStack_d8 = uStack_138;
      uStack_d4 = uStack_134;
      uStack_d0 = uStack_130;
      uStack_cc = uStack_12c;
      lStack_f8 = lStack_158;
      pbStack_f0 = pbStack_150;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143360f20,0x2b,&lStack_f8,&UNK_143360f00,&UNK_143360b18);
    }
    uStack_e0 = (ulonglong)pbStack_150;
    lStack_f8 = -0x8000000000000000;
    pdb_14007ee60();
    pbVar47 = pub_1406abab0(0xe,1);
    if (pbVar47 != (byte *)0x0) {
      pbVar47[6] = 0x5f;
      pbVar47[7] = 99;
      pbVar47[8] = 0x75;
      pbVar47[9] = 0x74;
      pbVar47[10] = 0x5f;
      pbVar47[0xb] = 0x73;
      pbVar47[0xc] = 100;
      pbVar47[0xd] = 0x66;
      pbVar47[0] = 0x77;
      pbVar47[1] = 0x69;
      pbVar47[2] = 0x6e;
      pbVar47[3] = 100;
      pbVar47[4] = 0x6f;
      pbVar47[5] = 0x77;
      pbVar47[6] = 0x5f;
      pbVar47[7] = 99;
      lStack_f8 = 0xe;
      uStack_e8 = 0xe;
      lStack_158 = 0xe;
      uStack_148 = 0xe;
      uStack_140 = uStack_e0;
      pbStack_150 = pbVar47;
      pbStack_f0 = pbVar47;
      pdb_140a2f260(lStack_88,&lStack_158);
      plVar48 = *(longlong **)(param_3 + 8);
      if (plVar48 == (longlong *)0x0) {
        plVar48 = *(longlong **)(param_3 + 0x10);
      }
      lVar2 = plVar48[2];
      if ((ulonglong)(*plVar48 - lVar2) < 0x170) {
        pdb_142d7f1b0(plVar48,lVar2,0x170,1,1);
      }
      lVar49 = plVar48[1];
      *(code **)(lVar49 + lVar2) = pdb_1416095b0;
      pub_142e32760(lVar49 + lVar2 + 8,auStack_2c0,0x168);
      plVar48[2] = lVar2 + 0x170;
      if (uStack_a0 != 0) {
        pub_1406abac0(pbStack_98,uStack_a0,1);
      }
      return;
    }
  }
  pdb_142dc7e2a(1,0xe);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

