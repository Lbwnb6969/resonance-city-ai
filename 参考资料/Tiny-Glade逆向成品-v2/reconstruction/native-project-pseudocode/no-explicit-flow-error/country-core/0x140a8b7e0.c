// VA 0x140a8b7e0, PDB extent 371 bytes
// country_core::resources::audio_resources::Bank::load_sample_data
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::audio_resources::Bank::load_sample_data
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 371 */

void pdb_140a8b7e0(char *param_1)

{
  char *pcStack_c0;
  code *pcStack_b8;
  undefined8 uStack_90;
  char *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  char **ppcStack_30;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143044200);
  }
  if (4 < *_DAT_143ca8e90) {
    pcStack_c0 = param_1 + 0x10;
    pcStack_b8 = pdb_140f58250;
    pcStack_88 = (char *)0x0;
    pcStack_80 = (code *)&UNK_143043e7a;
    uStack_78 = 0x28;
    uStack_70 = 0;
    puStack_68 = &UNK_143043d10;
    uStack_60 = 0x34;
    uStack_58 = 5;
    puStack_50 = &UNK_143043e7a;
    uStack_48 = 0x28;
    uStack_40 = 0x3300000001;
    puStack_38 = &UNK_143044218;
    ppcStack_30 = &pcStack_c0;
    pdb_140f332f0(&uStack_19,&pcStack_88);
  }
  pdb_14180a220(&pcStack_c0,param_1 + 8);
  if (pcStack_c0 == (char *)0x8000000000000004) {
    return;
  }
  uStack_58 = uStack_90;
  pcStack_88 = pcStack_c0;
  pcStack_80 = pcStack_b8;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14304423c,0x10,&pcStack_88,&UNK_143044530,&UNK_143044250);
}

