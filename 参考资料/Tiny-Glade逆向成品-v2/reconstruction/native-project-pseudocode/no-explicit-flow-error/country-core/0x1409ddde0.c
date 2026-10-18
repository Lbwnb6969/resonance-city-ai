// VA 0x1409ddde0, PDB extent 84 bytes
// country_core::resources::glade_color_customization::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::glade_color_customization::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
   Extent: 84 */

void pdb_1409ddde0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  uVar1 = _UNK_143022be8;
  *(undefined8 *)(param_1 + 10) = _DAT_143022be0;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x18) = 3;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 7) = 3;
  *(undefined8 *)(param_1 + 0x16) = 0x10000003f800000;
  param_1[2] = 0x186a3;
  return;
}

