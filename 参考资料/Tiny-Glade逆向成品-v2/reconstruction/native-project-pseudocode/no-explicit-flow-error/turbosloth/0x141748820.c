// VA 0x141748820, PDB extent 64 bytes
// turbosloth::asset::impl$42::as_build_context
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::asset::impl$42::as_build_context
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 64 */

undefined8 * pdb_141748820(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  
  plVar2 = (longlong *)*param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar1 = *plVar3;
      *plVar3 = *plVar3 + 1;
      UNLOCK();
      if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_14174884b;
    }
    plVar4 = (longlong *)param_2[2];
    if (plVar4 != (longlong *)0x0) {
      param_2 = (undefined8 *)param_2[3];
      LOCK();
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if (*plVar4 == 0 || SCARRY8(lVar1,1) != *plVar4 < 0) goto LAB_14174884b;
    }
    *param_1 = plVar2;
    param_1[1] = plVar3;
    param_1[2] = plVar4;
    param_1[3] = param_2;
    return param_1;
  }
LAB_14174884b:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

