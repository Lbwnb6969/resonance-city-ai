// VA 0x14067e3a0, PDB extent 726 bytes
// tiny_glade::winit_setup::impl$1::from_winit
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::winit_setup::impl$1::from_winit
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_setup.rs
   Extent: 726 */

ulonglong * pdb_14067e3a0(ulonglong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  ulonglong uStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  char cStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_140747860(&uStack_e0,*param_2);
  cVar2 = (char)uStack_e0;
  if ((char)uStack_e0 == '\0') {
    uStack_e8 = uStack_7c;
    uStack_f8 = uStack_8c;
    uStack_f0 = uStack_84;
    uStack_108 = uStack_9c;
    uStack_100 = uStack_94;
    uStack_118 = uStack_ac;
    uStack_114 = uStack_a8;
    uStack_110 = uStack_a4;
    uStack_10c = uStack_a0;
    uStack_120 = uStack_b4;
    uStack_11c = uStack_b0;
    pdb_140747640(&uStack_e0,&uStack_120,0x20,uStack_ac,uStack_dc,uStack_d4,uStack_cc,uStack_c4,
                  uStack_bc);
    pbStack_50 = (byte *)CONCAT44(uStack_d4,uStack_d8);
    pdb_140f5fd10(&uStack_70,pbStack_50,CONCAT44(uStack_cc,uStack_d0));
    if ((longlong)uStack_60 < 0) {
      uVar5 = 0;
LAB_14067e47f:
      pbStack_58 = pbStack_68;
      pdb_142dc7e2a(uVar5,uStack_60);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uStack_60 == 0) {
      pbStack_58 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar5 = 1;
      pbStack_58 = pub_1406abab0(uStack_60,1);
      if (pbStack_58 == (byte *)0x0) goto LAB_14067e47f;
      pub_142e32760(pbStack_58,pbStack_68,uStack_60);
    }
    if (0 < (longlong)uStack_70) {
      pub_1406abac0(pbStack_68,uStack_70,1);
    }
    cStack_41 = cVar2;
    if (CONCAT44(uStack_dc,uStack_e0) != 0) {
      pub_1406abac0(pbStack_50,CONCAT44(uStack_dc,uStack_e0),1);
    }
    pbStack_50 = (byte *)uStack_60;
  }
  else {
    cStack_41 = (char)uStack_e0;
    pdb_1404b38e0(&uStack_d8);
    pbStack_50 = (byte *)0x8000000000000000;
  }
  uVar3 = pdb_140001690(param_2);
  uVar4 = pdb_140001530(param_2);
  *param_1 = (ulonglong)pbStack_50;
  param_1[1] = (ulonglong)pbStack_58;
  param_1[2] = (ulonglong)pbStack_50;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  return param_1;
}

