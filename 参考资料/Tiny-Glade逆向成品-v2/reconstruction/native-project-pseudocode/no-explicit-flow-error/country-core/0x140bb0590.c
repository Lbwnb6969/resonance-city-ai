// VA 0x140bb0590, PDB extent 1856 bytes
// country_core::systems::wall::eraser::bulldoze_params::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::bulldoze_params::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
   Extent: 1856 */

undefined8 * pdb_140bb0590(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_f0 = pdb_1416ae700(param_2);
  uStack_e8 = pdb_1416b4e20(param_2);
  lVar1 = param_2 + 0x38;
  lVar2 = param_2 + 0x5a0;
  lStack_210 = 0;
  pbStack_208 = (byte *)0x8;
  uStack_200 = 0;
  uStack_78 = CONCAT44(_UNK_143324934,_DAT_143324930);
  uStack_70 = (byte *)CONCAT44(_UNK_14332493c,_UNK_143324938);
  lStack_1f8 = lVar1;
  lStack_1f0 = lVar2;
  uStack_e0 = pdb_1416ec2e0(&lStack_210,&uStack_78);
  if (lStack_210 != 0) {
    pub_1406abac0(pbStack_208,lStack_210 << 3,8);
  }
  lStack_210 = 0;
  pbStack_208 = (byte *)0x8;
  uStack_200 = 0;
  uStack_78 = CONCAT44(_UNK_143324b04,_DAT_143324b00);
  uStack_70 = (byte *)CONCAT44(_UNK_143324b0c,_UNK_143324b08);
  lStack_1f8 = lVar1;
  lStack_1f0 = lVar2;
  uStack_d8 = pdb_1416e8c80(&lStack_210,&uStack_78);
  if (lStack_210 != 0) {
    pub_1406abac0(pbStack_208,lStack_210 << 3,8);
  }
  lStack_210 = 0;
  pbStack_208 = (byte *)0x8;
  uStack_200 = 0;
  uStack_78 = CONCAT44(_UNK_1433252b4,_DAT_1433252b0);
  uStack_70 = (byte *)CONCAT44(_UNK_1433252bc,_UNK_1433252b8);
  lStack_1f8 = lVar1;
  lStack_1f0 = lVar2;
  uStack_d0 = pdb_1416df7e0(&lStack_210,&uStack_78);
  if (lStack_210 != 0) {
    pub_1406abac0(pbStack_208,lStack_210 << 3,8);
  }
  lStack_210 = 0;
  pbStack_208 = (byte *)0x8;
  uStack_200 = 0;
  uStack_78 = CONCAT44(_UNK_1433254f4,_DAT_1433254f0);
  uStack_70 = (byte *)CONCAT44(_UNK_1433254fc,_UNK_1433254f8);
  lStack_1f8 = lVar1;
  lStack_1f0 = lVar2;
  uStack_c8 = pdb_1416d3b60(&lStack_210,&uStack_78);
  if (lStack_210 != 0) {
    pub_1406abac0(pbStack_208,lStack_210 << 3,8);
  }
  lVar8 = param_2;
  pdb_14193b8a0(&lStack_210);
  uStack_c0 = pdb_140c42730(param_2);
  uStack_78 = 0;
  uStack_70 = (byte *)0x8;
  uStack_68 = 0;
  uStack_88 = _DAT_143324950;
  uStack_84 = _UNK_143324954;
  uStack_80 = _UNK_143324958;
  uStack_7c = _UNK_14332495c;
  lStack_b8 = lVar8;
  lStack_60 = lVar1;
  lStack_58 = lVar2;
  uStack_b0 = pdb_1416cd240(&uStack_78,&uStack_88);
  if (uStack_78 != 0) {
    pub_1406abac0(uStack_70,uStack_78 << 3,8);
  }
  uStack_a8 = pdb_14169e090(param_2);
  uStack_a0 = pdb_141694f40(param_2);
  uStack_98 = pdb_141696200(param_2);
  uStack_90 = pdb_141694a90(param_2);
  uVar3 = pdb_14168d0b0(param_2);
  uStack_78 = 0;
  uStack_70 = (byte *)0x8;
  uStack_68 = 0;
  uStack_88 = _DAT_143325060;
  uStack_84 = _UNK_143325064;
  uStack_80 = _UNK_143325068;
  uStack_7c = _UNK_14332506c;
  lStack_60 = lVar1;
  lStack_58 = lVar2;
  uVar4 = pdb_1416d8b20(&uStack_78,&uStack_88);
  if (uStack_78 != 0) {
    pub_1406abac0(uStack_70,uStack_78 << 3,8);
  }
  uVar5 = pdb_1416b6590(param_2);
  uVar6 = pdb_14169b660(param_2);
  uStack_78 = 0;
  uStack_70 = (byte *)0x8;
  uStack_68 = 0;
  uStack_88 = _DAT_1433250a0;
  uStack_84 = _UNK_1433250a4;
  uStack_80 = _UNK_1433250a8;
  uStack_7c = _UNK_1433250ac;
  lStack_60 = lVar1;
  lStack_58 = lVar2;
  uVar7 = pdb_1416e9760(&uStack_78,&uStack_88);
  if (uStack_78 != 0) {
    pub_1406abac0(uStack_70,uStack_78 << 3,8);
  }
  pub_142e32760(param_1 + 2,&lStack_210,0x120);
  *param_1 = uStack_f0;
  param_1[1] = uStack_e8;
  param_1[0x26] = uStack_e0;
  param_1[0x27] = uStack_d8;
  param_1[0x28] = uStack_d0;
  param_1[0x29] = uStack_c8;
  param_1[0x2a] = uStack_c0;
  param_1[0x2b] = lStack_b8;
  param_1[0x2c] = uStack_b0;
  param_1[0x2d] = uStack_a8;
  param_1[0x2e] = uStack_a0;
  param_1[0x2f] = uStack_98;
  param_1[0x30] = uStack_90;
  param_1[0x31] = uVar3;
  param_1[0x32] = uVar4;
  param_1[0x33] = uVar5;
  param_1[0x34] = uVar6;
  param_1[0x35] = uVar7;
  return param_1;
}

