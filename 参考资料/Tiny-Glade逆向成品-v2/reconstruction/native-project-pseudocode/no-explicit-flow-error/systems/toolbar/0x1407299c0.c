// VA 0x1407299c0, PDB extent 181 bytes
// toolbar::mei::widgets::impl$26::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$26::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 181 */

void pdb_1407299c0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = _DAT_142e36f50 * *(float *)((longlong)param_2 + 0x14);
  fVar6 = *(float *)(param_2 + 1) - *(float *)(param_2 + 2) * _DAT_142e36f50;
  fVar7 = *(float *)((longlong)param_2 + 0xc) - fVar5;
  uVar2 = *param_2;
  uVar3 = CONCAT44(fVar7,fVar6);
  uVar4 = CONCAT44((fVar5 + *(float *)((longlong)param_2 + 0xc)) - fVar7,
                   (*(float *)(param_2 + 2) * _DAT_142e36f50 + *(float *)(param_2 + 1)) - fVar6);
  uVar1 = *(undefined4 *)(param_2 + 3);
  pdb_140cb8180(uVar2,uVar3,uVar4,uVar1,param_1);
  pdb_140cb8180(uVar2,uVar3,uVar4,uVar1,param_1 + 0x18);
  return;
}

