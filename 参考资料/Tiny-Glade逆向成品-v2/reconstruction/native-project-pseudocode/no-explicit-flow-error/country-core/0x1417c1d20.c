// VA 0x1417c1d20, PDB extent 250 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 250 */

undefined4 * pdb_1417c1d20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_31;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char acStack_20 [8];
  char *pcStack_18;
  
  pdb_141b4ca10(acStack_20);
  if (acStack_20[0] != '\0') {
    if (acStack_20[0] == '\x02') {
      *(char **)(param_1 + 2) = pcStack_18;
    }
    else {
      if ((pcStack_18 == (char *)0x0) || (*pcStack_18 == '\x12')) {
        *param_1 = 1;
        return param_1;
      }
      uVar2 = pdb_142deedc0(pcStack_18,&uStack_31,&UNK_143396738);
      *(undefined8 *)(param_1 + 2) = uVar2;
    }
    *param_1 = 2;
    return param_1;
  }
  if (pcStack_18 == (char *)0x0) {
    acStack_20[0] = '\r';
    uVar2 = pdb_142db90e0(acStack_20,&UNK_143396a68,&UNK_1433966f8);
    uStack_28 = (undefined4)uVar2;
    uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    pdb_141b4dee0(&iStack_30,pcStack_18,&UNK_143336891,0xc,&UNK_1433368b0,2);
    if (iStack_30 != 1) {
      param_1[3] = uStack_24;
      *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_28,uStack_2c);
      uVar1 = 0;
      goto LAB_1417c1dcb;
    }
  }
  *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_24,uStack_28);
  uVar1 = 2;
LAB_1417c1dcb:
  *param_1 = uVar1;
  return param_1;
}

