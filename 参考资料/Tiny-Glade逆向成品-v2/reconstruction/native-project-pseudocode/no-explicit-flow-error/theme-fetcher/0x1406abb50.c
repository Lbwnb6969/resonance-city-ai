// VA 0x1406abb50, PDB extent 21813 bytes
// theme_fetcher::ThemeFetcher::run
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: theme_fetcher::ThemeFetcher::run
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 21813 */

void pdb_1406abb50(char *param_1,undefined4 param_2)

{
  byte *******pppppppbVar1;
  byte bVar2;
  undefined8 uVar3;
  byte ******ppppppbVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  byte *******pppppppbVar12;
  byte *******pppppppbVar13;
  longlong lVar14;
  byte ******ppppppbVar15;
  byte *******pppppppbVar16;
  longlong lVar17;
  byte *pbVar18;
  byte ******ppppppbVar19;
  byte *******pppppppbVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined8 *puVar23;
  byte *******pppppppbVar24;
  undefined8 uVar25;
  byte *pbVar26;
  byte ******ppppppbVar27;
  char *pcVar29;
  ulonglong uVar30;
  ulonglong arg2;
  byte *******pppppppbVar31;
  ulonglong uVar32;
  byte *******pppppppbVar33;
  bool bVar34;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  byte *******pppppppbStack_c78;
  byte *******pppppppbStack_c70;
  byte *******pppppppbStack_c68;
  byte *******pppppppbStack_c60;
  byte *******pppppppbStack_c58;
  char cStack_c50;
  char cStack_c4f;
  undefined6 uStack_c4e;
  short sStack_c20;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  byte *******pppppppbStack_a18;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  uint uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  byte *******pppppppbStack_7c8;
  byte *******pppppppbStack_7c0;
  byte *******pppppppbStack_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  byte *******pppppppbStack_7a8;
  undefined8 uStack_798;
  undefined8 uStack_790;
  byte *******pppppppbStack_788;
  undefined8 uStack_780;
  byte *******pppppppbStack_778;
  byte *******pppppppbStack_770;
  byte *******pppppppbStack_768;
  byte *******pppppppbStack_760;
  byte *******pppppppbStack_758;
  byte *******pppppppbStack_750;
  byte *******pppppppbStack_748;
  byte *******pppppppbStack_740;
  byte *******pppppppbStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined *puStack_720;
  byte *******pppppppbStack_718;
  byte *******pppppppbStack_710;
  byte *******pppppppbStack_708;
  byte *******pppppppbStack_700;
  code *pcStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined1 uStack_690;
  undefined8 uStack_688;
  byte *******pppppppbStack_520;
  byte *******pppppppbStack_518;
  char *pcStack_510;
  char *pcStack_508;
  byte *******pppppppbStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  char *pcStack_4e0;
  byte *pbStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined8 uStack_4c4;
  undefined8 uStack_4bc;
  undefined8 uStack_4b0;
  byte *******pppppppbStack_4a8;
  byte *******pppppppbStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  uint uStack_454;
  byte *******pppppppbStack_450;
  byte *******pppppppbStack_448;
  ulonglong uStack_440;
  byte *******pppppppbStack_438;
  ulonglong *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  byte *******pppppppbStack_3d0;
  byte *******pppppppbStack_1b8;
  byte *******pppppppbStack_1b0;
  byte *******pppppppbStack_1a8;
  byte *******pppppppbStack_1a0;
  uint uStack_194;
  ulonglong *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int iStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  byte *******pppppppbStack_f0;
  undefined8 uStack_e8;
  byte *******pppppppbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *******pppppppbStack_c0;
  char *pcStack_b8;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  char cStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  byte ******ppppppbVar28;
  
  uStack_90 = 0xfffffffffffffffe;
  pcStack_b8 = param_1;
  if (2 < *_DAT_143ca8e90) {
    uStack_428 = (byte *******)0x0;
    uStack_420 = (code *)&UNK_142f978f2;
    uStack_418 = (byte *******)0xd;
    uStack_410 = (code *)0x0;
    uStack_408 = (byte *******)&UNK_142f978d2;
    uStack_400 = (byte *******)0x1f;
    uStack_3f8 = (byte *******)0x3;
    uStack_3f0 = (byte *******)&UNK_142f978f2;
    uStack_3e8 = 0xd;
    uStack_3e0 = 0xcd00000001;
    puStack_3d8 = &UNK_142f97c3c;
    pppppppbStack_3d0 = (byte *******)0x2d;
    param_2 = SUB84(&uStack_428,0);
    pdb_140f332f0(&uStack_92);
  }
  uVar9 = pdb_140f3fd40();
  pdb_140f4f710(&uStack_428,*(undefined8 *)(pcStack_b8 + 0x38),*(undefined8 *)(pcStack_b8 + 0x40));
  pppppppbVar24 = (byte *******)uStack_420;
  uStack_798 = uStack_428;
  if (uStack_428 == (byte *******)0x2) {
    uStack_a28 = (byte *******)uStack_420;
    uStack_a9 = 1;
    pdb_140f3f5b0(&uStack_428);
    pppppppbStack_778 = uStack_408;
    pppppppbStack_770 = uStack_400;
    pppppppbStack_788 = uStack_418;
    uStack_780 = uStack_410;
    uStack_798 = uStack_428;
    uStack_790 = uStack_420;
    uStack_428 = (byte *******)&UNK_142f97c52;
    uStack_420 = (code *)0x18;
    uStack_418 = pppppppbVar24;
    uStack_a9 = 0;
    pppppppbVar24 = (byte *******)&uStack_798;
    uStack_a28 = (byte *******)pdb_142dc8d80(&uStack_428);
    if (*_DAT_143ca8e90 != 0) {
      uStack_798 = (byte *******)&uStack_a28;
      uStack_790 = pdb_140f36c20;
      uStack_428 = (byte *******)0x0;
      uStack_420 = (code *)&UNK_142f978f2;
      uStack_418 = (byte *******)0xd;
      uStack_410 = (code *)0x0;
      uStack_408 = (byte *******)&UNK_142f978d2;
      uStack_400 = (byte *******)0x1f;
      uStack_3f8 = (byte *******)0x1;
      uStack_3f0 = (byte *******)&UNK_142f978f2;
      uStack_3e8 = 0xd;
      uStack_3e0 = 0x10700000001;
      puStack_3d8 = &UNK_142f97bc9;
      pppppppbVar24 = (byte *******)&uStack_428;
      pppppppbStack_3d0 = (byte *******)&uStack_798;
      pdb_140f332f0(&uStack_92);
    }
    pdb_140f36c40(&uStack_a28);
  }
  else {
    pub_142e32760(&pppppppbStack_788,&uStack_418,0x260);
    uStack_790 = (code *)pppppppbVar24;
    while( true ) {
      pppppppbVar24 = (byte *******)&uStack_798;
      pdb_140f59fa0(&uStack_428);
      if ((int)uStack_428 != 1) break;
      pub_142e32760(&uStack_c88,&uStack_420,600);
      if (uStack_c88 == (byte *******)0x0) {
        pdb_1404b38e0(&uStack_c80);
      }
      else {
        pub_142e32760(&uStack_a28,&uStack_420,600);
        uStack_4f8 = (byte *******)CONCAT44(param_2,uVar9);
        if ((((ulonglong)uStack_a20 & 0x10) == 0) ||
           (((ulonglong)uStack_a20 & 0x400) != 0 && (uStack_9fc & 0x20000000) != 0)) {
          pdb_140f46b10(&pppppppbStack_168,&uStack_a28);
          pppppppbStack_a0 = pppppppbStack_160;
          lVar17 = pdb_140f4eda0(pppppppbStack_160,pppppppbStack_158);
          if (pppppppbStack_168 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_a0,(ulonglong)pppppppbStack_168,1);
          }
          if (lVar17 != 0) {
            uStack_e8 = (byte *******)pdb_142dc8e60(lVar17);
            goto LAB_1406ac33c;
          }
          pppppppbVar24 = uStack_e8;
          if (1 < *_DAT_143ca8e90) {
            pdb_140f46c20(&uStack_4b0,&uStack_a28);
            uStack_188 = (byte *******)&uStack_4b0;
            uStack_180._0_4_ = 0x40f58250;
            uStack_180._4_4_ = 1;
            pppppppbStack_168 = (byte *******)0x0;
            pppppppbStack_160 = (byte *******)&UNK_142f978f2;
            pppppppbStack_158 = (byte *******)0xd;
            pppppppbStack_150 = (byte *******)0x0;
            uStack_148 = (byte *******)&UNK_142f978d2;
            uStack_140 = (byte *******)0x1f;
            pppppppbStack_138 = (byte *******)0x2;
            pppppppbStack_130 = (byte *******)&UNK_142f978f2;
            pppppppbStack_128 = (byte *******)0xd;
            pppppppbStack_120 = (byte *******)0xe700000001;
            pppppppbStack_118 = (byte *******)&UNK_142f97b49;
            pppppppbStack_110 = (byte *******)&uStack_188;
            pdb_140f332f0(&uStack_92,&pppppppbStack_168);
            pppppppbVar24 = uStack_e8;
            if (uStack_4b0 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_4a8,(ulonglong)uStack_4b0,1);
              pppppppbVar24 = uStack_e8;
            }
          }
        }
        else {
          pdb_140f3fcf0(&uStack_188,&uStack_4f8,uStack_a0c,uStack_a08);
          if ((char)uStack_188 == '\0') {
            bVar34 = 0x127500 < CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
            if (CONCAT44(uStack_180._4_4_,(undefined4)uStack_180) == 0x127500) {
              bVar34 = iStack_178 != 0;
            }
            if (!bVar34) goto LAB_1406ac010;
            pdb_140f46b10(&pppppppbStack_168,&uStack_a28);
            pppppppbStack_a0 = pppppppbStack_160;
            lVar17 = pdb_140f4ef90(pppppppbStack_160,pppppppbStack_158);
            if (pppppppbStack_168 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_a0,(ulonglong)pppppppbStack_168,1);
            }
            if (lVar17 == 0) {
              pppppppbVar24 = uStack_e8;
              if (2 < *_DAT_143ca8e90) {
                pdb_140f46c20(&uStack_4b0,&uStack_a28);
                uStack_e8 = (byte *******)&uStack_4b0;
                pppppppbStack_e0 = (byte *******)pdb_140f58250;
                pppppppbStack_168 = (byte *******)0x0;
                pppppppbStack_160 = (byte *******)&UNK_142f978f2;
                pppppppbStack_158 = (byte *******)0xd;
                pppppppbStack_150 = (byte *******)0x0;
                uStack_148 = (byte *******)&UNK_142f978d2;
                uStack_140 = (byte *******)0x1f;
                pppppppbStack_138 = (byte *******)0x3;
                pppppppbStack_130 = (byte *******)&UNK_142f978f2;
                pppppppbStack_128 = (byte *******)0xd;
                pppppppbStack_120 = (byte *******)0xf100000001;
                pppppppbStack_118 = (byte *******)&UNK_142f97b67;
                pppppppbStack_110 = (byte *******)&uStack_e8;
                pdb_140f332f0(&uStack_92,&pppppppbStack_168);
                pppppppbVar24 = uStack_e8;
                if (uStack_4b0 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbStack_4a8,(ulonglong)uStack_4b0,1);
                  pppppppbVar24 = uStack_e8;
                }
              }
              goto LAB_1406ac46c;
            }
            pppppppbVar12 = (byte *******)pdb_142dc8e60(lVar17);
            pppppppbVar24 = uStack_e8;
          }
          else {
LAB_1406ac010:
            pdb_140f46b10(&uStack_e8,&uStack_a28);
            pppppppbStack_a0 = pppppppbStack_e0;
            lVar17 = pdb_140f76c30(pppppppbStack_e0,uStack_d8);
            if (lVar17 == 0) {
              pppppppbVar24 = uStack_e8;
              if (uStack_e8 != (byte *******)0x0) {
                pub_1406abac0((byte *)pppppppbStack_a0,(ulonglong)uStack_e8,1);
                pppppppbVar24 = uStack_e8;
              }
              goto LAB_1406ac46c;
            }
            uStack_4d0 = (undefined4)lVar17;
            uStack_4cc = (undefined4)((ulonglong)lVar17 >> 0x20);
            if (1 < *_DAT_143ca8e90) {
              pdb_140f46c20(&uStack_188,&uStack_a28);
              uStack_4b0 = (byte *******)&uStack_188;
              pppppppbStack_4a8 = (byte *******)pdb_140f58250;
              pppppppbStack_4a0 = (byte *******)&uStack_4d0;
              pcStack_498 = pdb_140f36c20;
              pppppppbStack_168 = (byte *******)0x0;
              pppppppbStack_160 = (byte *******)&UNK_142f978f2;
              pppppppbStack_158 = (byte *******)0xd;
              pppppppbStack_150 = (byte *******)0x0;
              uStack_148 = (byte *******)&UNK_142f978d2;
              uStack_140 = (byte *******)0x1f;
              pppppppbStack_138 = (byte *******)0x2;
              pppppppbStack_130 = (byte *******)&UNK_142f978f2;
              pppppppbStack_128 = (byte *******)0xd;
              pppppppbStack_120 = (byte *******)0xf800000001;
              pppppppbStack_118 = (byte *******)&UNK_142f97b87;
              pppppppbStack_110 = (byte *******)&uStack_4b0;
              pdb_140f332f0(&uStack_92,&pppppppbStack_168);
              if (uStack_188 != (byte *******)0x0) {
                pub_1406abac0((byte *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
                              (ulonglong)uStack_188,1);
              }
            }
            pdb_140f46b10(&pppppppbStack_168,&uStack_a28);
            pppppppbStack_a8 = pppppppbStack_160;
            lVar17 = pdb_140f4ef90(pppppppbStack_160,pppppppbStack_158);
            if (pppppppbStack_168 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_a8,(ulonglong)pppppppbStack_168,1);
            }
            if (lVar17 == 0) {
              pppppppbVar12 = (byte *******)0x0;
            }
            else {
              pppppppbVar12 = (byte *******)pdb_142dc8e60(lVar17);
            }
            pdb_140f36c40(&uStack_4d0);
            pppppppbVar24 = uStack_e8;
            if (uStack_e8 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_a0,(ulonglong)uStack_e8,1);
              pppppppbVar24 = uStack_e8;
            }
          }
          uStack_e8 = pppppppbVar12;
          if (uStack_e8 != (byte *******)0x0) {
LAB_1406ac33c:
            if (*_DAT_143ca8e90 != 0) {
              pdb_140f46c20(&uStack_188,&uStack_a28);
              pppppppbStack_4a8 = (byte *******)pdb_140f58250;
              pppppppbStack_4a0 = (byte *******)&uStack_e8;
              pcStack_498 = pdb_140f36c20;
              pppppppbStack_168 = (byte *******)0x0;
              pppppppbStack_160 = (byte *******)&UNK_142f978f2;
              pppppppbStack_158 = (byte *******)0xd;
              pppppppbStack_150 = (byte *******)0x0;
              uStack_148 = (byte *******)&UNK_142f978d2;
              uStack_140 = (byte *******)0x1f;
              pppppppbStack_138 = (byte *******)0x1;
              pppppppbStack_130 = (byte *******)&UNK_142f978f2;
              pppppppbStack_128 = (byte *******)0xd;
              pppppppbStack_120 = (byte *******)0xd500000001;
              pppppppbStack_118 = (byte *******)&UNK_142f97c8a;
              pppppppbStack_110 = (byte *******)&uStack_4b0;
              uStack_4b0 = (byte *******)&uStack_188;
              pdb_140f332f0(&uStack_92,&pppppppbStack_168);
              if (uStack_188 != (byte *******)0x0) {
                pub_1406abac0((byte *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
                              (ulonglong)uStack_188,1);
              }
            }
            pdb_140f36c40(&uStack_e8);
            pppppppbVar24 = uStack_e8;
          }
        }
