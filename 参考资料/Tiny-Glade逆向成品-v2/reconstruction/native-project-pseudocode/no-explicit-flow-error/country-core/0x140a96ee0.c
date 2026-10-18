// VA 0x140a96ee0, PDB extent 172 bytes
// country_core::render::mesh::Mesh::collision_bbx
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::mesh::Mesh::collision_bbx
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 172 */

longlong pdb_140a96ee0(longlong param_1)

{
  undefined4 auStack_74 [2];
  undefined4 uStack_6c;
  undefined4 auStack_68 [3];
  undefined1 auStack_5c [8];
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_40;
  
  pdb_140a96ba0(auStack_50);
  pdb_140def0d0(auStack_68,auStack_50);
  pdb_140def0d0(auStack_5c,auStack_50);
  pdb_140def030(auStack_74,auStack_50);
  pdb_140df1b90(param_1,auStack_68[0],uStack_54,auStack_74[0],uStack_6c,&UNK_143045b50);
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_40,uStack_4c);
  return param_1;
}

