// VA 0x140ace080, PDB extent 1838 bytes
// country_core::systems::mod_editor::EditingMod::set_thumbnail
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::mod_editor::EditingMod::set_thumbnail
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 1838 */

void pdb_140ace080(longlong param_1,undefined8 param_2,byte ****param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
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
  byte bVar59;
  byte bVar60;
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
  char cVar75;
  char cVar76;
  longlong lVar77;
  byte *pbVar78;
  byte ***pppbVar79;
  ulonglong uVar80;
  byte ***pppbVar81;
  byte ****ppppbVar82;
  undefined8 uVar83;
  byte ***pppbVar84;
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
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  undefined8 ***pppuStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  byte ***pppbStack_118;
  byte *pbStack_110;
  byte ***pppbStack_108;
  byte ***pppbStack_100;
  byte ***pppbStack_f8;
  byte ***pppbStack_f0;
  byte ***pppbStack_e8;
  undefined8 ***pppuStack_d8;
  code *pcStack_d0;
  byte ***pppbStack_c8;
  byte ***pppbStack_c0;
  byte ***pppbStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  byte ***pppbStack_80;
  byte ***pppbStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  ppppbVar82 = param_3;
  lVar77 = pdb_140f3ec80(param_2,param_3);
  if (lVar77 == 0) {
    pbVar78 = (byte *)0x1;
    pppbVar84 = (byte ***)0x0;
  }
  else {
    pdb_140f5fd10(&pppbStack_c8,lVar77,ppppbVar82);
    pppbVar84 = pppbStack_b8;
    pppbStack_78 = pppbStack_c0;
    if ((longlong)pppbStack_b8 < 0) {
      uVar83 = 0;
LAB_140ace0eb:
      pdb_142dc7e2a(uVar83,pppbVar84);
      goto LAB_140ace476;
    }
    if (pppbStack_b8 == (byte ***)0x0) {
      pbVar78 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar83 = 1;
      pbVar78 = pub_1406abab0((ulonglong)pppbVar84,1);
      if (pbVar78 == (byte *)0x0) goto LAB_140ace0eb;
      pub_142e32760(pbVar78,pppbStack_78,pppbVar84);
      cVar76 = UNK_142f5f76f;
      cVar75 = UNK_142f5f76e;
      cVar74 = UNK_142f5f76d;
      cVar73 = UNK_142f5f76c;
      cVar72 = UNK_142f5f76b;
      cVar71 = UNK_142f5f76a;
      cVar70 = UNK_142f5f769;
      cVar69 = UNK_142f5f768;
      cVar68 = UNK_142f5f767;
      cVar67 = UNK_142f5f766;
      cVar66 = UNK_142f5f765;
      cVar65 = UNK_142f5f764;
      cVar64 = UNK_142f5f763;
      cVar63 = UNK_142f5f762;
      cVar62 = UNK_142f5f761;
      cVar61 = DAT_142f5f760;
      bVar60 = UNK_142e4234f;
      bVar59 = UNK_142e4234e;
      bVar58 = UNK_142e4234d;
      bVar57 = UNK_142e4234c;
      bVar56 = UNK_142e4234b;
      bVar55 = UNK_142e4234a;
      bVar54 = UNK_142e42349;
      bVar53 = UNK_142e42348;
      bVar52 = UNK_142e42347;
      bVar51 = UNK_142e42346;
      bVar50 = UNK_142e42345;
      bVar49 = UNK_142e42344;
      bVar48 = UNK_142e42343;
      bVar47 = UNK_142e42342;
      bVar46 = UNK_142e42341;
      bVar45 = DAT_142e42340;
      bVar92 = UNK_142e346df;
      bVar91 = UNK_142e346de;
      bVar90 = UNK_142e346dd;
      bVar89 = UNK_142e346dc;
      bVar88 = UNK_142e346db;
      bVar87 = UNK_142e346da;
      bVar86 = UNK_142e346d9;
      bVar85 = UNK_142e346d8;
      bVar44 = UNK_142e346d7;
      bVar43 = UNK_142e346d6;
      bVar42 = UNK_142e346d5;
      bVar41 = UNK_142e346d4;
      bVar40 = UNK_142e346d3;
      bVar39 = UNK_142e346d2;
      bVar38 = UNK_142e346d1;
      bVar37 = DAT_142e346d0;
      if (pppbVar84 < (byte ***)0x8) {
        pppbVar81 = (byte ***)0x0;
      }
      else {
        if (pppbVar84 < (byte ***)0x20) {
          pppbVar79 = (byte ***)0x0;
LAB_140ace1fe:
          uVar80 = _DAT_142f97ed0;
          bVar44 = UNK_142f97ec7;
          bVar43 = UNK_142f97ec6;
          bVar42 = UNK_142f97ec5;
          bVar41 = UNK_142f97ec4;
          bVar40 = UNK_142f97ec3;
          bVar39 = UNK_142f97ec2;
          bVar38 = UNK_142f97ec1;
          bVar37 = DAT_142f97ec0;
          cVar68 = UNK_142f97eb7;
          cVar67 = UNK_142f97eb6;
          cVar66 = UNK_142f97eb5;
          cVar65 = UNK_142f97eb4;
          cVar64 = UNK_142f97eb3;
          cVar63 = UNK_142f97eb2;
          cVar62 = UNK_142f97eb1;
          cVar61 = DAT_142f97eb0;
          pppbVar81 = (byte ***)((ulonglong)pppbVar84 & 0x7ffffffffffffff8);
          do {
            uVar3 = *(ulonglong *)(pbVar78 + (longlong)pppbVar79);
            bVar85 = (char)uVar3 + cVar61;
            bVar86 = (char)(uVar3 >> 8) + cVar62;
            bVar87 = (char)(uVar3 >> 0x10) + cVar63;
            bVar88 = (char)(uVar3 >> 0x18) + cVar64;
            bVar89 = (char)(uVar3 >> 0x20) + cVar65;
            bVar90 = (char)(uVar3 >> 0x28) + cVar66;
            bVar91 = (char)(uVar3 >> 0x30) + cVar67;
            bVar92 = (char)(uVar3 >> 0x38) + cVar68;
            *(ulonglong *)(pbVar78 + (longlong)pppbVar79) =
                 ~CONCAT17(-((byte)((bVar92 < bVar44) * bVar44 | (bVar92 >= bVar44) * bVar92) ==
                            bVar92),CONCAT16(-((byte)((bVar91 < bVar43) * bVar43 |
                                                     (bVar91 >= bVar43) * bVar91) == bVar91),
                                             CONCAT15(-((byte)((bVar90 < bVar42) * bVar42 |
                                                              (bVar90 >= bVar42) * bVar90) == bVar90
                                                       ),CONCAT14(-((byte)((bVar89 < bVar41) *
                                                                           bVar41 | (bVar89 >=
                                                                                    bVar41) * bVar89
                                                                          ) == bVar89),
                                                                  CONCAT13(-((byte)((bVar88 < bVar40
                                                                                    ) * bVar40 |
                                                                                   (bVar88 >= bVar40
                                                                                   ) * bVar88) ==
                                                                            bVar88),CONCAT12(-((byte
                                                  )((bVar87 < bVar39) * bVar39 |
                                                   (bVar87 >= bVar39) * bVar87) == bVar87),
                                                  CONCAT11(-((byte)((bVar86 < bVar38) * bVar38 |
                                                                   (bVar86 >= bVar38) * bVar86) ==
                                                            bVar86),-((byte)((bVar85 < bVar37) *
                                                                             bVar37 | (bVar85 >=
                                                                                      bVar37) * 
                                                  bVar85) == bVar85)))))))) & uVar80 | uVar3;
            pppbVar79 = pppbVar79 + 1;
            if (pppbVar81 == pppbVar79) goto LAB_140ace54f;
          } while( true );
        }
        pppbVar81 = (byte ***)((ulonglong)pppbVar84 & 0x7fffffffffffffe0);
        pppbVar79 = (byte ***)0x0;
        do {
          pbVar1 = pbVar78 + (longlong)pppbVar79;
          bVar6 = pbVar1[1];
          bVar7 = pbVar1[2];
          bVar8 = pbVar1[3];
          bVar9 = pbVar1[4];
          bVar10 = pbVar1[5];
          bVar11 = pbVar1[6];
          bVar12 = pbVar1[7];
          bVar13 = pbVar1[8];
          bVar14 = pbVar1[9];
          bVar15 = pbVar1[10];
          bVar16 = pbVar1[0xb];
          bVar17 = pbVar1[0xc];
          bVar18 = pbVar1[0xd];
          bVar19 = pbVar1[0xe];
          bVar20 = pbVar1[0xf];
          pbVar2 = pbVar78 + 0x10 + (longlong)pppbVar79;
          bVar21 = *pbVar2;
          bVar22 = pbVar2[1];
          bVar23 = pbVar2[2];
          bVar24 = pbVar2[3];
          bVar25 = pbVar2[4];
          bVar26 = pbVar2[5];
          bVar27 = pbVar2[6];
          bVar28 = pbVar2[7];
          bVar29 = pbVar2[8];
          bVar30 = pbVar2[9];
          bVar31 = pbVar2[10];
          bVar32 = pbVar2[0xb];
          bVar33 = pbVar2[0xc];
          bVar34 = pbVar2[0xd];
          bVar35 = pbVar2[0xe];
          bVar36 = pbVar2[0xf];
          bVar93 = *pbVar1 + cVar61;
          bVar94 = bVar6 + cVar62;
          bVar95 = bVar7 + cVar63;
          bVar96 = bVar8 + cVar64;
          bVar97 = bVar9 + cVar65;
          bVar98 = bVar10 + cVar66;
          bVar99 = bVar11 + cVar67;
          bVar100 = bVar12 + cVar68;
          bVar101 = bVar13 + cVar69;
          bVar102 = bVar14 + cVar70;
          bVar103 = bVar15 + cVar71;
          bVar104 = bVar16 + cVar72;
          bVar105 = bVar17 + cVar73;
          bVar106 = bVar18 + cVar74;
          bVar107 = bVar19 + cVar75;
          bVar108 = bVar20 + cVar76;
          bVar109 = bVar21 + cVar61;
          bVar110 = bVar22 + cVar62;
          bVar111 = bVar23 + cVar63;
          bVar112 = bVar24 + cVar64;
          bVar113 = bVar25 + cVar65;
          bVar114 = bVar26 + cVar66;
          bVar115 = bVar27 + cVar67;
          bVar116 = bVar28 + cVar68;
          bVar117 = bVar29 + cVar69;
          bVar118 = bVar30 + cVar70;
          bVar119 = bVar31 + cVar71;
          bVar120 = bVar32 + cVar72;
          bVar121 = bVar33 + cVar73;
          bVar122 = bVar34 + cVar74;
          bVar123 = bVar35 + cVar75;
          bVar124 = bVar36 + cVar76;
          pbVar2 = pbVar78 + (longlong)pppbVar79;
          *pbVar2 = -((byte)((bVar45 < bVar93) * bVar45 | (bVar45 >= bVar93) * bVar93) == bVar93) &
                    bVar37 | *pbVar1;
          pbVar2[1] = -((byte)((bVar46 < bVar94) * bVar46 | (bVar46 >= bVar94) * bVar94) == bVar94)
                      & bVar38 | bVar6;
          pbVar2[2] = -((byte)((bVar47 < bVar95) * bVar47 | (bVar47 >= bVar95) * bVar95) == bVar95)
                      & bVar39 | bVar7;
          pbVar2[3] = -((byte)((bVar48 < bVar96) * bVar48 | (bVar48 >= bVar96) * bVar96) == bVar96)
                      & bVar40 | bVar8;
          pbVar2[4] = -((byte)((bVar49 < bVar97) * bVar49 | (bVar49 >= bVar97) * bVar97) == bVar97)
                      & bVar41 | bVar9;
          pbVar2[5] = -((byte)((bVar50 < bVar98) * bVar50 | (bVar50 >= bVar98) * bVar98) == bVar98)
                      & bVar42 | bVar10;
          pbVar2[6] = -((byte)((bVar51 < bVar99) * bVar51 | (bVar51 >= bVar99) * bVar99) == bVar99)
                      & bVar43 | bVar11;
          pbVar2[7] = -((byte)((bVar52 < bVar100) * bVar52 | (bVar52 >= bVar100) * bVar100) ==
                       bVar100) & bVar44 | bVar12;
          pbVar2[8] = -((byte)((bVar53 < bVar101) * bVar53 | (bVar53 >= bVar101) * bVar101) ==
                       bVar101) & bVar85 | bVar13;
          pbVar2[9] = -((byte)((bVar54 < bVar102) * bVar54 | (bVar54 >= bVar102) * bVar102) ==
                       bVar102) & bVar86 | bVar14;
          pbVar2[10] = -((byte)((bVar55 < bVar103) * bVar55 | (bVar55 >= bVar103) * bVar103) ==
                        bVar103) & bVar87 | bVar15;
          pbVar2[0xb] = -((byte)((bVar56 < bVar104) * bVar56 | (bVar56 >= bVar104) * bVar104) ==
                         bVar104) & bVar88 | bVar16;
          pbVar2[0xc] = -((byte)((bVar57 < bVar105) * bVar57 | (bVar57 >= bVar105) * bVar105) ==
                         bVar105) & bVar89 | bVar17;
          pbVar2[0xd] = -((byte)((bVar58 < bVar106) * bVar58 | (bVar58 >= bVar106) * bVar106) ==
                         bVar106) & bVar90 | bVar18;
          pbVar2[0xe] = -((byte)((bVar59 < bVar107) * bVar59 | (bVar59 >= bVar107) * bVar107) ==
                         bVar107) & bVar91 | bVar19;
          pbVar2[0xf] = -((byte)((bVar60 < bVar108) * bVar60 | (bVar60 >= bVar108) * bVar108) ==
                         bVar108) & bVar92 | bVar20;
          pbVar1 = pbVar78 + 0x10 + (longlong)pppbVar79;
          *pbVar1 = -((byte)((bVar45 < bVar109) * bVar45 | (bVar45 >= bVar109) * bVar109) == bVar109
                     ) & bVar37 | bVar21;
          pbVar1[1] = -((byte)((bVar46 < bVar110) * bVar46 | (bVar46 >= bVar110) * bVar110) ==
                       bVar110) & bVar38 | bVar22;
          pbVar1[2] = -((byte)((bVar47 < bVar111) * bVar47 | (bVar47 >= bVar111) * bVar111) ==
                       bVar111) & bVar39 | bVar23;
          pbVar1[3] = -((byte)((bVar48 < bVar112) * bVar48 | (bVar48 >= bVar112) * bVar112) ==
                       bVar112) & bVar40 | bVar24;
          pbVar1[4] = -((byte)((bVar49 < bVar113) * bVar49 | (bVar49 >= bVar113) * bVar113) ==
                       bVar113) & bVar41 | bVar25;
          pbVar1[5] = -((byte)((bVar50 < bVar114) * bVar50 | (bVar50 >= bVar114) * bVar114) ==
                       bVar114) & bVar42 | bVar26;
          pbVar1[6] = -((byte)((bVar51 < bVar115) * bVar51 | (bVar51 >= bVar115) * bVar115) ==
                       bVar115) & bVar43 | bVar27;
          pbVar1[7] = -((byte)((bVar52 < bVar116) * bVar52 | (bVar52 >= bVar116) * bVar116) ==
                       bVar116) & bVar44 | bVar28;
          pbVar1[8] = -((byte)((bVar53 < bVar117) * bVar53 | (bVar53 >= bVar117) * bVar117) ==
                       bVar117) & bVar85 | bVar29;
          pbVar1[9] = -((byte)((bVar54 < bVar118) * bVar54 | (bVar54 >= bVar118) * bVar118) ==
                       bVar118) & bVar86 | bVar30;
          pbVar1[10] = -((byte)((bVar55 < bVar119) * bVar55 | (bVar55 >= bVar119) * bVar119) ==
                        bVar119) & bVar87 | bVar31;
          pbVar1[0xb] = -((byte)((bVar56 < bVar120) * bVar56 | (bVar56 >= bVar120) * bVar120) ==
                         bVar120) & bVar88 | bVar32;
          pbVar1[0xc] = -((byte)((bVar57 < bVar121) * bVar57 | (bVar57 >= bVar121) * bVar121) ==
                         bVar121) & bVar89 | bVar33;
          pbVar1[0xd] = -((byte)((bVar58 < bVar122) * bVar58 | (bVar58 >= bVar122) * bVar122) ==
                         bVar122) & bVar90 | bVar34;
          pbVar1[0xe] = -((byte)((bVar59 < bVar123) * bVar59 | (bVar59 >= bVar123) * bVar123) ==
                         bVar123) & bVar91 | bVar35;
          pbVar1[0xf] = -((byte)((bVar60 < bVar124) * bVar60 | (bVar60 >= bVar124) * bVar124) ==
                         bVar124) & bVar92 | bVar36;
          pppbVar79 = pppbVar79 + 4;
        } while (pppbVar81 != pppbVar79);
        if (pppbVar84 == pppbVar81) goto LAB_140ace554;
        pppbVar79 = pppbVar81;
        if (((ulonglong)pppbVar84 & 0x18) != 0) goto LAB_140ace1fe;
      }
      do {
        pbVar78[(longlong)pppbVar81] =
             ((byte)(pbVar78[(longlong)pppbVar81] + 0xbf) < 0x1a) << 5 |
             pbVar78[(longlong)pppbVar81];
        pppbVar81 = (byte ***)((longlong)pppbVar81 + 1);
LAB_140ace54f:
      } while (pppbVar84 != pppbVar81);
    }
LAB_140ace554:
    if (0 < (longlong)pppbStack_c8) {
      pub_1406abac0((byte *)pppbStack_78,(ulonglong)pppbStack_c8,1);
    }
  }
  uVar83 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  pppuStack_138 = &pppbStack_118;
  pcStack_130 = pdb_140001020;
  pppbStack_118 = pppbVar84;
  pbStack_110 = pbVar78;
  pppbStack_108 = pppbVar84;
  pdb_140f60760(&pppbStack_c8,&UNK_14304db5e,&pppuStack_138);
  pppbStack_78 = pppbStack_c8;
  pppbStack_100 = pppbStack_c0;
  pdb_140f3e9e0(&pppuStack_138,uVar83,uVar4,pppbStack_c0,pppbStack_b8);
  pppbStack_c8 = (byte ***)(param_1 + 0x10);
  if (pppbStack_78 != (byte ***)0x0) {
    pub_1406abac0((byte *)pppbStack_100,(ulonglong)pppbStack_78,1);
  }
  pppbStack_c0 = (byte ***)0x0;
  pppbStack_b8 = (byte ***)0x3;
  puStack_b0 = &UNK_14304db6b;
  uStack_a8 = 0xd;
  puStack_a0 = &UNK_14304db78;
  uStack_98 = 0xe;
  puStack_90 = &UNK_14304db86;
  uStack_88 = 0xd;
  pppbStack_80 = (byte ***)&pppuStack_138;
  pppuStack_d8 = (undefined8 ***)pdb_1419b7350(&pppbStack_c8,&pppbStack_80);
  if (((byte ****)pppuStack_d8 != (byte ****)0x0) ||
     (pppuStack_d8 = param_3, uVar80 = pdb_140f4f180(param_2,param_3,pcStack_130,uStack_128),
     (uVar80 & 1) != 0)) {
    pppbStack_f8 = (byte ***)&pppuStack_d8;
    pppbStack_f0 = (byte ***)pdb_140f59780;
    pdb_140f60760(&pppbStack_c8,&UNK_14304dbac,&pppbStack_f8);
    pppbStack_f8 = pppbStack_c8;
    pppbStack_f0 = pppbStack_c0;
    pppbStack_e8 = pppbStack_b8;
    pdb_140acec60(param_1,&pppbStack_f8);
    pdb_1404b38e0(&pppuStack_d8);
    goto joined_r0x000140ace52a;
  }
  lVar77 = pdb_140f3ecf0(param_2,param_3);
  if (lVar77 == 0) {
LAB_140ace4b0:
    pppbVar81 = (byte ***)0x1;
    pppbStack_c8 = (byte ***)0x0;
    pppbVar79 = (byte ***)0x0;
  }
  else {
    pdb_140f5fd10(&pppbStack_c8,lVar77,param_3);
    pppbVar79 = pppbStack_b8;
    pppbVar84 = pppbStack_c0;
    pppbVar81 = pppbStack_c0;
    if (SBORROW8(0,(longlong)pppbStack_c8)) {
      if ((longlong)pppbStack_b8 < 0) {
        uVar83 = 0;
      }
      else {
        if (pppbStack_b8 == (byte ***)0x0) goto LAB_140ace4b0;
        pdb_14007ee60(-(longlong)pppbStack_c8);
        uVar83 = 1;
        pppbVar81 = (byte ***)pub_1406abab0((ulonglong)pppbVar79,1);
        if (pppbVar81 != (byte ***)0x0) {
          pub_142e32760(pppbVar81,pppbVar84,pppbVar79);
          pppbStack_c8 = pppbVar79;
          goto LAB_140ace4b9;
        }
      }
      pdb_142dc7e2a(uVar83,pppbVar79);
LAB_140ace476:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
LAB_140ace4b9:
  pcStack_d0 = pdb_140001020;
  pppuStack_d8 = &pppbStack_c8;
  pppbStack_c0 = pppbVar81;
  pppbStack_b8 = pppbVar79;
  pdb_140f60760(&pppbStack_f8,&UNK_14304db93,&pppuStack_d8);
  if (pppbStack_c8 != (byte ***)0x0) {
    pub_1406abac0((byte *)pppbStack_c0,(ulonglong)pppbStack_c8,1);
  }
  pppbStack_c8 = pppbStack_f8;
  pppbStack_c0 = pppbStack_f0;
  pppbStack_b8 = pppbStack_e8;
  pdb_140acec60(param_1,&pppbStack_c8);
  *(undefined4 *)(param_1 + 0x148) = 1000000000;
joined_r0x000140ace52a:
  if ((byte ****)pppuStack_138 != (byte ****)0x0) {
    pub_1406abac0((byte *)pcStack_130,(ulonglong)pppuStack_138,1);
  }
  if (pppbStack_118 != (byte ***)0x0) {
    pub_1406abac0(pbStack_110,(ulonglong)pppbStack_118,1);
  }
  return;
}

