// VA 0x1424e89f0, PDB extent 320 bytes
// turbosloth::asset::impl$25::run_boxed<asset::texture::SourceImageAsset,anyhow::Error,clutter_pack_pipe::ExtractRoughnessChannel>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::run_boxed<asset::texture::SourceImageAsset,anyhow::Error,clutter_pack_pipe::ExtractRoughnessChannel>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 320 */

byte * pdb_1424e89f0(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint7 uStack_37;
  undefined8 uStack_30;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x80,0x10);
  if (pbVar7 != (byte *)0x0) {
    *(ulonglong *)(pbVar7 + 0x70) = (ulonglong)uStack_37 << 8;
    *(undefined8 *)(pbVar7 + 0x78) = uStack_30;
    *(undefined8 *)(pbVar7 + 0x60) = uStack_48;
    *(undefined8 *)(pbVar7 + 0x68) = uStack_40;
    *(undefined8 *)(pbVar7 + 0x50) = uStack_58;
    *(undefined8 *)(pbVar7 + 0x58) = uStack_50;
    *(undefined8 *)(pbVar7 + 0x40) = uStack_68;
    *(undefined8 *)(pbVar7 + 0x48) = uStack_60;
    *(undefined8 *)(pbVar7 + 0x30) = uStack_78;
    *(undefined8 *)(pbVar7 + 0x38) = uStack_70;
    *(undefined8 *)(pbVar7 + 0x20) = uVar1;
    *(undefined8 *)(pbVar7 + 0x28) = uVar2;
    *(undefined8 *)(pbVar7 + 0x10) = uVar5;
    *(undefined8 *)(pbVar7 + 0x18) = uVar6;
    *(undefined8 *)pbVar7 = uVar3;
    *(undefined8 *)(pbVar7 + 8) = uVar4;
    pub_1406abac0(param_1,0x10,0x10);
    return pbVar7;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x80);
}

