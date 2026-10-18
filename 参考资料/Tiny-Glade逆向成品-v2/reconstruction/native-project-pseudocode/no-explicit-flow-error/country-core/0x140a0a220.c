// VA 0x140a0a220, PDB extent 70 bytes
// country_core::resources::roofs::roof_trigger_volume::RoofTriggerVolume::triangles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_trigger_volume::RoofTriggerVolume::triangles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_trigger_volume.rs
   Extent: 70 */

longlong * pdb_140a0a220(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    *param_1 = lVar2;
    param_1[1] = lVar2 + lVar1 * 0x24;
    *(undefined4 *)(param_1 + 2) = param_3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1430358b8,0x2c,&UNK_1430358e8);
}

