// VA 0x14084d510, PDB extent 148 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_rope_bridge::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_rope_bridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_rope_bridge::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_rope_bridge.rs
   Extent: 148 */

undefined8 * pdb_14084d510(undefined8 *param_1)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined7 uStack_f;
  
  pdb_1414a8010(&uStack_80,0x67);
  param_1[0xc] = uStack_20;
  param_1[0xd] = uStack_18;
  param_1[8] = uStack_40;
  param_1[9] = uStack_38;
  param_1[6] = uStack_50;
  param_1[7] = uStack_48;
  param_1[4] = uStack_60;
  param_1[5] = uStack_58;
  param_1[2] = uStack_70;
  param_1[3] = uStack_68;
  *param_1 = uStack_80;
  param_1[1] = uStack_78;
  param_1[0xe] = CONCAT71(uStack_f,4);
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = uStack_2c;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_24;
  return param_1;
}

