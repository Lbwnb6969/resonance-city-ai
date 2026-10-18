// VA 0x1404880a0, PDB extent 455 bytes
// tiny_glade::sdl_setup::monitor_match_from_sdl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::sdl_setup::monitor_match_from_sdl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
   Extent: 455 */

ulonglong * pdb_1404880a0(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong unaff_R15;
  char cStack_78;
  undefined7 uStack_77;
  byte *pbStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_1406d1250(&cStack_78);
  pbStack_40 = (byte *)CONCAT71(uStack_77,cStack_78);
  if (SBORROW8(0,(longlong)pbStack_40)) {
    pbStack_58 = pbStack_70;
    pbStack_50 = pbStack_68;
  }
  else {
    pbStack_48 = pbStack_70;
    pdb_1406d0970(&pbStack_58,0,0,0,0);
    if (pbStack_40 != (byte *)0x0) {
      pub_1406abac0(pbStack_48,(ulonglong)pbStack_40,1);
    }
  }
  pdb_1406d1170(&cStack_78,param_2,param_3);
  if (cStack_78 == '\0') {
    pbStack_40 = pbStack_70;
    pbStack_48 = pbStack_68;
  }
  else {
    pbStack_40 = (byte *)0x8000000000000000;
    uStack_60 = unaff_R15;
    if (pbStack_70 != (byte *)0x0) {
      pub_1406abac0(pbStack_68,(ulonglong)pbStack_70,1);
    }
  }
  uVar1 = pdb_14007e750(&pbStack_58);
  uVar2 = pdb_1406d0960(&pbStack_58);
  uVar3 = pdb_1406d09a0(&pbStack_58);
  uVar4 = pdb_1406d09b0(&pbStack_58);
  *param_1 = (ulonglong)pbStack_40;
  param_1[1] = (ulonglong)pbStack_48;
  param_1[2] = uStack_60;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  return param_1;
}

