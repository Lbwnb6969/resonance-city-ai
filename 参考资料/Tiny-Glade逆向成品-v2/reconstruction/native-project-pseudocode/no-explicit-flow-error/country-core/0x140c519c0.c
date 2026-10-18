// VA 0x140c519c0, PDB extent 429 bytes
// country_core::resources::gpu_lut::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gpu_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gpu_lut::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gpu_lut.rs
   Extent: 429 */

void pdb_140c519c0(undefined8 param_1,undefined8 param_2)

{
  longlong lStack_60;
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lStack_60 = 0;
  puStack_58 = (undefined4 *)0x8;
  uStack_50 = 0;
  uStack_48 = 1;
  uStack_40 = (undefined4 *)&UNK_143057c88;
  uStack_38 = 1;
  uStack_30 = &UNK_143057cb8;
  uStack_28 = 0;
  pdb_142d7ede0(&lStack_60);
  *(ulonglong *)(puStack_58 + 8) = CONCAT71(uStack_27,uStack_28);
  puStack_58[4] = (undefined4)uStack_38;
  puStack_58[5] = uStack_38._4_4_;
  puStack_58[6] = (undefined4)uStack_30;
  puStack_58[7] = uStack_30._4_4_;
  *puStack_58 = (undefined4)uStack_48;
  puStack_58[1] = uStack_48._4_4_;
  puStack_58[2] = (undefined4)uStack_40;
  puStack_58[3] = uStack_40._4_4_;
  uStack_50 = 1;
  uStack_48 = 1;
  uStack_40 = (undefined4 *)&UNK_143057ce8;
  uStack_38 = 1;
  uStack_30 = &UNK_143057d18;
  uStack_28 = 0;
  if (lStack_60 == 1) {
    pdb_142d7ede0(&lStack_60);
  }
  *(ulonglong *)(puStack_58 + 0x12) = CONCAT71(uStack_27,uStack_28);
  *(undefined8 *)(puStack_58 + 0xe) = uStack_38;
  *(undefined **)(puStack_58 + 0x10) = uStack_30;
  *(longlong *)(puStack_58 + 10) = uStack_48;
  *(undefined4 **)(puStack_58 + 0xc) = uStack_40;
  uStack_50 = 2;
  uStack_48 = lStack_60;
  uStack_40 = puStack_58;
  uStack_38 = 2;
  uStack_19 = 0;
  pdb_141900cd0(param_2,&uStack_48);
  return;
}

