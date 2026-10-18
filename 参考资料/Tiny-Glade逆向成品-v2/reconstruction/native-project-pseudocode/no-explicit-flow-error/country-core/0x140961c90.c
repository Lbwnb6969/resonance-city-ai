// VA 0x140961c90, PDB extent 15 bytes
// country_core::components::transient_mesh::TransientMesh::new_with_registry
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/transient_mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::components::transient_mesh::TransientMesh::new_with_registry
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/transient_mesh.rs
   Extent: 15 */

void pdb_140961c90(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  
  plVar2 = (longlong *)*param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

