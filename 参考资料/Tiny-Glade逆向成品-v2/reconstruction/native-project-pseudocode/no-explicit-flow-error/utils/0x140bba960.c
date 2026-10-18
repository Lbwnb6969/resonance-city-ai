// VA 0x140bba960, PDB extent 1046 bytes
// utils::calculate_hash<tuple$<ref$<slice2$<utils::geometry::intersect::Triangle> >,ref$<slice2$<array$<glam::u32::uvec3::UVec3,3> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<tuple$<ref$<slice2$<utils::geometry::intersect::Triangle>
   >,ref$<slice2$<array$<glam::u32::uvec3::UVec3,3> > > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 1046 */

ulonglong pdb_140bba960(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lStack_b0;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *puStack_98;
  undefined4 *puStack_90;
  longlong lStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  lStack_88 = 0x736f6d6570736575;
  lStack_80 = 0x6c7967656e657261;
  uStack_78 = 0x646f72616e646f6d;
  uStack_70 = 0x7465646279746573;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar11 = (undefined4 *)*param_1;
  lVar7 = param_1[1];
  lStack_b0 = lVar7;
  puStack_98 = param_1;
  pdb_1400b0640(&lStack_88,&lStack_b0,8);
  if (lVar7 != 0) {
    puStack_90 = puVar11 + lVar7 * 9;
    do {
      uVar2 = puVar11[1];
      uVar3 = puVar11[2];
      uVar4 = puVar11[3];
      uVar5 = puVar11[4];
      uVar6 = puVar11[5];
      uStack_a4 = puVar11[6];
      uStack_a0 = puVar11[7];
      uStack_9c = puVar11[8];
      lStack_b0._0_4_ = *puVar11;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = uVar2;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = uVar3;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = uVar4;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = uVar5;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = uVar6;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = uStack_a4;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = uStack_a0;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0 = CONCAT44(lStack_b0._4_4_,uStack_9c);
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      puVar11 = puVar11 + 9;
    } while (puVar11 != puStack_90);
  }
  puVar11 = (undefined4 *)puStack_98[2];
  lVar7 = puStack_98[3];
  lStack_b0 = lVar7;
  pdb_1400b0640(&lStack_88,&lStack_b0,8);
  if (lVar7 != 0) {
    puVar1 = puVar11 + lVar7 * 9;
    do {
      lStack_b0 = 3;
      pdb_1400b0640(&lStack_88,&lStack_b0,8);
      lStack_b0._0_4_ = *puVar11;
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = puVar11[1];
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = puVar11[2];
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = puVar11[3];
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = puVar11[4];
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = puVar11[5];
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = puVar11[6];
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0._0_4_ = puVar11[7];
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      lStack_b0 = CONCAT44(lStack_b0._4_4_,puVar11[8]);
      pdb_1400b0640(&lStack_88,&lStack_b0,4);
      puVar11 = puVar11 + 9;
    } while (puVar11 != puVar1);
  }
  uStack_50 = lStack_58 << 0x38 | uStack_50;
  uStack_70 = uStack_70 ^ uStack_50;
  uVar8 = lStack_88 + uStack_78;
  uVar10 = (uStack_78 << 0xd | uStack_78 >> 0x33) ^ uVar8;
  uVar9 = (uStack_70 << 0x10 | uStack_70 >> 0x30) ^ lStack_80 + uStack_70;
  uVar12 = lStack_80 + uStack_70 + uVar10;
  uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar9;
  uVar10 = (uVar10 << 0x11 | uVar10 >> 0x2f) ^ uVar12;
  uVar9 = (uVar9 << 0x15 | uVar9 >> 0x2b) ^ uVar8;
  uVar8 = (uVar8 ^ uStack_50) + uVar10;
  uVar12 = ((uVar12 << 0x20 | uVar12 >> 0x20) ^ 0xff) + uVar9;
  uVar10 = (uVar10 << 0xd | uVar10 >> 0x33) ^ uVar8;
  uVar9 = (uVar9 << 0x10 | uVar9 >> 0x30) ^ uVar12;
  uVar12 = uVar12 + uVar10;
  uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar9;
  uVar10 = (uVar10 << 0x11 | uVar10 >> 0x2f) ^ uVar12;
  uVar9 = (uVar9 << 0x15 | uVar9 >> 0x2b) ^ uVar8;
  uVar8 = uVar8 + uVar10;
  uVar12 = (uVar12 << 0x20 | uVar12 >> 0x20) + uVar9;
  uVar10 = (uVar10 << 0xd | uVar10 >> 0x33) ^ uVar8;
  uVar9 = (uVar9 << 0x10 | uVar9 >> 0x30) ^ uVar12;
  uVar12 = uVar12 + uVar10;
  uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar9;
  uVar10 = (uVar10 << 0x11 | uVar10 >> 0x2f) ^ uVar12;
  uVar9 = (uVar9 << 0x15 | uVar9 >> 0x2b) ^ uVar8;
  uVar12 = (uVar12 << 0x20 | uVar12 >> 0x20) + uVar9;
  uVar10 = (uVar10 << 0xd | uVar10 >> 0x33) ^ uVar8 + uVar10;
  uVar8 = (uVar9 << 0x10 | uVar9 >> 0x30) ^ uVar12;
  uVar12 = uVar12 + uVar10;
  return (uVar12 << 0x20 | uVar12 >> 0x20) ^ (uVar10 << 0x11 | uVar10 >> 0x2f) ^
         (uVar8 << 0x15 | uVar8 >> 0x2b) ^ uVar12;
}

