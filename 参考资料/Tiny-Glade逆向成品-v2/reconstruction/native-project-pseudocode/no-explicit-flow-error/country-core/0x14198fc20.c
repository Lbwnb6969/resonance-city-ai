// VA 0x14198fc20, PDB extent 213 bytes
// country_core::resources::history::impl$16::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::impl$16::deserialize<enum2$<serde_json::value::Value> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 213 */

undefined8 * pdb_14198fc20(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined8 uStack_18;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uStack_20 = 7;
    break;
  case 1:
    uStack_1f = param_2[1];
    uStack_20 = 0;
    break;
  case 2:
    uStack_18 = *(undefined8 *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 8) == 0) {
      uStack_20 = 1;
    }
    else if (*(longlong *)(param_2 + 8) == 1) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 3;
    }
    break;
  case 3:
    pdb_142debf40(param_1,param_2 + 8);
    return param_1;
  case 4:
    pdb_141bd3df0(param_1,param_2 + 8);
    return param_1;
  case 5:
    pdb_141b8acc0(param_1,param_2 + 8);
    return param_1;
  }
  uVar1 = pdb_142db90e0(&uStack_20,&uStack_21,&UNK_14335c4a0);
  param_1[1] = uVar1;
  *param_1 = 0x8000000000000000;
  return param_1;
}

