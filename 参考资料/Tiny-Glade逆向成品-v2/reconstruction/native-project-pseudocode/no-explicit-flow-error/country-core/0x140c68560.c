// VA 0x140c68560, PDB extent 454 bytes
// country_core::resources::walls::decorator_outline::impl$1::display_with_opacity::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_outline::impl$1::display_with_opacity::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
   Extent: 454 */

undefined8 *
pdb_140c68560(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 auStack_f0 [5];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(8,8);
  if (pbStack_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_b8 = pub_1406abab0(0xb,1);
  if (pbStack_b8 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xb);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pbStack_b8[0] = 0x74;
  pbStack_b8[1] = 0x65;
  pbStack_b8[2] = 0x6d;
  pbStack_b8[3] = 0x70;
  pbStack_b8[4] = 0x5f;
  pbStack_b8[5] = 0x73;
  pbStack_b8[6] = 0x70;
  pbStack_b8[7] = 0x68;
  pbStack_b8[7] = 0x68;
  pbStack_b8[8] = 0x65;
  pbStack_b8[9] = 0x72;
  pbStack_b8[10] = 0x65;
  uStack_58 = _DAT_142e3b1d8;
  if (*(char *)(param_2 + 4) == '\0') {
    uStack_58 = 0;
  }
  uStack_84 = *param_2;
  uStack_4c = param_2[3];
  uStack_54 = *(undefined8 *)(param_2 + 1);
  uStack_c8 = 0x8000000000000000;
  uStack_c0 = 0xb;
  uStack_b0 = 0xb;
  uStack_98 = _DAT_142e4e650;
  uStack_94 = _UNK_142e4e654;
  uStack_90 = _UNK_142e4e658;
  uStack_8c = _UNK_142e4e65c;
  uStack_88 = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 2;
  uStack_68 = 1;
  uStack_60 = 0x100;
  uStack_5c = 0x3f800000;
  uStack_48 = 0x3f800000;
  uStack_44 = 0;
  uStack_42 = 0;
  pdb_1409bba50(auStack_f0,&uStack_c8,param_3,param_4,param_5);
  *(undefined8 *)pbStack_38 = auStack_f0[0];
  *param_1 = 1;
  param_1[1] = pbStack_38;
  param_1[2] = 1;
  return param_1;
}

