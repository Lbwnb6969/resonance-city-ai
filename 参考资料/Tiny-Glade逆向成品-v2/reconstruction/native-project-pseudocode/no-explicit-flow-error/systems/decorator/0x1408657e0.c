// VA 0x1408657e0, PDB extent 473 bytes
// system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure$26
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_focus_stairs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs::closure$26
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_focus_stairs.rs
   Extent: 473 */

undefined8 *
pdb_1408657e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
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
  pbStack_c8 = pub_1406abab0(0x1a,1);
  uVar5 = _UNK_14300d16a;
  if (pbStack_c8 != (byte *)0x0) {
    *(ulonglong *)(pbStack_c8 + 10) =
         CONCAT26(_UNK_14300d168,CONCAT42(_UNK_14300d164,_DAT_14300d162));
    *(undefined8 *)(pbStack_c8 + 0x12) = uVar5;
    uVar4 = _UNK_14300d164;
    uVar3 = _UNK_14300d15c;
    uVar2 = CONCAT22(_DAT_14300d162,_UNK_14300d160);
    *(undefined4 *)pbStack_c8 = _DAT_14300d158;
    *(undefined4 *)(pbStack_c8 + 4) = uVar3;
    *(undefined4 *)(pbStack_c8 + 8) = uVar2;
    *(undefined4 *)(pbStack_c8 + 0xc) = uVar4;
    uStack_d0 = 0x1a;
    uStack_c0 = 0x1a;
    uStack_d8 = 0x8000000000000000;
    pdb_1409bb100(auStack_168,&uStack_d8);
    pdb_1409bb0b0(&uStack_d8,auStack_168,0);
    uStack_48 = *param_2;
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    pdb_1409bd9d0(auStack_168,&uStack_d8,&uStack_48);
    pdb_1409bd940(&uStack_d8,auStack_168,*(undefined4 *)(param_2 + 2));
    uStack_40 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_48 = *(undefined8 *)((longlong)param_2 + 0x14);
    pdb_1409bd9a0(auStack_168,&uStack_d8,&uStack_48);
    pdb_1409bba50(&uStack_d8,auStack_168,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = uStack_d8;
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0x1a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

