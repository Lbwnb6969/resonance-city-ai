// VA 0x140815b40, PDB extent 158 bytes
// system_wall_constructor::wall_constructor::WallConstructor::normalize_holes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::wall_constructor::WallConstructor::normalize_holes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
   Extent: 158 */

void pdb_140815b40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 uStack_49;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  
  uVar2 = pdb_140c2b5b0(param_2);
  auVar3._4_4_ = (int)param_3;
  auVar3._0_4_ = (int)uVar2;
  auVar3._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar3._12_4_ = (int)((ulonglong)param_3 >> 0x20);
  auVar3 = divps(_DAT_142e37950,auVar3);
  uStack_40 = auVar3._0_8_;
  *(undefined8 *)(param_1 + 0x10) = 0;
  pdb_14146c0d0(param_2);
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  puStack_48 = &uStack_49;
  if (1 < uVar1) {
    if (uVar1 < 0x15) {
      pdb_141460650(*(undefined8 *)(param_1 + 8),uVar1,1,&puStack_48);
    }
    else {
      pdb_1414658e0(*(undefined8 *)(param_1 + 8),uVar1,&puStack_48);
    }
  }
  return;
}

