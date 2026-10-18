// VA 0x140cf78f0, PDB extent 415 bytes
// clutter_icon_pipe::create_gpu_bake_resources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_icon_pipe::create_gpu_bake_resources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 415 */

undefined8 * pdb_140cf78f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_178 [16];
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_6e = 0;
  uStack_72 = 0;
  uStack_70 = 0;
  uStack_88 = 8;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  lStack_a8 = -0x8000000000000000;
  pdb_140e129b0(auStack_178,&lStack_a8);
  uStack_21 = 1;
  pdb_141d63530(&lStack_f8,auStack_178);
  if (lStack_f8 == 0x18) {
    uStack_38 = uStack_108;
    uStack_30 = uStack_100;
    uStack_48 = uStack_118;
    uStack_40 = uStack_110;
    uStack_58 = uStack_128;
    uStack_50 = uStack_120;
    uStack_68 = uStack_138;
    uStack_60 = uStack_130;
    uStack_78 = uStack_148;
    uStack_74 = (undefined2)uStack_144;
    uStack_72 = (undefined2)((uint)uStack_144 >> 0x10);
    uStack_70 = (undefined2)uStack_140;
    uStack_6e = (undefined1)((uint)uStack_140 >> 0x10);
    uStack_6d = (undefined1)((uint)uStack_140 >> 0x18);
    uStack_6c = uStack_13c;
    uStack_80 = uStack_150;
    uStack_7c = (undefined2)uStack_14c;
    uStack_7a = (undefined2)((uint)uStack_14c >> 0x10);
    uStack_98 = uStack_168;
    uStack_94 = uStack_164;
    uStack_90 = uStack_160;
    uStack_8c = uStack_15c;
    uStack_21 = 0;
    pdb_140cf8260(param_1,uStack_f0,&lStack_a8,0);
  }
  else {
    uStack_78 = uStack_c8;
    uStack_74 = (undefined2)uStack_c4;
    uStack_72 = (undefined2)((uint)uStack_c4 >> 0x10);
    uStack_70 = (undefined2)uStack_c0;
    uStack_6e = (undefined1)((uint)uStack_c0 >> 0x10);
    uStack_6d = (undefined1)((uint)uStack_c0 >> 0x18);
    uStack_6c = uStack_bc;
    uStack_80 = uStack_d0;
    uStack_7c = (undefined2)uStack_cc;
    uStack_7a = (undefined2)((uint)uStack_cc >> 0x10);
    uStack_98 = uStack_e8;
    uStack_94 = uStack_e4;
    uStack_90 = uStack_e0;
    uStack_8c = uStack_dc;
    lStack_a8 = lStack_f8;
    uStack_a0 = uStack_f0;
    uStack_21 = 1;
    uVar1 = pdb_142df8100(&lStack_a8);
    param_1[1] = uVar1;
    *param_1 = 2;
    pdb_141d535d0(auStack_178);
  }
  return param_1;
}

