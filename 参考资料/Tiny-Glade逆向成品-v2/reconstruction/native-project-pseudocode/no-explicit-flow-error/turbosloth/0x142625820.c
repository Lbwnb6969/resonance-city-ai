// VA 0x142625820, PDB extent 1132 bytes
// turbosloth::store::AssetStore::create<ref$<std::path::PathBuf> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::AssetStore::create<ref$<std::path::PathBuf> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1132 */

undefined8 pdb_142625820(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  longlong lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  plVar5 = (longlong *)pdb_14008d710(0);
  if (plVar5 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_143635500);
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_50 = (undefined4)*plVar5;
    uStack_4c = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_48 = (undefined4)plVar5[1];
    uStack_44 = *(undefined4 *)((longlong)plVar5 + 0xc);
    *plVar5 = *plVar5 + 1;
    uVar4 = _UNK_143635488;
    uVar3 = _DAT_143635480;
    uVar2 = _UNK_143635478;
    uVar6 = _DAT_143635470;
    uStack_60 = _DAT_143635480;
    uStack_58 = _UNK_143635488;
    uStack_70 = _DAT_143635470;
    uStack_68 = _UNK_143635478;
    plVar5 = (longlong *)pdb_14008d710(0);
    if (plVar5 != (longlong *)0x0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_90 = (undefined4)*plVar5;
      uStack_8c = *(undefined4 *)((longlong)plVar5 + 4);
      uStack_88 = (undefined4)plVar5[1];
      uStack_84 = *(undefined4 *)((longlong)plVar5 + 0xc);
      *plVar5 = *plVar5 + 1;
      uStack_a0 = uVar3;
      uStack_98 = uVar4;
      uStack_b0 = uVar6;
      uStack_a8 = uVar2;
      plVar5 = (longlong *)pdb_14008d710(0);
      if (plVar5 != (longlong *)0x0) {
        uStack_100 = 0;
        uStack_f8 = uStack_f8 & 0xffffff00;
        uStack_d0 = (undefined4)*plVar5;
        uStack_cc = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_c8 = (undefined4)plVar5[1];
        uStack_c4 = *(undefined4 *)((longlong)plVar5 + 0xc);
        *plVar5 = *plVar5 + 1;
        uStack_e0 = uVar3;
        uStack_d8 = uVar4;
        uStack_f0 = uVar6;
        uStack_e8 = uVar2;
        pdb_141c35990(&lStack_190,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
        if (SBORROW8(0,lStack_190)) {
          pdb_141ca9900(&uStack_b0,&uStack_90,0x18,0x10);
          pdb_141ca9cc0(&uStack_70,&uStack_50,0x20,0x10);
          uVar6 = 1;
        }
        else {
          uStack_260 = uStack_110;
          uStack_258 = uStack_108;
          uStack_270 = uStack_120;
          uStack_268 = uStack_118;
          uStack_280 = uStack_130;
          uStack_278 = uStack_128;
          uStack_290 = uStack_140;
          uStack_288 = uStack_138;
          uStack_2a0 = uStack_150;
          uStack_298 = uStack_148;
          uStack_2b0 = uStack_160;
          uStack_2a8 = uStack_158;
          uStack_2c0 = uStack_170;
          uStack_2b8 = uStack_168;
          uStack_2d0 = uStack_180;
          uStack_2c8 = uStack_178;
          uStack_248 = CONCAT71(uStack_77,uStack_78);
          uStack_220 = CONCAT44(uStack_4c,uStack_50);
          uStack_218 = CONCAT44(uStack_44,uStack_48);
          uStack_250 = uStack_80;
          uStack_240 = uStack_70;
          uStack_238 = uStack_68;
          uStack_230 = uStack_60;
          uStack_228 = uStack_58;
          uStack_208 = CONCAT71(uStack_b7,uStack_b8);
          uStack_1e0 = CONCAT44(uStack_8c,uStack_90);
          uStack_1d8 = CONCAT44(uStack_84,uStack_88);
          uStack_1f0 = uStack_a0;
          uStack_1e8 = uStack_98;
          uStack_200 = uStack_b0;
          uStack_1f8 = uStack_a8;
          uStack_210 = uStack_c0;
          uStack_1a0 = uStack_d0;
          uStack_19c = uStack_cc;
          uStack_198 = uStack_c8;
          uStack_194 = uStack_c4;
          uStack_1b0 = (undefined4)uStack_e0;
          uStack_1ac = uStack_e0._4_4_;
          uStack_1a8 = (undefined4)uStack_d8;
          uStack_1a4 = uStack_d8._4_4_;
          uStack_1c0 = (undefined4)uStack_f0;
          uStack_1bc = uStack_f0._4_4_;
          uStack_1b8 = (undefined4)uStack_e8;
          uStack_1b4 = uStack_e8._4_4_;
          uStack_1d0 = (undefined4)uStack_100;
          uStack_1cc = uStack_100._4_4_;
          uStack_1c8 = uStack_f8;
          uStack_1c4 = uStack_f4;
          uStack_2f0 = 1;
          uStack_2e8 = 1;
          lStack_2e0 = lStack_190;
          uStack_2d8 = uStack_188;
          pdb_14007ee60(-lStack_190);
          pbVar7 = pub_1406abab0(0x160,8);
          if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x160);
          }
          pub_142e32760(pbVar7,&uStack_2f0,0x160);
          uVar6 = 0;
        }
        return uVar6;
      }
      pdb_142dc7890(&UNK_143635500);
      goto LAB_142625b1a;
    }
  }
  pdb_142dc7890(&UNK_143635500);
LAB_142625b1a:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

