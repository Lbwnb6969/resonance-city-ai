// VA 0x140737280, PDB extent 347 bytes
// toolbar::menu::ellipsize
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::ellipsize
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod.rs
   Extent: 347 */

ulonglong * pdb_140737280(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulonglong *puStack_78;
  code *pcStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (0x1f < param_3) goto LAB_1407372d2;
  uVar1 = pdb_140f69050(param_2,param_3);
  do {
    if (param_4 < uVar1) {
      uStack_48 = param_3 + param_2;
      uStack_50 = param_2;
      uStack_40 = param_4;
      pdb_1411bc620(&uStack_68,&uStack_50);
      pcStack_70 = pdb_140001020;
      puStack_78 = &uStack_68;
      pdb_140f60760(&uStack_50,&UNK_142fa71a8,&puStack_78);
      if (uStack_68 != 0) {
        pub_1406abac0(pbStack_60,uStack_68,1);
      }
      param_1[2] = uStack_40;
      *param_1 = uStack_50;
      param_1[1] = uStack_48;
      return param_1;
    }
    if ((longlong)param_3 < 0) {
      uVar3 = 0;
    }
    else {
      if (param_3 == 0) {
        pbVar2 = (byte *)0x1;
LAB_140737384:
        *param_1 = param_3;
        param_1[1] = (ulonglong)pbVar2;
        param_1[2] = param_3;
        return param_1;
      }
      pdb_14007ee60();
      uVar3 = 1;
      pbVar2 = pub_1406abab0(param_3,1);
      if (pbVar2 != (byte *)0x0) {
        pub_142e32760(pbVar2,param_2,param_3);
        goto LAB_140737384;
      }
    }
    pdb_142dc7e2a(uVar3,param_3);
LAB_1407372d2:
    uVar1 = pdb_140f68a30();
  } while( true );
}

