// VA 0x140cb73d0, PDB extent 3504 bytes
// tg_text::TextRenderer::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_text::TextRenderer::new
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 3504 */

longlong pdb_140cb73d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 **ppuVar11;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined8 **ppuStack_540;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  int aiStack_2b0 [2];
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  byte *pbStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  byte *pbStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  byte *pbStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 **ppuStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_150 = (undefined8 **)0x0;
  uStack_148 = 4;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 4;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_71 = 1;
  pdb_141c37150(&ppuStack_260);
  if (SBORROW8(0,(longlong)ppuStack_260)) {
    if (1 < *_DAT_143ca8e90) {
      uStack_598 = 0;
      uStack_590 = &UNK_14307a908;
      uStack_588 = 7;
      uStack_580 = 0;
      puStack_578 = &UNK_14307a8a7;
      uStack_570 = 0x19;
      uStack_568 = 2;
      puStack_560 = &UNK_14307a908;
      uStack_558 = 7;
      uStack_550 = 0x1c500000001;
      puStack_548 = &UNK_14307aa27;
      ppuStack_540 = (undefined8 ***)0x7d;
      uStack_71 = 1;
      pdb_140f332f0(&uStack_76,&uStack_598);
    }
    pdb_14007ee60();
    pcVar6 = (code *)pub_1406abab0(5,1);
    if (pcVar6 == (code *)0x0) {
      uStack_71 = 1;
      pdb_142dc7e2a(1,5);
      goto LAB_140cb7c89;
    }
    pcVar6[4] = (code)0x53;
    *(undefined4 *)pcVar6 = 0x552d6e65;
    ppuStack_f8 = (undefined8 ***)0x5;
    uStack_e8 = 5;
    pcStack_f0 = pcVar6;
  }
  else {
    uStack_e8 = uStack_250;
    ppuStack_f8 = ppuStack_260;
    pcStack_f0 = pcStack_258;
  }
  if (3 < *_DAT_143ca8e90) {
    pcStack_258 = pdb_140001020;
    uStack_598 = 0;
    uStack_590 = &UNK_14307a908;
    uStack_588 = 7;
    uStack_580 = 0;
    puStack_578 = &UNK_14307a8a7;
    uStack_570 = 0x19;
    uStack_568 = 4;
    puStack_560 = &UNK_14307a908;
    uStack_558 = 7;
    uStack_550 = 0x1c800000001;
    puStack_548 = &UNK_14307aa10;
    uStack_73 = 1;
    ppuStack_540 = &ppuStack_260;
    ppuStack_260 = &ppuStack_f8;
    pdb_140f332f0(&uStack_76,&uStack_598);
  }
  uVar5 = uStack_e8;
  pcVar6 = pcStack_f0;
  ppuVar11 = ppuStack_f8;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x80,8);
  if (pbVar7 == (byte *)0x0) {
    pcStack_88 = pcVar6;
    ppuStack_80 = ppuVar11;
    pdb_142dc7e2a(8,0x80);
  }
  else {
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7[0x78] = 0;
    pbVar7[0x79] = 0;
    pbVar7[0x7a] = 0;
    pbVar7[0x7b] = 0;
    uStack_598 = 1;
    uStack_588 = 1;
    uStack_580 = 1;
    uStack_590 = pbVar7;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0xf,1);
    if (pbVar7 == (byte *)0x0) {
      pcStack_88 = pcVar6;
      ppuStack_80 = ppuVar11;
      pdb_142dc7e2a(1,0xf);
    }
    else {
      pbVar7[7] = 0x65;
      pbVar7[8] = 0x77;
      pbVar7[9] = 0x20;
      pbVar7[10] = 0x52;
      pbVar7[0xb] = 0x6f;
      pbVar7[0xc] = 0x6d;
      pbVar7[0xd] = 0x61;
      pbVar7[0xe] = 0x6e;
      pbVar7[0] = 0x54;
      pbVar7[1] = 0x69;
      pbVar7[2] = 0x6d;
      pbVar7[3] = 0x65;
      pbVar7[4] = 0x73;
      pbVar7[5] = 0x20;
      pbVar7[6] = 0x4e;
      pbVar7[7] = 0x65;
      pdb_14007ee60();
      pbVar8 = pub_1406abab0(5,1);
      pbStack_90 = pbVar7;
      if (pbVar8 == (byte *)0x0) {
        pcStack_88 = pcVar6;
        ppuStack_80 = ppuVar11;
        pdb_142dc7e2a(1,5);
      }
      else {
        pbVar8[4] = 0x6c;
        pbVar8[0] = 0x41;
        pbVar8[1] = 0x72;
        pbVar8[2] = 0x69;
        pbVar8[3] = 0x61;
        pbStack_a0 = pbVar8;
        ppuStack_80 = (undefined8 **)param_2;
        pdb_14007ee60();
        pbVar8 = pub_1406abab0(0xd,1);
        if (pbVar8 == (byte *)0x0) {
          pcStack_88 = pcVar6;
          ppuStack_80 = ppuVar11;
          pdb_142dc7e2a(1,0xd);
        }
        else {
          pbVar8[5] = 0x20;
          pbVar8[6] = 0x53;
          pbVar8[7] = 0x61;
          pbVar8[8] = 0x6e;
          pbVar8[9] = 0x73;
          pbVar8[10] = 0x20;
          pbVar8[0xb] = 0x4d;
          pbVar8[0xc] = 0x53;
          pbVar8[0] = 0x43;
          pbVar8[1] = 0x6f;
          pbVar8[2] = 0x6d;
          pbVar8[3] = 0x69;
          pbVar8[4] = 99;
          pbVar8[5] = 0x20;
          pbVar8[6] = 0x53;
          pbVar8[7] = 0x61;
          pbStack_98 = pbVar8;
          pdb_14007ee60();
          pbVar8 = pub_1406abab0(6,1);
          if (pbVar8 == (byte *)0x0) {
            pcStack_88 = pcVar6;
            ppuStack_80 = ppuVar11;
            pdb_142dc7e2a(1,6);
          }
          else {
            pbVar8[4] = 99;
            pbVar8[5] = 0x74;
            pbVar8[0] = 0x49;
            pbVar8[1] = 0x6d;
            pbVar8[2] = 0x70;
            pbVar8[3] = 0x61;
            pdb_14007ee60();
            pbStack_1c0 = pub_1406abab0(0xb,1);
            if (pbStack_1c0 != (byte *)0x0) {
              pbStack_1c0[0] = 0x43;
              pbStack_1c0[1] = 0x6f;
              pbStack_1c0[2] = 0x75;
              pbStack_1c0[3] = 0x72;
              pbStack_1c0[4] = 0x69;
              pbStack_1c0[5] = 0x65;
              pbStack_1c0[6] = 0x72;
              pbStack_1c0[7] = 0x20;
              pbStack_1c0[7] = 0x20;
              uVar4 = _UNK_14307a6a8;
              uVar3 = _DAT_14307a6a0;
              uVar2 = _UNK_14307a698;
              uVar1 = _DAT_14307a690;
              pbStack_1c0[8] = 0x4e;
              pbStack_1c0[9] = 0x65;
              pbStack_1c0[10] = 0x77;
              uStack_238 = (undefined4)uStack_588;
              uStack_234 = uStack_588._4_4_;
              uStack_230 = (undefined4)uStack_580;
              uStack_22c = uStack_580._4_4_;
              uStack_248 = (undefined4)uStack_598;
              uStack_244 = uStack_598._4_4_;
              uStack_240 = (undefined4)uStack_590;
              uStack_23c = uStack_590._4_4_;
              ppuStack_260 = ppuVar11;
              pcStack_258 = pcVar6;
              uStack_250 = uVar5;
              uStack_228 = 0xf;
              uStack_218 = 0xf;
              uStack_210 = 5;
              pbStack_208 = pbStack_a0;
              uStack_200 = 5;
              uStack_1f8 = 0xd;
              pbStack_1f0 = pbStack_98;
              uStack_1e8 = 0xd;
              uStack_1e0 = 6;
              uStack_1d0 = 6;
              uStack_1c8 = 0xb;
              uStack_1b8 = 0xb;
              uStack_1a0 = _DAT_14307a6a0;
              uStack_198 = _UNK_14307a6a8;
              uStack_1b0 = _DAT_14307a690;
              uStack_1a8 = _UNK_14307a698;
              uStack_190 = _DAT_14307a690;
              uStack_188 = _UNK_14307a698;
              uStack_180 = _DAT_14307a6a0;
              uStack_178 = _UNK_14307a6a8;
              uStack_170 = _DAT_14307a690;
              uStack_168 = _UNK_14307a698;
              uStack_160 = _DAT_14307a6a0;
              uStack_158 = _UNK_14307a6a8;
              uStack_74 = 1;
              pbStack_220 = pbVar7;
              pbStack_1d8 = pbVar8;
              pdb_140cbee60(&uStack_598);
              uStack_75 = 1;
              pdb_141cc47e0(&uStack_300,0x400,0x400);
              uStack_110 = 0x400040000000000;
              uStack_108 = 0x12b010c00010001;
              uStack_100 = 2;
              ppuStack_f8 = (undefined8 **)0x1;
              uStack_72 = 1;
              ppuVar11 = ppuStack_80;
              pdb_141cc5340(aiStack_2b0,ppuStack_80,&UNK_14307a95d,0xb,&uStack_110,&ppuStack_f8);
              if (aiStack_2b0[0] == 0xb) {
                uStack_c8 = uStack_120;
                uStack_d8 = (undefined4)uStack_130;
                uStack_d4 = uStack_130._4_4_;
                uStack_d0 = (undefined4)uStack_128;
                uStack_cc = uStack_128._4_4_;
                uStack_e8 = uStack_140;
                uStack_e0 = (undefined4)uStack_138;
                uStack_dc = uStack_138._4_4_;
                ppuStack_f8 = (undefined8 **)puStack_150;
                pcStack_f0 = (code *)uStack_148;
                plVar9 = (longlong *)pdb_140f3bda0();
                if ((char)plVar9[2] == '\x01') {
                  lVar10 = *plVar9;
                  ppuVar11 = (undefined8 **)plVar9[1];
                }
                else {
                  lVar10 = pdb_140f4fd10();
                  *plVar9 = lVar10;
                  plVar9[1] = (longlong)ppuVar11;
                  *(undefined1 *)(plVar9 + 2) = 1;
                }
                *plVar9 = lVar10 + 1;
                pub_142e32760(param_1,&ppuStack_260,0x110);
                pub_142e32760(param_1 + 0x110,&uStack_598,0x298);
                *(undefined8 *)(param_1 + 0x3b8) = uStack_2f0;
                *(undefined8 *)(param_1 + 0x3c0) = uStack_2e8;
                *(undefined8 *)(param_1 + 0x3c8) = uStack_2e0;
                *(undefined8 *)(param_1 + 0x3d0) = uStack_2d8;
                *(undefined8 *)(param_1 + 0x3d8) = uStack_2d0;
                *(undefined8 *)(param_1 + 0x3e0) = uStack_2c8;
                *(undefined8 *)(param_1 + 1000) = uStack_2c0;
                *(undefined8 *)(param_1 + 0x3f0) = uStack_2b8;
                *(undefined8 *)(param_1 + 0x3a8) = uStack_300;
                *(undefined8 *)(param_1 + 0x3b0) = uStack_2f8;
                *(undefined8 *)(param_1 + 0x3f8) = 0;
                *(undefined8 *)(param_1 + 0x400) = 4;
                *(undefined8 *)(param_1 + 0x408) = 0;
                *(ulonglong *)(param_1 + 0x460) = CONCAT44(uStack_2a4,uStack_2a8);
                *(undefined8 *)(param_1 + 0x440) = uStack_120;
                *(undefined8 *)(param_1 + 0x430) = uStack_130;
                *(undefined8 *)(param_1 + 0x438) = uStack_128;
                *(undefined8 *)(param_1 + 0x420) = uStack_140;
                *(undefined8 *)(param_1 + 0x428) = uStack_138;
                *(undefined8 **)(param_1 + 0x410) = puStack_150;
                *(undefined8 *)(param_1 + 0x418) = uStack_148;
                *(undefined8 *)(param_1 + 0x468) = uVar1;
                *(undefined8 *)(param_1 + 0x470) = uVar2;
                *(undefined8 *)(param_1 + 0x478) = uVar3;
                *(undefined8 *)(param_1 + 0x480) = uVar4;
                *(longlong *)(param_1 + 0x488) = lVar10;
                *(undefined8 ***)(param_1 + 0x490) = ppuVar11;
                *(undefined8 *)(param_1 + 0x448) = 0;
                *(undefined8 *)(param_1 + 0x450) = 8;
                *(undefined8 *)(param_1 + 0x458) = 0;
                *(undefined8 *)(param_1 + 0x4b4) = 0x100000001;
                *(undefined4 *)(param_1 + 0x4bc) = 0x3f800000;
                *(undefined1 *)(param_1 + 0x4c0) = 0;
                *(undefined4 *)(param_1 + 0x4a0) = 0;
                *(undefined8 *)(param_1 + 0x498) = 0;
                return param_1;
              }
              uStack_b8 = uStack_270;
              uStack_b0 = uStack_268;
              uStack_c0 = uStack_278;
              uStack_bc = uStack_274;
              uStack_d8 = uStack_290;
              uStack_d4 = uStack_28c;
              uStack_d0 = uStack_288;
              uStack_cc = uStack_284;
              uStack_e0 = uStack_298;
              uStack_dc = uStack_294;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14307a968,0x1a,&ppuStack_f8,&UNK_14307a6b0,&UNK_14307a9b8);
            }
            pcStack_88 = pcVar6;
            ppuStack_80 = ppuVar11;
            pbStack_118 = pbVar8;
            pdb_142dc7e2a(1,0xb);
          }
        }
      }
    }
  }
LAB_140cb7c89:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

