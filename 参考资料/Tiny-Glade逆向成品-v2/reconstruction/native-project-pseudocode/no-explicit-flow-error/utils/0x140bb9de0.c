// VA 0x140bb9de0, PDB extent 520 bytes
// utils::calculate_hash<tuple$<u64,ref$<slice2$<glam::u32::uvec3::UVec3> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<tuple$<u64,ref$<slice2$<glam::u32::uvec3::UVec3> > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 520 */

ulonglong pdb_140bb9de0(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lStack_70;
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
  lStack_70 = *param_1;
  pdb_1400b0640(&lStack_68,&lStack_70,8);
  puVar6 = (undefined4 *)param_1[1];
  lVar2 = param_1[2];
  lStack_70 = lVar2;
  pdb_1400b0640(&lStack_68,&lStack_70,8);
  if (lVar2 != 0) {
    puVar1 = puVar6 + lVar2 * 3;
    do {
      lStack_70._0_4_ = *puVar6;
      pdb_1400b0640(&lStack_68,&lStack_70,4);
      lStack_70._0_4_ = puVar6[1];
      pdb_1400b0640(&lStack_68,&lStack_70,4);
      lStack_70 = CONCAT44(lStack_70._4_4_,puVar6[2]);
      pdb_1400b0640(&lStack_68,&lStack_70,4);
      puVar6 = puVar6 + 3;
    } while (puVar6 != puVar1);
  }
  uStack_30 = lStack_38 << 0x38 | uStack_30;
  uStack_50 = uStack_50 ^ uStack_30;
  uVar3 = lStack_68 + uStack_58;
  uVar5 = (uStack_58 << 0xd | uStack_58 >> 0x33) ^ uVar3;
  uVar4 = (uStack_50 << 0x10 | uStack_50 >> 0x30) ^ lStack_60 + uStack_50;
  uVar7 = lStack_60 + uStack_50 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar7;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar3 = (uVar3 ^ uStack_30) + uVar5;
  uVar7 = ((uVar7 << 0x20 | uVar7 >> 0x20) ^ 0xff) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar7;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar3 = uVar3 + uVar5;
  uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar7;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3 + uVar5;
  uVar3 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar5;
  return (uVar7 << 0x20 | uVar7 >> 0x20) ^ (uVar5 << 0x11 | uVar5 >> 0x2f) ^
         (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar7;
}

