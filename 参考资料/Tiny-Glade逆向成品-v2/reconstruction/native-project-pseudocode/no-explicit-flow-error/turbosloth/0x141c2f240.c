// VA 0x141c2f240, PDB extent 276 bytes
// turbosloth::store::DiskStore::build_dependency
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::DiskStore::build_dependency
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 276 */

longlong * pdb_141c2f240(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong arg1;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  
  lVar3 = _UNK_143337b78;
  lVar1 = _DAT_143337b70;
  pdb_141c301a0();
  if (lVar3 != 0) {
    lVar2 = lVar3 * 0x10 + 0x10;
    arg1 = lVar3 + lVar2 + 0x11;
    if (arg1 != 0) {
      pub_1406abac0((byte *)(lVar1 - lVar2),arg1,0x10);
    }
  }
  lVar3 = 0;
  lVar1 = 1;
  if (lStack_88 != 2 || lStack_80 != 0) {
    lVar3 = lStack_80;
    lVar1 = lStack_88;
  }
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[1] = lVar3;
  *param_1 = lVar1;
  param_1[2] = lStack_78;
  param_1[3] = lStack_70;
  return param_1;
}

