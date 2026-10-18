// VA 0x140bbb520, PDB extent 465 bytes
// utils::calculate_hash<tuple$<array$<u32,2>,array$<u32,2>,country_core::resources::walls::wall_holes::HoleType> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<tuple$<array$<u32,2>,array$<u32,2>,country_core::resources::walls::wall_holes::HoleType>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 465 */

ulonglong pdb_140bbb520(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  lStack_60 = 0x736f6d6570736575;
  lStack_58 = 0x6c7967656e657261;
  uStack_50 = 0x646f72616e646f6d;
  uStack_48 = 0x7465646279746573;
  uStack_40 = 0;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_68 = 2;
  pdb_1400b0640(&lStack_60,&uStack_68,8);
  pdb_1400b0640(&lStack_60,param_1,8);
  uStack_68 = 2;
  pdb_1400b0640(&lStack_60,&uStack_68,8);
  pdb_1400b0640(&lStack_60,param_1 + 8,8);
  uStack_68 = (ulonglong)*(byte *)(param_1 + 0x10);
  pdb_1400b0640(&lStack_60,&uStack_68,8);
  uStack_28 = lStack_30 << 0x38 | uStack_28;
  uStack_48 = uStack_48 ^ uStack_28;
  uVar1 = lStack_60 + uStack_50;
  uVar3 = (uStack_50 << 0xd | uStack_50 >> 0x33) ^ uVar1;
  uVar2 = (uStack_48 << 0x10 | uStack_48 >> 0x30) ^ lStack_58 + uStack_48;
  uVar4 = lStack_58 + uStack_48 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar4;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = (uVar1 ^ uStack_28) + uVar3;
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

