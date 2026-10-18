// VA 0x1428f8ec0, PDB extent 454 bytes
// utils::calculate_hash<ref_mut$<slice2$<array$<u32,2> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::calculate_hash<ref_mut$<slice2$<array$<u32,2> > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 454 */

ulonglong pdb_1428f8ec0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  lStack_70 = 0x736f6d6570736575;
  lStack_68 = 0x6c7967656e657261;
  uStack_60 = 0x646f72616e646f6d;
  uStack_58 = 0x7465646279746573;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  lVar4 = *param_1;
  lVar6 = param_1[1];
  lStack_78 = lVar6;
  pdb_1400b0640(&lStack_70,&lStack_78,8);
  if (lVar6 != 0) {
    lVar6 = lVar6 << 3;
    do {
      lStack_78 = 2;
      pdb_14216de20(&lStack_70,&lStack_78);
      pdb_14216de20(&lStack_70,lVar4);
      lVar6 = lVar6 + -8;
      lVar4 = lVar4 + 8;
    } while (lVar6 != 0);
  }
  uStack_38 = lStack_40 << 0x38 | uStack_38;
  uStack_58 = uStack_58 ^ uStack_38;
  uVar1 = lStack_70 + uStack_60;
  uVar3 = (uStack_60 << 0xd | uStack_60 >> 0x33) ^ uVar1;
  uVar2 = (uStack_58 << 0x10 | uStack_58 >> 0x30) ^ lStack_68 + uStack_58;
  uVar5 = lStack_68 + uStack_58 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar5;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = (uVar1 ^ uStack_38) + uVar3;
  uVar5 = ((uVar5 << 0x20 | uVar5 >> 0x20) ^ 0xff) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar5;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = uVar1 + uVar3;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar5;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1 + uVar3;
  uVar1 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar3;
  return (uVar5 << 0x20 | uVar5 >> 0x20) ^ (uVar3 << 0x11 | uVar3 >> 0x2f) ^
         (uVar1 << 0x15 | uVar1 >> 0x2b) ^ uVar5;
}

