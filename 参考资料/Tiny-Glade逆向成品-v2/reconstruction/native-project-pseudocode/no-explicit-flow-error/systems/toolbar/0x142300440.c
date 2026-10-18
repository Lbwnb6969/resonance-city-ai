// VA 0x142300440, PDB extent 202 bytes
// toolbar::menu::report_bug::impl$6::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::impl$6::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 202 */

void pdb_142300440(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_2 + 1);
  fVar2 = *(float *)((longlong)param_2 + 0xc);
  fVar7 = *(float *)(param_2 + 2);
  fVar8 = *(float *)((longlong)param_2 + 0x14);
  pfVar5 = (float *)pdb_140cb6390();
  fVar7 = (fVar7 - *pfVar5) * _DAT_142e36f50;
  fVar8 = (fVar8 - pfVar5[1]) * _DAT_142e36f50;
  puVar6 = (undefined8 *)pdb_140cb6390(param_1);
  uVar3 = *puVar6;
  uVar4 = pdb_140de9d00(*(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_2 + 3));
  pdb_140cb63a0(param_1,CONCAT44(fVar2 - fVar8,fVar1 - fVar7),uVar3,uVar4,*param_2);
  return;
}

