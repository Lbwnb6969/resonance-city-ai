// VA 0x140aa0880, PDB extent 2191 bytes
// country_core::startup::load_textures::reload_packaged_textures_by_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_textures::reload_packaged_textures_by_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
   Extent: 2191 */

longlong * pdb_140aa0880(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  char cVar10;
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
  longlong lVar25;
  ushort uVar26;
  int iVar27;
  int iVar28;
  longlong *plVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  byte *pbVar32;
  longlong lVar33;
  undefined *puVar34;
  longlong lVar35;
  uint uVar36;
  byte *pbVar37;
  byte *pbVar38;
  longlong lVar39;
  longlong lVar40;
  undefined8 uVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  undefined1 auVar45 [16];
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  byte *pbStack_160;
  longlong lStack_158;
  byte *pbStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  byte *pbStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong *plStack_120;
  byte *pbStack_118;
  longlong lStack_110;
  longlong lStack_108;
  byte *pbStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  longlong lStack_e8;
  byte *pbStack_e0;
  longlong lStack_d8;
  byte *pbStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined *puStack_b0;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lStack_148 = param_2;
  if (param_4[3] == 0) {
    plVar29 = (longlong *)pdb_140f3bda0();
    if ((char)plVar29[2] == '\x01') {
      lVar39 = *plVar29;
      param_2 = plVar29[1];
    }
    else {
      lVar39 = pdb_140f4fd10();
      *plVar29 = lVar39;
      plVar29[1] = param_2;
      *(undefined1 *)(plVar29 + 2) = 1;
    }
    *plVar29 = lVar39 + 1;
    lVar40 = _UNK_143046aa8;
    param_1[2] = _DAT_143046aa0;
    param_1[3] = lVar40;
    pbVar38 = _UNK_143046a98;
    *param_1 = _DAT_143046a90;
    param_1[1] = (longlong)pbVar38;
    param_1[4] = lVar39;
    param_1[5] = param_2;
    return param_1;
  }
  puVar34 = &UNK_143046310;
  pdb_1417fc060(&lStack_d8,&UNK_143046310,0x1f);
  lVar39 = lStack_c8;
  if (SBORROW8(0,lStack_d8)) {
    pbStack_a0 = pbStack_d0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143046548,0xf,&pbStack_a0,&UNK_143046ad0,&UNK_143046958);
  }
  lStack_158 = lStack_c8;
  lStack_168 = lStack_d8;
  pbStack_160 = pbStack_d0;
  uStack_130 = param_3;
  if (lStack_c8 != 0) {
    pbVar37 = pbStack_d0 + lStack_c8 * 0x40;
    pbStack_e0 = pbStack_d0;
    pbVar38 = pbStack_d0;
    do {
      plVar29 = (longlong *)pdb_14043b7e0(pbVar38 + 0x10);
      if (((puVar34 == (undefined *)0xc) &&
          ((int)plVar29[1] == 0x7473696c && *plVar29 == 0x2d65727574786574)) &&
         (*(longlong *)(pbVar38 + 0x38) == 0x25)) {
        puVar34 = &DAT_14333e441;
        iVar27 = pub_142e32750(*(undefined8 *)(pbVar38 + 0x30),&DAT_14333e441,0x25);
        if (iVar27 == 0) {
          puVar34 = &UNK_143046310;
          pdb_1417fc430(&lStack_d8,&UNK_143046310,0x1f,*(undefined8 *)pbVar38,
                        *(undefined8 *)(pbVar38 + 8));
          if (SBORROW8(0,lStack_d8)) {
            pbStack_a0 = pbStack_d0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_1430465d0,0x1d,&pbStack_a0,&UNK_143046ad0,&UNK_143046988);
          }
          lStack_f8 = lStack_c8;
          lStack_108 = lStack_d8;
          pbStack_100 = pbStack_d0;
          plVar29 = (longlong *)pdb_140f3bda0();
          if ((char)plVar29[2] == '\x01') {
            lStack_b8 = *plVar29;
            puVar34 = (undefined *)plVar29[1];
          }
          else {
            lStack_b8 = pdb_140f4fd10();
            *plVar29 = lStack_b8;
            plVar29[1] = (longlong)puVar34;
            *(undefined1 *)(plVar29 + 2) = 1;
          }
          *plVar29 = lStack_b8 + 1;
          lVar35 = _UNK_143046aa8;
          lVar33 = _DAT_143046aa0;
          pbVar38 = _UNK_143046a98;
          lVar40 = _DAT_143046a90;
          lStack_c8 = _DAT_143046aa0;
          lStack_c0 = _UNK_143046aa8;
          lStack_d8 = _DAT_143046a90;
          pbStack_d0 = _UNK_143046a98;
          puStack_b0 = puVar34;
          if (lStack_f8 == 0) {
            param_1[4] = lStack_b8;
            param_1[5] = (longlong)puVar34;
            param_1[2] = lVar33;
            param_1[3] = lVar35;
            *param_1 = lVar40;
            param_1[1] = (longlong)pbVar38;
            pbVar37 = pbStack_100;
            pbVar32 = pbStack_e0;
            goto LAB_140aa0d4d;
          }
          lStack_110 = lStack_f8;
          pbStack_138 = pbStack_100 + lStack_f8 * 0x50;
          plStack_140 = param_4 + 4;
          lStack_e8 = *param_4;
          uStack_f0 = param_4[1];
          iVar27 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                    CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)))
                          == CONCAT13(unaff_XMM6_Bd,
                                      CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)))
                          );
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
          pbStack_118 = pbStack_100;
          pbVar38 = pbStack_100;
          plStack_120 = param_1;
          goto LAB_140aa0a67;
        }
      }
      pbVar38 = pbVar38 + 0x40;
    } while (pbVar38 != pbVar37);
  }
  pdb_142dc8110(&UNK_1430465a0,0x12,&UNK_143046970);
