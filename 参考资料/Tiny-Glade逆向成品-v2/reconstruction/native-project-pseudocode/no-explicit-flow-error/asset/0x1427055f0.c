// VA 0x1427055f0, PDB extent 258 bytes
// asset::prefab::config::_::impl$0::deserialize::impl$0::visit_bytes<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::prefab::config::_::impl$0::deserialize::impl$0::visit_bytes<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 258 */

undefined8 * pdb_1427055f0(undefined8 *param_1,char *param_2,longlong param_3)

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
  if (((((param_3 == 7) && (*param_2 == 't')) && (param_2[1] == 'r')) &&
      ((param_2[2] == 'i' && (param_2[3] == 'g')))) &&
     ((param_2[4] == 'g' && ((param_2[5] == 'e' && (param_2[6] == 'r')))))) {
    *(undefined1 *)param_1 = 0x32;
  }
  else {
    pdb_140f35800(&uStack_38);
    pbStack_20 = pbStack_30;
    pdb_142db7cc0(&uStack_80,pbStack_30,uStack_28,&UNK_1435898e8,1);
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
  }
  return param_1;
}

