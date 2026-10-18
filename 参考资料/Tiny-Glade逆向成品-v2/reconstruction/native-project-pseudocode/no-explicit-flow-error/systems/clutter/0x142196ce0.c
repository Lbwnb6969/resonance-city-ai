// VA 0x142196ce0, PDB extent 1114 bytes
// system_clutter::inter_shape_stitches::detect_intra_shape_corners::WallAndRoofChanges::dirty_walls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::detect_intra_shape_corners::WallAndRoofChanges::dirty_walls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
   Extent: 1114 */

void pdb_142196ce0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uStack_218;
  ulonglong *puStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  ulonglong *puStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  ulonglong *puStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  ulonglong uStack_180;
  ulonglong *puStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  ulonglong *puStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  ulonglong *puStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined8 *puStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  ulonglong *puStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  ulonglong *puStack_70;
  longlong lStack_68;
  longlong lStack_60;
  ulonglong *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_a0 = (ulonglong *)*param_2;
  lVar4 = param_2[1];
  uVar1 = *puStack_a0;
  uVar2 = 0;
  uVar5 = uVar1 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar1 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar5 = uVar2;
  }
  uVar9 = uVar1 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar1 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar9 = uVar2;
  }
  lStack_98 = uVar5 * 0x10 + *(longlong *)(lVar4 + 8);
  uVar1 = *(ulonglong *)(lVar4 + 0x10) - uVar5;
  if (*(ulonglong *)(lVar4 + 0x10) < uVar5) {
    lStack_98 = 8;
    uVar1 = uVar2;
  }
  lStack_80 = uVar9 * 0x10 + *(longlong *)(lVar4 + 0x28);
  uVar5 = *(ulonglong *)(lVar4 + 0x30) - uVar9;
  if (*(ulonglong *)(lVar4 + 0x30) < uVar9) {
    lStack_80 = 8;
    uVar5 = uVar2;
  }
  lStack_78 = uVar5 + uVar1;
  *puStack_a0 = *(longlong *)(lVar4 + 0x40) - lStack_78;
  lStack_88 = uVar1 * 0x10 + lStack_98;
  lStack_90 = uVar5 * 0x10 + lStack_80;
  puStack_70 = (ulonglong *)param_2[5];
  lVar4 = param_2[6];
  uVar1 = *puStack_70;
  uVar5 = uVar1 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar1 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar5 = uVar2;
  }
  uVar9 = uVar1 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar1 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar9 = uVar2;
  }
  lStack_68 = uVar5 * 0x10 + *(longlong *)(lVar4 + 8);
  uVar1 = *(ulonglong *)(lVar4 + 0x10) - uVar5;
  if (*(ulonglong *)(lVar4 + 0x10) < uVar5) {
    lStack_68 = 8;
    uVar1 = uVar2;
  }
  lVar11 = uVar9 * 0x10 + *(longlong *)(lVar4 + 0x28);
  uVar5 = *(ulonglong *)(lVar4 + 0x30) - uVar9;
  if (*(ulonglong *)(lVar4 + 0x30) < uVar9) {
    lVar11 = 8;
    uVar5 = uVar2;
  }
  lStack_60 = uVar5 + uVar1;
  *puStack_70 = *(longlong *)(lVar4 + 0x40) - lStack_60;
  lVar8 = uVar1 * 0x10 + lStack_68;
  lVar6 = uVar5 * 0x10 + lVar11;
  puStack_58 = (ulonglong *)param_2[10];
  lVar4 = param_2[0xb];
  uVar1 = *puStack_58;
  uVar5 = uVar1 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar1 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar5 = uVar2;
  }
  uVar9 = uVar1 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar1 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar9 = uVar2;
  }
  lVar10 = uVar5 * 0x20 + *(longlong *)(lVar4 + 8);
  uVar1 = *(ulonglong *)(lVar4 + 0x10) - uVar5;
  if (*(ulonglong *)(lVar4 + 0x10) < uVar5) {
    lVar10 = 8;
    uVar1 = uVar2;
  }
  lVar7 = uVar9 * 0x20 + *(longlong *)(lVar4 + 0x28);
  uVar5 = *(ulonglong *)(lVar4 + 0x30) - uVar9;
  if (*(ulonglong *)(lVar4 + 0x30) < uVar9) {
    lVar7 = 8;
    uVar5 = uVar2;
  }
  lStack_50 = uVar5 + uVar1;
  *puStack_58 = *(longlong *)(lVar4 + 0x40) - lStack_50;
  lVar12 = uVar1 * 0x20 + lVar10;
  lVar13 = uVar5 * 0x20 + lVar7;
  puStack_e8 = param_1;
  plVar3 = (longlong *)pdb_140f3bda0();
  if ((char)plVar3[2] == '\x01') {
    lStack_b8 = *plVar3;
    lVar4 = plVar3[1];
  }
  else {
    plStack_e0 = plVar3;
    lStack_b8 = pdb_140f4fd10();
    *plStack_e0 = lStack_b8;
    plStack_e0[1] = lVar4;
    *(undefined1 *)(plStack_e0 + 2) = 1;
    plVar3 = plStack_e0;
  }
  *plVar3 = lStack_b8 + 1;
  uStack_c8 = _DAT_14346b690;
  uStack_c0 = _UNK_14346b698;
  uStack_d8 = _DAT_14346b680;
  uStack_d4 = _UNK_14346b684;
  uStack_d0 = _UNK_14346b688;
  uStack_cc = _UNK_14346b68c;
  uStack_218 = 1;
  puStack_210 = puStack_a0;
  lStack_208 = lStack_98;
  lStack_200 = lStack_88;
  lStack_1f8 = lStack_80;
  lStack_1f0 = lStack_90;
  lStack_1e8 = lStack_78;
  puStack_1e0 = puStack_70;
  lStack_1d8 = lStack_68;
  lStack_1b8 = lStack_60;
  puStack_1b0 = puStack_58;
  lStack_188 = lStack_50;
  lStack_1d0 = lVar8;
  lStack_1c8 = lVar11;
  lStack_1c0 = lVar6;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar12;
  lStack_198 = lVar7;
  lStack_190 = lVar13;
  lStack_b0 = lVar4;
  pdb_14219a870(&uStack_180,&uStack_218);
  if (uStack_c8 < uStack_180) {
    pdb_142d974a0(&uStack_d8,uStack_180,&lStack_b8,1);
  }
  uStack_180 = 1;
  puStack_178 = puStack_a0;
  lStack_170 = lStack_98;
  lStack_168 = lStack_88;
  lStack_160 = lStack_80;
  lStack_158 = lStack_90;
  lStack_150 = lStack_78;
  puStack_148 = puStack_70;
  lStack_140 = lStack_68;
  lStack_120 = lStack_60;
  puStack_118 = puStack_58;
  lStack_f0 = lStack_50;
  lStack_138 = lVar8;
  lStack_130 = lVar11;
  lStack_128 = lVar6;
  lStack_110 = lVar10;
  lStack_108 = lVar12;
  lStack_100 = lVar7;
  lStack_f8 = lVar13;
  pdb_1428f41f0(&uStack_180,&uStack_d8);
  puStack_e8[4] = lStack_b8;
  puStack_e8[5] = lStack_b0;
  puStack_e8[2] = uStack_c8;
  puStack_e8[3] = uStack_c0;
  *puStack_e8 = CONCAT44(uStack_d4,uStack_d8);
  puStack_e8[1] = CONCAT44(uStack_cc,uStack_d0);
  return;
}

