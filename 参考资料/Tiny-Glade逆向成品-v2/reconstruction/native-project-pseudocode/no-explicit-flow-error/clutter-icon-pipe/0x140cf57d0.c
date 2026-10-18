// VA 0x140cf57d0, PDB extent 192 bytes
// clutter_icon_pipe::icon_sources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_icon_pipe::icon_sources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 192 */

undefined8 * pdb_140cf57d0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(0xb80,8);
  if (pbStack_38 != (byte *)0x0) {
    uStack_30 = 0x2e;
    puStack_48 = &uStack_20;
    uStack_20 = 0;
    uStack_40 = 0;
    pbStack_28 = pbStack_38;
    pdb_141d60e30(&UNK_143087fe0,&UNK_1430885a0,&puStack_48);
    param_1[2] = uStack_20;
    *param_1 = uStack_30;
    param_1[1] = pbStack_28;
    return param_1;
  }
  pdb_142dc7e2a(8,0xb80);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}

