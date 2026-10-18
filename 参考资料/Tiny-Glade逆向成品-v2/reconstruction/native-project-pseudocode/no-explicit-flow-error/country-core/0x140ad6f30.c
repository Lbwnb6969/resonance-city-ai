// VA 0x140ad6f30, PDB extent 1782 bytes
// country_core::systems::mod_editor::ModEditor::open_mod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::mod_editor::ModEditor::open_mod
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 1782 */

void pdb_140ad6f30(ulonglong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  ulonglong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 auStack_2d0 [2];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulonglong uStack_2a0;
  byte *pbStack_298;
  ulonglong uStack_290;
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
  undefined8 uStack_220;
  undefined8 uStack_208;
  undefined8 uStack_1f0;
  ulonglong uStack_1d0;
  ulonglong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  byte *pbStack_128;
  undefined1 uStack_120;
  undefined2 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  byte *pbStack_78;
  ulonglong *puStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_90 = param_2[1];
  pbVar9 = (byte *)param_2[2];
  uStack_61 = 1;
  puStack_80 = param_2;
  pbVar5 = (byte *)pdb_140f3ecf0();
  if (pbVar5 == (byte *)0x0) {
    pbStack_78 = (byte *)0x1;
    uVar10 = 0;
    puStack_70 = (ulonglong *)0x0;
    pbVar5 = pbVar9;
  }
  else {
    uStack_61 = 1;
    pdb_140f5fd10(&uStack_488,pbVar5,pbVar9);
    uVar10 = uStack_478;
    pbVar9 = (byte *)CONCAT44(uStack_47c,uStack_480);
    pbStack_78 = pbVar9;
    puStack_70 = (ulonglong *)uStack_488;
    if (SBORROW8(0,uStack_488)) {
      if ((longlong)uStack_478 < 0) {
        uVar11 = 0;
LAB_140ad6fbd:
        uStack_61 = 1;
        pdb_142dc7e2a(uVar11,uVar10);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uStack_478 == 0) {
        pbStack_78 = (byte *)0x1;
        uVar10 = 0;
        puStack_70 = (ulonglong *)0x0;
      }
      else {
        pdb_14007ee60();
        uVar11 = 1;
        pbVar6 = pub_1406abab0(uVar10,1);
        if (pbVar6 == (byte *)0x0) goto LAB_140ad6fbd;
        pub_142e32760(pbVar6,pbVar9,uVar10);
        pbVar5 = pbVar9;
        pbStack_78 = pbVar6;
        puStack_70 = (ulonglong *)uVar10;
      }
    }
  }
  uStack_88 = *puStack_80;
  uStack_e0 = 0;
  uStack_d8 = 8;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 8;
  uStack_e8 = 0;
  uStack_488 = 0x8000000000000006;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_110 = 8;
  plVar7 = (longlong *)pdb_140f3bda0();
  if ((char)plVar7[2] == '\x01') {
    uStack_a8 = *plVar7;
    pbVar5 = (byte *)plVar7[1];
  }
  else {
    uStack_a8 = pdb_140f4fd10();
    *plVar7 = uStack_a8;
    plVar7[1] = (longlong)pbVar5;
    *(undefined1 *)(plVar7 + 2) = 1;
  }
  *plVar7 = uStack_a8 + 1;
  uVar4 = _UNK_14304d868;
  uVar3 = _DAT_14304d860;
  uVar2 = _UNK_14304d858;
  uVar11 = _DAT_14304d850;
  uStack_b8 = _DAT_14304d860;
  uStack_b0 = _UNK_14304d868;
  uStack_c8 = (ulonglong *)_DAT_14304d850;
  uStack_c0 = (code *)_UNK_14304d858;
  uStack_a0 = pbVar5;
  plVar7 = (longlong *)pdb_140f3bda0();
  if ((char)plVar7[2] == '\x01') {
    lStack_130 = *plVar7;
    pbVar5 = (byte *)plVar7[1];
  }
  else {
    lStack_130 = pdb_140f4fd10();
    *plVar7 = lStack_130;
    plVar7[1] = (longlong)pbVar5;
    *(undefined1 *)(plVar7 + 2) = 1;
  }
  *plVar7 = lStack_130 + 1;
  uStack_2c0 = *puStack_80;
  uStack_2b8 = puStack_80[1];
  uStack_2b0 = puStack_80[2];
  uStack_2a8 = puStack_80[3];
  uStack_2a0 = (ulonglong)puStack_70;
  pbStack_298 = pbStack_78;
  uStack_238 = 0x8000000000000000;
  uStack_288 = uStack_e0;
  uStack_280 = uStack_d8;
  uStack_278 = uStack_d0;
  uStack_220 = 0x8000000000000000;
  uStack_208 = 0x8000000000000000;
  uStack_120 = 0;
  uStack_1f0 = 0x8000000000000000;
  auStack_2d0[0] = 0;
  uStack_270 = uStack_f8;
  uStack_268 = uStack_f0;
  uStack_260 = uStack_e8;
  uStack_1a0 = uStack_458;
  uStack_19c = uStack_454;
  uStack_198 = uStack_450;
  uStack_194 = uStack_44c;
  uStack_1b0 = uStack_468;
  uStack_1a8 = uStack_460;
  uStack_1c0 = uStack_478;
  uStack_1b8 = uStack_470;
  uStack_1d0 = uStack_488;
  uStack_258 = uStack_118;
  uStack_250 = uStack_110;
  uStack_248 = uStack_108;
  uStack_240 = uStack_100;
  uStack_180 = (undefined4)uStack_c8;
  uStack_17c = uStack_c8._4_4_;
  uStack_178 = (undefined4)uStack_c0;
  uStack_174 = uStack_c0._4_4_;
  uStack_170 = (undefined4)uStack_b8;
  uStack_16c = uStack_b8._4_4_;
  uStack_168 = (undefined4)uStack_b0;
  uStack_164 = uStack_b0._4_4_;
  uStack_160 = (undefined4)uStack_a8;
  uStack_15c = uStack_a8._4_4_;
  uStack_158 = (undefined4)uStack_a0;
  uStack_154 = uStack_a0._4_4_;
  uStack_11f = 0;
  uStack_188 = 1000000000;
  uStack_140 = uVar3;
  uStack_138 = uVar4;
  uStack_150 = uVar11;
  uStack_148 = uVar2;
  uStack_c0 = pdb_140001020;
  uStack_62 = 1;
  uStack_290 = uVar10;
  pbStack_128 = pbVar5;
  uStack_c8 = &uStack_2a0;
  pdb_140f60760(&uStack_488,&UNK_14304df3f,&uStack_c8);
  uStack_c8 = (ulonglong *)uStack_488;
  uStack_b8 = uStack_478;
  uStack_62 = 1;
  pdb_140acec60(auStack_2d0,&uStack_c8);
  pub_142e32760(&uStack_488,auStack_2d0,0x1b8);
  lVar8 = 2;
  if (1 < *param_1) {
    lVar8 = *param_1 - 2;
  }
  puStack_70 = param_1;
  if (lVar8 != 0) {
    if (lVar8 == 1) {
      if (param_1[1] != 0) {
        pub_1406abac0((byte *)param_1[2],param_1[1],1);
      }
      uVar10 = param_1[4];
      if ((!SBORROW8(0,uVar10)) && (uVar10 != 0)) {
        pub_1406abac0((byte *)puStack_70[5],uVar10,1);
      }
    }
    else {
      pdb_140991de0(param_1);
    }
  }
  pub_142e32760(puStack_70,&uStack_488,0x1b8);
  return;
}

