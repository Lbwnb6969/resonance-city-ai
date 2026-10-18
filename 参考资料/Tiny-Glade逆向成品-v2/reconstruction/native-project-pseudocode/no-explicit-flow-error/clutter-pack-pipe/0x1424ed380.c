// VA 0x1424ed380, PDB extent 298 bytes
// clutter_pack_pipe::impl$55::serialize<rancor::Strategy<rkyv::ser::Serializer<rkyv::util::alloc::aligned_vec::AlignedVec<16>,rkyv::ser::allocator::alloc::ArenaHandle,rkyv::ser::sharing::alloc::Share>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clutter_pack_pipe::impl$55::serialize<rancor::Strategy<rkyv::ser::Serializer<rkyv::util::alloc::aligned_vec::AlignedVec<16>,rkyv::ser::allocator::alloc::ArenaHandle,rkyv::ser::sharing::alloc::Share>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 298 */

undefined4 * pdb_1424ed380(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  lVar7 = 0;
  if (8 < uVar2) {
    uVar3 = 1;
    if ((uVar2 & 0xc0000000) != 0) goto LAB_1424ed464;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    lVar7 = param_3[2];
    lVar6 = lVar7;
    if ((ulonglong)(param_3[1] - lVar7) < uVar2) {
      pdb_142d8ee80(param_3,uVar2);
      lVar6 = param_3[2];
    }
    pub_142e32760(*param_3 + lVar6,uVar4,uVar2);
    param_3[2] = lVar6 + uVar2;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = pdb_1417d0420(param_3,uVar4,*(undefined8 *)(param_2 + 0x30),uVar4);
  uVar3 = 1;
  if ((uVar2 & 1) == 0 && uVar2 != 2) {
    uVar2 = *(ulonglong *)(param_2 + 0x50);
    lVar6 = 0;
    if (8 < uVar2) {
      if ((uVar2 & 0xc0000000) != 0) goto LAB_1424ed464;
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      lVar6 = param_3[2];
      lVar5 = lVar6;
      if ((ulonglong)(param_3[1] - lVar6) < uVar2) {
        pdb_142d8ee80(param_3,uVar2);
        lVar5 = param_3[2];
      }
      pub_142e32760(*param_3 + lVar5,uVar1,uVar2);
      param_3[2] = lVar5 + uVar2;
    }
    param_1[1] = (int)lVar7;
    param_1[2] = (int)uVar4;
    param_1[3] = (int)lVar6;
    uVar3 = 0;
  }
LAB_1424ed464:
  *param_1 = uVar3;
  return param_1;
}

