// VA 0x142620600, PDB extent 472 bytes
// turbosloth::store::_::impl$0::serialize<ref_mut$<bincode::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::_::impl$0::serialize<ref_mut$<bincode::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 472 */

undefined8 pdb_142620600(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  param_2 = (longlong *)*param_2;
  lVar5 = param_2[2];
  if ((ulonglong)(*param_2 - lVar5) < 8) {
    pdb_142d7f1b0(param_2,lVar5,8,1,1);
    lVar5 = param_2[2];
  }
  *(ulonglong *)(param_2[1] + lVar5) = uVar2;
  lVar5 = lVar5 + 8;
  param_2[2] = lVar5;
  lVar4 = *param_2;
  if ((ulonglong)(lVar4 - lVar5) < uVar2) {
    pdb_142d7f1b0(param_2,lVar5,uVar2,1,1);
    lVar5 = param_2[2];
LAB_142620657:
    pub_142e32760(param_2[1] + lVar5,uVar1,uVar2);
    lVar4 = *param_2;
  }
  else if (uVar2 != 0) goto LAB_142620657;
  lVar5 = lVar5 + uVar2;
  param_2[2] = lVar5;
  uVar1 = *param_1;
  uVar3 = param_1[1];
  if ((ulonglong)(lVar4 - lVar5) < 0x10) {
    pdb_142d7f1b0(param_2,lVar5,0x10,1,1);
    lVar5 = param_2[2];
  }
  lVar4 = param_2[1];
  *(undefined8 *)(lVar4 + 8 + lVar5) = uVar3;
  *(undefined8 *)(lVar4 + lVar5) = uVar1;
  lVar5 = lVar5 + 0x10;
  param_2[2] = lVar5;
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  if ((ulonglong)(*param_2 - lVar5) < 8) {
    pdb_142d7f1b0(param_2,lVar5,8,1,1);
    lVar5 = param_2[2];
  }
  *(ulonglong *)(param_2[1] + lVar5) = uVar2;
  lVar5 = lVar5 + 8;
  param_2[2] = lVar5;
  if ((ulonglong)(*param_2 - lVar5) < uVar2) {
    pdb_142d7f1b0(param_2,lVar5,uVar2,1,1);
    lVar5 = param_2[2];
  }
  else if (uVar2 == 0) goto LAB_1426206e4;
  pub_142e32760(param_2[1] + lVar5,uVar1,uVar2);
LAB_1426206e4:
  param_2[2] = lVar5 + uVar2;
  return 0;
}

