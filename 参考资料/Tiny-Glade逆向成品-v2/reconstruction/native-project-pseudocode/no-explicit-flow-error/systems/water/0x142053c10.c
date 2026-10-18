// VA 0x142053c10, PDB extent 457 bytes
// system_water::draw_water::draw_water::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/draw_water.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_water::draw_water::draw_water::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/draw_water.rs
   Extent: 457 */

undefined8 *
pdb_142053c10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_168 [144];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_48;
  undefined4 uStack_40;
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
  pbStack_c8 = pub_1406abab0(0x15,1);
  uVar4 = _UNK_143448dec;
  uVar3 = _UNK_143448de8;
  uVar2 = _UNK_143448de4;
  if (pbStack_c8 != (byte *)0x0) {
    *(undefined4 *)pbStack_c8 = _DAT_143448de0;
    *(undefined4 *)(pbStack_c8 + 4) = uVar2;
    *(undefined4 *)(pbStack_c8 + 8) = uVar3;
    *(undefined4 *)(pbStack_c8 + 0xc) = uVar4;
    pbStack_c8[0xd] = 0x73;
    pbStack_c8[0xe] = 99;
    pbStack_c8[0xf] = 0x72;
    pbStack_c8[0x10] = 0x69;
    pbStack_c8[0x11] = 0x62;
    pbStack_c8[0x12] = 0x62;
    pbStack_c8[0x13] = 0x6c;
    pbStack_c8[0x14] = 0x65;
    uStack_d0 = 0x15;
    uStack_c0 = 0x15;
    uStack_d8 = 0x8000000000000000;
    pdb_1409bb100(auStack_168,&uStack_d8);
    pdb_1409bb0b0(&uStack_d8,auStack_168,0);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_48 = *param_2;
    pdb_1409bd9a0(auStack_168,&uStack_d8,&uStack_48);
    pdb_1409bd940(&uStack_d8,auStack_168,*(undefined4 *)((longlong)param_2 + 0xc));
    pdb_1409bafc0(auStack_168,&uStack_d8,0);
    pdb_1409bba50(&uStack_d8,auStack_168,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = uStack_d8;
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0x15);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

