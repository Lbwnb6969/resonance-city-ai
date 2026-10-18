// VA 0x140d8fc60, PDB extent 8000 bytes
// tg_mods::overlay::scan_texture_dir
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::scan_texture_dir
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 8000 */

void pdb_140d8fc60(undefined8 param_1,byte *******param_2,byte *******param_3,byte *******param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  byte ******ppppppbVar2;
  longlong lVar3;
  code *pcVar4;
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
  byte *******pppppppbVar35;
  byte *******pppppppbVar36;
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
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  int iVar77;
  longlong lVar78;
  byte *pbVar79;
  byte *******pppppppbVar80;
  byte *******pppppppbVar81;
  longlong lVar82;
  byte *******pppppppbVar83;
  byte ******ppppppbVar84;
  byte *******pppppppbVar85;
  ulonglong uVar86;
  byte *pbVar87;
  byte *pbVar88;
  undefined8 uVar89;
  ulonglong uVar90;
  byte *******pppppppbVar91;
  byte bVar92;
  byte *******pppppppbVar93;
  ulonglong uVar94;
  byte *******pppppppbVar95;
  ulonglong uVar96;
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
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte *******pppppppbStack_908;
  byte *******pppppppbStack_900;
  byte bStack_8f8;
  int7 iStack_8f7;
  byte *******pppppppbStack_8f0;
  byte *******pppppppbStack_8e8;
  byte *******pppppppbStack_8e0;
  byte *******pppppppbStack_8d8;
  char cStack_8d0;
  char cStack_8cf;
  undefined6 uStack_8ce;
  byte *******pppppppbStack_6a8;
  byte *******pppppppbStack_6a0;
  byte *******pppppppbStack_698;
  byte *******pppppppbStack_690;
  undefined *puStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined *puStack_670;
  byte *******pppppppbStack_438;
  byte *******pppppppbStack_430;
  byte *******pppppppbStack_428;
  byte *******pppppppbStack_420;
  byte *******pppppppbStack_418;
  byte *******pppppppbStack_410;
  byte *******pppppppbStack_408;
  byte *******pppppppbStack_400;
  undefined1 auStack_3f8 [16];
  byte *******pppppppbStack_1c8;
  code *pcStack_1c0;
  byte *******pppppppbStack_1b8;
  byte *******pppppppbStack_1b0;
  byte ******ppppppbStack_1a8;
  byte ******ppppppbStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  byte *******pppppppbStack_178;
  byte *******pppppppbStack_170;
  byte *******pppppppbStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  ulonglong uStack_100;
  byte *pbStack_f8;
  ulonglong uStack_f0;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  undefined1 uStack_a7;
  undefined1 auStack_a6 [6];
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  pdb_140f4f710(&pppppppbStack_438,param_3,param_4);
  if ((int)pppppppbStack_438 == 2) {
    pppppppbStack_6a0 = pppppppbStack_430;
    pppppppbStack_6a8 = (byte *******)0x2;
LAB_140d8fd15:
    pdb_1404b38e0(&pppppppbStack_6a0);
    return;
  }
  pub_142e32760(&pppppppbStack_6a8,&pppppppbStack_438,0x270);
  if (pppppppbStack_6a8 == (byte *******)0x2) goto LAB_140d8fd15;
  pppppppbStack_e8 = param_2;
  pppppppbStack_c8 = param_3;
  pppppppbStack_c0 = param_4;
  pub_142e32760(&pppppppbStack_438,&pppppppbStack_6a8,0x270);
  uStack_100 = 0;
  pbStack_f8 = (byte *)0x8;
  uStack_f0 = 0;
  pppppppbStack_e0 = (byte *******)0x0;
  pppppppbStack_d8 = (byte *******)0x8;
  pppppppbStack_d0 = (byte *******)0x0;
  while (pdb_140d8a320(&pppppppbStack_908,&pppppppbStack_438),
        pppppppbStack_908 != (byte *******)0x0) {
    pub_142e32760(&pppppppbStack_6a8,&pppppppbStack_908,600);
    pdb_140f46b10(&pppppppbStack_1b8,&pppppppbStack_6a8);
    ppppppbVar2 = ppppppbStack_1a8;
    auStack_a6[4] = 1;
    pppppppbStack_b0 = pppppppbStack_1b0;
    cVar75 = pdb_140f3ea80(pppppppbStack_1b0,ppppppbStack_1a8);
    if (cVar75 == '\0') {
      auStack_a6[4] = 1;
      cVar76 = pdb_140d926c0(pppppppbStack_b0,ppppppbVar2);
      if (cVar76 != '\0') goto LAB_140d8fe5f;
LAB_140d90100:
      if (pppppppbStack_1b8 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_b0,(ulonglong)pppppppbStack_1b8,1);
      }
      LOCK();
      *pppppppbStack_6a8 = (byte ******)((longlong)*pppppppbStack_6a8 + -1);
      UNLOCK();
      if (*pppppppbStack_6a8 == (byte ******)0x0) {
        pdb_140cd0de0(&pppppppbStack_6a8);
      }
    }
    else {
LAB_140d8fe5f:
      auStack_a6[4] = 1;
      ppppppbVar84 = ppppppbVar2;
      lVar78 = pdb_140f3ecf0(pppppppbStack_b0,ppppppbVar2);
      if (lVar78 != 0) {
        auStack_a6[4] = 1;
        pdb_140f69110(&pppppppbStack_180,lVar78,ppppppbVar84);
        if ((char)pppppppbStack_180 == '\0') {
          pppppppbVar85 = (byte *******)0x0;
          do {
            if (pppppppbStack_170 == pppppppbVar85) goto LAB_140d8fea2;
            pbVar79 = (byte *)((longlong)pppppppbStack_178 + (longlong)pppppppbVar85);
            pppppppbVar85 = (byte *******)((longlong)pppppppbVar85 + 1);
          } while (0x19 < (byte)(*pbVar79 + 0xbf));
          if (*_DAT_143ca8e90 != 0) {
            auStack_a6[4] = 1;
            pdb_141b1e240(&pppppppbStack_120,pppppppbStack_b0,ppppppbVar2,3);
            pppppppbStack_1c8 = (byte *******)&pppppppbStack_120;
            pcStack_1c0 = pdb_140f58250;
            pppppppbStack_180 = (byte *******)0x0;
            pppppppbStack_178 = (byte *******)&UNK_1431e5105;
            pppppppbStack_170 = (byte *******)0x10;
            pppppppbStack_168 = (byte *******)0x0;
            puStack_160 = &UNK_1431e50e7;
            uStack_158 = 0x1d;
            uStack_150 = 1;
            uStack_148 = &UNK_1431e5105;
            uStack_140 = 0x10;
            uStack_138 = 0x38400000001;
            puStack_130 = &UNK_1431e53a8;
            pppppppbStack_128 = (byte *******)&pppppppbStack_1c8;
            pdb_140f332f0(auStack_a6,&pppppppbStack_180);
            if (pppppppbStack_120 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_118,(ulonglong)pppppppbStack_120,1);
            }
          }
          goto LAB_140d90100;
        }
      }
LAB_140d8fea2:
      pppppppbVar85 = pppppppbStack_d0;
      uVar90 = uStack_f0;
      pppppppbStack_b8 = pppppppbStack_1b8;
      if (cVar75 == '\0') {
        if (pppppppbStack_d0 == pppppppbStack_e0) {
          pdb_142d7e6e0(&pppppppbStack_e0);
        }
        pppppppbStack_d8[(longlong)pppppppbVar85 * 4] = (byte ******)pppppppbStack_b8;
        pppppppbStack_d8[(longlong)pppppppbVar85 * 4 + 1] = (byte ******)pppppppbStack_b0;
        pppppppbStack_d8[(longlong)pppppppbVar85 * 4 + 2] = ppppppbStack_1a8;
        (pppppppbStack_d8 + (longlong)pppppppbVar85 * 4 + 2)[1] = ppppppbStack_1a0;
        pppppppbStack_d0 = (byte *******)((longlong)pppppppbVar85 + 1);
        LOCK();
        *pppppppbStack_6a8 = (byte ******)((longlong)*pppppppbStack_6a8 + -1);
        ppppppbVar2 = *pppppppbStack_6a8;
        UNLOCK();
      }
      else {
        if (uStack_f0 == uStack_100) {
          pdb_142d7e6e0(&uStack_100);
        }
        lVar78 = uVar90 * 0x20;
        *(byte ********)(pbStack_f8 + lVar78) = pppppppbStack_b8;
        *(byte ********)(pbStack_f8 + lVar78 + 8) = pppppppbStack_b0;
        *(byte *******)(pbStack_f8 + lVar78 + 0x10) = ppppppbStack_1a8;
        *(byte *******)(pbStack_f8 + lVar78 + 0x10 + 8) = ppppppbStack_1a0;
        uStack_f0 = uVar90 + 1;
        LOCK();
        *pppppppbStack_6a8 = (byte ******)((longlong)*pppppppbStack_6a8 + -1);
        ppppppbVar2 = *pppppppbStack_6a8;
        UNLOCK();
      }
      if (ppppppbVar2 == (byte ******)0x0) {
        pdb_140cd0de0(&pppppppbStack_6a8);
      }
    }
  }
  if (pppppppbStack_438 != (byte *******)0x0) {
    pdb_140f590a0(&pppppppbStack_430);
  }
  pppppppbVar85 = pppppppbStack_e8;
  LOCK();
  *pppppppbStack_428 = (byte ******)((longlong)*pppppppbStack_428 + -1);
  UNLOCK();
  if (*pppppppbStack_428 == (byte ******)0x0) {
    auStack_a6[5] = 1;
    pdb_140cd0de0(&pppppppbStack_428);
  }
  pbVar79 = pbStack_f8;
  if (1 < uStack_f0) {
    if (uStack_f0 < 0x15) {
      pbVar88 = pbStack_f8 + uStack_f0 * 0x20;
      pbVar87 = pbStack_f8 + 0x20;
      do {
        auStack_a6[5] = 1;
        pdb_141dab830(pbVar79,pbVar87);
        pbVar87 = pbVar87 + 0x20;
      } while (pbVar87 != pbVar88);
    }
    else {
      auStack_a6[5] = 1;
      pdb_1419203e0(pbStack_f8,uStack_f0,auStack_a6);
    }
  }
  pppppppbVar80 = pppppppbStack_d8;
  if ((byte *******)0x1 < pppppppbStack_d0) {
    if (pppppppbStack_d0 < (byte *******)0x15) {
      pppppppbVar81 = pppppppbStack_d8 + (longlong)pppppppbStack_d0 * 4;
      pppppppbVar91 = pppppppbStack_d8 + 4;
      do {
        auStack_a6[5] = 1;
        pdb_141dab830(pppppppbVar80,pppppppbVar91);
        pppppppbVar91 = pppppppbVar91 + 4;
      } while (pppppppbVar91 != pppppppbVar81);
    }
    else {
      auStack_a6[5] = 1;
      pdb_1419203e0(pppppppbStack_d8,pppppppbStack_d0,auStack_a6);
    }
  }
  pbVar87 = pbStack_f8 + uStack_f0 * 0x20;
  for (pbVar79 = pbStack_f8; pbVar79 != pbVar87; pbVar79 = pbVar79 + 0x20) {
    auStack_a6[5] = 1;
    pdb_140d8fc60(param_1,pppppppbVar85,*(undefined8 *)(pbVar79 + 8),*(undefined8 *)(pbVar79 + 0x10)
                  ,param_5);
  }
  pppppppbVar80 = pppppppbStack_d8;
  if (pppppppbStack_d0 == (byte *******)0x0) {
LAB_140d90c02:
    if (pppppppbStack_e0 != (byte *******)0x0) {
      pppppppbVar85 = (byte *******)((longlong)pppppppbStack_e0 << 5);
      uVar90 = 8;
LAB_140d90c1b:
      pub_1406abac0((byte *)pppppppbVar80,(ulonglong)pppppppbVar85,uVar90);
    }
LAB_140d90c20:
    pbVar79 = pbStack_f8;
    if (uStack_f0 != 0) {
      pbVar87 = pbStack_f8 + 8;
      uVar90 = uStack_f0;
      do {
        if (*(ulonglong *)(pbVar87 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar87,*(ulonglong *)(pbVar87 + -8),1);
        }
        pbVar87 = pbVar87 + 0x20;
        uVar90 = uVar90 - 1;
      } while (uVar90 != 0);
    }
  }
  else {
    pppppppbStack_430 = pppppppbStack_d8 + (longlong)pppppppbStack_d0 * 4;
    pppppppbStack_908 = (byte *******)((ulonglong)pppppppbStack_908 & 0xffffffffffffff00);
    pppppppbStack_438 = pppppppbStack_d8;
    auStack_a6[5] = 1;
    pppppppbStack_428 = (byte *******)&pppppppbStack_908;
    pdb_141da4e50(&pppppppbStack_6a8,&pppppppbStack_438);
    pppppppbVar95 = pppppppbStack_c0;
    pppppppbVar83 = pppppppbStack_c8;
    pppppppbVar81 = pppppppbStack_698;
    pppppppbVar80 = pppppppbStack_6a0;
    pppppppbVar91 = pppppppbStack_6a8;
    if ((char)pppppppbStack_908 == '\x01') goto joined_r0x000140d903b6;
    if (!SBORROW8(0,(longlong)pppppppbStack_6a8)) {
      pppppppbStack_b0 = pppppppbStack_6a8;
      pppppppbStack_b8 = pppppppbStack_6a0;
      pdb_140f3ddd0(&pppppppbStack_180,pppppppbStack_c8,pppppppbStack_c0);
      pdb_140f3ddd0(&pppppppbStack_908,param_1,pppppppbVar85);
      if ((((pppppppbStack_178 != pppppppbStack_900) || ((char)uStack_148 != cStack_8d0)) ||
          (uStack_148._1_1_ != '\x02')) ||
         (((cStack_8cf != '\x02' || (bStack_8f8 < 3 != (byte)pppppppbStack_170 < 3)) ||
          (iVar77 = pub_142e32750(pppppppbStack_180,pppppppbStack_908),
          pppppppbVar80 = pppppppbStack_b8, pppppppbVar91 = pppppppbStack_b0, iVar77 != 0)))) {
        uStack_678 = uStack_150;
        puStack_670 = uStack_148;
        puStack_688 = puStack_160;
        uStack_680 = uStack_158;
        pppppppbStack_698 = pppppppbStack_170;
        pppppppbStack_690 = pppppppbStack_168;
        pppppppbStack_6a8 = pppppppbStack_180;
        pppppppbStack_6a0 = pppppppbStack_178;
        pppppppbStack_428 = (byte *******)CONCAT71(iStack_8f7,bStack_8f8);
        pppppppbStack_400 = (byte *******)CONCAT62(uStack_8ce,CONCAT11(cStack_8cf,cStack_8d0));
        pppppppbStack_408 = pppppppbStack_8d8;
        pppppppbStack_418 = pppppppbStack_8e8;
        pppppppbStack_410 = pppppppbStack_8e0;
        pppppppbStack_420 = pppppppbStack_8f0;
        pppppppbStack_438 = pppppppbStack_908;
        pppppppbStack_430 = pppppppbStack_900;
        cVar75 = pdb_141daa020(&pppppppbStack_6a8,&pppppppbStack_438);
        pppppppbVar80 = pppppppbStack_b8;
        pppppppbVar91 = pppppppbStack_b0;
        if (cVar75 == '\0') {
          auStack_a6[2] = 1;
          pppppppbVar80 = pppppppbVar95;
          lVar78 = pdb_140f3e340(pppppppbVar83,pppppppbVar95,param_1,pppppppbVar85);
          if (lVar78 == 0) {
LAB_140d90ba4:
            if (pppppppbStack_b0 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_b8,(longlong)pppppppbStack_b0 << 2,4);
            }
            pppppppbVar80 = pppppppbStack_d8;
            if (pppppppbStack_d0 != (byte *******)0x0) {
              pppppppbVar85 = pppppppbStack_d8 + 1;
              pppppppbVar91 = pppppppbStack_d0;
              do {
                if (pppppppbVar85[-1] != (byte ******)0x0) {
                  pub_1406abac0((byte *)*pppppppbVar85,(ulonglong)pppppppbVar85[-1],1);
                }
                pppppppbVar85 = pppppppbVar85 + 4;
                pppppppbVar91 = (byte *******)((longlong)pppppppbVar91 + -1);
              } while (pppppppbVar91 != (byte *******)0x0);
            }
            goto LAB_140d90c02;
          }
          auStack_a6[2] = 1;
          pdb_140f69110(&pppppppbStack_438,lVar78,pppppppbVar80);
          if ((char)pppppppbStack_438 != '\0') goto LAB_140d90ba4;
          pppppppbStack_120 = (byte *******)CONCAT71(pppppppbStack_120._1_7_,0x5c);
          pppppppbStack_180 = (byte *******)CONCAT71(pppppppbStack_180._1_7_,0x2f);
          pppppppbVar85 = (byte *******)((longlong)pppppppbStack_428 + (longlong)pppppppbStack_430);
          pppppppbStack_438 = pppppppbStack_430;
          pppppppbStack_428 = (byte *******)&pppppppbStack_120;
          auStack_a6[2] = 1;
          pppppppbStack_430 = pppppppbVar85;
          pppppppbStack_420 = (byte *******)&pppppppbStack_180;
          pdb_141da2510(&pppppppbStack_6a8,&pppppppbStack_438);
          if (pppppppbStack_698 == (byte *******)0x0) {
            if (pppppppbStack_6a8 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_6a0,(ulonglong)pppppppbStack_6a8,1);
            }
            goto LAB_140d90ba4;
          }
          pppppppbStack_908 = pppppppbStack_6a0;
          pppppppbStack_900 = pppppppbStack_698;
          if (SBORROW8(0,(longlong)pppppppbStack_6a8)) goto LAB_140d90ba4;
          pppppppbStack_120 = pppppppbStack_6a8;
          pppppppbStack_118 = pppppppbStack_6a0;
          pppppppbStack_110 = pppppppbStack_698;
          pppppppbStack_420 =
               (byte *******)((longlong)pppppppbStack_b8 + (longlong)pppppppbVar81 * 4);
          pppppppbStack_400 = pppppppbStack_d8 + (longlong)pppppppbStack_d0 * 4;
          auStack_3f8 = (undefined1  [16])0x0;
          pppppppbStack_438 = pppppppbStack_b8;
          pppppppbStack_430 = pppppppbStack_b8;
          pppppppbStack_428 = pppppppbStack_b0;
          pppppppbStack_418 = pppppppbStack_d8;
          pppppppbStack_410 = pppppppbStack_d8;
          pppppppbStack_408 = pppppppbStack_e0;
          auStack_a6[1] = 1;
          pdb_141da2b00(&pppppppbStack_180,&pppppppbStack_438);
          pppppppbStack_438 = (byte *******)auStack_a6;
          if ((byte *******)0x1 < pppppppbStack_170) {
            if (pppppppbStack_170 < (byte *******)0x15) {
              auStack_a6[3] = 1;
              pdb_141dabe80(pppppppbStack_178,pppppppbStack_170,1);
              pppppppbVar83 = pppppppbStack_c8;
              pppppppbVar95 = pppppppbStack_c0;
            }
            else {
              auStack_a6[3] = 1;
              pdb_141920100(pppppppbStack_178,pppppppbStack_170,&pppppppbStack_438);
              pppppppbVar83 = pppppppbStack_c8;
              pppppppbVar95 = pppppppbStack_c0;
            }
          }
          pppppppbVar85 = pppppppbStack_110;
          iVar77 = -1;
          lVar78 = 0;
          do {
            if ((longlong)pppppppbStack_170 * 0x28 == lVar78) {
              pppppppbStack_e8 = pppppppbStack_120;
              pppppppbStack_c0 = pppppppbStack_118;
              pppppppbStack_438 = pppppppbStack_178;
              pppppppbStack_430 = pppppppbStack_178;
              pppppppbStack_428 = pppppppbStack_180;
              pppppppbStack_420 = pppppppbStack_178 + (longlong)pppppppbStack_170 * 5;
              pdb_141dab680(&pppppppbStack_6a8,&pppppppbStack_438);
              pppppppbStack_418 = pppppppbStack_6a8;
              pppppppbStack_410 = pppppppbStack_6a0;
              pppppppbStack_408 = pppppppbStack_698;
              pppppppbStack_438 = pppppppbStack_e8;
              pppppppbStack_430 = pppppppbStack_c0;
              pppppppbStack_428 = pppppppbVar85;
              pppppppbStack_420 = (byte *******)0x8000000000000000;
              lVar78 = param_5[2];
              if (lVar78 == *param_5) {
                pdb_142d7f080(param_5);
              }
              lVar3 = param_5[1];
              lVar82 = lVar78 * 0x38;
              *(byte ********)(lVar3 + 0x30 + lVar82) = pppppppbStack_408;
              puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar82);
              *puVar1 = pppppppbStack_418;
              puVar1[1] = pppppppbStack_410;
              puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar82);
              *puVar1 = pppppppbStack_428;
              puVar1[1] = pppppppbStack_420;
              *(undefined8 *)(lVar3 + lVar82) = pppppppbStack_438;
              ((undefined8 *)(lVar3 + lVar82))[1] = pppppppbStack_430;
              param_5[2] = lVar78 + 1;
              pbVar79 = pbStack_f8;
              uVar90 = uStack_f0;
              goto joined_r0x000140d90d79;
            }
            iVar77 = iVar77 + 1;
            pbVar79 = (byte *)((longlong)pppppppbStack_178 + lVar78);
            lVar78 = lVar78 + 0x28;
          } while (iVar77 == *(int *)pbVar79);
          if (*_DAT_143ca8e90 != 0) {
            auStack_a6[3] = 1;
            pdb_141b1e240(&pppppppbStack_908,pppppppbVar83,pppppppbVar95,3);
            pppppppbStack_6a8 = (byte *******)&pppppppbStack_120;
            pppppppbStack_6a0 = (byte *******)pdb_140094770;
            pppppppbStack_690 = (byte *******)pdb_140f58250;
            pppppppbStack_438 = (byte *******)&UNK_1431e5105;
            pppppppbStack_430 = (byte *******)0x10;
            pppppppbStack_428 = (byte *******)&UNK_1431e5105;
            pppppppbStack_420 = (byte *******)0x10;
            pppppppbStack_418 = (byte *******)&UNK_1431e5390;
            pppppppbStack_698 = (byte *******)&pppppppbStack_908;
            pdb_1400c9be0(&UNK_1431e533d,&pppppppbStack_6a8,1,&pppppppbStack_438);
            if (pppppppbStack_908 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_900,(ulonglong)pppppppbStack_908,1);
            }
          }
          auStack_a6[1] = 1;
          pdb_140ecd090(&pppppppbStack_180);
          if (pppppppbStack_120 != (byte *******)0x0) {
            uVar90 = 1;
            pppppppbVar80 = pppppppbStack_118;
            pppppppbVar85 = pppppppbStack_120;
            goto LAB_140d90c1b;
          }
          goto LAB_140d90c20;
        }
      }
