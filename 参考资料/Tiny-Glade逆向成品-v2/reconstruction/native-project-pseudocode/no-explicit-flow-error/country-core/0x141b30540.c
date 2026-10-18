// VA 0x141b30540, PDB extent 379 bytes
// country_core::resources::critters::sheep::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::critters::sheep::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
   Extent: 379 */

longlong pdb_141b30540(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  char cStack_38;
  undefined4 uStack_37;
  longlong lStack_30;
  char cStack_28;
  undefined4 uStack_27;
  longlong lStack_20;
  char cStack_18;
  undefined4 uStack_17;
  longlong lStack_10;
  
  if (*param_1 == '\x01') {
    pdb_141b2c3b0(&cStack_38,param_2,&UNK_14339355b,7);
    if (cStack_38 != '\x02') {
      uStack_27 = uStack_37;
      cStack_28 = cStack_38;
      lStack_20 = lStack_30;
      if (cStack_38 == '\x01') {
LAB_141b306a2:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_1433932e0,0x28,&UNK_143393ad8);
      }
      lVar1 = pdb_141b80db0(&cStack_28,&UNK_143393552,9,param_1 + 4);
      if (lVar1 == 0) {
        if (cStack_28 == '\x01') goto LAB_141b306a2;
        lVar1 = pdb_141b80db0(&cStack_28,&UNK_143393562,0x13,param_1 + 8);
        if (lVar1 == 0) {
          if (cStack_28 == '\x01') goto LAB_141b306a2;
          lVar1 = pdb_141b841d0(&cStack_28,&UNK_143393575,0x10,param_1 + 1);
          if (lVar1 == 0) {
            pcVar2 = &cStack_28;
            goto LAB_141b30636;
          }
        }
      }
      return lVar1;
    }
  }
  else {
    pdb_141b2c3b0(&cStack_38,param_2,&UNK_14339354e,4);
    if (cStack_38 != '\x02') {
      uStack_17 = uStack_37;
      cStack_18 = cStack_38;
      lStack_10 = lStack_30;
      if (cStack_38 != '\x01') {
        lVar1 = pdb_141b80db0(&cStack_18,&UNK_143393552,9,param_1 + 4);
        if (lVar1 != 0) {
          return lVar1;
        }
        pcVar2 = &cStack_18;
LAB_141b30636:
        pdb_141b34a40(pcVar2);
        return 0;
      }
      goto LAB_141b306a2;
    }
  }
  return lStack_30;
}

