// VA 0x140bba3b0, PDB extent 385 bytes
// utils::calculate_hash<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::calculate_hash<ref$<slice2$<u8> > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 385 */

ulonglong pdb_140bba3b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uStack_68;
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
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uStack_68 = uVar2;
  pdb_1400b0640(&lStack_60,&uStack_68,8);
  pdb_1400b0640(&lStack_60,uVar1,uVar2);
  uStack_28 = lStack_30 << 0x38 | uStack_28;
  uStack_48 = uStack_48 ^ uStack_28;
  uVar3 = lStack_60 + uStack_50;
  uVar5 = (uStack_50 << 0xd | uStack_50 >> 0x33) ^ uVar3;
  uVar4 = (uStack_48 << 0x10 | uStack_48 >> 0x30) ^ lStack_58 + uStack_48;
  uVar6 = lStack_58 + uStack_48 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar6;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar3 = (uVar3 ^ uStack_28) + uVar5;
  uVar6 = ((uVar6 << 0x20 | uVar6 >> 0x20) ^ 0xff) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar6;
  uVar6 = uVar6 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar6;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar3 = uVar3 + uVar5;
  uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar6;
  uVar6 = uVar6 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar6;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3 + uVar5;
  uVar3 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar6;
  uVar6 = uVar6 + uVar5;
  return (uVar6 << 0x20 | uVar6 >> 0x20) ^ (uVar5 << 0x11 | uVar5 >> 0x2f) ^
         (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar6;
}

