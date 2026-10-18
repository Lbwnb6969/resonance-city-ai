// VA 0x140bbad80, PDB extent 623 bytes
// utils::calculate_hash<tuple$<u64,ref$<slice2$<array$<glam::u32::uvec2::UVec2,3> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<tuple$<u64,ref$<slice2$<array$<glam::u32::uvec2::UVec2,3> > > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 623 */

ulonglong pdb_140bbad80(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
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
  lStack_78 = *param_1;
  pdb_1400b0640(&lStack_70,&lStack_78,8);
  puVar7 = (undefined4 *)param_1[1];
  lVar3 = param_1[2];
  lStack_78 = lVar3;
  pdb_1400b0640(&lStack_70,&lStack_78,8);
  if (lVar3 != 0) {
    puVar1 = puVar7 + lVar3 * 6;
    do {
      lStack_78 = 3;
      pdb_1400b0640(&lStack_70,&lStack_78,8);
      uVar2 = puVar7[1];
      lStack_78._0_4_ = *puVar7;
      pdb_1400b0640(&lStack_70,&lStack_78,4);
      lStack_78._0_4_ = uVar2;
      pdb_1400b0640(&lStack_70,&lStack_78,4);
      lStack_78._0_4_ = puVar7[2];
      uVar2 = puVar7[3];
      pdb_1400b0640(&lStack_70,&lStack_78,4);
      lStack_78._0_4_ = uVar2;
      pdb_1400b0640(&lStack_70,&lStack_78,4);
      lStack_78._0_4_ = puVar7[4];
      uVar2 = puVar7[5];
      pdb_1400b0640(&lStack_70,&lStack_78,4);
      lStack_78 = CONCAT44(lStack_78._4_4_,uVar2);
      pdb_1400b0640(&lStack_70,&lStack_78,4);
      puVar7 = puVar7 + 6;
    } while (puVar7 != puVar1);
  }
  uStack_38 = lStack_40 << 0x38 | uStack_38;
  uStack_58 = uStack_58 ^ uStack_38;
  uVar4 = lStack_70 + uStack_60;
  uVar6 = (uStack_60 << 0xd | uStack_60 >> 0x33) ^ uVar4;
  uVar5 = (uStack_58 << 0x10 | uStack_58 >> 0x30) ^ lStack_68 + uStack_58;
  uVar8 = lStack_68 + uStack_58 + uVar6;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0x11 | uVar6 >> 0x2f) ^ uVar8;
  uVar5 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar4;
  uVar4 = (uVar4 ^ uStack_38) + uVar6;
  uVar8 = ((uVar8 << 0x20 | uVar8 >> 0x20) ^ 0xff) + uVar5;
  uVar6 = (uVar6 << 0xd | uVar6 >> 0x33) ^ uVar4;
  uVar5 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar8;
  uVar8 = uVar8 + uVar6;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0x11 | uVar6 >> 0x2f) ^ uVar8;
  uVar5 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar4;
  uVar4 = uVar4 + uVar6;
  uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0xd | uVar6 >> 0x33) ^ uVar4;
  uVar5 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar8;
  uVar8 = uVar8 + uVar6;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0x11 | uVar6 >> 0x2f) ^ uVar8;
  uVar5 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar4;
  uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0xd | uVar6 >> 0x33) ^ uVar4 + uVar6;
  uVar4 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar8;
  uVar8 = uVar8 + uVar6;
  return (uVar8 << 0x20 | uVar8 >> 0x20) ^ (uVar6 << 0x11 | uVar6 >> 0x2f) ^
         (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar8;
}

