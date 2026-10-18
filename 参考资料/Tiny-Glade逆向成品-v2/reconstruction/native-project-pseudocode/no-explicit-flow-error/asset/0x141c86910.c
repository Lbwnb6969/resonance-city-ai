// VA 0x141c86910, PDB extent 1058 bytes
// asset::prefab::scan::scan_asset_tree
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/scan.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset::prefab::scan::scan_asset_tree
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/scan.rs
   Extent: 1058 */

undefined8 *
pdb_141c86910(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong *plVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar7 = param_2;
  plVar6 = (longlong *)pdb_140f3bda0();
  if ((char)plVar6[2] == '\x01') {
    uStack_88 = *plVar6;
    lVar7 = plVar6[1];
  }
  else {
    uStack_88 = pdb_140f4fd10();
    *plVar6 = uStack_88;
    plVar6[1] = lVar7;
    *(undefined1 *)(plVar6 + 2) = 1;
  }
  *plVar6 = uStack_88 + 1;
  uVar4 = _UNK_1433a4628;
  uVar3 = _DAT_1433a4620;
  uVar2 = _UNK_1433a4618;
  uVar1 = _DAT_1433a4610;
  uStack_98 = _DAT_1433a4620;
  uStack_90 = _UNK_1433a4628;
  uStack_a8 = _DAT_1433a4610;
  uStack_a0 = _UNK_1433a4618;
  uStack_80 = lVar7;
  plVar6 = (longlong *)pdb_140f3bda0();
  if ((char)plVar6[2] == '\x01') {
    lStack_e8 = *plVar6;
    lVar7 = plVar6[1];
  }
  else {
    lStack_e8 = pdb_140f4fd10();
    *plVar6 = lStack_e8;
    plVar6[1] = lVar7;
    *(undefined1 *)(plVar6 + 2) = 1;
  }
  *plVar6 = lStack_e8 + 1;
  uStack_b8 = (undefined4)uStack_88;
  uStack_b4 = uStack_88._4_4_;
  uStack_b0 = (undefined4)uStack_80;
  uStack_ac = uStack_80._4_4_;
  uStack_c8 = (undefined4)uStack_98;
  uStack_c4 = uStack_98._4_4_;
  uStack_c0 = (undefined4)uStack_90;
  uStack_bc = uStack_90._4_4_;
  uStack_d8 = (undefined4)uStack_a8;
  uStack_d4 = uStack_a8._4_4_;
  uStack_d0 = (undefined4)uStack_a0;
  uStack_cc = uStack_a0._4_4_;
  uStack_120 = 0;
  uStack_118 = 8;
  uStack_110 = 0;
  uStack_108 = uVar1;
  uStack_100 = uVar2;
  uStack_f8 = uVar3;
  uStack_f0 = uVar4;
  lStack_78 = 0;
  pbStack_70 = (byte *)0x8;
  lStack_68 = 0;
  lStack_e0 = lVar7;
  plVar6 = (longlong *)pdb_140f3bda0();
  if ((char)plVar6[2] == '\x01') {
    uStack_88 = *plVar6;
    lVar7 = plVar6[1];
  }
  else {
    uStack_88 = pdb_140f4fd10();
    *plVar6 = uStack_88;
    plVar6[1] = lVar7;
    *(undefined1 *)(plVar6 + 2) = 1;
  }
  *plVar6 = uStack_88 + 1;
  uStack_98 = uVar3;
  uStack_90 = uVar4;
  uStack_a8 = uVar1;
  uStack_a0 = uVar2;
  uStack_80 = lVar7;
  lVar7 = pdb_141c87390(param_2,param_3,&uStack_a8,1,0,&lStack_78,&uStack_120,param_4,param_5);
  if (lVar7 == 0) {
    pdb_140ca7540(&uStack_a8,&uStack_88,0xd8,0x10);
    pbVar5 = pbStack_70;
    param_1[0xe] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0xc] = CONCAT44(uStack_bc,uStack_c0);
    param_1[0xd] = CONCAT44(uStack_b4,uStack_b8);
    param_1[10] = CONCAT44(uStack_cc,uStack_d0);
    param_1[0xb] = CONCAT44(uStack_c4,uStack_c8);
    param_1[8] = lStack_e0;
    param_1[9] = CONCAT44(uStack_d4,uStack_d8);
    param_1[6] = uStack_f0;
    param_1[7] = lStack_e8;
    param_1[4] = uStack_100;
    param_1[5] = uStack_f8;
    param_1[2] = uStack_110;
    param_1[3] = uStack_108;
    *param_1 = uStack_120;
    param_1[1] = uStack_118;
    if (lStack_68 != 0) {
      pbVar8 = pbStack_70 + 8;
      lVar7 = lStack_68;
      do {
        if (*(ulonglong *)(pbVar8 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
        }
        pbVar8 = pbVar8 + 0x20;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lStack_78 != 0) {
      pub_1406abac0(pbVar5,lStack_78 << 5,8);
    }
  }
  else {
    param_1[1] = lVar7;
    *param_1 = 0x8000000000000000;
    pdb_140ca7540(&uStack_a8,&uStack_88,0xd8,0x10);
    pbVar5 = pbStack_70;
    if (lStack_68 != 0) {
      pbVar8 = pbStack_70 + 8;
      lVar7 = lStack_68;
      do {
        if (*(ulonglong *)(pbVar8 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
        }
        pbVar8 = pbVar8 + 0x20;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lStack_78 != 0) {
      pub_1406abac0(pbVar5,lStack_78 << 5,8);
    }
    pdb_14098c530(&uStack_120);
  }
  return param_1;
}

