// VA 0x140a97350, PDB extent 150 bytes
// country_core::render::mesh::Mesh::collision_radius_xz
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::mesh::Mesh::collision_radius_xz
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 150 */

void pdb_140a97350(undefined8 param_1)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puStack_20;
  uint *puStack_18;
  longlong lStack_10;
  ulonglong uStack_8;
  
  pdb_140a97aa0(&puStack_20,param_1);
  if (puStack_20 == puStack_18) {
    return;
  }
  fVar2 = 0.0;
  do {
    uVar1 = (ulonglong)*puStack_20;
    if (uStack_8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar1,uStack_8,&UNK_143045cf0);
    }
    puStack_20 = puStack_20 + 1;
    fVar4 = *(float *)(lStack_10 + uVar1 * 0xc);
    fVar3 = *(float *)(lStack_10 + 8 + uVar1 * 0xc);
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    fVar4 = fVar3;
    if (fVar3 <= fVar2) {
      fVar4 = fVar2;
    }
    fVar2 = (float)(~-(uint)NAN(fVar2) & (uint)fVar4 | -(uint)NAN(fVar2) & (uint)fVar3);
  } while (puStack_20 != puStack_18);
  return;
}

