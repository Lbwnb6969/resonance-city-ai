// VA 0x1409069e0, PDB extent 1287 bytes
// country_core::resources::world_raster_defs::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::world_raster_defs::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 1287 */

undefined8 * pdb_1409069e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  param_2 = param_2 + 0x5a0;
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324ef0;
  uStack_84 = _UNK_143324ef4;
  uStack_80 = _UNK_143324ef8;
  uStack_7c = _UNK_143324efc;
  lStack_58 = lVar1;
  lStack_50 = param_2;
  uVar2 = pdb_1416d5c00(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324a00;
  uStack_84 = _UNK_143324a04;
  uStack_80 = _UNK_143324a08;
  uStack_7c = _UNK_143324a0c;
  lStack_58 = lVar1;
  lStack_50 = param_2;
  uVar3 = pdb_1416db300(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_1433248f0;
  uStack_84 = _UNK_1433248f4;
  uStack_80 = _UNK_1433248f8;
  uStack_7c = _UNK_1433248fc;
  lStack_58 = lVar1;
  lStack_50 = param_2;
  uVar4 = pdb_1416ea980(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143325520;
  uStack_84 = _UNK_143325524;
  uStack_80 = _UNK_143325528;
  uStack_7c = _UNK_14332552c;
  lStack_58 = lVar1;
  lStack_50 = param_2;
  uVar5 = pdb_1416d49e0(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324f70;
  uStack_84 = _UNK_143324f74;
  uStack_80 = _UNK_143324f78;
  uStack_7c = _UNK_143324f7c;
  lStack_58 = lVar1;
  lStack_50 = param_2;
  uVar6 = pdb_1416e9b00(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324d20;
  uStack_84 = _UNK_143324d24;
  uStack_80 = _UNK_143324d28;
  uStack_7c = _UNK_143324d2c;
  lStack_58 = lVar1;
  lStack_50 = param_2;
  uVar7 = pdb_1416e4ee0(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143325440;
  uStack_84 = _UNK_143325444;
  uStack_80 = _UNK_143325448;
  uStack_7c = _UNK_14332544c;
  lStack_58 = lVar1;
  lStack_50 = param_2;
  uVar8 = pdb_1416dcc60(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  return param_1;
}

