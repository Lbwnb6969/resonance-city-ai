// VA 0x140a93b10, PDB extent 483 bytes
// country_core::render::render_config::impl$9::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::render_config::impl$9::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 483 */

undefined8 * pdb_140a93b10(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_58 = 0;
  uStack_50 = 1;
  uStack_48 = 0;
  uStack_70 = 0x60000020;
  puStack_78 = &UNK_1430451f8;
  puStack_80 = &uStack_58;
  cVar2 = pdb_140e93d50(param_2 + 0x58,&puStack_80);
  uVar1 = uStack_48;
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143045228,0x37,&uStack_39,&UNK_1430452e8,&UNK_1430452d0);
  }
  uStack_68 = uStack_58;
  uStack_60 = uStack_50;
  uStack_58 = 0;
  uStack_50 = 1;
  uStack_48 = 0;
  uStack_70 = 0x60000020;
  puStack_78 = &UNK_1430451f8;
  puStack_80 = &uStack_58;
  cVar2 = pdb_140eaccb0(param_2 + 0x78,&puStack_80);
  if (cVar2 == '\0') {
    param_1[2] = uStack_48;
    *param_1 = uStack_58;
    param_1[1] = uStack_50;
    param_1[3] = uStack_68;
    param_1[4] = uStack_60;
    param_1[5] = uVar1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143045228,0x37,&uStack_39,&UNK_1430452e8,&UNK_1430452d0);
}

