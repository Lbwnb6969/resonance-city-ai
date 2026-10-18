// VA 0x140aee960, PDB extent 2256 bytes
// country_core::systems::audio::music::music_system::music_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::music::music_system::music_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_system.rs
   Extent: 2256 */

void pdb_140aee960(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong arg0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  ulonglong uStack_3f8;
  byte *pbStack_3f0;
  ulonglong uStack_3e8;
  undefined4 uStack_3e0;
  undefined1 uStack_3dc;
  undefined2 uStack_3db;
  undefined1 uStack_3d9;
  undefined8 uStack_3d8;
  longlong lStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong lStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  undefined4 uStack_2b0;
  undefined1 uStack_2ac;
  undefined2 uStack_2ab;
  char cStack_2a9;
  ulonglong uStack_2a8;
  byte *pbStack_2a0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined1 uStack_b0;
  undefined4 uStack_af;
  undefined2 uStack_ab;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined2 uStack_4b;
  char cStack_49;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  pdb_140a39920(&lStack_2d8);
  pbVar7 = pbStack_2b8;
  arg0 = CONCAT17(cStack_2a9,CONCAT25(uStack_2ab,CONCAT14(uStack_2ac,uStack_2b0)));
  if (*plVar1 == 0) {
    if (cStack_2a9 < '\0') {
      uVar8 = 0;
LAB_140aeea0e:
      pdb_142dc7e2a(uVar8,arg0);
      goto LAB_140aeefdc;
    }
    if (arg0 == 0) {
      pbVar6 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar8 = 1;
      pbVar6 = pub_1406abab0(arg0,1);
      if (pbVar6 == (byte *)0x0) goto LAB_140aeea0e;
      pub_142e32760(pbVar6,pbVar7,arg0);
    }
    lStack_408 = 0;
    uStack_3e0 = CONCAT31(uStack_3e0._1_3_,2);
    uStack_3f8 = arg0;
    pbStack_3f0 = pbVar6;
    uStack_3e8 = arg0;
  }
  else {
    pdb_140a8b180(&lStack_408,*plVar1 + 0x10,pbStack_2b8,arg0);
    if ((int)lStack_408 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143050468,0x2b,&uStack_78,&UNK_143050448,&UNK_143050350);
    }
  }
  uStack_a0 = CONCAT44(uStack_3fc,uStack_400);
  uStack_88 = uStack_3e8;
  uStack_80 = uStack_3e0;
  uStack_7c = uStack_3dc;
  uStack_7b = uStack_3db;
  uStack_79 = uStack_3d9;
  uStack_98 = uStack_3f8;
  uStack_90 = pbStack_3f0;
  uStack_a8 = lStack_408;
  pbVar6 = (byte *)CONCAT44(uStack_2cc,uStack_2d0);
  if (lStack_2c8 != 0) {
    pbVar9 = pbVar6 + 8;
    lVar10 = lStack_2c8;
    do {
      if (*(ulonglong *)(pbVar9 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar9,*(ulonglong *)(pbVar9 + -8),1);
      }
      pbVar9 = pbVar9 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (lStack_2d8 != 0) {
    pub_1406abac0(pbVar6,lStack_2d8 * 0x18,8);
  }
  if (pbStack_2c0 != (byte *)0x0) {
    pub_1406abac0(pbVar7,(ulonglong)pbStack_2c0,1);
  }
  if ((!SBORROW8(0,uStack_2a8)) && (uStack_2a8 != 0)) {
    pub_1406abac0(pbStack_2a0,uStack_2a8,1);
  }
  if (uStack_a8 == 1) {
    uStack_41 = 1;
    pdb_141808ec0(&lStack_408,&uStack_a0);
    if (lStack_408 != -0x7ffffffffffffffc) {
      uStack_2a8 = uStack_3d8;
      uStack_2b0 = uStack_3e0;
      pbStack_2c0 = pbStack_3f0;
      lStack_2d8 = lStack_408;
      uStack_2d0 = uStack_400;
      uStack_2cc = uStack_3fc;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_2d8,&UNK_143044530,&UNK_143043dc0);
    }
  }
  uStack_dc = CONCAT13(uStack_79,CONCAT21(uStack_7b,uStack_7c));
  uStack_e8 = (undefined4)uStack_88;
  uStack_e4 = uStack_88._4_4_;
  uStack_e0 = uStack_80;
  uStack_f8 = (undefined4)uStack_98;
  uStack_f4 = uStack_98._4_4_;
  uStack_f0 = (undefined4)uStack_90;
  uStack_ec = uStack_90._4_4_;
  uStack_108 = (undefined4)uStack_a8;
  uStack_104 = uStack_a8._4_4_;
  uStack_100 = (undefined4)uStack_a0;
  uStack_fc = uStack_a0._4_4_;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0x1d,1);
    uVar8 = _UNK_14305037d;
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x1d);
      goto LAB_140aeefdc;
    }
    *(ulonglong *)(pbVar7 + 0xd) = CONCAT53(_UNK_143050378,_DAT_143050375);
    *(undefined8 *)(pbVar7 + 0x15) = uVar8;
    uVar5 = _UNK_143050374;
    uVar4 = _UNK_143050370;
    uVar3 = _UNK_14305036c;
    *(undefined4 *)pbVar7 = _DAT_143050368;
    *(undefined4 *)(pbVar7 + 4) = uVar3;
    *(undefined4 *)(pbVar7 + 8) = uVar4;
    *(undefined4 *)(pbVar7 + 0xc) = uVar5;
    lStack_2d8 = 0;
    lStack_2c8 = 0x1d;
    pbStack_2b8 = (byte *)0x1d;
    uStack_2b0 = CONCAT31(uStack_2b0._1_3_,2);
    pbStack_2c0 = pbVar7;
  }
  else {
    pdb_140a8b180(&lStack_2d8,*plVar1 + 0x10,&DAT_143050368,0x1d);
    if ((int)lStack_2d8 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143050468,0x2b,&lStack_408,&UNK_143050448,&UNK_143050388);
    }
  }
  uStack_d0 = CONCAT44(uStack_2cc,uStack_2d0);
  pbStack_b8 = pbStack_2b8;
  uStack_b0 = (undefined1)uStack_2b0;
  uStack_af = CONCAT13(uStack_2ac,uStack_2b0._1_3_);
  uStack_ab = uStack_2ab;
  cStack_a9 = cStack_2a9;
  lStack_c8 = lStack_2c8;
  pbStack_c0 = pbStack_2c0;
  lStack_d8 = lStack_2d8;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0x17,1);
    uVar5 = _UNK_1430503ac;
    uVar4 = _UNK_1430503a8;
    uVar3 = _UNK_1430503a4;
    if (pbVar7 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x17);
