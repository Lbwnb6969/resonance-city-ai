// VA 0x140c24f90, PDB extent 910 bytes
// country_core::systems::grass2::populate_grass2_ssbos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::grass2::populate_grass2_ssbos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
   Extent: 910 */

void pdb_140c24f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_48;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pbStack_98 = *(byte **)(param_4 + 0x68);
  pbStack_90 = pbStack_98 + *(longlong *)(param_4 + 0x70) * 0x48;
  uStack_88 = 0;
  uStack_70 = 0;
  lStack_a0 = 1;
  uStack_58 = 0;
  uStack_48 = 0;
  pdb_1415fe990(&lStack_b8,&lStack_a0);
  pbStack_38 = pbStack_b0;
  pdb_141530420(param_2,param_1,pbStack_b0,uStack_a8);
  if (lStack_b8 != 0) {
    pub_1406abac0(pbStack_38,lStack_b8 << 2,4);
  }
  pdb_140b246e0(&lStack_a0,param_4);
  pbStack_38 = pbStack_98;
  pdb_141531c80(param_2,param_1,pbStack_98,pbStack_90);
  if (lStack_a0 != 0) {
    pub_1406abac0(pbStack_38,lStack_a0 << 2,4);
  }
  pdb_140b245e0(&lStack_a0,param_4);
  pbStack_38 = pbStack_98;
  pdb_141532d00(param_2,param_1,pbStack_98,pbStack_90);
  if (lStack_a0 != 0) {
    pub_1406abac0(pbStack_38,lStack_a0 << 2,4);
  }
  pdb_140b21f20(&lStack_a0,param_4);
  pbStack_38 = pbStack_98;
  pdb_141531060(param_2,param_1,pbStack_98,pbStack_90);
  if (lStack_a0 != 0) {
    pub_1406abac0(pbStack_38,lStack_a0 * 0x14,4);
  }
  pdb_140b24210(&lStack_a0,param_4);
  pbStack_38 = pbStack_98;
  pdb_14152fe00(param_2,param_1,pbStack_98,pbStack_90);
  if (lStack_a0 != 0) {
    pub_1406abac0(pbStack_38,lStack_a0 << 3,4);
  }
  pdb_140b23cd0(&lStack_a0,param_4,param_3);
  pbStack_38 = pbStack_98;
  pdb_141533f60(param_2,param_1,pbStack_98,pbStack_90);
  if (lStack_a0 != 0) {
    pub_1406abac0(pbStack_38,lStack_a0 * 0x2c,4);
  }
  return;
}

