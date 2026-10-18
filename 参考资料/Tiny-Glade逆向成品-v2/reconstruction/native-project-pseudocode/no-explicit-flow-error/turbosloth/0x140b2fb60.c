// VA 0x140b2fb60, PDB extent 309 bytes
// turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::mod_icons::BakeModClutterIcon>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::mod_icons::BakeModClutterIcon>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 309 */

byte * pdb_140b2fb60(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_278 = *(undefined8 *)param_1;
  uStack_270 = *(undefined8 *)(param_1 + 8);
  uStack_268 = *(undefined8 *)(param_1 + 0x10);
  uStack_260 = *(undefined8 *)(param_1 + 0x18);
  uStack_258 = *(undefined4 *)(param_1 + 0x20);
  uStack_254 = *(undefined4 *)(param_1 + 0x24);
  uStack_250 = *(undefined4 *)(param_1 + 0x28);
  uStack_24c = *(undefined4 *)(param_1 + 0x2c);
  uStack_248 = *(undefined4 *)(param_1 + 0x30);
  uStack_244 = *(undefined4 *)(param_1 + 0x34);
  uStack_240 = *(undefined4 *)(param_1 + 0x38);
  uStack_23c = *(undefined4 *)(param_1 + 0x3c);
  uStack_238 = *param_2;
  uStack_234 = param_2[1];
  uStack_230 = param_2[2];
  uStack_22c = param_2[3];
  uStack_228 = param_2[4];
  uStack_224 = param_2[5];
  uStack_220 = param_2[6];
  uStack_21c = param_2[7];
  uStack_38 = 0;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x248,8);
  if (pbVar1 != (byte *)0x0) {
    pub_142e32760(pbVar1,&uStack_278,0x248);
    pub_1406abac0(param_1,0x40,8);
    return pbVar1;
  }
  pbStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x248);
}

