// VA 0x1416484c0, PDB extent 531 bytes
// country_core::asset_libraries::color_library::ColorLibrarySsbo::deserialize_from_path<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/color_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::color_library::ColorLibrarySsbo::deserialize_from_path<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/color_library.rs
   Extent: 531 */

void pdb_1416484c0(undefined8 param_1)

{
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140d929f0(&uStack_40);
  pbStack_20 = (byte *)CONCAT44(uStack_34,uStack_38);
  pdb_140f55d10(auStack_78,pbStack_20,uStack_30);
  pdb_141706360(&uStack_60,auStack_78,&uStack_40);
  if (uStack_40 != (byte *)0x0) {
    pub_1406abac0(pbStack_20,(ulonglong)uStack_40,1);
  }
  if (!SBORROW8(0,uStack_60)) {
    pbStack_20 = (byte *)uStack_60;
    pbStack_48 = pbStack_58;
    pdb_14164fd30(&uStack_40,pbStack_58,uStack_50);
    if (!SBORROW8(0,(longlong)uStack_40)) {
      uStack_88 = uStack_30;
      uStack_98 = (undefined4)uStack_40;
      uStack_94 = uStack_40._4_4_;
      uStack_90 = uStack_38;
      uStack_8c = uStack_34;
      pdb_1417ce930(param_1,&uStack_98);
      if (pbStack_20 != (byte *)0x0) {
        pub_1406abac0(pbStack_48,(ulonglong)pbStack_20,1);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433222d0,0x2b,auStack_78,&UNK_1433222b0,&UNK_143321888);
  }
  uStack_40 = pbStack_58;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1433222d0,0x2b,&uStack_40,&UNK_143322300,&UNK_143321870);
}

