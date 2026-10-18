// VA 0x1423002d0, PDB extent 179 bytes
// toolbar::menu::report_bug::impl$6::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::impl$6::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 179 */

undefined4 * pdb_1423002d0(undefined4 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  *(undefined1 *)(param_2 + 0x270) = 1;
  pdb_140cb6740(param_2,*param_3);
  if (*(int *)(param_2 + 0x268) == 0) {
    *(undefined1 *)(param_2 + 0x254) = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x268) + 1;
    *(int *)(param_2 + 0x268) = iVar3;
    *(undefined1 *)(param_2 + 0x254) = 0;
    if (iVar3 != 0) {
      fVar5 = (float)pub_142e32a70(*(float *)((longlong)param_3 + 0x4c) +
                                   *(float *)(param_2 + 0x26c),_DAT_142e36f28);
      *(float *)(param_2 + 0x26c) = fVar5;
      if (fVar5 < _DAT_142e36f50) {
        *(undefined1 *)(param_2 + 0x254) = 1;
      }
    }
  }
  lVar4 = pdb_140cb6390(param_2);
  uVar1 = *(undefined4 *)(lVar4 + 4);
  uVar2 = *(undefined4 *)(param_2 + 0x264);
  *param_1 = 0;
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = uVar1;
  return param_1;
}

