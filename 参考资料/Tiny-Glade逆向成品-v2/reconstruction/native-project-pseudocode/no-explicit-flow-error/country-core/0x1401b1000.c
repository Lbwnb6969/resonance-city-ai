// VA 0x1401b1000, PDB extent 362 bytes
// country_core::systems::ui::resources::slider3d::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 362 */

void pdb_1401b1000(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,
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
  undefined1 uStack_51;
  undefined4 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar2 = *(ulonglong *)(param_4 + 0x210);
  if (*param_2 < uVar2) {
    lVar10 = *(longlong *)(param_4 + 0x208);
    uVar3 = *(ulonglong *)(lVar10 + *param_2 * 8);
    if (uVar3 != 0) {
      lVar4 = *(longlong *)(param_4 + 0x1d8);
      lVar8 = ~uVar3 * 0x40;
      if ((((*(longlong *)(lVar4 + 0x20 + lVar8) != 0) && (param_2[1] < uVar2)) &&
          (uVar3 = *(ulonglong *)(lVar10 + param_2[1] * 8), uVar3 != 0)) &&
         (((lVar9 = ~uVar3 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar9) != 0 && (param_2[6] < uVar2))
          && ((uVar2 = *(ulonglong *)(lVar10 + param_2[6] * 8), uVar2 != 0 &&
              (lVar10 = ~uVar2 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar10) != 0)))))) {
        lVar8 = lVar8 + lVar4;
        uVar5 = *(undefined8 *)(lVar8 + 0x10);
        uVar1 = *param_3;
        lVar9 = lVar9 + lVar4;
        uVar6 = *(undefined8 *)(lVar9 + 0x10);
        lVar10 = lVar10 + lVar4;
        uVar7 = *(undefined8 *)(lVar10 + 0x10);
        *param_1 = param_2 + 2;
        param_1[1] = uVar5;
        param_1[2] = lVar8 + 0x38;
        param_1[3] = lVar8 + 0x3c;
        *(undefined4 *)(param_1 + 4) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
        param_1[5] = uVar6;
        param_1[6] = lVar9 + 0x38;
        param_1[7] = lVar9 + 0x3c;
        *(undefined4 *)(param_1 + 8) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x44) = param_5;
        param_1[9] = uVar7;
        param_1[10] = lVar10 + 0x38;
        param_1[0xb] = lVar10 + 0x3c;
        *(undefined4 *)(param_1 + 0xc) = uVar1;
        *(undefined4 *)((longlong)param_1 + 100) = param_5;
        return;
      }
    }
  }
  puStack_50 = param_3 + 1;
  pcStack_48 = pdb_140f33ec0;
  puStack_40 = &uStack_51;
  pcStack_38 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142e521c7,&puStack_50,&UNK_142e52260);
}

