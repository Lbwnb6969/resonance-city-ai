// VA 0x141827320, PDB extent 338 bytes
// country_core::game_key_bindings::_::impl$0::deserialize::impl$0::visit_bytes<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::deserialize::impl$0::visit_bytes<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 338 */

undefined8 * pdb_141827320(undefined8 *param_1,char *param_2,longlong param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (param_3 == 0xb) {
    if (((((((*param_2 == 'M') && (param_2[1] == 'o')) && (param_2[2] == 'u')) &&
          ((param_2[3] == 's' && (param_2[4] == 'e')))) &&
         ((param_2[5] == 'B' && ((param_2[6] == 'u' && (param_2[7] == 't')))))) &&
        (param_2[8] == 't')) && ((param_2[9] == 'o' && (param_2[10] == 'n')))) {
      *(undefined2 *)param_1 = 0x132;
      return param_1;
    }
  }
  else if ((((param_3 == 7) && (*param_2 == 'K')) && (param_2[1] == 'e')) &&
          (((param_2[2] == 'y' && (param_2[3] == 'C')) &&
           ((param_2[4] == 'o' && ((param_2[5] == 'd' && (param_2[6] == 'e')))))))) {
    *(undefined2 *)param_1 = 0x32;
    return param_1;
  }
  pdb_140f35800(&uStack_38);
  pbStack_20 = pbStack_30;
  pdb_142db7e70(&uStack_80,pbStack_30,uStack_28,&UNK_1433404f8,2);
  param_1[8] = uStack_40;
  param_1[6] = uStack_50;
  param_1[7] = uStack_48;
  param_1[4] = uStack_60;
  param_1[5] = uStack_58;
  param_1[2] = uStack_70;
  param_1[3] = uStack_68;
  *param_1 = uStack_80;
  param_1[1] = uStack_78;
  if (0 < (longlong)uStack_38) {
    pub_1406abac0(pbStack_20,uStack_38,1);
  }
  return param_1;
}

