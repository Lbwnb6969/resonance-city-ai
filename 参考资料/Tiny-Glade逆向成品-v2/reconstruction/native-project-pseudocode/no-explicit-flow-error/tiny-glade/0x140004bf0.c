// VA 0x140004bf0, PDB extent 1415 bytes
// tiny_glade::load_language_library::load_language_library
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/load_language_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::load_language_library::load_language_library
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/load_language_library.rs
   Extent: 1415 */

void pdb_140004bf0(longlong param_1,undefined *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  code *pcVar2;
  byte *pbVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  ulonglong **ppuStack_80;
  ulonglong *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(7,1);
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,7);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pbVar3[3] = 0x6c;
  pbVar3[4] = 0x69;
  pbVar3[5] = 0x73;
  pbVar3[6] = 0x68;
  pbVar3[0] = 0x65;
  pbVar3[1] = 0x6e;
  pbVar3[2] = 0x67;
  pbVar3[3] = 0x6c;
  if (param_1 == 0) {
    uStack_48 = 7;
    uStack_38 = 7;
    pbStack_40 = pbVar3;
code_r0x000140004d66:
    if (*(int *)(pbStack_40 + 3) == 0x6873696c && *(int *)pbStack_40 == 0x6c676e65) {
      puVar6 = &UNK_142e332f8;
      goto LAB_140004fcd;
    }
    if (*(int *)(pbStack_40 + 3) == 0x6e61696c && *(int *)pbStack_40 == 0x6c617469) {
      puVar6 = &UNK_142e333c4;
      goto LAB_140004fcd;
    }
    if (*(int *)(pbStack_40 + 3) == 0x616e6165 && *(int *)pbStack_40 == 0x65726f6b) {
      puVar6 = &UNK_142e333ba;
      goto LAB_140004fcd;
    }
    if (*(int *)(pbStack_40 + 3) == 0x6e616973 && *(int *)pbStack_40 == 0x73737572) {
      puVar6 = &UNK_142e333ab;
      goto LAB_140004fcd;
    }
    if (*(int *)(pbStack_40 + 3) == 0x6873696e && *(int *)pbStack_40 == 0x6e617073) {
      puVar6 = &UNK_142e333a1;
      goto LAB_140004fcd;
    }
    if (*(int *)(pbStack_40 + 3) == 0x68736964 && *(int *)pbStack_40 == 0x64657773) {
      puVar6 = &UNK_142e3339c;
      goto LAB_140004fcd;
    }
    if (*(int *)(pbStack_40 + 3) == 0x6873696b && *(int *)pbStack_40 == 0x6b727574) {
      puVar6 = &UNK_142e33397;
      goto LAB_140004fcd;
    }
  }
  else {
    pbStack_58 = pbVar3;
    plVar4 = (longlong *)pdb_1406d0830(param_1);
    puVar1 = (ulonglong *)*plVar4;
    pcStack_70 = (code *)pub_142e31ee0();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (*puVar1 == 0 || SCARRY8(uVar5,1) != (longlong)*puVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puStack_78 = puVar1;
    pdb_140311650(&uStack_d8,&puStack_78);
    pbStack_50 = pbStack_d0;
    pdb_140f5e900(&uStack_48,pbStack_d0,uStack_c8);
    if (uStack_d8 != 0) {
      pub_1406abac0(pbStack_50,uStack_d8,1);
    }
    LOCK();
    *puStack_78 = *puStack_78 - 1;
    UNLOCK();
    if (*puStack_78 == 0) {
      pdb_140cb1c10(&puStack_78);
    }
    pub_1406abac0(pbStack_58,7,1);
    switch(uStack_38) {
    case 6:
      if (*(short *)(pbStack_40 + 4) == 0x6863 && *(int *)pbStack_40 == 0x6e657266) {
        puVar6 = &UNK_142e333ce;
        goto LAB_140004fcd;
      }
      if (*(short *)(pbStack_40 + 4) == 0x6e61 && *(int *)pbStack_40 == 0x6d726567) {
        puVar6 = &UNK_142e333c9;
        goto LAB_140004fcd;
      }
      if (*(short *)(pbStack_40 + 4) == 0x6873 && *(int *)pbStack_40 == 0x696c6f70) {
        puVar6 = &UNK_142e333b0;
        goto LAB_140004fcd;
      }
      break;
    case 7:
      goto code_r0x000140004d66;
    case 8:
      if (*(longlong *)pbStack_40 == 0x6573656e6170616a) {
        puVar6 = &UNK_142e333bf;
        goto LAB_140004fcd;
      }
      if (*(longlong *)pbStack_40 == 0x6573656e69686373) {
        puVar6 = &UNK_142e333a6;
        goto LAB_140004fcd;
      }
      break;
    case 9:
      if (pbStack_40[8] == 0x6e && *(longlong *)pbStack_40 == 0x61696c697a617262) {
        puVar6 = &UNK_142e333d3;
        goto LAB_140004fcd;
      }
      if (pbStack_40[8] == 0x6e && *(longlong *)pbStack_40 == 0x6169676577726f6e) {
        puVar6 = &UNK_142e333b5;
        goto LAB_140004fcd;
      }
      if (pbStack_40[8] == 0x6e && *(longlong *)pbStack_40 == 0x61696e6961726b75) {
        puVar6 = &UNK_142e33392;
        goto LAB_140004fcd;
      }
    }
  }
  puVar6 = &UNK_142e332f8;
  if (1 < *_DAT_143ca8e90) {
    puStack_78 = &uStack_48;
    pcStack_70 = pdb_140001020;
    puStack_68 = &UNK_142e33300;
    pcStack_60 = pdb_1402ed400;
    uStack_d8 = 0;
    pbStack_d0 = &UNK_142e33371;
    uStack_c8 = 0x21;
    uStack_c0 = 0;
    puStack_b8 = &UNK_142e33342;
    uStack_b0 = 0x2e;
    uStack_a8 = 2;
    puStack_a0 = &UNK_142e33371;
    uStack_98 = 0x21;
    uStack_90 = 0x2200000001;
    puStack_88 = &UNK_142e33310;
    ppuStack_80 = &puStack_78;
    pdb_140f332f0(&uStack_29,&uStack_d8);
    puVar6 = &UNK_142e332f8;
  }
LAB_140004fcd:
  if (param_2 == (undefined *)0x0) {
    param_3 = 5;
    param_2 = puVar6;
  }
  uVar5 = pdb_140dc5440(param_2,param_3);
  if (uVar5 == 0) {
    if (uStack_48 != 0) {
      pub_1406abac0(pbStack_40,uStack_48,1);
    }
    return;
  }
  uStack_d8 = uVar5;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e33648,0x2b,&uStack_d8,&UNK_142e336b8,&UNK_142e333d8);
}

