// VA 0x1424e5c10, PDB extent 146 bytes
// clutter_pack_pipe::impl$47::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clutter_pack_pipe::impl$47::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 146 */

ulonglong pdb_1424e5c10(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*param_1 != '\0') {
    if (*param_1 != '\x01') goto LAB_1424e5c98;
    cVar1 = pdb_14150fb80(param_1 + 4,param_2);
    if (cVar1 != '\0') goto LAB_1424e5c98;
  }
  if (param_1[0xc] != '\0') {
    if (param_1[0xc] != '\x01') goto LAB_1424e5c98;
    cVar1 = pdb_14150fb80(param_1 + 0x10,param_2);
    if (cVar1 != '\0') goto LAB_1424e5c98;
  }
  if (param_1[0x18] != '\0') {
    if (param_1[0x18] != '\x01') goto LAB_1424e5c98;
    cVar1 = pdb_14150fb80(param_1 + 0x1c,param_2);
    if (cVar1 != '\0') goto LAB_1424e5c98;
  }
  if (param_1[0x24] != '\0') {
    if (param_1[0x24] != '\x01') goto LAB_1424e5c98;
    cVar1 = pdb_14150fb80(param_1 + 0x28,param_2);
    if (cVar1 != '\0') goto LAB_1424e5c98;
  }
  uVar2 = 0;
LAB_1424e5c98:
  return uVar2 & 0xffffffff;
}

