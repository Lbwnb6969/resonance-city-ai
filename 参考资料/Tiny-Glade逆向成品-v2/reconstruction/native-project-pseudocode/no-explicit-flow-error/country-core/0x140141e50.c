// VA 0x140141e50, PDB extent 214 bytes
// country_core::render::render_config::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 214 */

undefined8 * pdb_140141e50(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*param_2 == '\0') {
    pdb_140127ae0(&cStack_58,&UNK_142e47cd0,0xd);
    if (cStack_58 != '2') goto LAB_140141ef0;
    puVar1 = &UNK_142e47cdd;
LAB_140141ea2:
    pdb_1401276c0(&cStack_58,param_3,puVar1,4);
  }
  else {
    if (*param_2 == '\x01') {
      pdb_140127ae0(&cStack_58,&UNK_142e47cd0,0xd);
      if (cStack_58 != '2') goto LAB_140141ef0;
      puVar1 = &UNK_142e47ce1;
      goto LAB_140141ea2;
    }
    pdb_140127ae0(&cStack_58,&UNK_142e47cd0,0xd);
    if (cStack_58 != '2') goto LAB_140141ef0;
    pdb_1401276c0(&cStack_58,param_3,&UNK_142e47ce5,5);
  }
  if (cStack_58 == '2') {
    *(undefined1 *)param_1 = 0x32;
    return param_1;
  }
LAB_140141ef0:
  param_1[8] = uStack_18;
  param_1[6] = uStack_28;
  param_1[7] = uStack_20;
  param_1[4] = uStack_38;
  param_1[5] = uStack_30;
  param_1[2] = uStack_48;
  param_1[3] = uStack_40;
  *param_1 = CONCAT71(uStack_57,cStack_58);
  param_1[1] = uStack_50;
  return param_1;
}

