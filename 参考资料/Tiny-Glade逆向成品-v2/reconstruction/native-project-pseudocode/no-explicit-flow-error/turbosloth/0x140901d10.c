// VA 0x140901d10, PDB extent 170 bytes
// core::ptr::drop_in_place<enum2$<turbosloth::asset::impl$38::read_file::async_fn_env$0<ref$<std::path::PathBuf> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<turbosloth::asset::impl$38::read_file::async_fn_env$0<ref$<std::path::PathBuf>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 170 */

void pdb_140901d10(longlong param_1)

{
  byte *arg0;
  undefined8 *puVar1;
  
  if (((*(char *)(param_1 + 0x50) == '\x03') && (*(char *)(param_1 + 0x48) == '\x03')) &&
     (*(char *)(param_1 + 0x41) == '\x03')) {
    arg0 = *(byte **)(param_1 + 0x20);
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(arg0);
    }
    if (puVar1[1] != 0) {
      pub_1406abac0(arg0,puVar1[1],puVar1[2]);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}

