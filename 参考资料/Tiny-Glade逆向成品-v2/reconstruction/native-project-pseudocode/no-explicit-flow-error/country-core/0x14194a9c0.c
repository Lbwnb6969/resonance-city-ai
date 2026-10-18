// VA 0x14194a9c0, PDB extent 307 bytes
// country_core::systems::save::snapshot_gc::parse_save_file_snapshots<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot_gc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::snapshot_gc::parse_save_file_snapshots<std::io::buffered::bufreader::BufReader<std::fs::File>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot_gc.rs
   Extent: 307 */

longlong * pdb_14194a9c0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  byte *pbStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_a0 = 0x8000000000000000;
  pbStack_88 = (byte *)*param_2;
  uStack_80 = param_2[1];
  uStack_78 = *(undefined4 *)(param_2 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_70 = *(undefined4 *)(param_2 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_68 = *(undefined4 *)(param_2 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_60 = *(undefined4 *)(param_2 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_58 = 1;
  uStack_b8 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  pbStack_b0 = (byte *)0x1;
  uStack_a8 = 0;
  uStack_38 = 0x80;
  pdb_141644020(&lStack_30,&uStack_b8);
  if (!SBORROW8(0,lStack_30)) {
    param_1[2] = lStack_20;
  }
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (uStack_80 != 0) {
    pub_1406abac0(pbStack_88,uStack_80,1);
  }
  CloseHandle(CONCAT44(uStack_5c,uStack_60));
  if ((!SBORROW8(0,uStack_a0)) && (uStack_a0 != 0)) {
    pub_1406abac0(pbStack_98,uStack_a0,1);
  }
  if (uStack_b8 != 0) {
    pub_1406abac0(pbStack_b0,uStack_b8,1);
  }
  return param_1;
}

