// VA 0x142623a00, PDB extent 316 bytes
// turbosloth::util::_::impl$0::serialize<ref_mut$<bincode::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::util::_::impl$0::serialize<ref_mut$<bincode::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite>
   > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
   Extent: 316 */

undefined8 pdb_142623a00(byte *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2 = (longlong *)*param_2;
  lVar4 = param_2[2];
  if ((ulonglong)(*param_2 - lVar4) < 8) {
    pdb_142d7f1b0(param_2,lVar4,8,1,1);
    lVar4 = param_2[2];
  }
  *(undefined8 *)(param_2[1] + lVar4) = uVar1;
  lVar4 = lVar4 + 8;
  param_2[2] = lVar4;
  if ((*param_1 & 1) == 0) {
    if (*param_2 == lVar4) {
      pdb_142d7f1b0(param_2,lVar4,1,1,1);
      lVar4 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + lVar4) = 0;
    lVar4 = lVar4 + 1;
  }
  else {
    if (*param_2 == lVar4) {
      pdb_142d7f1b0(param_2,lVar4,1,1,1);
      lVar4 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + lVar4) = 1;
    lVar4 = lVar4 + 1;
    param_2[2] = lVar4;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if ((ulonglong)(*param_2 - lVar4) < 0x10) {
      pdb_142d7f1b0(param_2,lVar4,0x10,1,1);
      lVar4 = param_2[2];
    }
    lVar3 = param_2[1];
    *(undefined8 *)(lVar3 + 8 + lVar4) = uVar2;
    *(undefined8 *)(lVar3 + lVar4) = uVar1;
    lVar4 = lVar4 + 0x10;
  }
  param_2[2] = lVar4;
  return 0;
}

