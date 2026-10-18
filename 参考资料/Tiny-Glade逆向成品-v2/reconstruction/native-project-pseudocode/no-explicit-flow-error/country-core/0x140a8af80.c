// VA 0x140a8af80, PDB extent 508 bytes
// country_core::resources::audio_resources::AudioCoreInner::set_vca_volume
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioCoreInner::set_vca_volume
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 508 */

void pdb_140a8af80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
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
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined4 **ppuStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 *puStack_48;
  code *pcStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14180b000(&uStack_120,param_1,param_2,param_3);
  if (CONCAT44(uStack_11c,uStack_120) == -0x7ffffffffffffffc) {
    pdb_141809c90(&uStack_88,&puStack_48,param_4);
    if (CONCAT44(uStack_84,uStack_88) != -0x7ffffffffffffffc) {
      uStack_b8 = uStack_58;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&uStack_e8,&UNK_143044530,&UNK_143043eb0);
    }
  }
  else {
    uStack_58 = uStack_f0;
    uStack_68 = uStack_100;
    uStack_64 = uStack_fc;
    uStack_60 = uStack_f8;
    uStack_5c = uStack_f4;
    uStack_78 = uStack_110;
    uStack_74 = uStack_10c;
    uStack_70 = uStack_108;
    uStack_6c = uStack_104;
    uStack_88 = uStack_120;
    uStack_84 = uStack_11c;
    uStack_80 = uStack_118;
    uStack_7c = uStack_114;
    if (*_DAT_143ca8e90 != 0) {
      puStack_48 = &uStack_88;
      pcStack_40 = pdb_140a8f740;
      uStack_e8 = 0;
      puStack_e0 = &UNK_143043e7a;
      uStack_d8 = 0x28;
      uStack_d0 = 0;
      puStack_c8 = &UNK_143043d10;
      uStack_c0 = 0x34;
      uStack_b8 = 1;
      puStack_b0 = &UNK_143043e7a;
      uStack_a8 = 0x28;
      uStack_a0 = 0x10600000001;
      puStack_98 = &UNK_143043bc8;
      ppuStack_90 = &puStack_48;
      pdb_140f332f0(&uStack_31,&uStack_e8);
    }
    pdb_140a8f580(&uStack_88);
  }
  return;
}

