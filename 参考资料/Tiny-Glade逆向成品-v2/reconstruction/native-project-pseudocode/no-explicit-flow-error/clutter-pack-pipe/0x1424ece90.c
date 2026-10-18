// VA 0x1424ece90, PDB extent 705 bytes
// clutter_pack_pipe::impl$48::serialize<rancor::Strategy<rkyv::ser::Serializer<rkyv::util::alloc::aligned_vec::AlignedVec<16>,rkyv::ser::allocator::alloc::ArenaHandle,rkyv::ser::sharing::alloc::Share>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clutter_pack_pipe::impl$48::serialize<rancor::Strategy<rkyv::ser::Serializer<rkyv::util::alloc::aligned_vec::AlignedVec<16>,rkyv::ser::allocator::alloc::ArenaHandle,rkyv::ser::sharing::alloc::Share>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 705 */

void pdb_1424ece90(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong *unaff_R13;
  longlong lVar9;
  undefined4 *unaff_R14;
  longlong *plVar10;
  longlong lStack_50;
  
  uVar6 = 0;
  uVar4 = 0;
  puVar3 = param_1;
  if (SBORROW8(0,*param_2)) {
LAB_1424ecf11:
    lStack_50 = param_4;
    if (SBORROW8(0,param_2[3])) {
LAB_1424ecf38:
      lVar2 = param_2[6];
    }
    else {
      uVar1 = param_2[5];
      uVar6 = 1;
      if (uVar1 < 9) {
        lStack_50 = 0;
        goto LAB_1424ecf38;
      }
      if ((uVar1 & 0xc0000000) != 0) goto LAB_1424ed047;
      lVar2 = param_2[4];
      lStack_50 = param_3[2];
      lVar9 = lStack_50;
      if ((ulonglong)(param_3[1] - lStack_50) < uVar1) {
        pdb_142d8ee80(param_3,uVar1);
        lVar9 = param_3[2];
      }
      pub_142e32760(*param_3 + lVar9,lVar2,uVar1);
      unaff_R13 = (longlong *)(lVar9 + uVar1);
      param_3[2] = (longlong)unaff_R13;
      lVar2 = param_2[6];
      unaff_R14 = param_1;
      uVar6 = 1;
    }
    uVar5 = 0;
    if (!SBORROW8(0,lVar2)) {
      uVar1 = param_2[8];
      uVar5 = 1;
      unaff_R13 = (longlong *)0x0;
      if (8 < uVar1) {
        if ((uVar1 & 0xc0000000) != 0) goto LAB_1424ed047;
        lVar2 = param_2[7];
        unaff_R13 = (longlong *)param_3[2];
        plVar10 = unaff_R13;
        if ((ulonglong)(param_3[1] - (longlong)unaff_R13) < uVar1) {
          pdb_142d8ee80(param_3,uVar1);
          plVar10 = (longlong *)param_3[2];
        }
        pub_142e32760(*param_3 + (longlong)plVar10,lVar2,uVar1);
        unaff_R14 = (undefined4 *)((longlong)plVar10 + uVar1);
        param_3[2] = (longlong)unaff_R14;
      }
    }
    uVar7 = 0;
    if (!SBORROW8(0,param_2[9])) {
      uVar1 = param_2[0xb];
      uVar7 = 1;
      unaff_R14 = (undefined4 *)0x0;
      if (8 < uVar1) {
        if ((uVar1 & 0xc0000000) != 0) goto LAB_1424ed047;
        lVar2 = param_2[10];
        unaff_R14 = (undefined4 *)param_3[2];
        puVar8 = unaff_R14;
        if ((ulonglong)(param_3[1] - (longlong)unaff_R14) < uVar1) {
          pdb_142d8ee80(param_3,uVar1);
          puVar8 = (undefined4 *)param_3[2];
        }
        pub_142e32760(*param_3 + (longlong)puVar8,lVar2,uVar1);
        param_3[2] = (longlong)puVar8 + uVar1;
      }
    }
    *param_1 = uVar4;
    param_1[1] = (int)puVar3;
    param_1[2] = uVar6;
    param_1[3] = (int)lStack_50;
    param_1[4] = uVar5;
    param_1[5] = (int)unaff_R13;
    param_1[6] = uVar7;
    param_1[7] = (int)unaff_R14;
  }
  else {
    uVar1 = param_2[2];
    uVar4 = 1;
    puVar3 = (undefined4 *)0x0;
    if (uVar1 < 9) goto LAB_1424ecf11;
    if ((uVar1 & 0xc0000000) == 0) {
      lVar2 = param_2[1];
      puVar3 = (undefined4 *)param_3[2];
      puVar8 = puVar3;
      if ((ulonglong)(param_3[1] - (longlong)puVar3) < uVar1) {
        pdb_142d8ee80(param_3,uVar1);
        puVar8 = (undefined4 *)param_3[2];
      }
      pub_142e32760(*param_3 + (longlong)puVar8,lVar2,uVar1);
      param_3[2] = (longlong)puVar8 + uVar1;
      unaff_R13 = param_3;
      unaff_R14 = param_1;
      goto LAB_1424ecf11;
    }
LAB_1424ed047:
    *param_1 = 2;
  }
  return;
}

