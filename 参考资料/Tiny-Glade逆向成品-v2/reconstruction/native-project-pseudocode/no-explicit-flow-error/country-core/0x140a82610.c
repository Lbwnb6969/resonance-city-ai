// VA 0x140a82610, PDB extent 511 bytes
// country_core::resources::daily::DailyThemeInfo::get_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/daily.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::daily::DailyThemeInfo::get_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/daily.rs
   Extent: 511 */

undefined * pdb_140a82610(longlong param_1,int *param_2,longlong param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  
  if ((param_3 == 5) && ((char)param_2[1] != 'S' || *param_2 != 0x552d6e65)) {
    if ((char)param_2[1] == 'E' && *param_2 == 0x442d6564) {
      uVar2 = 1;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'S' && *param_2 == 0x452d7365) {
      uVar2 = 2;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'R' && *param_2 == 0x462d7266) {
      uVar2 = 3;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'T' && *param_2 == 0x492d7469) {
      uVar2 = 4;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'P' && *param_2 == 0x4a2d616a) {
      uVar2 = 5;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'R' && *param_2 == 0x4b2d6f6b) {
      uVar2 = 6;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'L' && *param_2 == 0x502d6c70) {
      uVar2 = 7;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'R' && *param_2 == 0x422d7470) {
      uVar2 = 8;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'U' && *param_2 == 0x522d7572) {
      uVar2 = 9;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'E' && *param_2 == 0x532d7673) {
      uVar2 = 10;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'R' && *param_2 == 0x542d7274) {
      uVar2 = 0xb;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'A' && *param_2 == 0x552d6b75) {
      uVar2 = 0xc;
      goto LAB_140a82777;
    }
    if ((char)param_2[1] == 'N' && *param_2 == 0x432d687a) {
      uVar2 = 0xd;
      goto LAB_140a82777;
    }
  }
  uVar2 = 0;
LAB_140a82777:
  if (uVar2 < *(ulonglong *)(param_1 + 0x10)) {
    puVar3 = *(undefined **)(*(longlong *)(param_1 + 8) + 8 + uVar2 * 0x18);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  puVar1 = &UNK_143042c18;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  return puVar1;
}

