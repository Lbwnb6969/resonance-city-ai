// VA 0x1417c21f0, PDB extent 271 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 271 */

undefined2 * pdb_1417c21f0(undefined2 *param_1,char *param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (param_3 == 9) {
    if (((((*param_2 == 'R') && (param_2[1] == 'e')) && (param_2[2] == 'c')) &&
        (((param_2[3] == 't' && (param_2[4] == 'a')) &&
         ((param_2[5] == 'n' && ((param_2[6] == 'g' && (param_2[7] == 'l')))))))) &&
       (param_2[8] == 'e')) {
      *param_1 = 0x100;
      return param_1;
    }
  }
  else if (((((param_3 == 6) && (*param_2 == 'C')) && (param_2[1] == 'i')) &&
           ((param_2[2] == 'r' && (param_2[3] == 'c')))) &&
          ((param_2[4] == 'l' && (param_2[5] == 'e')))) {
    *param_1 = 0;
    return param_1;
  }
  pdb_140f35800(&uStack_38);
  pbStack_20 = pbStack_30;
  uVar1 = pdb_142d8f140(pbStack_30,uStack_28,&UNK_143336950,2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if (0 < (longlong)uStack_38) {
    pub_1406abac0(pbStack_20,uStack_38,1);
  }
  return param_1;
}

