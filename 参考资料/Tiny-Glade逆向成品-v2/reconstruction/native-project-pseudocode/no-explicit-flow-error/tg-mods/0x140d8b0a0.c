// VA 0x140d8b0a0, PDB extent 422 bytes
// tg_mods::overlay::overlay_key
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::overlay_key
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 422 */

ulonglong * pdb_140d8b0a0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

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
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  ulonglong uVar74;
  ulonglong *puVar75;
  byte *pbVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  byte bVar79;
  undefined1 uVar80;
  ulonglong uVar81;
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
  
  uVar80 = param_3 == 0;
  if (-1 < (longlong)param_3) goto LAB_140d8b0c4;
  puVar75 = (ulonglong *)0x0;
  do {
    param_1 = puVar75;
    uVar80 = 1;
    param_2 = param_3;
    pdb_142dc7e2a();
LAB_140d8b0c4:
    if ((bool)uVar80) {
      pbVar76 = (byte *)0x1;
      goto LAB_140d8b229;
    }
    pdb_14007ee60();
    pbVar76 = pub_1406abab0(param_3,1);
    bVar65 = UNK_142e34f0f;
    bVar64 = UNK_142e34f0e;
    bVar63 = UNK_142e34f0d;
    bVar62 = UNK_142e34f0c;
    bVar61 = UNK_142e34f0b;
    bVar60 = UNK_142e34f0a;
    bVar59 = UNK_142e34f09;
    bVar58 = UNK_142e34f08;
    bVar57 = UNK_142e34f07;
    bVar56 = UNK_142e34f06;
    bVar55 = UNK_142e34f05;
    bVar54 = UNK_142e34f04;
    bVar53 = UNK_142e34f03;
    bVar52 = UNK_142e34f02;
    bVar51 = UNK_142e34f01;
    bVar50 = DAT_142e34f00;
    bVar49 = UNK_142e34b4f;
    bVar48 = UNK_142e34b4e;
    bVar47 = UNK_142e34b4d;
    bVar46 = UNK_142e34b4c;
    bVar45 = UNK_142e34b4b;
    bVar44 = UNK_142e34b4a;
    bVar43 = UNK_142e34b49;
    bVar42 = UNK_142e34b48;
    bVar41 = UNK_142e34b47;
    bVar40 = UNK_142e34b46;
    bVar39 = UNK_142e34b45;
    bVar38 = UNK_142e34b44;
    bVar37 = UNK_142e34b43;
    bVar36 = UNK_142e34b42;
    bVar35 = UNK_142e34b41;
    bVar79 = DAT_142e34b40;
    puVar75 = (ulonglong *)0x1;
  } while (pbVar76 == (byte *)0x0);
  if (param_3 < 8) {
    uVar77 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar78 = 0;
    }
    else {
      uVar77 = param_3 & 0x7fffffffffffffe0;
      uVar78 = 0;
      do {
        pbVar1 = (byte *)(param_2 + uVar78);
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
        pbVar2 = (byte *)(param_2 + 0x10 + uVar78);
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
        bVar82 = -(*pbVar1 == bVar50);
        bVar83 = -(bVar4 == bVar51);
        bVar84 = -(bVar5 == bVar52);
        bVar85 = -(bVar6 == bVar53);
        bVar86 = -(bVar7 == bVar54);
        bVar87 = -(bVar8 == bVar55);
        bVar88 = -(bVar9 == bVar56);
        bVar89 = -(bVar10 == bVar57);
        bVar90 = -(bVar11 == bVar58);
        bVar91 = -(bVar12 == bVar59);
        bVar92 = -(bVar13 == bVar60);
        bVar93 = -(bVar14 == bVar61);
        bVar94 = -(bVar15 == bVar62);
        bVar95 = -(bVar16 == bVar63);
        bVar96 = -(bVar17 == bVar64);
        bVar97 = -(bVar18 == bVar65);
        bVar98 = -(bVar19 == bVar50);
        bVar99 = -(bVar20 == bVar51);
        bVar100 = -(bVar21 == bVar52);
        bVar101 = -(bVar22 == bVar53);
        bVar102 = -(bVar23 == bVar54);
        bVar103 = -(bVar24 == bVar55);
        bVar104 = -(bVar25 == bVar56);
        bVar105 = -(bVar26 == bVar57);
        bVar106 = -(bVar27 == bVar58);
        bVar107 = -(bVar28 == bVar59);
        bVar108 = -(bVar29 == bVar60);
        bVar109 = -(bVar30 == bVar61);
        bVar110 = -(bVar31 == bVar62);
        bVar111 = -(bVar32 == bVar63);
        bVar112 = -(bVar33 == bVar64);
        bVar113 = -(bVar34 == bVar65);
        pbVar2 = pbVar76 + uVar78;
        *pbVar2 = bVar82 & bVar79 | ~bVar82 & *pbVar1;
        pbVar2[1] = bVar83 & bVar35 | ~bVar83 & bVar4;
        pbVar2[2] = bVar84 & bVar36 | ~bVar84 & bVar5;
        pbVar2[3] = bVar85 & bVar37 | ~bVar85 & bVar6;
        pbVar2[4] = bVar86 & bVar38 | ~bVar86 & bVar7;
        pbVar2[5] = bVar87 & bVar39 | ~bVar87 & bVar8;
        pbVar2[6] = bVar88 & bVar40 | ~bVar88 & bVar9;
        pbVar2[7] = bVar89 & bVar41 | ~bVar89 & bVar10;
        pbVar2[8] = bVar90 & bVar42 | ~bVar90 & bVar11;
        pbVar2[9] = bVar91 & bVar43 | ~bVar91 & bVar12;
        pbVar2[10] = bVar92 & bVar44 | ~bVar92 & bVar13;
        pbVar2[0xb] = bVar93 & bVar45 | ~bVar93 & bVar14;
        pbVar2[0xc] = bVar94 & bVar46 | ~bVar94 & bVar15;
        pbVar2[0xd] = bVar95 & bVar47 | ~bVar95 & bVar16;
        pbVar2[0xe] = bVar96 & bVar48 | ~bVar96 & bVar17;
        pbVar2[0xf] = bVar97 & bVar49 | ~bVar97 & bVar18;
        pbVar1 = pbVar76 + uVar78 + 0x10;
        *pbVar1 = bVar98 & bVar79 | ~bVar98 & bVar19;
        pbVar1[1] = bVar99 & bVar35 | ~bVar99 & bVar20;
        pbVar1[2] = bVar100 & bVar36 | ~bVar100 & bVar21;
        pbVar1[3] = bVar101 & bVar37 | ~bVar101 & bVar22;
        pbVar1[4] = bVar102 & bVar38 | ~bVar102 & bVar23;
        pbVar1[5] = bVar103 & bVar39 | ~bVar103 & bVar24;
        pbVar1[6] = bVar104 & bVar40 | ~bVar104 & bVar25;
        pbVar1[7] = bVar105 & bVar41 | ~bVar105 & bVar26;
        pbVar1[8] = bVar106 & bVar42 | ~bVar106 & bVar27;
        pbVar1[9] = bVar107 & bVar43 | ~bVar107 & bVar28;
        pbVar1[10] = bVar108 & bVar44 | ~bVar108 & bVar29;
        pbVar1[0xb] = bVar109 & bVar45 | ~bVar109 & bVar30;
        pbVar1[0xc] = bVar110 & bVar46 | ~bVar110 & bVar31;
        pbVar1[0xd] = bVar111 & bVar47 | ~bVar111 & bVar32;
        pbVar1[0xe] = bVar112 & bVar48 | ~bVar112 & bVar33;
        pbVar1[0xf] = bVar113 & bVar49 | ~bVar113 & bVar34;
        uVar78 = uVar78 + 0x20;
      } while (uVar77 != uVar78);
      if (param_3 == uVar77) goto LAB_140d8b229;
      uVar78 = uVar77;
      if ((param_3 & 0x18) == 0) goto LAB_140d8b202;
    }
    uVar74 = _DAT_14306a990;
    cVar73 = UNK_14306a987;
    cVar72 = UNK_14306a986;
    cVar71 = UNK_14306a985;
    cVar70 = UNK_14306a984;
    cVar69 = UNK_14306a983;
    cVar68 = UNK_14306a982;
    cVar67 = UNK_14306a981;
    cVar66 = DAT_14306a980;
    uVar77 = param_3 & 0x7ffffffffffffff8;
    do {
      uVar3 = *(ulonglong *)(param_2 + uVar78);
      uVar81 = CONCAT17(-((char)(uVar3 >> 0x38) == cVar73),
                        CONCAT16(-((char)(uVar3 >> 0x30) == cVar72),
                                 CONCAT15(-((char)(uVar3 >> 0x28) == cVar71),
                                          CONCAT14(-((char)(uVar3 >> 0x20) == cVar70),
                                                   CONCAT13(-((char)(uVar3 >> 0x18) == cVar69),
                                                            CONCAT12(-((char)(uVar3 >> 0x10) ==
                                                                      cVar68),CONCAT11(-((char)(
                                                  uVar3 >> 8) == cVar67),-((char)uVar3 == cVar66))))
                                                  ))));
      *(ulonglong *)(pbVar76 + uVar78) = uVar81 & uVar74 | ~uVar81 & uVar3;
      uVar78 = uVar78 + 8;
    } while (uVar77 != uVar78);
    if (param_3 == uVar77) goto LAB_140d8b229;
  }
LAB_140d8b202:
  do {
    bVar79 = *(byte *)(param_2 + uVar77);
    if (*(byte *)(param_2 + uVar77) == 0x5c) {
      bVar79 = 0x2f;
    }
    pbVar76[uVar77] = bVar79;
    uVar77 = uVar77 + 1;
  } while (param_3 != uVar77);
LAB_140d8b229:
  *param_1 = param_3;
  param_1[1] = (ulonglong)pbVar76;
  param_1[2] = param_3;
  return param_1;
}

