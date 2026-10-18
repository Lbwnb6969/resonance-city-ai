// VA 0x141bed030, PDB extent 1968 bytes
// country_core::systems::save::snapshot::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::snapshot::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
   Extent: 1968 */

undefined8 * pdb_141bed030(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_198 [56];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  lVar1 = param_2 + 0x38;
  lVar2 = param_2 + 0x5a0;
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143325060;
  uStack_84 = _UNK_143325064;
  uStack_80 = _UNK_143325068;
  uStack_7c = _UNK_14332506c;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar4 = pdb_1416d8b20(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143325610;
  uStack_84 = _UNK_143325614;
  uStack_80 = _UNK_143325618;
  uStack_7c = _UNK_14332561c;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar5 = pdb_1416d6340(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  pdb_1409069e0(auStack_198,param_2);
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_1433256c0;
  uStack_84 = _UNK_1433256c4;
  uStack_80 = _UNK_1433256c8;
  uStack_7c = _UNK_1433256cc;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar6 = pdb_1416e0da0(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324950;
  uStack_84 = _UNK_143324954;
  uStack_80 = _UNK_143324958;
  uStack_7c = _UNK_14332495c;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uStack_e8 = pdb_1416cd240(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  uStack_e0 = pdb_1416a2b80(param_2);
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143325310;
  uStack_84 = _UNK_143325314;
  uStack_80 = _UNK_143325318;
  uStack_7c = _UNK_14332531c;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uStack_d8 = pdb_1416d4d80(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_1433250d0;
  uStack_84 = _UNK_1433250d4;
  uStack_80 = _UNK_1433250d8;
  uStack_7c = _UNK_1433250dc;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uStack_d0 = pdb_1416e6840(&lStack_70,&uStack_88);
  puStack_c8 = param_1;
  uStack_c0 = uVar4;
  uStack_b8 = uVar5;
  uStack_b0 = uVar6;
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  uStack_a8 = pdb_14169d730(param_2);
  uStack_a0 = pdb_1416bccb0(param_2);
  uStack_98 = pdb_1416a5a60(param_2);
  uStack_90 = pdb_1416b52d0(param_2);
  uVar4 = pdb_1416b44c0(param_2);
  uVar5 = pdb_1416a7fe0(param_2);
  uVar6 = pdb_1416bd610(param_2);
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_1433253a0;
  uStack_84 = _UNK_1433253a4;
  uStack_80 = _UNK_1433253a8;
  uStack_7c = _UNK_1433253ac;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uVar7 = pdb_1416dfb80(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  uVar8 = pdb_1416a55b0(param_2);
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_1433256e0;
  uStack_84 = _UNK_1433256e4;
  uStack_80 = _UNK_1433256e8;
  uStack_7c = _UNK_1433256ec;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uStack_f0 = pdb_1416e9ea0(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  puVar3 = puStack_c8;
  uStack_160 = uStack_b0;
  uStack_158 = uStack_e8;
  uStack_150 = uStack_e0;
  uStack_148 = uStack_d8;
  uStack_140 = uStack_d0;
  uStack_138 = uStack_a8;
  uStack_130 = uStack_a0;
  uStack_128 = uStack_98;
  uStack_120 = uStack_90;
  *puStack_c8 = uStack_c0;
  puStack_c8[1] = uStack_b8;
  uStack_118 = uVar4;
  uStack_110 = uVar5;
  uStack_108 = uVar6;
  uStack_100 = uVar7;
  uStack_f8 = uVar8;
  pub_142e32760(puStack_c8 + 2,auStack_198,0xb0);
  return puVar3;
}

