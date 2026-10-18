// VA 0x140a34930, PDB extent 994 bytes
// country_core::systems::camera_rig::MainCamera::store_parameters
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::MainCamera::store_parameters
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 994 */

uint * pdb_140a34930(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  uVar1 = (uint)*(undefined8 *)(param_2 + 0x138);
  uVar2 = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x138) >> 0x20);
  uVar3 = *(uint *)(param_2 + 0x140);
  if ((0x7f7fffff < (uVar2 & 0x7fffffff) || 0x7f7fffff < (uVar1 & 0x7fffffff)) ||
      0x7f7fffff < (uVar3 & 0x7fffffff)) {
    uVar1 = (uint)_DAT_14303a910;
    uVar2 = (uint)((ulonglong)_DAT_14303a910 >> 0x20);
    uVar3 = 0;
    if (*_DAT_143ca8e90 != 0) {
      uStack_c8 = 0;
      puStack_c0 = &UNK_14303af64;
      uStack_b8 = 0x21;
      uStack_b0 = 0;
      puStack_a8 = &UNK_14303af00;
      uStack_a0 = 0x2d;
      uStack_98 = 1;
      puStack_90 = &UNK_14303af64;
      uStack_88 = 0x21;
      uStack_80 = 0x2a900000001;
      puStack_78 = &UNK_14303af2e;
      uStack_70 = 0x6d;
      pdb_140f332f0(&uStack_c9,&uStack_c8);
    }
  }
  uVar4 = *(uint *)(param_2 + 0x154);
  if ((0x7f7fffff < (uVar4 & 0x7fffffff)) && (uVar4 = 0, *_DAT_143ca8e90 != 0)) {
    uStack_c8 = 0;
    puStack_c0 = &UNK_14303af64;
    uStack_b8 = 0x21;
    uStack_b0 = 0;
    puStack_a8 = &UNK_14303af00;
    uStack_a0 = 0x2d;
    uStack_98 = 1;
    puStack_90 = &UNK_14303af64;
    uStack_88 = 0x21;
    uStack_80 = 0x2b100000001;
    puStack_78 = &UNK_14303af85;
    uStack_70 = 99;
    pdb_140f332f0(&uStack_c9,&uStack_c8);
  }
  uVar5 = *(uint *)(param_2 + 0x150);
  if ((0x7f7fffff < (uVar5 & 0x7fffffff)) && (uVar5 = 0, *_DAT_143ca8e90 != 0)) {
    uStack_c8 = 0;
    puStack_c0 = &UNK_14303af64;
    uStack_b8 = 0x21;
    uStack_b0 = 0;
    puStack_a8 = &UNK_14303af00;
    uStack_a0 = 0x2d;
    uStack_98 = 1;
    puStack_90 = &UNK_14303af64;
    uStack_88 = 0x21;
    uStack_80 = 0x2b900000001;
    puStack_78 = &UNK_14303afb6;
    uStack_70 = 0x67;
    pdb_140f332f0(&uStack_c9,&uStack_c8);
  }
  uVar6 = *(uint *)(param_2 + 400);
  if ((0x7f7fffff < (uVar6 & 0x7fffffff)) && (uVar6 = 0, *_DAT_143ca8e90 != 0)) {
    uStack_c8 = 0;
    puStack_c0 = &UNK_14303af64;
    uStack_b8 = 0x21;
    uStack_b0 = 0;
    puStack_a8 = &UNK_14303af00;
    uStack_a0 = 0x2d;
    uStack_98 = 1;
    puStack_90 = &UNK_14303af64;
    uStack_88 = 0x21;
    uStack_80 = 0x2c100000001;
    puStack_78 = &UNK_14303afe9;
    uStack_70 = 0x85;
    pdb_140f332f0(&uStack_c9,&uStack_c8);
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  *(ulonglong *)(param_1 + 2) = CONCAT44(uVar2,uVar1);
  param_1[4] = uVar3;
  param_1[5] = 0;
  param_1[6] = uVar6;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}

