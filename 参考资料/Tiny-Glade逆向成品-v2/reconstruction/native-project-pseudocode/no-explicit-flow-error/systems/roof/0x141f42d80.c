// VA 0x141f42d80, PDB extent 575 bytes
// system_roof::ui_edit_roof_ridge_dir::do_ui_edit_roof_ridge_dir::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::ui_edit_roof_ridge_dir::do_ui_edit_roof_ridge_dir::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
   Extent: 575 */

undefined8 *
pdb_141f42d80(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_178 [144];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte *pbStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_40 = pub_1406abab0(8,8);
  if (pbStack_40 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_d8 = pub_1406abab0(0x1d,1);
  uVar5 = _UNK_14342eedd;
  if (pbStack_d8 != (byte *)0x0) {
    *(ulonglong *)(pbStack_d8 + 0xd) = CONCAT53(_UNK_14342eed8,_DAT_14342eed5);
    *(undefined8 *)(pbStack_d8 + 0x15) = uVar5;
    uVar4 = _UNK_14342eed4;
    uVar3 = _UNK_14342eed0;
    uVar2 = _UNK_14342eecc;
    *(undefined4 *)pbStack_d8 = _DAT_14342eec8;
    *(undefined4 *)(pbStack_d8 + 4) = uVar2;
    *(undefined4 *)(pbStack_d8 + 8) = uVar3;
    *(undefined4 *)(pbStack_d8 + 0xc) = uVar4;
    uStack_e0 = 0x1d;
    uStack_d0 = 0x1d;
    uStack_e8 = 0x8000000000000000;
    pdb_1409bb100(auStack_178,&uStack_e8);
    pdb_1409bb0b0(&uStack_e8,auStack_178,0);
    pdb_1409bd940(auStack_178,&uStack_e8,param_2[2]);
    uStack_31 = 1;
    pdb_140de88f0(&uStack_e8,*param_2,param_2[1]);
    uStack_58 = uStack_e8;
    uStack_50 = (undefined4)uStack_e0;
    uStack_4c = uStack_e0._4_4_;
    uStack_31 = 0;
    pdb_1409bd9d0(&uStack_e8,auStack_178,&uStack_58);
    uStack_50 = param_2[5];
    uStack_58 = *(undefined8 *)(param_2 + 3);
    pdb_1409bd9a0(auStack_178,&uStack_e8,&uStack_58);
    pdb_1409bba50(&uStack_e8,auStack_178,param_3,param_4,param_5);
    *(undefined8 *)pbStack_40 = uStack_e8;
    *param_1 = 1;
    param_1[1] = pbStack_40;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0x1d);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

