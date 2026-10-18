// VA 0x1400b02c0, PDB extent 358 bytes
// utils::calculate_hash<tiny_glade::gui::gui_tod::do_time_of_day_screen::CircleType>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<tiny_glade::gui::gui_tod::do_time_of_day_screen::CircleType>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 358 */

ulonglong pdb_1400b02c0(byte *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  undefined8 uStack_8;
  
  lStack_48 = 0x736f6d6570736575;
  lStack_40 = 0x6c7967656e657261;
  uStack_38 = 0x646f72616e646f6d;
  uStack_30 = 0x7465646279746573;
  uStack_28 = 0;
  uStack_20 = 0;
  lStack_18 = 0;
  uStack_10 = 0;
  uStack_8 = 0;
  uStack_50 = (ulonglong)*param_1;
  pdb_1400b0640(&lStack_48,&uStack_50,8);
  uStack_10 = lStack_18 << 0x38 | uStack_10;
  uStack_30 = uStack_30 ^ uStack_10;
  uVar1 = lStack_48 + uStack_38;
  uVar3 = (uStack_38 << 0xd | uStack_38 >> 0x33) ^ uVar1;
  uVar2 = (uStack_30 << 0x10 | uStack_30 >> 0x30) ^ lStack_40 + uStack_30;
  uVar4 = lStack_40 + uStack_30 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar4;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = (uVar1 ^ uStack_10) + uVar3;
  uVar4 = ((uVar4 << 0x20 | uVar4 >> 0x20) ^ 0xff) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar4;
  uVar4 = uVar4 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar4;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = uVar1 + uVar3;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar4;
  uVar4 = uVar4 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar4;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1 + uVar3;
  uVar1 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar4;
  uVar4 = uVar4 + uVar3;
  return (uVar4 << 0x20 | uVar4 >> 0x20) ^ (uVar3 << 0x11 | uVar3 >> 0x2f) ^
         (uVar1 << 0x15 | uVar1 >> 0x2b) ^ uVar4;
}

