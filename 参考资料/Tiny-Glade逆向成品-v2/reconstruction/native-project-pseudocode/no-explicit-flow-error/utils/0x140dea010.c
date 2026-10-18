// VA 0x140dea010, PDB extent 84 bytes
// utils::local_time::system_time_to_local_time
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/local_time.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::local_time::system_time_to_local_time
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/local_time.rs
   Extent: 84 */

undefined8 * pdb_140dea010(undefined8 *param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pdb_140e02b30(&uStack_28);
  if ((_DAT_143cb2ddc & 1) != 0) {
    uStack_18 = uStack_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    pdb_140e03770(param_1,&uStack_18,_DAT_143cb2ddc >> 8);
    return param_1;
  }
  *param_1 = CONCAT44(uStack_24,uStack_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return param_1;
}

