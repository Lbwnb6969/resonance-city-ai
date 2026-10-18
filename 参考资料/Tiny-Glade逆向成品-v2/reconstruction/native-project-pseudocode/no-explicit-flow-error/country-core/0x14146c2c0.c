// VA 0x14146c2c0, PDB extent 397 bytes
// country_core::resources::walls::wall_holes::InProgressHoleStorage::extend<alloc::vec::Vec<tuple$<utils::wall_space::WallSpaceRegion,country_core::resources::walls::wall_holes::HoleType>,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::InProgressHoleStorage::extend<alloc::vec::Vec<tuple$<utils::wall_space::WallSpaceRegion,country_core::resources::walls::wall_holes::HoleType>,alloc::alloc::Global>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 397 */

void pdb_14146c2c0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_50;
  byte *pbStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lStack_50 = *param_2;
  pbVar3 = (byte *)param_2[1];
  uVar1 = param_2[2];
  pbStack_48 = pbVar3;
  if ((ulonglong)(*param_1 - param_1[2]) < uVar1) {
    uStack_39 = 0;
    pdb_142d7f1b0(param_1,param_1[2],uVar1,4,0x14);
  }
  else if (uVar1 == 0) goto LAB_14146c350;
  lVar2 = 0;
  do {
    if (pbVar3[lVar2 + 0x10] == 5) break;
    pbVar3 = pbVar3 + lVar2;
    uStack_68 = *(undefined4 *)pbVar3;
    uStack_64 = *(undefined4 *)(pbVar3 + 4);
    uStack_60 = *(undefined4 *)(pbVar3 + 8);
    uStack_5c = *(undefined4 *)(pbVar3 + 0xc);
    pdb_140c2b5e0(param_1,&uStack_68);
    lVar2 = lVar2 + 0x14;
    pbVar3 = pbStack_48;
  } while (uVar1 * 0x14 != lVar2);
LAB_14146c350:
  if (lStack_50 != 0) {
    pub_1406abac0(pbStack_48,lStack_50 * 0x14,4);
  }
  return;
}

