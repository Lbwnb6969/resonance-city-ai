// VA 0x1409a5ed0, PDB extent 243 bytes
// country_core::resources::audio_resources::impl$13::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::audio_resources::impl$13::drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 243 */

void pdb_1409a5ed0(int *param_1)

{
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
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
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_20 = *(undefined8 *)(param_1 + 2);
  param_1[0] = 0;
  param_1[1] = 0;
  if (*param_1 == 1) {
    if ((char)param_1[10] != '\x02') {
      pdb_141808d70(&uStack_58,&uStack_20);
      if (CONCAT44(uStack_54,uStack_58) != -0x7ffffffffffffffc) {
        pdb_140985ea0(&uStack_58);
      }
    }
    pdb_141809010(&uStack_90,&uStack_20);
    if (CONCAT44(uStack_8c,uStack_90) != -0x7ffffffffffffffc) {
      uStack_28 = uStack_60;
      uStack_38 = uStack_70;
      uStack_34 = uStack_6c;
      uStack_30 = uStack_68;
      uStack_2c = uStack_64;
      uStack_48 = uStack_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      uStack_3c = uStack_74;
      uStack_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143027c00,0x2b,&uStack_58,&UNK_143027c70,&UNK_1430281b0);
    }
  }
  return;
}

