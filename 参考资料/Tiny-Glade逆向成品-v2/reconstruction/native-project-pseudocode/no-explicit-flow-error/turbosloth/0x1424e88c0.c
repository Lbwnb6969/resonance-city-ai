// VA 0x1424e88c0, PDB extent 293 bytes
// turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterGlbImport,anyhow::Error,clutter_pack_pipe::ImportClutterGlb>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterGlbImport,anyhow::Error,clutter_pack_pipe::ImportClutterGlb>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 293 */

byte * pdb_1424e88c0(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 uStack_48;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_288 = *(undefined8 *)param_1;
  uStack_280 = *(undefined8 *)(param_1 + 8);
  uStack_278 = *(undefined8 *)(param_1 + 0x10);
  uStack_270 = *(undefined8 *)(param_1 + 0x18);
  uStack_268 = *param_2;
  uStack_264 = param_2[1];
  uStack_260 = param_2[2];
  uStack_25c = param_2[3];
  uStack_258 = param_2[4];
  uStack_254 = param_2[5];
  uStack_250 = param_2[6];
  uStack_24c = param_2[7];
  uStack_48 = 0;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x250,0x10);
  if (pbVar1 != (byte *)0x0) {
    pub_142e32760(pbVar1,&uStack_288,0x250);
    pub_1406abac0(param_1,0x20,8);
    return pbVar1;
  }
  pbStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x250);
}

