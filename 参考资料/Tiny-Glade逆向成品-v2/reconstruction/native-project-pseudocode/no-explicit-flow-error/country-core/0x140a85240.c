// VA 0x140a85240, PDB extent 217 bytes
// country_core::resources::plant_sample_raster::PlantSampleRaster::begin_stroke
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::plant_sample_raster::PlantSampleRaster::begin_stroke
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
   Extent: 217 */

void pdb_140a85240(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x282) != '\0') {
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 8);
      uVar4 = *(ulonglong *)(param_1 + 0x10);
      lVar3 = *(longlong *)(param_1 + 0x20);
      uVar6 = 0;
      do {
        if (uVar4 == uVar6) goto LAB_140a852f5;
        if (*(int *)(lVar3 + uVar6 * 4) != *(int *)(lVar2 + uVar6 * 4)) {
          if (0x3ffff < uVar6) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar6 >> 0xc,0x40,&UNK_143043228);
          }
          puVar1 = (ulonglong *)(param_1 + 0x80 + (uVar6 >> 0xc) * 8);
          *puVar1 = *puVar1 | 1L << ((byte)(uVar6 >> 3) & 0x3f);
          *(undefined1 *)(param_1 + 0x283) = 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
  }
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  if (uVar5 == uVar4) {
    pub_142e32760(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8),uVar5 << 2);
    *(undefined2 *)(param_1 + 0x280) = 0;
    return;
  }
  pdb_142dc85e0(uVar5,uVar4,&UNK_1430433f8);
LAB_140a852f5:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar4);
}

