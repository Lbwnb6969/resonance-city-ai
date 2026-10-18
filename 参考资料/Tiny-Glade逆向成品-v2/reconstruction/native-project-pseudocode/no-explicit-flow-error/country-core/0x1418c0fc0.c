// VA 0x1418c0fc0, PDB extent 208 bytes
// country_core::resources::session::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 208 */

undefined1 * pdb_1418c0fc0(undefined1 *param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  cVar1 = *param_2;
  pdb_14007ee60();
  if (cVar1 == '\0') {
    pbVar3 = pub_1406abab0(0xd,1);
    if (pbVar3 == (byte *)0x0) {
LAB_1418c1071:
      pdb_142dc7e2a(1,0xd);
LAB_1418c1080:
      pdb_142dc7e2a(1,8);
      pcVar2 = (code *)swi(3);
      puVar4 = (undefined1 *)(*pcVar2)();
      return puVar4;
    }
    uVar5 = 0x343230326e656577;
  }
  else {
    if (cVar1 != '\x01') {
      uVar6 = 8;
      pbVar3 = pub_1406abab0(8,1);
      if (pbVar3 == (byte *)0x0) goto LAB_1418c1080;
      uVar5 = 0x3432303273616d58;
      goto LAB_1418c1055;
    }
    pbVar3 = pub_1406abab0(0xd,1);
    if (pbVar3 == (byte *)0x0) goto LAB_1418c1071;
    uVar5 = 0x353230326e656577;
  }
  uVar6 = 0xd;
  *(undefined8 *)(pbVar3 + 5) = uVar5;
  uVar5 = 0x6565776f6c6c6148;
LAB_1418c1055:
  *(undefined8 *)pbVar3 = uVar5;
  *param_1 = 3;
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(byte **)(param_1 + 0x10) = pbVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  return param_1;
}

