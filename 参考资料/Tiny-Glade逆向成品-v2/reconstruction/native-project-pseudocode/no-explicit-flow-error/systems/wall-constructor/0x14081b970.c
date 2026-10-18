// VA 0x14081b970, PDB extent 501 bytes
// system_wall_constructor::ui_lintel_controls::ui_lintel_controls::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/ui_lintel_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::ui_lintel_controls::ui_lintel_controls::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/ui_lintel_controls.rs
   Extent: 501 */

undefined8 *
pdb_14081b970(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong arg0;
  undefined8 uVar4;
  undefined1 auStack_178 [144];
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(8,8);
  if (pbStack_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  arg0 = uVar1 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    uVar4 = 0;
LAB_14081b9e8:
    pdb_142dc7e2a(uVar4,arg0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uStack_58 = param_4;
  if (arg0 == 0) {
    pbStack_d8 = (byte *)0x4;
    uStack_e0 = 0;
  }
  else {
    pdb_14007ee60();
    uVar4 = 4;
    pbStack_d8 = pub_1406abab0(arg0,4);
    uStack_e0 = uVar1;
    if (pbStack_d8 == (byte *)0x0) goto LAB_14081b9e8;
  }
  if (uVar1 != 0) {
    pub_142e32760(pbStack_d8,uVar2,arg0);
  }
  uStack_e8 = 0x8000000000000002;
  uStack_d0 = uVar1;
  pdb_1409bb100(auStack_178,&uStack_e8);
  pdb_1409bb0b0(&uStack_e8,auStack_178,0);
  pdb_1409baff0(auStack_178,&uStack_e8,_DAT_142e36f28);
  pdb_1409bba50(&uStack_e8,auStack_178,param_3,uStack_58,param_5);
  *(undefined8 *)pbStack_50 = uStack_e8;
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

