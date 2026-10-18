// VA 0x142705700, PDB extent 386 bytes
// asset::prefab::config::_::impl$0::deserialize::impl$0::visit_bytes<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::prefab::config::_::impl$0::deserialize::impl$0::visit_bytes<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 386 */

undefined8 * pdb_142705700(undefined8 *param_1,char *param_2,longlong param_3)

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
  if (param_3 == 4) {
    if ((((*param_2 == 'k') && (param_2[1] == 'i')) && (param_2[2] == 'n')) && (param_2[3] == 'd'))
    {
      *(undefined2 *)param_1 = 0x232;
      return param_1;
    }
  }
  else if (param_3 == 0xb) {
    if ((((*param_2 == 's') && (param_2[1] == 'h')) &&
        ((param_2[2] == 'a' && ((param_2[3] == 'p' && (param_2[4] == 'e')))))) &&
       ((param_2[5] == '_' &&
        ((((param_2[6] == 's' && (param_2[7] == 'c')) && (param_2[8] == 'a')) &&
         ((param_2[9] == 'l' && (param_2[10] == 'e')))))))) {
      *(undefined2 *)param_1 = 0x132;
      return param_1;
    }
  }
  else if (((param_3 == 5) && (*param_2 == 's')) &&
          ((param_2[1] == 'h' &&
           (((param_2[2] == 'a' && (param_2[3] == 'p')) && (param_2[4] == 'e')))))) {
    *(undefined2 *)param_1 = 0x32;
    return param_1;
  }
  pdb_140f35800(&uStack_38);
  pbStack_20 = pbStack_30;
  pdb_142db7cc0(&uStack_80,pbStack_30,uStack_28,&UNK_143589938,3);
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

