// VA 0x1417408b0, PDB extent 124 bytes
// turbosloth::asset::impl$67::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$67::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 124 */

undefined8 pdb_1417408b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  cVar2 = pdb_14150fb80();
  if (cVar2 != '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 8) != '\x01') {
    if (*(char *)(param_1 + 8) != '\0') {
      return 1;
    }
    lVar3 = param_1 + *(int *)(param_1 + 0xc) + 0xc;
    uVar1 = *(uint *)(param_1 + 0x10);
    uStack_30 = 1;
    uStack_28 = (ulonglong)uVar1;
    cVar2 = pdb_1417ddc40((longlong *)(param_2 + 0x20),lVar3,&uStack_30);
    if ((cVar2 != '\0') || (*(longlong *)(param_2 + 0x30) == 1)) {
      return 1;
    }
    *(longlong *)(param_2 + 0x20) = lVar3 + (ulonglong)uVar1;
  }
  return 0;
}