LAB_1406ac46c:
        uStack_e8 = pppppppbVar24;
        LOCK();
        *uStack_a28 = (byte ******)((longlong)*uStack_a28 + -1);
        UNLOCK();
        if (*uStack_a28 == (byte ******)0x0) {
          pdb_1407c75b0(&uStack_a28);
        }
        if (uStack_c88 == (byte *******)0x0) {
          pdb_1404b38e0(&uStack_c80);
        }
      }
    }
    if (uStack_798 != (byte *******)0x0) {
      pdb_140f590a0(&uStack_790);
    }
    LOCK();
    *pppppppbStack_788 = (byte ******)((longlong)*pppppppbStack_788 + -1);
    UNLOCK();
    if (*pppppppbStack_788 == (byte ******)0x0) {
      pdb_1407c75b0(&pppppppbStack_788);
    }
    if (2 < *_DAT_143ca8e90) {
      uStack_428 = (byte *******)0x0;
      uStack_420 = (code *)&UNK_142f978f2;
      uStack_418 = (byte *******)0xd;
      uStack_410 = (code *)0x0;
      uStack_408 = (byte *******)&UNK_142f978d2;
      uStack_400 = (byte *******)0x1f;
      uStack_3f8 = (byte *******)0x3;
      uStack_3f0 = (byte *******)&UNK_142f978f2;
      uStack_3e8 = 0xd;
      uStack_3e0 = 0xdd00000001;
      puStack_3d8 = &UNK_142f97c6a;
      pppppppbStack_3d0 = (byte *******)0x41;
      pppppppbVar24 = (byte *******)&uStack_428;
      pdb_140f332f0(&uStack_92);
    }
  }
  pppppppbStack_448 = (byte *******)pdb_140f3c9d0();
  uVar6 = _UNK_142e347f8;
  uVar21 = _DAT_142e347f0;
  uStack_194 = (uint)pppppppbVar24;
  pcStack_508 = pcStack_b8 + 0x98;
  pcStack_4e0 = pcStack_b8 + 0x50;
  pppppppbStack_438 = (byte *******)(pcStack_b8 + 0xb0);
  pppppppbStack_450 = (byte *******)(pcStack_b8 + 0xb8);
  puStack_190 = (ulonglong *)(pcStack_b8 + 8);
  puStack_430 = (ulonglong *)(pcStack_b8 + 0x68);
  pcStack_510 = pcStack_b8 + 0x20;
  pppppppbStack_500 = (byte *******)(pcStack_b8 + 0xc0);
  uStack_440 = 1;
