// VA 0x1400017e0, PDB extent 9798 bytes
// tiny_glade::panic_reporter::diagnostics::send_diagnostics
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/diagnostics.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::diagnostics::send_diagnostics
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/diagnostics.rs
   Extent: 9798 */

void pdb_1400017e0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  byte ****ppppbVar8;
  undefined8 uVar9;
  byte *****pppppbVar10;
  byte *pbVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  byte ****ppppbVar17;
  byte *****arg0;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  byte *****pppppbVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 auStack_678 [4];
  byte ****ppppbStack_658;
  byte ****ppppbStack_650;
  byte ****ppppbStack_648;
  byte ****ppppbStack_640;
  byte ****appppbStack_638 [9];
  undefined8 uStack_5f0;
  int iStack_5e8;
  undefined8 uStack_5e4;
  byte ****ppppbStack_5dc;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  byte *pbStack_5c0;
  undefined8 uStack_5b8;
  byte ***pppbStack_5b0;
  undefined8 uStack_5a8;
  byte ***pppbStack_5a0;
  byte ****ppppbStack_598;
  byte ****ppppbStack_590;
  byte ****ppppbStack_588;
  undefined1 uStack_580;
  undefined7 uStack_57f;
  ulonglong uStack_578;
  byte *pbStack_570;
  undefined8 uStack_568;
  undefined8 uStack_558;
  byte ***pppbStack_550;
  undefined8 uStack_548;
  byte ***pppbStack_540;
  byte ****ppppbStack_538;
  byte ****ppppbStack_530;
  byte ****ppppbStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  byte ****ppppbStack_4e8;
  byte ****ppppbStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  byte ****ppppbStack_4c8;
  byte ****ppppbStack_4c0;
  byte *pbStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined1 auStack_49c [12];
  undefined4 uStack_490;
  undefined4 uStack_478;
  undefined4 uStack_460;
  int iStack_45c;
  int iStack_458;
  undefined4 uStack_448;
  undefined4 uStack_430;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined2 uStack_40c;
  undefined1 uStack_40a;
  undefined5 uStack_409;
  undefined2 uStack_404;
  undefined1 uStack_402;
  undefined8 uStack_401;
  undefined4 uStack_3f9;
  undefined4 uStack_3f5;
  undefined4 uStack_3f1;
  undefined4 uStack_3ed;
  undefined8 uStack_3e9;
  undefined8 uStack_3e1;
  undefined4 uStack_3d9;
  undefined4 uStack_3d5;
  undefined4 uStack_3d1;
  undefined4 uStack_3cd;
  undefined8 uStack_3c9;
  undefined8 uStack_3c1;
  undefined1 uStack_3b9;
  byte ****ppppbStack_3b8;
  byte ****ppppbStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_325;
  undefined8 uStack_31d;
  undefined4 uStack_315;
  undefined4 uStack_311;
  undefined4 uStack_30d;
  undefined4 uStack_309;
  undefined8 uStack_305;
  undefined8 uStack_2fd;
  undefined4 uStack_2f5;
  undefined4 uStack_2f1;
  undefined4 uStack_2ed;
  undefined4 uStack_2e9;
  undefined8 uStack_2e5;
  undefined8 uStack_2dd;
  undefined1 uStack_2d5;
  undefined8 uStack_2c8;
  longlong lStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  byte ****ppppbStack_2a8;
  byte ****ppppbStack_2a0;
  undefined8 uStack_298;
  longlong lStack_290;
  undefined8 uStack_288;
  int iStack_280;
  int iStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  longlong lStack_248;
  undefined8 uStack_240;
  int iStack_238;
  int iStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  byte *pbStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  byte ****ppppbStack_1d0;
  byte ****ppppbStack_140;
  byte ****ppppbStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte ****ppppbStack_120;
  byte ****ppppbStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  byte ****ppppbStack_f8;
  byte ****ppppbStack_f0;
  byte ****ppppbStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte ****ppppbStack_98;
  byte ****ppppbStack_90;
  undefined1 uStack_81;
  byte ****ppppbStack_80;
  byte ****ppppbStack_78;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  ppppbVar8 = (byte ****)pdb_140dc6060();
  if (ppppbVar8 != (byte ****)0x0) {
    ppppbStack_3b8 = ppppbVar8;
    if (*_DAT_143ca8e90 != 0) {
      ppppbStack_4e8 = (byte ****)&ppppbStack_3b8;
      ppppbStack_4e0 = (byte ****)pdb_140f36c30;
      uStack_228._0_4_ = 0;
      uStack_228._4_4_ = 0;
      iStack_220 = 0x42e3313d;
      iStack_21c = 1;
      iStack_218 = 0x27;
      iStack_214 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_208 = 0x42e33109;
      uStack_204 = 1;
      uStack_200 = 0x33;
      uStack_1fc = 0;
      pbStack_1f8 = (byte *)0x1;
      puStack_1f0 = &UNK_142e3313d;
      uStack_1e8 = 0x27;
      uStack_1e0 = 0xf00000001;
      puStack_1d8 = &UNK_142e330f8;
      ppppbStack_1d0 = (byte ****)&ppppbStack_4e8;
      param_2 = &uStack_228;
      pdb_140f332f0(&uStack_81,param_2);
    }
    pdb_140f36c40(&ppppbStack_3b8);
  }
  uVar9 = pdb_140dc7210();
  pdb_140dee3a0(&uStack_228);
  ppppbStack_3b0 = (byte ****)pdb_140001020;
  ppppbStack_3b8 = (byte ****)&uStack_228;
  pdb_140f60760(&ppppbStack_4e8,&UNK_142e33164,&ppppbStack_3b8);
  if (CONCAT44(uStack_228._4_4_,(int)uStack_228) != 0) {
    pub_1406abac0((byte *)CONCAT44(iStack_21c,iStack_220),CONCAT44(uStack_228._4_4_,(int)uStack_228)
                  ,1);
  }
  ppppbStack_80 = ppppbStack_4e8;
  ppppbStack_78 = ppppbStack_4e0;
  pdb_140f3e9e0(&uStack_578,uVar9,param_2,ppppbStack_4e0,uStack_4d8);
  if ((byte *****)ppppbStack_80 != (byte *****)0x0) {
    pub_1406abac0((byte *)ppppbStack_78,(ulonglong)ppppbStack_80,1);
  }
  pbVar11 = pbStack_570;
  uStack_228._0_4_ = CONCAT31(uStack_228._1_3_,1);
  pppppbVar10 = (byte *****)pdb_140f46c40(&uStack_228,pbStack_570,uStack_568);
  if (pppppbVar10 == (byte *****)0x0) {
    pdb_140f4ee90(&uStack_228,pbVar11,uStack_568);
    if (SBORROW8(0,CONCAT44(uStack_228._4_4_,(int)uStack_228))) {
      uStack_240 = pdb_142d88fc0(CONCAT44(iStack_21c,iStack_220));
      goto LAB_140001aee;
    }
    lStack_248 = CONCAT44(uStack_228._4_4_,(int)uStack_228);
    uVar9 = CONCAT44(iStack_21c,iStack_220);
    iStack_238 = iStack_218;
    iStack_234 = iStack_214;
    uStack_230 = uStack_210;
    uStack_22c = uStack_20c;
    uVar15 = 0;
    uStack_240 = uVar9;
    if (SBORROW8(0,lStack_248)) {
      ppppbStack_80 = (byte ****)0x8000000000000000;
      ppppbVar17 = (byte ****)0x8;
    }
    else {
      uVar15 = CONCAT44(iStack_214,iStack_218);
      uStack_67 = 1;
      pdb_1403c59a0(&uStack_228,uVar9,uVar15);
      ppppbVar8 = (byte ****)CONCAT44(uStack_228._4_4_,(int)uStack_228);
      ppppbStack_538 = (byte ****)CONCAT44(iStack_21c,iStack_220);
      if (SBORROW8(0,(longlong)ppppbVar8)) {
        ppppbStack_3b8 = (byte ****)&ppppbStack_f8;
        ppppbStack_3b0 = (byte ****)pdb_140f36c30;
        ppppbStack_f8 = ppppbStack_538;
        pdb_140f60760(&ppppbStack_4e8,&UNK_142e331c5,&ppppbStack_3b8);
        ppppbStack_538 = ppppbStack_4e8;
        ppppbStack_530 = ppppbStack_4e0;
        ppppbStack_528 = (byte ****)uStack_4d8;
        uStack_67 = 1;
        pdb_140f36c40(&ppppbStack_f8);
        pppbStack_540 = (byte ***)0x8000000000000000;
      }
      else {
        ppppbStack_530 = (byte ****)CONCAT44(iStack_214,iStack_218);
        ppppbStack_528 = (byte ****)CONCAT44(uStack_20c,uStack_210);
        pppbStack_540 = (byte ***)ppppbVar8;
      }
      pdb_14007ee60();
      ppppbStack_80 = (byte ****)pub_1406abab0(0xc0,8);
      if (ppppbStack_80 == (byte ****)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0xc0);
      }
      pdb_1403c57a0(&uStack_228,uVar9,uVar15);
      uStack_3a8 = (byte *****)CONCAT44(uStack_228._4_4_,(int)uStack_228);
      uStack_3a0 = (byte *****)CONCAT44(iStack_21c,iStack_220);
      if (SBORROW8(0,(longlong)uStack_3a8)) {
        ppppbStack_3b8 = (byte ****)&ppppbStack_2a8;
        ppppbStack_3b0 = (byte ****)pdb_140f36c30;
        ppppbStack_2a8 = (byte ****)uStack_3a0;
        pdb_140f60760(&ppppbStack_4e8,&UNK_142e331c5,&ppppbStack_3b8);
        uStack_3a0 = (byte *****)ppppbStack_4e8;
        ppppbStack_f8 = ppppbStack_4e0;
        ppppbStack_f0 = (byte ****)uStack_4d8;
        pdb_140f36c40(&ppppbStack_2a8);
      }
      else {
        ppppbStack_f8 = (byte ****)CONCAT44(iStack_214,iStack_218);
        ppppbStack_f0 = (byte ****)CONCAT44(uStack_20c,uStack_210);
      }
      ppppbStack_3b8 = (byte ****)&UNK_142e331a1;
      ppppbStack_3b0 = (byte ****)0x3;
      uStack_398 = (byte *****)ppppbStack_f8;
      uStack_390 = (byte *****)ppppbStack_f0;
      pdb_140f3e9e0(&ppppbStack_f8,uVar9,uVar15,&UNK_142e331cb,0x16);
      pdb_140dc7240(&uStack_228);
      pppppbVar10 = (byte *****)CONCAT44(iStack_21c,iStack_220);
      if (SBORROW8(0,(longlong)CONCAT44(uStack_228._4_4_,(int)uStack_228))) {
        if ((byte *****)ppppbStack_f8 != (byte *****)0x0) {
          pub_1406abac0((byte *)ppppbStack_f0,(ulonglong)ppppbStack_f8,1);
        }
LAB_140002acc:
        ppppbStack_4e8 = (byte ****)&ppppbStack_2a8;
        ppppbStack_4e0 = (byte ****)pdb_140f36c30;
        ppppbStack_2a8 = (byte ****)pppppbVar10;
        pdb_140f60760(&uStack_228,&UNK_142e331c5,&ppppbStack_4e8);
        pppppbVar10 = (byte *****)CONCAT44(uStack_228._4_4_,(int)uStack_228);
        ppppbStack_f8 = (byte ****)CONCAT44(iStack_21c,iStack_220);
        ppppbStack_f0 = (byte ****)CONCAT44(iStack_214,iStack_218);
        pdb_140f36c40(&ppppbStack_2a8);
        pppppbVar21 = (byte *****)0x8000000000000000;
      }
      else {
        ppppbStack_90 = (byte ****)pppppbVar10;
        ppppbStack_78 = (byte ****)CONCAT44(uStack_228._4_4_,(int)uStack_228);
        pdb_140f3e9e0(&ppppbStack_4e8,pppppbVar10,CONCAT44(iStack_214,iStack_218),&UNK_142e331cb,
                      0x16);
        ppppbVar17 = ppppbStack_f0;
        ppppbStack_98 = ppppbStack_4e0;
        pppppbVar10 = uStack_4d8;
        lVar14 = pdb_140f4f180(ppppbStack_4e0,uStack_4d8,ppppbStack_f0,ppppbStack_e8);
        if ((byte *****)ppppbStack_4e8 != (byte *****)0x0) {
          pub_1406abac0((byte *)ppppbStack_98,(ulonglong)ppppbStack_4e8,1);
        }
        if (lVar14 == 1) {
          uStack_6e = 1;
          ppppbStack_2a8 = (byte ****)pppppbVar10;
          pdb_140f3f5b0(&uStack_228);
          ppppbStack_4e8 = (byte ****)CONCAT44(uStack_228._4_4_,(int)uStack_228);
          ppppbStack_4e0 = (byte ****)CONCAT44(iStack_21c,iStack_220);
          ppppbStack_4c8 = (byte ****)CONCAT44(uStack_204,uStack_208);
          ppppbStack_4c0 = (byte ****)CONCAT44(uStack_1fc,uStack_200);
          uStack_4d8 = (byte *****)CONCAT44(iStack_214,iStack_218);
          uStack_4d0 = (byte *****)CONCAT44(uStack_20c,uStack_210);
          uStack_228._0_4_ = 0x42e331e1;
          uStack_228._4_4_ = 1;
          iStack_220 = 0x23;
          iStack_21c = 0;
          iStack_218 = (int)pppppbVar10;
          iStack_214 = (int)((ulonglong)pppppbVar10 >> 0x20);
          uStack_6e = 0;
          pppppbVar10 = (byte *****)pdb_142d88850(&uStack_228,&ppppbStack_4e8);
          pppppbVar21 = (byte *****)0x8000000000000000;
          if ((byte *****)ppppbStack_f8 != (byte *****)0x0) {
            pub_1406abac0((byte *)ppppbVar17,(ulonglong)ppppbStack_f8,1);
          }
        }
        else {
          ppppbStack_648 = ppppbStack_e8;
          ppppbStack_640 = (byte ****)uStack_e0;
          pppppbVar10 = (byte *****)ppppbVar17;
          pppppbVar21 = (byte *****)ppppbStack_f8;
        }
        if ((byte *****)ppppbStack_78 != (byte *****)0x0) {
          pub_1406abac0((byte *)ppppbStack_90,(ulonglong)ppppbStack_78,1);
        }
        if (SBORROW8(0,(longlong)pppppbVar21)) goto LAB_140002acc;
        ppppbStack_f8 = ppppbStack_648;
        ppppbStack_f0 = ppppbStack_640;
      }
      ppppbStack_4e8 = (byte ****)&UNK_142e331a4;
      ppppbStack_4e0 = (byte ****)0x12;
      ppppbStack_4c8 = ppppbStack_f8;
      ppppbStack_4c0 = ppppbStack_f0;
      uStack_4d8 = pppppbVar21;
      uStack_4d0 = pppppbVar10;
      pdb_1403c5c10(&uStack_228,uVar9,uVar15);
      iVar6 = uStack_228._4_4_;
      iVar7 = (int)uStack_228;
      pppppbVar10 = (byte *****)CONCAT44(iStack_21c,iStack_220);
      if (SBORROW8(0,CONCAT44(uStack_228._4_4_,(int)uStack_228))) {
        ppppbStack_2a8 = (byte ****)appppbStack_638;
        ppppbStack_2a0 = (byte ****)pdb_140f36c30;
        appppbStack_638[0] = (byte ****)pppppbVar10;
        pdb_140f60760(&ppppbStack_f8,&UNK_142e331c5,&ppppbStack_2a8);
        pppppbVar10 = (byte *****)ppppbStack_f8;
        ppppbStack_2a8 = ppppbStack_f0;
        ppppbStack_2a0 = ppppbStack_e8;
        pdb_140f36c40(appppbStack_638);
      }
      else {
        ppppbStack_2a8 = (byte ****)CONCAT44(iStack_214,iStack_218);
        ppppbStack_2a0 = (byte ****)CONCAT44(uStack_20c,uStack_210);
      }
      arg0 = (byte *****)ppppbStack_530;
      pppppbVar21 = (byte *****)ppppbStack_538;
      uStack_228._0_4_ = 0x42e331b6;
      uStack_228._4_4_ = 1;
      iStack_220 = 8;
      iStack_21c = 0;
      iStack_218 = iVar7;
      iStack_214 = iVar6;
      uStack_210 = SUB84(pppppbVar10,0);
      uStack_20c = (undefined4)((ulonglong)pppppbVar10 >> 0x20);
      uStack_208 = SUB84(ppppbStack_2a8,0);
      uStack_204 = (undefined4)((ulonglong)ppppbStack_2a8 >> 0x20);
      uStack_200 = SUB84(ppppbStack_2a0,0);
      uStack_1fc = (undefined4)((ulonglong)ppppbStack_2a0 >> 0x20);
      if (SBORROW8(0,(longlong)ppppbVar8)) {
        pdb_140f60be0(&ppppbStack_f0,&ppppbStack_538);
        ppppbStack_f8 = (byte ****)0x8000000000000000;
        arg0 = (byte *****)ppppbStack_530;
        pppppbVar21 = (byte *****)ppppbStack_538;
      }
      else {
        if ((longlong)ppppbStack_530 < 0) {
          uVar9 = 0;
LAB_140002c98:
          pdb_142dc7e2a(uVar9,arg0);
          goto LAB_140003011;
        }
        if ((byte *****)ppppbStack_530 == (byte *****)0x0) {
          pppppbVar10 = (byte *****)0x1;
        }
        else {
          pdb_14007ee60();
          uVar9 = 1;
          pppppbVar10 = (byte *****)pub_1406abab0((ulonglong)arg0,1);
          if (pppppbVar10 == (byte *****)0x0) goto LAB_140002c98;
          pub_142e32760(pppppbVar10,pppppbVar21,arg0);
        }
        ppppbStack_f8 = (byte ****)arg0;
        ppppbStack_e8 = (byte ****)arg0;
        uStack_e0 = (byte *****)CONCAT71(uStack_e0._1_7_,ppppbStack_528._0_1_);
        ppppbStack_f0 = (byte ****)pppppbVar10;
      }
      ppppbVar17 = ppppbStack_80;
      ppppbStack_80[0x16] = (byte ***)ppppbStack_e8;
      *(byte *)(ppppbStack_80 + 0x17) = (byte)uStack_e0;
      *(undefined4 *)((longlong)ppppbStack_80 + 0xb9) = uStack_e0._1_4_;
      *(undefined2 *)((longlong)ppppbStack_80 + 0xbd) = uStack_e0._5_2_;
      *(byte *)((longlong)ppppbStack_80 + 0xbf) = uStack_e0._7_1_;
      ppppbStack_80[0x14] = (byte ***)ppppbStack_f8;
      ppppbStack_80[0x15] = (byte ***)ppppbStack_f0;
      ppppbStack_80[4] = (byte ***)uStack_398;
      ppppbStack_80[5] = (byte ***)uStack_390;
      ppppbStack_80[2] = (byte ***)uStack_3a8;
      ppppbStack_80[3] = (byte ***)uStack_3a0;
      *ppppbStack_80 = (byte ***)ppppbStack_3b8;
      ppppbStack_80[1] = (byte ***)ppppbStack_3b0;
      ppppbStack_80[10] = (byte ***)ppppbStack_4c8;
      ppppbStack_80[0xb] = (byte ***)ppppbStack_4c0;
      ppppbStack_80[8] = (byte ***)uStack_4d8;
      ppppbStack_80[9] = (byte ***)uStack_4d0;
      ppppbStack_80[6] = (byte ***)ppppbStack_4e8;
      ppppbStack_80[7] = (byte ***)ppppbStack_4e0;
      ppppbStack_80[0x10] = (byte ***)CONCAT44(uStack_204,uStack_208);
      ppppbStack_80[0x11] = (byte ***)CONCAT44(uStack_1fc,uStack_200);
      ppppbStack_80[0xe] = (byte ***)CONCAT44(iStack_214,iStack_218);
      ppppbStack_80[0xf] = (byte ***)CONCAT44(uStack_20c,uStack_210);
      ppppbStack_80[0xc] = (byte ***)CONCAT44(uStack_228._4_4_,(int)uStack_228);
      ppppbStack_80[0xd] = (byte ***)CONCAT44(iStack_21c,iStack_220);
      ppppbStack_80[0x12] = (byte ***)&UNK_142e331be;
      ppppbStack_80[0x13] = (byte ***)0x7;
      if (SBORROW8(0,(longlong)ppppbVar8)) {
        if (pppppbVar21 != (byte *****)0x0) {
          pub_1406abac0((byte *)arg0,(ulonglong)pppppbVar21,1);
        }
      }
      else {
        ppppbStack_98 = ppppbStack_538;
        ppppbStack_658 = ppppbStack_530;
        ppppbStack_650 = ppppbStack_528;
      }
      uVar15 = 4;
      ppppbStack_80 = ppppbVar8;
    }
  }
  else {
    uStack_6d = 1;
    ppppbStack_3b8 = (byte ****)pppppbVar10;
    pdb_140f3f5b0(&uStack_228);
    ppppbStack_4e8 = (byte ****)CONCAT44(uStack_228._4_4_,(int)uStack_228);
    ppppbStack_4e0 = (byte ****)CONCAT44(iStack_21c,iStack_220);
    ppppbStack_4c8 = (byte ****)CONCAT44(uStack_204,uStack_208);
    ppppbStack_4c0 = (byte ****)CONCAT44(uStack_1fc,uStack_200);
    uStack_4d8 = (byte *****)CONCAT44(iStack_214,iStack_218);
    uStack_4d0 = (byte *****)CONCAT44(uStack_20c,uStack_210);
    uStack_228._0_4_ = 0x42e3317f;
    uStack_228._4_4_ = 1;
    iStack_220 = 0x22;
    iStack_21c = 0;
    iStack_218 = (int)pppppbVar10;
    iStack_214 = (int)((ulonglong)pppppbVar10 >> 0x20);
    uStack_6d = 0;
    uStack_240 = pdb_142d88850(&uStack_228,&ppppbStack_4e8);
LAB_140001aee:
    ppppbStack_80 = (byte ****)0x8000000000000000;
    lStack_248 = -0x8000000000000000;
    ppppbVar17 = (byte ****)0x8;
    uVar15 = 0;
  }
  uStack_6c = 1;
  uStack_558 = uVar15;
  pppbStack_550 = (byte ***)ppppbVar17;
  uStack_548 = uVar15;
  pdb_140caef60(&uStack_228);
  lVar14 = CONCAT44(uStack_228._4_4_,(int)uStack_228);
  pdb_140007da0(&uStack_228);
  uStack_580 = lVar14 == -0x7ffffffffffffffc;
  iStack_280 = iStack_238;
  iStack_27c = iStack_234;
  uStack_278 = uStack_230;
  uStack_274 = uStack_22c;
  lStack_290 = lStack_248;
  uStack_288 = uStack_240;
  uStack_258 = 0x1010001;
  uStack_254 = CONCAT31(uStack_254._1_3_,2);
  ppppbStack_2a8 = (byte ****)0x0;
  ppppbStack_2a0 = (byte ****)0x8;
  uStack_298 = 0;
  uStack_5a8 = uStack_548;
  uStack_5b8 = uStack_558;
  pppbStack_5b0 = pppbStack_550;
  pppbStack_5a0 = (byte ***)ppppbStack_80;
  ppppbStack_598 = ppppbStack_98;
  ppppbStack_590 = ppppbStack_658;
  ppppbStack_588 = ppppbStack_650;
  uStack_270 = 0x8000000000000000;
  pppbStack_540 = (byte ***)0x800000000000000d;
  ppppbStack_3b8 = (byte ****)0x0;
  uStack_3a8 = (byte *****)CONCAT62(uStack_3a8._2_6_,0x100);
  LOCK();
  cVar5 = *_DAT_143ca3878;
  *_DAT_143ca3878 = '\x01';
  UNLOCK();
  if (cVar5 == '\0') {
    pdb_14010b300(&uStack_228,&ppppbStack_3b8);
    pbVar11 = pbStack_1f8;
    iVar7 = iStack_220;
    iVar6 = (int)uStack_228;
    uVar9 = CONCAT44(uStack_228._4_4_,(int)uStack_228);
    ppppbStack_4e8 = (byte ****)CONCAT44(iStack_218,iStack_21c);
    ppppbStack_4e0 = (byte ****)CONCAT44(uStack_210,iStack_214);
    uStack_4d8 = (byte *****)CONCAT44(uStack_208,uStack_20c);
    uStack_4d0 = (byte *****)CONCAT44(uStack_200,uStack_204);
    ppppbStack_4c8 = (byte ****)CONCAT44(ppppbStack_4c8._4_4_,uStack_1fc);
    ppppbStack_78 = ppppbStack_3b8;
    if ((byte *****)ppppbStack_3b8 != (byte *****)0x0) {
      ppppbStack_90 = ppppbStack_3b0;
      if ((byte ****)*ppppbStack_3b0 != (byte ****)0x0) {
        (*(code *)*ppppbStack_3b0)(ppppbStack_3b8);
      }
      if ((byte ****)ppppbStack_90[1] != (byte ****)0x0) {
        pub_1406abac0((byte *)ppppbStack_78,(ulonglong)ppppbStack_90[1],(ulonglong)ppppbStack_90[2])
        ;
      }
    }
    if (iVar6 != 3) {
      iStack_5e8 = iVar7;
      uStack_5e4 = (byte *****)ppppbStack_4e8;
      ppppbStack_5dc = ppppbStack_4e0;
      uStack_5d4 = (undefined4)uStack_4d8;
      uStack_5d0 = uStack_4d8._4_4_;
      uStack_5cc = (undefined4)uStack_4d0;
      uStack_5c8 = uStack_4d0._4_4_;
      uStack_5c4 = ppppbStack_4c8._0_4_;
      pbStack_5c0 = pbVar11;
      uStack_5f0 = uVar9;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(0xc,1);
      if (pbVar11 == (byte *)0x0) {
        uStack_6a = 1;
        uStack_6b = 1;
        pdb_142dc7e2a(1,0xc);
      }
      else {
        pbVar11[0] = 0x77;
        pbVar11[1] = 0x69;
        pbVar11[2] = 0x6e;
        pbVar11[3] = 0x69;
        pbVar11[4] = 0x74;
        pbVar11[5] = 0x20;
        pbVar11[6] = 0x77;
        pbVar11[7] = 0x69;
        pbVar11[8] = 0x6e;
        pbVar11[9] = 100;
        pbVar11[10] = 0x6f;
        pbVar11[0xb] = 0x77;
        uStack_4a8 = CONCAT44(uStack_4a8._4_4_,2);
        uStack_490 = 2;
        uStack_478 = 2;
        uStack_460 = 2;
        uStack_410 = 7;
        ppppbStack_4c0 = (byte ****)0xc;
        uStack_4b0 = 0xc;
        uStack_418 = 0;
        uStack_404 = 0x102;
        uStack_448 = 2;
        uStack_40c = 1;
        uStack_40a = 1;
        uStack_409 = 0x100010000;
        uStack_430 = 0xf;
        ppppbStack_4e8 = (byte ****)0x0;
        pbStack_4b8 = pbVar11;
        pdb_14073f420(&ppppbStack_3b8);
        pub_142e32760(&uStack_228,&ppppbStack_4e8,0xe8);
        ppppbStack_140 = ppppbStack_3b8;
        ppppbStack_138 = ppppbStack_3b0;
        uStack_130 = (undefined4)uStack_3a8;
        uStack_12c = uStack_3a8._4_4_;
        uStack_128 = (undefined4)uStack_3a0;
        uStack_124 = uStack_3a0._4_4_;
        ppppbStack_120 = (byte ****)uStack_398;
        ppppbStack_118 = (byte ****)uStack_390;
        uStack_110 = uStack_388;
        uStack_10c = uStack_384;
        uStack_108 = uStack_380;
        uStack_104 = uStack_37c;
        uStack_100 = uStack_378;
        pdb_14007ee60();
        pbVar11 = pub_1406abab0(0x16,1);
        uVar9 = _UNK_142e33581;
        if (pbVar11 != (byte *)0x0) {
          *(undefined8 *)pbVar11 = _DAT_142e33579;
          *(undefined8 *)(pbVar11 + 8) = uVar9;
          pbVar11[0xe] = 0x67;
          pbVar11[0xf] = 0x6e;
          pbVar11[0x10] = 0x6f;
          pbVar11[0x11] = 0x73;
          pbVar11[0x12] = 0x74;
          pbVar11[0x13] = 0x69;
          pbVar11[0x14] = 99;
          pbVar11[0x15] = 0x73;
          if (CONCAT44(uStack_1fc,uStack_200) != 0) {
            pub_1406abac0(pbStack_1f8,CONCAT44(uStack_1fc,uStack_200),1);
          }
          uStack_200 = 0x16;
          uStack_1fc = 0;
          puStack_1f0 = (undefined *)0x16;
          ppppbStack_4e8 = (byte ****)CONCAT44(uStack_228._4_4_,(int)uStack_228);
          ppppbStack_4e0 = (byte ****)CONCAT44(iStack_21c,iStack_220);
          uStack_4d8 = (byte *****)CONCAT44(iStack_214,iStack_218);
          uStack_4d0 = (byte *****)CONCAT44(uStack_20c,uStack_210);
          ppppbStack_4c8 = (byte ****)CONCAT44(uStack_204,uStack_208);
          ppppbStack_4c0 = (byte ****)0x16;
          uStack_4b0 = 0x16;
          pbStack_4b8 = pbVar11;
          pbStack_1f8 = pbVar11;
          pub_142e32760(&ppppbStack_3b8,(longlong)&uStack_1e0 + 4,0xe4);
          uStack_4a8 = 0x32000000000;
          uStack_4a0 = 600;
          pub_142e32760(auStack_49c,&ppppbStack_3b8,0x92);
          uStack_409 = (undefined5)uStack_325;
          uStack_404 = (undefined2)((ulonglong)uStack_325 >> 0x28);
          uStack_402 = (undefined1)((ulonglong)uStack_325 >> 0x38);
          uStack_401 = uStack_31d;
          uStack_3f9 = uStack_315;
          uStack_3f5 = uStack_311;
          uStack_3f1 = uStack_30d;
          uStack_3ed = uStack_309;
          uStack_3e9 = uStack_305;
          uStack_3e1 = uStack_2fd;
          uStack_3d9 = uStack_2f5;
          uStack_3d5 = uStack_2f1;
          uStack_3d1 = uStack_2ed;
          uStack_3cd = uStack_2e9;
          uStack_3c9 = uStack_2e5;
          uStack_3c1 = uStack_2dd;
          uStack_3b9 = uStack_2d5;
          uStack_40a = 1;
          uStack_64 = 1;
          uStack_65 = 1;
          uStack_66 = 1;
          uVar9 = pdb_140747850();
          uStack_64 = 1;
          uStack_65 = 1;
          uStack_66 = 1;
          pdb_140747860(&uStack_228,uVar9);
          if ((char)uStack_228 == '\0') {
            dVar2 = 0.0;
            if (0.0 <= (double)(uint)(iStack_218 - iStack_220)) {
              dVar2 = (double)(uint)(iStack_218 - iStack_220);
            }
            uVar24 = SUB84(_DAT_142e33020,0);
            uVar25 = (undefined4)((ulonglong)_DAT_142e33020 >> 0x20);
            if (dVar2 <= _DAT_142e33020) {
              uVar24 = SUB84(dVar2,0);
              uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            uVar20 = (ulonglong)(double)CONCAT44(uVar25,uVar24);
            dVar2 = 0.0;
            if (0.0 <= (double)(uint)(iStack_214 - iStack_21c)) {
              dVar2 = (double)(uint)(iStack_214 - iStack_21c);
            }
            dVar3 = _DAT_142e33020;
            if (dVar2 <= _DAT_142e33020) {
              dVar3 = dVar2;
            }
            uVar18 = (ulonglong)dVar3;
          }
          else {
            ppppbStack_3b0 = (byte ****)CONCAT44(iStack_21c,iStack_220);
            ppppbStack_3b8 = (byte ****)CONCAT44(ppppbStack_3b8._4_4_,1);
            uStack_64 = 1;
            uStack_65 = 1;
            uStack_66 = 1;
            uVar20 = 0;
            pdb_1404b38e0(&ppppbStack_3b0);
            uVar18 = 0;
          }
          uVar19 = (uint)uVar20 - 800;
          if ((uint)uVar20 < 800) {
            uVar19 = 0;
          }
          uVar16 = (uint)uVar18 - 600;
          if ((uint)uVar18 < 600) {
            uVar16 = 0;
          }
          uStack_64 = 1;
          uStack_65 = 1;
          uStack_66 = 1;
          pdb_140747860(&uStack_228,uVar9);
          if ((char)uStack_228 == '\0') {
            dVar22 = (double)iStack_220;
            dVar2 = (double)iStack_21c;
            dVar3 = dVar22;
            if (dVar22 <= _DAT_142e33028) {
              dVar3 = _DAT_142e33028;
            }
            if (_DAT_142e33030 <= dVar3) {
              dVar3 = _DAT_142e33030;
            }
            iVar7 = (int)dVar3;
            if (NAN(dVar22)) {
              iVar7 = 0;
            }
            dVar3 = dVar2;
            if (dVar2 <= _DAT_142e33028) {
              dVar3 = _DAT_142e33028;
            }
            if (_DAT_142e33030 <= dVar3) {
              dVar3 = _DAT_142e33030;
            }
            iVar6 = (int)dVar3;
            if (NAN(dVar2)) {
              iVar6 = 0;
            }
          }
          else {
            ppppbStack_3b0 = (byte ****)CONCAT44(iStack_21c,iStack_220);
            ppppbStack_3b8 = (byte ****)CONCAT44(ppppbStack_3b8._4_4_,1);
            uStack_64 = 1;
            uStack_65 = 1;
            uStack_66 = 1;
            iVar7 = 0;
            pdb_1404b38e0(&ppppbStack_3b0);
            iVar6 = 0;
          }
          dVar2 = (double)(int)((uVar19 >> 1) + iVar7);
          iVar7 = 0;
          dVar3 = dVar2;
          if (dVar2 <= _DAT_142e33028) {
            dVar3 = _DAT_142e33028;
          }
          if (_DAT_142e33030 <= dVar3) {
            dVar3 = _DAT_142e33030;
          }
          iVar4 = (int)dVar3;
          if (NAN(dVar2)) {
            iVar4 = iVar7;
          }
          dVar2 = (double)(int)((uVar16 >> 1) + iVar6);
          dVar3 = dVar2;
          if (dVar2 <= _DAT_142e33028) {
            dVar3 = _DAT_142e33028;
          }
          if (_DAT_142e33030 <= dVar3) {
            dVar3 = _DAT_142e33030;
          }
          iVar6 = (int)dVar3;
          if (NAN(dVar2)) {
            iVar6 = iVar7;
          }
          dVar2 = (double)iVar4;
          dVar3 = dVar2;
          if (dVar2 <= _DAT_142e33028) {
            dVar3 = _DAT_142e33028;
          }
          if (_DAT_142e33030 <= dVar3) {
            dVar3 = _DAT_142e33030;
          }
          iStack_45c = (int)dVar3;
          if (NAN(dVar2)) {
            iStack_45c = iVar7;
          }
          dVar2 = (double)iVar6;
          dVar3 = dVar2;
          if (dVar2 <= _DAT_142e33028) {
            dVar3 = _DAT_142e33028;
          }
          if (_DAT_142e33030 <= dVar3) {
            dVar3 = _DAT_142e33030;
          }
          iStack_458 = (int)dVar3;
          if (NAN(dVar2)) {
            iStack_458 = iVar7;
          }
          uStack_460 = 0;
          uStack_64 = 0;
          uStack_65 = 1;
          uStack_66 = 1;
          pppppbVar10 = &ppppbStack_4e8;
          pdb_1400085b0(&uStack_228,pppppbVar10,(longlong)&uStack_5e4 + 4);
          if ((int)uStack_228 != 1) {
            uStack_2c8 = CONCAT44(iStack_21c,iStack_220);
            lStack_2c0 = CONCAT44(iStack_214,iStack_218);
            uStack_2b8 = uStack_210;
            uStack_2b4 = uStack_20c;
            uStack_2b0 = uStack_208;
            uStack_2ac = uStack_204;
            uStack_61 = 1;
            uStack_62 = 1;
            uStack_63 = 1;
            pcVar12 = (char *)pdb_140744c40();
            dVar2 = *(double *)(pcVar12 + 0xc0);
            uVar24 = SUB84(dVar2,0);
            uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
            if ((((ulonglong)pppppbVar10 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)
               ) {
              uStack_61 = 1;
              uStack_62 = 1;
              uStack_63 = 1;
              cVar5 = pdb_142dc79e0();
              if (cVar5 == '\0') {
                pcVar12[1] = '\x01';
              }
            }
            LOCK();
            cVar5 = *pcVar12;
            *pcVar12 = '\0';
            UNLOCK();
            if (cVar5 == '\x02') {
              uStack_61 = 1;
              uStack_62 = 1;
              uStack_63 = 1;
              pdb_142dc6ca0(pcVar12);
            }
            uStack_61 = 1;
            uStack_62 = 1;
            uStack_63 = 1;
            pcVar12 = (char *)pdb_140744c40();
            uVar19 = *(uint *)(pcVar12 + 0xcc);
            if ((((ulonglong)pppppbVar10 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)
               ) {
              uStack_61 = 1;
              uStack_62 = 1;
              uStack_63 = 1;
              cVar5 = pdb_142dc79e0();
              if (cVar5 == '\0') {
                pcVar12[1] = '\x01';
              }
            }
            LOCK();
            cVar5 = *pcVar12;
            *pcVar12 = '\0';
            UNLOCK();
            if (cVar5 == '\x02') {
              uStack_61 = 1;
              uStack_62 = 1;
              uStack_63 = 1;
              pdb_142dc6ca0(pcVar12);
            }
            lVar14 = lStack_2c0;
            uStack_61 = 1;
            uStack_62 = 1;
            uStack_63 = 1;
            cVar5 = pdb_1407476d0(lStack_2c0);
            lVar13 = GetForegroundWindow();
            if ((cVar5 == '\0' && lVar14 != lVar13) && (uVar19 & 0x10) != 0) {
              uStack_61 = 1;
              uStack_62 = 1;
              uStack_63 = 1;
              pdb_140744ab0(lVar14);
            }
            lVar14 = lStack_2c0;
            lVar13 = GetActiveWindow();
            if (lVar14 != lVar13) {
              uStack_61 = 1;
              uStack_62 = 1;
              uStack_63 = 1;
              pdb_14010d7a0(&uStack_2b8,lVar14,0);
            }
            uStack_a8 = CONCAT44(uStack_254,uStack_258);
            uStack_b8 = uStack_268;
            uStack_b0 = uStack_260;
            uStack_d0 = CONCAT44(iStack_27c,iStack_280);
            uStack_c8 = CONCAT44(uStack_274,uStack_278);
            uStack_c0 = uStack_270;
            uStack_d8 = uStack_288;
            ppppbStack_e8 = (byte ****)uStack_298;
            uStack_e0 = (byte *****)lStack_290;
            ppppbStack_f8 = ppppbStack_2a8;
            ppppbStack_f0 = ppppbStack_2a0;
            auStack_678[0] = 0x8000000000000000;
            appppbStack_638[0] = (byte ****)0x8000000000000004;
            pdb_14007ee60();
            ppppbStack_78 = (byte ****)pub_1406abab0(0x40,8);
            if (ppppbStack_78 == (byte ****)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x40);
            }
            *(byte *****)((longlong)ppppbStack_78 + 0x30) = ppppbStack_588;
            *(ulonglong *)((longlong)ppppbStack_78 + 0x38) = CONCAT71(uStack_57f,uStack_580);
            *(byte *****)((longlong)ppppbStack_78 + 0x20) = ppppbStack_598;
            *(byte *****)((longlong)ppppbStack_78 + 0x28) = ppppbStack_590;
            *(undefined8 *)((longlong)ppppbStack_78 + 0x10) = uStack_5a8;
            *(byte ****)((longlong)ppppbStack_78 + 0x18) = pppbStack_5a0;
            *ppppbStack_78 = (byte ***)uStack_5b8;
            *(byte ****)((longlong)ppppbStack_78 + 8) = pppbStack_5b0;
            uStack_368 = uStack_4f0;
            uStack_378 = uStack_500;
            uStack_370 = uStack_4f8;
            uStack_388 = uStack_510;
            uStack_384 = uStack_50c;
            uStack_380 = uStack_508;
            uStack_37c = uStack_504;
            uStack_398 = (byte *****)uStack_520;
            uStack_390 = (byte *****)uStack_518;
            uStack_3a8 = (byte *****)ppppbStack_530;
            uStack_3a0 = (byte *****)ppppbStack_528;
            ppppbStack_3b8 = (byte ****)pppbStack_540;
            ppppbStack_3b0 = ppppbStack_538;
            pdb_1406b1e20(&uStack_228,&ppppbStack_f8,auStack_678,appppbStack_638,ppppbStack_78,
                          &UNK_142e335c8,&ppppbStack_3b8);
            uStack_398._0_4_ = uStack_2b8;
            uStack_398._4_4_ = uStack_2b4;
            uStack_390._0_4_ = uStack_2b0;
            uStack_390._4_4_ = uStack_2ac;
            uStack_3a8 = (byte *****)uStack_2c8;
            uStack_3a0 = (byte *****)lStack_2c0;
            ppppbStack_3b8 = (byte ****)0x1;
            ppppbStack_3b0 = (byte ****)0x1;
            pdb_14007ee60();
            ppppbStack_78 = (byte ****)pub_1406abab0(0x30,8);
            if (ppppbStack_78 == (byte ****)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x30);
            }
            dVar23 = (double)(uVar20 & 0xffffffff) / _DAT_142e33038;
            dVar3 = (double)(uVar18 & 0xffffffff) / _DAT_142e33040;
            dVar22 = dVar3;
            if (dVar23 <= dVar3) {
              dVar22 = dVar23;
            }
            dVar3 = (double)(~-(ulonglong)NAN(dVar23) & (ulonglong)dVar22 |
                            -(ulonglong)NAN(dVar23) & (ulonglong)dVar3);
            if (dVar3 <= dVar2) {
              uVar24 = SUB84(dVar3,0);
              uVar25 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            *(undefined4 *)((longlong)ppppbStack_78 + 0x20) = (undefined4)uStack_398;
            *(undefined4 *)((longlong)ppppbStack_78 + 0x24) = uStack_398._4_4_;
            *(undefined4 *)((longlong)ppppbStack_78 + 0x28) = (undefined4)uStack_390;
            *(undefined4 *)((longlong)ppppbStack_78 + 0x2c) = uStack_390._4_4_;
            *(byte ******)((longlong)ppppbStack_78 + 0x10) = uStack_3a8;
            *(byte ******)((longlong)ppppbStack_78 + 0x18) = uStack_3a0;
            *ppppbStack_78 = (byte ***)ppppbStack_3b8;
            *(byte *****)((longlong)ppppbStack_78 + 8) = ppppbStack_3b0;
            uStack_3a8 = (byte *****)CONCAT44(_DAT_142e33050,1);
            uStack_3a0 = (byte *****)CONCAT44(_UNK_142e33058,_UNK_142e33054);
            uStack_398 = (byte *****)CONCAT44(uStack_398._4_4_,_UNK_142e3305c);
            ppppbStack_3b8 = (byte ****)0x1;
            ppppbStack_3b0 =
                 (byte ****)
                 (~-(ulonglong)NAN(dVar3) & CONCAT44(uVar25,uVar24) |
                 -(ulonglong)NAN(dVar3) & (ulonglong)dVar2);
            pdb_140151d80(&ppppbStack_f8,&uStack_228,&uStack_5f0,ppppbStack_78,&ppppbStack_3b8);
            if ((char)ppppbStack_f8 != '\0') {
              uStack_61 = 0;
              uStack_62 = 0;
              uStack_63 = 0;
              pdb_140f36c40(&ppppbStack_f0);
            }
            uStack_68 = 0;
            uStack_69 = 0;
            pdb_1404cbae0(&uStack_5f0);
            if (uStack_578 != 0) {
              pub_1406abac0(pbStack_570,uStack_578,1);
            }
            return;
          }
          ppppbStack_3b8 = (byte ****)CONCAT44(iStack_21c,iStack_220);
          ppppbStack_3b0 = (byte ****)CONCAT44(iStack_214,iStack_218);
          uStack_3a8 = (byte *****)CONCAT44(uStack_20c,uStack_210);
          uStack_3a0 = (byte *****)CONCAT44(uStack_204,uStack_208);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142e332d5,6,&ppppbStack_3b8,&UNK_142e33608,&UNK_142e33590);
        }
        pdb_142dc7e2a(1,0x16);
      }
LAB_140003011:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    iVar7 = 3;
  }
  uStack_228._4_4_ = (int)ppppbStack_4e8;
  iStack_220 = (int)((ulonglong)ppppbStack_4e8 >> 0x20);
  iStack_21c = (int)ppppbStack_4e0;
  iStack_218 = (int)((ulonglong)ppppbStack_4e0 >> 0x20);
  iStack_214 = (undefined4)uStack_4d8;
  uStack_210 = uStack_4d8._4_4_;
  uStack_20c = (undefined4)uStack_4d0;
  uStack_208 = uStack_4d0._4_4_;
  uStack_204 = ppppbStack_4c8._0_4_;
  uStack_228._0_4_ = iVar7;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e33648,0x2b,&uStack_228,&UNK_142e33698,&UNK_142e33550);
}

