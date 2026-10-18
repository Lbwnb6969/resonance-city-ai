// VA 0x140a2d210, PDB extent 1000 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::asset_libraries::mesh_library::AssetMeshLibrary::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 1000 */

undefined8 * pdb_140a2d210(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  uint7 uStack_78;
  
  plVar12 = (longlong *)pdb_14008d710(0);
  if (plVar12 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_143326860);
    pcVar1 = (code *)swi(3);
    puVar17 = (undefined8 *)(*pcVar1)();
    return puVar17;
  }
  lVar2 = *plVar12;
  lVar3 = plVar12[1];
  *plVar12 = *plVar12 + 1;
  uVar11 = _UNK_1430662a8;
  uVar10 = _DAT_1430662a0;
  uVar9 = _UNK_143066298;
  uVar8 = _DAT_143066290;
  plVar12 = (longlong *)pdb_140f3bda0();
  if ((char)plVar12[2] == '\x01') {
    lVar14 = *plVar12;
    param_2 = plVar12[1];
  }
  else {
    lVar14 = pdb_140f4fd10();
    *plVar12 = lVar14;
    plVar12[1] = param_2;
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  *plVar12 = lVar14 + 1;
  uVar7 = _UNK_14303a6d8;
  uVar6 = _DAT_14303a6d0;
  uVar5 = _UNK_14303a6c8;
  uVar4 = _DAT_14303a6c0;
  lVar18 = param_2;
  plVar12 = (longlong *)pdb_140f3bda0();
  if ((char)plVar12[2] == '\x01') {
    lVar15 = *plVar12;
    lVar18 = plVar12[1];
  }
  else {
    lVar15 = pdb_140f4fd10();
    *plVar12 = lVar15;
    plVar12[1] = lVar18;
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  *plVar12 = lVar15 + 1;
  lVar19 = lVar18;
  plVar12 = (longlong *)pdb_140f3bda0();
  if ((char)plVar12[2] == '\x01') {
    lVar16 = *plVar12;
    lVar19 = plVar12[1];
  }
  else {
    lVar16 = pdb_140f4fd10();
    *plVar12 = lVar16;
    plVar12[1] = lVar19;
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  *plVar12 = lVar16 + 1;
  pdb_14007ee60();
  pbVar13 = pub_1406abab0(0x30,8);
  if (pbVar13 != (byte *)0x0) {
    pbVar13[0x10] = 0;
    pbVar13[0x11] = 0;
    pbVar13[0x18] = 0;
    pbVar13[0x19] = 0;
    pbVar13[0x1a] = 0;
    pbVar13[0x1b] = 0;
    pbVar13[0x1c] = 0;
    pbVar13[0x1d] = 0;
    pbVar13[0x1e] = 0;
    pbVar13[0x1f] = 0;
    pbVar13[0x20] = 8;
    pbVar13[0x21] = 0;
    pbVar13[0x22] = 0;
    pbVar13[0x23] = 0;
    pbVar13[0x24] = 0;
    pbVar13[0x25] = 0;
    pbVar13[0x26] = 0;
    pbVar13[0x27] = 0;
    pbVar13[0x28] = 0;
    pbVar13[0x29] = 0;
    pbVar13[0x2a] = 0;
    pbVar13[0x2b] = 0;
    pbVar13[0x2c] = 0;
    pbVar13[0x2d] = 0;
    pbVar13[0x2e] = 0;
    pbVar13[0x2f] = 0;
    pbVar13[0] = 1;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0;
    pbVar13[8] = 1;
    pbVar13[9] = 0;
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13[0xc] = 0;
    pbVar13[0xd] = 0;
    pbVar13[0xe] = 0;
    pbVar13[0xf] = 0;
    param_1[10] = lVar2;
    param_1[0xb] = lVar3;
    param_1[8] = uVar10;
    param_1[9] = uVar11;
    param_1[6] = uVar8;
    param_1[7] = uVar9;
    param_1[4] = 0;
    param_1[5] = (ulonglong)uStack_78 << 8;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 8;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = uVar4;
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar6;
    param_1[0x14] = uVar7;
    param_1[0x15] = lVar14;
    param_1[0x16] = param_2;
    param_1[0x17] = 0;
    param_1[0x18] = uVar4;
    param_1[0x19] = uVar5;
    param_1[0x1a] = uVar6;
    param_1[0x1b] = uVar7;
    param_1[0x1c] = lVar15;
    param_1[0x1d] = lVar18;
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    param_1[0x24] = lVar19;
    param_1[0x22] = uVar7;
    param_1[0x23] = lVar16;
    param_1[0x20] = uVar5;
    param_1[0x21] = uVar6;
    param_1[0x1e] = 0;
    param_1[0x1f] = uVar4;
    param_1[3] = pbVar13;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x30);
}

