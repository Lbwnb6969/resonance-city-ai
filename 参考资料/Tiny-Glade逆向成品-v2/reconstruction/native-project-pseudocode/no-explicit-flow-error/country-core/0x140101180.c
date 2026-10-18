// VA 0x140101180, PDB extent 237 bytes
// country_core::resources::walls::inner_wall_state::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 237 */

undefined1 * pdb_140101180(undefined1 *param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  cVar1 = *param_2;
  pdb_14007ee60();
  if (cVar1 == '\0') {
    uVar5 = 5;
    pbVar3 = pub_1406abab0(5,1);
    if (pbVar3 != (byte *)0x0) {
      pbVar3[4] = 0x65;
      pbVar3[0] = 0x53;
      pbVar3[1] = 0x74;
      pbVar3[2] = 0x6f;
      pbVar3[3] = 0x6e;
      goto LAB_140101226;
    }
  }
  else {
    if (cVar1 != '\x01') {
      uVar5 = 0xc;
      pbVar3 = pub_1406abab0(0xc,1);
      if (pbVar3 != (byte *)0x0) {
        pbVar3[0] = 0x48;
        pbVar3[1] = 0x61;
        pbVar3[2] = 0x6c;
        pbVar3[3] = 0x66;
        pbVar3[4] = 0x54;
        pbVar3[5] = 0x69;
        pbVar3[6] = 0x6d;
        pbVar3[7] = 0x62;
        pbVar3[8] = 0x65;
        pbVar3[9] = 0x72;
        pbVar3[10] = 0x65;
        pbVar3[0xb] = 100;
        goto LAB_140101226;
      }
      goto LAB_14010125d;
    }
    uVar5 = 0xf;
    pbVar3 = pub_1406abab0(0xf,1);
    if (pbVar3 != (byte *)0x0) {
      pbVar3[7] = 0x74;
      pbVar3[8] = 0x68;
      pbVar3[9] = 0x53;
      pbVar3[10] = 0x6b;
      pbVar3[0xb] = 0x69;
      pbVar3[0xc] = 0x72;
      pbVar3[0xd] = 0x74;
      pbVar3[0xe] = 0x73;
      pbVar3[0] = 0x53;
      pbVar3[1] = 0x74;
      pbVar3[2] = 0x6f;
      pbVar3[3] = 0x6e;
      pbVar3[4] = 0x65;
      pbVar3[5] = 0x57;
      pbVar3[6] = 0x69;
      pbVar3[7] = 0x74;
LAB_140101226:
      *param_1 = 3;
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(byte **)(param_1 + 0x10) = pbVar3;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      return param_1;
    }
    pdb_142dc7e2a(1,0xf);
  }
  pdb_142dc7e2a(1,5);
LAB_14010125d:
  pdb_142dc7e2a(1,0xc);
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined1 *)(*pcVar2)();
  return puVar4;
}

