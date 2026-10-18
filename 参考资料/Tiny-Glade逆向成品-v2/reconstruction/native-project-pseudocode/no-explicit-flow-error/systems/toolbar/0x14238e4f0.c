// VA 0x14238e4f0, PDB extent 517 bytes
// toolbar::demo_stuff::demo_show_full_glade_size::demo_show_full_glade_size::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/demo_stuff/demo_show_full_glade_size.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::demo_stuff::demo_show_full_glade_size::demo_show_full_glade_size::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/demo_stuff/demo_show_full_glade_size.rs
   Extent: 517 */

undefined8 *
pdb_14238e4f0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong arg0;
  undefined8 uVar4;
  undefined8 auStack_188 [18];
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_60;
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
LAB_14238e567:
    pdb_142dc7e2a(uVar4,arg0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uStack_60 = param_4;
  uStack_58 = param_3;
  if (arg0 == 0) {
    pbStack_e8 = (byte *)0x4;
    uStack_f0 = 0;
  }
  else {
    pdb_14007ee60();
    uVar4 = 4;
    pbStack_e8 = pub_1406abab0(arg0,4);
    uStack_f0 = uVar1;
    if (pbStack_e8 == (byte *)0x0) goto LAB_14238e567;
  }
  if (uVar1 != 0) {
    pub_142e32760(pbStack_e8,uVar2,arg0);
  }
  uStack_f8 = 0x8000000000000002;
  uStack_e0 = uVar1;
  pdb_1409bb100(auStack_188,&uStack_f8);
  pdb_1409bb0b0(&uStack_f8,auStack_188,0);
  pdb_1409bd970(auStack_188,&uStack_f8,*(undefined4 *)(param_2 + 0x18));
  pdb_1409baff0(&uStack_f8,auStack_188,*(undefined4 *)(param_2 + 0x1c));
  pdb_1409bba50(auStack_188,&uStack_f8,uStack_58,uStack_60,param_5);
  *(undefined8 *)pbStack_50 = auStack_188[0];
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

