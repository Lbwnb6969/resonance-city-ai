// VA 0x14198e020, PDB extent 418 bytes
// country_core::resources::history::impl$16::deserialize::impl$0::visit_seq<ref_mut$<serde_json::value::de::SeqDeserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::impl$16::deserialize::impl$0::visit_seq<ref_mut$<serde_json::value::de::SeqDeserializer>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 418 */

longlong * pdb_14198e020(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_48 = param_2;
  pdb_141ad82f0(&lStack_38,&uStack_48);
  lVar3 = lStack_28;
  lVar2 = lStack_30;
  lVar1 = lStack_38;
  if (SBORROW8(0,lStack_38)) {
    param_1[1] = lStack_30;
    *param_1 = -0x8000000000000000;
  }
  else {
    lStack_38 = 0;
    lStack_30 = 8;
    lStack_28 = 0;
    lVar4 = pdb_140c7d380();
    lVar6 = lVar4;
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(0x60,8);
    if (pbVar5 == (byte *)0x0) {
      lStack_40 = lVar4;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60,param_3,param_4,lVar6);
    }
    pbVar5[0x40] = 0;
    pbVar5[0x41] = 0;
    pbVar5[0x42] = 0;
    pbVar5[0x43] = 0;
    pbVar5[0x44] = 0;
    pbVar5[0x45] = 0;
    pbVar5[0x46] = 0;
    pbVar5[0x47] = 0;
    pbVar5[0x48] = 0;
    pbVar5[0x49] = 0;
    pbVar5[0x4a] = 0;
    pbVar5[0x4b] = 0;
    pbVar5[0x4c] = 0;
    pbVar5[0x4d] = 0;
    pbVar5[0x4e] = 0;
    pbVar5[0x4f] = 0;
    pbVar5[0] = 1;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    pbVar5[8] = 1;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5[0x10] = 0;
    pbVar5[0x11] = 0;
    pbVar5[0x12] = 0;
    pbVar5[0x13] = 0;
    pbVar5[0x14] = 0;
    pbVar5[0x15] = 0;
    pbVar5[0x16] = 0;
    pbVar5[0x17] = 0;
    pbVar5[0x20] = 0;
    pbVar5[0x21] = 0;
    pbVar5[0x22] = 0;
    pbVar5[0x23] = 0;
    pbVar5[0x24] = 0;
    pbVar5[0x25] = 0;
    pbVar5[0x26] = 0;
    pbVar5[0x27] = 0;
    pbVar5[0x30] = 0;
    pbVar5[0x31] = 0;
    pbVar5[0x32] = 0;
    pbVar5[0x33] = 0;
    pbVar5[0x34] = 0;
    pbVar5[0x35] = 0;
    pbVar5[0x36] = 0;
    pbVar5[0x37] = 0;
    pbVar5[0x38] = 4;
    pbVar5[0x39] = 0;
    pbVar5[0x3a] = 0;
    pbVar5[0x3b] = 0;
    pbVar5[0x3c] = 0;
    pbVar5[0x3d] = 0;
    pbVar5[0x3e] = 0;
    pbVar5[0x3f] = 0;
    pbVar5[0x50] = 4;
    pbVar5[0x51] = 0;
    pbVar5[0x52] = 0;
    pbVar5[0x53] = 0;
    pbVar5[0x54] = 0;
    pbVar5[0x55] = 0;
    pbVar5[0x56] = 0;
    pbVar5[0x57] = 0;
    pbVar5[0x58] = 0;
    pbVar5[0x59] = 0;
    pbVar5[0x5a] = 0;
    pbVar5[0x5b] = 0;
    pbVar5[0x5c] = 0;
    pbVar5[0x5d] = 0;
    pbVar5[0x5e] = 0;
    pbVar5[0x5f] = 0;
    param_1[2] = lVar3;
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1[3] = lVar4;
    param_1[4] = (longlong)pbVar5;
  }
  return param_1;
}

