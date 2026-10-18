// VA 0x1400ad930, PDB extent 1270 bytes
// tg_text::impl$7::set_text::closure$0<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::impl$7::set_text::closure$0<ref$<str$> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 1270 */

void pdb_1400ad930(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *arg0;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
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
  byte abStack_198 [16];
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 uStack_150;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte *pbStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  byte *pbStack_60;
  undefined1 *puStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar3 = param_2[1];
  pbStack_50 = (byte *)param_2[2];
  param_2[2] = 0;
  while (pbStack_50 != (byte *)0x0) {
    lVar3 = lVar3 + 0xb0;
    pbStack_50 = pbStack_50 + -1;
    puStack_58 = (undefined1 *)lVar3;
    pdb_1404c03e0();
  }
  arg0 = *(byte **)(*param_1 + 8);
  pdb_140cbb070(&uStack_1f8,arg0,*(undefined8 *)(*param_1 + 0x10));
  lStack_78 = lStack_1d8;
  uStack_70 = uStack_1d0;
  pbStack_88 = pbStack_1e8;
  uStack_80 = uStack_1e0;
  uStack_98 = uStack_1f8;
  uStack_94 = uStack_1f4;
  uStack_90 = uStack_1f0;
  uStack_8c = uStack_1ec;
  puVar1 = (undefined4 *)param_1[1];
  puStack_58 = (undefined1 *)param_1[2];
  while( true ) {
    lVar3 = pdb_140cbc4d0(&uStack_98);
    if (lVar3 == 0) {
      if (lStack_78 != 0) {
        pub_1406abac0(pbStack_88,lStack_78 * 0x18,8);
      }
      if (param_2[2] == 0) {
        uStack_e8 = *puVar1;
        uStack_e4 = puVar1[1];
        uStack_e0 = puVar1[2];
        uStack_dc = puVar1[3];
        uStack_d8 = puVar1[4];
        uStack_d4 = puVar1[5];
        uStack_d0 = puVar1[6];
        uStack_cc = puVar1[7];
        uStack_c8 = puVar1[8];
        uStack_c4 = puVar1[9];
        uStack_c0 = puVar1[10];
        uStack_bc = puVar1[0xb];
        pdb_140cb9ba0(&uStack_138,&uStack_e8);
        uStack_f0 = *puStack_58;
        pbStack_188 = (byte *)0x0;
        pbStack_180 = (byte *)0x1;
        pbStack_178 = (byte *)0x0;
        uStack_ef = 5;
        uStack_170 = 0x8000000000000000;
        uStack_150 = 0x8000000000000000;
        abStack_198[0] = 0;
        abStack_198[1] = 0;
        abStack_198[2] = 0;
        abStack_198[3] = 0;
        abStack_198[4] = 0;
        abStack_198[5] = 0;
        abStack_198[6] = 0;
        abStack_198[7] = 0;
        lVar3 = param_2[2];
        if (lVar3 == *param_2) {
          pdb_142db0dc0(param_2);
        }
        pub_142e32760(lVar3 * 0xb0 + param_2[1],abStack_198,0xb0);
        param_2[2] = lVar3 + 1;
      }
      if (((int)param_2[0x25] != 0) || (param_2[0x24] != 0)) {
        param_2[0x24] = 0;
        *(undefined4 *)(param_2 + 0x25) = 0;
        *(undefined1 *)(param_2 + 0x27) = 1;
      }
      return;
    }
    if ((longlong)arg0 < 0) break;
    pbStack_60 = arg0;
    if (arg0 == (byte *)0x0) {
      pbStack_50 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      pbStack_50 = pub_1406abab0((ulonglong)arg0,1);
      if (pbStack_50 == (byte *)0x0) {
        uVar4 = 1;
        pbStack_50 = arg0;
        goto LAB_1400adb58;
      }
      pub_142e32760(pbStack_50,lVar3,arg0);
    }
    uStack_1c8 = *puVar1;
    uStack_1c4 = puVar1[1];
    uStack_1c0 = puVar1[2];
    uStack_1bc = puVar1[3];
    uStack_1b8 = puVar1[4];
    uStack_1b4 = puVar1[5];
    uStack_1b0 = puVar1[6];
    uStack_1ac = puVar1[7];
    uStack_1a8 = puVar1[8];
    uStack_1a4 = puVar1[9];
    uStack_1a0 = puVar1[10];
    uStack_19c = puVar1[0xb];
    pdb_140cb9ba0(&uStack_e8,&uStack_1c8);
    uStack_f0 = *puStack_58;
    uStack_f8 = uStack_a8;
    uStack_108 = uStack_b8;
    uStack_104 = uStack_b4;
    uStack_100 = uStack_b0;
    uStack_fc = uStack_ac;
    uStack_118 = uStack_c8;
    uStack_114 = uStack_c4;
    uStack_110 = uStack_c0;
    uStack_10c = uStack_bc;
    uStack_128 = uStack_d8;
    uStack_124 = uStack_d4;
    uStack_120 = uStack_d0;
    uStack_11c = uStack_cc;
    uStack_138 = uStack_e8;
    uStack_134 = uStack_e4;
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    pbStack_188 = pbStack_60;
    pbStack_180 = pbStack_50;
    pbStack_178 = pbStack_60;
    uStack_ef = 5;
    uStack_170 = 0x8000000000000000;
    uStack_150 = 0x8000000000000000;
    abStack_198[0] = 0;
    abStack_198[1] = 0;
    abStack_198[2] = 0;
    abStack_198[3] = 0;
    abStack_198[4] = 0;
    abStack_198[5] = 0;
    abStack_198[6] = 0;
    abStack_198[7] = 0;
    lVar3 = param_2[2];
    if (lVar3 == *param_2) {
      pdb_142db0dc0(param_2);
    }
    arg0 = abStack_198;
    pub_142e32760(lVar3 * 0xb0 + param_2[1],abStack_198,0xb0);
    param_2[2] = lVar3 + 1;
  }
  uVar4 = 0;
LAB_1400adb58:
  pdb_142dc7e2a(uVar4,pbStack_50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

