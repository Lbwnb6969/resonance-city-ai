// VA 0x140a2c5c0, PDB extent 664 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::never_accessed_assets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::mesh_library::AssetMeshLibrary::never_accessed_assets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 664 */

undefined8 pdb_140a2c5c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong **ppuStack_60;
  longlong lStack_58;
  ulonglong **ppuStack_50;
  ulonglong *puStack_48;
  ulonglong *puStack_40;
  ulonglong *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puVar1 = (ulonglong *)(param_2 + 0xb8);
  uVar4 = *(ulonglong *)(param_2 + 0xb8);
  if (uVar4 < 0xfffffffffffffff0 && (char)(((uint)uVar4 & 8) >> 3) == '\0') {
    LOCK();
    uVar3 = *puVar1;
    if (uVar4 == uVar3) {
      *puVar1 = uVar4 + 0x10;
    }
    UNLOCK();
    if (uVar4 != uVar3) goto LAB_140a2c5fe;
  }
  else {
LAB_140a2c5fe:
    pdb_142dbb5f0(puVar1,0,param_3,1000000000);
  }
  pdb_140e9a150(puVar1);
  pdb_140e9a150((ulonglong)puVar1 | 1);
  puVar2 = (ulonglong *)(param_2 + 0x80);
  uVar4 = *(ulonglong *)(param_2 + 0x80);
  puStack_38 = puVar1;
  if (uVar4 < 0xfffffffffffffff0 && (char)(((uint)uVar4 & 8) >> 3) == '\0') {
    LOCK();
    uVar3 = *puVar2;
    if (uVar4 == uVar3) {
      *puVar2 = uVar4 + 0x10;
    }
    UNLOCK();
    if (uVar4 != uVar3) goto LAB_140a2c654;
  }
  else {
LAB_140a2c654:
    pdb_142dbb5f0(puVar2,0,param_3,1000000000);
  }
  pdb_140e9a150(puVar2);
  pdb_140e9a150((ulonglong)puVar2 | 1);
  puVar1 = (ulonglong *)(param_2 + 0x60);
  uVar4 = *(ulonglong *)(param_2 + 0x60);
  puStack_40 = puVar2;
  if (uVar4 < 0xfffffffffffffff0 && (char)(((uint)uVar4 & 8) >> 3) == '\0') {
    LOCK();
    uVar3 = *puVar1;
    if (uVar4 == uVar3) {
      *puVar1 = uVar4 + 0x10;
    }
    UNLOCK();
    if (uVar4 == uVar3) goto LAB_140a2c6c5;
  }
  pdb_142dbb5f0(puVar1,0,param_3,1000000000);
LAB_140a2c6c5:
  pdb_140e9a150(puVar1);
  pdb_140e9a150((ulonglong)puVar1 | 1);
  lStack_70 = *(longlong *)(param_2 + 0x70);
  lStack_68 = lStack_70 + *(longlong *)(param_2 + 0x78) * 8;
  ppuStack_60 = &puStack_38;
  ppuStack_50 = &puStack_40;
  lStack_58 = param_2;
  puStack_48 = puVar1;
  pdb_1415ec700(param_1,&lStack_70);
  puVar2 = puStack_48;
  pdb_140e9a350(puStack_48);
  pdb_140e9a350((ulonglong)puVar1 | 1);
  LOCK();
  uVar4 = *puVar2;
  *puVar2 = *puVar2 - 0x10;
  UNLOCK();
  if ((uVar4 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar2);
  }
  puVar1 = puStack_40;
  pdb_140e9a350(puStack_40);
  pdb_140e9a350((ulonglong)puVar1 | 1);
  LOCK();
  uVar4 = *puVar1;
  *puVar1 = *puVar1 - 0x10;
  UNLOCK();
  if ((uVar4 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar1);
  }
  puVar1 = puStack_38;
  pdb_140e9a350(puStack_38);
  pdb_140e9a350((ulonglong)puVar1 | 1);
  LOCK();
  uVar4 = *puVar1;
  *puVar1 = *puVar1 - 0x10;
  UNLOCK();
  if ((uVar4 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar1);
  }
  return param_1;
}

