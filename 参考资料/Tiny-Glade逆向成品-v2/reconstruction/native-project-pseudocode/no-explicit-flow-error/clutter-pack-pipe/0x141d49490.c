// VA 0x141d49490, PDB extent 55 bytes
// clutter_pack_pipe::impl$12::visit_primitive::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$12::visit_primitive::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 55 */

undefined8 pdb_141d49490(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (uVar1 < (ulonglong)param_1[1]) {
    return *(undefined8 *)(*param_1 + 8 + uVar1 * 0x18);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,param_1[1],&UNK_1433d0b38);
}

