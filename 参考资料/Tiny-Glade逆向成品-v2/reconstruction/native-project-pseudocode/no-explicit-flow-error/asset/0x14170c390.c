// VA 0x14170c390, PDB extent 184 bytes
// asset::mesh::impl$15::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::mesh::impl$15::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/mesh.rs
   Extent: 184 */

undefined8 pdb_14170c390(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uStack_30;
  longlong lStack_28;
  
  cVar1 = pdb_14150fb80();
  uVar2 = 1;
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 8);
    if (cVar1 == '\x02') {
      lVar3 = param_1 + *(int *)(param_1 + 0xc) + 0xc;
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x10) * 0xc;
    }
    else if (cVar1 == '\x01') {
      lVar3 = param_1 + *(int *)(param_1 + 0xc) + 0xc;
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x10) << 3;
    }
    else {
      if (cVar1 != '\0') {
        return 1;
      }
      lVar3 = param_1 + *(int *)(param_1 + 0xc) + 0xc;
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x10) << 2;
    }
    uStack_30 = 4;
    lStack_28 = lVar4;
    cVar1 = pdb_1417ddc40((longlong *)(param_2 + 0x20),lVar3,&uStack_30);
    if ((cVar1 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
      *(longlong *)(param_2 + 0x20) = lVar3 + lVar4;
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

