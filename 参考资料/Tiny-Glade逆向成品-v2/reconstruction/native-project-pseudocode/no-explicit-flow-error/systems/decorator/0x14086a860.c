// VA 0x14086a860, PDB extent 549 bytes
// system_decorator::ui_systems::ui_rotate_lantern::ui_rotate_decorator::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_rotate_lantern.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_rotate_lantern::ui_rotate_decorator::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_rotate_lantern.rs
   Extent: 549 */

undefined8 *
pdb_14086a860(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong arg0;
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 auStack_198 [18];
  undefined8 uStack_108;
  ulonglong uStack_100;
  byte *pbStack_f8;
  ulonglong uStack_f0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(8,8);
  if (pbStack_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  arg0 = param_2[1];
  if ((longlong)arg0 < 0) {
    uVar3 = 0;
LAB_14086a8c1:
    pdb_142dc7e2a(uVar3,arg0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (arg0 == 0) {
    pbStack_f8 = (byte *)0x1;
  }
  else {
    uVar1 = *param_2;
    uStack_70 = param_3;
    pdb_14007ee60();
    uVar3 = 1;
    pbStack_f8 = pub_1406abab0(arg0,1);
    if (pbStack_f8 == (byte *)0x0) goto LAB_14086a8c1;
    pub_142e32760(pbStack_f8,uVar1,arg0);
    param_3 = uStack_70;
  }
  uStack_108 = 0x8000000000000000;
  uStack_100 = arg0;
  uStack_f0 = arg0;
  pdb_1409bb100(auStack_198,&uStack_108);
  pdb_1409bb0b0(&uStack_108,auStack_198,0);
  pdb_1409bafc0(auStack_198,&uStack_108,*(undefined1 *)((longlong)param_2 + 0x2c));
  uStack_60 = *(undefined4 *)(param_2 + 5);
  uStack_68 = param_2[4];
  pdb_1409bd9a0(&uStack_108,auStack_198,&uStack_68);
  uStack_68 = param_2[2];
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  pdb_1409bd9d0(auStack_198,&uStack_108,&uStack_68);
  pdb_1409bd940(&uStack_108,auStack_198,_DAT_142e37988);
  pdb_1409bba50(auStack_198,&uStack_108,param_3,param_4,param_5);
  *(undefined8 *)pbStack_50 = auStack_198[0];
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

