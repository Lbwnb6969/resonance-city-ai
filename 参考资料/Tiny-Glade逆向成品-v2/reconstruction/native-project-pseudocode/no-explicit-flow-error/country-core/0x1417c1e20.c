// VA 0x1417c1e20, PDB extent 447 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 447 */

undefined2 * pdb_1417c1e20(undefined2 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  switch(param_3) {
  case 2:
    if ((*param_2 == 'N') && (param_2[1] == 'o')) {
      *param_1 = 0;
      return param_1;
    }
    break;
  case 3:
    if (((*param_2 == 'Y') && (param_2[1] == 'e')) && (param_2[2] == 's')) {
      *param_1 = 0x100;
      return param_1;
    }
    break;
  case 0xc:
    if ((((*param_2 != 'P') || (param_2[1] != 'r')) ||
        ((param_2[2] != 'e' || ((param_2[3] != 'm' || (param_2[4] != 'a')))))) ||
       (((param_2[5] != 'd' || (((param_2[6] != 'e' || (param_2[7] != 'S')) || (param_2[8] != 'h')))
         ) || ((param_2[9] != 'a' || (param_2[10] != 'p')))))) break;
    cVar1 = param_2[0xb];
    goto joined_r0x0001417c1f56;
  case 0xe:
    if (((((((*param_2 != 'V') || (param_2[1] != 'a')) || (param_2[2] != 'l')) ||
          ((param_2[3] != 'i' || (param_2[4] != 'd')))) || (param_2[5] != 'E')) ||
        (((param_2[6] != 'n' || (param_2[7] != 'c')) ||
         ((param_2[8] != 'l' ||
          (((param_2[9] != 'o' || (param_2[10] != 's')) || (param_2[0xb] != 'u')))))))) ||
       (param_2[0xc] != 'r')) break;
    cVar1 = param_2[0xd];
joined_r0x0001417c1f56:
    if (cVar1 == 'e') {
      *param_1 = 0x200;
      return param_1;
    }
  }
  pdb_140f35800(&uStack_38);
  pbStack_20 = pbStack_30;
  uVar2 = pdb_142d8f140(pbStack_30,uStack_28,&UNK_1433368f0,4);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined1 *)param_1 = 1;
  if (0 < (longlong)uStack_38) {
    pub_1406abac0(pbStack_20,uStack_38,1);
  }
  return param_1;
}

