// VA 0x140c90bf0, PDB extent 262 bytes
// country_core::resources::walls::decorator_storage::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 262 */

undefined1 * pdb_140c90bf0(undefined1 *param_1,longlong *param_2)

{
  code *pcVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  
  if (*param_2 == 0) {
    pdb_141bfeb20(param_1,&UNK_143076460,0x14,0,&UNK_143076040,4,param_2 + 1);
    return param_1;
  }
  if ((int)*param_2 == 1) {
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(7,1);
    if (pbVar2 != (byte *)0x0) {
      pbVar2[3] = 0x72;
      pbVar2[4] = 0x61;
      pbVar2[5] = 0x69;
      pbVar2[6] = 0x6e;
      pbVar2[0] = 0x54;
      pbVar2[1] = 0x65;
      pbVar2[2] = 0x72;
      pbVar2[3] = 0x72;
      *param_1 = 3;
      *(undefined8 *)(param_1 + 8) = 7;
      *(byte **)(param_1 + 0x10) = pbVar2;
      *(undefined8 *)(param_1 + 0x18) = 7;
      return param_1;
    }
    pdb_142dc7e2a(1,7);
  }
  else {
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(6,1);
    if (pbVar2 != (byte *)0x0) {
      pbVar2[4] = 0x72;
      pbVar2[5] = 0x73;
      pbVar2[0] = 0x53;
      pbVar2[1] = 0x74;
      pbVar2[2] = 0x61;
      pbVar2[3] = 0x69;
      *param_1 = 3;
      *(undefined8 *)(param_1 + 8) = 6;
      *(byte **)(param_1 + 0x10) = pbVar2;
      *(undefined8 *)(param_1 + 0x18) = 6;
      return param_1;
    }
  }
  pdb_142dc7e2a(1,6);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined1 *)(*pcVar1)();
  return puVar3;
}

