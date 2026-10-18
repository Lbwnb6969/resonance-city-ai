// VA 0x1406d09c0, PDB extent 22 bytes
// usdl::event::set_event_enabled
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/event.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::event::set_event_enabled
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/event.rs
   Extent: 22 */

bool pdb_1406d09c0(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = pdb_14100a830(param_1,param_2);
  return cVar1 == '\x01';
}

