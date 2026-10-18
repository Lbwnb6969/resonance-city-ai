// VA 0x140a2d600, PDB extent 648 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::mesh_library::AssetMeshLibrary::remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 648 */

void pdb_140a2d600(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong lStack_48;
  longlong lStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lStack_48 = param_1 + 0x30;
  lStack_40 = param_2;
  if (*(char *)(param_1 + 0x28) != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143066330,0x2b,&lStack_48,&UNK_1430663a0,&UNK_143066458);
  }
  pbVar5 = (byte *)pdb_1400af0a0(param_1 + 0x50,&lStack_40);
  pdb_140ca9d10(lStack_48,pbVar5,&lStack_40);
  if (pbVar5 != (byte *)0x0) {
    pbStack_38 = pbVar5;
    pdb_14098a960(pbVar5);
    pub_1406abac0(pbStack_38,0x80,8);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  if (uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar7 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar7 * 8) == param_2) {
        uVar9 = uVar7 + 1;
        uVar8 = uVar7;
        if (uVar9 < uVar2) {
          if (((int)uVar2 + (int)uVar7 & 1U) == 0) {
            lVar4 = *(longlong *)(lVar3 + 8 + uVar7 * 8);
            if (lVar4 != param_2) {
              *(longlong *)(lVar3 + uVar7 * 8) = lVar4;
              uVar8 = uVar7 + 1;
            }
            uVar9 = uVar7 + 2;
          }
          if (uVar2 - 2 != uVar7) {
            do {
              lVar4 = *(longlong *)(lVar3 + uVar9 * 8);
              if (lVar4 == param_2) {
                lVar4 = *(longlong *)(lVar3 + 8 + uVar9 * 8);
              }
              else {
                *(longlong *)(lVar3 + uVar8 * 8) = lVar4;
                uVar8 = uVar8 + 1;
                lVar4 = *(longlong *)(lVar3 + 8 + uVar9 * 8);
              }
              if (lVar4 != param_2) {
                *(longlong *)(lVar3 + uVar8 * 8) = lVar4;
                uVar8 = uVar8 + 1;
              }
              uVar9 = uVar9 + 2;
            } while (uVar2 != uVar9);
          }
        }
        *(ulonglong *)(param_1 + 0x78) = uVar8;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  uVar2 = param_1 + 0x80;
  LOCK();
  bVar10 = *(longlong *)(param_1 + 0x80) == 0;
  if (bVar10) {
    *(longlong *)(param_1 + 0x80) = 8;
  }
  UNLOCK();
  if (!bVar10) {
    pdb_142dbc1f0(uVar2);
  }
  pdb_140e9a150(uVar2);
  pbStack_38 = (byte *)uVar2;
  pdb_140e9a150(uVar2 | 1);
  pdb_1417bd5b0(param_1 + 0x88,&lStack_40);
  plVar1 = (longlong *)(param_1 + 0x80);
  pdb_140e9a350(plVar1);
  pdb_140e9a350();
  LOCK();
  lVar3 = *plVar1;
  if (lVar3 == 8) {
    *plVar1 = 0;
  }
  UNLOCK();
  if (lVar3 != 8) {
    pdb_142dbca40(plVar1,0);
  }
  uVar6 = pdb_1400af0a0(param_1 + 0xe0,&lStack_40);
  pdb_140caa210(param_1 + 0xc0,uVar6,&lStack_40);
  return;
}

