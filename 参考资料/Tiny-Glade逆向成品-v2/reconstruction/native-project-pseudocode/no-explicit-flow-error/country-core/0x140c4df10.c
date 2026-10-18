// VA 0x140c4df10, PDB extent 527 bytes
// country_core::systems::audio::wall_group_move_audio::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_group_move_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::wall_group_move_audio::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_group_move_audio.rs
   Extent: 527 */

undefined8 * pdb_140c4df10(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x38;
  param_2 = param_2 + 0x5a0;
  lStack_60 = 0;
  pbStack_58 = (byte *)0x8;
  uStack_50 = 0;
  uStack_78 = _DAT_143325430;
  uStack_74 = _UNK_143325434;
  uStack_70 = _UNK_143325438;
  uStack_6c = _UNK_14332543c;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  uVar2 = pdb_1416cf680(&lStack_60,&uStack_78);
  if (lStack_60 != 0) {
    pub_1406abac0(pbStack_58,lStack_60 << 3,8);
  }
  lStack_60 = 0;
  pbStack_58 = (byte *)0x8;
  uStack_50 = 0;
  uStack_78 = _DAT_143324f00;
  uStack_74 = _UNK_143324f04;
  uStack_70 = _UNK_143324f08;
  uStack_6c = _UNK_143324f0c;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  uVar3 = pdb_1416d3f00(&lStack_60,&uStack_78);
  if (lStack_60 != 0) {
    pub_1406abac0(pbStack_58,lStack_60 << 3,8);
  }
  lStack_60 = 0;
  pbStack_58 = (byte *)0x8;
  uStack_50 = 0;
  uStack_78 = _DAT_1433252f0;
  uStack_74 = _UNK_1433252f4;
  uStack_70 = _UNK_1433252f8;
  uStack_6c = _UNK_1433252fc;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  uVar4 = pdb_1416cc3c0(&lStack_60,&uStack_78);
  if (lStack_60 != 0) {
    pub_1406abac0(pbStack_58,lStack_60 << 3,8);
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  return param_1;
}

