// VA 0x140614db0, PDB extent 356 bytes
// country_core::resources::session::NextSession::append_on_load<array$<enum2$<country_core::meta_commander::MetaCommand>,3> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::session::NextSession::append_on_load<array$<enum2$<country_core::meta_commander::MetaCommand>,3>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 356 */

undefined8 pdb_140614db0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte *pbVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0xa8,8);
  if (pbVar5 != (byte *)0x0) {
    pub_142e32760(pbVar5,param_3,0xa8);
    lVar2 = param_2[2];
    if (lVar2 == *param_2) {
      pdb_142d7e6e0(param_2);
    }
    lVar3 = param_2[1];
    uStack_50 = SUB84(pbVar5,0);
    uStack_4c = (undefined4)((ulonglong)pbVar5 >> 0x20);
    puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar2 * 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 3;
    puVar1[3] = 0;
    puVar1 = (undefined4 *)(lVar3 + lVar2 * 0x20);
    *puVar1 = 3;
    puVar1[1] = 0;
    puVar1[2] = uStack_50;
    puVar1[3] = uStack_4c;
    param_2[2] = lVar2 + 1;
    pub_142e32760(param_1,param_2,0xe8);
    return param_1;
  }
  pdb_142dc7e2a(8,0xa8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

