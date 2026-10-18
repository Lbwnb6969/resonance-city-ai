// VA 0x1409cf930, PDB extent 104 bytes
// country_core::resources::color_id::StoneFoundationColorIds::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/color_id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::color_id::StoneFoundationColorIds::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/color_id.rs
   Extent: 104 */

undefined8 * pdb_1409cf930(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)pdb_140f3bda0();
  if ((char)plVar2[2] == '\x01') {
    lVar3 = *plVar2;
    param_2 = plVar2[1];
  }
  else {
    lVar3 = pdb_140f4fd10();
    plVar2[1] = param_2;
    *(undefined1 *)(plVar2 + 2) = 1;
  }
  *plVar2 = lVar3 + 1;
  uVar1 = _UNK_14302ce18;
  param_1[2] = _DAT_14302ce10;
  param_1[3] = uVar1;
  uVar1 = _UNK_14302ce08;
  *param_1 = _DAT_14302ce00;
  param_1[1] = uVar1;
  param_1[4] = lVar3;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 3;
  return param_1;
}

