// VA 0x140b90bc0, PDB extent 252 bytes
// country_core::render::vao::Vao::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::vao::Vao::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
   Extent: 252 */

undefined8
pdb_140b90bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140b90070(&lStack_50,param_3,param_4,param_5,param_6);
  pdb_140b8fec0(param_1,param_2,param_3,pbStack_48,lStack_40);
  if (lStack_40 != 0) {
    pbVar1 = pbStack_48 + 8;
    lVar2 = lStack_40;
    do {
      if (*(ulonglong *)(pbVar1 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar1,*(ulonglong *)(pbVar1 + -8),1);
      }
      pbVar1 = pbVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lStack_50 != 0) {
    pub_1406abac0(pbStack_48,lStack_50 * 0x18,8);
  }
  return param_1;
}

