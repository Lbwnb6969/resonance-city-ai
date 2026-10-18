// VA 0x140a2ec70, PDB extent 668 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::handle_to_bindless_index
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::handle_to_bindless_index
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 668 */

uint pdb_140a2ec70(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  ulonglong *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (param_2 < *(ulonglong *)(param_1 + 0x40)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + param_2) = 1;
  }
  puVar1 = (ulonglong *)(param_1 + 0xa8);
  uVar3 = *(ulonglong *)(param_1 + 0xa8);
  if (uVar3 < 0xfffffffffffffff0 && (char)(((uint)uVar3 & 8) >> 3) == '\0') {
    LOCK();
    uVar2 = *puVar1;
    if (uVar3 == uVar2) {
      *puVar1 = uVar3 + 0x10;
    }
    UNLOCK();
    if (uVar3 == uVar2) goto LAB_140a2ecdb;
  }
  pdb_142dbb5f0(puVar1,0,param_3,1000000000);
LAB_140a2ecdb:
  pdb_140e9a150(puVar1);
  uVar3 = (ulonglong)puVar1 | 1;
  pdb_140e9a150(uVar3);
  if ((param_2 < *(ulonglong *)(param_1 + 0xc0)) &&
     (*(int *)(*(longlong *)(param_1 + 0xb8) + param_2 * 8) != 0)) {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0xb8) + 4 + param_2 * 8);
    pdb_140e9a350(puVar1);
    pdb_140e9a350(uVar3);
    LOCK();
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 0x10;
    UNLOCK();
    if ((uVar3 & 0xfffffffffffffff2) == 0x12) {
      pdb_142dbbf50(puVar1);
    }
  }
  else {
    pdb_140e9a350(puVar1);
    pdb_140e9a350(uVar3);
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 0x10;
    UNLOCK();
    if ((uVar2 & 0xfffffffffffffff2) == 0x12) {
      pdb_142dbbf50(puVar1);
      LOCK();
      bVar5 = *puVar1 == 0;
      if (bVar5) {
        *puVar1 = 8;
      }
      UNLOCK();
    }
    else {
      LOCK();
      bVar5 = *puVar1 == 0;
      if (bVar5) {
        *puVar1 = 8;
      }
      UNLOCK();
    }
    if (!bVar5) {
      pdb_142dbc1f0(puVar1);
    }
    pdb_140e9a150(puVar1);
    pdb_140e9a150(uVar3);
    uVar4 = *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 200) = uVar4 + 1;
    puStack_40 = puVar1;
    if (0x1fdf < uVar4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14303a0a0,0x8f,&UNK_14303a130);
    }
    if (*(ulonglong *)(param_1 + 0x10) <= param_2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_2,*(ulonglong *)(param_1 + 0x10),&UNK_14303a148);
    }
    uStack_58 = 0x8000000000000000;
    puStack_50 = &UNK_143039dc8;
    uStack_48 = 0x27;
    uStack_60 = 0;
    pdb_14155a7a0(*(longlong *)(param_1 + 0x98) + 0x10,param_1 + 0xa0,&UNK_143039d01,&uStack_60,
                  param_2 * 8 + *(longlong *)(param_1 + 8),uVar4);
    pdb_1415e7d90(param_1 + 0xb0,param_2,1,uVar4);
    puVar1 = puStack_40;
    pdb_140e9a350(puStack_40);
    pdb_140e9a350();
    LOCK();
    uVar3 = *puVar1;
    if (uVar3 == 8) {
      *puVar1 = 0;
    }
    UNLOCK();
    if (uVar3 != 8) {
      pdb_142dbca40(puVar1,0);
    }
  }
  return uVar4;
}

