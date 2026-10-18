// VA 0x140732b90, PDB extent 2890 bytes
// toolbar::mei::core::MeiContext::load_configs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::core::MeiContext::load_configs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 2890 */

void pdb_140732b90(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  byte *pbVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  undefined8 uVar8;
  byte **arg0;
  undefined8 auStack_2d8 [2];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  byte **ppbStack_280;
  byte **ppbStack_278;
  byte **ppbStack_270;
  code *pcStack_268;
  longlong *plStack_260;
  byte *pbStack_258;
  byte **ppbStack_250;
  byte **ppbStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  undefined4 uStack_237;
  undefined3 uStack_233;
  undefined8 uStack_230;
  undefined8 uStack_228;
  byte **ppbStack_220;
  byte **ppbStack_218;
  byte **ppbStack_210;
  code *pcStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined *puStack_1d8;
  byte ***pppbStack_1d0;
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  byte *pbStack_198;
  byte **ppbStack_190;
  byte **ppbStack_188;
  byte **ppbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined *puStack_148;
  byte ***pppbStack_140;
  byte *pbStack_138;
  undefined8 uStack_130;
  byte *pbStack_120;
  undefined8 uStack_118;
  byte ***pppbStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte ***pppbStack_b8;
  byte ***pppbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined1 uStack_61;
  byte *pbStack_60;
  byte **ppbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_f8 = (byte **)0xa;
  uStack_f0 = (byte **)0x0;
  uStack_e8 = 0xffffffff;
  uStack_e4 = 0xffffffff;
  uStack_108 = (byte **)0x0;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0x100);
  pdb_140f3e010(&ppbStack_220,&UNK_142fa6c18,9);
  uStack_240 = uStack_e8;
  uStack_23c = uStack_e4;
  ppbStack_250 = uStack_f8;
  ppbStack_248 = uStack_f0;
  plStack_260 = (longlong *)uStack_108;
  pbStack_258 = (byte *)uStack_100;
  uStack_233 = (undefined3)(uStack_e0 >> 0x28);
  ppbStack_280 = ppbStack_220;
  ppbStack_278 = ppbStack_218;
  ppbStack_270 = ppbStack_210;
  pcStack_268 = pcStack_208;
  uStack_238 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  auStack_2d8[0] = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 8;
  uStack_2a8 = 8;
  uStack_290 = 8;
  uStack_288 = 0;
  uStack_237 = uStack_e0._1_4_;
  do {
    while( true ) {
      pdb_1411b9080(&ppbStack_220,auStack_2d8);
      if ((int)ppbStack_220 == 3) {
        pdb_14117a3a0(auStack_2d8);
        return;
      }
      pub_142e32760(&uStack_108,&ppbStack_220,0x88);
      uVar2 = uStack_a0;
      if ((int)uStack_108 != 2) break;
      if (SBORROW8(0,(longlong)uStack_100)) {
        if ((!SBORROW8(0,(longlong)uStack_f8)) && (uStack_f8 != (byte **)0x0)) {
          pub_1406abac0((byte *)uStack_f0,(ulonglong)uStack_f8,1);
        }
        pdb_1404b38e0(&uStack_d8);
      }
      else {
        if (uStack_100 != (byte **)0x0) {
          pub_1406abac0((byte *)uStack_f8,(ulonglong)uStack_100,1);
        }
        if (uStack_e0 != 0) {
          pub_1406abac0(uStack_d8,uStack_e0,1);
        }
      }
    }
    pppbStack_110 = pppbStack_b0;
    pbStack_120 = pbStack_a8;
    uStack_118 = uStack_a0;
    pbStack_70 = pbStack_a8;
    uVar8 = uStack_a0;
    lVar4 = pdb_140f3ec80(pbStack_a8,uStack_a0);
    if (lVar4 != 0) {
      pdb_140f69110(&uStack_108,lVar4,uVar8);
      if (((((char)uStack_108 == '\0') && (uStack_f8 == (byte **)0x3)) &&
          (*(byte *)((longlong)uStack_100 + 2) == 0x6e && *(short *)uStack_100 == 0x6f72)) &&
         (cVar3 = pdb_140caeba0(pbStack_70,uVar2), cVar3 == '\0')) {
        pdb_1411bb0c0(&uStack_108,pbStack_70,uVar2,&UNK_142fa6c18,9);
        if (SBORROW8(0,(longlong)uStack_108)) {
          ppbStack_220 = (byte **)CONCAT71(ppbStack_220._1_7_,(undefined1)uStack_100);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142fa6190,0x2b,&ppbStack_220,&UNK_142fa61c0,&UNK_142fa6c50);
        }
        pbStack_80 = (byte *)uStack_100;
        pbStack_78 = (byte *)uStack_108;
        if ((longlong)uStack_f8 < 0) {
          uVar8 = 0;
          ppbVar6 = uStack_f8;
LAB_140733278:
          pdb_142dc7e2a(uVar8,ppbVar6);
LAB_1407333b3:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppbStack_58 = uStack_f8;
        if (uStack_f8 == (byte **)0x0) {
          pbVar5 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar8 = 1;
          pbVar5 = pub_1406abab0((ulonglong)ppbStack_58,1);
          ppbVar6 = ppbStack_58;
          if (pbVar5 == (byte *)0x0) goto LAB_140733278;
          pub_142e32760(pbVar5,pbStack_80);
        }
        ppbVar6 = ppbStack_58;
        pbStack_60 = pbVar5;
        lVar4 = pdb_1411bbb30();
        arg0 = ppbStack_58;
        if (lVar4 != 0) {
          ppbVar7 = (byte **)((byte *)((longlong)ppbVar6 + lVar4) + -(longlong)pbStack_60);
          if (((ppbVar7 <= ppbStack_58) &&
              (arg0 = ppbVar7,
              ppbVar7 < ppbStack_58 && (byte *)((longlong)ppbVar6 + lVar4) != pbStack_60)) &&
             ((char)pbStack_60[(longlong)ppbVar7] < -0x40)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_1432a8618,0x30,&UNK_1432a86b8);
          }
        }
        if (pbStack_78 != (byte *)0x0) {
          pub_1406abac0(pbStack_80,(ulonglong)pbStack_78,1);
        }
        pbStack_198 = pbStack_60;
        ppbStack_190 = arg0;
        pdb_1407378e0(&ppbStack_220,pbStack_70,uVar2);
        if ((char)ppbStack_220 != '2') {
          pbStack_a8 = (byte *)uStack_1c0;
          pppbStack_b8 = pppbStack_1d0;
          pppbStack_b0 = (byte ***)pbStack_1c8;
          uStack_c0 = puStack_1d8;
          uStack_f8 = ppbStack_210;
          uStack_f0 = (byte **)pcStack_208;
          uStack_108 = ppbStack_220;
          uStack_100 = ppbStack_218;
          ppbStack_188 = &pbStack_120;
          ppbStack_180 = (byte **)pdb_140117670;
          uStack_170 = pdb_140dd7350;
          uStack_178 = (code *)&uStack_108;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_142fa6c9b,&ppbStack_188,&UNK_142fa6ca8);
        }
        pbStack_138 = pbStack_1c8;
        uStack_130 = uStack_1c0;
        puStack_148 = puStack_1d8;
        pppbStack_140 = pppbStack_1d0;
        uStack_158 = uStack_1e8;
        uStack_154 = uStack_1e4;
        uStack_150 = uStack_1e0;
        uStack_14c = uStack_1dc;
        uStack_168 = uStack_1f8;
        uStack_164 = uStack_1f4;
        uStack_160 = uStack_1f0;
        uStack_15c = uStack_1ec;
        uStack_178 = pcStack_208;
        uStack_170 = (code *)CONCAT44(uStack_1fc,uStack_200);
        ppbStack_188 = ppbStack_218;
        ppbStack_180 = ppbStack_210;
        if (4 < *_DAT_143ca8e90) {
          ppbStack_220 = &pbStack_120;
          ppbStack_218 = (byte **)pdb_140117670;
          ppbStack_210 = &pbStack_198;
          pcStack_208 = pdb_1402ed420;
          uStack_108 = (byte **)0x0;
          uStack_100 = (byte **)&UNK_142fa6c87;
          uStack_f8 = (byte **)0x14;
          uStack_f0 = (byte **)0x0;
          uStack_e8 = 0x42fa6c21;
          uStack_e4 = 1;
          uStack_e0 = 0x28;
          uStack_d8 = (byte *)0x5;
          uStack_d0 = &UNK_142fa6c87;
          uStack_c8 = 0x14;
          uStack_c0 = (undefined *)0x19b00000001;
          pppbStack_b8 = (byte ***)&UNK_142fa6c68;
          uStack_49 = 1;
          pppbStack_b0 = &ppbStack_220;
          pdb_140f332f0(&uStack_61,&uStack_108);
        }
        if (arg0 == (byte **)0x0) {
          ppbVar6 = (byte **)0x1;
        }
        else {
          pdb_14007ee60();
          ppbVar6 = (byte **)pub_1406abab0((ulonglong)arg0,1);
          if (ppbVar6 == (byte **)0x0) {
            uStack_49 = 1;
            pdb_142dc7e2a(1,arg0);
            goto LAB_1407333b3;
          }
          pub_142e32760(ppbVar6,pbStack_60,arg0);
        }
        pbStack_a8 = pbStack_138;
        uStack_a0 = uStack_130;
        pppbStack_b8 = (byte ***)puStack_148;
        pppbStack_b0 = pppbStack_140;
        uStack_c8 = CONCAT44(uStack_154,uStack_158);
        uStack_c0 = (undefined *)CONCAT44(uStack_14c,uStack_150);
        uStack_d8 = (byte *)CONCAT44(uStack_164,uStack_168);
        uStack_d0 = (undefined *)CONCAT44(uStack_15c,uStack_160);
        uStack_e8 = SUB84(uStack_178,0);
        uStack_e4 = uStack_178._4_4_;
        uStack_e0 = (ulonglong)uStack_170;
        uStack_f8 = ppbStack_188;
        uStack_f0 = ppbStack_180;
        uStack_108 = (byte **)0x1;
        uStack_100 = (byte **)0x1;
        ppbStack_220 = arg0;
        ppbStack_218 = ppbVar6;
        ppbStack_210 = arg0;
        pdb_14007ee60();
        pbStack_78 = pub_1406abab0(0x70,8);
        if (pbStack_78 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x70);
        }
        *(byte **)(pbStack_78 + 0x60) = pbStack_a8;
        *(undefined8 *)(pbStack_78 + 0x68) = uStack_a0;
        *(byte ****)(pbStack_78 + 0x50) = pppbStack_b8;
        *(byte ****)(pbStack_78 + 0x58) = pppbStack_b0;
        *(undefined8 *)(pbStack_78 + 0x40) = uStack_c8;
        *(undefined **)(pbStack_78 + 0x48) = uStack_c0;
        *(undefined4 *)(pbStack_78 + 0x30) = (undefined4)uStack_d8;
        *(undefined4 *)(pbStack_78 + 0x34) = uStack_d8._4_4_;
        *(undefined4 *)(pbStack_78 + 0x38) = (undefined4)uStack_d0;
        *(undefined4 *)(pbStack_78 + 0x3c) = uStack_d0._4_4_;
        *(undefined4 *)(pbStack_78 + 0x20) = uStack_e8;
        *(undefined4 *)(pbStack_78 + 0x24) = uStack_e4;
        *(undefined4 *)(pbStack_78 + 0x28) = (undefined4)uStack_e0;
        *(undefined4 *)(pbStack_78 + 0x2c) = uStack_e0._4_4_;
        *(undefined4 *)(pbStack_78 + 0x10) = (undefined4)uStack_f8;
        *(undefined4 *)(pbStack_78 + 0x14) = uStack_f8._4_4_;
        *(undefined4 *)(pbStack_78 + 0x18) = (undefined4)uStack_f0;
        *(undefined4 *)(pbStack_78 + 0x1c) = uStack_f0._4_4_;
        *(int *)pbStack_78 = (int)uStack_108;
        *(undefined4 *)(pbStack_78 + 4) = uStack_108._4_4_;
        *(undefined4 *)(pbStack_78 + 8) = (undefined4)uStack_100;
        *(undefined4 *)(pbStack_78 + 0xc) = uStack_100._4_4_;
        uStack_108 = (byte **)pdb_1411a2660(param_1 + 0x240,&ppbStack_220,pbStack_78);
        if (uStack_108 != (byte **)0x0) {
          LOCK();
          *uStack_108 = (byte *)((longlong)*uStack_108 + -1);
          UNLOCK();
          if (*uStack_108 == (byte *)0x0) {
            uStack_49 = 0;
            pdb_140734c40(&uStack_108);
          }
        }
        if (ppbStack_58 != (byte **)0x0) {
          pub_1406abac0(pbStack_60,(ulonglong)ppbStack_58,1);
        }
      }
    }
    if (pppbStack_110 != (byte ***)0x0) {
      pub_1406abac0(pbStack_70,(ulonglong)pppbStack_110,1);
    }
  } while( true );
}