LAB_1406ac75b:
  pppppppbVar12 = (byte *******)pdb_140f3c9d0();
  bVar34 = uStack_194 <= (uint)pppppppbVar24;
  if (pppppppbVar12 != pppppppbStack_448) {
    bVar34 = pppppppbStack_448 <= pppppppbVar12;
  }
  if (bVar34) {
    pdb_140f77c10(&uStack_a28,pcStack_508,&UNK_142f97857,0x2a);
    if (*(longlong *)(pcStack_b8 + 0x60) != 0) {
      pub_142e32760(&uStack_428,&uStack_a28,0x150);
      pppppppbStack_c78 = _DAT_142f97898;
      pppppppbStack_c70 = _UNK_142f978a0;
      uStack_c88 = (byte *******)CONCAT44(_UNK_142f9788c,_DAT_142f97888);
      uStack_c80 = (byte *******)CONCAT44(_UNK_142f97894,_UNK_142f97890);
      pdb_140f77ed0(&uStack_798,&uStack_428,&uStack_c88,pcStack_4e0);
      pub_142e32760(&uStack_a28,&uStack_798,0x150);
    }
    pub_142e32760(&uStack_428,&uStack_a28,0x150);
    pdb_140f8d5c0(&uStack_798,&uStack_428);
    pppppppbVar33 = (byte *******)uStack_790;
    pppppppbVar13 = uStack_798;
    if (uStack_798 != (byte *******)0x3) {
      pppppppbStack_a0 = (byte *******)CONCAT44(pppppppbStack_a0._4_4_,(uint)pppppppbVar24);
      pppppppbStack_a8 = pppppppbVar12;
      pub_142e32760(&pppppppbStack_c78,&pppppppbStack_788,0xb8);
      uStack_c88 = pppppppbVar13;
      uStack_c80 = pppppppbVar33;
      uStack_91 = 1;
      pdb_140f92eb0(&uStack_428,&UNK_142f978a8,4,&uStack_c88);
      if ((uStack_428 == (byte *******)0x2) || ((int)uStack_428 != 1)) {
LAB_1406acd40:
        uStack_418 = _DAT_142f97970;
        uStack_410 = (code *)_UNK_142f97978;
        uStack_428 = (byte *******)CONCAT44(_UNK_142f97964,_DAT_142f97960);
        uStack_420 = (code *)CONCAT44(_UNK_142f9796c,_UNK_142f97968);
        uStack_91 = 1;
        lVar17 = pdb_140f959e0(&uStack_c88,&uStack_428);
        pppppppbVar13 = (byte *******)0x8ca0;
        if (lVar17 == 0) {
LAB_1406aceeb:
          uVar32 = 0;
          if (sStack_c20 == 0x130) goto LAB_1406ace05;
LAB_1406acefc:
          pppppppbVar24 = (byte *******)&uStack_428;
          if (sStack_c20 != 200) {
            pppppppbStack_168 = (byte *******)CONCAT62(pppppppbStack_168._2_6_,sStack_c20);
            uStack_798 = (byte *******)&pppppppbStack_168;
            uStack_790 = pdb_140f96f80;
            uStack_91 = 1;
            pppppppbVar12 = (byte *******)&UNK_142f97a53;
            pdb_140f60760(pppppppbVar24,&UNK_142f97a53,&uStack_798);
            uStack_798 = uStack_428;
            uStack_790 = uStack_420;
            pppppppbStack_788 = uStack_418;
            if (*_DAT_143ca8e90 != 0) {
              pppppppbStack_160 = (byte *******)pdb_140001020;
              uStack_428 = (byte *******)0x0;
              uStack_420 = (code *)&UNK_142f978f2;
              uStack_418 = (byte *******)0xd;
              uStack_410 = (code *)0x0;
              uStack_408 = (byte *******)&UNK_142f978d2;
              uStack_400 = (byte *******)0x1f;
              uStack_3f8 = (byte *******)0x1;
              uStack_3f0 = (byte *******)&UNK_142f978f2;
              uStack_3e8 = 0xd;
              uStack_3e0 = 0x9e00000001;
              puStack_3d8 = &UNK_142f97a76;
              pppppppbStack_3d0 = (byte *******)&pppppppbStack_168;
              uStack_aa = 1;
              pppppppbVar12 = (byte *******)&uStack_428;
              pppppppbStack_168 = (byte *******)&uStack_798;
              pdb_140f332f0(&uStack_92);
            }
            uStack_418 = pppppppbStack_788;
            uStack_428 = uStack_798;
            uStack_420 = uStack_790;
            uStack_aa = 0;
            pppppppbVar13 = (byte *******)pdb_140f60f30(&uStack_428);
            bVar34 = true;
            pppppppbStack_c0 = pppppppbVar12;
            goto LAB_1406ad255;
          }
          uStack_418 = _DAT_142f97990;
          uStack_410 = (code *)_UNK_142f97998;
          uStack_428 = (byte *******)CONCAT44(_UNK_142f97984,_DAT_142f97980);
          uStack_420 = (code *)CONCAT44(_UNK_142f9798c,_UNK_142f97988);
          uStack_91 = 1;
          lVar17 = pdb_140f959e0(&uStack_c88);
          if (lVar17 != 0) {
            if (3 < *_DAT_143ca8e90) {
              pppppppbVar24 = *(byte ********)(lVar17 + 0x10);
              if (pppppppbVar24 != (byte *******)0x0) {
                pppppppbVar12 = (byte *******)0x0;
                do {
                  bVar2 = *(byte *)((longlong)*(byte ********)(lVar17 + 8) + (longlong)pppppppbVar12
                                   );
                  if (bVar2 != 9 && 0x5e < (byte)(bVar2 - 0x20)) goto LAB_1406ad29d;
                  pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 1);
                } while (pppppppbVar24 != pppppppbVar12);
              }
              uStack_798 = (byte *******)&pppppppbStack_168;
              uStack_790 = pdb_1402ed400;
              uStack_428 = (byte *******)0x0;
              uStack_420 = (code *)&UNK_142f978f2;
              uStack_418 = (byte *******)0xd;
              uStack_410 = (code *)0x0;
              uStack_408 = (byte *******)&UNK_142f978d2;
              uStack_400 = (byte *******)0x1f;
              uStack_3f8 = (byte *******)0x4;
              uStack_3f0 = (byte *******)&UNK_142f978f2;
              uStack_3e8 = 0xd;
              uStack_3e0 = 0x6c00000001;
              puStack_3d8 = &UNK_142f979a0;
              uStack_91 = 1;
              pppppppbStack_3d0 = (byte *******)&uStack_798;
              pppppppbStack_168 = *(byte ********)(lVar17 + 8);
              pppppppbStack_160 = pppppppbVar24;
              pdb_140f332f0(&uStack_92,&uStack_428);
            }
            pbVar18 = *(byte **)(lVar17 + 0x10);
            if (pbVar18 == (byte *)0x0) {
              pbVar26 = (byte *)0x1;
            }
            else {
              lVar17 = *(longlong *)(lVar17 + 8);
              pbVar26 = (byte *)0x0;
              do {
                if (pbVar26[lVar17] != 9 && 0x5e < (byte)(pbVar26[lVar17] - 0x20)) {
                  pppppppbVar13 = (byte *******)0x1;
                  pppppppbStack_c0 = (byte *******)&UNK_143263dc8;
                  goto LAB_1406ad42b;
                }
                pbVar26 = pbVar26 + 1;
              } while (pbVar18 != pbVar26);
              if ((longlong)pbVar18 < 0) {
                uVar21 = 0;
LAB_1406af665:
                uStack_91 = 1;
                pdb_142dc7e2a(uVar21,pbStack_4d8);
LAB_1406af896:
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              pdb_14007ee60();
              pbVar26 = pub_1406abab0((ulonglong)pbVar18,1);
              if (pbVar26 == (byte *)0x0) {
                uVar21 = 1;
                pbStack_4d8 = pbVar18;
                goto LAB_1406af665;
              }
              pub_142e32760(pbVar26,lVar17,pbVar18);
            }
            pcVar29 = pcStack_b8;
            pppppppbVar24 = *(byte ********)pcStack_4e0;
            if (pppppppbVar24 != (byte *******)0x0) {
              pub_1406abac0(*(byte **)(pcStack_b8 + 0x58),(ulonglong)pppppppbVar24,1);
            }
            *(byte **)(pcVar29 + 0x50) = pbVar18;
            *(byte **)(pcVar29 + 0x58) = pbVar26;
            *(byte **)(pcVar29 + 0x60) = pbVar18;
            pbStack_4d8 = pbVar26;
          }
          uStack_91 = 1;
          uVar30 = pdb_140fa7890(&uStack_c88);
          if ((uVar30 & 1) == 0) {
            uStack_91 = 1;
            pppppppbVar24 = (byte *******)0x18;
            pppppppbVar13 = (byte *******)pdb_140f60fe0(&UNK_142f979bd);
            pppppppbStack_c0 = pppppppbVar24;
            goto LAB_1406ad42b;
          }
          pub_142e32760(&uStack_428,&uStack_c88,200);
          uStack_91 = 0;
          pdb_140fa7c00(&uStack_798,&uStack_428);
          pppppppbVar12 = (byte *******)uStack_790;
          if (uStack_798 == (byte *******)0x0) {
            uStack_428 = (byte *******)uStack_790;
            pdb_14007ee60();
            pppppppbVar13 = (byte *******)pub_1406abab0(8,8);
            if (pppppppbVar13 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,8);
            }
            *pppppppbVar13 = (byte ******)pppppppbVar12;
            pppppppbStack_c0 = (byte *******)&UNK_143263eb8;
LAB_1406af1b0:
            pppppppbVar24 = (byte *******)((ulonglong)pppppppbStack_a0 & 0xffffffff);
            pppppppbVar12 = pppppppbStack_a8;
            goto LAB_1406ad450;
          }
          pppppppbStack_158 = pppppppbStack_788;
          pppppppbStack_150 = (byte *******)uStack_780;
          pppppppbStack_168 = uStack_798;
          pppppppbStack_160 = (byte *******)uStack_790;
          if (pppppppbStack_788 != pppppppbVar24) {
            pppppppbVar24 = (byte *******)0x39;
            pppppppbVar13 = (byte *******)pdb_140f60fe0(&UNK_142f979f3);
            pppppppbStack_c0 = pppppppbVar24;
LAB_1406af186:
            uStack_91 = 0;
            (*(code *)pppppppbStack_168[3])(&pppppppbStack_150,pppppppbStack_160,pppppppbStack_158);
            goto LAB_1406af1b0;
          }
          pdb_140fa9420(&uStack_428,uStack_790,pppppppbVar24);
          pppppppbVar24 = (byte *******)uStack_420;
          lVar17 = -(longlong)uStack_428;
          if (SBORROW8(0,(longlong)uStack_428)) {
            uStack_428 = (byte *******)uStack_420;
            pdb_14007ee60(lVar17);
            pppppppbVar13 = (byte *******)pub_1406abab0(8,8);
            if (pppppppbVar13 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,8);
            }
            *pppppppbVar13 = (byte ******)pppppppbVar24;
            pppppppbStack_c0 = (byte *******)&UNK_143263f30;
            goto LAB_1406af186;
          }
          uStack_798 = uStack_428;
          uStack_790 = uStack_420;
          pppppppbStack_788 = uStack_418;
          lVar17 = (longlong)uStack_418 * 5;
          uStack_428 = (byte *******)uStack_420;
          uStack_418 = pppppppbStack_438;
          uStack_98 = 1;
          uStack_420 = (code *)((longlong)uStack_420 + lVar17 * 8);
          pdb_140fb2a00(&uStack_4b0,&uStack_428);
          uStack_428 = (byte *******)0x1;
          uStack_420 = (code *)0x1;
          uStack_408 = pppppppbStack_4a0;
          uStack_418._0_4_ = SUB84(uStack_4b0,0);
          uStack_418._4_4_ = uStack_4b0._4_4_;
          uStack_410 = (code *)pppppppbStack_4a8;
          pdb_14007ee60();
          pbVar18 = pub_1406abab0(0x28,8);
          if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x28);
          }
          *(byte ********)(pbVar18 + 0x20) = uStack_408;
          *(undefined4 *)(pbVar18 + 0x10) = (undefined4)uStack_418;
          *(undefined4 *)(pbVar18 + 0x14) = uStack_418._4_4_;
          *(undefined4 *)(pbVar18 + 0x18) = (undefined4)uStack_410;
          *(undefined4 *)(pbVar18 + 0x1c) = uStack_410._4_4_;
          *(int *)pbVar18 = (int)uStack_428;
          *(undefined4 *)(pbVar18 + 4) = uStack_428._4_4_;
          *(uint *)(pbVar18 + 8) = (uint)uStack_420;
          *(undefined4 *)(pbVar18 + 0xc) = uStack_420._4_4_;
          LOCK();
          ppppppbVar15 = *pppppppbStack_450;
          *pppppppbStack_450 = (byte ******)(pbVar18 + 0x10);
          UNLOCK();
          pppppppbStack_7b8 = pppppppbStack_500;
          uStack_4f8 = pppppppbStack_450;
          uStack_4d0 = SUB84(ppppppbVar15,0);
          uStack_4cc = (undefined4)((ulonglong)ppppppbVar15 >> 0x20);
          uStack_e8 = pppppppbStack_450;
          uStack_188 = (byte *******)&pppppppbStack_7b8;
          uStack_180 = (byte *******)&uStack_4f8;
          uStack_428 = (byte *******)&uStack_4d0;
          uStack_420 = (code *)&uStack_e8;
          uStack_418 = (byte *******)&uStack_188;
          uStack_98 = 1;
          pdb_140facb80(&uStack_428);
          uStack_428 = (byte *******)(ppppppbVar15 + -2);
          LOCK();
          ppppppbVar15 = ppppppbVar15 + -2;
          *ppppppbVar15 = (byte *****)((longlong)*ppppppbVar15 + -1);
          UNLOCK();
          if (*ppppppbVar15 == (byte *****)0x0) {
            uStack_98 = 1;
            pdb_1406b1250(&uStack_428);
          }
          if (*pcStack_b8 == '\0') {
            pbVar18 = *(byte **)(pcStack_b8 + 0x10);
            lVar17 = *(longlong *)(pcStack_b8 + 0x18);
            if (lVar17 != 0) {
              pbVar26 = pbVar18 + 8;
              do {
                if (*(ulonglong *)(pbVar26 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar26,*(ulonglong *)(pbVar26 + -8),1);
                }
                pbVar26 = pbVar26 + 0x28;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            pcVar29 = pcStack_b8;
            if (*puStack_190 != 0) {
              uVar30 = *puStack_190 * 0x28;
              arg2 = 8;
              goto LAB_1406af3d3;
            }
          }
          else {
            uVar30 = *puStack_190;
            pcVar29 = pcStack_b8;
            if (uVar30 != 0) {
              pbVar18 = *(byte **)(pcStack_b8 + 0x10);
              arg2 = 1;
LAB_1406af3d3:
              pcVar29 = pcStack_b8;
              pub_1406abac0(pbVar18,uVar30,arg2);
            }
          }
          pcVar29[0] = '\0';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          pcVar29[4] = '\0';
          pcVar29[5] = '\0';
          pcVar29[6] = '\0';
          pcVar29[7] = '\0';
          puStack_190[2] = (ulonglong)pppppppbStack_788;
          *(undefined4 *)puStack_190 = (undefined4)uStack_798;
          *(undefined4 *)((longlong)puStack_190 + 4) = uStack_798._4_4_;
          *(undefined4 *)(puStack_190 + 1) = (undefined4)uStack_790;
          *(undefined4 *)((longlong)puStack_190 + 0xc) = uStack_790._4_4_;
          if (3 < *_DAT_143ca8e90) {
            uStack_428 = (byte *******)0x0;
            uStack_420 = (code *)&UNK_142f978f2;
            uStack_418 = (byte *******)0xd;
            uStack_410 = (code *)0x0;
            uStack_408 = (byte *******)&UNK_142f978d2;
            uStack_400 = (byte *******)0x1f;
            uStack_3f8 = (byte *******)0x4;
            uStack_3f0 = (byte *******)&UNK_142f978f2;
            uStack_3e8 = 0xd;
            uStack_3e0 = 0x9500000001;
            puStack_3d8 = &UNK_142f979d5;
            pppppppbStack_3d0 = (byte *******)0x3d;
            uStack_98 = 0;
            pdb_140f332f0(&uStack_92,&uStack_428);
          }
          uStack_91 = 0;
          (*(code *)pppppppbStack_168[3])(&pppppppbStack_150,pppppppbStack_160,pppppppbStack_158);
          pppppppbStack_c0 =
               (byte *******)((ulonglong)pppppppbStack_c0 & 0xffffffff00000000 | uVar32);
          pppppppbVar24 = (byte *******)((ulonglong)pppppppbStack_a0 & 0xffffffff);
          pppppppbVar12 = pppppppbStack_a8;
        }
        else {
          if (*(longlong *)(lVar17 + 0x10) != 0) {
            lVar14 = 0;
            do {
              cVar7 = *(char *)(*(longlong *)(lVar17 + 8) + lVar14);
              if (cVar7 != '\t' && 0x5e < (byte)(cVar7 - 0x20U)) goto LAB_1406aceeb;
              lVar14 = lVar14 + 1;
            } while (*(longlong *)(lVar17 + 0x10) != lVar14);
          }
          uStack_91 = 1;
          pdb_140f95fa0(&uStack_428);
          bVar34 = ((uint)uStack_420 & 0xfffffffe) == 1000000000;
          pppppppbVar13 = uStack_428;
          if (bVar34) {
            pppppppbVar13 = (byte *******)0x8ca0;
          }
          uVar22 = (uint)uStack_420;
          if (bVar34) {
            uVar22 = 0;
          }
          uVar32 = (ulonglong)uVar22;
          if (sStack_c20 != 0x130) goto LAB_1406acefc;
LAB_1406ace05:
          if (3 < *_DAT_143ca8e90) {
            uStack_428 = (byte *******)0x0;
            uStack_420 = (code *)&UNK_142f978f2;
            uStack_418 = (byte *******)0xd;
            uStack_410 = (code *)0x0;
            uStack_408 = (byte *******)&UNK_142f978d2;
            uStack_400 = (byte *******)0x1f;
            uStack_3f8 = (byte *******)0x4;
            uStack_3f0 = (byte *******)&UNK_142f978f2;
            uStack_3e8 = 0xd;
            uStack_3e0 = 0x9900000001;
            puStack_3d8 = &UNK_142f97a2c;
            pppppppbStack_3d0 = (byte *******)0x4f;
            uStack_91 = 1;
            pdb_140f332f0(&uStack_92,&uStack_428);
          }
          bVar34 = false;
          pppppppbStack_c0 =
               (byte *******)((ulonglong)pppppppbStack_c0 & 0xffffffff00000000 | uVar32);
LAB_1406ad255:
          pppppppbVar12 = pppppppbStack_a8;
          pppppppbVar24 = (byte *******)((ulonglong)pppppppbStack_a0 & 0xffffffff);
          pdb_140f76030(&uStack_c88);
          if (bVar34) goto LAB_1406ad450;
        }
        pppppppbStack_448 =
             (byte *******)pdb_140f5a1d0(pppppppbVar12,pppppppbVar24,pppppppbVar13,pppppppbStack_c0)
        ;
        uStack_194 = (uint)pppppppbVar24;
        goto LAB_1406ad6da;
      }
      if (pppppppbStack_c60 <= uStack_418) {
        uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uStack_418,pppppppbStack_c60,&UNK_143264770);
      }
      pppppppbVar24 = (byte *******)pppppppbStack_c68[(longlong)uStack_418 * 0xd + 5];
      if (pppppppbVar24 != (byte *******)0x0) {
        pppppppbVar12 = (byte *******)0x0;
        do {
          bVar2 = *(byte *)((longlong)pppppppbStack_c68[(longlong)uStack_418 * 0xd + 4] +
                           (longlong)pppppppbVar12);
          if (bVar2 != 9 && 0x5e < (byte)(bVar2 - 0x20)) goto LAB_1406ad29d;
          pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 1);
        } while (pppppppbVar24 != pppppppbVar12);
      }
      uStack_91 = 1;
      pppppppbStack_168 = (byte *******)pppppppbStack_c68[(longlong)uStack_418 * 0xd + 4];
      pppppppbStack_160 = pppppppbVar24;
      pdb_140f94970(&uStack_188);
      if ((char)uStack_188 != '\0') {
        if (1 < *_DAT_143ca8e90) {
          uStack_798 = (byte *******)&pppppppbStack_168;
          uStack_790 = pdb_1402ed420;
          uStack_428 = (byte *******)0x0;
          uStack_420 = (code *)&UNK_142f978f2;
          uStack_418 = (byte *******)0xd;
          uStack_410 = (code *)0x0;
          uStack_408 = (byte *******)&UNK_142f978d2;
          uStack_400 = (byte *******)0x1f;
          uStack_3f8 = (byte *******)0x2;
          uStack_3f0 = (byte *******)&UNK_142f978f2;
          uStack_3e8 = 0xd;
          uStack_3e0 = 0x5a00000001;
          puStack_3d8 = &UNK_142f97936;
          uStack_91 = 1;
          pppppppbStack_3d0 = (byte *******)&uStack_798;
          pdb_140f332f0(&uStack_92,&uStack_428);
        }
        goto LAB_1406acd40;
      }
      uStack_4d0 = uStack_188._4_4_;
      uStack_4cc = (undefined4)uStack_180;
      uStack_91 = 1;
      puVar23 = (undefined8 *)&uStack_4d0;
      pdb_140f3fcf0(&uStack_428,puVar23,0xd53e8000,0x19db1de);
      pppppppbVar24 = (byte *******)uStack_420;
      uVar9 = SUB84(puVar23,0);
      if ((int)uStack_428 != 1) {
        pppppppbStack_1a8 = (byte *******)uStack_420;
        if (3 < *_DAT_143ca8e90) {
          uStack_798 = (byte *******)&pppppppbStack_168;
          uStack_790 = pdb_1402ed400;
          pppppppbStack_788 = (byte *******)&pppppppbStack_1a8;
          uStack_780 = pdb_140f72a40;
          uStack_428 = (byte *******)0x0;
          uStack_420 = (code *)&UNK_142f978f2;
          uStack_418 = (byte *******)0xd;
          uStack_410 = (code *)0x0;
          uStack_408 = (byte *******)&UNK_142f978d2;
          uStack_400 = (byte *******)0x1f;
          uStack_3f8 = (byte *******)0x4;
          uStack_3f0 = (byte *******)&UNK_142f978f2;
          uStack_3e8 = 0xd;
          uStack_3e0 = 0x4900000001;
          puStack_3d8 = &UNK_142f978ac;
          uStack_91 = 1;
          uVar9 = SUB84(&uStack_428,0);
          pppppppbStack_3d0 = (byte *******)&uStack_798;
          pdb_140f332f0(&uStack_92);
        }
        uStack_91 = 1;
        uVar10 = pdb_140f3fd40();
        uStack_e8 = (byte *******)CONCAT44(uVar9,uVar10);
        uStack_91 = 1;
        pdb_140f3fcf0(&uStack_428,&uStack_e8,0xd53e8000,0x19db1de);
        if ((int)uStack_428 == 1) {
          uStack_798 = (byte *******)uStack_420;
          uStack_790 = (code *)CONCAT44(uStack_790._4_4_,(undefined4)uStack_418);
          uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142f97de8,0x2b,&uStack_798,&UNK_142f97dc8,&UNK_142f97900);
        }
        pppppppbStack_1b8 = (byte *******)uStack_420;
        *pppppppbStack_438 = (byte ******)((longlong)pppppppbVar24 - (longlong)uStack_420);
        if (3 < *_DAT_143ca8e90) {
          uStack_798 = (byte *******)&pppppppbStack_1b8;
          uStack_790 = pdb_140f72a40;
          pppppppbStack_788 = pppppppbStack_438;
          uStack_780 = pdb_140f72bc0;
          uStack_428 = (byte *******)0x0;
          uStack_420 = (code *)&UNK_142f978f2;
          uStack_418 = (byte *******)0xd;
          uStack_410 = (code *)0x0;
          uStack_408 = (byte *******)&UNK_142f978d2;
          uStack_400 = (byte *******)0x1f;
          uStack_3f8 = (byte *******)0x4;
          uStack_3f0 = (byte *******)&UNK_142f978f2;
          uStack_3e8 = 0xd;
          uStack_3e0 = 0x5400000001;
          puStack_3d8 = &UNK_142f97918;
          uStack_91 = 1;
          pppppppbStack_3d0 = (byte *******)&uStack_798;
          pdb_140f332f0(&uStack_92,&uStack_428);
        }
        goto LAB_1406acd40;
      }
      uVar9 = (undefined4)uStack_418;
      pdb_14007ee60();
      pppppppbVar13 = (byte *******)pub_1406abab0(0x10,8);
      if (pppppppbVar13 == (byte *******)0x0) {
        uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x10);
      }
      *pppppppbVar13 = (byte ******)pppppppbVar24;
      *(undefined4 *)(pppppppbVar13 + 1) = uVar9;
      pppppppbStack_c0 = (byte *******)&UNK_143263e40;
      goto LAB_1406ad42b;
    }
    uStack_428 = (byte *******)uStack_790;
    pdb_14007ee60();
    pppppppbVar13 = (byte *******)pub_1406abab0(8,8);
    if (pppppppbVar13 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *pppppppbVar13 = (byte ******)pppppppbVar33;
    pppppppbStack_c0 = (byte *******)&UNK_143263eb8;
    pppppppbVar24 = (byte *******)((ulonglong)pppppppbVar24 & 0xffffffff);
    goto LAB_1406ad450;
  }
  goto LAB_1406ad6da;
