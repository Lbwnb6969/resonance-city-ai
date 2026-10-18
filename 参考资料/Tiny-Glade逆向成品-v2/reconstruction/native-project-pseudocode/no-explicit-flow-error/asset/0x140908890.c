// VA 0x140908890, PDB extent 105 bytes
// asset::texture::blob::impl$31::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/blob.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::texture::blob::impl$31::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/blob.rs
   Extent: 105 */

byte pdb_140908890(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  bVar2 = 1;
  if ((*(byte *)(param_1 + 0x10) < 0xb9) && (*(byte *)(param_1 + 0x11) < 5)) {
    lVar3 = param_1 + *(int *)(param_1 + 0x14) + 0x14;
    uVar1 = *(uint *)(param_1 + 0x18);
    uStack_30 = 1;
    uStack_28 = (ulonglong)uVar1;
    bVar2 = pdb_1417ddc40((longlong *)(param_2 + 0x20),lVar3,&uStack_30);
    bVar2 = *(longlong *)(param_2 + 0x30) == 1 | bVar2;
    if (bVar2 == 0) {
      *(longlong *)(param_2 + 0x20) = lVar3 + (ulonglong)uVar1;
    }
  }
  return bVar2;
}

