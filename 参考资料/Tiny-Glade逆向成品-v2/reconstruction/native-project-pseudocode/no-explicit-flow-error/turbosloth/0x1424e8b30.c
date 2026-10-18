// VA 0x1424e8b30, PDB extent 309 bytes
// turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::BakeClutterIcon>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::BakeClutterIcon>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 309 */

byte * pdb_1424e8b30(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_48;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_178 = *(undefined8 *)param_1;
  uStack_170 = *(undefined8 *)(param_1 + 8);
  uStack_168 = *(undefined8 *)(param_1 + 0x10);
  uStack_160 = *(undefined8 *)(param_1 + 0x18);
  uStack_158 = *(undefined4 *)(param_1 + 0x20);
  uStack_154 = *(undefined4 *)(param_1 + 0x24);
  uStack_150 = *(undefined4 *)(param_1 + 0x28);
  uStack_14c = *(undefined4 *)(param_1 + 0x2c);
  uStack_148 = *param_2;
  uStack_144 = param_2[1];
  uStack_140 = param_2[2];
  uStack_13c = param_2[3];
  uStack_138 = param_2[4];
  uStack_134 = param_2[5];
  uStack_130 = param_2[6];
  uStack_12c = param_2[7];
  uStack_48 = 0;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x140,0x10);
  if (pbVar1 != (byte *)0x0) {
    pub_142e32760(pbVar1,&uStack_178,0x140);
    pub_1406abac0(param_1,0x30,0x10);
    return pbVar1;
  }
  pbStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x140);
}