LAB_1406ad29d:
  pppppppbVar13 = (byte *******)0x1;
  pppppppbStack_c0 = (byte *******)&UNK_143263dc8;
LAB_1406ad42b:
  pppppppbVar12 = pppppppbStack_a8;
  pppppppbVar24 = (byte *******)((ulonglong)pppppppbStack_a0 & 0xffffffff);
  pdb_140f76030(&uStack_c88);
LAB_1406ad450:
  uStack_c80 = pppppppbStack_c0;
  uStack_c88 = pppppppbVar13;
  if (*_DAT_143ca8e90 != 0) {
    uStack_798 = (byte *******)&uStack_c88;
    uStack_790 = pdb_1406d4400;
    uStack_428 = (byte *******)0x0;
    uStack_420 = (code *)&UNK_142f978f2;
    uStack_418 = (byte *******)0xd;
    uStack_410 = (code *)0x0;
    uStack_408 = (byte *******)&UNK_142f978d2;
    uStack_400 = (byte *******)0x1f;
    uStack_3f8 = (byte *******)0x1;
    uStack_3f0 = (byte *******)&UNK_142f978f2;
    uStack_3e8 = 0xd;
    uStack_3e0 = 0x11300000001;
    puStack_3d8 = &UNK_142f97be6;
    pppppppbStack_3d0 = (byte *******)&uStack_798;
    pdb_140f332f0(&uStack_92,&uStack_428);
  }
  uVar22 = (uint)pppppppbVar24;
  pppppppbStack_448 = (byte *******)pdb_140f5a1d0(pppppppbVar12,pppppppbVar24,uStack_440,0);
  uStack_440 = uStack_440 * 2;
  if (299 < uStack_440) {
    uStack_440 = 300;
  }
  uStack_798 = (byte *******)0x0;
  uStack_790 = (code *)0x1;
  pppppppbStack_788 = (byte *******)0x0;
  uStack_418 = (byte *******)0x60000020;
  uStack_420 = (code *)&UNK_142f97cb8;
  uStack_428 = (byte *******)&uStack_798;
  uStack_194 = uVar22;
  cVar7 = (*(code *)uStack_c80[4])(uStack_c88,&uStack_428);
  pcVar29 = pcStack_b8;
  if (cVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f97ce8,0x37,&uStack_92,&UNK_142f97da8,&UNK_142f97d90);
  }
  pppppppbStack_a18 = pppppppbStack_788;
  uStack_a28 = uStack_798;
  uStack_a20 = uStack_790;
  if (*pcStack_b8 == '\0') {
    pbVar18 = *(byte **)(pcStack_b8 + 0x10);
    lVar17 = *(longlong *)(pcStack_b8 + 0x18);
    if (lVar17 != 0) {
      pbVar26 = pbVar18 + 8;
      do {
        if (*(ulonglong *)(pbVar26 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar26,*(ulonglong *)(pbVar26 + -8),1);
        }
        pbVar26 = pbVar26 + 0x28;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (*puStack_190 == 0) goto LAB_1406ad667;
    uVar32 = *puStack_190 * 0x28;
    uVar30 = 8;
  }
  else {
    uVar32 = *puStack_190;
    if (uVar32 == 0) goto LAB_1406ad667;
    pbVar18 = *(byte **)(pcStack_b8 + 0x10);
    uVar30 = 1;
  }
  pub_1406abac0(pbVar18,uVar32,uVar30);
LAB_1406ad667:
  pcVar29[0] = '\x01';
  pcVar29[1] = '\0';
  pcVar29[2] = '\0';
  pcVar29[3] = '\0';
  pcVar29[4] = '\0';
  pcVar29[5] = '\0';
  pcVar29[6] = '\0';
  pcVar29[7] = '\0';
  puStack_190[2] = (ulonglong)pppppppbStack_a18;
  *(undefined4 *)puStack_190 = (undefined4)uStack_a28;
  *(undefined4 *)((longlong)puStack_190 + 4) = uStack_a28._4_4_;
  *(undefined4 *)(puStack_190 + 1) = (undefined4)uStack_a20;
  *(undefined4 *)((longlong)puStack_190 + 0xc) = uStack_a20._4_4_;
  pppppppbStack_a0 = uStack_c88;
  pppppppbStack_a8 = uStack_c80;
  if (*uStack_c80 != (byte ******)0x0) {
    (*(code *)*uStack_c80)(uStack_c88);
  }
  pppppppbVar24 = (byte *******)pppppppbStack_a8[1];
  if (pppppppbVar24 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbStack_a0,(ulonglong)pppppppbVar24,(ulonglong)pppppppbStack_a8[2]);
  }
LAB_1406ad6da:
  uStack_454 = pdb_140f3fd40();
  uStack_428 = pppppppbStack_450;
  pppppppbStack_518 = pppppppbVar24;
  pppppppbStack_1a8 = (byte *******)pdb_140facc80(&uStack_428);
  pppppppbVar12 = (byte *******)pppppppbStack_1a8[3];
  pppppppbVar13 = pppppppbVar12 + (longlong)pppppppbStack_1a8[4] * 6;
  pppppppbStack_1a0 = pppppppbVar24;
joined_r0x0001406ad727:
  pppppppbVar33 = pppppppbVar12;
  if (pppppppbVar12 != pppppppbVar13) {
    do {
      pppppppbVar20 = pppppppbVar33 + 5;
      uStack_a28 = pppppppbVar20;
      pppppppbVar24 = (byte *******)pdb_140eac430();
      if (*(byte *)(pppppppbVar24 + 3) == 1) {
LAB_1406ad7b6:
        if (*pppppppbVar24 == (byte ******)0x0) {
          ppppppbVar15 = (byte ******)pdb_140eac450();
          *pppppppbVar24 = ppppppbVar15;
        }
        pppppppbVar16 = (byte *******)pdb_140fac4e0();
        pppppppbVar31 = pppppppbVar24;
        if (pppppppbVar16 == (byte *******)0x0) {
          puVar23 = (undefined8 *)0x0;
          goto LAB_1406ad7f3;
        }
      }
      else {
        pppppppbVar24 = (byte *******)pdb_142dc94b0(pppppppbVar24,0);
        puVar23 = &uStack_a28;
        if (pppppppbVar24 != (byte *******)0x0) goto LAB_1406ad7b6;
LAB_1406ad7f3:
        uStack_428 = (byte *******)pdb_140eac450();
        uStack_420 = (code *)0x0;
        uStack_418 = (byte *******)0x0;
        if (puVar23 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143267048);
        }
        pppppppbVar31 = (byte *******)&uStack_428;
        pppppppbVar16 = (byte *******)pdb_140fac4e0(puVar23);
        pppppppbVar24 = pppppppbVar31;
        pdb_140eac3a0();
      }
      pppppppbVar12 = pppppppbVar33 + 6;
      uStack_798 = pppppppbVar16;
      pppppppbVar1 = pppppppbVar16 + 2;
      if (!SBORROW8(0,(longlong)pppppppbVar16[2])) goto LAB_1406ada20;
      uStack_790 = (code *)0x0;
      if (pppppppbVar31 == (byte *******)0x0) {
LAB_1406ad874:
        LOCK();
        *pppppppbVar16 = (byte ******)((longlong)*pppppppbVar16 + -1);
        UNLOCK();
        if (*pppppppbVar16 == (byte ******)0x0) {
          pdb_1406b1150(&uStack_798);
        }
      }
      else {
        LOCK();
        pppppppbVar24 = (byte *******)*pppppppbVar31;
        if (pppppppbVar1 == pppppppbVar24) {
          *pppppppbVar31 = (byte ******)0x3;
        }
        UNLOCK();
        if (pppppppbVar1 != pppppppbVar24) goto LAB_1406ad874;
      }
      pppppppbStack_1b8 = (byte *******)pppppppbVar33[1];
      pppppppbStack_1b0 = (byte *******)pppppppbVar33[2];
      pdb_140f3e9e0(&uStack_188,*(undefined8 *)(pcStack_b8 + 0x38),
                    *(undefined8 *)(pcStack_b8 + 0x40),pppppppbStack_1b8,pppppppbStack_1b0);
      pppppppbStack_a0 = uStack_180;
      uVar25 = CONCAT44(uStack_174,iStack_178);
      uStack_93 = 1;
      cVar7 = pdb_140f3ea80(uStack_180,uVar25);
      if (cVar7 == '\0') {
        if (2 < *_DAT_143ca8e90) {
          uStack_798 = (byte *******)&pppppppbStack_1b8;
          uStack_790 = pdb_1402ed420;
          uStack_428 = (byte *******)0x0;
          uStack_420 = (code *)&UNK_142f978f2;
          uStack_418 = (byte *******)0xd;
          uStack_410 = (code *)0x0;
          uStack_408 = (byte *******)&UNK_142f978d2;
          uStack_400 = (byte *******)0x1f;
          uStack_3f8 = (byte *******)0x3;
          uStack_3f0 = (byte *******)&UNK_142f978f2;
          uStack_3e8 = 0xd;
          uStack_3e0 = 0xac00000001;
          puStack_3d8 = &UNK_142f97a78;
          uStack_93 = 1;
          pppppppbStack_3d0 = (byte *******)&uStack_798;
          pdb_140f332f0(&uStack_92,&uStack_428);
        }
        uStack_428 = (byte *******)&UNK_142f97ab8;
        uStack_420 = pdb_1402ed400;
        uStack_418 = (byte *******)&pppppppbStack_1b8;
        uStack_410 = pdb_1402ed400;
        uStack_93 = 1;
        pdb_140f60760(&uStack_798,&UNK_142f97ac8,&uStack_428);
        pppppppbStack_7b8 = uStack_798;
        uStack_7b0 = (undefined4)uStack_790;
        uStack_7ac = uStack_790._4_4_;
        pppppppbStack_7a8 = pppppppbStack_788;
        uStack_93 = 1;
        pdb_1407962a0(&uStack_4b0,&pppppppbStack_7b8);
        if (SBORROW8(0,(longlong)uStack_4b0)) {
          uStack_790 = (code *)pppppppbStack_4a8;
          uStack_798 = (byte *******)0x2;
        }
        else {
          pppppppbStack_520 = pppppppbStack_4a8;
          pppppppbStack_a8 = uStack_4b0;
          pdb_140fad530(&uStack_428);
          uStack_4bc = 0x101010101010101;
          uStack_4cc = (undefined4)uVar21;
          uStack_4c8 = (undefined4)((ulonglong)uVar21 >> 0x20);
          uStack_4c4 = uVar6;
          puStack_f8 = puStack_3d8;
          pppppppbStack_f0 = pppppppbStack_3d0;
          uStack_108 = uStack_3e8;
          uStack_100 = uStack_3e0;
          pppppppbStack_118 = uStack_3f8;
          pppppppbStack_110 = uStack_3f0;
          pppppppbStack_128 = uStack_408;
          pppppppbStack_120 = uStack_400;
          pppppppbStack_138 = uStack_418;
          pppppppbStack_130 = (byte *******)uStack_410;
          uStack_148 = uStack_428;
          uStack_140 = (byte *******)uStack_420;
          uStack_6c0 = uStack_460;
          uStack_6d0 = uStack_470;
          uStack_6c8 = uStack_468;
          uStack_6e0 = uStack_480;
          uStack_6d8 = uStack_478;
          uStack_6f0 = uStack_490;
          uStack_6e8 = uStack_488;
          pppppppbStack_700 = pppppppbStack_4a0;
          pcStack_6f8 = pcStack_498;
          pppppppbStack_710 = uStack_4b0;
          pppppppbStack_708 = pppppppbStack_4a8;
          uStack_798 = (byte *******)0x0;
          puStack_720 = puStack_3d8;
          pppppppbStack_718 = pppppppbStack_3d0;
          uStack_730 = uStack_3e8;
          uStack_728 = uStack_3e0;
          pppppppbStack_740 = uStack_3f8;
          pppppppbStack_738 = uStack_3f0;
          pppppppbStack_750 = uStack_408;
          pppppppbStack_748 = uStack_400;
          pppppppbStack_760 = uStack_418;
          pppppppbStack_758 = (byte *******)uStack_410;
          pppppppbStack_770 = uStack_428;
          pppppppbStack_768 = (byte *******)uStack_420;
          uStack_780 = (code *)pppppppbStack_158;
          pppppppbStack_778 = pppppppbStack_150;
          uStack_790 = (code *)pppppppbStack_168;
          pppppppbStack_788 = pppppppbStack_160;
          uStack_6b0 = 1000000000;
          uStack_698 = 0x101010101010101;
          uStack_6ac = uStack_4d0;
          uStack_6a8 = uStack_4cc;
          uStack_6a4 = uStack_4c8;
          uStack_6a0 = uVar6;
          uStack_690 = 2;
          uStack_688 = 2;
        }
        pppppppbVar24 = *(byte ********)(pcStack_b8 + 0x98);
        uVar3 = *(undefined8 *)(pcStack_b8 + 0xa0);
        uVar9 = *(undefined4 *)(pcStack_b8 + 0xa8);
        LOCK();
        ppppppbVar15 = *pppppppbVar24;
        *pppppppbVar24 = (byte ******)((longlong)*pppppppbVar24 + 1);
        UNLOCK();
        if (*pppppppbVar24 == (byte ******)0x0 ||
            SCARRY8((longlong)ppppppbVar15,1) != (longlong)*pppppppbVar24 < 0) goto LAB_1406af896;
        uStack_93 = 1;
        uStack_4f8 = pppppppbVar24;
        uStack_4f0 = uVar3;
        uStack_4e8 = uVar9;
        pdb_140f8d300(&uStack_428,&uStack_4f8,&uStack_798);
        uStack_93 = 1;
        pdb_140f8d5c0(&uStack_a28,&uStack_428);
        pppppppbVar33 = (byte *******)uStack_a20;
        pppppppbVar24 = uStack_a28;
        if (uStack_a28 == (byte *******)0x3) {
          uStack_a28 = (byte *******)uStack_a20;
          uStack_ab = 1;
          pdb_140f3f5b0(&uStack_798);
          uStack_400 = pppppppbStack_778;
          uStack_3f8 = pppppppbStack_770;
          uStack_410 = (code *)pppppppbStack_788;
          uStack_408 = (byte *******)uStack_780;
          uStack_420 = (code *)uStack_798;
          uStack_418 = (byte *******)uStack_790;
          uStack_428 = (byte *******)&UNK_143251078;
          uStack_3f0 = pppppppbVar33;
          pdb_14007ee60();
          pppppppbVar24 = (byte *******)pub_1406abab0(0x40,8);
          if (pppppppbVar24 == (byte *******)0x0) {
            pppppppbStack_a8 = pppppppbVar33;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x40);
          }
          pppppppbVar24[6] = (byte ******)uStack_3f8;
          pppppppbVar24[7] = (byte ******)uStack_3f0;
          pppppppbVar24[4] = (byte ******)uStack_408;
          pppppppbVar24[5] = (byte ******)uStack_400;
          pppppppbVar24[2] = (byte ******)uStack_418;
          pppppppbVar24[3] = (byte ******)uStack_410;
          *pppppppbVar24 = (byte ******)uStack_428;
          pppppppbVar24[1] = (byte ******)uStack_420;
          uStack_e8 = (byte *******)0x8000000000000000;
          pppppppbStack_e0 = pppppppbVar24;
        }
        else {
          pppppppbVar31 = (byte *******)&pppppppbStack_a18;
          pub_142e32760(&pppppppbStack_c78,pppppppbVar31,0xb8);
          uStack_c88 = pppppppbVar24;
          uStack_c80 = pppppppbVar33;
          if (sStack_c20 == 200) {
            uStack_94 = 1;
            uStack_95 = 1;
            lVar17 = pdb_140fa7890(&uStack_c88);
            if (lVar17 == 1) {
              pub_142e32760(&uStack_428,&uStack_c88,200);
              uStack_94 = 0;
              uStack_95 = 1;
              pdb_140fa7c00(&uStack_798,&uStack_428);
              if (uStack_798 == (byte *******)0x0) {
                uStack_94 = 0;
                uStack_95 = 1;
                pppppppbStack_e0 = (byte *******)pdb_142dc9040();
LAB_1406ae633:
                uStack_e8 = (byte *******)0x8000000000000000;
              }
              else {
                pppppppbStack_a18 = pppppppbStack_788;
                uStack_a10 = (undefined4)uStack_780;
                uStack_a0c = uStack_780._4_4_;
                uStack_a28 = uStack_798;
                uStack_a20 = uStack_790;
                if (pppppppbStack_788 == pppppppbVar31) goto LAB_1406ae4d7;
                pppppppbStack_e0 = (byte *******)pdb_142dc86e0(&UNK_142f979f3,0x39);
                uStack_e8 = (byte *******)0x8000000000000000;
                uStack_94 = 0;
                uStack_95 = 1;
                (*(code *)uStack_a28[3])(&uStack_a10,uStack_a20,pppppppbStack_a18);
              }
            }
            else {
              pub_142e32760(&uStack_428,&uStack_c88,200);
              uStack_94 = 0;
              uStack_95 = 1;
              pdb_140fa7c00(&uStack_798,&uStack_428);
              if (uStack_798 == (byte *******)0x0) {
                uStack_94 = 0;
                uStack_95 = 1;
                pppppppbStack_e0 = (byte *******)pdb_142dc9040(uStack_790);
                goto LAB_1406ae633;
              }
LAB_1406ae4d7:
              pppppppbStack_168 = uStack_798;
              pppppppbStack_160 = (byte *******)uStack_790;
              pppppppbStack_158 = pppppppbStack_788;
              pppppppbStack_150 = (byte *******)uStack_780;
              pdb_140faf160(&uStack_798,uStack_790,pppppppbStack_788);
              uStack_a28 = (byte *******)0x0;
              uStack_a20 = (code *)0x1;
              pppppppbStack_a18 = (byte *******)0x0;
              uStack_418 = (byte *******)0x60000020;
              uStack_428 = (byte *******)&uStack_a28;
              uStack_420 = (code *)&UNK_142f97cb8;
              cVar7 = pdb_140fae350(&uStack_798,&uStack_428);
              pppppppbVar33 = (byte *******)uStack_a20;
              pppppppbVar24 = uStack_a28;
              if (cVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_142f97ce8,0x37,&uStack_92,&UNK_142f97da8,&UNK_142f97d90);
              }
              if (pppppppbStack_a18 == pppppppbStack_1b0) {
                iVar11 = pub_142e32750(uStack_a20,pppppppbStack_1b8);
                if (iVar11 != 0) goto LAB_1406ae578;
                if (pppppppbVar24 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbVar33,(ulonglong)pppppppbVar24,1);
                }
                pdb_140fb0510(&uStack_428,&pppppppbStack_168,0);
                uStack_a28 = (byte *******)uStack_420;
                uStack_a20 = (code *)uStack_418;
                pppppppbStack_a18 = (byte *******)uStack_410;
                uStack_428 = (byte *******)uStack_420;
                uStack_420 = (code *)uStack_418;
                if ((int)uStack_428 == 1) {
                  uStack_418 = (byte *******)uStack_410;
                  pppppppbVar24 = (byte *******)pdb_142dc8f00(&uStack_428);
                }
                else {
                  uStack_418 = (byte *******)uStack_410;
                  pppppppbVar24 = (byte *******)pdb_140fb11a0(&uStack_428,pppppppbStack_a0,uVar25);
                  if (pppppppbVar24 == (byte *******)0x0) {
                    pppppppbVar24 = uStack_188;
                    pppppppbVar33 = uStack_180;
                    if (2 < *_DAT_143ca8e90) {
                      uStack_a28 = (byte *******)&pppppppbStack_1b8;
                      uStack_a20 = pdb_1402ed420;
                      uStack_428 = (byte *******)0x0;
                      uStack_420 = (code *)&UNK_142f978f2;
                      uStack_418 = (byte *******)0xd;
                      uStack_410 = (code *)0x0;
                      uStack_408 = (byte *******)&UNK_142f978d2;
                      uStack_400 = (byte *******)0x1f;
                      uStack_3f8 = (byte *******)0x3;
                      uStack_3f0 = (byte *******)&UNK_142f978f2;
                      uStack_3e8 = 0xd;
                      uStack_3e0 = 0xc400000001;
                      puStack_3d8 = &UNK_142f97acd;
                      pppppppbStack_3d0 = (byte *******)&uStack_a28;
                      pdb_140f332f0(&uStack_92,&uStack_428);
                      pppppppbVar24 = uStack_188;
                      pppppppbVar33 = uStack_180;
                    }
                    pppppppbStack_e0 = pppppppbVar33;
                    uStack_e8 = pppppppbVar24;
                    uStack_d8 = (byte *******)CONCAT44(uStack_174,iStack_178);
                    uStack_d0 = (byte *******)CONCAT44(uStack_16c,uStack_170);
                    uStack_94 = 0;
                    uStack_95 = 0;
                    uStack_188 = uStack_e8;
                    uStack_180 = pppppppbStack_e0;
                    (*(code *)pppppppbStack_168[3])
                              (&pppppppbStack_150,pppppppbStack_160,pppppppbStack_158);
                    goto LAB_1406ad9e7;
                  }
                }
              }
              else {
LAB_1406ae578:
                if (pppppppbVar24 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbVar33,(ulonglong)pppppppbVar24,1);
                }
                pppppppbVar24 = (byte *******)pdb_142dc86e0(&UNK_142f97aef,0x11);
              }
              uStack_e8 = (byte *******)0x8000000000000000;
              uStack_94 = 0;
              uStack_95 = 1;
              pppppppbStack_e0 = pppppppbVar24;
              (*(code *)pppppppbStack_168[3])
                        (&pppppppbStack_150,pppppppbStack_160,pppppppbStack_158);
            }
          }
          else {
            if (*_DAT_143ca8e90 != 0) {
              uStack_a28 = (byte *******)CONCAT62(uStack_a28._2_6_,sStack_c20);
              uStack_798 = (byte *******)&pppppppbStack_1b8;
              uStack_790 = pdb_1402ed420;
              pppppppbStack_788 = (byte *******)&uStack_a28;
              uStack_780 = pdb_140f96f80;
              uStack_428 = (byte *******)0x0;
              uStack_420 = (code *)&UNK_142f978f2;
              uStack_418 = (byte *******)0xd;
              uStack_410 = (code *)0x0;
              uStack_408 = (byte *******)&UNK_142f978d2;
              uStack_400 = (byte *******)0x1f;
              uStack_3f8 = (byte *******)0x1;
              uStack_3f0 = (byte *******)&UNK_142f978f2;
              uStack_3e8 = 0xd;
              uStack_3e0 = 0xc700000001;
              puStack_3d8 = &UNK_142f97b00;
              uStack_94 = 1;
              uStack_95 = 1;
              pppppppbStack_3d0 = (byte *******)&uStack_798;
              pdb_140f332f0(&uStack_92,&uStack_428);
            }
            uStack_a28 = (byte *******)CONCAT62(uStack_a28._2_6_,sStack_c20);
            uStack_798 = (byte *******)&uStack_a28;
            uStack_790 = pdb_140f96f80;
            uStack_94 = 1;
            uStack_95 = 1;
            pdb_140f60760(&uStack_428,&UNK_142f97a76,&uStack_798);
            uStack_798 = uStack_428;
            uStack_790 = uStack_420;
            pppppppbStack_788 = uStack_418;
            uStack_94 = 1;
            uStack_95 = 1;
            pppppppbStack_e0 = (byte *******)pdb_142dc8630(&uStack_798);
            uStack_e8 = (byte *******)0x8000000000000000;
            uStack_93 = 1;
            pdb_140f76030(&uStack_c88);
          }
        }
        if (uStack_188 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_a0,(ulonglong)uStack_188,1);
        }
        if (SBORROW8(0,(longlong)uStack_e8)) goto LAB_1406adec5;