LAB_140aeefdc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *(undefined4 *)pbVar7 = _DAT_1430503a0;
    *(undefined4 *)(pbVar7 + 4) = uVar3;
    *(undefined4 *)(pbVar7 + 8) = uVar4;
    *(undefined4 *)(pbVar7 + 0xc) = uVar5;
    pbVar7[0xf] = 0x65;
    pbVar7[0x10] = 0x50;
    pbVar7[0x11] = 0x72;
    pbVar7[0x12] = 0x65;
    pbVar7[0x13] = 0x76;
    pbVar7[0x14] = 0x69;
    pbVar7[0x15] = 0x65;
    pbVar7[0x16] = 0x77;
    lStack_2d8 = 0;
    lStack_2c8 = 0x17;
    pbStack_2b8 = (byte *)0x17;
    uStack_2b0 = CONCAT31(uStack_2b0._1_3_,2);
    pbStack_2c0 = pbVar7;
  }
  else {
    pdb_140a8b180(&lStack_2d8,*plVar1 + 0x10,&DAT_1430503a0,0x17);
    if ((int)lStack_2d8 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143050468,0x2b,&lStack_408,&UNK_143050448,&UNK_1430503b8);
    }
  }
  uStack_70 = uStack_2d0;
  uStack_6c = uStack_2cc;
  uStack_58 = pbStack_2b8;
  uStack_50 = uStack_2b0;
  uStack_4c = uStack_2ac;
  uStack_4b = uStack_2ab;
  cStack_49 = cStack_2a9;
  uStack_68 = lStack_2c8;
  uStack_60 = pbStack_2c0;
  uStack_78 = lStack_2d8;
  pdb_140ad8210(&lStack_408,plVar1);
  pub_142e32760(&lStack_2d8,&lStack_408,0x130);
  uStack_1a8 = CONCAT44(uStack_104,uStack_108);
  uStack_1a0 = CONCAT44(uStack_fc,uStack_100);
  uStack_198 = CONCAT44(uStack_f4,uStack_f8);
  uStack_190 = CONCAT44(uStack_ec,uStack_f0);
  uStack_188 = CONCAT44(uStack_e4,uStack_e8);
  uStack_180 = CONCAT44(uStack_dc,uStack_e0);
  uStack_10c = 5;
  uStack_150 = CONCAT17(cStack_a9,CONCAT25(uStack_ab,CONCAT41(uStack_af,uStack_b0)));
  lStack_178 = lStack_d8;
  uStack_170 = uStack_d0;
  lStack_168 = lStack_c8;
  pbStack_160 = pbStack_c0;
  pbStack_158 = pbStack_b8;
  uStack_11c = CONCAT13(cStack_49,CONCAT21(uStack_4b,uStack_4c));
  uStack_148 = (undefined4)uStack_78;
  uStack_144 = uStack_78._4_4_;
  uStack_140 = uStack_70;
  uStack_13c = uStack_6c;
  uStack_138 = (undefined4)uStack_68;
  uStack_134 = uStack_68._4_4_;
  uStack_130 = (undefined4)uStack_60;
  uStack_12c = uStack_60._4_4_;
  uStack_128 = (undefined4)uStack_58;
  uStack_124 = uStack_58._4_4_;
  uStack_120 = uStack_50;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_41 = 0;
  pdb_141618ca0(param_2,&lStack_2d8,&UNK_1430503d0);
  return;
}

