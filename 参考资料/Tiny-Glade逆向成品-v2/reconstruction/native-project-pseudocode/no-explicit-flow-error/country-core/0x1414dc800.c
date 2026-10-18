// VA 0x1414dc800, PDB extent 268 bytes
// country_core::systems::paths::draw_path::_::impl$0::validate_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::paths::draw_path::_::impl$0::validate_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
   Extent: 268 */

void pdb_1414dc800(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar1 = *(ulonglong *)(param_3 + 0x210);
  uVar5 = 0xb;
  puVar6 = &UNK_1433158f6;
  if (*param_2 < uVar1) {
    lVar2 = *(longlong *)(param_3 + 0x208);
    uVar3 = *(ulonglong *)(lVar2 + *param_2 * 8);
    if ((uVar3 != 0) &&
       (lVar4 = *(longlong *)(param_3 + 0x1d8), *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
      uVar5 = 0xe;
      puVar6 = &UNK_1433158e8;
      if ((param_2[1] < uVar1) &&
         ((uVar3 = *(ulonglong *)(lVar2 + param_2[1] * 8), uVar3 != 0 &&
          (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
        puVar6 = &UNK_14331590f;
        if ((param_2[2] < uVar1) &&
           ((uVar3 = *(ulonglong *)(lVar2 + param_2[2] * 8), uVar3 != 0 &&
            (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
          puVar6 = &UNK_143315901;
          if ((param_2[3] < uVar1) &&
             ((uVar1 = *(ulonglong *)(lVar2 + param_2[3] * 8), uVar1 != 0 &&
              (*(longlong *)(lVar4 + 0x20 + ~uVar1 * 0x40) != 0)))) {
            *param_1 = 0x8000000000000001;
            return;
          }
        }
      }
    }
  }
  param_1[1] = &UNK_1433154c8;
  param_1[2] = 0x17;
  param_1[3] = 0x8000000000000000;
  param_1[4] = puVar6;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = 0x8000000000000000;
  return;
}

