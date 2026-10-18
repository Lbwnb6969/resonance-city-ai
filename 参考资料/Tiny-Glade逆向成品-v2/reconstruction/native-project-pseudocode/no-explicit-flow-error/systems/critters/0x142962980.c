// VA 0x142962980, PDB extent 457 bytes
// system_critters::ui_pet_ducks::ui_pet_ducks::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/ui_pet_ducks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_critters::ui_pet_ducks::ui_pet_ducks::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/ui_pet_ducks.rs
   Extent: 457 */

undefined8 *
pdb_142962980(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined1 auStack_168 [144];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
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
  pbStack_c8 = pub_1406abab0(8,1);
  if (pbStack_c8 != (byte *)0x0) {
    pbStack_c8[0] = 0x70;
    pbStack_c8[1] = 0x65;
    pbStack_c8[2] = 0x74;
    pbStack_c8[3] = 0x5f;
    pbStack_c8[4] = 0x68;
    pbStack_c8[5] = 0x61;
    pbStack_c8[6] = 0x6e;
    pbStack_c8[7] = 100;
    uStack_d0 = 8;
    uStack_c0 = 8;
    uStack_d8 = 0x8000000000000000;
    pdb_1409bb100(auStack_168,&uStack_d8);
    pdb_1409bb0b0(&uStack_d8,auStack_168,0);
    uStack_40 = *(undefined4 *)(param_2 + 3);
    uStack_48 = param_2[2];
    pdb_1409bd9a0(auStack_168,&uStack_d8,&uStack_48);
    uStack_48 = *param_2;
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    pdb_1409bd9d0(&uStack_d8,auStack_168,&uStack_48);
    pdb_1409bd940(auStack_168,&uStack_d8,*(undefined4 *)((longlong)param_2 + 0x1c));
    pdb_1409bba50(&uStack_d8,auStack_168,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = uStack_d8;
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