LAB_140aa0ea3:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_140aa0a67:
  uVar30 = pdb_1400afac0(plStack_140);
  pbStack_150 = pbVar38 + 0x50;
  bVar42 = (byte)(uVar30 >> 0x39);
  auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
  auVar43 = pshuflw(auVar43,auVar43,0);
  uVar41 = *(undefined8 *)(pbVar38 + 0x18);
  lVar40 = *(longlong *)(pbVar38 + 0x20);
  lVar35 = 0;
  lVar33 = lStack_e8;
  do {
    uVar30 = uVar30 & uStack_f0;
    pcVar1 = (char *)(lVar33 + uVar30);
    cVar9 = *pcVar1;
    cVar10 = pcVar1[1];
    cVar11 = pcVar1[2];
    cVar12 = pcVar1[3];
    cVar13 = pcVar1[4];
    cVar14 = pcVar1[5];
    cVar15 = pcVar1[6];
    cVar16 = pcVar1[7];
    cVar17 = pcVar1[8];
    cVar18 = pcVar1[9];
    cVar19 = pcVar1[10];
    cVar20 = pcVar1[0xb];
    cVar21 = pcVar1[0xc];
    cVar22 = pcVar1[0xd];
    cVar23 = pcVar1[0xe];
    cVar24 = pcVar1[0xf];
    auVar44[0] = -(cVar9 == auVar43[0]);
    auVar44[1] = -(cVar10 == auVar43[1]);
    auVar44[2] = -(cVar11 == auVar43[2]);
    auVar44[3] = -(cVar12 == auVar43[3]);
    auVar44[4] = -(cVar13 == auVar43[4]);
    auVar44[5] = -(cVar14 == auVar43[5]);
    auVar44[6] = -(cVar15 == auVar43[6]);
    auVar44[7] = -(cVar16 == auVar43[7]);
    auVar44[8] = -(cVar17 == auVar43[0]);
    auVar44[9] = -(cVar18 == auVar43[1]);
    auVar44[10] = -(cVar19 == auVar43[2]);
    auVar44[0xb] = -(cVar20 == auVar43[3]);
    auVar44[0xc] = -(cVar21 == auVar43[4]);
    auVar44[0xd] = -(cVar22 == auVar43[5]);
    auVar44[0xe] = -(cVar23 == auVar43[6]);
    auVar44[0xf] = -(cVar24 == auVar43[7]);
    uVar26 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
    uVar36 = (uint)uVar26;
    lVar25 = lStack_128;
    while (lStack_128 = lVar35, uVar26 != 0) {
      uVar4 = 0;
      for (uVar5 = uVar36; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar31 = uVar4 + uVar30 & uStack_f0;
      if ((lVar40 == *(longlong *)(lVar33 + -8 + uVar31 * -0x18)) &&
         (iVar28 = pub_142e32750(uVar41,*(undefined8 *)(lVar33 + uVar31 * -0x18 + -0x10),lVar40),
         lVar33 = lStack_e8, iVar28 == 0)) {
        uStack_88 = pdb_140b8f650(lStack_148,&UNK_143046310,0x1f,uVar41,lVar40,
                                  *(undefined8 *)pbVar38,*(undefined8 *)(pbVar38 + 8));
        pbStack_a0 = (byte *)0x8000000000000000;
        pbVar37 = *(byte **)(pbVar38 + 0x20);
        if ((longlong)pbVar37 < 0) {
          uVar41 = 0;
LAB_140aa0d0c:
          pdb_142dc7e2a(uVar41,pbVar37);
          goto LAB_140aa0ea3;
        }
        if (pbVar37 == (byte *)0x0) {
          pbVar32 = (byte *)0x1;
        }
        else {
          uVar2 = *(undefined8 *)(pbVar38 + 0x18);
          pdb_14007ee60();
          uVar41 = 1;
          pbVar32 = pub_1406abab0((ulonglong)pbVar37,1);
          if (pbVar32 == (byte *)0x0) goto LAB_140aa0d0c;
          pub_142e32760(pbVar32,uVar2,pbVar37);
        }
        uStack_170 = uStack_88;
        pbStack_188 = pbVar37;
        pbStack_180 = pbVar32;
        pbStack_178 = pbVar37;
        pbStack_a0 = pbVar37;
        pbStack_98 = pbVar32;
        pbStack_90 = pbVar37;
        pdb_140a2dcf0(uStack_130,&pbStack_188);
        pdb_140f60be0(&pbStack_a0,pbVar38 + 0x10);
        pdb_1403b0b40(&lStack_d8,&pbStack_a0);
        lVar25 = lStack_128;
        goto LAB_140aa0c4b;
      }
      uVar26 = (ushort)(uVar36 - 1) & (ushort)uVar36;
      uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar26);
      lVar35 = lStack_128;
      lVar25 = lStack_128;
    }
    auVar45[0] = -(cVar9 == (char)iVar27);
    auVar45[1] = -(cVar10 == (char)((uint)iVar27 >> 8));
    auVar45[2] = -(cVar11 == (char)((uint)iVar27 >> 0x10));
    auVar45[3] = -(cVar12 == (char)((uint)iVar27 >> 0x18));
    auVar45[4] = -(cVar13 == (char)iVar6);
    auVar45[5] = -(cVar14 == (char)((uint)iVar6 >> 8));
    auVar45[6] = -(cVar15 == (char)((uint)iVar6 >> 0x10));
    auVar45[7] = -(cVar16 == (char)((uint)iVar6 >> 0x18));
    auVar45[8] = -(cVar17 == (char)iVar7);
    auVar45[9] = -(cVar18 == (char)((uint)iVar7 >> 8));
    auVar45[10] = -(cVar19 == (char)((uint)iVar7 >> 0x10));
    auVar45[0xb] = -(cVar20 == (char)((uint)iVar7 >> 0x18));
    auVar45[0xc] = -(cVar21 == (char)iVar8);
    auVar45[0xd] = -(cVar22 == (char)((uint)iVar8 >> 8));
    auVar45[0xe] = -(cVar23 == (char)((uint)iVar8 >> 0x10));
    auVar45[0xf] = -(cVar24 == (char)((uint)iVar8 >> 0x18));
    if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
    uVar30 = uVar30 + lStack_128 + 0x10;
    lVar35 = lStack_128 + 0x10;
    lStack_128 = lVar25;
  } while( true );
