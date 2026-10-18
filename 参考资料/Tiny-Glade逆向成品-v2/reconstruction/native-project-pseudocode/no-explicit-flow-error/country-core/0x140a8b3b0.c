// VA 0x140a8b3b0, PDB extent 784 bytes
// country_core::resources::audio_resources::AudioCoreInner::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::audio_resources::AudioCoreInner::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 784 */

void pdb_140a8b3b0(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
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
  undefined4 *puStack_f8;
  code *pcStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined4 **ppuStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_90 = param_2[3];
  fVar1 = (float)uStack_90;
  fVar2 = (float)((ulonglong)uStack_90 >> 0x20);
  fStack_88 = *(float *)(param_2 + 4);
  if (_DAT_142e37870 <= SQRT(fStack_88 * fStack_88 + fVar2 * fVar2 + fVar1 * fVar1) + _DAT_142e36f34
     ) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143043f09,0x3b,&UNK_143043f48);
  }
  fStack_84 = (float)*(undefined8 *)((longlong)param_2 + 0x24);
  fStack_80 = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x24) >> 0x20);
  fStack_7c = *(float *)((longlong)param_2 + 0x2c);
  if (_DAT_142e37870 <=
      SQRT(fStack_7c * fStack_7c + fStack_80 * fStack_80 + fStack_84 * fStack_84) + _DAT_142e36f34)
  {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143043f60,0x36,&UNK_143043f98);
  }
  if (_DAT_142e37870 <=
      (float)((uint)(fStack_88 * fStack_7c + fVar2 * fStack_80 + fVar1 * fStack_84) & _DAT_142e377e0
             )) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143043fb0,0x41,&UNK_143043ff8);
  }
  uStack_a8 = *param_2;
  puStack_a0 = (undefined *)param_2[1];
  uStack_98 = param_2[2];
  uStack_130 = 0;
  pdb_14180ab70(&uStack_e8,param_1,0,&uStack_a8,&uStack_130);
  if (CONCAT44(uStack_e4,uStack_e8) == -0x7ffffffffffffffc) {
    pdb_14180aeb0(&uStack_130,param_1);
    if (CONCAT44(uStack_12c,uStack_130) != -0x7ffffffffffffffc) {
      uStack_b8 = uStack_100;
      uStack_c8 = uStack_110;
      uStack_c4 = uStack_10c;
      uStack_c0 = uStack_108;
      uStack_bc = uStack_104;
      uStack_d8 = uStack_120;
      uStack_d4 = uStack_11c;
      uStack_d0 = uStack_118;
      uStack_cc = uStack_114;
      uStack_e8 = uStack_130;
      uStack_e4 = uStack_12c;
      uStack_e0 = uStack_128;
      uStack_dc = uStack_124;
      if (*_DAT_143ca8e90 != 0) {
        pcStack_f0 = pdb_140a8f740;
        uStack_a8 = 0;
        puStack_a0 = &UNK_143043e7a;
        uStack_98 = 0x28;
        uStack_90 = 0;
        fStack_88 = 132.23853;
        fStack_84 = 1.4013e-45;
        fStack_80 = 7.28675e-44;
        fStack_7c = 0.0;
        uStack_78 = 1;
        puStack_70 = &UNK_143043e7a;
        uStack_68 = 0x28;
        uStack_60 = 0xcb00000001;
        puStack_58 = &UNK_143044040;
        ppuStack_50 = &puStack_f8;
        puStack_f8 = &uStack_e8;
        pdb_140f332f0(&uStack_41,&uStack_a8);
      }
      pdb_140a8f580(&uStack_e8);
    }
    return;
  }
  uStack_78 = uStack_b8;
  fStack_88 = (float)uStack_c8;
  fStack_84 = (float)uStack_c4;
  fStack_80 = (float)uStack_c0;
  fStack_7c = (float)uStack_bc;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143044010,0x17,&uStack_a8,&UNK_143044530,&UNK_143044028);
}

