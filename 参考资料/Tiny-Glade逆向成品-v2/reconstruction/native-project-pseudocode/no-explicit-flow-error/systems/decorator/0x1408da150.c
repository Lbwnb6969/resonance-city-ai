// VA 0x1408da150, PDB extent 212 bytes
// system_decorator::cull_oob_decorators::should_snap_to_corner
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::cull_oob_decorators::should_snap_to_corner
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 212 */

bool pdb_1408da150(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,float param_8)

{
  char cVar1;
  bool bVar2;
  undefined4 extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  float fVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_1;
  uStack_50 = param_2;
  cVar1 = pdb_140901320(&uStack_58);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    cVar1 = pdb_1408ff990(param_3 + 0x2a3);
    fVar3 = _DAT_142e3787c;
    if (cVar1 == '\0') {
      fVar3 = _DAT_142e3c620;
    }
    uStack_60 = pdb_14092f860(param_3);
    uStack_5c = extraout_XMM0_Da;
    pdb_140dea7c0(&uStack_60,param_4,param_6);
    bVar2 = (float)(extraout_XMM0_Da_00 & _DAT_142e377e0) < param_8 * _DAT_142e36f50 + fVar3;
  }
  return bVar2;
}

