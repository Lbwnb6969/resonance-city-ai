// VA 0x142189650, PDB extent 379 bytes
// system_clutter::inter_shape_stitches::detect_intra_shape_corners::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::detect_intra_shape_corners::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
   Extent: 379 */

void pdb_142189650(longlong *param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uStack_59;
  undefined4 *puStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code *pcStack_40;
  
  uVar2 = *(ulonglong *)(param_4 + 0x210);
  if (*(ulonglong *)(param_2 + 8) < uVar2) {
    lVar9 = *(longlong *)(param_4 + 0x208);
    uVar3 = *(ulonglong *)(lVar9 + *(ulonglong *)(param_2 + 8) * 8);
    if (uVar3 != 0) {
      lVar4 = *(longlong *)(param_4 + 0x1d8);
      lVar7 = ~uVar3 * 0x40;
      if ((((*(longlong *)(lVar4 + 0x20 + lVar7) != 0) && (*(ulonglong *)(param_2 + 0x18) < uVar2))
          && (uVar3 = *(ulonglong *)(lVar9 + *(ulonglong *)(param_2 + 0x18) * 8), uVar3 != 0)) &&
         (((lVar8 = ~uVar3 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar8) != 0 &&
           (*(ulonglong *)(param_2 + 0x28) < uVar2)) &&
          ((uVar2 = *(ulonglong *)(lVar9 + *(ulonglong *)(param_2 + 0x28) * 8), uVar2 != 0 &&
           (lVar9 = ~uVar2 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar9) != 0)))))) {
        lVar7 = lVar7 + lVar4;
        lVar5 = *(longlong *)(lVar7 + 0x10);
        uVar1 = *param_3;
        lVar8 = lVar8 + lVar4;
        lVar6 = *(longlong *)(lVar8 + 0x10);
        lVar9 = lVar9 + lVar4;
        lVar4 = *(longlong *)(lVar9 + 0x10);
        *param_1 = param_2;
        param_1[1] = lVar5;
        param_1[2] = lVar7 + 0x38;
        param_1[3] = lVar7 + 0x3c;
        *(undefined4 *)(param_1 + 4) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
        param_1[5] = param_2 + 0x10;
        param_1[6] = lVar6;
        param_1[7] = lVar8 + 0x38;
        param_1[8] = lVar8 + 0x3c;
        *(undefined4 *)(param_1 + 9) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x4c) = param_5;
        param_1[10] = param_2 + 0x20;
        param_1[0xb] = lVar4;
        param_1[0xc] = lVar9 + 0x38;
        param_1[0xd] = lVar9 + 0x3c;
        *(undefined4 *)(param_1 + 0xe) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x74) = param_5;
        return;
      }
    }
  }
  puStack_58 = param_3 + 1;
  pcStack_50 = pdb_140f33ec0;
  puStack_48 = &uStack_59;
  pcStack_40 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1434697ff,&puStack_58,&UNK_143469898);
}

