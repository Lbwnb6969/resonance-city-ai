// VA 0x14170c450, PDB extent 39 bytes
// asset::texture::desc::impl$71::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::texture::desc::impl$71::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
   Extent: 39 */

bool pdb_14170c450(byte *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((*param_1 < 2) && (param_1[0xc] < 2)) && (param_1[0x10] < 3)) &&
     ((param_1[0x18] < 4 && (param_1[0x19] < 2)))) {
    bVar1 = 1 < param_1[0x1a];
  }
  return bVar1;
}

