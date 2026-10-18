// VA 0x1408653d0, PDB extent 482 bytes
// system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure$12
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_focus_stairs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure$12
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_focus_stairs.rs
   Extent: 482 */

undefined8 *
pdb_1408653d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 auStack_198 [19];
  undefined8 auStack_100 [5];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(8,8);
  if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  auStack_198[0] = 0x8000000000000001;
  pdb_1409bb100(&uStack_d8,auStack_198);
  pdb_1409bb0b0(auStack_198,&uStack_d8,0);
  pdb_1409bba50(auStack_100,auStack_198,param_3,param_4,param_5);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  pdb_14007ee60();
  pbStack_b8 = pub_1406abab0(0xe,1);
  if (pbStack_b8 != (byte *)0x0) {
    pbStack_b8[6] = 100;
    pbStack_b8[7] = 100;
    pbStack_b8[8] = 0x5f;
    pbStack_b8[9] = 0x70;
    pbStack_b8[10] = 0x6f;
    pbStack_b8[0xb] = 0x69;
    pbStack_b8[0xc] = 0x6e;
    pbStack_b8[0xd] = 0x74;
    pbStack_b8[0] = 0x69;
    pbStack_b8[1] = 99;
    pbStack_b8[2] = 0x6f;
    pbStack_b8[3] = 0x6e;
    pbStack_b8[4] = 0x2f;
    pbStack_b8[5] = 0x61;
    pbStack_b8[6] = 100;
    pbStack_b8[7] = 100;
    uStack_d0 = *param_2;
    uStack_c8 = *(undefined4 *)(param_2 + 1);
    uStack_c0 = 0xe;
    uStack_b0 = 0xe;
    uStack_a8 = 0;
    uStack_d8 = uVar1;
    uStack_d4 = uVar1;
    pdb_1414b9fa0(auStack_100,&uStack_d8,&UNK_14300d140);
    *(undefined8 *)pbStack_48 = auStack_100[0];
    *param_1 = 1;
    param_1[1] = pbStack_48;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0xe);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

