// VA 0x1424ed160, PDB extent 27 bytes
// clutter_pack_pipe::impl$23::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clutter_pack_pipe::impl$23::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 27 */

bool pdb_1424ed160(byte *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((*param_1 < 2) && (param_1[8] < 2)) && (param_1[0x10] < 2)) {
    bVar1 = 1 < param_1[0x18];
  }
  return bVar1;
}

