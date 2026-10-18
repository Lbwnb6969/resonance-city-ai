// VA 0x141644020, PDB extent 339 bytes
// utils::selective_deserialize::impl$1::deserialize<utils::selective_deserialize::SelectiveDeserialize<country_core::systems::save::snapshot_gc::SnapshotsKey,alloc::vec::Vec<country_core::resources::history::ResolvedHistoryChainSnapshot,alloc::alloc::Global> >,country_core::systems::save::snapshot_gc::HistoryKey,ref_mut$<serde_json::de::Deserializer<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/selective_deserialize.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::selective_deserialize::impl$1::deserialize<utils::selective_deserialize::SelectiveDeserialize<country_core::systems::save::snapshot_gc::SnapshotsKey,alloc::vec::Vec<country_core::resources::history::ResolvedHistoryChainSnapshot,alloc::alloc::Global>
   >,country_core::systems::save::snapshot_gc::HistoryKey,ref_mut$<serde_json::de::Deserializer<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/selective_deserialize.rs
   Extent: 339 */

longlong * pdb_141644020(longlong *param_1,undefined8 param_2)

{
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lStack_38 = -0x8000000000000000;
  pbStack_20 = (byte *)pdb_14165e970(param_2,&UNK_14332219f,0xbb,&UNK_1433215d8,1,&lStack_38);
  if (pbStack_20 != (byte *)0x0) {
    if (*(longlong *)pbStack_20 == 1) {
      pdb_1404b38e0(pbStack_20 + 8);
    }
    else if ((*(longlong *)pbStack_20 == 0) && (*(ulonglong *)(pbStack_20 + 0x10) != 0)) {
      pub_1406abac0(*(byte **)(pbStack_20 + 8),*(ulonglong *)(pbStack_20 + 0x10),1);
    }
    pub_1406abac0(pbStack_20,0x28,8);
  }
  if (SBORROW8(0,lStack_38)) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    param_1[2] = lStack_28;
    *param_1 = lStack_38;
    param_1[1] = lStack_30;
  }
  return param_1;
}

