// VA 0x14237eda0, PDB extent 2906 bytes
// toolbar::text::text_startup_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::text::text_startup_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
   Extent: 2906 */

void pdb_14237eda0(undefined8 *param_1)

{
  byte ****ppppbVar1;
  char cVar2;
  longlong lVar3;
  byte ******ppppppbVar4;
  byte ****ppppbVar5;
  byte *****pppppbVar6;
  byte *****pppppbVar7;
  byte ****ppppbVar8;
  byte *pbVar9;
  byte ******unaff_R13;
  byte *****pppppbStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  byte *****pppppbStack_250;
  byte *****pppppbStack_248;
  byte *****pppppbStack_240;
  code *pcStack_238;
  byte ****ppppbStack_230;
  byte ****ppppbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte ***pppbStack_210;
  undefined1 uStack_208;
  undefined4 uStack_207;
  undefined3 uStack_203;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 *puStack_1f0;
  byte *****pppppbStack_1e8;
  byte *****pppppbStack_1e0;
  byte *****pppppbStack_1d8;
  code *pcStack_1d0;
  byte *****pppppbStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  byte *****pppppbStack_138;
  byte *****pppppbStack_130;
  byte ****ppppbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte ***pppbStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  byte *****pppppbStack_d8;
  byte *****pppppbStack_d0;
  byte *****pppppbStack_c8;
  byte *****pppppbStack_a8;
  byte *****pppppbStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  byte *****pppppbStack_88;
  byte *****pppppbStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  byte *****pppppbStack_68;
  byte *****pppppbStack_60;
  byte *****pppppbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_120 = (byte *)0xa;
  pbStack_118 = (byte *)0x0;
  pppbStack_110 = (byte ***)0xffffffffffffffff;
  pppppbStack_130 = (byte *****)0x0;
  uStack_108 = (byte ****)CONCAT44(uStack_108._4_4_,0x100);
  pdb_140f3e010(&pppppbStack_1e8,&UNK_1434dda38,0xc);
  pppbStack_210 = pppbStack_110;
  pbStack_220 = pbStack_120;
  pbStack_218 = pbStack_118;
  ppppbStack_230 = (byte ****)pppppbStack_130;
  ppppbStack_228 = ppppbStack_128;
  uStack_203 = (undefined3)((ulonglong)uStack_108 >> 0x28);
  pppppbStack_250 = pppppbStack_1e8;
  pppppbStack_248 = pppppbStack_1e0;
  pppppbStack_240 = pppppbStack_1d8;
  pcStack_238 = pcStack_1d0;
  uStack_208 = 1;
  puStack_288 = (undefined *)0x0;
  uStack_280 = 0;
  puStack_270 = (undefined *)0x0;
  uStack_268 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  pppppbStack_2a8 = (byte *****)0x0;
  uStack_298 = 0;
  uStack_290 = 8;
  uStack_278 = 8;
  uStack_260 = 8;
  puStack_258 = (undefined *)0x0;
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_140 = *param_1;
  puStack_1f0 = (undefined4 *)param_1[2];
  uStack_207 = uStack_108._1_4_;
  while( true ) {
    pdb_1411b9080(&pppppbStack_1e8,&pppppbStack_2a8);
    if ((int)pppppbStack_1e8 == 3) break;
    pub_142e32760(&pppppbStack_130,&pppppbStack_1e8,0x88);
    pppppbVar7 = pppppbStack_c8;
    if ((int)pppppbStack_130 == 2) {
      if (SBORROW8(0,(longlong)ppppbStack_128)) {
        if ((!SBORROW8(0,(longlong)pbStack_120)) && (pbStack_120 != (byte *)0x0)) {
          pub_1406abac0(pbStack_118,(ulonglong)pbStack_120,1);
        }
        pdb_1404b38e0(&pbStack_100);
      }
      else {
        if ((byte *****)ppppbStack_128 != (byte *****)0x0) {
          pub_1406abac0(pbStack_120,(ulonglong)ppppbStack_128,1);
        }
        if (uStack_108 != (byte ****)0x0) {
          pub_1406abac0(pbStack_100,(ulonglong)uStack_108,1);
        }
      }
    }
    else {
      pppppbStack_60 = pppppbStack_d8;
      pppppbStack_58 = pppppbStack_d0;
      ppppppbVar4 = (byte ******)pppppbStack_c8;
      lVar3 = pdb_140f3ec80(pppppbStack_d0,pppppbStack_c8);
      if (lVar3 != 0) {
        pdb_140f69110(&pppppbStack_130,lVar3,ppppppbVar4);
        if (((((char)pppppbStack_130 == '\0') && (pbStack_120 == (byte *)0x3)) &&
            ((*(char *)((longlong)ppppbStack_128 + 2) == 'f' && *(short *)ppppbStack_128 == 0x7474
             || (*(char *)((longlong)ppppbStack_128 + 2) == 'f' &&
                 *(short *)ppppbStack_128 == 0x746f)))) &&
           (cVar2 = pdb_140caeba0(pppppbStack_58,pppppbVar7), cVar2 == '\0')) {
          if (4 < *_DAT_143ca8e90) {
            pppppbStack_88 = pppppbStack_58;
            pppppbStack_80 = pppppbVar7;
            pppppbStack_1e8 = (byte *****)&pppppbStack_88;
            pppppbStack_1e0 = (byte *****)pdb_140117670;
            pppppbStack_130 = (byte *****)0x0;
            ppppbStack_128 = (byte ****)&UNK_1434dda67;
            pbStack_120 = (byte *)0xd;
            pbStack_118 = (byte *)0x0;
            pppbStack_110 = (byte ***)&UNK_1434dd9e0;
            uStack_108 = (byte ****)0x22;
            pbStack_100 = (byte *)0x5;
            pbStack_f8 = &UNK_1434dda67;
            uStack_f0 = 0xd;
            uStack_e8 = 0x1700000001;
            puStack_e0 = &UNK_1434dda74;
            pppppbStack_d8 = (byte *****)&pppppbStack_1e8;
            pdb_140f332f0(&uStack_49,&pppppbStack_130);
          }
          *puStack_1f0 = uStack_8c;
          pdb_140d929f0(&pppppbStack_88,pppppbStack_58,pppppbVar7);
          pppppbStack_138 = pppppbStack_80;
          lVar3 = pdb_140cb6a50(uStack_140,pppppbStack_80,CONCAT44(uStack_74,uStack_78));
          if (lVar3 != 0) {
            pppppbStack_1e8 = pppppbStack_58;
            pppppbStack_1e0 = pppppbVar7;
            pppppbStack_130 = (byte *****)&pppppbStack_1e8;
            ppppbStack_128 = (byte ****)pdb_140117670;
            uStack_4a = 1;
            pppppbStack_158 = (byte *****)lVar3;
            pdb_140f60760(&pppppbStack_a8,&UNK_1432ada0c,&pppppbStack_130);
            pppppbStack_1d8 = (byte *****)uStack_98;
            pppppbStack_130 = (byte *****)0x3;
            uStack_4a = 0;
            pcStack_1d0 = (code *)lVar3;
            pppppbStack_130 = (byte *****)pdb_142dcee70(&pppppbStack_1e8,&pppppbStack_130);
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_1434dd8d8,0x2b,&pppppbStack_130,&UNK_1434dd8b8,&UNK_1434dda90);
          }
          if ((byte ******)pppppbStack_88 != (byte ******)0x0) {
            pub_1406abac0((byte *)pppppbStack_138,(ulonglong)pppppbStack_88,1);
          }
        }
      }
      unaff_R13 = (byte ******)pppppbVar7;
      if ((byte ******)pppppbStack_60 != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppbStack_58,(ulonglong)pppppbStack_60,1);
      }
    }
  }
  pdb_14117a3a0(&pppppbStack_2a8);
  pdb_140cb6900(&pppppbStack_130,uStack_140);
  ppppbVar1 = ppppbStack_128;
  pppppbStack_60 = (byte *****)pbStack_f8;
  ppppbVar5 = (byte ****)pppbStack_110;
  ppppbVar8 = uStack_108;
  pbVar9 = pbStack_100;
  pppppbVar7 = pppppbStack_130;
  do {
    while (ppppbVar5 != (byte ****)0x0) {
      if (ppppbVar5 == ppppbVar8) {
        ppppppbVar4 = &pppppbStack_68;
        pppppbVar6 = (byte *****)0x8000000000000000;
      }
      else {
        unaff_R13 = (byte ******)ppppbVar5[1];
        pppppbVar6 = (byte *****)ppppbVar5[2];
        pppppbStack_1e8 = (byte *****)0x0;
        pppppbStack_1e0 = (byte *****)0x1;
        pppppbStack_1d8 = (byte *****)0x0;
        uStack_298 = 0x60000020;
        pppppbStack_2a8 = (byte *****)&pppppbStack_1e8;
        puStack_2a0 = &UNK_1434dd748;
        cVar2 = pdb_141cdf760(ppppbVar5 + 3,&pppppbStack_2a8);
        if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_1434dd778,0x37,&uStack_49,&UNK_1434dd898,&UNK_1434dd820);
        }
        ppppbVar5 = ppppbVar5 + 4;
        pppppbStack_68 = pppppbStack_1e8;
        pppppbStack_88 = pppppbStack_1e0;
        pppppbStack_80 = pppppbStack_1d8;
        ppppppbVar4 = &pppppbStack_a8;
      }
      *ppppppbVar4 = pppppbVar6;
      if (SBORROW8(0,(longlong)pppppbStack_68)) break;
      pppppbStack_158 = pppppbStack_88;
      uStack_150 = (byte ******)pppppbStack_80;
