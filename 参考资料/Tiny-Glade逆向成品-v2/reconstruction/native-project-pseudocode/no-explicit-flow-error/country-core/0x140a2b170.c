// VA 0x140a2b170, PDB extent 157 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::asset_count
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::mesh_library::AssetMeshLibrary::asset_count
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 157 */

undefined8 pdb_140a2b170(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  puVar1 = (ulonglong *)(param_1 + 0x60);
  uVar4 = *(ulonglong *)(param_1 + 0x60);
  if (uVar4 < 0xfffffffffffffff0 && (char)(((uint)uVar4 & 8) >> 3) == '\0') {
    LOCK();
    uVar3 = *puVar1;
    if (uVar4 == uVar3) {
      *puVar1 = uVar4 + 0x10;
    }
    UNLOCK();
    if (uVar4 == uVar3) goto LAB_140a2b1b4;
  }
  pdb_142dbb5f0(puVar1,0,param_3,1000000000);
LAB_140a2b1b4:
  pdb_140e9a150(puVar1);
  pdb_140e9a150((ulonglong)puVar1 | 1);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  pdb_140e9a350(puVar1);
  pdb_140e9a350((ulonglong)puVar1 | 1);
  LOCK();
  puVar2 = (ulonglong *)(param_1 + 0x60);
  uVar4 = *puVar2;
  *puVar2 = *puVar2 - 0x10;
  UNLOCK();
  if ((uVar4 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar1);
  }
  return uVar5;
}

