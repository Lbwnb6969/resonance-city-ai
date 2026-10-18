// VA 0x140a8e0c0, PDB extent 193 bytes
// country_core::resources::audio_resources::impl$10::set_volume
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::audio_resources::impl$10::set_volume
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 193 */

void pdb_140a8e0c0(int *param_1,undefined4 param_2)

{
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  if (*param_1 == 1) {
    pdb_141807fa0(&uStack_80,param_1 + 2,param_2);
    if (CONCAT44(uStack_7c,uStack_80) != -0x7ffffffffffffffc) {
      uStack_18 = uStack_50;
      uStack_28 = uStack_60;
      uStack_24 = uStack_5c;
      uStack_20 = uStack_58;
      uStack_1c = uStack_54;
      uStack_38 = uStack_70;
      uStack_34 = uStack_6c;
      uStack_30 = uStack_68;
      uStack_2c = uStack_64;
      uStack_48 = uStack_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      uStack_3c = uStack_74;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&uStack_48,&UNK_143044530,&UNK_143044350);
    }
  }
  return;
}

