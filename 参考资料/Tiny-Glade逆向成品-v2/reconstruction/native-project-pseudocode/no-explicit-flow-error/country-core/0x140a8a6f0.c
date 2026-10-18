// VA 0x140a8a6f0, PDB extent 357 bytes
// country_core::resources::audio_resources::AudioInstance::start_if_not_playing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioInstance::start_if_not_playing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 357 */

void pdb_140a8a6f0(int *param_1)

{
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_1 == 1) {
    pdb_141808580(&uStack_58,param_1 + 2);
    if (CONCAT44(uStack_54,uStack_58) != -0x7ffffffffffffffc) {
      uStack_68 = uStack_28;
      uStack_78 = uStack_38;
      uStack_74 = uStack_34;
      uStack_70 = uStack_30;
      uStack_6c = uStack_2c;
      uStack_88 = uStack_48;
      uStack_84 = uStack_44;
      uStack_80 = uStack_40;
      uStack_7c = uStack_3c;
      uStack_98 = uStack_58;
      uStack_94 = uStack_54;
      uStack_90 = uStack_50;
      uStack_8c = uStack_4c;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&uStack_98,&UNK_143044530,&UNK_143043d60);
    }
    if ((0xbU >> (uStack_50 & 0x1f) & 1) == 0) {
      pdb_141808ec0(&uStack_58,param_1 + 2);
      if (CONCAT44(uStack_54,uStack_58) != -0x7ffffffffffffffc) {
        uStack_68 = uStack_28;
        uStack_78 = uStack_38;
        uStack_74 = uStack_34;
        uStack_70 = uStack_30;
        uStack_6c = uStack_2c;
        uStack_88 = uStack_48;
        uStack_84 = uStack_44;
        uStack_80 = uStack_40;
        uStack_7c = uStack_3c;
        uStack_98 = uStack_58;
        uStack_94 = uStack_54;
        uStack_90 = uStack_50;
        uStack_8c = uStack_4c;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143044570,0x2b,&uStack_98,&UNK_143044530,&UNK_143043d78);
      }
    }
  }
  return;
}

