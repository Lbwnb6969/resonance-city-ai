// VA 0x1409dd9b0, PDB extent 91 bytes
// country_core::resources::raster_stroke::impl$0::fmt<alloc::sync::Arc<slice2$<glam::f32::vec3::Vec3>,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/raster_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::raster_stroke::impl$0::fmt<alloc::sync::Arc<slice2$<glam::f32::vec3::Vec3>,alloc::alloc::Global>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/raster_stroke.rs
   Extent: 91 */

void pdb_1409dd9b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_20 [16];
  
  pdb_140f656a0(auStack_20,param_2,&UNK_1430309cc,0xc);
  uVar1 = pdb_140f63f50(auStack_20,&UNK_1430309d8,0xb,param_1 + 0x14,&UNK_1430307c8);
  pdb_140f640e0(uVar1);
  return;
}

