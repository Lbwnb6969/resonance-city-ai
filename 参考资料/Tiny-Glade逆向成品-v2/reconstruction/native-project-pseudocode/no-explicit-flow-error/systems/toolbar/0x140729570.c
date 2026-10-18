// VA 0x140729570, PDB extent 108 bytes
// toolbar::mei::widgets::impl$6::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$6::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 108 */

void pdb_140729570(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(param_1 + 0x25c) & 1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = pdb_140de9d00(-(uint)(bVar4 != 0) | *(uint *)(param_1 + 600) |
                        -(uint)((*(byte *)((longlong)param_2 + 0x2c) & 1) != 0),-bVar4);
  pdb_140cb63a0(param_1,uVar1,uVar2,uVar3,*param_2);
  return;
}

