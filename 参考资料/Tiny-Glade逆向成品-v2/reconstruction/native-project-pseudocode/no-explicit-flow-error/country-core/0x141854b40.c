// VA 0x141854b40, PDB extent 526 bytes
// country_core::startup::swap_replacement_mods::_::impl$0::validate_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::swap_replacement_mods::_::impl$0::validate_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 526 */

void pdb_141854b40(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar1 = *(ulonglong *)(param_3 + 0x210);
  uVar7 = 8;
  puVar6 = &UNK_143354638;
  puVar5 = &UNK_143343060;
  if (*param_2 < uVar1) {
    lVar2 = *(longlong *)(param_3 + 0x208);
    uVar3 = *(ulonglong *)(lVar2 + *param_2 * 8);
    if ((uVar3 != 0) &&
       (lVar4 = *(longlong *)(param_3 + 0x1d8), *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
      puVar6 = &UNK_143354640;
      if ((param_2[1] < uVar1) &&
         ((uVar3 = *(ulonglong *)(lVar2 + param_2[1] * 8), uVar3 != 0 &&
          (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
        uVar7 = 0x11;
        puVar6 = &UNK_14335466f;
        if ((uVar1 <= param_2[2]) ||
           ((uVar3 = *(ulonglong *)(lVar2 + param_2[2] * 8), uVar3 == 0 ||
            (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) == 0)))) goto LAB_141854d22;
        uVar7 = 10;
        puVar6 = &UNK_143354690;
        if ((uVar1 <= param_2[3]) ||
           ((uVar3 = *(ulonglong *)(lVar2 + param_2[3] * 8), uVar3 == 0 ||
            (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) == 0)))) goto LAB_141854d22;
        uVar7 = 0x10;
        puVar6 = &UNK_143354680;
        if ((uVar1 <= param_2[4]) ||
           ((uVar3 = *(ulonglong *)(lVar2 + param_2[4] * 8), uVar3 == 0 ||
            (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) == 0)))) goto LAB_141854d22;
        puVar6 = &UNK_143354663;
        if ((param_2[5] < uVar1) &&
           ((uVar3 = *(ulonglong *)(lVar2 + param_2[5] * 8), uVar3 != 0 &&
            (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
          uVar7 = 0xb;
          puVar6 = &UNK_14335464c;
          if ((uVar1 <= param_2[6]) ||
             ((uVar3 = *(ulonglong *)(lVar2 + param_2[6] * 8), uVar3 == 0 ||
              (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) == 0)))) goto LAB_141854d22;
          puVar6 = &UNK_143354657;
          puVar5 = &UNK_143355db2;
          if ((param_2[7] < uVar1) && (uVar1 = *(ulonglong *)(lVar2 + param_2[7] * 8), uVar1 != 0))
          {
            uVar7 = 0xc;
            if (*(longlong *)(lVar4 + 0x20 + ~uVar1 * 0x40) != 0) {
              *param_1 = 0x8000000000000001;
              return;
            }
            goto LAB_141854d22;
          }
        }
      }
      uVar7 = 0xc;
    }
  }
LAB_141854d22:
  param_1[1] = puVar5;
  param_1[2] = 0x17;
  param_1[3] = 0x8000000000000000;
  param_1[4] = puVar6;
  param_1[5] = uVar7;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = 0x8000000000000000;
  return;
}

