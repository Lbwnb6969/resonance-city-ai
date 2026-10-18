// VA 0x141855180, PDB extent 783 bytes
// country_core::systems::world_raster::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::world_raster::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 783 */

void pdb_141855180(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uStack_69;
  undefined4 *puStack_68;
  code *pcStack_60;
  undefined1 *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  if ((*param_2 < *(ulonglong *)(param_4 + 0x210)) &&
     (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + *param_2 * 8), uVar2 != 0)) {
    lVar8 = ~uVar2 * 0x40;
    if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar8) != 0) {
      lVar8 = *(longlong *)(param_4 + 0x1d8) + lVar8;
      if ((param_2[1] < *(ulonglong *)(param_4 + 0x210)) &&
         (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[1] * 8), uVar2 != 0)) {
        lVar9 = ~uVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar9) != 0) {
          uVar1 = *param_3;
          lVar9 = *(longlong *)(param_4 + 0x1d8) + lVar9;
          uStack_48 = *(undefined8 *)(lVar9 + 0x10);
          uVar2 = *(ulonglong *)(param_4 + 0x210);
          if (param_2[2] < uVar2) {
            lVar13 = *(longlong *)(param_4 + 0x208);
            uVar3 = *(ulonglong *)(lVar13 + param_2[2] * 8);
            if (uVar3 != 0) {
              lVar11 = *(longlong *)(param_4 + 0x1d8);
              lVar10 = ~uVar3 * 0x40;
              if ((((*(longlong *)(lVar11 + 0x20 + lVar10) != 0) && (param_2[3] < uVar2)) &&
                  (uVar3 = *(ulonglong *)(lVar13 + param_2[3] * 8), uVar3 != 0)) &&
                 (lVar12 = ~uVar3 * 0x40, *(longlong *)(lVar11 + 0x20 + lVar12) != 0)) {
                if (((param_2[4] < uVar2) &&
                    (uVar2 = *(ulonglong *)(lVar13 + param_2[4] * 8), uVar2 != 0)) &&
                   (lVar13 = ~uVar2 * 0x40, *(longlong *)(lVar11 + 0x20 + lVar13) != 0)) {
                  lVar10 = lVar10 + lVar11;
                  uVar4 = *(undefined8 *)(lVar10 + 0x10);
                  lVar12 = lVar12 + lVar11;
                  uVar5 = *(undefined8 *)(lVar12 + 0x10);
                  lVar13 = lVar13 + lVar11;
                  uVar6 = *(undefined8 *)(lVar13 + 0x10);
                  if ((param_2[5] < *(ulonglong *)(param_4 + 0x210)) &&
                     (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[5] * 8),
                     uVar2 != 0)) {
                    lVar11 = ~uVar2 * 0x40;
                    if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar11) != 0) {
                      lVar11 = *(longlong *)(param_4 + 0x1d8) + lVar11;
                      uVar7 = *(undefined8 *)(lVar11 + 0x10);
                      *param_1 = *(undefined8 *)(lVar8 + 0x10);
                      param_1[1] = lVar8 + 0x38;
                      param_1[2] = lVar8 + 0x3c;
                      *(undefined4 *)(param_1 + 3) = uVar1;
                      *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
                      param_1[4] = uStack_48;
                      param_1[5] = lVar9 + 0x38;
                      param_1[6] = lVar9 + 0x3c;
                      *(undefined4 *)(param_1 + 7) = uVar1;
                      *(undefined4 *)((longlong)param_1 + 0x3c) = param_5;
                      param_1[8] = uVar4;
                      param_1[9] = lVar10 + 0x38;
                      param_1[10] = lVar10 + 0x3c;
                      *(undefined4 *)(param_1 + 0xb) = uVar1;
                      *(undefined4 *)((longlong)param_1 + 0x5c) = param_5;
                      param_1[0xc] = uVar5;
                      param_1[0xd] = lVar12 + 0x38;
                      param_1[0xe] = lVar12 + 0x3c;
                      *(undefined4 *)(param_1 + 0xf) = uVar1;
                      *(undefined4 *)((longlong)param_1 + 0x7c) = param_5;
                      param_1[0x10] = uVar6;
                      param_1[0x11] = lVar13 + 0x38;
                      param_1[0x12] = lVar13 + 0x3c;
                      *(undefined4 *)(param_1 + 0x13) = uVar1;
                      *(undefined4 *)((longlong)param_1 + 0x9c) = param_5;
                      param_1[0x14] = uVar7;
                      param_1[0x15] = lVar11 + 0x38;
                      param_1[0x16] = lVar11 + 0x3c;
                      *(undefined4 *)(param_1 + 0x17) = uVar1;
                      *(undefined4 *)((longlong)param_1 + 0xbc) = param_5;
                      return;
                    }
                  }
                }
                goto LAB_141855416;
              }
            }
          }
          puStack_68 = param_3 + 1;
          pcStack_60 = pdb_140f33ec0;
          puStack_58 = &uStack_69;
          pcStack_50 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143343077,&puStack_68,&UNK_143343110);
        }
      }
    }
  }
LAB_141855416:
  puStack_68 = param_3 + 1;
  pcStack_60 = pdb_140f33ec0;
  puStack_58 = &uStack_69;
  pcStack_50 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143343077,&puStack_68,&UNK_143343128);
}

