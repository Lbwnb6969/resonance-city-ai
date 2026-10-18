// VA 0x140a8e190, PDB extent 1435 bytes
// country_core::resources::audio_resources::impl$10::set_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::audio_resources::impl$10::set_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 1435 */

void pdb_140a8e190(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  char cVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
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
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  int *piStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  int *piStack_70;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  undefined1 uStack_32;
  char cStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*param_1 != 1) {
    return;
  }
  uStack_c0 = *(undefined4 *)(param_2 + 1);
  piStack_c8 = (int *)*param_2;
  uStack_bc = (undefined4)_DAT_14300b150;
  uStack_b8._0_4_ = (undefined4)((ulonglong)_DAT_14300b150 >> 0x20);
  uStack_b8._4_4_ = (undefined4)_UNK_14300b158;
  uStack_b0 = (undefined4)((ulonglong)_UNK_14300b158 >> 0x20);
  uStack_ac = _DAT_1430439a0;
  uStack_a8 = (undefined *)CONCAT44(_UNK_1430439a8,_UNK_1430439a4);
  uStack_a0 = (ulonglong)_UNK_1430439ac;
  pdb_141808400(&uStack_160,param_1 + 2,&piStack_c8);
  if (CONCAT44(uStack_15c,uStack_160) == -0x7ffffffffffffffc) {
    return;
  }
  uStack_f8 = uStack_130;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  uStack_118 = uStack_150;
  uStack_114 = uStack_14c;
  uStack_110 = uStack_148;
  uStack_10c = uStack_144;
  uStack_128 = uStack_160;
  uStack_124 = uStack_15c;
  uStack_120 = uStack_158;
  uStack_11c = uStack_154;
  piStack_c8 = param_1 + 4;
  uStack_c0 = 0x40094770;
  uStack_bc = 1;
  uStack_b8 = &uStack_128;
  uStack_b0 = 0x40a8f740;
  uStack_ac = 1;
  pdb_140f60760(&uStack_58,&UNK_143044368,&piStack_c8);
  iStack_e8 = (int)uStack_58;
  uStack_e4 = uStack_58._4_4_;
  uStack_e0 = (undefined4)uStack_50;
  uStack_dc = uStack_50._4_4_;
  uStack_d8 = uStack_48;
  if (_DAT_143ca43ac != 0) {
    uStack_58 = (int *)CONCAT71(uStack_58._1_7_,1);
    piStack_c8 = (int *)&uStack_58;
    pdb_142dc7060(&DAT_143ca43ac,0,&piStack_c8,&UNK_143044410,&UNK_1430443a0);
  }
  pdb_1400f0d40(&piStack_c8,_DAT_143cb2cd8);
  if ((int)piStack_c8 == 1) {
    uStack_58 = (int *)CONCAT44(uStack_bc,uStack_c0);
    uStack_50 = (code *)CONCAT71(uStack_50._1_7_,(char)uStack_b8);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143043e50,0x13,&uStack_58,&UNK_143044550,&UNK_1430443a0);
  }
  pcStack_60 = (char *)CONCAT44(uStack_bc,uStack_c0);
  cStack_31 = (char)uStack_b8;
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0xf,1);
  if (pbVar8 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xf);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pbVar8[7] = 0x70;
  pbVar8[8] = 0x61;
  pbVar8[9] = 0x74;
  pbVar8[10] = 0x68;
  pbVar8[0xb] = 0x21;
  pbVar8[0xc] = 0x20;
  pbVar8[0xd] = 0x28;
  pbVar8[0xe] = 0x29;
  pbVar8[0] = 0x6d;
  pbVar8[1] = 0x6f;
  pbVar8[2] = 100;
  pbVar8[3] = 0x75;
  pbVar8[4] = 0x6c;
  pbVar8[5] = 0x65;
  pbVar8[6] = 0x5f;
  pbVar8[7] = 0x70;
  piStack_c8 = (int *)0xf;
  uStack_c0 = SUB84(pbVar8,0);
  uStack_bc = (undefined4)((ulonglong)pbVar8 >> 0x20);
  uStack_b8._0_4_ = 0xf;
  uStack_b8._4_4_ = 0;
  pdb_142d7f1b0(&piStack_c8,0xf,0x17,1,1);
  uVar5 = uStack_d8;
  uVar3 = _UNK_143043e6b;
  lVar4 = CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
  puVar1 = (undefined8 *)(CONCAT44(uStack_bc,uStack_c0) + lVar4);
  *puVar1 = _DAT_143043e63;
  puVar1[1] = uVar3;
  *(undefined8 *)(CONCAT44(uStack_bc,uStack_c0) + 0xf + lVar4) = 0x6e726157203a3a20;
  uVar9 = lVar4 + 0x17;
  uStack_58 = piStack_c8;
  uStack_50 = (code *)CONCAT44(uStack_bc,uStack_c0);
  uVar3 = CONCAT44(uStack_dc,uStack_e0);
  uStack_48 = uVar9;
  if ((longlong)piStack_c8 - uVar9 < uStack_d8) {
    pdb_142d7f1b0(&uStack_58,uVar9,uStack_d8,1,1);
  }
  else if (uStack_d8 == 0) goto LAB_140a8e3a6;
  uVar9 = uStack_48;
  pub_142e32760(uStack_50 + uStack_48,uVar3,uVar5);
LAB_140a8e3a6:
  uStack_48 = uVar9 + uVar5;
  piStack_c8 = uStack_58;
  uStack_c0 = (undefined4)uStack_50;
  uStack_bc = uStack_50._4_4_;
  uStack_b8 = (undefined4 *)uStack_48;
  cVar7 = pdb_14192b470(pcStack_60 + 8,&piStack_c8);
  if ((cVar7 == '\0') && (1 < *_DAT_143ca8e90)) {
    uStack_58 = &iStack_e8;
    uStack_50 = pdb_140001020;
    piStack_c8 = (int *)0x0;
    uStack_c0 = 0x43043e7a;
    uStack_bc = 1;
    uStack_b8._0_4_ = 0x28;
    uStack_b8._4_4_ = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = &UNK_143043d10;
    uStack_a0 = 0x34;
    uStack_98 = 2;
    puStack_90 = &UNK_143043e7a;
    uStack_88 = 0x28;
    uStack_80 = 0x28d00000001;
    puStack_78 = &UNK_143043bc8;
    piStack_70 = (int *)&uStack_58;
    pdb_140f332f0(&uStack_32,&piStack_c8);
  }
  pcVar6 = pcStack_60;
  if ((cStack_31 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
    cVar7 = pdb_142dc79e0();
    if (cVar7 == '\0') {
      pcVar6[1] = '\x01';
    }
  }
  LOCK();
  cVar7 = *pcVar6;
  *pcVar6 = '\0';
  UNLOCK();
  if (cVar7 == '\x02') {
    pdb_142dc6ca0(pcVar6);
  }
  if (CONCAT44(uStack_e4,iStack_e8) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_dc,uStack_e0),CONCAT44(uStack_e4,iStack_e8),1);
  }
  pdb_140a8f580(&uStack_128);
  return;
}

