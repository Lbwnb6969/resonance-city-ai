// VA 0x140d99980, PDB extent 183 bytes
// tg_mods::discovery::thumbnail_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::discovery::thumbnail_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 183 */

longlong * pdb_140d99980(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  uStack_68 = 0;
  uStack_60 = 3;
  puStack_58 = &UNK_1431e56c3;
  uStack_50 = 0xd;
  puStack_48 = &UNK_1431e56d0;
  uStack_40 = 0xe;
  puStack_38 = &UNK_1431e56de;
  uStack_30 = 0xd;
  uStack_78 = param_2;
  uStack_70 = param_3;
  pdb_141daebe0(&lStack_28,&uStack_78);
  if (SBORROW8(0,lStack_28)) {
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  param_1[2] = lStack_18;
  param_1[3] = lStack_10;
  *param_1 = lStack_28;
  param_1[1] = lStack_20;
  return param_1;
}

