// VA 0x140ab4590, PDB extent 1002 bytes
// country_core::startup::swap_replacement_mods::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::swap_replacement_mods::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 1002 */

undefined8 * pdb_140ab4590(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = pdb_1416929c0(param_2);
  uVar4 = pdb_14168cc00(param_2);
  lVar1 = param_2 + 0x38;
  lVar2 = param_2 + 0x5a0;
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324b90;
  uStack_84 = _UNK_143324b94;
  uStack_80 = _UNK_143324b98;
  uStack_7c = _UNK_143324b9c;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar5 = pdb_1416d7ca0(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143325290;
  uStack_84 = _UNK_143325294;
  uStack_80 = _UNK_143325298;
  uStack_7c = _UNK_14332529c;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar6 = pdb_1416d0160(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143325450;
  uStack_84 = _UNK_143325454;
  uStack_80 = _UNK_143325458;
  uStack_7c = _UNK_14332545c;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar7 = pdb_1416d3420(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324d80;
  uStack_84 = _UNK_143324d84;
  uStack_80 = _UNK_143324d88;
  uStack_7c = _UNK_143324d8c;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar8 = pdb_1416da0e0(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324ab0;
  uStack_84 = _UNK_143324ab4;
  uStack_80 = _UNK_143324ab8;
  uStack_7c = _UNK_143324abc;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar9 = pdb_1416cbc80(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  uVar10 = pdb_1416ac630(param_2);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  return param_1;
}

