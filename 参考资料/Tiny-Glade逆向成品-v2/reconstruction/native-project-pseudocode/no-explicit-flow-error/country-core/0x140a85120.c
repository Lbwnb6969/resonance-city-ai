// VA 0x140a85120, PDB extent 61 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::expand
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::expand
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 61 */

void pdb_140a85120(int *param_1,undefined8 *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 3) = uVar2;
  *(undefined8 *)(param_1 + 5) = uVar3;
  lVar4 = 0xc;
  if (*param_1 == 1) {
    param_3 = param_3 + param_3;
    param_1[5] = (int)((float)param_1[5] + param_3);
    lVar4 = 0x18;
  }
  *(float *)((longlong)param_1 + lVar4) = param_3 + *(float *)((longlong)param_1 + lVar4);
  return;
}

