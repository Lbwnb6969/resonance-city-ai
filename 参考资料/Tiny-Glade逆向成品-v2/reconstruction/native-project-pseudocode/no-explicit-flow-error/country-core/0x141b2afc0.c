// VA 0x141b2afc0, PDB extent 364 bytes
// country_core::resources::history::path_edit::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/path_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::path_edit::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/path_edit.rs
   Extent: 364 */

undefined4 * pdb_141b2afc0(undefined4 *param_1,undefined8 param_2)

{
  byte *arg1;
  byte *pbVar1;
  ulonglong arg0;
  longlong lStack_90;
  byte *pbStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  pdb_141502a80(&lStack_90,param_2,&UNK_143392968,0x14,&UNK_1433929a8,4);
  if (SBORROW8(0,lStack_90)) {
    *(byte **)(param_1 + 2) = pbStack_88;
    *param_1 = 2;
  }
  else {
    arg0 = lStack_80 * 0xc;
    arg1 = (byte *)pdb_140f606e0(4);
    pbVar1 = arg1;
    if (arg0 != 0) {
      pdb_14007ee60();
      pbVar1 = pub_1406abab0(arg0,(ulonglong)arg1);
    }
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(arg1,arg0);
    }
    pbVar1[0] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    pbVar1[8] = 1;
    pbVar1[9] = 0;
    pbVar1[10] = 0;
    pbVar1[0xb] = 0;
    pbVar1[0xc] = 0;
    pbVar1[0xd] = 0;
    pbVar1[0xe] = 0;
    pbVar1[0xf] = 0;
    pub_142e32760(pbVar1 + 0x10,pbStack_88,lStack_80 * 0xc);
    if (lStack_90 != 0) {
      pub_1406abac0(pbStack_88,lStack_90 * 0xc,4);
    }
    *(byte **)(param_1 + 2) = pbVar1;
    *(longlong *)(param_1 + 4) = lStack_80;
    param_1[6] = uStack_70;
    *(undefined1 *)(param_1 + 7) = uStack_6c;
    *param_1 = uStack_78;
    param_1[1] = uStack_74;
  }
  return param_1;
}

