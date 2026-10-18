// VA 0x1401b3320, PDB extent 523 bytes
// system_decorator::ui_systems::ui_move_decorator::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_move_decorator::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 523 */

void pdb_1401b3320(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uStack_49;
  undefined4 *puStack_48;
  code *pcStack_40;
  undefined1 *puStack_38;
  code *pcStack_30;
  
  uVar2 = *(ulonglong *)(param_4 + 0x210);
  if (param_2[2] < uVar2) {
    lVar10 = *(longlong *)(param_4 + 0x208);
    uVar3 = *(ulonglong *)(lVar10 + param_2[2] * 8);
    if (uVar3 != 0) {
      lVar4 = *(longlong *)(param_4 + 0x1d8);
      lVar9 = ~uVar3 * 0x40;
      if (((((*(longlong *)(lVar4 + 0x20 + lVar9) != 0) && (param_2[3] < uVar2)) &&
           (uVar3 = *(ulonglong *)(lVar10 + param_2[3] * 8), uVar3 != 0)) &&
          (((lVar12 = ~uVar3 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar12) != 0 && (*param_2 < uVar2)
            ) && ((uVar3 = *(ulonglong *)(lVar10 + *param_2 * 8), uVar3 != 0 &&
                  ((lVar13 = ~uVar3 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar13) != 0 &&
                   (param_2[1] < uVar2)))))))) &&
         ((uVar3 = *(ulonglong *)(lVar10 + param_2[1] * 8), uVar3 != 0 &&
          ((((lVar11 = ~uVar3 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar11) != 0 &&
             (param_2[4] < uVar2)) && (uVar2 = *(ulonglong *)(lVar10 + param_2[4] * 8), uVar2 != 0))
           && (lVar10 = ~uVar2 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar10) != 0)))))) {
        lVar9 = lVar9 + lVar4;
        lVar12 = lVar12 + lVar4;
        uVar5 = *(undefined8 *)(lVar12 + 0x10);
        lVar13 = lVar13 + lVar4;
        uVar6 = *(undefined8 *)(lVar13 + 0x10);
        lVar11 = lVar11 + lVar4;
        uVar7 = *(undefined8 *)(lVar11 + 0x10);
        lVar10 = lVar10 + lVar4;
        uVar8 = *(undefined8 *)(lVar10 + 0x10);
        *param_1 = *(undefined8 *)(lVar9 + 0x10);
        param_1[1] = lVar9 + 0x38;
        param_1[2] = lVar9 + 0x3c;
        uVar1 = *param_3;
        *(undefined4 *)(param_1 + 3) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
        param_1[4] = uVar5;
        param_1[5] = lVar12 + 0x38;
        param_1[6] = lVar12 + 0x3c;
        *(undefined4 *)(param_1 + 7) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x3c) = param_5;
        param_1[8] = uVar6;
        param_1[9] = lVar13 + 0x38;
        param_1[10] = lVar13 + 0x3c;
        *(undefined4 *)(param_1 + 0xb) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x5c) = param_5;
        param_1[0xc] = uVar7;
        param_1[0xd] = lVar11 + 0x38;
        param_1[0xe] = lVar11 + 0x3c;
        *(undefined4 *)(param_1 + 0xf) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x7c) = param_5;
        param_1[0x10] = uVar8;
        param_1[0x11] = lVar10 + 0x38;
        param_1[0x12] = lVar10 + 0x3c;
        *(undefined4 *)(param_1 + 0x13) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x9c) = param_5;
        return;
      }
    }
  }
  puStack_48 = param_3 + 1;
  pcStack_40 = pdb_140f33ec0;
  puStack_38 = &uStack_49;
  pcStack_30 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142e521c7,&puStack_48,&UNK_142e52260);
}

