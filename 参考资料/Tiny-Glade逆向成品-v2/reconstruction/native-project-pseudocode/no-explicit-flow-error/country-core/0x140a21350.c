// VA 0x140a21350, PDB extent 196 bytes
// country_core::meta_commander::MetaCommander::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::meta_commander::MetaCommander::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 196 */

undefined8 *
pdb_140a21350(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = param_2;
  plVar4 = (longlong *)
           pdb_140f3bda0(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 2),param_3,param_4,
                         *(undefined4 *)param_2,*(undefined4 *)(param_2 + 1),
                         *(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 3),
                         0xfffffffffffffffe);
  if ((char)plVar4[2] == '\x01') {
    lVar5 = *plVar4;
    puVar6 = (undefined8 *)plVar4[1];
  }
  else {
    lVar5 = pdb_140f4fd10();
    *plVar4 = lVar5;
    plVar4[1] = (longlong)puVar6;
    *(undefined1 *)(plVar4 + 2) = 1;
  }
  *plVar4 = lVar5 + 1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = _UNK_143038b08;
  param_1[4] = _DAT_143038b00;
  param_1[5] = uVar1;
  uVar1 = _UNK_143038b18;
  param_1[6] = _DAT_143038b10;
  param_1[7] = uVar1;
  param_1[8] = lVar5;
  param_1[9] = puVar6;
  return param_1;
}

