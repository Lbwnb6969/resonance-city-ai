// VA 0x140a77c00, PDB extent 476 bytes
// country_core::resources::world_raster::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::world_raster::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 476 */

undefined4 * pdb_140a77c00(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  char acStack_90 [8];
  longlong lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte *pbStack_28;
  uint uStack_20;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_20 = (uint)*param_2;
  pbStack_28 = param_2;
  if (uStack_20 != 3) {
    if (*param_2 == 5) {
      uStack_58 = *(undefined8 *)(param_2 + 0x18);
      uStack_68 = *(undefined4 *)(param_2 + 8);
      uStack_64 = *(undefined4 *)(param_2 + 0xc);
      uStack_60 = *(undefined4 *)(param_2 + 0x10);
      uStack_5c = *(undefined4 *)(param_2 + 0x14);
      uStack_19 = 1;
      pdb_141bbe700(param_1,&uStack_68,&UNK_143041ef8,0xf,&UNK_143041f18,2);
      return param_1;
    }
    uStack_68 = *(undefined4 *)param_2;
    uStack_64 = *(undefined4 *)(param_2 + 4);
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    uStack_58 = *(undefined8 *)(param_2 + 0x10);
    uStack_50 = *(undefined4 *)(param_2 + 0x18);
    uStack_4c = *(undefined4 *)(param_2 + 0x1c);
    pdb_142db9380(acStack_90,&uStack_68);
    uVar2 = pdb_142db90e0(acStack_90,&UNK_143041de0,&UNK_143041df0);
    *(undefined8 *)(param_1 + 2) = uVar2;
    *param_1 = 1;
    uStack_19 = 0;
    pdb_140a7a6f0(pbStack_28);
    return param_1;
  }
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_68 = *(undefined4 *)(param_2 + 8);
  uStack_64 = *(undefined4 *)(param_2 + 0xc);
  uStack_60 = *(undefined4 *)(param_2 + 0x10);
  uStack_5c = *(undefined4 *)(param_2 + 0x14);
  uStack_50 = CONCAT31(uStack_50._1_3_,6);
  uStack_19 = 1;
  pdb_141be5c30(acStack_90,&uStack_68);
  if (acStack_90[0] != '\x02') {
    uStack_98 = uStack_70;
    uStack_a8 = uStack_80;
    uStack_a4 = uStack_7c;
    uStack_a0 = uStack_78;
    uStack_9c = uStack_74;
    lStack_b0 = lStack_88;
    if (acStack_90[0] == '\x01') {
      uStack_19 = 1;
      pdb_141beaec0(param_1,&lStack_b0,&UNK_143042170,1);
      return param_1;
    }
    uStack_19 = 1;
    lStack_88 = pdb_140de26b0(&lStack_b0);
    if (lStack_88 == 0) {
      param_1[1] = 0;
      uVar1 = 0;
      goto LAB_140a77d02;
    }
  }
  *(longlong *)(param_1 + 2) = lStack_88;
  uVar1 = 1;
LAB_140a77d02:
  *param_1 = uVar1;
  return param_1;
}

