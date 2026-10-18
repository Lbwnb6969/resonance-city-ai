// VA 0x1414fcd40, PDB extent 473 bytes
// system_decorator::blueprint::validate_blueprints::closure$0::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::blueprint::validate_blueprints::closure$0::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 473 */

undefined8 *
pdb_1414fcd40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  pbStack_c8 = pub_1406abab0(0x19,1);
  uVar5 = _UNK_1433181b9;
  if (pbStack_c8 != (byte *)0x0) {
    *(ulonglong *)(pbStack_c8 + 9) = CONCAT17(UNK_1433181b8,CONCAT43(_UNK_1433181b4,_DAT_1433181b1))
    ;
    *(undefined8 *)(pbStack_c8 + 0x11) = uVar5;
    uVar4 = _UNK_1433181b4;
    uVar3 = _UNK_1433181b0;
    uVar2 = _UNK_1433181ac;
    *(undefined4 *)pbStack_c8 = _DAT_1433181a8;
    *(undefined4 *)(pbStack_c8 + 4) = uVar2;
    *(undefined4 *)(pbStack_c8 + 8) = uVar3;
    *(undefined4 *)(pbStack_c8 + 0xc) = uVar4;
    uStack_d0 = 0x19;
    uStack_c0 = 0x19;
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
    pdb_1409bd940(auStack_168,&uStack_d8,_DAT_142e36f50);
    pdb_1409bba50(&uStack_d8,auStack_168,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = uStack_d8;
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0x19);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

