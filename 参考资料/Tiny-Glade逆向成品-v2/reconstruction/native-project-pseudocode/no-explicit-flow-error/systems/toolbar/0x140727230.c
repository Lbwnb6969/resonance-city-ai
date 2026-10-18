// VA 0x140727230, PDB extent 5995 bytes
// toolbar::mei::widgets::impl$9::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$9::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 5995 */

undefined4 * pdb_140727230(undefined4 *param_1,longlong param_2,uint *****param_3)

{
  byte *pbVar1;
  uint ****ppppuVar2;
  uint *****arg0;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  float fVar26;
  longlong lVar27;
  char cVar28;
  ushort uVar29;
  undefined4 uVar30;
  int iVar31;
  longlong lVar32;
  undefined8 uVar33;
  byte *pbVar34;
  uint *****pppppuVar35;
  uint uVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint *****pppppuVar39;
  uint ****ppppuVar40;
  uint ****ppppuVar41;
  bool bVar42;
  byte bVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
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
  undefined1 auVar48 [16];
  uint ****ppppuStack_248;
  uint ****ppppuStack_240;
  uint ****ppppuStack_238;
  uint ****ppppuStack_230;
  uint ****ppppuStack_228;
  uint ***pppuStack_220;
  uint ****ppppuStack_218;
  uint ****ppppuStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  ulonglong uStack_1f8;
  longlong lStack_1f0;
  uint ****ppppuStack_1e8;
  uint ****ppppuStack_1e0;
  uint ****ppppuStack_1d8;
  uint ****ppppuStack_1d0;
  uint ****ppppuStack_1c8;
  uint ****ppppuStack_1c0;
  ulonglong uStack_1b0;
  uint ****ppppuStack_1a8;
  uint ****ppppuStack_1a0;
  uint ****ppppuStack_198;
  uint ****ppppuStack_190;
  uint ****ppppuStack_188;
  uint ****ppppuStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined *puStack_168;
  uint ****ppppuStack_160;
  uint ****ppppuStack_158;
  uint ****ppppuStack_150;
  uint ****ppppuStack_148;
  uint ****ppppuStack_140;
  uint ****ppppuStack_138;
  uint ****ppppuStack_130;
  uint ****ppppuStack_128;
  uint ****ppppuStack_120;
  undefined *puStack_118;
  uint ****ppppuStack_110;
  undefined *puStack_108;
  uint ****ppppuStack_f8;
  uint ****ppppuStack_f0;
  uint ****ppppuStack_e8;
  uint ****ppppuStack_e0;
  uint ****ppppuStack_d8;
  uint ****ppppuStack_d0;
  uint ****ppppuStack_c8;
  uint ****ppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  uint ****ppppuStack_a0;
  uint ****ppppuStack_98;
  uint ****ppppuStack_90;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  ppppuVar40 = *(uint *****)(param_2 + 8);
  pppppuVar35 = *(uint ******)(param_2 + 0x10);
  if (pppppuVar35 < (uint *****)0x5) {
LAB_1407272ab:
    param_3 = (uint *****)param_3[2];
    lVar32 = pdb_140df4400(ppppuVar40,pppppuVar35);
    uVar33 = pdb_140a2f130(param_3);
    if (lVar32 != 0) {
      uVar30 = pdb_140a2ec70(param_3,uVar33);
      lVar32 = pdb_140e17390(lVar32);
      uVar36 = *(uint *)(lVar32 + 0x84);
      goto LAB_1407272ed;
    }
    pdb_142dc8110(ppppuVar40,pppppuVar35,&UNK_142fa5fb0);
LAB_140727618:
    pdb_142dce870(0x143ca3448,0x143ca3448);
    LOCK();
    bVar42 = DAT_143ca3450 == '\0';
    if (bVar42) {
      DAT_143ca3450 = '\x01';
    }
    UNLOCK();
    if (!bVar42) goto LAB_140727639;
LAB_140727504:
    pdb_140e9a150(&DAT_143ca3450);
  }
  else {
    uVar36 = *(uint *)ppppuVar40;
    uVar36 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 | uVar36 << 0x18;
    if (uVar36 == 0x66696c65) {
      if (*(char *)((longlong)ppppuVar40 + 4) != ':') goto LAB_1407272ab;
    }
    else if (((uVar36 < 0x66696c66) - 1 | 1) != 0) goto LAB_1407272ab;
    pppppuVar35 = (uint *****)((longlong)pppppuVar35 + -5);
    ppppuVar40 = (uint ****)((longlong)ppppuVar40 + 5);
    pppuStack_220 = (uint ***)ppppuVar40;
    ppppuStack_218 = (uint ****)pppppuVar35;
    if (_DAT_143ca3488 != 2) goto LAB_140727618;
    LOCK();
    bVar42 = DAT_143ca3450 == '\0';
    if (bVar42) {
      DAT_143ca3450 = '\x01';
    }
    UNLOCK();
    if (bVar42) goto LAB_140727504;
LAB_140727639:
    pdb_142dbd1a0(&DAT_143ca3450);
    pdb_140e9a150(&DAT_143ca3450);
  }
  lVar32 = lStack_1f0;
  ppppuVar2 = ppppuStack_98;
  if (_DAT_143ca3470 != 0) {
    ppppuStack_90 = (uint ****)param_3;
    pbVar34 = (byte *)pdb_1400af950(0x143ca3478,ppppuVar40);
    lVar27 = _DAT_143ca3458;
    bVar43 = (byte)((ulonglong)pbVar34 >> 0x39);
    auVar46 = ZEXT216(CONCAT11(bVar43,bVar43));
    auVar46 = pshuflw(auVar46,auVar46,0);
    lVar38 = 0;
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
    uVar37 = _DAT_143ca3460;
    while( true ) {
      pbVar1 = (byte *)((ulonglong)pbVar34 & uVar37) + lVar27;
      bVar43 = *pbVar1;
      bVar11 = pbVar1[1];
      bVar12 = pbVar1[2];
      bVar13 = pbVar1[3];
      bVar14 = pbVar1[4];
      bVar15 = pbVar1[5];
      bVar16 = pbVar1[6];
      bVar17 = pbVar1[7];
      bVar18 = pbVar1[8];
      bVar19 = pbVar1[9];
      bVar20 = pbVar1[10];
      bVar21 = pbVar1[0xb];
      bVar22 = pbVar1[0xc];
      bVar23 = pbVar1[0xd];
      bVar24 = pbVar1[0xe];
      bVar25 = pbVar1[0xf];
      auVar47[0] = -(bVar43 == auVar46[0]);
      auVar47[1] = -(bVar11 == auVar46[1]);
      auVar47[2] = -(bVar12 == auVar46[2]);
      auVar47[3] = -(bVar13 == auVar46[3]);
      auVar47[4] = -(bVar14 == auVar46[4]);
      auVar47[5] = -(bVar15 == auVar46[5]);
      auVar47[6] = -(bVar16 == auVar46[6]);
      auVar47[7] = -(bVar17 == auVar46[7]);
      auVar47[8] = -(bVar18 == auVar46[0]);
      auVar47[9] = -(bVar19 == auVar46[1]);
      auVar47[10] = -(bVar20 == auVar46[2]);
      auVar47[0xb] = -(bVar21 == auVar46[3]);
      auVar47[0xc] = -(bVar22 == auVar46[4]);
      auVar47[0xd] = -(bVar23 == auVar46[5]);
      auVar47[0xe] = -(bVar24 == auVar46[6]);
      auVar47[0xf] = -(bVar25 == auVar46[7]);
      uVar29 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
      uVar36 = (uint)uVar29;
      ppppuVar41 = (uint ****)((ulonglong)pbVar34 & uVar37);
      lVar32 = lStack_1f0;
      ppppuVar2 = ppppuStack_98;
      param_3 = (uint *****)ppppuStack_90;
      while (lStack_1f0 = lVar38, ppppuStack_98 = ppppuVar41, ppppuStack_90 = (uint ****)param_3,
            uVar29 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar36; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar32 = lVar27 + ((ulonglong)((longlong)ppppuStack_98 + (ulonglong)uVar4) & uVar37) * -0x20
        ;
        uStack_1b0 = uVar37;
        if ((pppppuVar35 == *(uint ******)(lVar32 + -0x10)) &&
           (iVar31 = pub_142e32750(ppppuVar40,*(undefined8 *)(lVar32 + -0x18),pppppuVar35),
           iVar31 == 0)) {
          uVar30 = *(undefined4 *)(lVar32 + -8);
          uVar36 = *(uint *)(lVar32 + -4);
          goto LAB_140727d91;
        }
        uVar29 = (ushort)(uVar36 - 1) & (ushort)uVar36;
        uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar29);
        ppppuVar41 = ppppuStack_98;
        uVar37 = uStack_1b0;
        lVar38 = lStack_1f0;
        lVar32 = lStack_1f0;
        ppppuVar2 = ppppuStack_98;
        param_3 = (uint *****)ppppuStack_90;
      }
      auVar48[0] = -(bVar43 == (byte)iVar7);
      auVar48[1] = -(bVar11 == (byte)((uint)iVar7 >> 8));
      auVar48[2] = -(bVar12 == (byte)((uint)iVar7 >> 0x10));
      auVar48[3] = -(bVar13 == (byte)((uint)iVar7 >> 0x18));
      auVar48[4] = -(bVar14 == (byte)iVar8);
      auVar48[5] = -(bVar15 == (byte)((uint)iVar8 >> 8));
      auVar48[6] = -(bVar16 == (byte)((uint)iVar8 >> 0x10));
      auVar48[7] = -(bVar17 == (byte)((uint)iVar8 >> 0x18));
      auVar48[8] = -(bVar18 == (byte)iVar9);
      auVar48[9] = -(bVar19 == (byte)((uint)iVar9 >> 8));
      auVar48[10] = -(bVar20 == (byte)((uint)iVar9 >> 0x10));
      auVar48[0xb] = -(bVar21 == (byte)((uint)iVar9 >> 0x18));
      auVar48[0xc] = -(bVar22 == (byte)iVar10);
      auVar48[0xd] = -(bVar23 == (byte)((uint)iVar10 >> 8));
      auVar48[0xe] = -(bVar24 == (byte)((uint)iVar10 >> 0x10));
      auVar48[0xf] = -(bVar25 == (byte)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar48 >> 0x17,0) & 1) != 0) || (SUB161(auVar48 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar48 >> 0x27,0) & 1) != 0) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar48 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar48 >> 0x3f,0) & 1) != 0) || (SUB161(auVar48 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar48 >> 0x4f,0) & 1) != 0) || (SUB161(auVar48 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar48 >> 0x5f,0) & 1) != 0) || (SUB161(auVar48 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar48 >> 0x6f,0) & 1) != 0) || (SUB161(auVar48 >> 0x77,0) & 1) != 0) ||
          auVar48[0xf] < '\0') break;
      pbVar34 = (byte *)((longlong)ppppuStack_98 + lStack_1f0 + 0x10);
      lVar38 = lStack_1f0 + 0x10;
      lStack_1f0 = lVar32;
      ppppuStack_98 = ppppuVar2;
    }
  }
  ppppuStack_98 = ppppuVar2;
  lStack_1f0 = lVar32;
  if (3 < *_DAT_143ca8e90) {
    pppppuVar39 = pppppuVar35;
    ppppuStack_1a8 = (uint ****)pdb_140f3ecf0(ppppuVar40);
    if ((uint *****)ppppuStack_1a8 == (uint *****)0x0) {
      pppppuVar39 = (uint *****)0x3;
      ppppuStack_1a8 = (uint ****)&UNK_142fa5eea;
    }
    ppppuStack_158 = (uint ****)&ppppuStack_1a8;
    ppppuStack_150 = (uint ****)pdb_140117670;
    ppppuStack_f8 = (uint ****)0x0;
    ppppuStack_f0 = (uint ****)&UNK_142fa5f0b;
    ppppuStack_e8 = (uint ****)0x15;
    ppppuStack_e0 = (uint ****)0x0;
    ppppuStack_d8 = (uint ****)&UNK_142fa5ec0;
    ppppuStack_d0 = (uint ****)0x29;
    ppppuStack_c8 = (uint ****)0x4;
    ppppuStack_c0 = (uint ****)&UNK_142fa5f0b;
    uStack_b8 = (undefined *)0x15;
    uStack_b0 = (uint *****)0x24a00000001;
    puStack_a8 = &UNK_142fa5eed;
    ppppuStack_a0 = (uint ****)&ppppuStack_158;
    ppppuStack_1a0 = (uint ****)pppppuVar39;
    pdb_140f332f0(&uStack_82,&ppppuStack_f8);
  }
  pdb_140da3220(&ppppuStack_158,ppppuVar40,pppppuVar35);
  if ((uint *****)ppppuStack_158 == (uint *****)0x2) {
    ppppuStack_1a8 = (uint ****)0x8000000000000009;
    ppppuStack_1a0 = ppppuStack_150;
LAB_140727944:
    ppppuStack_138 = ppppuStack_188;
    ppppuStack_130 = ppppuStack_180;
    ppppuStack_148 = ppppuStack_198;
    ppppuStack_140 = ppppuStack_190;
    ppppuStack_158 = ppppuStack_1a8;
    ppppuStack_150 = ppppuStack_1a0;
    uStack_83 = 1;
    pdb_140f3f5b0(&ppppuStack_f8);
    ppppuStack_1c8 = ppppuStack_d8;
    ppppuStack_1c0 = ppppuStack_d0;
    ppppuStack_1d8 = ppppuStack_e8;
    ppppuStack_1d0 = ppppuStack_e0;
    ppppuStack_1e8 = ppppuStack_f8;
    ppppuStack_1e0 = ppppuStack_f0;
    uStack_b8 = (undefined *)CONCAT44(uStack_174,uStack_178);
    uStack_b0 = (uint *****)CONCAT44(uStack_16c,uStack_170);
    ppppuStack_c8 = ppppuStack_188;
    ppppuStack_c0 = ppppuStack_180;
    ppppuStack_d8 = ppppuStack_198;
    ppppuStack_d0 = ppppuStack_190;
    ppppuStack_e8 = ppppuStack_1a8;
    ppppuStack_e0 = ppppuStack_1a0;
    ppppuStack_f8 = (uint ****)&UNK_142fa5f20;
    ppppuStack_f0 = (uint ****)0x16;
    uStack_83 = 0;
    pppppuVar39 = (uint *****)pdb_142dceae0(&ppppuStack_f8,&ppppuStack_1e8);
LAB_140727a30:
    ppppuStack_f8 = &pppuStack_220;
    ppppuStack_f0 = (uint ****)pdb_1402ed420;
    ppppuStack_e8 = (uint ****)&ppppuStack_1e8;
    ppppuStack_e0 = (uint ****)pdb_140f36c20;
    ppppuStack_1e8 = (uint ****)pppppuVar39;
    pdb_140f60760(&ppppuStack_158,&UNK_142fa5f36,&ppppuStack_f8);
    ppppuStack_1a8 = ppppuStack_158;
    ppppuStack_1a0 = ppppuStack_150;
    ppppuStack_198 = ppppuStack_148;
    if (_DAT_143ca3440 != 0) {
      ppppuStack_158 = (uint ****)CONCAT71(ppppuStack_158._1_7_,1);
      ppppuStack_f8 = (uint ****)&ppppuStack_158;
      pdb_142dc7060(&DAT_143ca3440,0,&ppppuStack_f8,&UNK_142fa5db8,&UNK_142fa5f50);
    }
    pdb_1400f0d40(&ppppuStack_f8,_DAT_143cb2c10);
    if ((int)ppppuStack_f8 == 1) {
      ppppuStack_158 = ppppuStack_f0;
      ppppuStack_150 = (uint ****)CONCAT71(ppppuStack_150._1_7_,ppppuStack_e8._0_1_);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142fa5f68,0x13,&ppppuStack_158,&UNK_142fa5e68,&UNK_142fa5f50);
    }
    ppppuStack_90 = ppppuStack_f0;
    ppppuStack_98 = (uint ****)CONCAT71(ppppuStack_98._1_7_,ppppuStack_e8._0_1_);
    pdb_14007ee60();
    pppppuVar35 = (uint *****)pub_1406abab0(0xf,1);
    if (pppppuVar35 == (uint *****)0x0) {
      pdb_142dc7e2a(1,0xf);
      goto LAB_1407281ee;
    }
    pbVar34 = (byte *)((longlong)pppppuVar35 + 7);
    pbVar34[0] = 0x70;
    pbVar34[1] = 0x61;
    pbVar34[2] = 0x74;
    pbVar34[3] = 0x68;
    pbVar34[4] = 0x21;
    pbVar34[5] = 0x20;
    pbVar34[6] = 0x28;
    pbVar34[7] = 0x29;
    *pppppuVar35 = (uint ****)0x705f656c75646f6d;
    ppppuStack_f8 = (uint ****)0xf;
    ppppuStack_e8 = (uint ****)0xf;
    ppppuStack_f0 = (uint ****)pppppuVar35;
    pdb_142d7f1b0(&ppppuStack_f8,0xf,0x18,1,1);
    ppppuVar2 = ppppuStack_198;
    ppppuVar40 = ppppuStack_1a0;
    uVar33 = _UNK_142fa5f83;
    *(undefined8 *)((longlong)ppppuStack_f0 + (longlong)ppppuStack_e8) = _DAT_142fa5f7b;
    *(undefined8 *)((byte *)((longlong)ppppuStack_f0 + (longlong)ppppuStack_e8) + 8) = uVar33;
    pbVar34 = (byte *)((longlong)ppppuStack_f0 + (longlong)ppppuStack_e8 + 0x10);
    pbVar34[0] = 0x3a;
    pbVar34[1] = 0x3a;
    pbVar34[2] = 0x20;
    pbVar34[3] = 0x45;
    pbVar34[4] = 0x72;
    pbVar34[5] = 0x72;
    pbVar34[6] = 0x6f;
    pbVar34[7] = 0x72;
    ppppuVar41 = (uint ****)((longlong)ppppuStack_e8 + 0x18);
    ppppuStack_158 = ppppuStack_f8;
    ppppuStack_150 = ppppuStack_f0;
    ppppuStack_148 = ppppuVar41;
    if ((uint *****)((longlong)ppppuStack_f8 - (longlong)ppppuVar41) < ppppuStack_198) {
      pdb_142d7f1b0(&ppppuStack_158,ppppuVar41,ppppuStack_198,1,1);
LAB_140727bd2:
      ppppuVar41 = ppppuStack_148;
      pub_142e32760((byte *)((longlong)ppppuStack_150 + (longlong)ppppuStack_148),ppppuVar40,
                    ppppuVar2);
    }
    else if ((uint *****)ppppuStack_198 != (uint *****)0x0) goto LAB_140727bd2;
    ppppuStack_148 = (uint ****)((longlong)ppppuVar2 + (longlong)ppppuVar41);
    ppppuStack_f8 = ppppuStack_158;
    ppppuStack_f0 = ppppuStack_150;
    ppppuStack_e8 = ppppuStack_148;
    cVar28 = pdb_14119e4c0(ppppuStack_90 + 1,&ppppuStack_f8);
    if ((cVar28 == '\0') && (*_DAT_143ca8e90 != 0)) {
      ppppuStack_158 = (uint ****)&ppppuStack_1a8;
      ppppuStack_150 = (uint ****)pdb_140001020;
      ppppuStack_f8 = (uint ****)0x0;
      ppppuStack_f0 = (uint ****)&UNK_142fa5f0b;
      ppppuStack_e8 = (uint ****)0x15;
      ppppuStack_e0 = (uint ****)0x0;
      ppppuStack_d8 = (uint ****)&UNK_142fa5ec0;
      ppppuStack_d0 = (uint ****)0x29;
      ppppuStack_c8 = (uint ****)0x1;
      ppppuStack_c0 = (uint ****)&UNK_142fa5f0b;
      uStack_b8 = (undefined *)0x15;
      uStack_b0 = (uint *****)0x27400000001;
      puStack_a8 = &UNK_142fa5f93;
      ppppuStack_a0 = (uint ****)&ppppuStack_158;
      pdb_140f332f0(&uStack_82,&ppppuStack_f8);
    }
    if ((((char)ppppuStack_98 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
       (cVar28 = pdb_142dc79e0(), cVar28 == '\0')) {
      *(byte *)((longlong)ppppuStack_90 + 1) = 1;
    }
    LOCK();
    bVar43 = *(byte *)ppppuStack_90;
    *(byte *)ppppuStack_90 = 0;
    UNLOCK();
    if (bVar43 == 2) {
      pdb_142dc6ca0();
    }
    if ((uint *****)ppppuStack_1a8 != (uint *****)0x0) {
      pub_1406abac0((byte *)ppppuStack_1a0,(ulonglong)ppppuStack_1a8,1);
    }
    ppppuVar40 = param_3[2];
    lVar32 = -0x7f93d644083afcf3;
    uVar33 = pdb_140a2f130(ppppuVar40);
    if (lVar32 == 0) {
      pdb_142dc8110(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&UNK_142fa5f98);
LAB_1407281ee:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar30 = pdb_140a2ec70(ppppuVar40,uVar33);
    lVar32 = pdb_140e17390(lVar32);
    uVar36 = *(uint *)(lVar32 + 0x84);
    pdb_140f36c40(&ppppuStack_1e8);
  }
  else {
    puStack_a8 = puStack_108;
    uStack_b8 = puStack_118;
    uStack_b0 = (uint *****)ppppuStack_110;
    ppppuStack_c8 = ppppuStack_128;
    ppppuStack_c0 = ppppuStack_120;
    ppppuStack_d8 = ppppuStack_138;
    ppppuStack_d0 = ppppuStack_130;
    ppppuStack_e8 = ppppuStack_148;
    ppppuStack_e0 = ppppuStack_140;
    ppppuStack_f8 = ppppuStack_158;
    ppppuStack_f0 = ppppuStack_150;
    pdb_14119c4d0(&ppppuStack_1a8,&ppppuStack_f8);
    if ((uint *****)ppppuStack_1a8 != (uint *****)0x800000000000000a) goto LAB_140727944;
    pppppuVar39 = (uint *****)ppppuStack_198;
    if ((uint *****)ppppuStack_1a0 == (uint *****)0xa) goto LAB_140727a30;
    ppppuVar2 = param_3[1];
    ppppuStack_248 = ppppuStack_1a0;
    ppppuStack_240 = ppppuStack_198;
    ppppuStack_238 = ppppuStack_190;
    ppppuStack_230 = ppppuStack_188;
    ppppuStack_228 = ppppuStack_180;
    pdb_140daccf0(&ppppuStack_210,&ppppuStack_248);
    uStack_1b0 = uStack_1f8;
    if ((uStack_1f8 & 0xffff0000ffff0000) != 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1432a1d58,0x2b,&uStack_82,&UNK_1432a1d38,&UNK_1432a1dd8);
    }
    ppppuStack_f8 = (uint ****)((ulonglong)((uint)(uStack_1f8 >> 0x10) | (uint)uStack_1f8) << 0x20);
    ppppuStack_f0 = (uint ****)0x12b010800010001;
    ppppuStack_e8 = (uint ****)CONCAT71(ppppuStack_e8._1_7_,2);
    ppppuStack_90 = ppppuStack_210;
    ppppuStack_98 = (uint ****)pbStack_208;
    pdb_14119cd30(&ppppuStack_1a8,ppppuVar2,&UNK_142fa5fe8,0xb,&ppppuStack_f8,pbStack_208,uStack_200
                 );
    ppppuVar2 = ppppuStack_1a8;
    pppppuVar39 = (uint *****)ppppuStack_1a0;
    if ((uint *****)ppppuStack_1a8 != (uint *****)0xb) {
      puStack_118 = puStack_168;
      ppppuStack_110 = ppppuStack_160;
      ppppuStack_138 = ppppuStack_188;
      ppppuStack_130 = ppppuStack_180;
      ppppuStack_148 = ppppuStack_198;
      ppppuStack_140 = ppppuStack_190;
      ppppuStack_158 = ppppuStack_1a8;
      ppppuStack_150 = ppppuStack_1a0;
      uStack_84 = 1;
      pdb_140f3f5b0(&ppppuStack_f8);
      ppppuStack_1c8 = ppppuStack_d8;
      ppppuStack_1c0 = ppppuStack_d0;
      ppppuStack_1d8 = ppppuStack_e8;
      ppppuStack_1d0 = ppppuStack_e0;
      ppppuStack_1e8 = ppppuStack_f8;
      ppppuStack_1e0 = ppppuStack_f0;
      puStack_a8 = puStack_168;
      ppppuStack_a0 = ppppuStack_160;
      uStack_b8 = (undefined *)CONCAT44(uStack_174,uStack_178);
      uStack_b0 = (uint *****)CONCAT44(uStack_16c,uStack_170);
      ppppuStack_c8 = ppppuStack_188;
      ppppuStack_c0 = ppppuStack_180;
      ppppuStack_d8 = ppppuStack_198;
      ppppuStack_d0 = ppppuStack_190;
      ppppuStack_e8 = ppppuStack_1a8;
      ppppuStack_e0 = ppppuStack_1a0;
      ppppuStack_f8 = (uint ****)&UNK_142fa5ff3;
      ppppuStack_f0 = (uint ****)0x12;
      uStack_84 = 0;
      pppppuVar39 = (uint *****)pdb_142dcebc0(&ppppuStack_f8,&ppppuStack_1e8);
    }
    if ((uint *****)ppppuStack_90 != (uint *****)0x0) {
      pub_1406abac0((byte *)ppppuStack_98,(ulonglong)ppppuStack_90,1);
    }
    pdb_140725890(&ppppuStack_248);
    if ((int)ppppuVar2 != 0xb) goto LAB_140727a30;
    uStack_81 = 1;
    ppppuStack_1a8 = (uint ****)pppppuVar39;
    lVar32 = pdb_140e17390(&ppppuStack_1a8);
    uVar36 = *(uint *)(lVar32 + 0x84);
    ppppuStack_90 = param_3[2];
    ppppuStack_f8 = (uint ****)0x8000000000000000;
    arg0 = *(uint ******)(param_2 + 0x10);
    ppppuStack_e0 = (uint ****)pppppuVar39;
    if ((longlong)arg0 < 0) {
      uVar33 = 0;
LAB_140727f40:
      pdb_142dc7e2a(uVar33,arg0);
      goto LAB_1407281ee;
    }
    if (arg0 == (uint *****)0x0) {
      pppppuVar39 = (uint *****)0x1;
    }
    else {
      ppppuStack_98 = *(uint *****)(param_2 + 8);
      pdb_14007ee60();
      pppppuVar39 = (uint *****)pub_1406abab0((ulonglong)arg0,1);
      uVar33 = 1;
      if (pppppuVar39 == (uint *****)0x0) goto LAB_140727f40;
      pub_142e32760(pppppuVar39,ppppuStack_98,arg0);
    }
    ppppuVar2 = ppppuStack_90;
    ppppuStack_140 = ppppuStack_e0;
    uStack_81 = 0;
    ppppuStack_158 = (uint ****)arg0;
    ppppuStack_150 = (uint ****)pppppuVar39;
    ppppuStack_148 = (uint ****)arg0;
    ppppuStack_f8 = (uint ****)arg0;
    ppppuStack_f0 = (uint ****)pppppuVar39;
    ppppuStack_e8 = (uint ****)arg0;
    uVar33 = pdb_140a2f260(ppppuStack_90,&ppppuStack_158);
    uStack_81 = 0;
    uVar30 = pdb_140a2ec70(ppppuVar2,uVar33);
    if ((longlong)pppppuVar35 < 0) {
      uVar33 = 0;
LAB_140728023:
      uStack_81 = 0;
      pdb_142dc7e2a(uVar33,pppppuVar35);
      goto LAB_1407281ee;
    }
    if (pppppuVar35 == (uint *****)0x0) {
      pppppuVar39 = (uint *****)0x1;
    }
    else {
      pdb_14007ee60();
      pppppuVar39 = (uint *****)pub_1406abab0((ulonglong)pppppuVar35,1);
      uVar33 = 1;
      if (pppppuVar39 == (uint *****)0x0) goto LAB_140728023;
      pub_142e32760(pppppuVar39,ppppuVar40,pppppuVar35);
    }
    uStack_81 = 0;
    ppppuStack_f8 = (uint ****)pppppuVar35;
    ppppuStack_f0 = (uint ****)pppppuVar39;
    ppppuStack_e8 = (uint ****)pppppuVar35;
    pdb_1411a3750(&ppppuStack_158,&DAT_143ca3458,&ppppuStack_f8,CONCAT44(uVar36,uVar30));
  }
LAB_140727d91:
  pdb_140e9a350();
  LOCK();
  bVar42 = DAT_143ca3450 == '\x01';
  if (bVar42) {
    DAT_143ca3450 = '\0';
  }
  UNLOCK();
  if (!bVar42) {
    pdb_142dbcef0(&DAT_143ca3450,0);
  }
LAB_1407272ed:
  fVar44 = *(float *)(param_2 + 0x18) / (float)(uVar36 >> 0x10);
  fVar6 = fVar44 * (float)(uVar36 & 0xffff);
  fVar44 = fVar44 * (float)(uVar36 >> 0x10);
  *(ulonglong *)(param_2 + 0x38) =
       CONCAT17((char)((uint)fVar44 >> 0x18),
                CONCAT16((char)((uint)fVar44 >> 0x10),
                         CONCAT15((char)((uint)fVar44 >> 8),CONCAT14(SUB41(fVar44,0),fVar6))));
  pdb_14043b7d0(param_2 + 0x20);
  pdb_140a1aa60(&ppppuStack_158);
  cVar28 = *(char *)(param_2 + 0x44);
  pdb_140cb8eb0(&ppppuStack_f8,uVar30);
  ppppuVar2 = ppppuStack_e8;
  ppppuVar40 = ppppuStack_148;
  ppppuStack_90 = ppppuStack_f8;
  ppppuStack_98 = ppppuStack_f0;
  if (ppppuStack_148 == ppppuStack_158) {
    pdb_142d7e6e0(&ppppuStack_158);
  }
  ppppuStack_150[(longlong)ppppuVar40 * 4] = (uint ***)ppppuStack_90;
  ppppuStack_150[(longlong)ppppuVar40 * 4 + 1] = (uint ***)ppppuStack_98;
  ppppuStack_150[(longlong)ppppuVar40 * 4 + 2] = (uint ***)ppppuVar2;
  *(char *)(ppppuStack_150 + (longlong)ppppuVar40 * 4 + 3) = cVar28 * '\x02';
  ppppuStack_e8 = (uint ****)((longlong)ppppuVar40 + 1);
  ppppuStack_f8 = ppppuStack_158;
  ppppuStack_f0 = ppppuStack_150;
  pdb_140cb8ed0(&ppppuStack_158,&ppppuStack_f8,*(undefined4 *)(param_2 + 0x40));
  pdb_140cb9100(param_2 + 0x20,&ppppuStack_158,1,&UNK_142fa5fc8);
  ppppuVar40 = ppppuStack_150;
  if ((uint *****)ppppuStack_148 != (uint *****)0x0) {
    pppppuVar35 = (uint *****)(ppppuStack_150 + 1);
    pppppuVar39 = (uint *****)ppppuStack_148;
    do {
      ppppuVar2 = pppppuVar35[-1];
      if ((-1 < (longlong)ppppuVar2) && (ppppuVar2 != (uint ****)0x0)) {
        pub_1406abac0((byte *)*pppppuVar35,(ulonglong)ppppuVar2,1);
      }
      pppppuVar35 = pppppuVar35 + 4;
      pppppuVar39 = (uint *****)((longlong)pppppuVar39 + -1);
    } while (pppppuVar39 != (uint *****)0x0);
  }
  if ((uint *****)ppppuStack_158 != (uint *****)0x0) {
    pub_1406abac0((byte *)ppppuVar40,(longlong)ppppuStack_158 << 5,8);
  }
  fVar45 = 0.0;
  fVar26 = 0.0;
  if (*(char *)(param_2 + 0x1c) == '\0') {
    fVar45 = fVar44;
    fVar26 = fVar6;
  }
  *param_1 = 0;
  param_1[1] = fVar26;
  param_1[2] = 0;
  param_1[3] = fVar45;
  return param_1;
}

