// VA 0x140bb9a80, PDB extent 424 bytes
// utils::calculate_hash<enum2$<core::option::Option<ref$<std::ffi::os_str::OsStr> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<enum2$<core::option::Option<ref$<std::ffi::os_str::OsStr> > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 424 */

ulonglong pdb_140bb9a80(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
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
  lVar1 = *param_1;
  uVar2 = param_1[1];
  uStack_68 = (ulonglong)(lVar1 != 0);
  pdb_1400b0640(&lStack_60,&uStack_68,8);
  if (lVar1 != 0) {
    uStack_68 = uVar2;
    pdb_1400b0640(&lStack_60,&uStack_68,8);
    pdb_1400b0640(&lStack_60,lVar1,uVar2);
  }
  uStack_28 = lStack_30 << 0x38 | uStack_28;
  uStack_48 = uStack_48 ^ uStack_28;
  uVar2 = lStack_60 + uStack_50;
  uVar4 = (uStack_50 << 0xd | uStack_50 >> 0x33) ^ uVar2;
  uVar3 = (uStack_48 << 0x10 | uStack_48 >> 0x30) ^ lStack_58 + uStack_48;
  uVar5 = lStack_58 + uStack_48 + uVar4;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar5;
  uVar3 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar2;
  uVar2 = (uVar2 ^ uStack_28) + uVar4;
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

