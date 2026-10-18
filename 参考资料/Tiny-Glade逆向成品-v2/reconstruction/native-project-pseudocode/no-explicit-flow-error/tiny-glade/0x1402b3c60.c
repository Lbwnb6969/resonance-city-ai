// VA 0x1402b3c60, PDB extent 788 bytes
// tiny_glade::mod_detection::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/mod_detection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::mod_detection::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/mod_detection.rs
   Extent: 788 */

void pdb_1402b3c60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plStack_158;
  code *pcStack_150;
  undefined8 *puStack_148;
  code *pcStack_140;
  byte *pbStack_e8;
  undefined *puStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  longlong lStack_48;
  longlong lStack_40;
  byte *pbStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 == '\0') {
    uVar1 = *param_1;
    uVar5 = param_2;
    uStack_68 = pdb_140f3c9d0();
    uStack_60 = (undefined4)uVar5;
    uVar4 = 1;
    pdb_140d953e0(auStack_58,1,uVar1);
    if ((lStack_48 != 0) && (2 < *_DAT_143ca8e90)) {
      lStack_40 = lStack_48;
      uStack_29 = 1;
      uStack_78 = pdb_140f3cb70(&uStack_68);
      plStack_158 = &lStack_40;
      pcStack_150 = pdb_140f72a40;
      puStack_148 = &uStack_78;
      pcStack_140 = pdb_140f72840;
      pbStack_e8 = (byte *)0x0;
      puStack_e0 = &UNK_142e674a9;
      lStack_d8 = 0x19;
      uStack_d0 = 0;
      puStack_c8 = &UNK_142e6744e;
      uStack_c0 = 0x26;
      uStack_b8 = 3;
      puStack_b0 = &UNK_142e674a9;
      uStack_a8 = 0x19;
      uStack_a0 = 0x3600000001;
      puStack_98 = &UNK_142e67490;
      ppuStack_90 = &plStack_158;
      uStack_29 = 1;
      uStack_70 = uVar4;
      pdb_140f332f0(&uStack_2a,&pbStack_e8);
    }
    lStack_d8 = lStack_48;
    uStack_29 = 0;
    pdb_140d8f7c0(&pbStack_e8,1,uVar1);
  }
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x18,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pbVar2[0] = 1;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  pbVar2[8] = 1;
  pbVar2[9] = 0;
  pbVar2[10] = 0;
  pbVar2[0xb] = 0;
  pbVar2[0xc] = 0;
  pbVar2[0xd] = 0;
  pbVar2[0xe] = 0;
  pbVar2[0xf] = 0;
  pbVar2[0x10] = 0;
  pbStack_e8 = pbVar2;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x18,8);
  if (pbVar3 == (byte *)0x0) {
    pbStack_38 = pbVar2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pbVar3[0] = 1;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  pbVar3[8] = 1;
  pbVar3[9] = 0;
  pbVar3[10] = 0;
  pbVar3[0xb] = 0;
  pbVar3[0xc] = 0;
  pbVar3[0xd] = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  pbVar3[0x10] = 0;
  pdb_14027f2e0(param_2,pbVar2,pbVar3);
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x30,8);
  if (pbVar2 != (byte *)0x0) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[0x20] = 2;
    pdb_140ed3cd0(&pbStack_e8,pbVar2,&UNK_142f6b5b8);
    pdb_140671df0(&plStack_158,&pbStack_e8);
    pdb_1405e8a80(param_2,&plStack_158);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x30);
}

