// VA 0x1414af330, PDB extent 392 bytes
// utils::calculate_hash<tuple$<usize,u8> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::calculate_hash<tuple$<usize,u8> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 392 */

ulonglong pdb_1414af330(undefined8 *param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  
  lStack_58 = 0x736f6d6570736575;
  lStack_50 = 0x6c7967656e657261;
  uStack_48 = 0x646f72616e646f6d;
  uStack_40 = 0x7465646279746573;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_60 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  pdb_1400b0640(&lStack_58,&uStack_60,8);
  uStack_60 = CONCAT71(uStack_60._1_7_,uVar1);
  pdb_1400b0640(&lStack_58,&uStack_60,1);
  uStack_20 = lStack_28 << 0x38 | uStack_20;
  uStack_40 = uStack_40 ^ uStack_20;
  uVar2 = lStack_58 + uStack_48;
  uVar4 = (uStack_48 << 0xd | uStack_48 >> 0x33) ^ uVar2;
  uVar3 = (uStack_40 << 0x10 | uStack_40 >> 0x30) ^ lStack_50 + uStack_40;
  uVar5 = lStack_50 + uStack_40 + uVar4;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar5;
  uVar3 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar2;
  uVar2 = (uVar2 ^ uStack_20) + uVar4;
  uVar5 = ((uVar5 << 0x20 | uVar5 >> 0x20) ^ 0xff) + uVar3;
  uVar4 = (uVar4 << 0xd | uVar4 >> 0x33) ^ uVar2;
  uVar3 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar4;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar5;
  uVar3 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar2;
  uVar2 = uVar2 + uVar4;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0xd | uVar4 >> 0x33) ^ uVar2;
  uVar3 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar4;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar5;
  uVar3 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar2;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0xd | uVar4 >> 0x33) ^ uVar2 + uVar4;
  uVar2 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar4;
  return (uVar5 << 0x20 | uVar5 >> 0x20) ^ (uVar4 << 0x11 | uVar4 >> 0x2f) ^
         (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar5;
}

