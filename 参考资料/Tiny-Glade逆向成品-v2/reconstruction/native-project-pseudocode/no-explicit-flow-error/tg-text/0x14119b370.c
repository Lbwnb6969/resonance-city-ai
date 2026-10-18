// VA 0x14119b370, PDB extent 822 bytes
// tg_text::TextFragment::new<f32>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::new<f32>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 822 */

longlong pdb_14119b370(longlong param_1,undefined4 param_2,undefined1 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined4 uVar2;
  undefined8 auStack_3a0 [4];
  undefined8 uStack_380;
  undefined1 auStack_368 [320];
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_78 = param_4;
  lStack_68 = param_4;
  uVar2 = pdb_140cb5910(param_2);
  uStack_70 = uVar2;
  uStack_6c = param_2;
  lVar1 = pdb_140cb8d90(lStack_68 + 0x10,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff);
  if (lVar1 != 0) {
    pdb_140cb8d70(&uStack_90,lVar1,&uStack_70);
    pdb_140cc65a0(&uStack_200,uStack_80,uStack_7c);
    pub_142e32760(auStack_368,&uStack_200,0x140);
    uStack_228 = 0;
    auStack_3a0[0] = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 4;
    uStack_380 = 0x8000000000000000;
    uStack_200 = 0;
    uStack_1f8 = uStack_90;
    uStack_1f0 = uStack_88;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0x400019000000000;
    pdb_140cb9650(&uStack_c0,&uStack_200);
    *(undefined8 *)(param_1 + 0x1e8) = 0x8000000000000000;
    pub_142e32760(param_1,auStack_3a0,0x1a0);
    *(undefined1 *)(param_1 + 0x254) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 8;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x200) = uStack_c0;
    *(undefined8 *)(param_1 + 0x208) = uStack_b8;
    *(undefined8 *)(param_1 + 0x210) = uStack_b0;
    *(undefined8 *)(param_1 + 0x218) = uStack_a8;
    *(undefined8 *)(param_1 + 0x220) = uStack_a0;
    *(undefined8 *)(param_1 + 0x228) = uStack_98;
    *(undefined4 *)(param_1 + 0x248) = 0x7f7fffff;
    *(undefined1 *)(param_1 + 0x256) = 5;
    *(undefined8 *)(param_1 + 0x24c) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 4;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 4;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(longlong *)(param_1 + 0x230) = lStack_68;
    *(undefined1 *)(param_1 + 0x255) = param_3;
    *(undefined4 *)(param_1 + 0x240) = uVar2;
    *(undefined4 *)(param_1 + 0x244) = param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14329fbf8);
}