LAB_1406adfcd:
        pppppppbStack_7c8 = uStack_d8;
        pppppppbStack_7c0 = uStack_d0;
        pppppppbVar31 = uStack_e8;
        pppppppbVar33 = pppppppbStack_e0;
        uStack_a20 = (code *)uStack_d0;
      }
      else {
        pppppppbVar24 = uStack_188;
        pppppppbVar33 = uStack_180;
        if (3 < *_DAT_143ca8e90) {
          uStack_798 = (byte *******)&pppppppbStack_1b8;
          uStack_790 = pdb_1402ed420;
          uStack_428 = (byte *******)0x0;
          uStack_420 = (code *)&UNK_142f978f2;
          uStack_418 = (byte *******)0xd;
          uStack_410 = (code *)0x0;
          uStack_408 = (byte *******)&UNK_142f978d2;
          uStack_400 = (byte *******)0x1f;
          uStack_3f8 = (byte *******)0x4;
          uStack_3f0 = (byte *******)&UNK_142f978f2;
          uStack_3e8 = 0xd;
          uStack_3e0 = 0xa800000001;
          puStack_3d8 = &UNK_142f97b1f;
          uStack_93 = 1;
          pppppppbStack_3d0 = (byte *******)&uStack_798;
          pdb_140f332f0(&uStack_92,&uStack_428);
          pppppppbVar24 = uStack_188;
          pppppppbVar33 = uStack_180;
        }
        pppppppbStack_e0 = pppppppbVar33;
        uStack_e8 = pppppppbVar24;
        uStack_d8 = (byte *******)CONCAT44(uStack_174,iStack_178);
        uStack_d0 = (byte *******)CONCAT44(uStack_16c,uStack_170);
        uStack_188 = uStack_e8;
        uStack_180 = pppppppbStack_e0;
LAB_1406ad9e7:
        if (!SBORROW8(0,(longlong)uStack_e8)) goto LAB_1406adfcd;
LAB_1406adec5:
        uStack_a28 = (byte *******)&pppppppbStack_e0;
        if (*_DAT_143ca8e90 != 0) {
          uStack_798 = (byte *******)&uStack_a28;
          uStack_790 = pdb_140677370;
          uStack_428 = (byte *******)0x0;
          uStack_420 = (code *)&UNK_142f978f2;
          uStack_418 = (byte *******)0xd;
          uStack_410 = (code *)0x0;
          uStack_408 = (byte *******)&UNK_142f978d2;
          uStack_400 = (byte *******)0x1f;
          uStack_3f8 = (byte *******)0x1;
          uStack_3f0 = (byte *******)&UNK_142f978f2;
          uStack_3e8 = 0xd;
          uStack_3e0 = 0x12300000001;
          puStack_3d8 = &UNK_142f97c1b;
          uStack_97 = 1;
          pppppppbStack_3d0 = (byte *******)&uStack_798;
          pdb_140f332f0(&uStack_92,&uStack_428);
          if (!SBORROW8(0,(longlong)uStack_e8)) goto LAB_1406adfcd;
        }
        uStack_c88 = pppppppbStack_e0;
        uStack_798 = (byte *******)0x0;
        uStack_790 = (code *)0x1;
        pppppppbStack_788 = (byte *******)0x0;
        uStack_418 = (byte *******)0x60000020;
        uStack_420 = (code *)&UNK_142f97cb8;
        uStack_a20 = (code *)uStack_d0;
        uStack_428 = (byte *******)&uStack_798;
        cVar7 = pdb_140f36c30(&uStack_c88,&uStack_428);
        pppppppbVar33 = uStack_798;
        if (cVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142f97ce8,0x37,&uStack_92,&UNK_142f97da8,&UNK_142f97d90);
        }
        pppppppbStack_7c8 = (byte *******)uStack_790;
        pppppppbStack_7c0 = pppppppbStack_788;
        uStack_97 = 0;
        pdb_140f36c40(&uStack_c88);
        pppppppbVar31 = (byte *******)0x8000000000000000;
      }
      uStack_428 = (byte *******)0x1;
      uStack_420 = (code *)0x1;
      uStack_408 = pppppppbStack_7c8;
      uStack_400 = pppppppbStack_7c0;
      uStack_418 = pppppppbVar31;
      uStack_410 = (code *)pppppppbVar33;
      pdb_14007ee60();
      pppppppbVar24 = (byte *******)0x8;
      pbVar18 = pub_1406abab0(0x30,8);
      if (pbVar18 == (byte *)0x0) {
        pppppppbStack_a8 = pppppppbVar33;
        pppppppbStack_a0 = pppppppbVar31;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      *(undefined4 *)(pbVar18 + 0x20) = (undefined4)uStack_408;
      *(undefined4 *)(pbVar18 + 0x24) = uStack_408._4_4_;
      *(undefined4 *)(pbVar18 + 0x28) = (undefined4)uStack_400;
      *(undefined4 *)(pbVar18 + 0x2c) = uStack_400._4_4_;
      *(undefined4 *)(pbVar18 + 0x10) = (undefined4)uStack_418;
      *(undefined4 *)(pbVar18 + 0x14) = uStack_418._4_4_;
      *(undefined4 *)(pbVar18 + 0x18) = (undefined4)uStack_410;
      *(undefined4 *)(pbVar18 + 0x1c) = uStack_410._4_4_;
      *(int *)pbVar18 = (int)uStack_428;
      *(undefined4 *)(pbVar18 + 4) = uStack_428._4_4_;
      *(uint *)(pbVar18 + 8) = (uint)uStack_420;
      *(undefined4 *)(pbVar18 + 0xc) = uStack_420._4_4_;
      LOCK();
      pppppppbVar33 = (byte *******)*pppppppbVar20;
      *pppppppbVar20 = (byte ******)(pbVar18 + 0x10);
      UNLOCK();
      uStack_798 = (byte *******)&uStack_4b0;
      uStack_790 = (code *)&pppppppbStack_168;
      uStack_428 = (byte *******)&uStack_c88;
      uStack_420 = (code *)&uStack_a28;
      uStack_97 = 0;
      uStack_c88 = pppppppbVar33;
      uStack_a28 = pppppppbVar20;
      uStack_4b0 = pppppppbVar12;
      uStack_418 = (byte *******)&uStack_798;
      pppppppbStack_168 = pppppppbVar20;
      pdb_140facf00(&uStack_428);
      uStack_428 = pppppppbVar33 + -2;
      LOCK();
      pppppppbVar33 = pppppppbVar33 + -2;
      *pppppppbVar33 = (byte ******)((longlong)*pppppppbVar33 + -1);
      UNLOCK();
      if (*pppppppbVar33 == (byte ******)0x0) {
        uStack_97 = 0;
        pdb_1406b1150(&uStack_428);
      }
      pppppppbVar33 = pppppppbVar12;
      if (pppppppbVar12 == pppppppbVar13) break;
    } while( true );
  }
  pppppppbVar12 = pppppppbStack_1a0;
  pppppppbStack_1a0 = (byte *******)0x0;
  if (pppppppbVar12 == (byte *******)0x0) {
    LOCK();
    *pppppppbStack_1a8 = (byte ******)((longlong)*pppppppbStack_1a8 + -1);
    ppppppbVar15 = *pppppppbStack_1a8;
    UNLOCK();
joined_r0x0001406ae8db:
    if (ppppppbVar15 == (byte ******)0x0) {
      pdb_1406b1250(&pppppppbStack_1a8);
    }
  }
  else {
    pppppppbVar33 = pppppppbStack_1a8 + 2;
    pppppppbVar24 = (byte *******)0x3;
    LOCK();
    pppppppbVar13 = (byte *******)*pppppppbVar12;
    if (pppppppbVar33 == pppppppbVar13) {
      *pppppppbVar12 = (byte ******)0x3;
    }
    UNLOCK();
    if (pppppppbVar33 != pppppppbVar13) {
      LOCK();
      *pppppppbStack_1a8 = (byte ******)((longlong)*pppppppbStack_1a8 + -1);
      ppppppbVar15 = *pppppppbStack_1a8;
      UNLOCK();
      goto joined_r0x0001406ae8db;
    }
  }
  pppppppbStack_160 = (byte *******)0x8000000000000002;
  pppppppbStack_168 = (byte *******)0x8000000000000000;
  uStack_428 = pppppppbStack_450;
  cStack_96 = '\x01';
  uStack_c88 = (byte *******)pdb_140facc80(&uStack_428);
  ppppppbVar15 = uStack_c88[3];
  ppppppbVar4 = uStack_c88[4];
  uVar32 = (longlong)pppppppbStack_518 << 0x20 | (ulonglong)uStack_454;
  ppppppbVar27 = ppppppbVar15;
  uStack_c80 = pppppppbVar24;
  while (ppppppbVar28 = ppppppbVar27, pppppppbVar24 = uStack_c80, ppppppbVar27 = ppppppbVar28 + 6,
        ppppppbVar28 != ppppppbVar15 + (longlong)ppppppbVar4 * 6) {
    if (((longlong)ppppppbVar28[3] <= (longlong)uVar32) &&
       ((longlong)uVar32 < (longlong)ppppppbVar28[4])) {
      uStack_a28 = (byte *******)(ppppppbVar28 + 5);
      pppppppbVar24 = (byte *******)pdb_140eac430();
      if (*(byte *)(pppppppbVar24 + 3) == 1) {
LAB_1406ae99b:
        if (*pppppppbVar24 == (byte ******)0x0) {
          ppppppbVar19 = (byte ******)pdb_140eac450();
          *pppppppbVar24 = ppppppbVar19;
        }
        pppppppbVar12 = (byte *******)pdb_140fac4e0(&uStack_a28);
        if (pppppppbVar12 == (byte *******)0x0) {
          puVar23 = (undefined8 *)0x0;
          goto LAB_1406ae9ca;
        }
      }
      else {
        pppppppbVar24 = (byte *******)pdb_142dc94b0(pppppppbVar24,0);
        puVar23 = &uStack_a28;
        if (pppppppbVar24 != (byte *******)0x0) goto LAB_1406ae99b;
LAB_1406ae9ca:
        uStack_798 = (byte *******)pdb_140eac450();
        uStack_790 = (code *)0x0;
        pppppppbStack_788 = (byte *******)0x0;
        if (puVar23 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143267048);
        }
        pppppppbVar24 = (byte *******)&uStack_798;
        pppppppbVar12 = (byte *******)pdb_140fac4e0(puVar23);
        pdb_140eac3a0(&uStack_798);
      }
      uStack_a28 = pppppppbVar12;
      uStack_a20 = (code *)pppppppbVar24;
      if (SBORROW8(0,(longlong)pppppppbVar12[2])) {
        uVar30 = (ulonglong)pppppppbVar12[3] ^ 0x8000000000000000;
        if (-1 < (longlong)pppppppbVar12[3]) {
          uVar30 = 1;
        }
        pppppppbVar24 = (byte *******)0x8000000000000000;
        if (uVar30 != 0) {
          if (uVar30 == 1) {
            pdb_140f60be0(&uStack_798,pppppppbVar12 + 3);
            pppppppbVar24 = uStack_798;
          }
          else {
            pppppppbVar24 = (byte *******)0x8000000000000002;
          }
        }
        uStack_798 = pppppppbVar24;
        uStack_410 = (code *)pppppppbStack_788;
        uStack_420 = (code *)uStack_798;
        uStack_418 = (byte *******)uStack_790;
        uStack_428 = (byte *******)0x8000000000000000;
      }
      else {
        pppppppbVar24 = (byte *******)pppppppbVar12[4];
        if ((longlong)pppppppbVar24 < 0) {
          uVar25 = 0;
LAB_1406af538:
          pdb_142dc7e2a(uVar25,pppppppbVar24);
          goto LAB_1406af896;
        }
        if (pppppppbVar24 == (byte *******)0x0) {
          pppppppbVar13 = (byte *******)0x1;
        }
        else {
          pppppppbStack_a0 = (byte *******)pppppppbVar12[3];
          pdb_14007ee60();
          uVar25 = 1;
          pppppppbVar13 = (byte *******)pub_1406abab0((ulonglong)pppppppbVar24,1);
          if (pppppppbVar13 == (byte *******)0x0) goto LAB_1406af538;
          pub_142e32760(pppppppbVar13,pppppppbStack_a0,pppppppbVar24);
        }
        uStack_410 = (code *)CONCAT71(uStack_410._1_7_,*(byte *)(pppppppbVar12 + 5));
        uStack_428 = pppppppbVar24;
        uStack_420 = (code *)pppppppbVar13;
        uStack_418 = pppppppbVar24;
      }
      pppppppbVar12 = uStack_428;
      pppppppbVar24 = (byte *******)uStack_a20;
      uStack_a20 = (code *)0x0;
      if (pppppppbVar24 == (byte *******)0x0) {
LAB_1406aeb60:
        LOCK();
        *uStack_a28 = (byte ******)((longlong)*uStack_a28 + -1);
        UNLOCK();
        if (*uStack_a28 == (byte ******)0x0) {
          pdb_1406b1150(&uStack_a28);
        }
      }
      else {
        LOCK();
        pppppppbVar13 = (byte *******)*pppppppbVar24;
        if (uStack_a28 + 2 == pppppppbVar13) {
          *pppppppbVar24 = (byte ******)0x3;
        }
        UNLOCK();
        if (uStack_a28 + 2 != pppppppbVar13) goto LAB_1406aeb60;
      }
      if (!SBORROW8(0,(longlong)pppppppbVar12)) {
        unaff_XMM8_Da = *(undefined4 *)(ppppppbVar28 + 3);
        unaff_XMM8_Db = *(undefined4 *)((longlong)ppppppbVar28 + 0x1c);
        unaff_XMM8_Dc = *(undefined4 *)(ppppppbVar28 + 4);
        unaff_XMM8_Dd = *(undefined4 *)((longlong)ppppppbVar28 + 0x24);
      }
      pppppppbVar24 = pppppppbStack_168;
      pppppppbVar13 = pppppppbStack_160;
      if (((!SBORROW8(0,(longlong)pppppppbStack_168)) ||
          (pppppppbVar24 = pppppppbStack_160, pppppppbVar13 = pppppppbStack_158,
          -1 < (longlong)pppppppbStack_160)) && (pppppppbVar24 != (byte *******)0x0)) {
        pub_1406abac0((byte *)pppppppbVar13,(ulonglong)pppppppbVar24,1);
      }
      pppppppbStack_150 = (byte *******)uStack_410;
      pppppppbStack_160 = (byte *******)uStack_420;
      pppppppbStack_158 = uStack_418;
      uStack_148 = (byte *******)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
      uStack_140 = (byte *******)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
      pppppppbStack_168 = pppppppbVar12;
    }
  }
  uStack_c80 = (byte *******)0x0;
  if (pppppppbVar24 == (byte *******)0x0) {
    LOCK();
    *uStack_c88 = (byte ******)((longlong)*uStack_c88 + -1);
    ppppppbVar15 = *uStack_c88;
    UNLOCK();
joined_r0x0001406aec5b:
    if (ppppppbVar15 == (byte ******)0x0) {
      cStack_96 = '\x01';
      pdb_1406b1250();
    }
  }
  else {
    LOCK();
    pppppppbVar12 = (byte *******)*pppppppbVar24;
    if (uStack_c88 + 2 == pppppppbVar12) {
      *pppppppbVar24 = (byte ******)0x3;
    }
    UNLOCK();
    if (uStack_c88 + 2 != pppppppbVar12) {
      LOCK();
      *uStack_c88 = (byte ******)((longlong)*uStack_c88 + -1);
      ppppppbVar15 = *uStack_c88;
      UNLOCK();
      goto joined_r0x0001406aec5b;
    }
  }
  pppppppbVar12 = pppppppbStack_158;
  pppppppbVar24 = pppppppbStack_160;
  puVar23 = &uStack_798;
  if (SBORROW8(0,(longlong)pppppppbStack_168)) {
    if ((pppppppbStack_160 == (byte *******)0x8000000000000002) && (*pcStack_b8 != '\0')) {
      cStack_96 = '\x01';
      pdb_140f60be0(&uStack_428,puStack_190);
      pppppppbStack_150 = uStack_418;
      pppppppbStack_160 = uStack_428;
      pppppppbStack_158 = (byte *******)uStack_420;
      pppppppbStack_168 = (byte *******)0x8000000000000000;
    }
    pppppppbVar24 = pppppppbStack_160;
    if (!SBORROW8(0,*puStack_430)) {
LAB_1406aed70:
      uVar32 = (ulonglong)pppppppbVar24 ^ 0x8000000000000000;
      if (-1 < (longlong)pppppppbVar24) {
        uVar32 = 1;
      }
      pppppppbVar24 = (byte *******)0x8000000000000000;
      if (uVar32 != 0) {
        if (uVar32 == 1) {
          cStack_96 = 1;
          pdb_140f60be0(&uStack_a28,&pppppppbStack_160);
          pppppppbVar24 = uStack_a28;
        }
        else {
          pppppppbVar24 = (byte *******)0x8000000000000002;
        }
      }
      uStack_a28 = pppppppbVar24;
      uStack_410 = (code *)pppppppbStack_a18;
      uStack_420 = (code *)uStack_a28;
      uStack_418 = (byte *******)uStack_a20;
      uStack_428 = (byte *******)0x8000000000000000;
      goto LAB_1406af004;
    }
    uVar32 = *(ulonglong *)(pcStack_b8 + 0x70) ^ 0x8000000000000000;
    if (-1 < (longlong)*(ulonglong *)(pcStack_b8 + 0x70)) {
      uVar32 = 1;
    }
    uVar30 = (ulonglong)pppppppbStack_160 ^ 0x8000000000000000;
    if (-1 < (longlong)pppppppbStack_160) {
      uVar30 = 1;
    }
    if (uVar32 != uVar30) goto LAB_1406aed70;
    cVar7 = '\x01';
    if (uVar32 == 1) {
      if (*(byte ********)(pcStack_b8 + 0x80) == pppppppbStack_150) {
        iVar11 = pub_142e32750(*(undefined8 *)(pcStack_b8 + 0x78));
        if (iVar11 == 0) goto LAB_1406af0d1;
      }
      goto LAB_1406aed70;
    }
  }
  else {
    if (((!SBORROW8(0,*puStack_430)) && (*(byte ********)(pcStack_b8 + 0x88) == uStack_148)) &&
       (*(byte ********)(pcStack_b8 + 0x90) == uStack_140)) {
      cStack_96 = 1;
      pdb_140f3ddd0(&uStack_c88,*(undefined8 *)(pcStack_b8 + 0x70),
                    *(undefined8 *)(pcStack_b8 + 0x78));
      cStack_96 = 1;
      pdb_140f3ddd0(&uStack_a28,pppppppbVar24,pppppppbVar12);
      if (((uStack_c80 == (byte *******)uStack_a20) && (cStack_c50 == (char)uStack_9f0)) &&
         ((cStack_c4f == '\x02' && (uStack_9f0._1_1_ == '\x02')))) {
        if ((byte)pppppppbStack_a18 < 3 == (byte)pppppppbStack_c78 < 3) {
          iVar11 = pub_142e32750(uStack_c88);
          if (iVar11 == 0) {
            cVar7 = '\x01';
            goto LAB_1406af0d1;
          }
        }
      }
      pppppppbStack_760 = (byte *******)CONCAT62(uStack_c4e,CONCAT11(cStack_c4f,cStack_c50));
      pppppppbStack_768 = pppppppbStack_c58;
      pppppppbStack_778 = pppppppbStack_c68;
      pppppppbStack_770 = pppppppbStack_c60;
      pppppppbStack_788 = pppppppbStack_c78;
      uStack_780 = (code *)pppppppbStack_c70;
      uStack_798 = uStack_c88;
      uStack_790 = (code *)uStack_c80;
      uStack_3f8 = (byte *******)CONCAT44(uStack_9f4,uStack_9f8);
      uStack_3f0 = (byte *******)CONCAT44(uStack_9ec,uStack_9f0);
      uStack_408 = (byte *******)CONCAT44(uStack_a04,uStack_a08);
      uStack_400 = (byte *******)CONCAT44(uStack_9fc,uStack_a00);
      uStack_418 = pppppppbStack_a18;
      uStack_410 = (code *)CONCAT44(uStack_a0c,uStack_a10);
      uStack_428 = uStack_a28;
      uStack_420 = uStack_a20;
      cStack_96 = '\x01';
      cVar8 = pdb_140fb2680(puVar23);
      cVar7 = '\x01';
      if (cVar8 != '\0') goto LAB_1406af0d1;
    }
    pppppppbVar33 = uStack_140;
    pppppppbVar13 = uStack_148;
    pppppppbVar12 = pppppppbStack_158;
    pppppppbVar24 = pppppppbStack_160;
    if ((longlong)pppppppbStack_158 < 0) {
      uVar25 = 0;
LAB_1406af51e:
      cStack_96 = '\x01';
      pdb_142dc7e2a(uVar25,pppppppbVar12);
      goto LAB_1406af896;
    }
    if (pppppppbStack_158 == (byte *******)0x0) {
      pppppppbVar20 = (byte *******)0x1;
    }
    else {
      pdb_14007ee60();
      uVar25 = 1;
      pppppppbVar20 = (byte *******)pub_1406abab0((ulonglong)pppppppbVar12,1);
      if (pppppppbVar20 == (byte *******)0x0) goto LAB_1406af51e;
      pub_142e32760(pppppppbVar20,pppppppbVar24,pppppppbVar12);
    }
    uStack_428 = pppppppbVar12;
    uStack_418 = pppppppbVar12;
    uStack_410 = (code *)CONCAT71(uStack_410._1_7_,pppppppbStack_150._0_1_);
    uStack_408 = pppppppbVar13;
    uStack_400 = pppppppbVar33;
    uStack_420 = (code *)pppppppbVar20;
LAB_1406af004:
    cStack_96 = 1;
    pdb_140fb2860(puVar23,pcStack_510,&uStack_428);
    if (uStack_798 != (byte *******)0x8000000000000001) {
      pppppppbVar24 = uStack_798;
      if (((!SBORROW8(0,(longlong)uStack_798)) ||
          (puVar23 = &uStack_790, pppppppbVar24 = (byte *******)uStack_790,
          -1 < (longlong)uStack_790)) && (pppppppbVar24 != (byte *******)0x0)) {
        pub_1406abac0((byte *)puVar23[1],(ulonglong)pppppppbVar24,1);
      }
      if (2 < *_DAT_143ca8e90) {
        uStack_428 = (byte *******)0x0;
        uStack_420 = (code *)&UNK_142f978f2;
        uStack_418 = (byte *******)0xd;
        uStack_410 = (code *)0x0;
        uStack_408 = (byte *******)&UNK_142f978d2;
        uStack_400 = (byte *******)0x1f;
        uStack_3f8 = (byte *******)0x3;
        uStack_3f0 = (byte *******)&UNK_142f978f2;
        uStack_3e8 = 0xd;
        uStack_3e0 = 0x14200000001;
        puStack_3d8 = &UNK_142f97bff;
        pppppppbStack_3d0 = (byte *******)0x39;
        cStack_96 = 1;
        pdb_140f332f0(&uStack_92,&uStack_428);
      }
      pcVar29 = pcStack_b8;
      pppppppbVar24 = pppppppbStack_168;
      pppppppbVar12 = pppppppbStack_160;
      if (((!SBORROW8(0,(longlong)pppppppbStack_168)) ||
          (pppppppbVar24 = pppppppbStack_160, pppppppbVar12 = pppppppbStack_158,
          -1 < (longlong)pppppppbStack_160)) && (pppppppbVar24 != (byte *******)0x0)) {
        pub_1406abac0((byte *)pppppppbVar12,(ulonglong)pppppppbVar24,1);
      }
      pdb_140f75220(pcVar29);
      return;
    }
    uStack_408 = uStack_148;
    uStack_400 = uStack_140;
    uStack_418 = pppppppbStack_158;
    uStack_410 = (code *)pppppppbStack_150;
    uStack_428 = pppppppbStack_168;
    uStack_420 = (code *)pppppppbStack_160;
    uVar32 = *puStack_430;
    if (SBORROW8(0,uVar32)) {
      uVar32 = *(ulonglong *)(pcStack_b8 + 0x70);
      if ((-1 < (longlong)uVar32) && (uVar32 != 0)) {
        pbVar18 = *(byte **)(pcStack_b8 + 0x78);
LAB_1406af09d:
        pub_1406abac0(pbVar18,uVar32,1);
      }
    }
    else if (uVar32 != 0) {
      pbVar18 = *(byte **)(pcStack_b8 + 0x70);
      goto LAB_1406af09d;
    }
    puStack_430[4] = (ulonglong)uStack_408;
    puStack_430[5] = (ulonglong)uStack_400;
    puStack_430[2] = (ulonglong)uStack_418;
    puStack_430[3] = (ulonglong)uStack_410;
    *(int *)puStack_430 = (int)uStack_428;
    *(undefined4 *)((longlong)puStack_430 + 4) = uStack_428._4_4_;
    *(uint *)(puStack_430 + 1) = (uint)uStack_420;
    *(undefined4 *)((longlong)puStack_430 + 0xc) = uStack_420._4_4_;
    cVar7 = '\0';
  }
