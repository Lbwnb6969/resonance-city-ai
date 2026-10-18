// VA 0x140bbba80, PDB extent 545 bytes
// utils::calculate_hash<tuple$<country_core::startup::startup_window_cut_sdf::WindowCutShape,array$<u32,2>,array$<u32,3>,array$<u32,2>,bool> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<tuple$<country_core::startup::startup_window_cut_sdf::WindowCutShape,array$<u32,2>,array$<u32,3>,array$<u32,2>,bool>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 545 */

ulonglong pdb_140bbba80(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  lStack_68 = 0x736f6d6570736575;
  lStack_60 = 0x6c7967656e657261;
  uStack_58 = 0x646f72616e646f6d;
  uStack_50 = 0x7465646279746573;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_70 = (ulonglong)*(byte *)(param_1 + 0x1c);
  pdb_1400b0640(&lStack_68,&uStack_70,8);
  uStack_70 = 2;
  pdb_1400b0640(&lStack_68,&uStack_70,8);
  pdb_1400b0640(&lStack_68,param_1,8);
  uStack_70 = 3;
  pdb_1400b0640(&lStack_68,&uStack_70,8);
  pdb_1400b0640(&lStack_68,param_1 + 8,0xc);
  uStack_70 = 2;
  pdb_1400b0640(&lStack_68,&uStack_70,8);
  pdb_1400b0640(&lStack_68,param_1 + 0x14,8);
  uStack_70 = CONCAT71(uStack_70._1_7_,*(undefined1 *)(param_1 + 0x1d));
  pdb_1400b0640(&lStack_68,&uStack_70,1);
  uStack_30 = lStack_38 << 0x38 | uStack_30;
  uStack_50 = uStack_50 ^ uStack_30;
  uVar1 = lStack_68 + uStack_58;
  uVar3 = (uStack_58 << 0xd | uStack_58 >> 0x33) ^ uVar1;
  uVar2 = (uStack_50 << 0x10 | uStack_50 >> 0x30) ^ lStack_60 + uStack_50;
  uVar4 = lStack_60 + uStack_50 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar4;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = (uVar1 ^ uStack_30) + uVar3;
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

