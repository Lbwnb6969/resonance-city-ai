// VA 0x140a2f820, PDB extent 464 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 464 */

undefined8 * pdb_140a2f820(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  uVar8 = _UNK_14303a6d8;
  uVar7 = _DAT_14303a6d0;
  uVar6 = _UNK_14303a6c8;
  uVar5 = _DAT_14303a6c0;
  puVar11 = param_2;
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    lVar10 = *plVar9;
    puVar11 = (undefined8 *)plVar9[1];
  }
  else {
    lVar10 = pdb_140f4fd10();
    *plVar9 = lVar10;
    plVar9[1] = (longlong)puVar11;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  *plVar9 = lVar10 + 1;
  plVar9 = (longlong *)*param_2;
  LOCK();
  lVar2 = *plVar9;
  *plVar9 = *plVar9 + 1;
  UNLOCK();
  if (*plVar9 != 0 && SCARRY8(lVar2,1) == *plVar9 < 0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    uVar3 = *param_3;
    LOCK();
    piVar1 = (int *)((uVar3 & 0xfffffffffffffffc) + 0x10 + (ulonglong)((uint)uVar3 & 3) * 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[5] = 0;
    param_1[9] = uVar5;
    param_1[10] = uVar6;
    param_1[0xb] = uVar7;
    param_1[0xc] = uVar8;
    param_1[6] = 0;
    param_1[7] = 1;
    param_1[8] = 0;
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar6;
    param_1[0xf] = uVar7;
    param_1[0x10] = uVar8;
    param_1[0x11] = lVar10;
    param_1[0x12] = puVar11;
    param_1[0x13] = plVar9;
    param_1[0x17] = 4;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    param_1[0x14] = uVar3;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

