// VA 0x140a8e730, PDB extent 1451 bytes
// country_core::resources::audio_resources::impl$10::set_parameter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::audio_resources::impl$10::set_parameter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 1451 */

void pdb_140a8e730(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
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
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  int *piStack_b8;
  code *pcStack_b0;
  undefined4 *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  code *pcStack_60;
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
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  pdb_141808b10(&uStack_170,param_1 + 2,param_2,param_3,param_4,0);
  if (CONCAT44(uStack_16c,uStack_170) == -0x7ffffffffffffffc) {
    return;
  }
  uStack_108 = uStack_140;
  uStack_118 = uStack_150;
  uStack_114 = uStack_14c;
  uStack_110 = uStack_148;
  uStack_10c = uStack_144;
  uStack_128 = uStack_160;
  uStack_124 = uStack_15c;
  uStack_120 = uStack_158;
  uStack_11c = uStack_154;
  uStack_138 = uStack_170;
  uStack_134 = uStack_16c;
  uStack_130 = uStack_168;
  uStack_12c = uStack_164;
  piStack_b8 = param_1 + 4;
  puStack_c8 = &uStack_f8;
  pcStack_c0 = pdb_1402ed420;
  pcStack_b0 = pdb_140094770;
  puStack_a8 = &uStack_138;
  pcStack_a0 = pdb_140a8f740;
  pdb_140f60760(&uStack_58,&UNK_1430443b8,&puStack_c8);
  uStack_e8 = (undefined4)uStack_58;
  uStack_e4 = uStack_58._4_4_;
  uStack_e0 = (undefined4)uStack_50;
  uStack_dc = uStack_50._4_4_;
  uStack_d8 = uStack_48;
  if (_DAT_143ca43b0 != 0) {
    uStack_58 = (code *)CONCAT71(uStack_58._1_7_,1);
    puStack_c8 = &uStack_58;
    pdb_142dc7060(&DAT_143ca43b0,0,&puStack_c8,&UNK_143044438,&UNK_1430443f8);
  }
  pdb_1400f0d40(&puStack_c8,_DAT_143cb2ce0);
  if ((int)puStack_c8 == 1) {
    uStack_58 = pcStack_c0;
    uStack_50 = (code *)CONCAT71(uStack_50._1_7_,(char)piStack_b8);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143043e50,0x13,&uStack_58,&UNK_143044550,&UNK_1430443f8);
  }
  pcStack_60 = pcStack_c0;
  cStack_31 = (char)piStack_b8;
  pdb_14007ee60();
  pcVar5 = (code *)pub_1406abab0(0xf,1);
  if (pcVar5 == (code *)0x0) {
    pdb_142dc7e2a(1,0xf);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)(pcVar5 + 7) = 0x2928202168746170;
  *(undefined8 *)pcVar5 = 0x705f656c75646f6d;
  puStack_c8 = (undefined8 *)0xf;
  piStack_b8 = (int *)0xf;
  pcStack_c0 = pcVar5;
  pdb_142d7f1b0(&puStack_c8,0xf,0x17,1,1);
  uVar3 = uStack_d8;
  uVar2 = _UNK_143043e6b;
  *(undefined8 *)(pcStack_c0 + (longlong)piStack_b8) = _DAT_143043e63;
  *(undefined8 *)(pcStack_c0 + (longlong)piStack_b8 + 8) = uVar2;
  *(undefined8 *)(pcStack_c0 + (longlong)piStack_b8 + 0xf) = 0x6e726157203a3a20;
  uVar6 = (longlong)piStack_b8 + 0x17;
  uStack_58 = (code *)puStack_c8;
  uStack_50 = pcStack_c0;
  uVar2 = CONCAT44(uStack_dc,uStack_e0);
  uStack_48 = uVar6;
  if ((longlong)puStack_c8 - uVar6 < uStack_d8) {
    pdb_142d7f1b0(&uStack_58,uVar6,uStack_d8,1,1);
  }
  else if (uStack_d8 == 0) goto LAB_140a8e941;
  uVar6 = uStack_48;
  pub_142e32760(uStack_50 + uStack_48,uVar2,uVar3);
LAB_140a8e941:
  piStack_b8 = (int *)(uVar6 + uVar3);
  puStack_c8 = (undefined8 *)uStack_58;
  pcStack_c0 = uStack_50;
  uStack_48 = (ulonglong)piStack_b8;
  cVar4 = pdb_14192b470(pcStack_60 + 8,&puStack_c8);
  if ((cVar4 == '\0') && (1 < *_DAT_143ca8e90)) {
    uStack_58 = (code *)&uStack_e8;
    uStack_50 = pdb_140001020;
    puStack_c8 = (undefined8 *)0x0;
    pcStack_c0 = (code *)&UNK_143043e7a;
    piStack_b8 = (int *)0x28;
    pcStack_b0 = (code *)0x0;
    puStack_a8 = (undefined4 *)&UNK_143043d10;
    pcStack_a0 = (code *)0x34;
    uStack_98 = 2;
    puStack_90 = &UNK_143043e7a;
    uStack_88 = 0x28;
    uStack_80 = 0x27b00000001;
    puStack_78 = &UNK_143043bc8;
    puStack_70 = &uStack_58;
    pdb_140f332f0(&uStack_32,&puStack_c8);
  }
  pcVar5 = pcStack_60;
  if (((cStack_31 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = pdb_142dc79e0(), cVar4 == '\0')) {
    pcVar5[1] = (code)0x1;
  }
  LOCK();
  cVar1 = *pcVar5;
  *pcVar5 = (code)0x0;
  UNLOCK();
  if (cVar1 == (code)0x2) {
    pdb_142dc6ca0(pcVar5);
  }
  if (CONCAT44(uStack_e4,uStack_e8) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_dc,uStack_e0),CONCAT44(uStack_e4,uStack_e8),1);
  }
  pdb_140a8f580(&uStack_138);
  return;
}

