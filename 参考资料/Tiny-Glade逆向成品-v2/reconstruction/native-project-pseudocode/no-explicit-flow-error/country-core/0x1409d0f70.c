// VA 0x1409d0f70, PDB extent 386 bytes
// country_core::render::nani::maintenance::sync_external_capacity<country_core::resources::roofs::roof_buffers::WoodenGablePlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/maintenance.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::maintenance::sync_external_capacity<country_core::resources::roofs::roof_buffers::WoodenGablePlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/maintenance.rs
   Extent: 386 */

void pdb_1409d0f70(byte param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bStack_4a;
  byte bStack_49;
  byte *pbStack_48;
  code *pcStack_40;
  ulonglong *puStack_38;
  code *pcStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  puVar1 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c930);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1);
    if (lVar2 != 0) {
      uStack_28 = *(ulonglong *)(lVar2 + 0x50);
      uVar3 = (ulonglong)param_1;
      if (uStack_28 != *(ulonglong *)(param_3 + 0x1258 + uVar3 * 8)) {
        uVar4 = 0x100000;
        bStack_4a = param_1;
        if ((0xfffd1bfU >> (param_1 & 0x1f) & 1) == 0) {
          if ((0x2840U >> (param_1 & 0x1f) & 1) == 0) {
            pbStack_48 = &bStack_4a;
            pcStack_40 = pdb_140a593a0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14303d454,&pbStack_48,&UNK_14303d488);
          }
        }
        else {
          uVar4 = *(ulonglong *)(&UNK_14302dad0 + uVar3 * 8);
        }
        if (uVar4 < uStack_28) {
          pbStack_48 = &bStack_4a;
          pcStack_40 = pdb_140a593a0;
          puStack_38 = &uStack_28;
          pcStack_30 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14303d4a0,&pbStack_48,&UNK_14303d4d8);
        }
        bStack_49 = param_1;
        uStack_20 = uStack_28;
        if ((uStack_28 & 0x3f) != 0) {
          pbStack_48 = &bStack_49;
          pcStack_40 = pdb_140a593a0;
          puStack_38 = &uStack_20;
          pcStack_30 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14303d4f0,&pbStack_48,&UNK_14303d530);
        }
        *(ulonglong *)(param_3 + 0x1258 + uVar3 * 8) = uStack_28;
        *(undefined1 *)(param_3 + 0x1350) = 1;
        lVar2 = param_4[2];
        if (lVar2 == *param_4) {
          pdb_142d7e910(param_4);
        }
        *(byte *)(param_4[1] + lVar2) = param_1;
        param_4[2] = lVar2 + 1;
      }
    }
  }
  return;
}

