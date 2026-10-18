// VA 0x140a0dec0, PDB extent 291 bytes
// country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_tris
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_tris
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 291 */

longlong * pdb_140a0dec0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430365a8,0x28,&UNK_143036600);
  }
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(lVar1 * 0x48,4);
  if (pbStack_48 != (byte *)0x0) {
    lStack_50 = lVar1 * 2;
    lStack_40 = 0;
    pdb_141b2e260(param_2,param_3,&lStack_50);
    if (lStack_40 != 0) {
      param_1[2] = lStack_40;
      *param_1 = lStack_50;
      param_1[1] = (longlong)pbStack_48;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143036568,0x27,&UNK_1430365e8);
  }
  pdb_142dc7e2a(4,lVar1 * 0x48);
  pcVar2 = (code *)swi(3);
  plVar3 = (longlong *)(*pcVar2)();
  return plVar3;
}

