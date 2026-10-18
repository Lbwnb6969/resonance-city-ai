// VA 0x1414af4c0, PDB extent 406 bytes
// utils::calculate_hash<tuple$<country_core::resources::walls::decorator::DecoratorId,ref$<str$> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<tuple$<country_core::resources::walls::decorator::DecoratorId,ref$<str$> >
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 406 */

ulonglong pdb_1414af4c0(undefined4 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uStack_5c;
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
  uStack_5c = *param_1;
  pdb_1400b0640(&lStack_58,&uStack_5c,4);
  pdb_1400b0640(&lStack_58,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
  uStack_5c = CONCAT31(uStack_5c._1_3_,0xff);
  pdb_1400b0640(&lStack_58,&uStack_5c,1);
  uStack_20 = lStack_28 << 0x38 | uStack_20;
  uStack_40 = uStack_40 ^ uStack_20;
  uVar1 = lStack_58 + uStack_48;
  uVar3 = (uStack_48 << 0xd | uStack_48 >> 0x33) ^ uVar1;
  uVar2 = (uStack_40 << 0x10 | uStack_40 >> 0x30) ^ lStack_50 + uStack_40;
  uVar4 = lStack_50 + uStack_40 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar4;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = (uVar1 ^ uStack_20) + uVar3;
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

