// VA 0x140a599f0, PDB extent 89 bytes
// country_core::asset_libraries::shader_library::AssetShaderLibrary::extract_raster_shader_names
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/shader_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::shader_library::AssetShaderLibrary::extract_raster_shader_names
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/shader_library.rs
   Extent: 89 */

undefined8 pdb_140a599f0(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauStack_30) [16];
  undefined1 (*pauStack_28) [16];
  undefined1 *puStack_20;
  ushort uStack_18;
  undefined8 uStack_10;
  
  pauStack_30 = *(undefined1 (**) [16])(param_2 + 0x60);
  puStack_20 = *pauStack_30 + *(longlong *)(param_2 + 0x68) + 1;
  auVar1 = *pauStack_30;
  uStack_18 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  uStack_10 = *(undefined8 *)(param_2 + 0x78);
  pauStack_28 = pauStack_30 + 1;
  pdb_1415ed140(param_1,&pauStack_30);
  return param_1;
}

