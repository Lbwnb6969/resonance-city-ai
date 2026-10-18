// VA 0x140ad5e20, PDB extent 4150 bytes
// country_core::systems::mod_editor::ModEditor::create_mod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::mod_editor::ModEditor::create_mod
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 4150 */

void pdb_140ad5e20(int *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
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
  byte *****pppppbVar35;
  bool bVar36;
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
  undefined1 auVar60 [16];
  char cVar61;
  uint uVar62;
  byte *******pppppppbVar63;
  ulonglong uVar64;
  longlong lVar65;
  byte ******ppppppbVar66;
  byte *******pppppppbVar67;
  byte *******pppppppbVar68;
  byte *******pppppppbVar69;
  byte *pbVar70;
  byte *pbVar71;
  byte *******unaff_RBX;
  byte *******pppppppbVar72;
  byte *******unaff_RDI;
  byte *******unaff_R13;
  uint uVar73;
  byte *******unaff_R14;
  undefined8 uVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
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
  byte *******pppppppbStack_d08;
  byte ******ppppppbStack_d00;
  byte *******pppppppbStack_cf8;
  code *pcStack_cf0;
  undefined *puStack_ce8;
  longlong alStack_a98 [78];
  undefined8 uStack_828;
  byte ******ppppppbStack_820;
  undefined1 auStack_818 [608];
  byte *******pppppppbStack_5b8;
  byte *******pppppppbStack_5b0;
  byte ******ppppppbStack_5a8;
  byte *******pppppppbStack_5a0;
  byte *******pppppppbStack_358;
  byte ******ppppppbStack_350;
  byte *******pppppppbStack_348;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  byte ******ppppppbStack_d8;
  byte *******pppppppbStack_d0;
  ulonglong uStack_c8;
  byte *******pppppppbStack_c0;
  undefined8 uStack_b8;
  byte *******pppppppbStack_a8;
  byte ******ppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  code *pcStack_80;
  byte *******pppppppbStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (*param_1 != 3) {
    return;
  }
  pppppppbVar72 = *(byte ********)(param_1 + 6);
  pppppppbVar63 = (byte *******)pdb_14014b650(*(undefined8 *)(param_1 + 4));
  pppppppbStack_5b8 = pppppppbVar63;
  pppppppbStack_5b0 = pppppppbVar72;
  if (pppppppbVar72 == (byte *******)0x0) {
    pdb_14007ee60();
    ppppppbVar66 = (byte ******)pub_1406abab0(0x19,1);
    uVar74 = _UNK_14304df37;
    if (ppppppbVar66 != (byte ******)0x0) {
      *(ulonglong *)((longlong)ppppppbVar66 + 9) = CONCAT17(UNK_14304df36,_DAT_14304df2f);
      *(undefined8 *)((longlong)ppppppbVar66 + 0x11) = uVar74;
      pppppbVar35 = (byte *****)CONCAT71(_DAT_14304df2f,UNK_14304df2e);
      *ppppppbVar66 = _DAT_14304df26;
      ppppppbVar66[1] = pppppbVar35;
      pppppppbVar63 = (byte *******)0x19;
      pppppppbVar72 = (byte *******)0x19;
      goto LAB_140ad60d6;
    }
    pdb_142dc7e2a(1,0x19);
LAB_140ad638c:
    pdb_142dc7e2a(1,0x21);
LAB_140ad639b:
    pdb_142dc7e2a(1,0x26);
    pppppppbVar67 = unaff_R14;
LAB_140ad63aa:
    pppppppbVar69 = (byte *******)pdb_142dc7e2a(1,0x32);
    pppppppbVar63 = unaff_RBX;
    pppppppbVar72 = unaff_RDI;
LAB_140ad63b9:
    do {
      *(byte *)((longlong)pppppppbVar67 + (longlong)pppppppbVar69) =
           ((byte)(*(byte *)((longlong)pppppppbVar67 + (longlong)pppppppbVar69) + 0x9f) < 0x1a) << 5
           ^ *(byte *)((longlong)pppppppbVar67 + (longlong)pppppppbVar69);
      pppppppbVar69 = (byte *******)((longlong)pppppppbVar69 + 1);
LAB_140ad63d3:
    } while (unaff_R13 != pppppppbVar69);
LAB_140ad63d8:
    if (unaff_R13 == (byte *******)0x4) {
      if (((((((*(int *)pppppppbVar67 == 0x314d4f43) || (*(int *)pppppppbVar67 == 0x324d4f43)) ||
             (*(int *)pppppppbVar67 == 0x334d4f43)) ||
            (((*(int *)pppppppbVar67 == 0x344d4f43 || (*(int *)pppppppbVar67 == 0x354d4f43)) ||
             ((*(int *)pppppppbVar67 == 0x364d4f43 ||
              ((*(int *)pppppppbVar67 == 0x374d4f43 || (*(int *)pppppppbVar67 == 0x384d4f43))))))))
           || (*(int *)pppppppbVar67 == 0x394d4f43)) ||
          (((((*(int *)pppppppbVar67 == 0x3154504c || (*(int *)pppppppbVar67 == 0x3254504c)) ||
             (*(int *)pppppppbVar67 == 0x3354504c)) ||
            ((*(int *)pppppppbVar67 == 0x3454504c || (*(int *)pppppppbVar67 == 0x3554504c)))) ||
           ((*(int *)pppppppbVar67 == 0x3654504c ||
            ((*(int *)pppppppbVar67 == 0x3754504c || (*(int *)pppppppbVar67 == 0x3854504c)))))))) ||
         (*(int *)pppppppbVar67 == 0x3954504c)) goto LAB_140ad66e2;
    }
    else if ((unaff_R13 == (byte *******)0x3) &&
            ((((*(char *)((longlong)pppppppbVar67 + 2) == 'N' && *(short *)pppppppbVar67 == 0x4f43
               || (*(char *)((longlong)pppppppbVar67 + 2) == 'N' &&
                   *(short *)pppppppbVar67 == 0x5250)) ||
              (*(char *)((longlong)pppppppbVar67 + 2) == 'X' && *(short *)pppppppbVar67 == 0x5541))
             || (*(char *)((longlong)pppppppbVar67 + 2) == 'L' && *(short *)pppppppbVar67 == 0x554e)
             ))) {
LAB_140ad66e2:
      pppppppbStack_358 = (byte *******)&pppppppbStack_5b8;
      ppppppbStack_350 = (byte ******)pdb_1402ed400;
      pppppppbStack_a8 = pppppppbVar67;
      pppppppbStack_78 = unaff_R13;
      pdb_140f60760(&pppppppbStack_d08,&UNK_14304debb,&pppppppbStack_358);
      pppppppbVar63 = pppppppbStack_cf8;
      ppppppbVar66 = ppppppbStack_d00;
      pppppppbVar72 = pppppppbStack_d08;
      pub_1406abac0((byte *)pppppppbVar67,(ulonglong)pppppppbStack_78,1);
      goto LAB_140ad60d6;
    }
  }
  else {
    if (pppppppbVar72 < (byte *******)0x20) {
      uVar64 = pdb_140f69050();
    }
    else {
      uVar64 = pdb_140f68a30(pppppppbVar63);
    }
    unaff_RBX = pppppppbVar63;
    unaff_RDI = pppppppbVar72;
    if (0x40 < uVar64) {
      pdb_14007ee60();
      ppppppbVar66 = (byte ******)pub_1406abab0(0x21,1);
      pppppbVar35 = _UNK_14304df1d;
      if (ppppppbVar66 != (byte ******)0x0) {
        ppppppbVar66[2] = _DAT_14304df15;
        ppppppbVar66[3] = pppppbVar35;
        pppppbVar35 = _UNK_14304df0d;
        *ppppppbVar66 = _DAT_14304df05;
        ppppppbVar66[1] = pppppbVar35;
        *(code *)(ppppppbVar66 + 4) = (code)0x73;
        pppppppbVar63 = (byte *******)0x21;
        pppppppbVar72 = (byte *******)0x21;
        goto LAB_140ad60d6;
      }
      goto LAB_140ad638c;
    }
    unaff_R13 = pppppppbVar63;
    do {
      bVar2 = *(byte *)unaff_R13;
      unaff_R14 = (byte *******)(ulonglong)bVar2;
      if ((char)bVar2 < '\0') {
        uVar62 = bVar2 & 0x1f;
        uVar73 = *(byte *)((longlong)unaff_R13 + 1) & 0x3f;
        if (bVar2 < 0xe0) {
          unaff_R13 = (byte *******)((longlong)unaff_R13 + 2);
          uVar73 = uVar62 << 6 | uVar73;
joined_r0x000140ad5f85:
          unaff_R14 = (byte *******)(ulonglong)uVar73;
        }
        else {
          uVar73 = *(byte *)((longlong)unaff_R13 + 2) & 0x3f | uVar73 << 6;
          if (bVar2 < 0xf0) {
            unaff_R13 = (byte *******)((longlong)unaff_R13 + 3);
            uVar73 = uVar73 | uVar62 << 0xc;
            goto joined_r0x000140ad5f85;
          }
          uVar73 = *(byte *)((longlong)unaff_R13 + 3) & 0x3f | uVar73 << 6 | (bVar2 & 7) << 0x12;
          unaff_R14 = (byte *******)(ulonglong)uVar73;
          if (uVar73 == 0x110000) break;
          unaff_R13 = (byte *******)((longlong)unaff_R13 + 4);
        }
        if (uVar73 < 0x80) goto LAB_140ad5eda;
        if (((uint)unaff_R14 < 0xaa) ||
           ((cVar61 = pdb_140f6a0f0(unaff_R14), cVar61 == '\0' &&
            (((uint)unaff_R14 < 0xb2 || (cVar61 = pdb_140f6a660(unaff_R14), cVar61 == '\0'))))))
        goto LAB_140ad5ef1;
      }
      else {
        unaff_R13 = (byte *******)((longlong)unaff_R13 + 1);
LAB_140ad5eda:
        if ((9 < (uint)unaff_R14 - 0x30) && (0x19 < ((uint)unaff_R14 & 0x5f) - 0x41)) {
LAB_140ad5ef1:
          uVar73 = (int)unaff_R14 - 0x20;
          unaff_R14 = (byte *******)(ulonglong)uVar73;
          if ((0x3f < uVar73) || ((0x8000000000006001U >> ((ulonglong)unaff_R14 & 0x3f) & 1) == 0))
          goto LAB_140ad61e6;
        }
      }
    } while (unaff_R13 != (byte *******)((longlong)pppppppbVar63 + (longlong)pppppppbVar72));
    if ((*(byte *)pppppppbVar63 == 0x2e) ||
       (*(byte *)((longlong)pppppppbVar63 + (longlong)pppppppbVar72 + -1) == 0x2e)) {
      pdb_14007ee60();
      ppppppbVar66 = (byte ******)pub_1406abab0(0x26,1);
      pppppbVar35 = _UNK_14304def7;
      if (ppppppbVar66 != (byte ******)0x0) {
        ppppppbVar66[2] = _DAT_14304deef;
        ppppppbVar66[3] = pppppbVar35;
        pppppbVar35 = _UNK_14304dee7;
        *ppppppbVar66 = _DAT_14304dedf;
        ppppppbVar66[1] = pppppbVar35;
        *(undefined8 *)((longlong)ppppppbVar66 + 0x1e) = 0x746f642061206874;
        pppppppbVar63 = (byte *******)0x26;
        pppppppbVar72 = (byte *******)0x26;
        goto LAB_140ad60d6;
      }
      goto LAB_140ad639b;
    }
    unaff_R14 = (byte *******)0x0;
    do {
      while( true ) {
        pbVar71 = (byte *)((longlong)pppppppbVar63 + (longlong)unaff_R14);
        unaff_R13 = pppppppbVar72;
        if ((byte *)((longlong)pppppppbVar72 - (longlong)unaff_R14) < (byte *)0x10) {
          pbVar70 = (byte *)0x0;
          if (pppppppbVar72 == unaff_R14) goto LAB_140ad61d3;
          while (pbVar71[(longlong)pbVar70] != 0x2e) {
            pbVar70 = pbVar70 + 1;
            if ((byte *)((longlong)pppppppbVar72 - (longlong)unaff_R14) == pbVar70)
            goto LAB_140ad61d3;
          }
        }
        else {
          lVar65 = pdb_140f69320(0x2e);
          pbVar70 = pbVar71;
          if (lVar65 != 1) goto LAB_140ad61d3;
        }
        pppppppbVar67 = (byte *******)(pbVar70 + (longlong)unaff_R14 + 1);
        pppppppbVar69 = (byte *******)(pbVar70 + (longlong)unaff_R14);
        if (pppppppbVar69 < pppppppbVar72) break;
        unaff_R14 = pppppppbVar67;
        if (pppppppbVar72 < pppppppbVar67) goto LAB_140ad61d3;
      }
    } while ((pppppppbVar67 <= pppppppbVar72) &&
            (unaff_R14 = pppppppbVar67,
            *(byte *)((longlong)pppppppbVar63 + (longlong)pppppppbVar69) != 0x2e));
    if (*(byte *)((longlong)pppppppbVar63 + (longlong)pppppppbVar69) == 0x2e) {
      unaff_R13 = pppppppbVar69;
    }
LAB_140ad61d3:
    if ((longlong)unaff_R13 < 0) {
      uVar74 = 0;
LAB_140ad61db:
      pdb_142dc7e2a(uVar74,unaff_R13);
LAB_140ad61e6:
      pdb_14007ee60();
      ppppppbVar66 = (byte ******)pub_1406abab0(0x32,1);
      pppppbVar35 = _UNK_14304deb1;
      pppppppbVar67 = unaff_R14;
      if (ppppppbVar66 != (byte ******)0x0) {
        ppppppbVar66[4] = _DAT_14304dea9;
        ppppppbVar66[5] = pppppbVar35;
        pppppbVar35 = _UNK_14304dea1;
        ppppppbVar66[2] = _DAT_14304de99;
        ppppppbVar66[3] = pppppbVar35;
        pppppbVar35 = _UNK_14304de91;
        *ppppppbVar66 = _DAT_14304de89;
        ppppppbVar66[1] = pppppbVar35;
        *(undefined2 *)(ppppppbVar66 + 6) = 0x796c;
        pppppppbVar72 = (byte *******)0x32;
        pppppppbVar63 = (byte *******)0x32;
        goto LAB_140ad60d6;
      }
      goto LAB_140ad63aa;
    }
    if (unaff_R13 != (byte *******)0x0) {
      pdb_14007ee60();
      uVar74 = 1;
      pppppppbVar67 = (byte *******)pub_1406abab0((ulonglong)unaff_R13,1);
      if (pppppppbVar67 == (byte *******)0x0) goto LAB_140ad61db;
      pub_142e32760(pppppppbVar67,pppppppbVar63,unaff_R13);
      auVar60 = _DAT_14304d810;
      bVar59 = UNK_142e4234f;
      bVar58 = UNK_142e4234e;
      bVar57 = UNK_142e4234d;
      bVar56 = UNK_142e4234c;
      bVar55 = UNK_142e4234b;
      bVar54 = UNK_142e4234a;
      bVar53 = UNK_142e42349;
      bVar52 = UNK_142e42348;
      bVar51 = UNK_142e42347;
      bVar50 = UNK_142e42346;
      bVar49 = UNK_142e42345;
      bVar48 = UNK_142e42344;
      bVar47 = UNK_142e42343;
      bVar46 = UNK_142e42342;
      bVar45 = UNK_142e42341;
      bVar44 = DAT_142e42340;
      bVar82 = UNK_142e346df;
      bVar81 = UNK_142e346de;
      bVar80 = UNK_142e346dd;
      bVar79 = UNK_142e346dc;
      bVar78 = UNK_142e346db;
      bVar77 = UNK_142e346da;
      bVar76 = UNK_142e346d9;
      bVar75 = UNK_142e346d8;
      bVar43 = UNK_142e346d7;
      bVar42 = UNK_142e346d6;
      bVar41 = UNK_142e346d5;
      bVar40 = UNK_142e346d4;
      bVar39 = UNK_142e346d3;
      bVar38 = UNK_142e346d2;
      bVar37 = UNK_142e346d1;
      bVar2 = DAT_142e346d0;
      if (unaff_R13 < (byte *******)0x8) {
        pppppppbVar69 = (byte *******)0x0;
        goto LAB_140ad63b9;
      }
      if (unaff_R13 < (byte *******)0x20) {
        pppppppbVar68 = (byte *******)0x0;
LAB_140ad6322:
        auVar60 = _DAT_14304d820;
        uVar64 = _DAT_142f97ed0;
        bVar43 = UNK_142f97ec7;
        bVar42 = UNK_142f97ec6;
        bVar41 = UNK_142f97ec5;
        bVar40 = UNK_142f97ec4;
        bVar39 = UNK_142f97ec3;
        bVar38 = UNK_142f97ec2;
        bVar37 = UNK_142f97ec1;
        bVar2 = DAT_142f97ec0;
        pppppppbVar69 = (byte *******)((ulonglong)unaff_R13 & 0x7ffffffffffffff8);
        do {
          uVar1 = *(ulonglong *)((longlong)pppppppbVar67 + (longlong)pppppppbVar68);
          bVar75 = (char)uVar1 + auVar60[0];
          bVar76 = (char)(uVar1 >> 8) + auVar60[1];
          bVar77 = (char)(uVar1 >> 0x10) + auVar60[2];
          bVar78 = (char)(uVar1 >> 0x18) + auVar60[3];
          bVar79 = (char)(uVar1 >> 0x20) + auVar60[4];
          bVar80 = (char)(uVar1 >> 0x28) + auVar60[5];
          bVar81 = (char)(uVar1 >> 0x30) + auVar60[6];
          bVar82 = (char)(uVar1 >> 0x38) + auVar60[7];
          *(ulonglong *)((longlong)pppppppbVar67 + (longlong)pppppppbVar68) =
               ~CONCAT17(-((byte)((bVar82 < bVar43) * bVar43 | (bVar82 >= bVar43) * bVar82) ==
                          bVar82),CONCAT16(-((byte)((bVar81 < bVar42) * bVar42 |
                                                   (bVar81 >= bVar42) * bVar81) == bVar81),
                                           CONCAT15(-((byte)((bVar80 < bVar41) * bVar41 |
                                                            (bVar80 >= bVar41) * bVar80) == bVar80),
                                                    CONCAT14(-((byte)((bVar79 < bVar40) * bVar40 |
                                                                     (bVar79 >= bVar40) * bVar79) ==
                                                              bVar79),CONCAT13(-((byte)((bVar78 < 
                                                  bVar39) * bVar39 | (bVar78 >= bVar39) * bVar78) ==
                                                  bVar78),CONCAT12(-((byte)((bVar77 < bVar38) *
                                                                            bVar38 | (bVar77 >=
                                                                                     bVar38) * 
                                                  bVar77) == bVar77),
                                                  CONCAT11(-((byte)((bVar76 < bVar37) * bVar37 |
                                                                   (bVar76 >= bVar37) * bVar76) ==
                                                            bVar76),-((byte)((bVar75 < bVar2) *
                                                                             bVar2 | (bVar75 >=
                                                                                     bVar2) * bVar75
                                                                            ) == bVar75)))))))) &
               uVar64 ^ uVar1;
          pppppppbVar68 = pppppppbVar68 + 1;
          if (pppppppbVar69 == pppppppbVar68) goto LAB_140ad63d3;
        } while( true );
      }
      pppppppbVar69 = (byte *******)((ulonglong)unaff_R13 & 0x7fffffffffffffe0);
      pppppppbVar68 = (byte *******)0x0;
      do {
        pbVar71 = (byte *)((longlong)pppppppbVar67 + (longlong)pppppppbVar68);
        bVar4 = pbVar71[1];
        bVar5 = pbVar71[2];
        bVar6 = pbVar71[3];
        bVar7 = pbVar71[4];
        bVar8 = pbVar71[5];
        bVar9 = pbVar71[6];
        bVar10 = pbVar71[7];
        bVar11 = pbVar71[8];
        bVar12 = pbVar71[9];
        bVar13 = pbVar71[10];
        bVar14 = pbVar71[0xb];
        bVar15 = pbVar71[0xc];
        bVar16 = pbVar71[0xd];
        bVar17 = pbVar71[0xe];
        bVar18 = pbVar71[0xf];
        pbVar70 = (byte *)((longlong)(pppppppbVar67 + 2) + (longlong)pppppppbVar68);
        bVar19 = *pbVar70;
        bVar20 = pbVar70[1];
        bVar21 = pbVar70[2];
        bVar22 = pbVar70[3];
        bVar23 = pbVar70[4];
        bVar24 = pbVar70[5];
        bVar25 = pbVar70[6];
        bVar26 = pbVar70[7];
        bVar27 = pbVar70[8];
        bVar28 = pbVar70[9];
        bVar29 = pbVar70[10];
        bVar30 = pbVar70[0xb];
        bVar31 = pbVar70[0xc];
        bVar32 = pbVar70[0xd];
        bVar33 = pbVar70[0xe];
        bVar34 = pbVar70[0xf];
        bVar83 = *pbVar71 + auVar60[0];
        bVar84 = bVar4 + auVar60[1];
        bVar85 = bVar5 + auVar60[2];
        bVar86 = bVar6 + auVar60[3];
        bVar87 = bVar7 + auVar60[4];
        bVar88 = bVar8 + auVar60[5];
        bVar89 = bVar9 + auVar60[6];
        bVar90 = bVar10 + auVar60[7];
        bVar91 = bVar11 + auVar60[8];
        bVar92 = bVar12 + auVar60[9];
        bVar93 = bVar13 + auVar60[10];
        bVar94 = bVar14 + auVar60[0xb];
        bVar95 = bVar15 + auVar60[0xc];
        bVar96 = bVar16 + auVar60[0xd];
        bVar97 = bVar17 + auVar60[0xe];
        bVar98 = bVar18 + auVar60[0xf];
        bVar99 = bVar19 + auVar60[0];
        bVar100 = bVar20 + auVar60[1];
        bVar101 = bVar21 + auVar60[2];
        bVar102 = bVar22 + auVar60[3];
        bVar103 = bVar23 + auVar60[4];
        bVar104 = bVar24 + auVar60[5];
        bVar105 = bVar25 + auVar60[6];
        bVar106 = bVar26 + auVar60[7];
        bVar107 = bVar27 + auVar60[8];
        bVar108 = bVar28 + auVar60[9];
        bVar109 = bVar29 + auVar60[10];
        bVar110 = bVar30 + auVar60[0xb];
        bVar111 = bVar31 + auVar60[0xc];
        bVar112 = bVar32 + auVar60[0xd];
        bVar113 = bVar33 + auVar60[0xe];
        bVar114 = bVar34 + auVar60[0xf];
        pbVar70 = (byte *)((longlong)pppppppbVar67 + (longlong)pppppppbVar68);
        *pbVar70 = -((byte)((bVar44 < bVar83) * bVar44 | (bVar44 >= bVar83) * bVar83) == bVar83) &
                   bVar2 ^ *pbVar71;
        pbVar70[1] = -((byte)((bVar45 < bVar84) * bVar45 | (bVar45 >= bVar84) * bVar84) == bVar84) &
                     bVar37 ^ bVar4;
        pbVar70[2] = -((byte)((bVar46 < bVar85) * bVar46 | (bVar46 >= bVar85) * bVar85) == bVar85) &
                     bVar38 ^ bVar5;
        pbVar70[3] = -((byte)((bVar47 < bVar86) * bVar47 | (bVar47 >= bVar86) * bVar86) == bVar86) &
                     bVar39 ^ bVar6;
        pbVar70[4] = -((byte)((bVar48 < bVar87) * bVar48 | (bVar48 >= bVar87) * bVar87) == bVar87) &
                     bVar40 ^ bVar7;
        pbVar70[5] = -((byte)((bVar49 < bVar88) * bVar49 | (bVar49 >= bVar88) * bVar88) == bVar88) &
                     bVar41 ^ bVar8;
        pbVar70[6] = -((byte)((bVar50 < bVar89) * bVar50 | (bVar50 >= bVar89) * bVar89) == bVar89) &
                     bVar42 ^ bVar9;
        pbVar70[7] = -((byte)((bVar51 < bVar90) * bVar51 | (bVar51 >= bVar90) * bVar90) == bVar90) &
                     bVar43 ^ bVar10;
        pbVar70[8] = -((byte)((bVar52 < bVar91) * bVar52 | (bVar52 >= bVar91) * bVar91) == bVar91) &
                     bVar75 ^ bVar11;
        pbVar70[9] = -((byte)((bVar53 < bVar92) * bVar53 | (bVar53 >= bVar92) * bVar92) == bVar92) &
                     bVar76 ^ bVar12;
        pbVar70[10] = -((byte)((bVar54 < bVar93) * bVar54 | (bVar54 >= bVar93) * bVar93) == bVar93)
                      & bVar77 ^ bVar13;
        pbVar70[0xb] = -((byte)((bVar55 < bVar94) * bVar55 | (bVar55 >= bVar94) * bVar94) == bVar94)
                       & bVar78 ^ bVar14;
        pbVar70[0xc] = -((byte)((bVar56 < bVar95) * bVar56 | (bVar56 >= bVar95) * bVar95) == bVar95)
                       & bVar79 ^ bVar15;
        pbVar70[0xd] = -((byte)((bVar57 < bVar96) * bVar57 | (bVar57 >= bVar96) * bVar96) == bVar96)
                       & bVar80 ^ bVar16;
        pbVar70[0xe] = -((byte)((bVar58 < bVar97) * bVar58 | (bVar58 >= bVar97) * bVar97) == bVar97)
                       & bVar81 ^ bVar17;
        pbVar70[0xf] = -((byte)((bVar59 < bVar98) * bVar59 | (bVar59 >= bVar98) * bVar98) == bVar98)
                       & bVar82 ^ bVar18;
        pbVar71 = (byte *)((longlong)(pppppppbVar67 + 2) + (longlong)pppppppbVar68);
        *pbVar71 = -((byte)((bVar44 < bVar99) * bVar44 | (bVar44 >= bVar99) * bVar99) == bVar99) &
                   bVar2 ^ bVar19;
        pbVar71[1] = -((byte)((bVar45 < bVar100) * bVar45 | (bVar45 >= bVar100) * bVar100) ==
                      bVar100) & bVar37 ^ bVar20;
        pbVar71[2] = -((byte)((bVar46 < bVar101) * bVar46 | (bVar46 >= bVar101) * bVar101) ==
                      bVar101) & bVar38 ^ bVar21;
        pbVar71[3] = -((byte)((bVar47 < bVar102) * bVar47 | (bVar47 >= bVar102) * bVar102) ==
                      bVar102) & bVar39 ^ bVar22;
        pbVar71[4] = -((byte)((bVar48 < bVar103) * bVar48 | (bVar48 >= bVar103) * bVar103) ==
                      bVar103) & bVar40 ^ bVar23;
        pbVar71[5] = -((byte)((bVar49 < bVar104) * bVar49 | (bVar49 >= bVar104) * bVar104) ==
                      bVar104) & bVar41 ^ bVar24;
        pbVar71[6] = -((byte)((bVar50 < bVar105) * bVar50 | (bVar50 >= bVar105) * bVar105) ==
                      bVar105) & bVar42 ^ bVar25;
        pbVar71[7] = -((byte)((bVar51 < bVar106) * bVar51 | (bVar51 >= bVar106) * bVar106) ==
                      bVar106) & bVar43 ^ bVar26;
        pbVar71[8] = -((byte)((bVar52 < bVar107) * bVar52 | (bVar52 >= bVar107) * bVar107) ==
                      bVar107) & bVar75 ^ bVar27;
        pbVar71[9] = -((byte)((bVar53 < bVar108) * bVar53 | (bVar53 >= bVar108) * bVar108) ==
                      bVar108) & bVar76 ^ bVar28;
        pbVar71[10] = -((byte)((bVar54 < bVar109) * bVar54 | (bVar54 >= bVar109) * bVar109) ==
                       bVar109) & bVar77 ^ bVar29;
        pbVar71[0xb] = -((byte)((bVar55 < bVar110) * bVar55 | (bVar55 >= bVar110) * bVar110) ==
                        bVar110) & bVar78 ^ bVar30;
        pbVar71[0xc] = -((byte)((bVar56 < bVar111) * bVar56 | (bVar56 >= bVar111) * bVar111) ==
                        bVar111) & bVar79 ^ bVar31;
        pbVar71[0xd] = -((byte)((bVar57 < bVar112) * bVar57 | (bVar57 >= bVar112) * bVar112) ==
                        bVar112) & bVar80 ^ bVar32;
        pbVar71[0xe] = -((byte)((bVar58 < bVar113) * bVar58 | (bVar58 >= bVar113) * bVar113) ==
                        bVar113) & bVar81 ^ bVar33;
        pbVar71[0xf] = -((byte)((bVar59 < bVar114) * bVar59 | (bVar59 >= bVar114) * bVar114) ==
                        bVar114) & bVar82 ^ bVar34;
        pppppppbVar68 = pppppppbVar68 + 4;
      } while (pppppppbVar69 != pppppppbVar68);
      if (unaff_R13 != pppppppbVar69) {
        pppppppbVar68 = pppppppbVar69;
        if (((ulonglong)unaff_R13 & 0x18) != 0) goto LAB_140ad6322;
        goto LAB_140ad63b9;
      }
      goto LAB_140ad63d8;
    }
    pppppppbVar67 = (byte *******)0x1;
  }
  pdb_140225b90(&pppppppbStack_d08,pppppppbVar72,0,1,1);
  pppppppbVar69 = pppppppbStack_cf8;
  ppppppbVar66 = ppppppbStack_d00;
  if ((int)pppppppbStack_d08 == 1) {
    pppppppbStack_a8 = pppppppbVar67;
    pppppppbStack_78 = unaff_R13;
    pdb_142dc7e2a(ppppppbStack_d00,pppppppbStack_cf8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pub_142e32760(pppppppbStack_cf8,pppppppbVar63,pppppppbVar72);
  if (unaff_R13 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbVar67,(ulonglong)unaff_R13,1);
  }
  ppppppbStack_a0 = ppppppbVar66;
  pppppppbStack_98 = pppppppbVar69;
  pppppppbStack_90 = pppppppbVar72;
  pdb_140d9c240(&uStack_c8);
  pppppppbStack_78 = pppppppbStack_c0;
  pdb_140f4f710(&pppppppbStack_d08,pppppppbStack_c0,uStack_b8);
  ppppppbVar66 = ppppppbStack_d00;
  if (pppppppbStack_d08 == (byte *******)0x2) {
    pppppppbStack_358 = (byte *******)0x2;
    ppppppbStack_350 = ppppppbStack_d00;
    pdb_1404b38e0(&ppppppbStack_350);
    alStack_a98[0] = 2;
    pppppppbStack_5b8 = (byte *******)&pppppppbStack_5b8;
    pppppppbStack_5b0 = &ppppppbStack_a0;
    uStack_828 = 2;
LAB_140ad6768:
    pppppppbStack_d08 = (byte *******)0x2;
    if ((int)alStack_a98[0] != 2) {
      pppppppbStack_88 = (byte *******)&pppppppbStack_5b8;
      do {
        pdb_140f59fa0(&pppppppbStack_358,alStack_a98);
        if ((int)pppppppbStack_358 != 1) {
          if (alStack_a98[0] != 2) {
            pdb_1404b29e0(alStack_a98);
          }
          goto LAB_140ad67d8;
        }
        cVar61 = pdb_140afda90(&pppppppbStack_88,&ppppppbStack_350);
      } while (cVar61 == '\0');
      goto LAB_140ad67c1;
    }
LAB_140ad67d8:
    alStack_a98[0] = 2;
    bVar36 = false;
  }
  else {
    pub_142e32760(&pppppppbStack_5b8,&pppppppbStack_cf8,0x260);
    ppppppbStack_820 = ppppppbVar66;
    pub_142e32760(auStack_818,&pppppppbStack_5b8,0x260);
    alStack_a98[0] = 2;
    pppppppbStack_5b8 = (byte *******)&pppppppbStack_5b8;
    pppppppbStack_5b0 = &ppppppbStack_a0;
    uStack_828 = 2;
    pub_142e32760(&ppppppbStack_d00,&ppppppbStack_820,0x268);
    pppppppbStack_88 = (byte *******)&pppppppbStack_5b8;
    do {
      pdb_140f59fa0(&pppppppbStack_358,&pppppppbStack_d08);
      if ((int)pppppppbStack_358 != 1) {
        uStack_828 = 2;
        if ((int)pppppppbStack_d08 != 2) {
          pdb_1404b29e0(&pppppppbStack_d08);
        }
        goto LAB_140ad6768;
      }
      cVar61 = pdb_140afda90(&pppppppbStack_88,&ppppppbStack_350);
    } while (cVar61 == '\0');
LAB_140ad67c1:
    bVar36 = true;
  }
  pdb_14096d010(&pppppppbStack_d08);
  if (bVar36) {
    pppppppbStack_358 = &ppppppbStack_a0;
    ppppppbStack_350 = (byte ******)pdb_140001020;
    pdb_140f60760(&pppppppbStack_d08,&UNK_14304de50,&pppppppbStack_358);
    ppppppbVar66 = ppppppbStack_d00;
    pppppppbVar72 = pppppppbStack_d08;
    pppppppbVar63 = pppppppbStack_cf8;
LAB_140ad6a6c:
    if (uStack_c8 != 0) {
      pub_1406abac0((byte *)pppppppbStack_78,uStack_c8,1);
    }
    if (ppppppbStack_a0 != (byte ******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_98,(ulonglong)ppppppbStack_a0,1);
    }
  }
  else {
    pdb_140f3e9e0(&pppppppbStack_5b8,pppppppbStack_78,uStack_b8,pppppppbStack_98,pppppppbStack_90);
    pppppppbStack_d08 = (byte *******)CONCAT71(pppppppbStack_d08._1_7_,1);
    pppppppbVar72 =
         (byte *******)pdb_140f46c40(&pppppppbStack_d08,pppppppbStack_5b0,ppppppbStack_5a8);
    if (pppppppbVar72 != (byte *******)0x0) {
      ppppppbStack_d00 = (byte ******)pdb_140f58250;
      pppppppbStack_cf8 = (byte *******)&pppppppbStack_88;
      pcStack_cf0 = pdb_140f59780;
      pppppppbStack_d08 = (byte *******)&pppppppbStack_5b8;
      pppppppbStack_88 = pppppppbVar72;
      pdb_140f60760(&pppppppbStack_358,&UNK_14304de72,&pppppppbStack_d08);
      ppppppbVar66 = ppppppbStack_350;
      pppppppbVar72 = pppppppbStack_358;
      pdb_1404b38e0(&pppppppbStack_88);
      if (!SBORROW8(0,(longlong)pppppppbVar72)) {
        pppppppbVar63 = pppppppbStack_348;
        if (pppppppbStack_5b8 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_5b0,(ulonglong)pppppppbStack_5b8,1);
        }
        goto LAB_140ad6a6c;
      }
    }
    if (2 < *_DAT_143ca8e90) {
      pdb_141b1e240(&pppppppbStack_358,pppppppbStack_5b0,ppppppbStack_5a8,2);
      pcStack_80 = pdb_140f58250;
      pppppppbStack_d08 = (byte *******)&UNK_14304db08;
      ppppppbStack_d00 = (byte ******)0x21;
      pppppppbStack_cf8 = (byte *******)&UNK_14304db08;
      pcStack_cf0 = (code *)0x21;
      puStack_ce8 = &UNK_14304de38;
      pppppppbStack_88 = (byte *******)&pppppppbStack_358;
      pdb_1400c9be0(&UNK_14304de10,&pppppppbStack_88,3,&pppppppbStack_d08);
      if (pppppppbStack_358 != (byte *******)0x0) {
        pub_1406abac0((byte *)ppppppbStack_350,(ulonglong)pppppppbStack_358,1);
      }
    }
    pppppppbVar72 = pppppppbStack_5b0;
    pppppppbVar67 = pppppppbStack_5b8;
    if (uStack_c8 != 0) {
      pub_1406abac0((byte *)pppppppbStack_78,uStack_c8,1);
    }
    if (ppppppbStack_a0 != (byte ******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_98,(ulonglong)ppppppbStack_a0,1);
    }
    ppppppbVar66 = ppppppbStack_5a8;
    pppppppbVar63 = pppppppbStack_5a0;
    if (!SBORROW8(0,(longlong)pppppppbVar67)) {
      pppppppbStack_e8 = pppppppbVar67;
      pppppppbStack_e0 = pppppppbVar72;
      ppppppbStack_d8 = ppppppbStack_5a8;
      pppppppbStack_d0 = pppppppbStack_5a0;
      pdb_140ad6f30(param_1,&pppppppbStack_e8);
      return;
    }
  }
LAB_140ad60d6:
  uVar64 = *(ulonglong *)(param_1 + 8);
  if ((!SBORROW8(0,uVar64)) && (uVar64 != 0)) {
    pub_1406abac0(*(byte **)(param_1 + 10),uVar64,1);
  }
  *(byte ********)(param_1 + 8) = pppppppbVar72;
  *(byte *******)(param_1 + 10) = ppppppbVar66;
  *(byte ********)(param_1 + 0xc) = pppppppbVar63;
  return;
}

