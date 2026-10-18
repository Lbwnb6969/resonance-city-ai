// VA 0x140a8b960, PDB extent 359 bytes
// country_core::resources::audio_resources::Bank::load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::audio_resources::Bank::load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 359 */

void pdb_140a8b960(char *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uStack_b9;
  char *pcStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  char **ppcStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  if (*param_1 != '\0') {
    return;
  }
  if (4 < *_DAT_143ca8e90) {
    pcStack_b8 = param_1 + 0x10;
    pcStack_b0 = pdb_140f58250;
    uStack_a8 = 0;
    puStack_a0 = &UNK_143043e7a;
    uStack_98 = 0x28;
    uStack_90 = 0;
    puStack_88 = &UNK_143043d10;
    uStack_80 = 0x34;
    uStack_78 = 5;
    puStack_70 = &UNK_143043e7a;
    uStack_68 = 0x28;
    uStack_60 = 0x2800000001;
    puStack_58 = &UNK_143044268;
    ppcStack_50 = &pcStack_b8;
    pdb_140f332f0(&uStack_b9,&uStack_a8);
  }
  pdb_140f69110(&uStack_a8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if ((int)uStack_a8 != 1) {
    pdb_141a16e80(&lStack_48,param_2,puStack_a0,uStack_98,0);
    if (lStack_48 == -0x7ffffffffffffffc) {
      param_1[0] = '\x01';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *(undefined8 *)(param_1 + 8) = uStack_40;
      return;
    }
    pdb_142d8eff0(param_1 + 0x10,&lStack_48);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143044280);
}

