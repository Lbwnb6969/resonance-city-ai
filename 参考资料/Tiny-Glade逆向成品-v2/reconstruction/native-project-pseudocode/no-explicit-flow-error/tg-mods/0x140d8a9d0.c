// VA 0x140d8a9d0, PDB extent 1084 bytes
// tg_mods::overlay::index_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::index_file
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 1084 */

void pdb_140d8a9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  code *pcVar2;
  byte *pbVar3;
  ulonglong uVar4;
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
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  undefined *puVar76;
  ulonglong *arg0;
  longlong lVar77;
  ulonglong *puVar78;
  ulonglong *puVar79;
  ulonglong uVar80;
  code cVar81;
  undefined8 uVar82;
  undefined1 uVar83;
  ulonglong uVar84;
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
  undefined8 uStack_f0;
  undefined *puStack_e8;
  ulonglong *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  ulonglong **ppuStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong *puStack_70;
  code *pcStack_68;
  ulonglong *puStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uVar82 = param_5;
  lVar77 = pdb_140f3e340(param_4,param_5,param_2,param_3);
  if (lVar77 != 0) {
    pdb_140f69110(&uStack_f0,lVar77,uVar82);
    arg0 = puStack_e0;
    if ((char)uStack_f0 == '\0') {
      uVar83 = puStack_e0 == (ulonglong *)0x0;
      if (-1 < (longlong)puStack_e0) goto LAB_140d8ab1e;
      uVar82 = 0;
      do {
        uVar83 = 1;
        pdb_142dc7e2a(uVar82,arg0);
LAB_140d8ab1e:
        puVar76 = puStack_e8;
        if ((bool)uVar83) {
          pcStack_68 = (code *)0x1;
          goto LAB_140d8acf3;
        }
        pdb_14007ee60();
        uVar82 = 1;
        pcStack_68 = (code *)pub_1406abab0((ulonglong)arg0,1);
        bVar67 = UNK_142e34f0f;
        bVar66 = UNK_142e34f0e;
        bVar65 = UNK_142e34f0d;
        bVar64 = UNK_142e34f0c;
        bVar63 = UNK_142e34f0b;
        bVar62 = UNK_142e34f0a;
        bVar61 = UNK_142e34f09;
        bVar60 = UNK_142e34f08;
        bVar59 = UNK_142e34f07;
        bVar58 = UNK_142e34f06;
        bVar57 = UNK_142e34f05;
        bVar56 = UNK_142e34f04;
        bVar55 = UNK_142e34f03;
        bVar54 = UNK_142e34f02;
        bVar53 = UNK_142e34f01;
        bVar52 = DAT_142e34f00;
        bVar51 = UNK_142e34b4f;
        bVar50 = UNK_142e34b4e;
        bVar49 = UNK_142e34b4d;
        bVar48 = UNK_142e34b4c;
        bVar47 = UNK_142e34b4b;
        bVar46 = UNK_142e34b4a;
        bVar45 = UNK_142e34b49;
        bVar44 = UNK_142e34b48;
        bVar43 = UNK_142e34b47;
        bVar42 = UNK_142e34b46;
        bVar41 = UNK_142e34b45;
        bVar40 = UNK_142e34b44;
        bVar39 = UNK_142e34b43;
        bVar38 = UNK_142e34b42;
        bVar37 = UNK_142e34b41;
        bVar36 = DAT_142e34b40;
      } while (pcStack_68 == (code *)0x0);
      if ((ulonglong)((longlong)pcStack_68 - (longlong)puVar76) < 0x20 || arg0 < (ulonglong *)0x8) {
        puVar78 = (ulonglong *)0x0;
LAB_140d8ac55:
        uVar80 = (ulonglong)arg0 & 3;
        puVar79 = puVar78;
        if (uVar80 != 0) {
          do {
            cVar81 = (code)puVar76[(longlong)puVar79];
            if ((code)puVar76[(longlong)puVar79] == (code)0x5c) {
              cVar81 = (code)0x2f;
            }
            pcStack_68[(longlong)puVar79] = cVar81;
            puVar79 = (ulonglong *)((longlong)puVar79 + 1);
            uVar80 = uVar80 - 1;
          } while (uVar80 != 0);
        }
        if ((ulonglong)((longlong)puVar78 - (longlong)arg0) < 0xfffffffffffffffd) {
          do {
            cVar81 = (code)puVar76[(longlong)puVar79];
            if ((code)puVar76[(longlong)puVar79] == (code)0x5c) {
              cVar81 = (code)0x2f;
            }
            pcStack_68[(longlong)puVar79] = cVar81;
            cVar81 = (code)(puVar76 + 1)[(longlong)puVar79];
            if (cVar81 == (code)0x5c) {
              cVar81 = (code)0x2f;
            }
            (pcStack_68 + 1)[(longlong)puVar79] = cVar81;
            cVar81 = (code)(puVar76 + 2)[(longlong)puVar79];
            if (cVar81 == (code)0x5c) {
              cVar81 = (code)0x2f;
            }
            (pcStack_68 + 2)[(longlong)puVar79] = cVar81;
            cVar81 = (code)(puVar76 + 3)[(longlong)puVar79];
            if (cVar81 == (code)0x5c) {
              cVar81 = (code)0x2f;
            }
            (pcStack_68 + 3)[(longlong)puVar79] = cVar81;
            puVar79 = (ulonglong *)((longlong)puVar79 + 4);
          } while (arg0 != puVar79);
        }
      }
      else if (arg0 < (ulonglong *)0x20) {
        puVar79 = (ulonglong *)0x0;
LAB_140d8ac00:
        uVar80 = _DAT_14306a990;
        cVar75 = UNK_14306a987;
        cVar74 = UNK_14306a986;
        cVar73 = UNK_14306a985;
        cVar72 = UNK_14306a984;
        cVar71 = UNK_14306a983;
        cVar70 = UNK_14306a982;
        cVar69 = UNK_14306a981;
        cVar68 = DAT_14306a980;
        puVar78 = (ulonglong *)((ulonglong)arg0 & 0x7ffffffffffffff8);
        do {
          uVar4 = *(ulonglong *)(puVar76 + (longlong)puVar79);
          uVar84 = CONCAT17(-((char)(uVar4 >> 0x38) == cVar75),
                            CONCAT16(-((char)(uVar4 >> 0x30) == cVar74),
                                     CONCAT15(-((char)(uVar4 >> 0x28) == cVar73),
                                              CONCAT14(-((char)(uVar4 >> 0x20) == cVar72),
                                                       CONCAT13(-((char)(uVar4 >> 0x18) == cVar71),
                                                                CONCAT12(-((char)(uVar4 >> 0x10) ==
                                                                          cVar70),CONCAT11(-((char)(
                                                  uVar4 >> 8) == cVar69),-((char)uVar4 == cVar68))))
                                                  ))));
          *(ulonglong *)(pcStack_68 + (longlong)puVar79) = uVar84 & uVar80 | ~uVar84 & uVar4;
          puVar79 = puVar79 + 1;
        } while (puVar78 != puVar79);
        if (arg0 != puVar78) goto LAB_140d8ac55;
      }
      else {
        puVar78 = (ulonglong *)((ulonglong)arg0 & 0x7fffffffffffffe0);
        puVar79 = (ulonglong *)0x0;
        do {
          pbVar1 = puVar76 + (longlong)puVar79;
          bVar5 = pbVar1[1];
          bVar6 = pbVar1[2];
          bVar7 = pbVar1[3];
          bVar8 = pbVar1[4];
          bVar9 = pbVar1[5];
          bVar10 = pbVar1[6];
          bVar11 = pbVar1[7];
          bVar12 = pbVar1[8];
          bVar13 = pbVar1[9];
          bVar14 = pbVar1[10];
          bVar15 = pbVar1[0xb];
          bVar16 = pbVar1[0xc];
          bVar17 = pbVar1[0xd];
          bVar18 = pbVar1[0xe];
          bVar19 = pbVar1[0xf];
          pbVar3 = puVar76 + 0x10 + (longlong)puVar79;
          bVar20 = *pbVar3;
          bVar21 = pbVar3[1];
          bVar22 = pbVar3[2];
          bVar23 = pbVar3[3];
          bVar24 = pbVar3[4];
          bVar25 = pbVar3[5];
          bVar26 = pbVar3[6];
          bVar27 = pbVar3[7];
          bVar28 = pbVar3[8];
          bVar29 = pbVar3[9];
          bVar30 = pbVar3[10];
          bVar31 = pbVar3[0xb];
          bVar32 = pbVar3[0xc];
          bVar33 = pbVar3[0xd];
          bVar34 = pbVar3[0xe];
          bVar35 = pbVar3[0xf];
          bVar85 = -(*pbVar1 == bVar52);
          bVar86 = -(bVar5 == bVar53);
          bVar87 = -(bVar6 == bVar54);
          bVar88 = -(bVar7 == bVar55);
          bVar89 = -(bVar8 == bVar56);
          bVar90 = -(bVar9 == bVar57);
          bVar91 = -(bVar10 == bVar58);
          bVar92 = -(bVar11 == bVar59);
          bVar93 = -(bVar12 == bVar60);
          bVar94 = -(bVar13 == bVar61);
          bVar95 = -(bVar14 == bVar62);
          bVar96 = -(bVar15 == bVar63);
          bVar97 = -(bVar16 == bVar64);
          bVar98 = -(bVar17 == bVar65);
          bVar99 = -(bVar18 == bVar66);
          bVar100 = -(bVar19 == bVar67);
          bVar101 = -(bVar20 == bVar52);
          bVar102 = -(bVar21 == bVar53);
          bVar103 = -(bVar22 == bVar54);
          bVar104 = -(bVar23 == bVar55);
          bVar105 = -(bVar24 == bVar56);
          bVar106 = -(bVar25 == bVar57);
          bVar107 = -(bVar26 == bVar58);
          bVar108 = -(bVar27 == bVar59);
          bVar109 = -(bVar28 == bVar60);
          bVar110 = -(bVar29 == bVar61);
          bVar111 = -(bVar30 == bVar62);
          bVar112 = -(bVar31 == bVar63);
          bVar113 = -(bVar32 == bVar64);
          bVar114 = -(bVar33 == bVar65);
          bVar115 = -(bVar34 == bVar66);
          bVar116 = -(bVar35 == bVar67);
          pcVar2 = pcStack_68 + (longlong)puVar79;
          *pcVar2 = (code)(bVar85 & bVar36 | ~bVar85 & *pbVar1);
          pcVar2[1] = (code)(bVar86 & bVar37 | ~bVar86 & bVar5);
          pcVar2[2] = (code)(bVar87 & bVar38 | ~bVar87 & bVar6);
          pcVar2[3] = (code)(bVar88 & bVar39 | ~bVar88 & bVar7);
          pcVar2[4] = (code)(bVar89 & bVar40 | ~bVar89 & bVar8);
          pcVar2[5] = (code)(bVar90 & bVar41 | ~bVar90 & bVar9);
          pcVar2[6] = (code)(bVar91 & bVar42 | ~bVar91 & bVar10);
          pcVar2[7] = (code)(bVar92 & bVar43 | ~bVar92 & bVar11);
          pcVar2[8] = (code)(bVar93 & bVar44 | ~bVar93 & bVar12);
          pcVar2[9] = (code)(bVar94 & bVar45 | ~bVar94 & bVar13);
          pcVar2[10] = (code)(bVar95 & bVar46 | ~bVar95 & bVar14);
          pcVar2[0xb] = (code)(bVar96 & bVar47 | ~bVar96 & bVar15);
          pcVar2[0xc] = (code)(bVar97 & bVar48 | ~bVar97 & bVar16);
          pcVar2[0xd] = (code)(bVar98 & bVar49 | ~bVar98 & bVar17);
          pcVar2[0xe] = (code)(bVar99 & bVar50 | ~bVar99 & bVar18);
          pcVar2[0xf] = (code)(bVar100 & bVar51 | ~bVar100 & bVar19);
          pcVar2 = pcStack_68 + 0x10 + (longlong)puVar79;
          *pcVar2 = (code)(bVar101 & bVar36 | ~bVar101 & bVar20);
          pcVar2[1] = (code)(bVar102 & bVar37 | ~bVar102 & bVar21);
          pcVar2[2] = (code)(bVar103 & bVar38 | ~bVar103 & bVar22);
          pcVar2[3] = (code)(bVar104 & bVar39 | ~bVar104 & bVar23);
          pcVar2[4] = (code)(bVar105 & bVar40 | ~bVar105 & bVar24);
          pcVar2[5] = (code)(bVar106 & bVar41 | ~bVar106 & bVar25);
          pcVar2[6] = (code)(bVar107 & bVar42 | ~bVar107 & bVar26);
          pcVar2[7] = (code)(bVar108 & bVar43 | ~bVar108 & bVar27);
          pcVar2[8] = (code)(bVar109 & bVar44 | ~bVar109 & bVar28);
          pcVar2[9] = (code)(bVar110 & bVar45 | ~bVar110 & bVar29);
          pcVar2[10] = (code)(bVar111 & bVar46 | ~bVar111 & bVar30);
          pcVar2[0xb] = (code)(bVar112 & bVar47 | ~bVar112 & bVar31);
          pcVar2[0xc] = (code)(bVar113 & bVar48 | ~bVar113 & bVar32);
          pcVar2[0xd] = (code)(bVar114 & bVar49 | ~bVar114 & bVar33);
          pcVar2[0xe] = (code)(bVar115 & bVar50 | ~bVar115 & bVar34);
          pcVar2[0xf] = (code)(bVar116 & bVar51 | ~bVar116 & bVar35);
          puVar79 = puVar79 + 4;
        } while (puVar78 != puVar79);
        if (arg0 != puVar78) {
          puVar79 = puVar78;
          if (((ulonglong)arg0 & 0x18) == 0) goto LAB_140d8ac55;
          goto LAB_140d8ac00;
        }
      }
LAB_140d8acf3:
      puStack_70 = arg0;
      puStack_60 = arg0;
      uStack_51 = 1;
      pdb_140f3e010(&uStack_f0,param_4,param_5);
      uStack_51 = 0;
      pdb_1414b4420(&uStack_90,param_1,&puStack_70,&uStack_f0);
      if (SBORROW8(0,uStack_90)) {
        return;
      }
      goto joined_r0x000140d8ad38;
    }
  }
  if (*_DAT_143ca8e90 < 2) {
    return;
  }
  pdb_141b1e240(&uStack_90,param_4,param_5,3);
  pcStack_68 = pdb_140f58250;
  uStack_f0 = 0;
  puStack_e8 = &UNK_1431e5105;
  puStack_e0 = (ulonglong *)0x10;
  uStack_d8 = 0;
  puStack_d0 = &UNK_1431e50e7;
  uStack_c8 = 0x1d;
  uStack_c0 = 2;
  puStack_b8 = &UNK_1431e5105;
  uStack_b0 = 0x10;
  uStack_a8 = 0x27600000001;
  puStack_a0 = &UNK_1431e50c8;
  ppuStack_98 = &puStack_70;
  puStack_70 = &uStack_90;
  pdb_140f332f0(&uStack_52,&uStack_f0);
joined_r0x000140d8ad38:
  if (uStack_90 != 0) {
    pub_1406abac0(pbStack_88,uStack_90,1);
  }
  return;
}