LAB_140aa0c4b:
  lStack_128 = lVar25;
  pbVar32 = pbStack_e0;
  pbVar37 = pbStack_118;
  param_1 = plStack_120;
  pbVar38 = pbStack_150;
  if (pbStack_150 == pbStack_138) {
    plStack_120[4] = lStack_b8;
    plStack_120[5] = (longlong)puStack_b0;
    plStack_120[2] = lStack_c8;
    plStack_120[3] = lStack_c0;
    *plStack_120 = lStack_d8;
    plStack_120[1] = (longlong)pbStack_d0;
    pbVar38 = pbStack_118 + 0x18;
    lVar40 = lStack_110;
    do {
      if (*(ulonglong *)(pbVar38 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar38,*(ulonglong *)(pbVar38 + -8),1);
      }
      pbVar38 = pbVar38 + 0x50;
      lVar40 = lVar40 + -1;
    } while (lVar40 != 0);
LAB_140aa0d4d:
    if (lStack_108 != 0) {
      pub_1406abac0(pbVar37,lStack_108 * 0x50,0x10);
    }
    pbVar38 = pbVar32 + 0x30;
    do {
      if (*(ulonglong *)(pbVar38 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar38 + -0x18),*(ulonglong *)(pbVar38 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar38 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar38,*(ulonglong *)(pbVar38 + -8),1);
      }
      pbVar38 = pbVar38 + 0x40;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    if (lStack_168 == 0) {
      return param_1;
    }
    pub_1406abac0(pbVar32,lStack_168 << 6,0x10);
    return param_1;
  }
  goto LAB_140aa0a67;
}