LAB_14237f3dd:
      pppppbStack_88 = pppppbStack_68;
      pppppbStack_80 = pppppbStack_158;
      uStack_78 = (undefined4)uStack_150;
      uStack_74 = uStack_150._4_4_;
      ppppppbVar4 = unaff_R13;
      pppppbStack_a0 = pppppbStack_a8;
      if (4 < *_DAT_143ca8e90) {
        pppppbStack_1e8 = (byte *****)&pppppbStack_a8;
        pppppbStack_1e0 = (byte *****)pdb_1402ed420;
        pppppbStack_1d8 = (byte *****)&pppppbStack_88;
        pcStack_1d0 = pdb_140094770;
        pppppbStack_2a8 = (byte *****)0x0;
        puStack_2a0 = &UNK_1434dda67;
        uStack_298 = 0xd;
        uStack_290 = 0;
        puStack_288 = &UNK_1434dd9e0;
        uStack_280 = 0x22;
        uStack_278 = 5;
        puStack_270 = &UNK_1434dda67;
        uStack_268 = 0xd;
        uStack_260 = 0x2000000001;
        puStack_258 = &UNK_1434dda44;
        pppppbStack_250 = (byte *****)&pppppbStack_1e8;
        pppppbStack_a8 = (byte *****)unaff_R13;
        pdb_140f332f0(&uStack_49,&pppppbStack_2a8);
        ppppppbVar4 = (byte ******)pppppbStack_a8;
      }
      pppppbStack_a8 = (byte *****)ppppppbVar4;
      if ((byte ******)pppppbStack_88 != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppbStack_80,(ulonglong)pppppbStack_88,1);
      }
    }
    if (pppppbVar7 == (byte *****)0x0) {
      pppppbVar6 = (byte *****)0x0;
LAB_14237f310:
      if (pbVar9 != (byte *)0x0) {
        if ((byte *****)pbVar9 == pppppbStack_60) {
          ppppppbVar4 = &pppppbStack_68;
          pppppbVar7 = (byte *****)0x8000000000000000;
        }
        else {
          unaff_R13 = *(byte *******)(pbVar9 + 8);
          pppppbVar7 = *(byte ******)(pbVar9 + 0x10);
          pppppbStack_1e8 = (byte *****)0x0;
          pppppbStack_1e0 = (byte *****)0x1;
          pppppbStack_1d8 = (byte *****)0x0;
          uStack_298 = 0x60000020;
          pppppbStack_2a8 = (byte *****)&pppppbStack_1e8;
          puStack_2a0 = &UNK_1434dd748;
          cVar2 = pdb_141cdf760(pbVar9 + 0x18,&pppppbStack_2a8);
          if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_1434dd778,0x37,&uStack_49,&UNK_1434dd898,&UNK_1434dd820);
          }
          pbVar9 = pbVar9 + 0x20;
          pppppbStack_68 = pppppbStack_1e8;
          pppppbStack_88 = pppppbStack_1e0;
          pppppbStack_80 = pppppbStack_1d8;
          ppppppbVar4 = &pppppbStack_a8;
        }
        *ppppppbVar4 = pppppbVar7;
        if (!SBORROW8(0,(longlong)pppppbStack_68)) {
          pppppbStack_158 = pppppbStack_88;
          uStack_150 = (byte ******)pppppbStack_80;
          ppppbVar5 = (byte ****)0x0;
          pppppbVar7 = pppppbVar6;
          goto LAB_14237f3dd;
        }
      }
      return;
    }
    do {
      pppppbVar6 = pppppbVar7;
      if (pppppbVar6 == (byte *****)ppppbVar1) goto LAB_14237f310;
      pppppbVar7 = pppppbVar6 + 0x10;
    } while (((ulonglong)pppppbVar6[0xf] & 1) == 0);
    ppppbVar5 = pppppbVar6[1];
    ppppbVar8 = ppppbVar5 + (longlong)pppppbVar6[2] * 4;
  } while( true );
}

