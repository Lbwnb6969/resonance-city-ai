// VA 0x140905860, PDB extent 213 bytes
// country_core::resources::world_raster_defs::AllWorldRasterWrite::ordered_names
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::world_raster_defs::AllWorldRasterWrite::ordered_names
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 213 */

undefined8 * pdb_140905860(undefined8 *param_1)

{
  byte *pbVar1;
  
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x70,8);
  if (pbVar1 != (byte *)0x0) {
    *(undefined **)pbVar1 = &UNK_14301ea20;
    pbVar1[8] = 10;
    pbVar1[9] = 0;
    pbVar1[10] = 0;
    pbVar1[0xb] = 0;
    pbVar1[0xc] = 0;
    pbVar1[0xd] = 0;
    pbVar1[0xe] = 0;
    pbVar1[0xf] = 0;
    *(undefined **)(pbVar1 + 0x10) = &UNK_14301ea2a;
    pbVar1[0x18] = 0x12;
    pbVar1[0x19] = 0;
    pbVar1[0x1a] = 0;
    pbVar1[0x1b] = 0;
    pbVar1[0x1c] = 0;
    pbVar1[0x1d] = 0;
    pbVar1[0x1e] = 0;
    pbVar1[0x1f] = 0;
    *(undefined **)(pbVar1 + 0x20) = &UNK_14301ea3c;
    pbVar1[0x28] = 0x12;
    pbVar1[0x29] = 0;
    pbVar1[0x2a] = 0;
    pbVar1[0x2b] = 0;
    pbVar1[0x2c] = 0;
    pbVar1[0x2d] = 0;
    pbVar1[0x2e] = 0;
    pbVar1[0x2f] = 0;
    *(undefined **)(pbVar1 + 0x30) = &UNK_14301ea4e;
    pbVar1[0x38] = 0x12;
    pbVar1[0x39] = 0;
    pbVar1[0x3a] = 0;
    pbVar1[0x3b] = 0;
    pbVar1[0x3c] = 0;
    pbVar1[0x3d] = 0;
    pbVar1[0x3e] = 0;
    pbVar1[0x3f] = 0;
    *(undefined **)(pbVar1 + 0x40) = &UNK_14301ea60;
    pbVar1[0x48] = 0xb;
    pbVar1[0x49] = 0;
    pbVar1[0x4a] = 0;
    pbVar1[0x4b] = 0;
    pbVar1[0x4c] = 0;
    pbVar1[0x4d] = 0;
    pbVar1[0x4e] = 0;
    pbVar1[0x4f] = 0;
    *(undefined **)(pbVar1 + 0x50) = &UNK_14301ea6b;
    pbVar1[0x58] = 0xc;
    pbVar1[0x59] = 0;
    pbVar1[0x5a] = 0;
    pbVar1[0x5b] = 0;
    pbVar1[0x5c] = 0;
    pbVar1[0x5d] = 0;
    pbVar1[0x5e] = 0;
    pbVar1[0x5f] = 0;
    *(undefined **)(pbVar1 + 0x60) = &UNK_14301ea77;
    pbVar1[0x68] = 0x13;
    pbVar1[0x69] = 0;
    pbVar1[0x6a] = 0;
    pbVar1[0x6b] = 0;
    pbVar1[0x6c] = 0;
    pbVar1[0x6d] = 0;
    pbVar1[0x6e] = 0;
    pbVar1[0x6f] = 0;
    *param_1 = 7;
    param_1[1] = pbVar1;
    param_1[2] = 7;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x70);
}

