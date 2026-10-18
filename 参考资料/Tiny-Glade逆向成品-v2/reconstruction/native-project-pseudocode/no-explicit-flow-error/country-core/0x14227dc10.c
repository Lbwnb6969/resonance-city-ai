// VA 0x14227dc10, PDB extent 510 bytes
// country_core::systems::paths::draw_path::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::paths::draw_path::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
   Extent: 510 */

void pdb_14227dc10(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uStack_51;
  undefined4 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((*param_2 < *(ulonglong *)(param_4 + 0x210)) &&
     (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + *param_2 * 8), uVar2 != 0)) {
    lVar7 = ~uVar2 * 0x40;
    if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar7) != 0) {
      lVar7 = *(longlong *)(param_4 + 0x1d8) + lVar7;
      if ((param_2[1] < *(ulonglong *)(param_4 + 0x210)) &&
         (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[1] * 8), uVar2 != 0)) {
        lVar6 = ~uVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar6) != 0) {
          uVar1 = *param_3;
          lVar6 = *(longlong *)(param_4 + 0x1d8) + lVar6;
          uVar3 = *(undefined8 *)(lVar6 + 0x10);
          if ((param_2[2] < *(ulonglong *)(param_4 + 0x210)) &&
             (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[2] * 8), uVar2 != 0))
          {
            lVar8 = ~uVar2 * 0x40;
            if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar8) != 0) {
              lVar8 = *(longlong *)(param_4 + 0x1d8) + lVar8;
              uVar4 = *(undefined8 *)(lVar8 + 0x10);
              if ((param_2[3] < *(ulonglong *)(param_4 + 0x210)) &&
                 (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[3] * 8),
                 uVar2 != 0)) {
                lVar9 = ~uVar2 * 0x40;
                if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar9) != 0) {
                  lVar9 = *(longlong *)(param_4 + 0x1d8) + lVar9;
                  uVar5 = *(undefined8 *)(lVar9 + 0x10);
                  *param_1 = *(undefined8 *)(lVar7 + 0x10);
                  param_1[1] = lVar7 + 0x38;
                  param_1[2] = lVar7 + 0x3c;
                  *(undefined4 *)(param_1 + 3) = uVar1;
                  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
                  param_1[4] = uVar3;
                  param_1[5] = lVar6 + 0x38;
                  param_1[6] = lVar6 + 0x3c;
                  *(undefined4 *)(param_1 + 7) = uVar1;
                  *(undefined4 *)((longlong)param_1 + 0x3c) = param_5;
                  param_1[8] = uVar4;
                  param_1[9] = lVar8 + 0x38;
                  param_1[10] = lVar8 + 0x3c;
                  *(undefined4 *)(param_1 + 0xb) = uVar1;
                  *(undefined4 *)((longlong)param_1 + 0x5c) = param_5;
                  param_1[0xc] = uVar5;
                  param_1[0xd] = lVar9 + 0x38;
                  param_1[0xe] = lVar9 + 0x3c;
                  *(undefined4 *)(param_1 + 0xf) = uVar1;
                  *(undefined4 *)((longlong)param_1 + 0x7c) = param_5;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  puStack_50 = param_3 + 1;
  pcStack_48 = pdb_140f33ec0;
  puStack_40 = &uStack_51;
  pcStack_38 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1434ca72f,&puStack_50,&UNK_1434ca7e0);
}

