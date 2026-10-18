// VA 0x1401b31d0, PDB extent 331 bytes
// system_decorator::ui_systems::ui_move_decorator::_::impl$0::validate_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_move_decorator::_::impl$0::validate_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 331 */

void pdb_1401b31d0(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = *(ulonglong *)(param_3 + 0x210);
  uVar5 = 0xd;
  puVar7 = &UNK_142e5f8ed;
  if (param_2[2] < uVar1) {
    lVar2 = *(longlong *)(param_3 + 0x208);
    uVar3 = *(ulonglong *)(lVar2 + param_2[2] * 8);
    if ((uVar3 != 0) &&
       (lVar4 = *(longlong *)(param_3 + 0x1d8), *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
      puVar7 = &UNK_142e5f8e0;
      if ((param_2[3] < uVar1) &&
         ((uVar3 = *(ulonglong *)(lVar2 + param_2[3] * 8), uVar3 != 0 &&
          (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
        uVar5 = 9;
        puVar7 = &UNK_142e5fb21;
        if (((*param_2 < uVar1) &&
            (((uVar3 = *(ulonglong *)(lVar2 + *param_2 * 8), uVar3 != 0 &&
              (param_2[1] < uVar1 && *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) &&
             (uVar3 = *(ulonglong *)(lVar2 + param_2[1] * 8), uVar3 != 0)))) &&
           (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
          uVar5 = 7;
          puVar7 = &UNK_142e5fb2a;
          if (((param_2[4] < uVar1) && (uVar1 = *(ulonglong *)(lVar2 + param_2[4] * 8), uVar1 != 0))
             && (*(longlong *)(lVar4 + 0x20 + ~uVar1 * 0x40) != 0)) {
            uVar6 = 0x8000000000000001;
            goto LAB_1401b3314;
          }
        }
      }
    }
  }
  param_1[1] = &UNK_142e521b0;
  param_1[2] = 0x17;
  uVar6 = 0x8000000000000000;
  param_1[3] = 0x8000000000000000;
  param_1[4] = puVar7;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 6) = 0;
LAB_1401b3314:
  *param_1 = uVar6;
  return;
}

