// VA 0x140948130, PDB extent 1678 bytes
// country_core::render::nani::buffers::nani_calculate_draw_list_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/buffers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::buffers::nani_calculate_draw_list_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/buffers.rs
   Extent: 1678 */

void pdb_140948130(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iStack_d0;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  byte bStack_55;
  int iStack_54;
  int iStack_50;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_78 = 0;
  lStack_70 = 4;
  lStack_68 = 0;
  lStack_90 = 0;
  lStack_88 = 4;
  lStack_80 = 0;
  lStack_a8 = 0;
  lStack_a0 = 4;
  lStack_98 = 0;
  lStack_c0 = 0;
  lStack_b8 = 4;
  lStack_b0 = 0;
  lStack_60 = 0;
  iStack_54 = 0;
  iVar8 = 0;
  iStack_50 = 0;
  iVar9 = 0;
  do {
    lVar4 = lStack_68;
    uVar1 = *(ulonglong *)(param_2 + lStack_60 * 8);
    if (lStack_68 == lStack_78) {
      pdb_142db0990(&lStack_78);
    }
    lVar3 = lStack_80;
    uVar7 = (uint)((uVar1 & 0x1f) != 0);
    iStack_d0 = (int)uVar1;
    uVar11 = uVar7 * 0x20 + iStack_d0;
    uVar12 = uVar11 & 0xffffffe0;
    *(int *)(lStack_70 + lVar4 * 4) = iStack_54;
    lStack_68 = lVar4 + 1;
    uVar10 = uVar12;
    if ((DAT_143cb2ce9 & 1) != 0) {
      uVar10 = 0x400;
    }
    if (1 < (byte)lStack_60) {
      uVar10 = 0x400;
    }
    if (DAT_143cb2ce8 != '\0') {
      uVar10 = uVar12;
    }
    if (lStack_80 == lStack_90) {
      pdb_142db0990(&lStack_90);
    }
    lVar4 = lStack_98;
    cVar2 = DAT_143cb2ce8;
    uVar7 = (int)(uVar1 >> 5) + uVar7;
    lStack_80 = lVar3 + 1;
    uVar6 = uVar7;
    if ((DAT_143cb2ce9 & 1) != 0) {
      uVar6 = 0;
    }
    if (1 < (byte)lStack_60) {
      uVar6 = 0;
    }
    *(int *)(lStack_88 + lVar3 * 4) = iVar8;
    if (cVar2 == '\x01') {
      uVar6 = uVar7;
    }
    if (lStack_98 == lStack_a8) {
      pdb_142db0990(&lStack_a8);
    }
    lVar3 = lStack_b0;
    *(int *)(lStack_a0 + lVar4 * 4) = iStack_50;
    lStack_98 = lVar4 + 1;
    bStack_49 = (uVar6 & 0x3ff) != 0;
    if (lStack_b0 == lStack_c0) {
      pdb_142db0990(&lStack_c0);
    }
    lVar4 = lStack_68;
    *(int *)(lStack_b8 + lVar3 * 4) = iVar9;
    lStack_b0 = lVar3 + 1;
    if (lStack_68 == lStack_78) {
      pdb_142db0990(&lStack_78);
    }
    lVar3 = lStack_80;
    iStack_54 = iStack_54 + iStack_d0;
    *(int *)(lStack_70 + lVar4 * 4) = iStack_54;
    lStack_68 = lVar4 + 1;
    uVar5 = uVar12;
    if ((DAT_143cb2ce9 & 1) != 0) {
      uVar5 = 0x400;
    }
    if (1 < (byte)lStack_60) {
      uVar5 = 0x400;
    }
    if (DAT_143cb2ce8 != '\0') {
      uVar5 = uVar11 & 0xffffffe0;
    }
    if (lStack_80 == lStack_90) {
      pdb_142db0990(&lStack_90);
    }
    lVar4 = lStack_98;
    cVar2 = DAT_143cb2ce8;
    lStack_80 = lVar3 + 1;
    uVar11 = uVar7;
    if ((DAT_143cb2ce9 & 1) != 0) {
      uVar11 = 0;
    }
    if (1 < (byte)lStack_60) {
      uVar11 = 0;
    }
    *(uint *)(lStack_88 + lVar3 * 4) = uVar10 + iVar8;
    if (cVar2 == '\x01') {
      uVar11 = uVar7;
    }
    if (lStack_98 == lStack_a8) {
      pdb_142db0990(&lStack_a8);
    }
    lVar3 = lStack_b0;
    iStack_50 = iStack_50 + uVar6;
    *(int *)(lStack_a0 + lVar4 * 4) = iStack_50;
    lStack_98 = lVar4 + 1;
    bStack_55 = (uVar11 & 0x3ff) != 0;
    if (lStack_b0 == lStack_c0) {
      pdb_142db0990(&lStack_c0);
    }
    lVar4 = lStack_68;
    iVar9 = (uVar6 >> 10) + iVar9 + (uint)bStack_49;
    *(int *)(lStack_b8 + lVar3 * 4) = iVar9;
    lStack_b0 = lVar3 + 1;
    if (lStack_68 == lStack_78) {
      pdb_142db0990(&lStack_78);
    }
    lVar3 = lStack_80;
    iStack_54 = iStack_54 + iStack_d0;
    *(int *)(lStack_70 + lVar4 * 4) = iStack_54;
    lStack_68 = lVar4 + 1;
    uVar6 = uVar12;
    if ((DAT_143cb2ce9 & 1) != 0) {
      uVar6 = 0x400;
    }
    if (1 < (byte)lStack_60) {
      uVar6 = 0x400;
    }
    if (DAT_143cb2ce8 != '\0') {
      uVar6 = uVar12;
    }
    if (lStack_80 == lStack_90) {
      pdb_142db0990(&lStack_90);
    }
    lVar4 = lStack_98;
    cVar2 = DAT_143cb2ce8;
    iVar8 = uVar5 + uVar10 + iVar8;
    lStack_80 = lVar3 + 1;
    uVar10 = uVar7;
    if ((DAT_143cb2ce9 & 1) != 0) {
      uVar10 = 0;
    }
    if (1 < (byte)lStack_60) {
      uVar10 = 0;
    }
    *(int *)(lStack_88 + lVar3 * 4) = iVar8;
    if (cVar2 == '\x01') {
      uVar10 = uVar7;
    }
    if (lStack_98 == lStack_a8) {
      pdb_142db0990(&lStack_a8);
    }
    lVar3 = lStack_b0;
    iStack_50 = iStack_50 + uVar11;
    *(int *)(lStack_a0 + lVar4 * 4) = iStack_50;
    lStack_98 = lVar4 + 1;
    bStack_49 = (uVar10 & 0x3ff) != 0;
    if (lStack_b0 == lStack_c0) {
      pdb_142db0990(&lStack_c0);
    }
    lVar4 = lStack_68;
    iVar9 = (uVar11 >> 10) + iVar9 + (uint)bStack_55;
    *(int *)(lStack_b8 + lVar3 * 4) = iVar9;
    lStack_b0 = lVar3 + 1;
    if (lStack_68 == lStack_78) {
      pdb_142db0990(&lStack_78);
    }
    lVar3 = lStack_80;
    iStack_54 = iStack_54 + iStack_d0;
    *(int *)(lStack_70 + lVar4 * 4) = iStack_54;
    lStack_68 = lVar4 + 1;
    uVar11 = uVar12;
    if ((DAT_143cb2ce9 & 1) != 0) {
      uVar11 = 0x400;
    }
    if (1 < (byte)lStack_60) {
      uVar11 = 0x400;
    }
    if (DAT_143cb2ce8 != '\0') {
      uVar11 = uVar12;
    }
    if (lStack_80 == lStack_90) {
      pdb_142db0990(&lStack_90);
    }
    lVar4 = lStack_98;
    cVar2 = DAT_143cb2ce8;
    iVar8 = uVar6 + iVar8;
    lStack_80 = lVar3 + 1;
    uVar12 = uVar7;
    if ((DAT_143cb2ce9 & 1) != 0) {
      uVar12 = 0;
    }
    if (1 < (byte)lStack_60) {
      uVar12 = 0;
    }
    *(int *)(lStack_88 + lVar3 * 4) = iVar8;
    if (cVar2 == '\x01') {
      uVar12 = uVar7;
    }
    if (lStack_98 == lStack_a8) {
      pdb_142db0990(&lStack_a8);
    }
    lVar3 = lStack_b0;
    iStack_50 = iStack_50 + uVar10;
    *(int *)(lStack_a0 + lVar4 * 4) = iStack_50;
    lStack_98 = lVar4 + 1;
    if (lStack_b0 == lStack_c0) {
      pdb_142db0990(&lStack_c0);
    }
    iVar9 = (uVar10 >> 10) + iVar9 + (uint)bStack_49;
    iStack_54 = iStack_54 + iStack_d0;
    iVar8 = uVar11 + iVar8;
    iStack_50 = iStack_50 + uVar12;
    *(int *)(lStack_b8 + lVar3 * 4) = iVar9;
    lStack_b0 = lVar3 + 1;
    iVar9 = (uVar12 >> 10) + iVar9 + (uint)((uVar12 & 0x3ff) != 0);
    lStack_60 = lStack_60 + 1;
  } while ((char)lStack_60 != '\x1d');
  param_1[2] = lStack_68;
  *param_1 = lStack_78;
  param_1[1] = lStack_70;
  param_1[5] = lStack_80;
  param_1[3] = lStack_90;
  param_1[4] = lStack_88;
  param_1[6] = lStack_a8;
  param_1[7] = lStack_a0;
  param_1[8] = lStack_98;
  param_1[9] = lStack_c0;
  param_1[10] = lStack_b8;
  param_1[0xb] = lStack_b0;
  *(int *)(param_1 + 0xc) = iStack_54;
  *(int *)((longlong)param_1 + 100) = iVar8;
  *(int *)(param_1 + 0xd) = iStack_50;
  *(int *)((longlong)param_1 + 0x6c) = iVar9;
  return;
}

