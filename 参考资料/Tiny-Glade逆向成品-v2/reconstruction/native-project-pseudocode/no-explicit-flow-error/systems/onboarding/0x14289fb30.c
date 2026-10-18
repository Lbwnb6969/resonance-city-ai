// VA 0x14289fb30, PDB extent 287 bytes
// system_onboarding::hint_always_on::hint_draw_always_on::closure$3::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_always_on.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_onboarding::hint_always_on::hint_draw_always_on::closure$3::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_always_on.rs
   Extent: 287 */

void pdb_14289fb30(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_1420bf4a0(&uStack_68,param_1);
  pbStack_20 = pbStack_60;
  pdb_140734440(&uStack_38,param_2,pbStack_60,uStack_58);
  pdb_140727040(&uStack_50,&uStack_38,0xffffffff);
  uVar1 = pdb_140726ff0(&uStack_50);
  pdb_142b39190(uVar1,_DAT_143008730);
  uStack_28 = uStack_40;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  pdb_140727100(&uStack_50,&uStack_38,_DAT_142e3a74c);
  pdb_140727080(&uStack_38,&uStack_50,1);
  pdb_140727000(&uStack_50,&uStack_38,0);
  pdb_1407270c0(&uStack_38,&uStack_50,700);
  if (0 < (longlong)uStack_68) {
    pub_1406abac0(pbStack_20,uStack_68,1);
  }
  return;
}

