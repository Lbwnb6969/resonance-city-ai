// VA 0x140c236a0, PDB extent 1970 bytes
// country_core::startup::mod_hot_reload::refresh_mod_hot_reload_watches::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::mod_hot_reload::refresh_mod_hot_reload_watches::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
   Extent: 1970 */

void pdb_140c236a0(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
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
  byte bVar68;
  byte bVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  ulonglong uVar78;
  ulonglong *arg0;
  char cVar79;
  uint uVar80;
  longlong lVar81;
  byte *pbVar82;
  ulonglong *puVar83;
  ulonglong uVar84;
  ulonglong uVar85;
  byte bVar86;
  ulonglong uVar87;
  undefined8 uVar88;
  ulonglong *puVar89;
  ulonglong *puVar90;
  ulonglong uVar91;
  bool bVar92;
  ulonglong uVar93;
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
  byte bVar125;
  ulonglong uStack_108;
  ulonglong *puStack_100;
  ulonglong uStack_f8;
  undefined1 uStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  uint uStack_a4;
  ulonglong uStack_a0;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  pdb_140b788c0(&uStack_108);
  arg0 = puStack_100;
  uVar78 = uStack_108;
  uVar91 = _DAT_14306a990;
  cVar77 = UNK_14306a987;
  cVar76 = UNK_14306a986;
  cVar75 = UNK_14306a985;
  cVar74 = UNK_14306a984;
  cVar73 = UNK_14306a983;
  cVar72 = UNK_14306a982;
  cVar71 = UNK_14306a981;
  cVar70 = DAT_14306a980;
  bVar69 = UNK_142e34f0f;
  bVar68 = UNK_142e34f0e;
  bVar67 = UNK_142e34f0d;
  bVar66 = UNK_142e34f0c;
  bVar65 = UNK_142e34f0b;
  bVar64 = UNK_142e34f0a;
  bVar63 = UNK_142e34f09;
  bVar62 = UNK_142e34f08;
  bVar61 = UNK_142e34f07;
  bVar60 = UNK_142e34f06;
  bVar59 = UNK_142e34f05;
  bVar58 = UNK_142e34f04;
  bVar57 = UNK_142e34f03;
  bVar56 = UNK_142e34f02;
  bVar55 = UNK_142e34f01;
  bVar54 = DAT_142e34f00;
  bVar53 = UNK_142e34b4f;
  bVar52 = UNK_142e34b4e;
  bVar51 = UNK_142e34b4d;
  bVar50 = UNK_142e34b4c;
  bVar49 = UNK_142e34b4b;
  bVar48 = UNK_142e34b4a;
  bVar47 = UNK_142e34b49;
  bVar46 = UNK_142e34b48;
  bVar45 = UNK_142e34b47;
  bVar44 = UNK_142e34b46;
  bVar43 = UNK_142e34b45;
  bVar42 = UNK_142e34b44;
  bVar41 = UNK_142e34b43;
  bVar40 = UNK_142e34b42;
  bVar39 = UNK_142e34b41;
  bVar38 = DAT_142e34b40;
  puVar90 = puStack_100 + uStack_f8 * 4;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x40);
  uStack_c8 = lVar5 + 0x10;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = *(ulonglong *)(param_1 + 0x30);
  uStack_93 = *(undefined1 *)(param_1 + 0x38);
  puVar83 = puStack_100;
  while (puVar89 = puVar83, puVar83 != puVar90) {
    puVar89 = puVar83 + 4;
    uStack_c0 = *puVar83;
    if (SBORROW8(0,uStack_c0)) break;
    pbStack_d0 = (byte *)puVar83[1];
    uVar85 = puVar83[2];
    lVar81 = pdb_140f3e340(pbStack_d0,uVar85,uVar3,uVar4);
    if (lVar81 != 0) {
      pdb_140f69110(&uStack_108,lVar81,uVar85);
      puVar83 = puStack_100;
      if ((char)uStack_108 == '\0') {
        if ((longlong)uStack_f8 < 0) {
          uVar88 = 0;
LAB_140c23b53:
          pdb_142dc7e2a(uVar88);
          goto LAB_140c23c2d;
        }
        uStack_a0 = uStack_f8;
        if (uStack_f8 == 0) {
          pbVar82 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar88 = 1;
          pbVar82 = pub_1406abab0(uStack_a0,1);
          if (pbVar82 == (byte *)0x0) goto LAB_140c23b53;
          if ((ulonglong)((longlong)pbVar82 - (longlong)puVar83) < 0x20 || uStack_a0 < 8) {
            uVar87 = 0;
          }
          else {
            if (uStack_a0 < 0x20) {
              uVar85 = 0;
            }
            else {
              uVar87 = uStack_a0 & 0x7fffffffffffffe0;
              uVar85 = 0;
              do {
                pbVar2 = (byte *)((longlong)puVar83 + uVar85);
                bVar86 = pbVar2[1];
                bVar8 = pbVar2[2];
                bVar9 = pbVar2[3];
                bVar10 = pbVar2[4];
                bVar11 = pbVar2[5];
                bVar12 = pbVar2[6];
                bVar13 = pbVar2[7];
                bVar14 = pbVar2[8];
                bVar15 = pbVar2[9];
                bVar16 = pbVar2[10];
                bVar17 = pbVar2[0xb];
                bVar18 = pbVar2[0xc];
                bVar19 = pbVar2[0xd];
                bVar20 = pbVar2[0xe];
                bVar21 = pbVar2[0xf];
                pbVar1 = (byte *)((longlong)puVar83 + uVar85 + 0x10);
                bVar22 = *pbVar1;
                bVar23 = pbVar1[1];
                bVar24 = pbVar1[2];
                bVar25 = pbVar1[3];
                bVar26 = pbVar1[4];
                bVar27 = pbVar1[5];
                bVar28 = pbVar1[6];
                bVar29 = pbVar1[7];
                bVar30 = pbVar1[8];
                bVar31 = pbVar1[9];
                bVar32 = pbVar1[10];
                bVar33 = pbVar1[0xb];
                bVar34 = pbVar1[0xc];
                bVar35 = pbVar1[0xd];
                bVar36 = pbVar1[0xe];
                bVar37 = pbVar1[0xf];
                bVar94 = -(*pbVar2 == bVar54);
                bVar95 = -(bVar86 == bVar55);
                bVar96 = -(bVar8 == bVar56);
                bVar97 = -(bVar9 == bVar57);
                bVar98 = -(bVar10 == bVar58);
                bVar99 = -(bVar11 == bVar59);
                bVar100 = -(bVar12 == bVar60);
                bVar101 = -(bVar13 == bVar61);
                bVar102 = -(bVar14 == bVar62);
                bVar103 = -(bVar15 == bVar63);
                bVar104 = -(bVar16 == bVar64);
                bVar105 = -(bVar17 == bVar65);
                bVar106 = -(bVar18 == bVar66);
                bVar107 = -(bVar19 == bVar67);
                bVar108 = -(bVar20 == bVar68);
                bVar109 = -(bVar21 == bVar69);
                bVar110 = -(bVar22 == bVar54);
                bVar111 = -(bVar23 == bVar55);
                bVar112 = -(bVar24 == bVar56);
                bVar113 = -(bVar25 == bVar57);
                bVar114 = -(bVar26 == bVar58);
                bVar115 = -(bVar27 == bVar59);
                bVar116 = -(bVar28 == bVar60);
                bVar117 = -(bVar29 == bVar61);
                bVar118 = -(bVar30 == bVar62);
                bVar119 = -(bVar31 == bVar63);
                bVar120 = -(bVar32 == bVar64);
                bVar121 = -(bVar33 == bVar65);
                bVar122 = -(bVar34 == bVar66);
                bVar123 = -(bVar35 == bVar67);
                bVar124 = -(bVar36 == bVar68);
                bVar125 = -(bVar37 == bVar69);
                pbVar1 = pbVar82 + uVar85;
                *pbVar1 = bVar94 & bVar38 | ~bVar94 & *pbVar2;
                pbVar1[1] = bVar95 & bVar39 | ~bVar95 & bVar86;
                pbVar1[2] = bVar96 & bVar40 | ~bVar96 & bVar8;
                pbVar1[3] = bVar97 & bVar41 | ~bVar97 & bVar9;
                pbVar1[4] = bVar98 & bVar42 | ~bVar98 & bVar10;
                pbVar1[5] = bVar99 & bVar43 | ~bVar99 & bVar11;
                pbVar1[6] = bVar100 & bVar44 | ~bVar100 & bVar12;
                pbVar1[7] = bVar101 & bVar45 | ~bVar101 & bVar13;
                pbVar1[8] = bVar102 & bVar46 | ~bVar102 & bVar14;
                pbVar1[9] = bVar103 & bVar47 | ~bVar103 & bVar15;
                pbVar1[10] = bVar104 & bVar48 | ~bVar104 & bVar16;
                pbVar1[0xb] = bVar105 & bVar49 | ~bVar105 & bVar17;
                pbVar1[0xc] = bVar106 & bVar50 | ~bVar106 & bVar18;
                pbVar1[0xd] = bVar107 & bVar51 | ~bVar107 & bVar19;
                pbVar1[0xe] = bVar108 & bVar52 | ~bVar108 & bVar20;
                pbVar1[0xf] = bVar109 & bVar53 | ~bVar109 & bVar21;
                pbVar1 = pbVar82 + uVar85 + 0x10;
                *pbVar1 = bVar110 & bVar38 | ~bVar110 & bVar22;
                pbVar1[1] = bVar111 & bVar39 | ~bVar111 & bVar23;
                pbVar1[2] = bVar112 & bVar40 | ~bVar112 & bVar24;
                pbVar1[3] = bVar113 & bVar41 | ~bVar113 & bVar25;
                pbVar1[4] = bVar114 & bVar42 | ~bVar114 & bVar26;
                pbVar1[5] = bVar115 & bVar43 | ~bVar115 & bVar27;
                pbVar1[6] = bVar116 & bVar44 | ~bVar116 & bVar28;
                pbVar1[7] = bVar117 & bVar45 | ~bVar117 & bVar29;
                pbVar1[8] = bVar118 & bVar46 | ~bVar118 & bVar30;
                pbVar1[9] = bVar119 & bVar47 | ~bVar119 & bVar31;
                pbVar1[10] = bVar120 & bVar48 | ~bVar120 & bVar32;
                pbVar1[0xb] = bVar121 & bVar49 | ~bVar121 & bVar33;
                pbVar1[0xc] = bVar122 & bVar50 | ~bVar122 & bVar34;
                pbVar1[0xd] = bVar123 & bVar51 | ~bVar123 & bVar35;
                pbVar1[0xe] = bVar124 & bVar52 | ~bVar124 & bVar36;
                pbVar1[0xf] = bVar125 & bVar53 | ~bVar125 & bVar37;
                uVar85 = uVar85 + 0x20;
              } while (uVar87 != uVar85);
              if (uStack_a0 == uVar87) goto LAB_140c239d4;
              uVar85 = uVar87;
              if ((uStack_a0 & 0x18) == 0) goto LAB_140c23939;
            }
            uVar87 = uStack_a0 & 0x7ffffffffffffff8;
            do {
              uVar84 = *(ulonglong *)((longlong)puVar83 + uVar85);
              uVar93 = CONCAT17(-((char)(uVar84 >> 0x38) == cVar77),
                                CONCAT16(-((char)(uVar84 >> 0x30) == cVar76),
                                         CONCAT15(-((char)(uVar84 >> 0x28) == cVar75),
                                                  CONCAT14(-((char)(uVar84 >> 0x20) == cVar74),
                                                           CONCAT13(-((char)(uVar84 >> 0x18) ==
                                                                     cVar73),CONCAT12(-((char)(
                                                  uVar84 >> 0x10) == cVar72),
                                                  CONCAT11(-((char)(uVar84 >> 8) == cVar71),
                                                           -((char)uVar84 == cVar70))))))));
              *(ulonglong *)(pbVar82 + uVar85) = uVar93 & uVar91 | ~uVar93 & uVar84;
              uVar85 = uVar85 + 8;
            } while (uVar87 != uVar85);
            if (uStack_a0 == uVar87) goto LAB_140c239d4;
          }
LAB_140c23939:
          uVar84 = uVar87;
          for (uVar85 = uStack_a0 & 3; uVar85 != 0; uVar85 = uVar85 - 1) {
            bVar86 = *(byte *)((longlong)puVar83 + uVar84);
            if (*(byte *)((longlong)puVar83 + uVar84) == 0x5c) {
              bVar86 = 0x2f;
            }
            pbVar82[uVar84] = bVar86;
            uVar84 = uVar84 + 1;
          }
          if (uVar87 - uStack_a0 < 0xfffffffffffffffd) {
            do {
              bVar86 = *(byte *)((longlong)puVar83 + uVar84);
              if (bVar86 == 0x5c) {
                bVar86 = 0x2f;
              }
              pbVar82[uVar84] = bVar86;
              bVar86 = *(byte *)((longlong)puVar83 + uVar84 + 1);
              if (bVar86 == 0x5c) {
                bVar86 = 0x2f;
              }
              pbVar82[uVar84 + 1] = bVar86;
              bVar86 = *(byte *)((longlong)puVar83 + uVar84 + 2);
              if (bVar86 == 0x5c) {
                bVar86 = 0x2f;
              }
              pbVar82[uVar84 + 2] = bVar86;
              bVar86 = *(byte *)((longlong)puVar83 + uVar84 + 3);
              if (bVar86 == 0x5c) {
                bVar86 = 0x2f;
              }
              pbVar82[uVar84 + 3] = bVar86;
              uVar84 = uVar84 + 4;
            } while (uStack_a0 != uVar84);
          }
        }
LAB_140c239d4:
        uStack_91 = 1;
        pbStack_b8 = pbVar82;
        cVar79 = pdb_140b7e2f0(pbVar82);
        if (cVar79 == '\x03') {
          if (uStack_a0 != 0) {
            pub_1406abac0(pbStack_b8,uStack_a0,1);
          }
        }
        else {
          LOCK();
          bVar92 = *(char *)(lVar5 + 0x10) == '\0';
          if (bVar92) {
            *(char *)(lVar5 + 0x10) = '\x01';
          }
          UNLOCK();
          if (!bVar92) {
            uStack_91 = 1;
            pdb_142dc6be0();
          }
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            uVar80 = 0;
            cVar79 = *(char *)(lVar5 + 0x11);
            uVar85 = uStack_108;
            uStack_108 = uStack_c8;
          }
          else {
            uStack_91 = 1;
            uVar80 = pdb_142dc79e0();
            uVar80 = uVar80 ^ 1;
            cVar79 = *(char *)(lVar5 + 0x11);
            uVar85 = uStack_108;
            uStack_108 = uStack_c8;
          }
          uStack_c8 = uStack_108;
          if (cVar79 != '\0') {
            uVar91 = (ulonglong)puStack_100 >> 8;
            puStack_100 = (ulonglong *)CONCAT71((int7)uVar91,(char)uVar80);
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14306aff0,0x2b,&uStack_108,&UNK_14306b080,&UNK_14306ac40);
          }
          uStack_a4 = uVar80;
          if ((longlong)uStack_b0 < 0) {
            uVar88 = 0;
LAB_140c23b64:
            uStack_108 = uVar85;
            uStack_92 = 1;
            pdb_142dc7e2a(uVar88,uStack_b0);
LAB_140c23c2d:
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (uStack_b0 == 0) {
            puVar83 = (ulonglong *)0x1;
          }
          else {
            uStack_108 = uVar85;
            pdb_14007ee60();
            uVar88 = 1;
            puVar83 = (ulonglong *)pub_1406abab0(uStack_b0,1);
            uVar85 = uStack_108;
            if (puVar83 == (ulonglong *)0x0) goto LAB_140c23b64;
            pub_142e32760(puVar83,uVar6);
          }
          uStack_e8 = uStack_a0;
          pbStack_e0 = pbStack_b8;
          uStack_d8 = uStack_a0;
          uStack_108 = uStack_b0;
          uStack_f8 = uStack_b0;
          uStack_f0 = uStack_93;
          uStack_92 = 0;
          puStack_100 = puVar83;
          pdb_1417b5260(lVar5 + 0x18,&uStack_108);
          if (((char)uStack_a4 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
            uStack_91 = 0;
            cVar79 = pdb_142dc79e0();
            if (cVar79 == '\0') {
              *(undefined1 *)(lVar5 + 0x11) = 1;
            }
          }
          LOCK();
          cVar79 = *(char *)(lVar5 + 0x10);
          *(char *)(lVar5 + 0x10) = '\0';
          UNLOCK();
          if (cVar79 == '\x02') {
            uStack_91 = 0;
            pdb_142dc6ca0(lVar5 + 0x10);
          }
        }
      }
    }
    puVar83 = puVar89;
    if (uStack_c0 != 0) {
      pub_1406abac0(pbStack_d0,uStack_c0,1);
    }
  }
  uVar91 = (longlong)puVar90 - (longlong)puVar89;
  if (uVar91 != 0) {
    uVar91 = uVar91 >> 5;
    puVar89 = puVar89 + 1;
    do {
      if (puVar89[-1] != 0) {
        pub_1406abac0((byte *)*puVar89,puVar89[-1],1);
      }
      puVar89 = puVar89 + 4;
      uVar91 = uVar91 - 1;
    } while (uVar91 != 0);
  }
  if (uVar78 != 0) {
    pub_1406abac0((byte *)arg0,uVar78 << 5,8);
  }
  return;
}