joined_r0x000140d903b6:
      if (pppppppbVar91 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbVar80,(longlong)pppppppbVar91 << 2,4);
      }
    }
    uVar90 = _DAT_14306a990;
    cVar74 = UNK_14306a987;
    cVar73 = UNK_14306a986;
    cVar72 = UNK_14306a985;
    cVar71 = UNK_14306a984;
    cVar70 = UNK_14306a983;
    cVar69 = UNK_14306a982;
    cVar76 = UNK_14306a981;
    cVar75 = DAT_14306a980;
    bVar68 = UNK_142e34f0f;
    bVar67 = UNK_142e34f0e;
    bVar66 = UNK_142e34f0d;
    bVar65 = UNK_142e34f0c;
    bVar64 = UNK_142e34f0b;
    bVar63 = UNK_142e34f0a;
    bVar62 = UNK_142e34f09;
    bVar61 = UNK_142e34f08;
    bVar60 = UNK_142e34f07;
    bVar59 = UNK_142e34f06;
    bVar58 = UNK_142e34f05;
    bVar57 = UNK_142e34f04;
    bVar56 = UNK_142e34f03;
    bVar55 = UNK_142e34f02;
    bVar54 = UNK_142e34f01;
    bVar53 = DAT_142e34f00;
    bVar52 = UNK_142e34b4f;
    bVar51 = UNK_142e34b4e;
    bVar50 = UNK_142e34b4d;
    bVar49 = UNK_142e34b4c;
    bVar48 = UNK_142e34b4b;
    bVar47 = UNK_142e34b4a;
    bVar46 = UNK_142e34b49;
    bVar45 = UNK_142e34b48;
    bVar44 = UNK_142e34b47;
    bVar43 = UNK_142e34b46;
    bVar42 = UNK_142e34b45;
    bVar41 = UNK_142e34b44;
    bVar40 = UNK_142e34b43;
    bVar39 = UNK_142e34b42;
    bVar38 = UNK_142e34b41;
    bVar37 = DAT_142e34b40;
    uVar94 = (longlong)pppppppbStack_d0 * 0x20;
    pppppppbVar80 = pppppppbStack_d8 + (longlong)pppppppbStack_d0 * 4;
    pppppppbStack_6a8 = pppppppbStack_d8;
    pppppppbStack_698 = pppppppbStack_e0;
    pppppppbVar85 = pppppppbStack_d8 + 5;
    pppppppbVar91 = pppppppbStack_d8;
    pppppppbVar81 = pppppppbStack_e0;
    pppppppbVar83 = pppppppbStack_d8;
    pppppppbStack_690 = pppppppbVar80;
    while (uVar94 = uVar94 - 0x20, pppppppbVar91 != pppppppbVar80) {
      pppppppbVar95 = pppppppbVar91 + 4;
      pppppppbStack_b0 = (byte *******)*pppppppbVar91;
      pppppppbStack_6a0 = pppppppbVar95;
      if (SBORROW8(0,(longlong)pppppppbStack_b0)) {
        if (pppppppbVar80 != pppppppbVar95) {
          uVar94 = uVar94 >> 5;
          do {
            if (pppppppbVar85[-1] != (byte ******)0x0) {
              pub_1406abac0((byte *)*pppppppbVar85,(ulonglong)pppppppbVar85[-1],1);
            }
            pppppppbVar85 = pppppppbVar85 + 4;
            uVar94 = uVar94 - 1;
          } while (uVar94 != 0);
        }
        break;
      }
      pppppppbStack_c0 = (byte *******)pppppppbVar91[1];
      pppppppbVar35 = (byte *******)pppppppbVar91[2];
      pppppppbVar36 = (byte *******)pppppppbVar91[3];
      uStack_a7 = 1;
      pdb_140f3e750(&pppppppbStack_438,pppppppbStack_c0,pppppppbVar91[2],1,0);
      pppppppbStack_b8 = pppppppbStack_430;
      pppppppbVar91 = pppppppbStack_428;
      lVar78 = pdb_140f3e340(pppppppbStack_430,pppppppbStack_428,param_1,pppppppbStack_e8);
      if (lVar78 == 0) {
LAB_140d90539:
        if (pppppppbStack_438 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_b8,(ulonglong)pppppppbStack_438,1);
        }
        if (pppppppbStack_b0 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_c0,(ulonglong)pppppppbStack_b0,1);
        }
      }
      else {
        pdb_140f69110(&pppppppbStack_908,lVar78,pppppppbVar91);
        pppppppbVar91 = pppppppbStack_900;
        if ((char)pppppppbStack_908 != '\0') goto LAB_140d90539;
        pppppppbVar93 = (byte *******)CONCAT71(iStack_8f7,bStack_8f8);
        if (iStack_8f7 < 0) {
          uVar89 = 0;
LAB_140d907fa:
          pdb_142dc7e2a(uVar89,pppppppbVar93);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (pppppppbVar93 == (byte *******)0x0) goto LAB_140d90539;
        pppppppbStack_198 = pppppppbVar81;
        pppppppbStack_190 = pppppppbVar83;
        pppppppbStack_188 = pppppppbVar80;
        pppppppbStack_c8 = pppppppbVar93;
        pdb_14007ee60();
        uVar89 = 1;
        pppppppbVar80 = (byte *******)pub_1406abab0((ulonglong)pppppppbStack_c8,1);
        pppppppbVar93 = pppppppbStack_c8;
        if (pppppppbVar80 == (byte *******)0x0) goto LAB_140d907fa;
        if ((ulonglong)((longlong)pppppppbVar80 - (longlong)pppppppbVar91) < 0x20 ||
            pppppppbStack_c8 < (byte *******)0x8) {
          pppppppbVar81 = (byte *******)0x0;
LAB_140d906e6:
          pppppppbVar83 = pppppppbVar81;
          for (uVar86 = (ulonglong)pppppppbStack_c8 & 3; uVar86 != 0; uVar86 = uVar86 - 1) {
            bVar92 = *(byte *)((longlong)pppppppbVar91 + (longlong)pppppppbVar83);
            if (*(byte *)((longlong)pppppppbVar91 + (longlong)pppppppbVar83) == 0x5c) {
              bVar92 = 0x2f;
            }
            *(byte *)((longlong)pppppppbVar80 + (longlong)pppppppbVar83) = bVar92;
            pppppppbVar83 = (byte *******)((longlong)pppppppbVar83 + 1);
          }
          if ((ulonglong)((longlong)pppppppbVar81 - (longlong)pppppppbStack_c8) < 0xfffffffffffffffd
             ) {
            do {
              bVar92 = *(byte *)((longlong)pppppppbVar91 + (longlong)pppppppbVar83);
              if (bVar92 == 0x5c) {
                bVar92 = 0x2f;
              }
              *(byte *)((longlong)pppppppbVar80 + (longlong)pppppppbVar83) = bVar92;
              bVar92 = ((byte *)((longlong)pppppppbVar91 + 1))[(longlong)pppppppbVar83];
              if (bVar92 == 0x5c) {
                bVar92 = 0x2f;
              }
              ((byte *)((longlong)pppppppbVar80 + 1))[(longlong)pppppppbVar83] = bVar92;
              bVar92 = ((byte *)((longlong)pppppppbVar91 + 2))[(longlong)pppppppbVar83];
              if (bVar92 == 0x5c) {
                bVar92 = 0x2f;
              }
              ((byte *)((longlong)pppppppbVar80 + 2))[(longlong)pppppppbVar83] = bVar92;
              bVar92 = ((byte *)((longlong)pppppppbVar91 + 3))[(longlong)pppppppbVar83];
              if (bVar92 == 0x5c) {
                bVar92 = 0x2f;
              }
              ((byte *)((longlong)pppppppbVar80 + 3))[(longlong)pppppppbVar83] = bVar92;
              pppppppbVar83 = (byte *******)((longlong)pppppppbVar83 + 4);
            } while (pppppppbStack_c8 != pppppppbVar83);
          }
        }
        else if (pppppppbStack_c8 < (byte *******)0x20) {
          pppppppbVar83 = (byte *******)0x0;
LAB_140d90695:
          pppppppbVar81 = (byte *******)((ulonglong)pppppppbStack_c8 & 0x7ffffffffffffff8);
          do {
            uVar86 = *(ulonglong *)((longlong)pppppppbVar91 + (longlong)pppppppbVar83);
            uVar96 = CONCAT17(-((char)(uVar86 >> 0x38) == cVar74),
                              CONCAT16(-((char)(uVar86 >> 0x30) == cVar73),
                                       CONCAT15(-((char)(uVar86 >> 0x28) == cVar72),
                                                CONCAT14(-((char)(uVar86 >> 0x20) == cVar71),
                                                         CONCAT13(-((char)(uVar86 >> 0x18) == cVar70
                                                                   ),CONCAT12(-((char)(uVar86 >>
                                                                                      0x10) ==
                                                                               cVar69),CONCAT11(-((
                                                  char)(uVar86 >> 8) == cVar76),
                                                  -((char)uVar86 == cVar75))))))));
            *(ulonglong *)((longlong)pppppppbVar80 + (longlong)pppppppbVar83) =
                 uVar96 & uVar90 | ~uVar96 & uVar86;
            pppppppbVar83 = pppppppbVar83 + 1;
          } while (pppppppbVar81 != pppppppbVar83);
          if (pppppppbStack_c8 != pppppppbVar81) goto LAB_140d906e6;
        }
        else {
          pppppppbVar81 = (byte *******)((ulonglong)pppppppbStack_c8 & 0x7fffffffffffffe0);
          pppppppbVar83 = (byte *******)0x0;
          do {
            pbVar79 = (byte *)((longlong)pppppppbVar91 + (longlong)pppppppbVar83);
            bVar92 = pbVar79[1];
            bVar5 = pbVar79[2];
            bVar6 = pbVar79[3];
            bVar7 = pbVar79[4];
            bVar8 = pbVar79[5];
            bVar9 = pbVar79[6];
            bVar10 = pbVar79[7];
            bVar11 = pbVar79[8];
            bVar12 = pbVar79[9];
            bVar13 = pbVar79[10];
            bVar14 = pbVar79[0xb];
            bVar15 = pbVar79[0xc];
            bVar16 = pbVar79[0xd];
            bVar17 = pbVar79[0xe];
            bVar18 = pbVar79[0xf];
            pbVar87 = (byte *)((longlong)(pppppppbVar91 + 2) + (longlong)pppppppbVar83);
            bVar19 = *pbVar87;
            bVar20 = pbVar87[1];
            bVar21 = pbVar87[2];
            bVar22 = pbVar87[3];
            bVar23 = pbVar87[4];
            bVar24 = pbVar87[5];
            bVar25 = pbVar87[6];
            bVar26 = pbVar87[7];
            bVar27 = pbVar87[8];
            bVar28 = pbVar87[9];
            bVar29 = pbVar87[10];
            bVar30 = pbVar87[0xb];
            bVar31 = pbVar87[0xc];
            bVar32 = pbVar87[0xd];
            bVar33 = pbVar87[0xe];
            bVar34 = pbVar87[0xf];
            bVar97 = -(*pbVar79 == bVar53);
            bVar98 = -(bVar92 == bVar54);
            bVar99 = -(bVar5 == bVar55);
            bVar100 = -(bVar6 == bVar56);
            bVar101 = -(bVar7 == bVar57);
            bVar102 = -(bVar8 == bVar58);
            bVar103 = -(bVar9 == bVar59);
            bVar104 = -(bVar10 == bVar60);
            bVar105 = -(bVar11 == bVar61);
            bVar106 = -(bVar12 == bVar62);
            bVar107 = -(bVar13 == bVar63);
            bVar108 = -(bVar14 == bVar64);
            bVar109 = -(bVar15 == bVar65);
            bVar110 = -(bVar16 == bVar66);
            bVar111 = -(bVar17 == bVar67);
            bVar112 = -(bVar18 == bVar68);
            bVar113 = -(bVar19 == bVar53);
            bVar114 = -(bVar20 == bVar54);
            bVar115 = -(bVar21 == bVar55);
            bVar116 = -(bVar22 == bVar56);
            bVar117 = -(bVar23 == bVar57);
            bVar118 = -(bVar24 == bVar58);
            bVar119 = -(bVar25 == bVar59);
            bVar120 = -(bVar26 == bVar60);
            bVar121 = -(bVar27 == bVar61);
            bVar122 = -(bVar28 == bVar62);
            bVar123 = -(bVar29 == bVar63);
            bVar124 = -(bVar30 == bVar64);
            bVar125 = -(bVar31 == bVar65);
            bVar126 = -(bVar32 == bVar66);
            bVar127 = -(bVar33 == bVar67);
            bVar128 = -(bVar34 == bVar68);
            pbVar87 = (byte *)((longlong)pppppppbVar80 + (longlong)pppppppbVar83);
            *pbVar87 = bVar97 & bVar37 | ~bVar97 & *pbVar79;
            pbVar87[1] = bVar98 & bVar38 | ~bVar98 & bVar92;
            pbVar87[2] = bVar99 & bVar39 | ~bVar99 & bVar5;
            pbVar87[3] = bVar100 & bVar40 | ~bVar100 & bVar6;
            pbVar87[4] = bVar101 & bVar41 | ~bVar101 & bVar7;
            pbVar87[5] = bVar102 & bVar42 | ~bVar102 & bVar8;
            pbVar87[6] = bVar103 & bVar43 | ~bVar103 & bVar9;
            pbVar87[7] = bVar104 & bVar44 | ~bVar104 & bVar10;
            pbVar87[8] = bVar105 & bVar45 | ~bVar105 & bVar11;
            pbVar87[9] = bVar106 & bVar46 | ~bVar106 & bVar12;
            pbVar87[10] = bVar107 & bVar47 | ~bVar107 & bVar13;
            pbVar87[0xb] = bVar108 & bVar48 | ~bVar108 & bVar14;
            pbVar87[0xc] = bVar109 & bVar49 | ~bVar109 & bVar15;
            pbVar87[0xd] = bVar110 & bVar50 | ~bVar110 & bVar16;
            pbVar87[0xe] = bVar111 & bVar51 | ~bVar111 & bVar17;
            pbVar87[0xf] = bVar112 & bVar52 | ~bVar112 & bVar18;
            pbVar79 = (byte *)((longlong)(pppppppbVar80 + 2) + (longlong)pppppppbVar83);
            *pbVar79 = bVar113 & bVar37 | ~bVar113 & bVar19;
            pbVar79[1] = bVar114 & bVar38 | ~bVar114 & bVar20;
            pbVar79[2] = bVar115 & bVar39 | ~bVar115 & bVar21;
            pbVar79[3] = bVar116 & bVar40 | ~bVar116 & bVar22;
            pbVar79[4] = bVar117 & bVar41 | ~bVar117 & bVar23;
            pbVar79[5] = bVar118 & bVar42 | ~bVar118 & bVar24;
            pbVar79[6] = bVar119 & bVar43 | ~bVar119 & bVar25;
            pbVar79[7] = bVar120 & bVar44 | ~bVar120 & bVar26;
            pbVar79[8] = bVar121 & bVar45 | ~bVar121 & bVar27;
            pbVar79[9] = bVar122 & bVar46 | ~bVar122 & bVar28;
            pbVar79[10] = bVar123 & bVar47 | ~bVar123 & bVar29;
            pbVar79[0xb] = bVar124 & bVar48 | ~bVar124 & bVar30;
            pbVar79[0xc] = bVar125 & bVar49 | ~bVar125 & bVar31;
            pbVar79[0xd] = bVar126 & bVar50 | ~bVar126 & bVar32;
            pbVar79[0xe] = bVar127 & bVar51 | ~bVar127 & bVar33;
            pbVar79[0xf] = bVar128 & bVar52 | ~bVar128 & bVar34;
            pppppppbVar83 = pppppppbVar83 + 4;
          } while (pppppppbVar81 != pppppppbVar83);
          if (pppppppbStack_c8 != pppppppbVar81) {
            pppppppbVar83 = pppppppbVar81;
            if (((ulonglong)pppppppbStack_c8 & 0x18) == 0) goto LAB_140d906e6;
            goto LAB_140d90695;
          }
        }
        if (pppppppbStack_438 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_b8,(ulonglong)pppppppbStack_438,1);
        }
        pppppppbStack_438 = pppppppbStack_c8;
        pppppppbStack_428 = pppppppbStack_c8;
        pppppppbStack_420 = pppppppbStack_b0;
        pppppppbStack_418 = pppppppbStack_c0;
        lVar78 = param_5[2];
        pppppppbStack_430 = pppppppbVar80;
        pppppppbStack_410 = pppppppbVar35;
        pppppppbStack_408 = pppppppbVar36;
        if (lVar78 == *param_5) {
          pdb_142d7f080(param_5);
        }
        lVar3 = param_5[1];
        lVar82 = lVar78 * 0x38;
        *(byte ********)(lVar3 + 0x30 + lVar82) = pppppppbStack_408;
        puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar82);
        *puVar1 = pppppppbStack_418;
        puVar1[1] = pppppppbStack_410;
        puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar82);
        *puVar1 = pppppppbStack_428;
        puVar1[1] = pppppppbStack_420;
        *(undefined8 *)(lVar3 + lVar82) = pppppppbStack_438;
        ((undefined8 *)(lVar3 + lVar82))[1] = pppppppbStack_430;
        param_5[2] = lVar78 + 1;
        pppppppbVar81 = pppppppbStack_198;
        pppppppbVar83 = pppppppbStack_190;
        pppppppbVar80 = pppppppbStack_188;
      }
      pppppppbVar85 = pppppppbVar85 + 4;
      pppppppbVar91 = pppppppbVar95;
    }
    pbVar79 = pbStack_f8;
    uVar90 = uStack_f0;
    if (pppppppbVar81 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbVar83,(longlong)pppppppbVar81 << 5,8);
      pbVar79 = pbStack_f8;
      uVar90 = uStack_f0;
    }
joined_r0x000140d90d79:
    pbStack_f8 = pbVar79;
    uStack_f0 = uVar90;
    if (uVar90 != 0) {
      pbVar87 = pbVar79 + 8;
      do {
        if (*(ulonglong *)(pbVar87 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar87,*(ulonglong *)(pbVar87 + -8),1);
        }
        pbVar87 = pbVar87 + 0x20;
        uVar90 = uVar90 - 1;
      } while (uVar90 != 0);
    }
  }
  if (uStack_100 == 0) {
    return;
  }
  pub_1406abac0(pbVar79,uStack_100 << 5,8);
  return;
}

