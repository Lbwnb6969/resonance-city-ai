// VA 0x1417f0560, PDB extent 741 bytes
// asset::texture::impl$0::from_str
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset::texture::impl$0::from_str
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture.rs
   Extent: 741 */

undefined1 * pdb_1417f0560(undefined1 *param_1,ulonglong param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
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
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  ulonglong uVar75;
  undefined1 *puVar76;
  byte *arg0;
  ulonglong uVar77;
  undefined8 uVar78;
  ulonglong uVar79;
  undefined1 uVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  ulonglong *puStack_90;
  code *pcStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar80 = param_3 == 0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  if (-1 < (longlong)param_3) goto LAB_1417f05a6;
  puVar76 = (undefined1 *)0x0;
  do {
    param_1 = puVar76;
    uVar80 = 1;
    param_2 = param_3;
    pdb_142dc7e2a(param_1,param_3);
LAB_1417f05a6:
    if ((bool)uVar80) {
      pbStack_70 = (byte *)0x1;
      arg0 = pbStack_70;
      goto LAB_1417f0785;
    }
    pdb_14007ee60();
    arg0 = pub_1406abab0(param_3,1);
    puVar76 = (undefined1 *)0x1;
  } while (arg0 == (byte *)0x0);
  pub_142e32760(arg0,param_2,param_3);
  cVar74 = UNK_142f5f76f;
  cVar73 = UNK_142f5f76e;
  cVar72 = UNK_142f5f76d;
  cVar71 = UNK_142f5f76c;
  cVar70 = UNK_142f5f76b;
  cVar69 = UNK_142f5f76a;
  cVar68 = UNK_142f5f769;
  cVar67 = UNK_142f5f768;
  cVar66 = UNK_142f5f767;
  cVar65 = UNK_142f5f766;
  cVar64 = UNK_142f5f765;
  cVar63 = UNK_142f5f764;
  cVar62 = UNK_142f5f763;
  cVar61 = UNK_142f5f762;
  cVar60 = UNK_142f5f761;
  cVar59 = DAT_142f5f760;
  bVar58 = UNK_142e4234f;
  bVar57 = UNK_142e4234e;
  bVar56 = UNK_142e4234d;
  bVar55 = UNK_142e4234c;
  bVar54 = UNK_142e4234b;
  bVar53 = UNK_142e4234a;
  bVar52 = UNK_142e42349;
  bVar51 = UNK_142e42348;
  bVar50 = UNK_142e42347;
  bVar49 = UNK_142e42346;
  bVar48 = UNK_142e42345;
  bVar47 = UNK_142e42344;
  bVar46 = UNK_142e42343;
  bVar45 = UNK_142e42342;
  bVar44 = UNK_142e42341;
  bVar43 = DAT_142e42340;
  bVar88 = UNK_142e346df;
  bVar87 = UNK_142e346de;
  bVar86 = UNK_142e346dd;
  bVar85 = UNK_142e346dc;
  bVar84 = UNK_142e346db;
  bVar83 = UNK_142e346da;
  bVar82 = UNK_142e346d9;
  bVar81 = UNK_142e346d8;
  bVar42 = UNK_142e346d7;
  bVar41 = UNK_142e346d6;
  bVar40 = UNK_142e346d5;
  bVar39 = UNK_142e346d4;
  bVar38 = UNK_142e346d3;
  bVar37 = UNK_142e346d2;
  bVar36 = UNK_142e346d1;
  bVar35 = DAT_142e346d0;
  if (param_3 < 8) {
    uVar77 = 0;
LAB_1417f0703:
    do {
      arg0[uVar77] = ((byte)(arg0[uVar77] + 0xbf) < 0x1a) << 5 | arg0[uVar77];
      uVar77 = uVar77 + 1;
LAB_1417f071d:
    } while (param_3 != uVar77);
  }
  else {
    if (param_3 < 0x20) {
      uVar79 = 0;
LAB_1417f069a:
      uVar75 = _DAT_142f97ed0;
      bVar42 = UNK_142f97ec7;
      bVar41 = UNK_142f97ec6;
      bVar40 = UNK_142f97ec5;
      bVar39 = UNK_142f97ec4;
      bVar38 = UNK_142f97ec3;
      bVar37 = UNK_142f97ec2;
      bVar36 = UNK_142f97ec1;
      bVar35 = DAT_142f97ec0;
      cVar66 = UNK_142f97eb7;
      cVar65 = UNK_142f97eb6;
      cVar64 = UNK_142f97eb5;
      cVar63 = UNK_142f97eb4;
      cVar62 = UNK_142f97eb3;
      cVar61 = UNK_142f97eb2;
      cVar60 = UNK_142f97eb1;
      cVar59 = DAT_142f97eb0;
      uVar77 = param_3 & 0x7ffffffffffffff8;
      do {
        uVar3 = *(ulonglong *)(arg0 + uVar79);
        bVar81 = (char)uVar3 + cVar59;
        bVar82 = (char)(uVar3 >> 8) + cVar60;
        bVar83 = (char)(uVar3 >> 0x10) + cVar61;
        bVar84 = (char)(uVar3 >> 0x18) + cVar62;
        bVar85 = (char)(uVar3 >> 0x20) + cVar63;
        bVar86 = (char)(uVar3 >> 0x28) + cVar64;
        bVar87 = (char)(uVar3 >> 0x30) + cVar65;
        bVar88 = (char)(uVar3 >> 0x38) + cVar66;
        *(ulonglong *)(arg0 + uVar79) =
             ~CONCAT17(-((byte)((bVar88 < bVar42) * bVar42 | (bVar88 >= bVar42) * bVar88) == bVar88)
                       ,CONCAT16(-((byte)((bVar87 < bVar41) * bVar41 | (bVar87 >= bVar41) * bVar87)
                                  == bVar87),
                                 CONCAT15(-((byte)((bVar86 < bVar40) * bVar40 |
                                                  (bVar86 >= bVar40) * bVar86) == bVar86),
                                          CONCAT14(-((byte)((bVar85 < bVar39) * bVar39 |
                                                           (bVar85 >= bVar39) * bVar85) == bVar85),
                                                   CONCAT13(-((byte)((bVar84 < bVar38) * bVar38 |
                                                                    (bVar84 >= bVar38) * bVar84) ==
                                                             bVar84),CONCAT12(-((byte)((bVar83 < 
                                                  bVar37) * bVar37 | (bVar83 >= bVar37) * bVar83) ==
                                                  bVar83),CONCAT11(-((byte)((bVar82 < bVar36) *
                                                                            bVar36 | (bVar82 >=
                                                                                     bVar36) * 
                                                  bVar82) == bVar82),
                                                  -((byte)((bVar81 < bVar35) * bVar35 |
                                                          (bVar81 >= bVar35) * bVar81) == bVar81))))
                                                  )))) & uVar75 | uVar3;
        uVar79 = uVar79 + 8;
        if (uVar77 == uVar79) goto LAB_1417f071d;
      } while( true );
    }
    uVar77 = param_3 & 0x7fffffffffffffe0;
    uVar79 = 0;
    do {
      pbVar1 = arg0 + uVar79;
      bVar4 = pbVar1[1];
      bVar5 = pbVar1[2];
      bVar6 = pbVar1[3];
      bVar7 = pbVar1[4];
      bVar8 = pbVar1[5];
      bVar9 = pbVar1[6];
      bVar10 = pbVar1[7];
      bVar11 = pbVar1[8];
      bVar12 = pbVar1[9];
      bVar13 = pbVar1[10];
      bVar14 = pbVar1[0xb];
      bVar15 = pbVar1[0xc];
      bVar16 = pbVar1[0xd];
      bVar17 = pbVar1[0xe];
      bVar18 = pbVar1[0xf];
      pbVar2 = arg0 + uVar79 + 0x10;
      bVar19 = *pbVar2;
      bVar20 = pbVar2[1];
      bVar21 = pbVar2[2];
      bVar22 = pbVar2[3];
      bVar23 = pbVar2[4];
      bVar24 = pbVar2[5];
      bVar25 = pbVar2[6];
      bVar26 = pbVar2[7];
      bVar27 = pbVar2[8];
      bVar28 = pbVar2[9];
      bVar29 = pbVar2[10];
      bVar30 = pbVar2[0xb];
      bVar31 = pbVar2[0xc];
      bVar32 = pbVar2[0xd];
      bVar33 = pbVar2[0xe];
      bVar34 = pbVar2[0xf];
      bVar89 = *pbVar1 + cVar59;
      bVar90 = bVar4 + cVar60;
      bVar91 = bVar5 + cVar61;
      bVar92 = bVar6 + cVar62;
      bVar93 = bVar7 + cVar63;
      bVar94 = bVar8 + cVar64;
      bVar95 = bVar9 + cVar65;
      bVar96 = bVar10 + cVar66;
      bVar97 = bVar11 + cVar67;
      bVar98 = bVar12 + cVar68;
      bVar99 = bVar13 + cVar69;
      bVar100 = bVar14 + cVar70;
      bVar101 = bVar15 + cVar71;
      bVar102 = bVar16 + cVar72;
      bVar103 = bVar17 + cVar73;
      bVar104 = bVar18 + cVar74;
      bVar105 = bVar19 + cVar59;
      bVar106 = bVar20 + cVar60;
      bVar107 = bVar21 + cVar61;
      bVar108 = bVar22 + cVar62;
      bVar109 = bVar23 + cVar63;
      bVar110 = bVar24 + cVar64;
      bVar111 = bVar25 + cVar65;
      bVar112 = bVar26 + cVar66;
      bVar113 = bVar27 + cVar67;
      bVar114 = bVar28 + cVar68;
      bVar115 = bVar29 + cVar69;
      bVar116 = bVar30 + cVar70;
      bVar117 = bVar31 + cVar71;
      bVar118 = bVar32 + cVar72;
      bVar119 = bVar33 + cVar73;
      bVar120 = bVar34 + cVar74;
      pbVar2 = arg0 + uVar79;
      *pbVar2 = -((byte)((bVar43 < bVar89) * bVar43 | (bVar43 >= bVar89) * bVar89) == bVar89) &
                bVar35 | *pbVar1;
      pbVar2[1] = -((byte)((bVar44 < bVar90) * bVar44 | (bVar44 >= bVar90) * bVar90) == bVar90) &
                  bVar36 | bVar4;
      pbVar2[2] = -((byte)((bVar45 < bVar91) * bVar45 | (bVar45 >= bVar91) * bVar91) == bVar91) &
                  bVar37 | bVar5;
      pbVar2[3] = -((byte)((bVar46 < bVar92) * bVar46 | (bVar46 >= bVar92) * bVar92) == bVar92) &
                  bVar38 | bVar6;
      pbVar2[4] = -((byte)((bVar47 < bVar93) * bVar47 | (bVar47 >= bVar93) * bVar93) == bVar93) &
                  bVar39 | bVar7;
      pbVar2[5] = -((byte)((bVar48 < bVar94) * bVar48 | (bVar48 >= bVar94) * bVar94) == bVar94) &
                  bVar40 | bVar8;
      pbVar2[6] = -((byte)((bVar49 < bVar95) * bVar49 | (bVar49 >= bVar95) * bVar95) == bVar95) &
                  bVar41 | bVar9;
      pbVar2[7] = -((byte)((bVar50 < bVar96) * bVar50 | (bVar50 >= bVar96) * bVar96) == bVar96) &
                  bVar42 | bVar10;
      pbVar2[8] = -((byte)((bVar51 < bVar97) * bVar51 | (bVar51 >= bVar97) * bVar97) == bVar97) &
                  bVar81 | bVar11;
      pbVar2[9] = -((byte)((bVar52 < bVar98) * bVar52 | (bVar52 >= bVar98) * bVar98) == bVar98) &
                  bVar82 | bVar12;
      pbVar2[10] = -((byte)((bVar53 < bVar99) * bVar53 | (bVar53 >= bVar99) * bVar99) == bVar99) &
                   bVar83 | bVar13;
      pbVar2[0xb] = -((byte)((bVar54 < bVar100) * bVar54 | (bVar54 >= bVar100) * bVar100) == bVar100
                     ) & bVar84 | bVar14;
      pbVar2[0xc] = -((byte)((bVar55 < bVar101) * bVar55 | (bVar55 >= bVar101) * bVar101) == bVar101
                     ) & bVar85 | bVar15;
      pbVar2[0xd] = -((byte)((bVar56 < bVar102) * bVar56 | (bVar56 >= bVar102) * bVar102) == bVar102
                     ) & bVar86 | bVar16;
      pbVar2[0xe] = -((byte)((bVar57 < bVar103) * bVar57 | (bVar57 >= bVar103) * bVar103) == bVar103
                     ) & bVar87 | bVar17;
      pbVar2[0xf] = -((byte)((bVar58 < bVar104) * bVar58 | (bVar58 >= bVar104) * bVar104) == bVar104
                     ) & bVar88 | bVar18;
      pbVar1 = arg0 + uVar79 + 0x10;
      *pbVar1 = -((byte)((bVar43 < bVar105) * bVar43 | (bVar43 >= bVar105) * bVar105) == bVar105) &
                bVar35 | bVar19;
      pbVar1[1] = -((byte)((bVar44 < bVar106) * bVar44 | (bVar44 >= bVar106) * bVar106) == bVar106)
                  & bVar36 | bVar20;
      pbVar1[2] = -((byte)((bVar45 < bVar107) * bVar45 | (bVar45 >= bVar107) * bVar107) == bVar107)
                  & bVar37 | bVar21;
      pbVar1[3] = -((byte)((bVar46 < bVar108) * bVar46 | (bVar46 >= bVar108) * bVar108) == bVar108)
                  & bVar38 | bVar22;
      pbVar1[4] = -((byte)((bVar47 < bVar109) * bVar47 | (bVar47 >= bVar109) * bVar109) == bVar109)
                  & bVar39 | bVar23;
      pbVar1[5] = -((byte)((bVar48 < bVar110) * bVar48 | (bVar48 >= bVar110) * bVar110) == bVar110)
                  & bVar40 | bVar24;
      pbVar1[6] = -((byte)((bVar49 < bVar111) * bVar49 | (bVar49 >= bVar111) * bVar111) == bVar111)
                  & bVar41 | bVar25;
      pbVar1[7] = -((byte)((bVar50 < bVar112) * bVar50 | (bVar50 >= bVar112) * bVar112) == bVar112)
                  & bVar42 | bVar26;
      pbVar1[8] = -((byte)((bVar51 < bVar113) * bVar51 | (bVar51 >= bVar113) * bVar113) == bVar113)
                  & bVar81 | bVar27;
      pbVar1[9] = -((byte)((bVar52 < bVar114) * bVar52 | (bVar52 >= bVar114) * bVar114) == bVar114)
                  & bVar82 | bVar28;
      pbVar1[10] = -((byte)((bVar53 < bVar115) * bVar53 | (bVar53 >= bVar115) * bVar115) == bVar115)
                   & bVar83 | bVar29;
      pbVar1[0xb] = -((byte)((bVar54 < bVar116) * bVar54 | (bVar54 >= bVar116) * bVar116) == bVar116
                     ) & bVar84 | bVar30;
      pbVar1[0xc] = -((byte)((bVar55 < bVar117) * bVar55 | (bVar55 >= bVar117) * bVar117) == bVar117
                     ) & bVar85 | bVar31;
      pbVar1[0xd] = -((byte)((bVar56 < bVar118) * bVar56 | (bVar56 >= bVar118) * bVar118) == bVar118
                     ) & bVar86 | bVar32;
      pbVar1[0xe] = -((byte)((bVar57 < bVar119) * bVar57 | (bVar57 >= bVar119) * bVar119) == bVar119
                     ) & bVar87 | bVar33;
      pbVar1[0xf] = -((byte)((bVar58 < bVar120) * bVar58 | (bVar58 >= bVar120) * bVar120) == bVar120
                     ) & bVar88 | bVar34;
      uVar79 = uVar79 + 0x20;
    } while (uVar77 != uVar79);
    if (param_3 != uVar77) {
      uVar79 = uVar77;
      if ((param_3 & 0x18) != 0) goto LAB_1417f069a;
      goto LAB_1417f0703;
    }
  }
  if (param_3 == 4) {
    if (*(int *)arg0 != 0x6765706a) goto LAB_1417f0785;
LAB_1417f07b8:
    uVar80 = 1;
  }
  else {
    if (param_3 != 3) {
LAB_1417f0785:
      pbStack_70 = arg0;
      puStack_90 = &uStack_80;
      pcStack_88 = pdb_1402ed420;
      uStack_68 = param_3;
      uVar78 = pdb_142deb9a0(&puStack_90);
      *(undefined8 *)(param_1 + 8) = uVar78;
      *param_1 = 1;
      param_3 = uStack_68;
      arg0 = pbStack_70;
      if (uStack_68 == 0) {
        return param_1;
      }
      goto LAB_1417f07c4;
    }
    if (arg0[2] == 0x67 && *(short *)arg0 == 0x6e70) {
      uVar80 = 0;
    }
    else {
      if (arg0[2] == 0x67 && *(short *)arg0 == 0x706a) goto LAB_1417f07b8;
      if (arg0[2] != 0x73 || *(short *)arg0 != 0x6464) goto LAB_1417f0785;
      uVar80 = 2;
    }
  }
  param_1[1] = uVar80;
  *param_1 = 0;
LAB_1417f07c4:
  pub_1406abac0(arg0,param_3,1);
  return param_1;
}

