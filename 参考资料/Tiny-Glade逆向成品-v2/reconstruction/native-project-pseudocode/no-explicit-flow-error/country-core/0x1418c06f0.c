// VA 0x1418c06f0, PDB extent 210 bytes
// country_core::resources::session::NextSession::append_on_load<country_core::meta_commander::MetaCommandFence>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::session::NextSession::append_on_load<country_core::meta_commander::MetaCommandFence>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 210 */

undefined8 pdb_1418c06f0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar2 = param_2[2];
  if (lVar2 == *param_2) {
    pdb_142d7e6e0(param_2);
  }
  lVar3 = param_2[1];
  uStack_40 = (undefined4)param_3;
  uStack_3c = (undefined4)((ulonglong)param_3 >> 0x20);
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar2 * 0x20);
  *puVar1 = uStack_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1 = (undefined4 *)(lVar3 + lVar2 * 0x20);
  *puVar1 = 0;
  puVar1[1] = 0x80000000;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  param_2[2] = lVar2 + 1;
  pub_142e32760(param_1,param_2,0xe8);
  return param_1;
}

