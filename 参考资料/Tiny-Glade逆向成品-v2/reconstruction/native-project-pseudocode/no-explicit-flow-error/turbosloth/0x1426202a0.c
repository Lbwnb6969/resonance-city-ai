// VA 0x1426202a0, PDB extent 237 bytes
// turbosloth::store::_::impl$0::deserialize<ref_mut$<bincode::de::Deserializer<bincode::de::read::SliceReader,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::_::impl$0::deserialize<ref_mut$<bincode::de::Deserializer<bincode::de::read::SliceReader,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 237 */

undefined8 * pdb_1426202a0(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_30;
  code *pcStack_28;
  undefined1 auStack_20 [8];
  ulonglong uStack_18;
  
  uVar2 = param_2[1];
  if (uVar2 < 4) {
LAB_142620361:
    uVar5 = pdb_141c8a290(0x2500000003);
  }
  else {
    puVar3 = (uint *)*param_2;
    uVar1 = *puVar3;
    uStack_18 = (ulonglong)uVar1;
    *param_2 = (longlong)(puVar3 + 1);
    param_2[1] = uVar2 - 4;
    if (uStack_18 == 0) {
      if (0xf < uVar2 - 4) {
        uVar5 = *(undefined8 *)(puVar3 + 1);
        uVar4 = *(undefined8 *)(puVar3 + 3);
        *param_2 = (longlong)(puVar3 + 5);
        param_2[1] = uVar2 - 0x14;
        param_1[2] = uVar5;
        param_1[3] = uVar4;
        uVar5 = 0;
        goto LAB_142620379;
      }
      goto LAB_142620361;
    }
    uVar5 = 1;
    if (uVar1 == 1) goto LAB_142620379;
    auStack_20[0] = 1;
    puStack_50 = &UNK_143558180;
    puStack_48 = &UNK_143558190;
    puStack_40 = auStack_20;
    pcStack_38 = pdb_140f35c80;
    ppuStack_30 = &puStack_50;
    pcStack_28 = pdb_140236590;
    uVar5 = pdb_14261ffd0(&UNK_143557740,&puStack_40);
  }
  param_1[2] = uVar5;
  uVar5 = 2;
LAB_142620379:
  *param_1 = uVar5;
  param_1[1] = 0;
  return param_1;
}

