// VA 0x140724bc0, PDB extent 109 bytes
// toolbar::mei::widgets::tweaker::MaybeHint::confirm
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::tweaker::MaybeHint::confirm
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 109 */

void pdb_140724bc0(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar1 = (ulonglong *)*param_1;
  lVar2 = param_1[1];
  uVar3 = param_1[2];
  puVar1[2] = 0;
  if (*puVar1 < uVar3) {
    pdb_142d7f1b0(puVar1,0,uVar3,1,1);
    uVar4 = puVar1[2];
  }
  else {
    uVar4 = 0;
    if (uVar3 == 0) goto LAB_140724bf6;
  }
  pub_142e32760(uVar4 + puVar1[1],lVar2,uVar3);
  uVar4 = puVar1[2];
LAB_140724bf6:
  puVar1[2] = uVar4 + uVar3;
  return;
}

