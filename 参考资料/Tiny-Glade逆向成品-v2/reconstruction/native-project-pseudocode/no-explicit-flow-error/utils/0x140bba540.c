// VA 0x140bba540, PDB extent 620 bytes
// utils::calculate_hash<tuple$<ref$<slice2$<array$<u32,3> > >,ref$<slice2$<glam::u32::uvec3::UVec3> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::calculate_hash<tuple$<ref$<slice2$<array$<u32,3> >
   >,ref$<slice2$<glam::u32::uvec3::UVec3> > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 620 */

ulonglong pdb_140bba540(longlong *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  lStack_78 = 0x736f6d6570736575;
  lStack_70 = 0x6c7967656e657261;
  uStack_68 = 0x646f72616e646f6d;
  uStack_60 = 0x7465646279746573;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar6 = *param_1;
  lVar8 = param_1[1];
  lStack_80 = lVar8;
  pdb_1400b0640(&lStack_78,&lStack_80,8);
  if (lVar8 != 0) {
    lVar8 = lVar8 * 0xc;
    do {
      lStack_80 = 3;
      pdb_1400b0640(&lStack_78,&lStack_80,8);
      pdb_1400b0640(&lStack_78,lVar6,0xc);
      lVar8 = lVar8 + -0xc;
      lVar6 = lVar6 + 0xc;
    } while (lVar8 != 0);
  }
  puVar5 = (undefined4 *)param_1[2];
  lVar6 = param_1[3];
  lStack_80 = lVar6;
  pdb_1400b0640(&lStack_78,&lStack_80,8);
  if (lVar6 != 0) {
    puVar1 = puVar5 + lVar6 * 3;
    do {
      lStack_80._0_4_ = *puVar5;
      pdb_1400b0640(&lStack_78,&lStack_80,4);
      lStack_80._0_4_ = puVar5[1];
      pdb_1400b0640(&lStack_78,&lStack_80,4);
      lStack_80 = CONCAT44(lStack_80._4_4_,puVar5[2]);
      pdb_1400b0640(&lStack_78,&lStack_80,4);
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar1);
  }
  uStack_40 = lStack_48 << 0x38 | uStack_40;
  uStack_60 = uStack_60 ^ uStack_40;
  uVar2 = lStack_78 + uStack_68;
  uVar4 = (uStack_68 << 0xd | uStack_68 >> 0x33) ^ uVar2;
  uVar3 = (uStack_60 << 0x10 | uStack_60 >> 0x30) ^ lStack_70 + uStack_60;
  uVar7 = lStack_70 + uStack_60 + uVar4;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar7;
  uVar3 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar2;
  uVar2 = (uVar2 ^ uStack_40) + uVar4;
  uVar7 = ((uVar7 << 0x20 | uVar7 >> 0x20) ^ 0xff) + uVar3;
  uVar4 = (uVar4 << 0xd | uVar4 >> 0x33) ^ uVar2;
  uVar3 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar4;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar7;
  uVar3 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar2;
  uVar2 = uVar2 + uVar4;
  uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0xd | uVar4 >> 0x33) ^ uVar2;
  uVar3 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar4;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar7;
  uVar3 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar2;
  uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0xd | uVar4 >> 0x33) ^ uVar2 + uVar4;
  uVar2 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar4;
  return (uVar7 << 0x20 | uVar7 >> 0x20) ^ (uVar4 << 0x11 | uVar4 >> 0x2f) ^
         (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar7;
}

