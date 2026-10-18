// VA 0x140a86d50, PDB extent 310 bytes
// country_core::resources::plant_sample_raster::PlantSampleRaster::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::plant_sample_raster::PlantSampleRaster::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
   Extent: 310 */

undefined8 * pdb_140a86d50(undefined8 *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pdb_14007ee60();
  pbVar2 = pub_1406abae0(0x100000,1);
  if (pbVar2 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x100000);
  }
  else {
    pdb_14007ee60();
    pbVar3 = pub_1406abae0(0x100000,1);
    if (pbVar3 != (byte *)0x0) {
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = 0x40000;
      param_1[1] = pbVar2;
      param_1[2] = 0x40000;
      param_1[3] = 0x40000;
      param_1[4] = pbVar3;
      param_1[5] = 0x40000;
      param_1[6] = 0;
      param_1[7] = 2;
      pub_142e32780(param_1 + 0x10,0,0x204);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 8;
      param_1[0xd] = 8;
      *(undefined1 *)((longlong)param_1 + 0x284) = 1;
      return param_1;
    }
  }
  pdb_142dc7e2a(1,0x100000);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

