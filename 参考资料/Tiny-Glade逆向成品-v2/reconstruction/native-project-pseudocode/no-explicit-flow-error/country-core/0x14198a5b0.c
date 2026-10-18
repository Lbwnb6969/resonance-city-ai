// VA 0x14198a5b0, PDB extent 116 bytes
// country_core::resources::history::impl$2::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::impl$2::deserialize<enum2$<serde_json::value::Value> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 116 */

undefined8 * pdb_14198a5b0(undefined8 *param_1)

{
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  pdb_1414ff340(&lStack_40);
  if (SBORROW8(0,lStack_40)) {
    param_1[1] = lStack_38;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  lStack_10 = lStack_30 * 0x10 + lStack_38;
  lStack_28 = lStack_38;
  lStack_20 = lStack_38;
  lStack_18 = lStack_40;
  pdb_140c7e590(param_1,&lStack_28);
  return param_1;
}

