// VA 0x140729610, PDB extent 935 bytes
// toolbar::mei::widgets::impl$26::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$26::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 935 */

undefined8 * pdb_140729610(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  bVar1 = **(byte **)(param_3 + 0x18);
  pdb_14043b7d0(param_2);
  pdb_140a1aa60(&uStack_68);
  pdb_140cb8ed0(&uStack_a0,&uStack_68,(bVar1 & 1) * 0x20 + -0xe0);
  pdb_140cb8f80(&uStack_68,&uStack_a0,_DAT_142e37878);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  pdb_140cb9100(param_2,&uStack_68,uVar2,&UNK_142fa5ea0);
  pbVar5 = (byte *)CONCAT44(uStack_5c,uStack_60);
  if (lStack_58 != 0) {
    pbVar10 = pbVar5 + 8;
    lVar11 = lStack_58;
    do {
      uVar3 = *(ulonglong *)(pbVar10 + -8);
      if ((-1 < (longlong)uVar3) && (uVar3 != 0)) {
        pub_1406abac0(*(byte **)pbVar10,uVar3,1);
      }
      pbVar10 = pbVar10 + 0x20;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (CONCAT44(uStack_64,uStack_68) != 0) {
    pub_1406abac0(pbVar5,CONCAT44(uStack_64,uStack_68) << 5,8);
  }
  pdb_14043b7d0(param_2 + 0x18);
  pdb_140a1aa60(&uStack_a0);
  pdb_140cb9350(&uStack_68,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38));
  lVar11 = lStack_58;
  lStack_78 = lStack_90;
  uStack_70 = CONCAT44(uStack_64,uStack_68);
  uVar6 = CONCAT44(uStack_5c,uStack_60);
  if (lStack_90 == CONCAT44(uStack_9c,uStack_a0)) {
    pdb_142d7e6e0(&uStack_a0);
  }
  lVar4 = CONCAT44(uStack_94,uStack_98);
  lVar8 = lStack_78 * 0x20;
  *(undefined8 *)(lVar4 + lVar8) = uStack_70;
  *(undefined8 *)(lVar4 + 8 + lVar8) = uVar6;
  *(longlong *)(lVar4 + 0x10 + lVar8) = lVar11;
  *(undefined1 *)(lVar4 + 0x18 + lVar8) = 1;
  lStack_78 = lStack_78 + 1;
  uStack_88 = uStack_a0;
  uStack_84 = uStack_9c;
  uStack_80 = uStack_98;
  uStack_7c = uStack_94;
  if (((bVar1 & 1) == 0) && (*(float *)(param_2 + 0x40) < _DAT_142e36f28)) {
    fVar12 = *(float *)(param_2 + 0x40) * _DAT_142f446f0;
    fVar13 = 0.0;
    if (0.0 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar12 = _DAT_142e4fba0;
    if (fVar13 <= _DAT_142e4fba0) {
      fVar12 = fVar13;
    }
    uVar7 = 0;
    if (0.0 <= fVar12) {
      uVar7 = (uint)(longlong)fVar12;
    }
    uVar9 = 0xffffffff;
    if (fVar12 <= _DAT_142e46a48) {
      uVar9 = uVar7;
    }
    uStack_68 = uStack_a0;
    uStack_64 = uStack_9c;
    uStack_60 = uStack_98;
    uStack_5c = uStack_94;
    uStack_49 = 0;
    lStack_58 = lStack_78;
    pdb_140cb8ed0(&uStack_a0,&uStack_68,uVar9 | 0xffffff00);
    uStack_88 = uStack_a0;
    uStack_84 = uStack_9c;
    uStack_80 = uStack_98;
    uStack_7c = uStack_94;
    lStack_78 = lStack_90;
  }
  uStack_49 = 1;
  pdb_140cb9100(param_2 + 0x18,&uStack_88,uVar2,&UNK_142fa5ea0);
  *param_1 = 0;
  param_1[1] = 0;
  pbVar5 = (byte *)CONCAT44(uStack_7c,uStack_80);
  if (lStack_78 != 0) {
    pbVar10 = pbVar5 + 8;
    lVar11 = lStack_78;
    do {
      uVar3 = *(ulonglong *)(pbVar10 + -8);
      if ((-1 < (longlong)uVar3) && (uVar3 != 0)) {
        pub_1406abac0(*(byte **)pbVar10,uVar3,1);
      }
      pbVar10 = pbVar10 + 0x20;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (CONCAT44(uStack_84,uStack_88) != 0) {
    pub_1406abac0(pbVar5,CONCAT44(uStack_84,uStack_88) << 5,8);
  }
  return param_1;
}

