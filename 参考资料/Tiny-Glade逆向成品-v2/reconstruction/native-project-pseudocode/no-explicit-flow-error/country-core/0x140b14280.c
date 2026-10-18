// VA 0x140b14280, PDB extent 245 bytes
// country_core::resources::terrain_editing::TerrainEditingData::new_stroke
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_editing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::terrain_editing::TerrainEditingData::new_stroke
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_editing.rs
   Extent: 245 */

undefined8 pdb_140b14280(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  longlong *plStack_48;
  code *pcStack_40;
  
  if (*(ulonglong *)(param_1 + 0x38) < 0x3fffff) {
    lVar2 = *(ulonglong *)(param_1 + 0x38) + 1;
    *(longlong *)(param_1 + 0x38) = lVar2;
    pdb_14007ee60();
    pbStack_68 = pub_1406abab0(0xc,4);
    if (pbStack_68 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0xc);
    }
    iStack_54 = (int)lVar2 + -1;
    *(undefined4 *)(pbStack_68 + 8) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)pbStack_68 = *param_2;
    uStack_70 = 1;
    uStack_60 = 1;
    uStack_58 = 0x3ecccccd;
    uStack_50 = 0x40200000;
    pdb_1417b9100(&plStack_48,param_1 + 8,iStack_54,&uStack_70);
    if (!SBORROW8(0,(longlong)plStack_48)) {
      pdb_140b159f0(&plStack_48);
      pcStack_40 = pdb_140f72a40;
      plStack_48 = (longlong *)(param_1 + 0x38);
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1430550a0,&plStack_48,&UNK_143055120);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

