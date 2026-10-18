// VA 0x140a31bf0, PDB extent 1065 bytes
// country_core::startup::load_glade_audio::GladeAudio::load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_glade_audio::GladeAudio::load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_audio.rs
   Extent: 1065 */

longlong * pdb_140a31bf0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  longlong lStack_110;
  undefined *puStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined *puStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  byte ***pppbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  longlong lStack_b8;
  undefined *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined *puStack_98;
  longlong lStack_90;
  byte **ppbStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  ulonglong *puStack_68;
  code *pcStack_60;
  byte **ppbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puStack_68 = param_2;
  if (*_DAT_143ca8e90 < 3) {
    uVar3 = param_2[2];
    pbVar2 = (byte *)param_2[1];
  }
  else {
    pbVar2 = (byte *)param_2[1];
    uVar3 = param_2[2];
    pbStack_48 = pbVar2;
    pdb_140f3e9e0(&pbStack_c8,pbVar2,uVar3,&UNK_14303ac40,10);
    pcStack_78 = pdb_140f58250;
    lStack_128 = 0;
    pbStack_120 = &UNK_14303ac89;
    pbStack_118 = (byte *)0x27;
    lStack_110 = 0;
    puStack_108 = &UNK_14303ac55;
    lStack_100 = 0x33;
    lStack_f8 = 3;
    puStack_f0 = &UNK_14303ac89;
    lStack_e8 = 0x27;
    uStack_e0 = 0x7800000001;
    puStack_d8 = &UNK_14303ac4a;
    pppbStack_d0 = &ppbStack_80;
    ppbStack_80 = &pbStack_c8;
    pbStack_40 = pbVar2;
    pdb_140f332f0(&uStack_31,&lStack_128);
    pbVar2 = pbStack_40;
    if (pbStack_c8 != (byte *)0x0) {
      pub_1406abac0(pbStack_c0,(ulonglong)pbStack_c8,1);
      pbVar2 = pbStack_40;
    }
  }
  pbStack_48 = pbVar2;
  pdb_140f3e9e0(&pbStack_c8,pbVar2,uVar3,&UNK_14303ac40,10);
  pbStack_48 = pbVar2;
  pdb_1416432f0(&ppbStack_80,&pbStack_c8);
  if (SBORROW8(0,(longlong)ppbStack_80)) {
    pbStack_48 = pbVar2;
    pdb_140f36c40(&pcStack_78);
  }
  else {
    ppbStack_58 = ppbStack_80;
    pcStack_60 = pcStack_78;
    pbStack_40 = pbVar2;
    pdb_14164ff20(&lStack_128,pcStack_78,uStack_70);
    lVar1 = lStack_128;
    if (lStack_128 != -0x7fffffffffffffff) {
      puStack_98 = puStack_f0;
      lStack_90 = lStack_e8;
      lStack_a8 = lStack_100;
      lStack_a0 = lStack_f8;
      lStack_b8 = lStack_110;
      puStack_b0 = puStack_108;
      pbStack_c8 = pbStack_120;
      pbStack_c0 = pbStack_118;
      if (ppbStack_58 != (byte **)0x0) {
        pub_1406abac0((byte *)pcStack_60,(ulonglong)ppbStack_58,1);
      }
      if (*puStack_68 != 0) {
        pub_1406abac0(pbStack_40,*puStack_68,1);
      }
      if (!SBORROW8(0,lVar1)) {
        *param_1 = lVar1;
        param_1[1] = (longlong)pbStack_c8;
        param_1[2] = (longlong)pbStack_c0;
        param_1[3] = lStack_b8;
        param_1[4] = (longlong)puStack_b0;
        param_1[5] = lStack_a8;
        param_1[6] = lStack_a0;
        param_1[7] = (longlong)puStack_98;
        param_1[8] = lStack_90;
        return param_1;
      }
      goto LAB_140a31ee7;
    }
    pbStack_50 = pbStack_120;
    if (*(longlong *)pbStack_120 == 1) {
      pdb_1404b38e0(pbStack_120 + 8);
    }
    else if ((*(longlong *)pbStack_120 == 0) && (*(ulonglong *)(pbStack_120 + 0x10) != 0)) {
      pub_1406abac0(*(byte **)(pbStack_120 + 8),*(ulonglong *)(pbStack_120 + 0x10),1);
    }
    pub_1406abac0(pbStack_50,0x28,8);
    pbVar2 = pbStack_40;
    if (ppbStack_58 != (byte **)0x0) {
      pub_1406abac0((byte *)pcStack_60,(ulonglong)ppbStack_58,1);
    }
  }
  if (*puStack_68 != 0) {
    pub_1406abac0(pbVar2,*puStack_68,1);
  }
LAB_140a31ee7:
  pdb_140a39920(param_1);
  return param_1;
}

