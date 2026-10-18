// VA 0x1416486e0, PDB extent 403 bytes
// country_core::asset_libraries::color_library::ColorLibrarySsbo::deserialize_from_path<ref$<std::path::PathBuf> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/color_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::color_library::ColorLibrarySsbo::deserialize_from_path<ref$<std::path::PathBuf>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/color_library.rs
   Extent: 403 */

void pdb_1416486e0(undefined8 param_1)

{
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_141643240(&uStack_38);
  uStack_48 = CONCAT44(uStack_34,uStack_38);
  if (SBORROW8(0,uStack_48)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433222d0,0x2b,auStack_20,&UNK_143322300,&UNK_143321870);
  }
  pbStack_40 = (byte *)CONCAT44(uStack_2c,uStack_30);
  pdb_14164fd30(&uStack_38,pbStack_40,uStack_28);
  if (!SBORROW8(0,CONCAT44(uStack_34,uStack_38))) {
    uStack_58 = uStack_28;
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    uStack_5c = uStack_2c;
    pdb_1417ce930(param_1,&uStack_68);
    if (uStack_48 != 0) {
      pub_1406abac0(pbStack_40,uStack_48,1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1433222d0,0x2b,auStack_20,&UNK_1433222b0,&UNK_143321888);
}

