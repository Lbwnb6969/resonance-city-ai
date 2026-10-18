// VA 0x140a8b180, PDB extent 556 bytes
// country_core::resources::audio_resources::AudioCoreInner::instantiate_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioCoreInner::instantiate_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 556 */

undefined8 *
pdb_140a8b180(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 uVar4;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  undefined8 auStack_e8 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  code *pcStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  pdb_14180b260(&puStack_c8);
  if (puStack_c8 == (undefined *)0x8000000000000004) {
    auStack_e8[0] = uStack_c0;
    pdb_141809280(&uStack_130,auStack_e8);
    if (CONCAT44(uStack_12c,uStack_130) == -0x7ffffffffffffffc) {
      uVar4 = param_4 == 0;
      if (-1 < (longlong)param_4) goto LAB_140a8b204;
      uVar3 = 0;
      while( true ) {
        uVar4 = 1;
        pdb_142dc7e2a(uVar3,param_4);
LAB_140a8b204:
        uVar1 = CONCAT44(uStack_124,uStack_128);
        if ((bool)uVar4) break;
        pdb_14007ee60();
        uVar3 = 1;
        pbVar2 = pub_1406abab0(param_4,1);
        if (pbVar2 != (byte *)0x0) {
          pub_142e32760(pbVar2,param_3,param_4);
LAB_140a8b240:
          *param_1 = 1;
          param_1[1] = uVar1;
          param_1[2] = param_4;
          param_1[3] = pbVar2;
          param_1[4] = param_4;
          *(undefined1 *)(param_1 + 5) = 2;
          return param_1;
        }
      }
      pbVar2 = (byte *)0x1;
      goto LAB_140a8b240;
    }
    uStack_58 = uStack_100;
    uStack_68 = uStack_110;
    uStack_64 = uStack_10c;
    uStack_60 = uStack_108;
    uStack_5c = uStack_104;
    uStack_78 = uStack_120;
    uStack_74 = uStack_11c;
    uStack_70 = uStack_118;
    uStack_6c = uStack_114;
    uStack_b8 = pdb_142d8ef60(&puStack_88);
    puStack_c8 = &UNK_143043ed2;
    uStack_c0 = 0xf;
    puStack_88 = (undefined8 *)0x3;
    uVar3 = pdb_142dea2a0(&puStack_c8,&puStack_88);
  }
  else {
    uStack_58 = uStack_98;
    uStack_68 = uStack_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    uStack_78 = (undefined4)uStack_b8;
    uStack_74 = uStack_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    uVar3 = pdb_142d8ef60(&puStack_88);
    puStack_88 = &uStack_f8;
    pcStack_80 = pdb_1402ed420;
    uStack_41 = 1;
    uStack_d0 = uVar3;
    pdb_140f60760(auStack_e8,&UNK_1433273b1,&puStack_88);
    uStack_b8 = uStack_d8;
    puStack_88 = (undefined8 *)0x3;
    uStack_41 = 0;
    uStack_b0 = uVar3;
    uVar3 = pdb_142de9850(&puStack_c8,&puStack_88);
  }
  param_1[1] = uVar3;
  *param_1 = 2;
  return param_1;
}

