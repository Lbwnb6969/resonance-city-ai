// VA 0x140bfbba0, PDB extent 507 bytes
// country_core::systems::history::replay_raster::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::history::replay_raster::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
   Extent: 507 */

void pdb_140bfbba0(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uStack_49;
  undefined4 *puStack_48;
  code *pcStack_40;
  undefined1 *puStack_38;
  code *pcStack_30;
  
  uVar2 = *(ulonglong *)(param_4 + 0x210);
  if (*param_2 < uVar2) {
    lVar9 = *(longlong *)(param_4 + 0x208);
    uVar3 = *(ulonglong *)(lVar9 + *param_2 * 8);
    if (uVar3 != 0) {
      lVar4 = *(longlong *)(param_4 + 0x1d8);
      lVar8 = ~uVar3 * 0x40;
      if (((((*(longlong *)(lVar4 + 0x20 + lVar8) != 0) && (param_2[1] < uVar2)) &&
           (uVar3 = *(ulonglong *)(lVar9 + param_2[1] * 8), uVar3 != 0)) &&
          ((lVar10 = ~uVar3 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar10) != 0 &&
           (param_2[2] < uVar2)))) &&
         ((uVar3 = *(ulonglong *)(lVar9 + param_2[2] * 8), uVar3 != 0 &&
          (lVar11 = ~uVar3 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar11) != 0)))) {
        if (((param_2[3] < uVar2) && (uVar2 = *(ulonglong *)(lVar9 + param_2[3] * 8), uVar2 != 0))
           && (lVar9 = ~uVar2 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar9) != 0)) {
          lVar8 = lVar8 + lVar4;
          uVar1 = *param_3;
          lVar10 = lVar10 + lVar4;
          uVar5 = *(undefined8 *)(lVar10 + 0x10);
          lVar11 = lVar11 + lVar4;
          uVar6 = *(undefined8 *)(lVar11 + 0x10);
          lVar9 = lVar9 + lVar4;
          uVar7 = *(undefined8 *)(lVar9 + 0x10);
          *param_1 = *(undefined8 *)(lVar8 + 0x10);
          param_1[1] = lVar8 + 0x38;
          param_1[2] = lVar8 + 0x3c;
          *(undefined4 *)(param_1 + 3) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
          param_1[4] = uVar5;
          param_1[5] = lVar10 + 0x38;
          param_1[6] = lVar10 + 0x3c;
          *(undefined4 *)(param_1 + 7) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0x3c) = param_5;
          param_1[8] = uVar6;
          param_1[9] = lVar11 + 0x38;
          param_1[10] = lVar11 + 0x3c;
          *(undefined4 *)(param_1 + 0xb) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0x5c) = param_5;
          param_1[0xc] = uVar7;
          param_1[0xd] = lVar9 + 0x38;
          param_1[0xe] = lVar9 + 0x3c;
          *(undefined4 *)(param_1 + 0xf) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0x7c) = param_5;
          param_1[0x10] = param_2 + 4;
          return;
        }
        puStack_48 = param_3 + 1;
        pcStack_40 = pdb_140f33ec0;
        puStack_38 = &uStack_49;
        pcStack_30 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143066eef,&puStack_48,&UNK_143066fa0);
      }
    }
  }
  puStack_48 = param_3 + 1;
  pcStack_40 = pdb_140f33ec0;
  puStack_38 = &uStack_49;
  pcStack_30 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143066eef,&puStack_48,&UNK_143066f88);
}