LAB_1406af0d1:
  pppppppbVar24 = (byte *******)0x0;
  cStack_96 = cVar7;
  pdb_140f502d0(1);
  if ((cVar7 != '\0') &&
     (((pppppppbVar24 = pppppppbStack_168, pppppppbVar12 = pppppppbStack_160,
       !SBORROW8(0,(longlong)pppppppbStack_168) ||
       (pppppppbVar24 = pppppppbStack_160, pppppppbVar12 = pppppppbStack_158,
       -1 < (longlong)pppppppbStack_160)) && (pppppppbVar24 != (byte *******)0x0)))) {
    pub_1406abac0((byte *)pppppppbVar12,(ulonglong)pppppppbVar24,1);
  }
  goto LAB_1406ac75b;
LAB_1406ada20:
  uStack_790 = (code *)0x0;
  if (pppppppbVar31 != (byte *******)0x0) {
    LOCK();
    pppppppbVar33 = (byte *******)*pppppppbVar31;
    if (pppppppbVar1 == pppppppbVar33) {
      *pppppppbVar31 = (byte ******)0x3;
    }
    UNLOCK();
    if (pppppppbVar1 == pppppppbVar33) goto joined_r0x0001406ad727;
  }
  LOCK();
  *pppppppbVar16 = (byte ******)((longlong)*pppppppbVar16 + -1);
  UNLOCK();
  if (*pppppppbVar16 == (byte ******)0x0) {
    pdb_1406b1150(&uStack_798);
  }
  goto joined_r0x0001406ad727;
}

