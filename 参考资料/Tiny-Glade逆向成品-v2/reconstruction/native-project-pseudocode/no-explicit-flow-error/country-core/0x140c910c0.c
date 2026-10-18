// VA 0x140c910c0, PDB extent 303 bytes
// country_core::resources::walls::decorator_storage::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::_::impl$0::deserialize::impl$0::visit_bytes<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 303 */

undefined2 * pdb_140c910c0(undefined2 *param_1,char *param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (param_3 == 7) {
    if (((((*param_2 == 'T') && (param_2[1] == 'e')) && (param_2[2] == 'r')) &&
        ((param_2[3] == 'r' && (param_2[4] == 'a')))) &&
       ((param_2[5] == 'i' && (param_2[6] == 'n')))) {
      *param_1 = 0x100;
      return param_1;
    }
  }
  else if (param_3 == 6) {
    if (((*param_2 == 'S') && (param_2[1] == 't')) &&
       ((param_2[2] == 'a' && (((param_2[3] == 'i' && (param_2[4] == 'r')) && (param_2[5] == 's'))))
       )) {
      *param_1 = 0x200;
      return param_1;
    }
  }
  else if (((param_3 == 4) && (*param_2 == 'W')) &&
          ((param_2[1] == 'a' && ((param_2[2] == 'l' && (param_2[3] == 'l')))))) {
    *param_1 = 0;
    return param_1;
  }
  pdb_140f35800(&uStack_38);
  pbStack_20 = pbStack_30;
  uVar1 = pdb_142d8f140(pbStack_30,uStack_28,&UNK_143076540,3);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if (0 < (longlong)uStack_38) {
    pub_1406abac0(pbStack_20,uStack_38,1);
  }
  return param_1;
}

